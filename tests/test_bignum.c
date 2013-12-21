/*
 * test_bignum.c
 *
 * All rights reserved.
 *
 *  Created on: 17-10-2013
 *      Author: Karol Lasończyk
 */

#include "seatest.h"
#include "bignum.h"
#include "test_bignum.h"
#include "platform_utils.h"


void print_number(bn_uint_t *a)
{
	uint32_t i = 0;
	for (i = a->length; i > 0; --i) {
		fm_printf("%8x ", a->number[i - 1]);
	}
	fm_printf("\n");
}

int print_values(int num_args, ...)
{
	bn_uint_t *val;
	va_list ap;
	int i;
	fm_printf("\n");
	va_start(ap, num_args);
	for (i = 0; i < num_args; i++) {
		val = va_arg(ap, bn_uint_t*);
		print_number(val);
	}
	va_end(ap);

	return 0;
}

uint32_t test_add(bn_uint_t *a, bn_uint_t *b, bn_uint_t *expected_result)
{
	BN_CREATE_VARIABLE(res, expected_result->length);
	bn_zero(&res);
	bn_add(a, b, &res);
	return bn_is_equal(&res, expected_result);

}

uint32_t test_sub(bn_uint_t *a, bn_uint_t *b, bn_uint_t *expected_result)
{
	BN_CREATE_VARIABLE(res, expected_result->length);
	bn_zero(&res);
	bn_sub(a, b, &res);
	return bn_is_equal(&res, expected_result);
}

uint32_t test_mul(bn_uint_t *a, bn_uint_t *b, bn_uint_t *expected_result)
{
	BN_CREATE_VARIABLE(res, expected_result->length);
	bn_mul(a, b, &res);
	return bn_is_equal(&res, expected_result);
}

uint32_t test_field_add(bn_uint_t *a, bn_uint_t *b, bn_uint_t *p, bn_uint_t *expected_result)
{
	BN_CREATE_VARIABLE(res, expected_result->length);
	bn_field_add(a, b, p, &res);
	return bn_is_equal(&res, expected_result);
}

uint32_t test_field_sub(bn_uint_t *a, bn_uint_t *b, bn_uint_t *p, bn_uint_t *expected_result)
{
	BN_CREATE_VARIABLE(res, expected_result->length);
	bn_field_sub(a, b, p, &res);
	return bn_is_equal(&res, expected_result);
}

uint32_t test_field_inv(bn_uint_t *a, bn_uint_t *p, bn_uint_t *expected_result)
{
	BN_CREATE_VARIABLE(res, expected_result->length);
	uint32_t r = bn_field_inverse(a, p, &res);
	if(r==1)
	{
		error("bad numbers!");
	}
	return bn_is_equal(expected_result, &res);
}

uint32_t test_field_mul_barret(bn_uint_t *a, bn_uint_t *b, bn_uint_t *mi, bn_uint_t *p, bn_uint_t *expected_result)
{
	BN_CREATE_VARIABLE(res, expected_result->length);
	bn_field_mul_barret(a, b, mi, p, &res);
	return bn_is_equal(&res, expected_result);
}

uint32_t test_shr(bn_uint_t *a, bn_uint_t *expected_result)
{
	BN_CREATE_VARIABLE(res, a->length);
	bn_copy(a, &res, res.length);
	bn_shr(&res);
	return bn_is_equal(&res, expected_result);
}

uint32_t test_barret_mod(bn_uint_t *a, bn_uint_t *mi, bn_uint_t *p, bn_uint_t *expected_result)
{
	BN_CREATE_VARIABLE(res, expected_result->length);
	start_count_time();
	bn_barret_modulus(a, mi, p, &res);
	stop_count_time();
	info("barret moduar reduction time:%f ms", get_us() / 1000.0);

	return bn_is_equal(&res, expected_result);
}

