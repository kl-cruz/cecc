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

uint32_t ecc_ec_add(bn_uint_t *px, bn_uint_t *py, bn_uint_t *qx, bn_uint_t *qy, bn_uint_t *sx, bn_uint_t *sy, ecc_curve_t *curve)
{
	BN_CREATE_VARIABLE(lambda, px->length);
	BN_CREATE_VARIABLE(tmp, px->length);
	//try to use initialized variables
	bn_zero(sx);
	bn_zero(sy);
	//info("bn_field_sub(py, qy, curve->p, sy);");
	bn_field_sub(py, qy, curve->p, sy);
	//print_values(4, py, qy, curve->p, sy);
	//info("bn_field_sub(px, qx, curve->p, sx);");
	bn_field_sub(px, qx, curve->p, sx);
	//print_values(4, px, qx, curve->p, sx);
	//info("bn_field_inverse(sx, curve->p, sx);");
	//print_values(2, sx, curve->p);
	bn_field_inverse(sx, curve->p, &lambda);
	bn_copy(&lambda, sx, sx->length);
	//print_values(2, sx, curve->p);
	//here is lambda

	//info("bn_field_mul_barret(sy, sx, curve->barret_mi, curve->p, &lambda);");
	bn_field_mul_barret(sy, sx, curve->barret_mi, curve->p, &lambda);
	//count Sx
	//sx=lambda^2
	//info("bn_field_mul_barret(&lambda, &lambda, curve->barret_mi, curve->p, sx);");
	bn_field_mul_barret(&lambda, &lambda, curve->barret_mi, curve->p, sx);
	//sx=lambda^2-px
	//info("hello sub");
	//print_values(4, sx, px, curve->p, sy);
	bn_field_sub(sx, px, curve->p, sy);
	//print_values(4, sx, px, curve->p, sy);
	//sx=lambda^2-px-qx
	bn_field_sub(sy, qx, curve->p, sx);

	//count Sy
	//sy=qx-sx
	bn_field_sub(qx, sx, curve->p, sy);
	//sy=lambda(qx-sx)
	bn_field_mul_barret(sy, &lambda, curve->barret_mi, curve->p, &tmp);
	//sy=lambda(qx-sx) - qy
	bn_field_sub(&tmp, qy, curve->p, sy);

	return 0;
}

uint32_t ecc_ec_double(bn_uint_t *inx, bn_uint_t *iny, bn_uint_t *outx, bn_uint_t *outy, ecc_curve_t *curve)
{
	BN_CREATE_VARIABLE(lambda, inx->length);

	return 0;
}

