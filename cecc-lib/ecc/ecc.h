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
#include "nist_curves.h"

uint32_t ecc_ec_add(bn_uint_t * in1x, bn_uint_t * in1y, bn_uint_t * in2x, bn_uint_t * in2y, bn_uint_t * outx, bn_uint_t * outy, ecc_curve_t *curve);
uint32_t ecc_ec_double(bn_uint_t * inx, bn_uint_t * iny, bn_uint_t * outx, bn_uint_t * outy, ecc_curve_t *curve);

#endif /* ECC_H_ */
