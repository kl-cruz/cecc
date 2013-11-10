/*
 * ecc.h
 *
 * All rights reserved.
 *
 *  Created on: 04-11-2013
 *      Author: Karol Lasończyk
 */

#ifndef ECC_H_
#define ECC_H_
#include "bignum.h"

typedef struct {
	const bn_uint_t *p;
	const bn_uint_t *a;
	const bn_uint_t *b;
	const bn_uint_t *S;
	const bn_uint_t *G;
	const bn_uint_t *n;
	const bn_uint_t *h;
	const bn_uint_t *barret_mi;
} ecc_curve_t;

uint32_t ecc_ec_add(bn_uint_t * in1x, bn_uint_t * in1y, bn_uint_t * in2x, bn_uint_t * in2y, bn_uint_t * outx, bn_uint_t * outy, ecc_curve_t *curve);
uint32_t ecc_ec_double(bn_uint_t * inx, bn_uint_t * iny, bn_uint_t * outx, bn_uint_t * outy, ecc_curve_t *curve);
uint32_t ecc_ec_mult(bn_uint_t *px, bn_uint_t *py, bn_uint_t *k, bn_uint_t *outx, bn_uint_t *outy, ecc_curve_t *curve);


#endif /* ECC_H_ */
