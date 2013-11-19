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
	bn_uint_t *p;
	bn_uint_t *a;
	bn_uint_t *b;
	bn_uint_t *S;
	bn_uint_t *Gx;
	bn_uint_t *Gy;
	bn_uint_t *n;
	bn_uint_t *h;
	bn_uint_t *barret_mi;
	bn_uint_t *barret_mi_n;
} ecc_curve_t;

typedef void (*ecc_prgn)(bn_uint_t *);
typedef void (*ecc_hash)(bn_uint_t *, bn_uint_t *);

uint32_t ecc_ec_add(bn_uint_t * in1x, bn_uint_t * in1y, bn_uint_t * in2x, bn_uint_t * in2y, bn_uint_t * outx, bn_uint_t * outy, ecc_curve_t *curve);
uint32_t ecc_ec_double(bn_uint_t * inx, bn_uint_t * iny, bn_uint_t * outx, bn_uint_t * outy, ecc_curve_t *curve);
uint32_t ecc_ec_mult(bn_uint_t *px, bn_uint_t *py, bn_uint_t *k, bn_uint_t *outx, bn_uint_t *outy, ecc_curve_t *curve);
uint32_t ecc_ECDSA_signature_gen(bn_uint_t *k, bn_uint_t *hash, bn_uint_t *d, bn_uint_t *r, bn_uint_t *s, ecc_curve_t *curve);
uint32_t ecc_ECDSA_signature_val(bn_uint_t *r, bn_uint_t *s, bn_uint_t *hash, bn_uint_t *pub_k_x, bn_uint_t *pub_k_y, ecc_curve_t *curve);

void ecc_default_hash(bn_uint_t *input, bn_uint_t *output);
uint32_t ecc_generate_key(ecc_prgn prgn, bn_uint_t *d, bn_uint_t *pub_k_x, bn_uint_t *pub_k_y, ecc_curve_t *curve);
uint32_t ecc_ECDH_secret_gen(ecc_hash hash_func, bn_uint_t *d, bn_uint_t *pub_k_x, bn_uint_t *pub_k_y, bn_uint_t *secret, ecc_curve_t *curve);

#endif /* ECC_H_ */
