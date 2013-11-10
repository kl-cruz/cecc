/*
 * ecc.c
 *
 * All rights reserved.
 *
 *  Created on: 04-11-2013
 *      Author: Karol Lasończyk
 */

#include "ecc.h"
#include "platform_utils.h"

/**
 * Points addition
 * @param px
 * @param py
 * @param qx
 * @param qy
 * @param sx
 * @param sy
 * @param curve
 * @return
 */
uint32_t ecc_ec_add(bn_uint_t *px, bn_uint_t *py, bn_uint_t *qx, bn_uint_t *qy, bn_uint_t *sx, bn_uint_t *sy, ecc_curve_t *curve)
{
	BN_CREATE_VARIABLE(lambda, px->length);
	BN_CREATE_VARIABLE(tmp, px->length);
	bn_zero(&lambda);
	bn_zero(&tmp);
	//check if exists sense to count this points
	if ((bn_compare(px, &tmp) == 0) && (bn_compare(py, &tmp) == 0)) {
		bn_copy(qx, sx, sx->length);
		bn_copy(qy, sy, sy->length);
		return 1;
	} else if ((bn_compare(qx, &tmp) == 0) && (bn_compare(qy, &tmp) == 0)) {
		bn_copy(px, sx, sx->length);
		bn_copy(py, sy, sy->length);
		return 1;
	}
	//try to use initialized variables
	bn_zero(sx);
	bn_zero(sy);
	bn_field_sub(py, qy, curve->p, sy);
	bn_field_sub(px, qx, curve->p, sx);
	bn_field_inverse(sx, curve->p, &lambda);
	bn_copy(&lambda, sx, sx->length);
	//here is lambda
	bn_field_mul_barret(sy, sx, curve->barret_mi, curve->p, &lambda);
	bn_field_mul_barret(&lambda, &lambda, curve->barret_mi, curve->p, sx);
	bn_field_sub(sx, px, curve->p, sy);
	bn_field_sub(sy, qx, curve->p, sx);
	//count Sy
	bn_field_sub(qx, sx, curve->p, sy);
	bn_field_mul_barret(sy, &lambda, curve->barret_mi, curve->p, &tmp);
	bn_field_sub(&tmp, qy, curve->p, sy);

	return 0;
}

/**
 * Point double
 * @param inx
 * @param iny
 * @param outx
 * @param outy
 * @param curve
 * @return
 */
uint32_t ecc_ec_double(bn_uint_t *inx, bn_uint_t *iny, bn_uint_t *outx, bn_uint_t *outy, ecc_curve_t *curve)
{
	BN_CREATE_VARIABLE(lambda, inx->length);
	BN_CREATE_VARIABLE(tmp, inx->length);
	bn_zero(&tmp);
	bn_zero(outy);
	bn_zero(outx);
	tmp.number[0] = 3;

	bn_field_mul_barret(inx, inx, curve->barret_mi, curve->p, outx); //outx = x^2
	bn_field_mul_barret(&tmp, outx, curve->barret_mi, curve->p, outy); //outy = 3x^2
	bn_field_add(outy, curve->a, curve->p, outx); //outx = 3x^2 + a (eg. a = 3)

	bn_field_add(iny, iny, curve->p, outy);
	bn_field_inverse(outy, curve->p, &tmp); //tmp=1/2*y
	bn_field_mul_barret(outx, &tmp, curve->barret_mi, curve->p, &lambda); //lambda=(3*x^2 - a)/(2*y)
	//counting result x
	bn_field_mul_barret(&lambda, &lambda, curve->barret_mi, curve->p, outx); //outx=lambda^2
	bn_field_sub(outx, inx, curve->p, outy); //outy=lambda^2-x
	bn_field_sub(outy, inx, curve->p, outx); //outx=lambda^2-x-x
	bn_field_sub(inx, outx, curve->p, outy); //outy=x-outx
	bn_field_mul_barret(outy, &lambda, curve->barret_mi, curve->p, &tmp); //tmp=lambda*(x-outx)
	bn_field_sub(&tmp, iny, curve->p, outy);
	return 0;
}

/**
 * Point multiplication
 * @param px Point x
 * @param py Point y
 * @param k factor
 * @param outx output point x
 * @param outy output point y
 * @param curve
 * @return
 */

//TODO This binary algorithm is soooo slooooow...
uint32_t ecc_ec_mult(bn_uint_t *px, bn_uint_t *py, bn_uint_t *k, bn_uint_t *outx, bn_uint_t *outy, ecc_curve_t *curve)
{
	BN_CREATE_VARIABLE(tmpx, outx->length);
	BN_CREATE_VARIABLE(tmpy, outy->length);
	bn_zero(outx);
	bn_zero(outy);
	int32_t i;
	for (i = (k->length * 32) - 1; i >= 0; i--) {
		ecc_ec_double(outx, outy, &tmpx, &tmpy, curve);
		bn_copy(&tmpx, outx, outx->length);
		bn_copy(&tmpy, outy, outy->length);
		if ((((k->number[i / 32]) >> (i % 32)) & 0x01) == 1) {
			ecc_ec_add(outx, outy, px, py, &tmpx, &tmpy, curve); //eccAdd
			bn_copy(&tmpx, outx, outx->length);
			bn_copy(&tmpy, outy, outy->length);
		}
	}
}

