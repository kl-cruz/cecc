/*
 * test_ecc_utils.h
 *
 * Copyright (c) 2014, Sastrion Sp. z o.o.
 * All rights reserved.
 *
 *  Created on: 09-07-2014
 *      Author: Karol Lasończyk
 */

#ifndef TEST_ECC_PROJ_COORDS_H_
#define TEST_ECC_PROJ_COORDS_H_

#include "ecc.h"
#include "ecc_proj_coords.h"
uint32_t test_ecc_proj_coords_double(bn_uint_t *ax, bn_uint_t *ay,
                                     bn_uint_t *expx, bn_uint_t *expy,
                                     ecc_curve_t *curve);

uint32_t test_ecc_proj_coords_add(bn_uint_t *ax, bn_uint_t *ay, bn_uint_t *bx,
                                  bn_uint_t *by, bn_uint_t *expx,
                                  bn_uint_t *expy, ecc_curve_t *curve);

uint32_t test_ecc_proj_coords_mul(bn_uint_t *px, bn_uint_t *py, bn_uint_t *k,
                                  bn_uint_t *expx, bn_uint_t *expy,
                                  ecc_curve_t *curve);

uint32_t test_ecdsa_proj_gen_sig(bn_uint_t *k, bn_uint_t *hash, bn_uint_t *d, bn_uint_t *expr, bn_uint_t *exps, ecc_curve_t *curve);

uint32_t test_ecdsa_proj_val_sig(bn_uint_t *r, bn_uint_t *s, bn_uint_t *hash, bn_uint_t *pub_k_x, bn_uint_t *pub_k_y, ecc_curve_t *curve);

uint32_t test_ecdsa_proj_sig_val_sig(ecc_curve_t *curve);

uint32_t test_gen_proj_key(bn_uint_t *d, bn_uint_t *exp_pub_k_x, bn_uint_t *exp_pub_k_y, ecc_curve_t *curve);

uint32_t test_proj_ecdh(bn_uint_t *d_alice, bn_uint_t *pubx_alice, bn_uint_t *puby_alice, bn_uint_t *d_bob, bn_uint_t *pubx_bob, bn_uint_t *puby_bob,
        ecc_curve_t *curve);

#endif /* TEST_ECC_UTILS_H_ */
