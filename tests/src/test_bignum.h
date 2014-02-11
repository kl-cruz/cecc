/*
 * test_bignum.h
 *
 * All rights reserved.
 *
 *  Created on: 17-10-2013
 *      Author: Karol Lasończyk
 */

#ifndef TEST_BIGNUM_H_
#define TEST_BIGNUM_H_
#include "bignum.h"

uint32_t test_add(bn_uint_t *a,bn_uint_t *b,bn_uint_t *expected_result);
uint32_t test_sub(bn_uint_t *a,bn_uint_t *b,bn_uint_t *expected_result);
uint32_t test_mul(bn_uint_t *a,bn_uint_t *b,bn_uint_t *expected_result);

uint32_t test_field_add(bn_uint_t *a,bn_uint_t *b, bn_uint_t *p,bn_uint_t *expected_result);
uint32_t test_field_sub(bn_uint_t *a,bn_uint_t *b, bn_uint_t *p,bn_uint_t *expected_result);
uint32_t test_field_inv(bn_uint_t *a,bn_uint_t *p,bn_uint_t *expected_result);

uint32_t test_field_mul_barret(bn_uint_t *a, bn_uint_t *b, bn_uint_t *mi, bn_uint_t *p, bn_uint_t *expected_result);
uint32_t test_barret_mod(bn_uint_t *a, bn_uint_t *mi, bn_uint_t *p, bn_uint_t *expected_result);

//uint32_t test_shr(void);
uint32_t test_shr(bn_uint_t *a,bn_uint_t *expected_result);

void seatest_bn_uint_equal(bn_uint_t *a,bn_uint_t *b,bn_uint_t *expected, bn_uint_t *actual, const char *function, unsigned int line);



#endif /* TEST_BIGNUM_H_ */
