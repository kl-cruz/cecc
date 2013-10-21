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
						assert(b->lentgh == a->lentgh); \
						assert(result->lentgh >= a->lentgh)

/**
 *
 * @param a addend
 * @param b addend
 * @param result a+b
 * @return
 */
uint32_t bn_add(bn_uint_t *a, bn_uint_t *b, bn_uint_t *result)
{
	assert_values();

	//count number
	uint32_t i, carry;
	uint64_t temp;
	carry = 0;
	for (i = 0; i < a->lentgh; i++) {
		temp = (uint64_t) a->number[i] + b->number[i] + carry;
		result->number[i] = (uint32_t) temp;
		carry = (uint32_t) (temp >> 32);
	}
	result->number[result->lentgh - 1] = carry;
	return 0;
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
	assert_values();

	//count number
	uint32_t i, borrow;
	uint64_t temp;
	borrow = 1;
	for (i = 0; i < a->lentgh; i++) {
		temp = (uint64_t) a->number[i] + ~b->number[i] + borrow;
		result->number[i] = (uint32_t) temp;
		borrow = (uint32_t) (temp >> 32);
	}
	return 0;
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
	assert_values();

	uint32_t i, j, r = 0, carry = 0;
	uint64_t mul, num_r, num_rr;
	for (i = 0; i < b->lentgh; i++) {
		r = i;
		for (j = 0; j < a->lentgh; j++) {
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
	if (b->lentgh != a->lentgh) {
		return 1;
	}
	uint32_t i;
	for (i = 0; i < a->lentgh; ++i) {
		if (a->number[i] != b->number[i]) {
			return 2;
		}
	}
	return 0;
}
