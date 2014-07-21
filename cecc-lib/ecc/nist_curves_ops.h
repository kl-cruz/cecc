/*
 * nist_curves_ops.h
 *
 * Copyright (c) 2014, Sastrion Sp. z o.o.
 * All rights reserved.
 *
 *  Created on: 16-07-2014
 *      Author: Karol Lasończyk
 */

#ifndef NIST_CURVES_OPS_H_
#define NIST_CURVES_OPS_H_

#include "ecc.h"

uint32_t nist_mul_curve_mod(bn_uint_t *a, bn_uint_t *b, ecc_curve_t *curve, bn_uint_t *result);
uint32_t nist_square_curve_mod(bn_uint_t *a, ecc_curve_t *curve, bn_uint_t *result);


#endif /* NIST_CURVES_OPS_H_ */
