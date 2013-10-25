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
 * @brief
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
 * @brief
 * @param a minuend
 * @param b subtrahend
 * @param result a-b
 * @return borrow
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
 * @brief
 * @param a first argument
 * @param b second argument
 * @param result a*b
 * @return 0
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

/**
 * @brief
 * @param a addend
 * @param b addend
 * @param p field size
 * @param result a+b mod p
 * @return 0
 */

uint32_t bn_field_add(bn_uint_t *a, bn_uint_t *b, bn_uint_t *p, bn_uint_t *result)
{
	/*assert(b != a);
	 assert(a != result);
	 assert(b != result);*/
	assert(result->length >= p->length);

	BN_CREATE_VARIABLE(result_temp, a->length + 1);

	bn_add(a, b, &result_temp);

	if (bn_is_greater(&result_temp, p) == 1) {
		bn_sub(&result_temp, p, &result_temp);
	}
	bn_copy(&result_temp, result, result->length);

	return 0;
}

/**
 * @brief Operation a-b mod p
 * @param a minuend
 * @param b subtrahend
 * @param p field size
 * @param result a-b mod p
 * @return 0
 */
uint32_t bn_field_sub(bn_uint_t *a, bn_uint_t *b, bn_uint_t *p, bn_uint_t *result)
{
	uint32_t carry, i;
	carry = 0;
	for (i = 0; i < result->length; i++) {

		if (a->number[i] >= b->number[i]) {
			result->number[i] = a->number[i] - b->number[i];
			if ((result->number[i] == 0x0) && (carry == 0x1))
				result->number[i] = 0xffffffff;
			else {
				result->number[i] -= carry;
				carry = 0x0;
			}
		} else {
			result->number[i] = a->number[i] + ~(b->number[i]) + 0x1 - carry;
			carry = 0x1;
		}
		/*info("iteration: %d", i);
		print_values(1, result);*/
	}
	//info("all info");
	//print_values(4, a, b, p, result);
	//while ((carry == 0x1) || (bn_is_greater(result, p) == 1)) {
	if (carry == 0x1) {
			bn_add(result, p, result);
			//print_values(2, result,p);
		}
	while (bn_is_greater(result, p) ==1) {
			bn_add(result, p, result);
			//print_values(2, result,p);
		}
	//info("end func");
	/*
	 //count number
	 uint32_t borrow;

	 borrow = bn_sub(a, b, result);
	 if (borrow == 1) {
	 bn_add(result, p, result);
	 }*/
	return 0;
}

/**
 * @brief Function to inverse number and count modulo p -> 1/a mod p. Function uses extended euclidean algorithm
 * @param a
 * @param p
 * @param result
 * @return
 */
uint32_t bn_field_inverse(bn_uint_t *a, bn_uint_t *p, bn_uint_t *result)
{
	//TODO można zastąpić x1 lub x2 zmienną result. mniej miejsca w pamięci i szybsze będzie
	uint32_t i;
	BN_CREATE_VARIABLE(u, a->length);
	BN_CREATE_VARIABLE(v, p->length);
	BN_CREATE_VARIABLE(x1, a->length);
	BN_CREATE_VARIABLE(x2, a->length);
	while ((bn_is_one(&u) || bn_is_one(&v) == 0)) {
		for (i = 0; i < u.length; ++i) {
			debug("u[%d]=%8x", i, u.number[i]);
		}
		for (i = 0; i < v.length; ++i) {
			debug("v[%d]=%8x", i, v.number[i]);
		}
		while (bn_is_even(&u)) {
			//debug("2");
			bn_shr(&u);
			if (bn_is_even(&x1)) {
				bn_shr(&x1);
			} else {
				bn_field_add(&x1, p, p, &x1);
				bn_shr(&x1);
			}
		}
		while (bn_is_even(&v)) {
			//debug("3");
			bn_shr(&v);
			if (bn_is_even(&x2)) {
				bn_shr(&x2);
			} else {
				bn_field_add(&x2, p, p, &x2);
				bn_shr(&x2);
			}
		}
		if (bn_is_greater(&u, &v)) {
			debug("u>v");
			bn_field_sub(&u, &v, p, &u);
			bn_field_sub(&x1, &x2, p, &x1);
		} else {
			debug("u<=v");
			bn_field_sub(&v, &u, p, &v);
			bn_field_sub(&x2, &x1, p, &x2);
		}
	}
	if (bn_is_one(&u)) {
		bn_copy(&x1, result, x1.length);
	} else {
		bn_copy(&x2, result, x1.length);
	}
	return 0;
}

