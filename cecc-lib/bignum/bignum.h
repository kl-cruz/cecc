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

#define BN_CREATE_VARIABLE(_name, _len) uint32_t TAB_BN_CREATE_VARIABLE##_name[_len]; \
				bn_uint_t _name = {.number = TAB_BN_CREATE_VARIABLE##_name, .length = _len}

//operators
uint32_t bn_add(bn_uint_t *a, bn_uint_t *b, bn_uint_t *result);

uint32_t bn_sub(bn_uint_t *a, bn_uint_t *b, bn_uint_t *result);

uint32_t bn_mul(bn_uint_t *a, bn_uint_t *b, bn_uint_t *result);


//prime field operators
uint32_t bn_field_add(bn_uint_t *a, bn_uint_t *b, bn_uint_t *p, bn_uint_t *result);
uint32_t bn_field_sub(bn_uint_t *a, bn_uint_t *b, bn_uint_t *p, bn_uint_t *result);
uint32_t bn_field_inverse(bn_uint_t *a, bn_uint_t *p, bn_uint_t *result);

//functions
uint32_t bn_is_equal(bn_uint_t *a, bn_uint_t *b);
uint32_t bn_copy(bn_uint_t *from, bn_uint_t *to, uint32_t length);
uint32_t bn_inv_bits(bn_uint_t *to);
uint32_t bn_zero(bn_uint_t *num);
uint32_t bn_is_greater(bn_uint_t *a, bn_uint_t *b);
uint32_t bn_is_greater_len(bn_uint_t *a, bn_uint_t *b, uint32_t from);
uint32_t bn_is_one(bn_uint_t *num);
uint32_t bn_is_odd(bn_uint_t *num);
uint32_t bn_is_even(bn_uint_t *num);
uint32_t bn_shr(bn_uint_t *num);
uint32_t bn_mod(bn_uint_t *num, uint32_t is_number_positive, bn_uint_t *p);
int bn_print_values(int num_args, ...);

#endif /* BIGNUM_H_ */
