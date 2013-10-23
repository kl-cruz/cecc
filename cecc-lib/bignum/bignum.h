/*
 * bignum.h
 *
 * All rights reserved.
 *
 *  Created on: 19-10-2013
 *      Author: Karol Lasończyk
 */

#ifndef BIGNUM_H_
#define BIGNUM_H_

#include <stdint.h>

typedef struct bn_uint {
	uint32_t *number;
	uint32_t length;
} bn_uint_t;

#define BN_INIT(_len) ( {uint32_t tab_len=_len; \
						uint32_t tab[tab_len]; \
						bn_uint_t result= {.number = tab, .length = tab_len}; \
						bn_uint_t *result_ret= &result \
						result_ret;})

//operators
uint32_t bn_add(bn_uint_t *a, bn_uint_t *b, bn_uint_t *result);

uint32_t bn_sub(bn_uint_t *a, bn_uint_t *b, bn_uint_t *result);

uint32_t bn_mul(bn_uint_t *a, bn_uint_t *b, bn_uint_t *result);

uint32_t bn_inv(void);

//prime field operators
uint32_t bn_field_add(bn_uint_t *a, bn_uint_t *b, bn_uint_t *p, bn_uint_t *result);
uint32_t bn_field_sub(bn_uint_t *a, bn_uint_t *b, bn_uint_t *p, bn_uint_t *result);

//functions
uint32_t bn_is_equal(bn_uint_t *a, bn_uint_t *b);

uint32_t bn_copy(bn_uint_t *from, bn_uint_t *to, uint32_t length);

uint32_t bn_inv_bits(bn_uint_t *to);
uint32_t bn_zero(bn_uint_t *num);
uint32_t bn_is_greater(bn_uint_t *a, bn_uint_t *b);

#endif /* BIGNUM_H_ */
