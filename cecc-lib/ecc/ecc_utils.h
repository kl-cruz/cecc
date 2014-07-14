/*
 * ecc_utils.h
 *
 * Copyright (c) 2014, Sastrion Sp. z o.o.
 * All rights reserved.
 *
 *  Created on: 09-07-2014
 *      Author: Karol Lasończyk
 */

#ifndef ECC_UTILS_H_
#define ECC_UTILS_H_

#include "bignum.h"
#include "ecc.h"


uint32_t eccutils_affine_to_projective(bn_uint_t *ax, bn_uint_t *ay, bn_uint_t *px, bn_uint_t *py, bn_uint_t *pz, ecc_curve_t *curve);
uint32_t eccutils_projective_to_affine(bn_uint_t *px, bn_uint_t *py, bn_uint_t *pz, bn_uint_t *ax, bn_uint_t *ay, ecc_curve_t *curve);

#endif /* ECC_UTILS_H_ */
