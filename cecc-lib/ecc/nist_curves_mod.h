/*
 * nist_curves_mod.h
 *
 * Copyright (c) 2014, Sastrion Sp. z o.o.
 * All rights reserved.
 *
 *  Created on: 16-07-2014
 *      Author: Karol Lasończyk
 */

#ifndef NIST_CURVES_MOD_H_
#define NIST_CURVES_MOD_H_

#include "bignum.h"

void ec_secp256r1_mod(bn_uint_t *a, bn_uint_t *result);

#endif /* NIST_CURVES_MOD_H_ */
