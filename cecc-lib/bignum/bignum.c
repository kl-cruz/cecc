/*
 * bignum.c
 *
 * All rights reserved.
 *
 *  Created on: 19-10-2013
 *      Author: Karol Lasończyk
 */

#include "bignum.h"
#include "platform_utils.h"

uint32_t bn_add(bn_uint_t *a, bn_uint_t *b, bn_uint_t *result)
{
	//TODO sprawdzenie czy a i b nie są resultem
	//check if result can accomodate a+b
	if (b->lentgh != a->lentgh) {
		return 1;
	}

	if (result->lentgh <= a->lentgh) {
		return 2;
	}

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

uint32_t bn_sub(bn_uint_t *a, bn_uint_t *b, bn_uint_t *result)
{
	//check if result can accomodate a+b
	if (b->lentgh != a->lentgh) {
		return 1;
	}

	if (result->lentgh <= a->lentgh) {
		return 2;
	}

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

uint32_t bn_mul(bn_uint_t *a, bn_uint_t *b, bn_uint_t *result)
{
	uint32_t resh_tab[8] = { 0, 0, 0, 0, 0 };
	bn_uint_t resh = { resh_tab, 8 };
	//check if result can accomodate a+b
	if (b->lentgh != a->lentgh) {
		return 1;
	}

	if ((result->lentgh) < (a->lentgh * 2)) {
		fm_printf("a: %d result: %d!\n", a->lentgh * 2, result->lentgh);
		return 2;
	}

	uint32_t i, j, r = 0, e, carry = 0;
	uint64_t temp, num_r, num_rr;
	for (i = 0; i < b->lentgh; i++) {
		r = i;
		//fm_printf("-----------------------------------------------------------------------------\n");
		for (j = 0; j < a->lentgh; j++) {
			temp = (uint64_t) (a->number[j]) * (b->number[i]);

			/*fm_printf("-----a = %x, ", a->number[j]);
			 fm_printf("b = %x, ", b->number[i]);
			 fm_printf("temp=a*b=%x", temp >> 32);
			 fm_printf(" %x\n", (uint32_t) temp);*/
			/*fm_printf(">----res  :%8x %8x %8x %8x %8x %8x %8x %8x  -----\n", result->number[7], result->number[6], result->number[5],
					result->number[4], result->number[3], result->number[2], result->number[1], result->number[0]);*/

			//resh.number[r] = (uint32_t) (temp & 0xFFFFFFFF);
			num_r = (uint64_t) ((result->number[r]) + (temp & 0xFFFFFFFF));

			//num_r += carry;
			//num_r = (uint64_t)((uint64_t)(result->number[r]) + (uint64_t)(temp&0xFFFFFFFF) + (uint64_t)(carry));
			/*fm_printf("-----num_r = result->number[r=%d] ", r);
			fm_printf("+ (uint32_t) temp =");
			fm_printf("%x", result->number[r]);
			fm_printf(" + %x", temp & 0xFFFFFFFF);
			fm_printf("= %x", num_r >> 32);
			fm_printf(" %x\n", (uint32_t) num_r);*/

			result->number[r] = (uint32_t) num_r;

			/*fm_printf("-----result->number[r=%d]:%x\n", r, result->number[r]);*/

			//resh.number[r + 1] = (uint32_t) (temp >> 32);

			num_rr = (uint64_t) (result->number[r + 1] + (temp >> 32) + (num_r >> 32) + carry);
			carry = num_rr >> 32;

			/*fm_printf("-----num_rr=result->number[r + 1=%d] + (temp >> 32) + (num_r >> 32)= ", r + 1);
			fm_printf("%x + ", result->number[r + 1]);
			fm_printf("%x + ", temp >> 32);
			fm_printf("%x = ", num_r >> 32);
			fm_printf("%x", num_rr >> 32);
			fm_printf(" %x\n", (uint32_t) num_rr);*/

			result->number[r + 1] = (uint32_t) num_rr;

			/*fm_printf("+----res  :%8x %8x %8x %8x %8x %8x %8x %8x  -----\n", resh.number[7], resh.number[6], resh.number[5], resh.number[4],
					resh.number[3], resh.number[2], resh.number[1], resh.number[0]);

			fm_printf(">!---res  :%8x %8x %8x %8x %8x %8x %8x %8x  -----<!\n", result->number[7], result->number[6], result->number[5],
					result->number[4], result->number[3], result->number[2], result->number[1], result->number[0]);

			fm_printf("-----------------------------------------------------------------------------\n");*/

			++r;

			for (e = 0; e < result->lentgh; e++) {
				resh.number[e] = 0;
			}

		}
		carry=0;
	/*	for (e = 0; e < result->lentgh; e++) {
			resh.number[e] = 0;
		}*/
		/*fm_printf("!----res  :%8x %8x %8x %8x %8x %8x %8x %8x  -----\n", result->number[7], result->number[6], result->number[5], result->number[4],
				result->number[3], result->number[2], result->number[1], result->number[0]);*/

	}
	/*fm_printf("-----------------------------------------------------------------------------\n");
	fm_printf("-----------------------------------------------------------------------------\n");*/

	return 0;
}

uint32_t bn_inv()
{
	return 0;
}

/**
 *
 * @param a
 * @param b
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
