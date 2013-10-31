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
		//debug("temp_bef:%x result[%d]=%x", temp, i, result->number[i]);
		temp = (temp >> 32);
		//debug("temp_aft:%x", temp);
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
	if (result->length > a->length) {
		result->number[a->length] = temp >> 32;
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
	bn_zero(result);
	uint32_t i, j, r = 0, carry = 0;
	uint64_t mul, num_r, num_rr;
	for (i = 0; i < b->length; i++) {
		for (j = 0; j < a->length; j++) {
			r = i+j;
			mul = (uint64_t) (a->number[j]) * (b->number[i]);
			num_r = (uint64_t) ((result->number[r]) + (mul & 0xFFFFFFFF));
			result->number[r] = (uint32_t) num_r;
			num_rr = (uint64_t) (result->number[r + 1] + (mul >> 32) + (num_r >> 32) + carry);
			carry = num_rr >> 32;
			result->number[r + 1] = (uint32_t) num_rr;
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

	BN_CREATE_VARIABLE(res, a->length + 1);
	bn_zero(&res);
	bn_add(a, b, &res);

	/*debug("carry=%d", carry);
	 print_values(4, a, b, p, &res);*/
	bn_copy(&res, result, result->length);
	if (res.number[res.length - 1] > 0) {
		uint32_t number;
		do {
			number = result->number[result->length - 1];
			bn_sub(result, p, result);
		} while (result->number[result->length - 1] < number);

	}
	while (bn_is_greater(result, p) == 1) {
		bn_sub(result, p, result);
	}

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
	/*result is number with length > a->length to reach some kind of precision on variable underflow
	 * what does it mean...
	 * imagine that we have got numbers like this:
	 * a (32bit)=  0x527153b62ff316b846b7dab4861eff01
	 * b (32bit)=  0xf42f2dcd176364c40ba6233d4bfd9153
	 * p (32bit)=  0xffffffffab4325642feda869a8b80ef9
	 * res (32bit)=0x5e4225e9188fb1f43b11b7773a216dae
	 *
	 * with first look everything is ok, but is't a little glitch.
	 * Resolution 32bit for result is too small to show borrow (it is necessary to properly working)
	 * and with this small glitch it looks good. Now look at res with 48 bit resolution
	 * res (48bit)=0xffffffff5e4225e9188fb1f43b11b7773a216dae
	 * and compare it with p, also 48 bit:
	 * p (48bit)=  0x00000000ffffffffab4325642feda869a8b80ef9
	 * Now operation res mod p show what we must do to properly count the number ;)
	 *
	 * Other libraries forget about this little glitch. I don't know why...
	 *
	 */

	uint32_t borrow;
	BN_CREATE_VARIABLE(res, a->length + 1);
	bn_zero(&res);
	borrow = bn_sub(a, b, &res);

	bn_copy(&res, result, result->length);
	if (borrow == 0) {
		bn_mod(result, 1, p);
	} else {
		bn_mod(result, 0, p);
	}

	return 0;
}

/**
 * @brief Function to inverse number and count modulo p -> 1/a mod p. Function uses extended euclidean algorithm. Be careful! p must be odd number and a<p!
 * @param a
 * @param p
 * @param result
 * @return
 */

uint32_t bn_field_inverse(bn_uint_t *a, bn_uint_t *p, bn_uint_t *result)
{
	if (bn_is_greater(a, p) == 1) {
		error("bad numbers!");
		return 0;
	}
	if ((p->number[0] & 0x1) == 0) {
		error("bad numbers!");
		return 0;
	}
	BN_CREATE_VARIABLE(u, a->length);
	BN_CREATE_VARIABLE(v, p->length);
	BN_CREATE_VARIABLE(r, a->length);
	BN_CREATE_VARIABLE(s, a->length);
	BN_CREATE_VARIABLE(temp, a->length + 1);
	bn_zero(result);
	bn_zero(&r);
	bn_zero(&s);
	bn_zero(&temp);
	bn_copy(p, &u, p->length);
	bn_copy(a, &v, a->length);
	s.number[0] = 1;
	uint32_t borrow;

	while (bn_is_greater(&v, result)) {
		if ((u.number[0] & 0x1) == 0) {
			bn_shr(&u);
			if ((r.number[0] & 0x1) == 0) {
				bn_shr(&r);
			} else {
				bn_add(&r, p, &temp);
				bn_shr(&temp);
				bn_copy(&temp, &r, r.length);
				//dodawanie z przesunięciem
			}
		} else if ((v.number[0] & 0x1) == 0) {
			bn_shr(&v);
			if ((s.number[0] & 0x1) == 0) {
				bn_shr(&s);
			} else {
				bn_add(&s, p, &temp);
				bn_shr(&temp);
				bn_copy(&temp, &s, s.length);
				//dodawanie z przesunięciem
			}
		} else if (bn_is_greater(&u, &v) == 1) {
			bn_sub(&u, &v, &u);

			borrow = bn_sub(&r, &s, &r);
			if (borrow > 0) {
				bn_add(&r, p, &r);
			}
		} else

		{
			bn_sub(&v, &u, &v);
			borrow = bn_sub(&s, &r, &s);
			if (borrow > 0) {
				bn_add(&s, p, &s);
			}
		}

	}
	result->number[0] = 1;
	if (bn_is_greater(&u, result)) {
		bn_zero(result);
		return 0;
	}

	bn_copy(&r, result, result->length);
	/*if(bn_is_greater(&r,&p))
	 {
	 bn_zero(result);
	 return 0;
	 }
	 if(bn_is_greater(&u,result))
	 {
	 bn_zero(result);
	 return 0;
	 }*/
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
	//debug("a.length=%d | b.length=%d ", a->length, b->length);
	if (a->length - b->length > 1) {
		//debug("a and b have different lengths [1]");
		return 3;
	}
	if ((a->length) - (b->length) == 1) {
		//debug("check a and b [2]");
		if (a->number[b->length] != 0) {
			//debug("a is greater than b [2]");
			return 1;
		}
	}
	if ((b->length) - (a->length) == 1) {
		//debug("check a and b [3]");
		if (b->number[a->length] != 0) {
			//debug("a is smaller than b [3]");
			return 2;
		}
	}
	uint32_t range = (a->length > b->length) ? b->length : a->length;
	for (i = range - 1; i >= 0; --i) {
		if (a->number[i] > b->number[i]) {
			//debug("a is greater than b [4]");
			return 1;
		}
		if (a->number[i] < b->number[i]) {
			//debug("a is smaller than b [5]");
			return 2;
		}
	}
	//debug("a and b are equal");
	return 0;
}

uint32_t bn_is_greater_len(bn_uint_t *a, bn_uint_t *b, uint32_t from)
{
	int32_t i;
	for (i = from - 1; i >= 0; --i) {
		if (a->number[i] > b->number[i]) {
			debug("a is greater than b [4]");
			return 1;
		}
		if (a->number[i] < b->number[i]) {
			debug("a is smaller than b [5]");
			return 2;
		}
	}
	debug("a and b are equal");
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
uint32_t bn_mod(bn_uint_t *num, uint32_t is_number_positive, bn_uint_t *p)
{
	/*
	 * algorytm:
	 * jeśli liczba jest dodatnia to odejmujemy do uzyskania liczby mniejszej niż modulo.
	 * jeśli liczba jest ujemna to dodajemy aż do uzyskania wyniku mniejszego niż modulo
	 * */
	assert(p->length == num->length);

	//bn_copy(num, result, result->length);
	if (is_number_positive) {
		while (bn_is_greater(num, p) == 1) {
			//		debug("execute modulus positive");
			bn_sub(num, p, num);
		}
	} else {
		/*
		 * Strange condition, but negative number (unsigned integer) is represented as big number (variable underflow):
		 * 0x01-0x02 = -0x01 but it is represented as 0xFF
		 */
		//add modulo to reach positive number
		uint32_t last_number;
		do {
			last_number = num->number[num->length - 1];
//			debug("execute modulus negative");
			bn_add(num, p, num);

		} while (last_number < num->number[num->length - 1]);
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

