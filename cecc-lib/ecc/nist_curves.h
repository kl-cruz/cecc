/*
 * nist_curves.h
 *
 * Copyright (c) 2013, Sastrion Sp. z o.o.
 * All rights reserved.
 *
 *  Created on: 22-10-2013
 *      Author: Karol Lasończyk
 */

#ifndef NIST_CURVES_H_
#define NIST_CURVES_H_

#include "bignum.h"

typedef struct {
	bn_uint_t p;
	bn_uint_t a;
	bn_uint_t b;
	bn_uint_t G;
	bn_uint_t n;
	bn_uint_t h;
} ecc_curve_t;

#endif /* NIST_CURVES_H_ */
