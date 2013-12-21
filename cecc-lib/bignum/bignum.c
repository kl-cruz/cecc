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

/**
 * @brief Addition function -> a+b=result
 * @param a addend
 * @param b addend
 * @param result a+b, table with length = a.length+1 to store whole result
 * @return carry last carry
 */
uint32_t bn_add(bn_uint_t *a, bn_uint_t *b, bn_uint_t *result)
{

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
 * @brief Subtraction function a-b=result
 * @param a minuend
 * @param b subtrahend
 * @param result a-b
 * @return borrow
 */
uint32_t bn_sub(bn_uint_t *a, bn_uint_t *b, bn_uint_t *result)
{

	uint32_t i, borrow;
	uint64_t temp = 0;
	borrow = 0;
	if (a->length == b->length) {
		for (i = 0; i < a->length; i++) {
			temp = (uint64_t) a->number[i] - (uint64_t) b->number[i] - borrow;
			result->number[i] = (uint32_t) temp;
			borrow = ((uint32_t) (temp >> 32)) & 0x1;
		}
		if (result->length > a->length) {
			result->number[a->length] = temp >> 32;
		}
	} else {
		for (i = 0; i < result->length; i++) {
			if (i < a->length) {
				temp = (uint64_t) a->number[i];
			}
			if (i < b->length) {
				temp -= (uint64_t) b->number[i];
			}
			temp -= borrow;
			result->number[i] = (uint32_t) temp;

			borrow = ((uint32_t) (temp >> 32)) & 0x1;
		}
		result->number[result->length - 1] = temp >> 32;
	}
	return borrow;
}

/**
 * @brief Multiplication function a*b=result
 * @param a first argument
 * @param b second argument
 * @param result a*b
 * @return 0
 */
uint32_t bn_mul(bn_uint_t *a, bn_uint_t *b, bn_uint_t *result)
{
	assert(a != result);
	assert(b != result);
	bn_zero(result);
	uint32_t i, j, r = 0, carry = 0;
	uint64_t mul, num_r, num_rr;
	for (i = 0; i < b->length; i++) {
		for (j = 0; j < a->length; j++) {
			r = i + j;

			if (j < a->length) {
				mul = (uint64_t) a->number[j];
			} else {
				mul = 0;
			}
			if (i < b->length) {
				mul *= (uint64_t) b->number[i];
			} else {
				mul = 0;
			}
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
 * @brief Field addition function -> result = a+b mod p
 * @param a addend
 * @param b addend
 * @param p field size
 * @param result a+b mod p
 * @return 0
 */

uint32_t bn_field_add(bn_uint_t *a, bn_uint_t *b, bn_uint_t *p, bn_uint_t *result)
{
	assert(result->length >= p->length);

	BN_CREATE_VARIABLE(res, a->length + 1);
	bn_zero(&res);
	bn_add(a, b, &res);

	bn_copy(&res, result, result->length);
	if (res.number[res.length - 1] > 0) {
		uint32_t number;
		do {
			number = result->number[result->length - 1];
			bn_sub(result, p, result);
		} while (result->number[result->length - 1] < number);

	}
	bn_mod(result, 1, p);

	return 0;
}

/**
 * @brief Field substract function -> result = a-b mod p
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
	assert(b != a);
	assert(a != result);
	assert(b != result);
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
 * @param a number to inverse
 * @param p modulus
 * @param result
 * @return 0
 */

uint32_t bn_field_inverse(bn_uint_t *a, bn_uint_t *p, bn_uint_t *result)
{
	if (bn_compare(a, p) == 1) {
		return 1;
	}
	if ((p->number[0] & 0x1) == 0) {
		return 1;
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
	while (bn_compare(&v, result)) {
		if ((u.number[0] & 0x1) == 0) {
			bn_shr(&u);
			if ((r.number[0] & 0x1) == 0) {
				bn_shr(&r);
			} else {
				bn_add(&r, p, &temp);
				bn_shr(&temp);
				bn_copy(&temp, &r, r.length);
			}
		} else if ((v.number[0] & 0x1) == 0) {
			bn_shr(&v);
			if ((s.number[0] & 0x1) == 0) {
				bn_shr(&s);
			} else {
				bn_add(&s, p, &temp);
				bn_shr(&temp);
				bn_copy(&temp, &s, s.length);
			}
		} else if (bn_compare(&u, &v) == 1) {
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
	if (bn_compare(&u, result)) {
		bn_zero(result);
		return 0;
	}
	bn_copy(&r, result, result->length);

	return 0;

}

/**
 * @brief Fill variable a with 0xFFFFFFFF number. Working from a[0] to a[word_length-1]
 * @param a number
 * @param word_length information how many 32bit fill with 0xFFFFFFFF
 * @return 0
 */
uint32_t bn_ffff(bn_uint_t *a, uint32_t word_length)
{
	bn_zero(a);
	uint32_t i;
	for (i = 0; i < word_length; ++i) {
		a->number[i] = 0xffffffff;
	}
	return 0;

}

/**
 * @brief Binary AND function for bn_uint_t
 * @param a number to operate with
 * @param and number to and with a
 * @param result and result
 * @return 0
 */
uint32_t bn_and(bn_uint_t *a, bn_uint_t *and, bn_uint_t *result)
{
	assert(a->length == and->length);
	assert(a->length == result->length);
	uint32_t i;
	for (i = 0; i < a->length; ++i) {
		result->number[i] = a->number[i] & and->number[i];
	}
	return 0;

}

/**
 * @brief Binary AND function operates on 32bits in bn_uint_t
 * @param a number to operate with
 * @param len length how many 32bit proceed
 * @param result and result
 * @return 0
 */
uint32_t bn_and_32(bn_uint_t *a, uint32_t len, bn_uint_t *result)
{
	assert(a->length >= len);
	assert(a->length == result->length);
	uint32_t i;
	for (i = 0; i < a->length; ++i) {
		result->number[i] = a->number[i] & 0xffffffff;
	}
	return 0;

}

/**
 * @brief Barret modular reduction function -> a mod p
 * @param a number to reduce
 * @param mi number calculate in eg. java (BigInteger). (calculate as FFFF...F/p, where F count is p.length*8	)
 * @param p modulus
 * @param result
 * @return 0
 */
uint32_t bn_barret_modulus(bn_uint_t *a, bn_uint_t *mi, bn_uint_t *p, bn_uint_t *result)
{

	if (bn_compare(p, a) == 1) {
		bn_copy(a, result, result->length);
		return 0;
	}

	BN_CREATE_VARIABLE(q, p->length + 1);
	BN_CREATE_VARIABLE(z, a->length);
	BN_CREATE_VARIABLE(r1, a->length);
	BN_CREATE_VARIABLE(r2, a->length + p->length);
	BN_CREATE_VARIABLE(tmp, a->length + p->length);

	bn_shr_word(a, &q, p->length - 1);
	bn_mul(mi, &q, &tmp);
	bn_shr_word(&tmp, &q, p->length + 1);

	bn_and_32(a, p->length + 1, &r1);
	bn_mul(&q, p, &r2);
	bn_and_32(&r2, p->length + 1, &r2);
	if (bn_compare(&r1, &r2) == 2) {
		bn_ffff(&z, p->length + 1);
		bn_sub(&z, &r2, &z);
		bn_add(&z, &r1, &z);
	} else {
		bn_sub(&r1, &r2, &z);
	}

	while (bn_compare(&z, p) == 1) {
		bn_sub(&z, p, &z);
	}
	bn_copy(&z, result, result->length);
	return 0;
}

/**
 * @brief Field multiplication with barret modular reduction -> result = a*b mod p
 * @param a first argument
 * @param b second argument
 * @param mi µ constant value. Counted from p
 * @param p modulus
 * @param result
 * @return 0
 */
uint32_t bn_field_mul_barret(bn_uint_t *a, bn_uint_t *b, bn_uint_t *mi, bn_uint_t *p, bn_uint_t *result)
{
	BN_CREATE_VARIABLE(res, result->length * 2);
	bn_zero(result);
	bn_zero(&res);
	bn_mul(a, b, &res);
	bn_barret_modulus(&res, mi, p, result);
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
	assert(from != to);
	assert(from->length >= length);
	assert(to->length >= length);
	uint32_t i;
	for (i = 0; i < length; ++i) {
		to->number[i] = from->number[i];
	}
	return i + 1;
}

/**
 * @brief Zeroed number
 * @param num number
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
 * @brief Shift right 32bit data * shift
 * @param num number
 * @return 0
 */
uint32_t bn_shr_word(bn_uint_t *num, bn_uint_t *result, uint32_t shift)
{
	uint32_t i;
	for (i = 0; i < (num->length - shift) && i < result->length; i++)
		result->number[i] = num->number[i + shift];
	for (/* reuse i */; i < result->length; i++)
		result->number[i] = 0;
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
	if (bn_compare(a, b) == 0) {
		return 0;
	}
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

uint32_t bn_compare(bn_uint_t *a, bn_uint_t *b)
{
	uint32_t i;

	//the same length
	if (a->length == b->length) {
		for (i = a->length; i >= 1; --i) {
			if (a->number[i - 1] > b->number[i - 1]) {
				return 1;
			}
			if (a->number[i - 1] < b->number[i - 1]) {
				return 2;
			}
		}
	} else {
		uint32_t an, bn; //
		uint32_t max = (a->length > b->length) ? a->length : b->length;
		an = bn = 0;
		for (i = max; i >= 1; --i) {
			if (i - 1 < a->length) {
				an = a->number[i - 1];
			}
			if (i - 1 < b->length) {
				bn = b->number[i - 1];
			}
			if (an > bn) {
				return 1;
			}
			if (an < bn) {
				return 2;
			}
		}
	}
	return 0;
}

/**
 * @brief Slow but properly working modulus algorithm.
 * @param num number
 * @param is_number_positive information if number is positive. If negative -> 0
 * @param p modulus
 * @return 0
 */
uint32_t bn_mod(bn_uint_t *num, uint32_t is_number_positive, bn_uint_t *p)
{
	/*
	 * algorytm:
	 * jeśli liczba jest dodatnia to odejmujemy do uzyskania liczby mniejszej niż modulo.
	 * jeśli liczba jest ujemna to dodajemy aż do uzyskania wyniku mniejszego niż modulo
	 * */

//bn_copy(num, result, result->length);
	if (is_number_positive) {
		while (bn_compare(num, p) == 1) {
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
			bn_add(num, p, num);

		} while (last_number < num->number[num->length - 1]);
	}
	return 0;
}

