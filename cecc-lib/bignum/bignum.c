/*
 * bignum.c
 *
 * All rights reserved.
 *
 *  Created on: 19-10-2013
 *      Author: Karol Lasończyk
 */
//Uncomment line below to disable asserts
//#define NDEBUG
#include "bignum.h"
#include "platform_utils.h"

#define assert_values() assert(b != a); \
						assert(a != result); \
						assert(b != result); \
						assert(b->length == a->length)

#define copy_assert_values() 	assert(from != to); \
								assert(from->length >= length); \
								assert(to->length >= length)

/**
 *
 * @param a addend
 * @param b addend
 * @param result a+b, table with length = a.length+1 to store whole result
 * @return carry last carry
 */
uint32_t bn_add(bn_uint_t *a, bn_uint_t *b, bn_uint_t *result)
{

	//count number
	uint32_t i;
	uint64_t temp = 0;
	for (i = 0; i < result->length; i++) {
		if (i < a->length) {
			temp += (uint64_t) a->number[i];
		}
		if (i < b->length) {
			temp += (uint64_t) b->number[i];
		}
		result->number[i] = temp;
		temp = (temp >> 32);
	}

	return temp;
}

/**
 *
 * @param a minuend
 * @param b  subtrahend
 * @param result a-b
 * @return
 */
uint32_t bn_sub(bn_uint_t *a, bn_uint_t *b, bn_uint_t *result)
{
	/*assert_values()
	 ;*/

	//count number
	uint32_t i, borrow;
	uint64_t temp;
	borrow = 0;
	for (i = 0; i < a->length; i++) {
		temp = (uint64_t) a->number[i] - (uint64_t) b->number[i] - borrow;
		result->number[i] = (uint32_t) temp;
		if ((temp >> 32) > 0) {
			borrow = 1;
		}
		borrow = ((uint32_t) (temp >> 32)) & 0x1;
	}
	return borrow;
}

/**
 *
 * @param a first argument
 * @param b second argument
 * @param result a*b
 * @return
 */
uint32_t bn_mul(bn_uint_t *a, bn_uint_t *b, bn_uint_t *result)
{
	assert_values()
	;

	uint32_t i, j, r = 0, carry = 0;
	uint64_t mul, num_r, num_rr;
	for (i = 0; i < b->length; i++) {
		r = i;
		for (j = 0; j < a->length; j++) {
			mul = (uint64_t) (a->number[j]) * (b->number[i]);
			num_r = (uint64_t) ((result->number[r]) + (mul & 0xFFFFFFFF));
			result->number[r] = (uint32_t) num_r;
			num_rr = (uint64_t) (result->number[r + 1] + (mul >> 32) + (num_r >> 32) + carry);
			carry = num_rr >> 32;
			result->number[r + 1] = (uint32_t) num_rr;
			++r;
		}
		carry = 0;
	}
	return 0;
}

uint32_t bn_inv()
{
	return 0;
}

uint32_t bn_field_add(bn_uint_t *a, bn_uint_t *b, bn_uint_t *p, bn_uint_t *result)
{
	assert(b != a);
	assert(a != result);
	assert(b != result);
	assert(result->length >= p->length);

	BN_CREATE_VARIABLE(result_temp,a->length+1);

	bn_add(a, b, &result_temp);

	if (bn_is_greater(&result_temp, p) == 1) {
		bn_sub(&result_temp, p, &result_temp);
	}
	bn_copy(&result_temp, result, result->length);

	return 0;
}

uint32_t bn_field_sub(bn_uint_t *a, bn_uint_t *b, bn_uint_t *p, bn_uint_t *result)
{

	BN_CREATE_VARIABLE(result_temp,result->length);

	//count number
	uint32_t borrow;

	borrow = bn_sub(a, b, result);
	if (borrow == 1) {
		bn_add(result, p, &result_temp);
		bn_copy(&result_temp, result, result->length);
	}
	return 0;
}

/**
 *
 * @param a first number to check
 * @param b second number to check
 * @return 0 numbers are equal
 * @return 1 elements a and b have other length
 * @return 2 numbers are not equal
 */
uint32_t bn_is_equal(bn_uint_t *a, bn_uint_t *b)
{
	if (b == a) {
		return 0;
	}
	if (b->length != a->length) {
		return 1;
	}
	uint32_t i;
	for (i = 0; i < a->length; ++i) {
		if (a->number[i] != b->number[i]) {
			return 2;
		}
	}
	return 0;
}

uint32_t bn_copy(bn_uint_t *from, bn_uint_t *to, uint32_t length)
{
	copy_assert_values()
	;

	uint32_t i;
	for (i = 0; i < length; ++i) {
		to->number[i] = from->number[i];
	}
	return 0;
}

uint32_t bn_inv_bits(bn_uint_t *to)
{
	uint32_t i;
	for (i = 0; i < to->length; ++i) {
		to->number[i] = ~to->number[i];
	}
	return 0;
}

uint32_t bn_zero(bn_uint_t *num)
{
	uint32_t i;
	for (i = 0; i < num->length; ++i) {
		num->number[i] = 0;
	}
	return 0;
}

uint32_t bn_is_greater(bn_uint_t *a, bn_uint_t *b)
{
	int32_t i;
	if (a->length - b->length > 1) {
		return 3;
	}
	if (a->length - b->length == 1) {
		if (a->number[b->length] != 0)
			return 1;
	}
	if (b->length - a->length == 1) {
		if (b->number[a->length] != 0)
			return 2;
	}
	for (i = a->length - 1; i >= 0; --i) {
		if (a->number[i] > b->number[i]) {
			return 1;
		}
		if (a->number[i] < b->number[i]) {
			return 2;
		}
	}
	return 0;
}