/**
 * @brief Copy number from `from` to `to`
 * @param from
 * @param to
 * @param length number of uint32_t's to copy
 * @return number of copied uint32_t's
 */
uint32_t bn_copy(bn_uint_t *from, bn_uint_t *to, uint32_t length)
{
	copy_assert_values()
	;

	uint32_t i;
	for (i = 0; i < length; ++i) {
		to->number[i] = from->number[i];
	}
	return i + 1;
}

/**
 * @brief Invert bits in number
 * @param to
 * @return
 */
uint32_t bn_inv_bits(bn_uint_t *num)
{
	uint32_t i;
	for (i = 0; i < num->length; ++i) {
		num->number[i] = ~num->number[i];
	}
	return 0;
}

/**
 * @brief Zeroed number
 * @param num
 * @return 0
 */
uint32_t bn_zero(bn_uint_t *num)
{
	uint32_t i;
	for (i = 0; i < num->length; ++i) {
		num->number[i] = 0;
	}
	return 0;
}

/**
 * @brief Shift right
 * @param num number
 * @return 0
 */
uint32_t bn_shr(bn_uint_t *num)
{
	uint32_t i;
	num->number[0] = num->number[0] >> 1;
	for (i = 1; i < num->length; ++i) {
		num->number[i - 1] &= ~(num->number[i - 1] & 0x80000000); //zero MSB
		num->number[i - 1] |= (num->number[i] & 0x1) << 31;
		num->number[i] = num->number[i] >> 1;
	}
	return 0;
}

/**
 * @brief Check if element a equals b
 * @param a first number to check
 * @param b second number to check
 * @return 0 numbers are equal
 * @return 1 elements a and b have other length
 * @return 2 numbers are not equal
 */
uint32_t bn_is_equal(bn_uint_t *a, bn_uint_t *b)
{
	if (b->length != a->length) {
		return 1;
	}
	if (b == a) {
		return 0;
	}
	if (bn_is_greater(a, b) == 0) {
		return 0;
	}
	info("Values not equal! a and b:");
	bn_print_values(2, a, b);
	return 2;
}

/**
 * @brief Check if element a is greater than b
 * @param a first number to check
 * @param b second number to check
 * @return 0 numbers are equal
 * @return 1 element a is greater than b
 * @return 2 element a is smaller than b
 * @return 3 size a and b mismatch
 */

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
/**
 * @brief Check if number equals 1
 * @param num
 * @return
 */
uint32_t bn_is_one(bn_uint_t *num)
{
	uint32_t i;
	for (i = 1; i < num->length; ++i) {
		if (num->number[i] != 0) {
			return 0;
		}
	}
	if (num->number[i] == 1) {
		return 1;
	}
	return 0;
}

/**
 * @brief Check if number is odd
 * @param num
 * @return
 */
uint32_t bn_is_odd(bn_uint_t *num)
{
	if ((num->number[0] & 0x1) == 1) {
		return 1;
	}
	return 0;
}

/**
 * @brief Check if number is even
 * @param num
 * @return
 */
uint32_t bn_is_even(bn_uint_t *num)
{
	return bn_is_odd(num) == 1 ? 0 : 1;
}

/**
 * @brief Slow but properly working modulus algorithm
 * @param num
 * @param p
 * @param result
 * @return
 */
uint32_t bn_mod(bn_uint_t *num, uint32_t is_number_positive, bn_uint_t *p, bn_uint_t *result)
{
	bn_copy(num, result, result->length);
	if (is_number_positive) {
		while (bn_is_greater(result, p) == 1) {
			bn_sub(result, p, result);
		}
	} else {
		/*
		 * Strange condition, but negative number (unsigned integer) is represented as big number (variable underflow):
		 * 0x01-0x02 = -0x01 but it is represented as 0xFF
		 */
		while (bn_is_greater(result, p) == 1) {
			bn_add(result, p, result);
		}
	}
	return 0;
}

void bn_print_number(bn_uint_t *a)
{
	uint32_t i = 0;
	for (i = a->length; i > 0; --i) {
		fm_printf("%8x ", a->number[i - 1]);
	}
	fm_printf("\n");
}

int bn_print_values(int num_args, ...)
{
	bn_uint_t *val;
	va_list ap;
	int i;
	fm_printf("\n");
	va_start(ap, num_args);
	for (i = 0; i < num_args; i++) {
		val = va_arg(ap, bn_uint_t*);
		bn_print_number(val);
	}
	va_end(ap);

	return 0;
}

