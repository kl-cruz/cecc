/*
 * nist_curves_ops.c
 *
 * Copyright (c) 2014, Sastrion Sp. z o.o.
 * All rights reserved.
 *
 *  Created on: 16-07-2014
 *      Author: Karol Lasończyk
 */


#include "nist_curves_ops.h"

/**
 * @brief Field multiplication with curve specific modular reduction -> result = a*b mod p
 * @param a first argument
 * @param b second argument
 * @param curve curve
 * @param result
 * @return 0
 */
uint32_t nist_mul_curve_mod(bn_uint_t *a, bn_uint_t *b, ecc_curve_t *curve, bn_uint_t *result)
{
    BN_CREATE_VARIABLE(res, result->length * 2);
    bn_mul(a, b, &res);
    curve->mod(&res,result);
    return 0;
}

/**
 * @brief Field square with curve specific modular reduction -> result = a^2 mod p
 * @param a first argument
 * @param curve curve
 * @param result
 * @return 0
 */

uint32_t nist_square_curve_mod(bn_uint_t *a, ecc_curve_t *curve, bn_uint_t *result)
{
    BN_CREATE_VARIABLE(res, result->length * 2);
    bn_square(a, &res);
    curve->mod(&res,result);
    return 0;
}
