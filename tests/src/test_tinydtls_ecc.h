/*
 * test_microecc.h
 *
 * All rights reserved.
 *
 *  Created on: 28-05-2015
 *      Author: Karol Lasończyk
 */

#ifndef TEST_TINYDTLS_ECC_H_
#define TEST_TINYDTLS_ECC_H_

#include "ecc.h"

uint32_t test_ecdsa_tinydtls_gen_sig(bn_uint_t *k, bn_uint_t *hash, bn_uint_t *d, bn_uint_t *expr, bn_uint_t *exps, ecc_curve_t *curve);
uint32_t test_ecdsa_tinydtls_val_sig(bn_uint_t *r, bn_uint_t *s, bn_uint_t *hash, bn_uint_t *pub_k_x, bn_uint_t *pub_k_y, ecc_curve_t *curve);
uint32_t test_ecdsa_tinydtls_sig_val_sig(ecc_curve_t *curve);
uint32_t test_gen_proj_tinydtls_key(bn_uint_t *d, bn_uint_t *exp_pub_k_x, bn_uint_t *exp_pub_k_y, ecc_curve_t *curve);
uint32_t test_tinydtls_ecdh(bn_uint_t *d_alice, bn_uint_t *pubx_alice, bn_uint_t *puby_alice, bn_uint_t *d_bob, bn_uint_t *pubx_bob, bn_uint_t *puby_bob,
	ecc_curve_t *curve);

#endif /* TEST_TINYDTLS_ECC_H_ */
