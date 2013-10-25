/*
 * test_bignum.c
 *
 * All rights reserved.
 *
 *  Created on: 17-10-2013
 *      Author: Karol Lasończyk
 */

#include "bignum.h"
#include "test_bignum.h"
#include "platform_utils.h"

//uint32_t test_tab_x[2] = { LSV, ... , MSV}; //less significant value, ... , most significant value

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

	info("Start testing a+b");
	start_count_time();
	bn_add(a, b, &res);
	stop_count_time();
	uint32_t t = get_us();

	//print_values(4,&test_a, &test_b, &res, &add_res);
	info("Execution time: %d us", t);
	info("--------------------------------------------", t);
	return bn_is_equal(&res, expected_result);

}

uint32_t test_sub(bn_uint_t *a, bn_uint_t *b, bn_uint_t *expected_result)
{
	BN_CREATE_VARIABLE(res, expected_result->length);
	info("Start testing b-a");
	bn_zero(&res);
	start_count_time();
	bn_sub(a, b, &res);
	stop_count_time();
	uint32_t t = get_us();

	//print_values(4,a,b, &res, expected_result);

	info("Execution time: %d us", t);
	info("--------------------------------------------", t);
	return bn_is_equal(&res, expected_result);

}

uint32_t test_mul(bn_uint_t *a, bn_uint_t *b, bn_uint_t *expected_result)
{
	BN_CREATE_VARIABLE(res, expected_result->length);
	info("Start testing a*b");
	start_count_time();
	bn_mul(a, b, &res);
	stop_count_time();
	uint32_t t = get_us();

	//print_values(4,a,b, &res, expected_result);
	info("Execution time: %d us", t);
	info("--------------------------------------------", t);
	return bn_is_equal(&res, expected_result);
}

uint32_t test_field_add(bn_uint_t *a, bn_uint_t *b, bn_uint_t *p, bn_uint_t *expected_result)
{
	BN_CREATE_VARIABLE(res, expected_result->length);
	info("Start testing a+b mod p");
	start_count_time();
	bn_field_add(a, b, p, &res);
	stop_count_time();
	uint32_t t = get_us();
	//print_values(4,a,b, &res, expected_result);

	info("Execution time: %d us", t);
	info("--------------------------------------------", t);
	return bn_is_equal(&res, expected_result);

}

uint32_t test_field_sub(bn_uint_t *a, bn_uint_t *b, bn_uint_t *p, bn_uint_t *expected_result)
{
	BN_CREATE_VARIABLE(res, expected_result->length);
	info("Start testing a-b mod p");
	start_count_time();
	bn_field_sub(a, b, p, &res);
	stop_count_time();
	uint32_t t = get_us();
	//print_values(4, a, b, &res, expected_result);
	info("Execution time: %d us", t);
	info("--------------------------------------------", t);
	return bn_is_equal(&res, expected_result);

}

uint32_t test_field_inv(bn_uint_t *a, bn_uint_t *b, bn_uint_t *p, bn_uint_t *expected_result)
{
	BN_CREATE_VARIABLE(res, expected_result->length);
	info("Start testing a^-1 mod p");
	start_count_time();
	//bn_field_inverse(&test_amod, &test_p, &res);
	stop_count_time();
	uint32_t t = get_us();
	//print_values(&test_bmod, &test_amod, &res, &submod2_res);

	info("Execution time: %d us", t);
	info("--------------------------------------------", t);
	return bn_is_equal(&res, &res);

}

uint32_t test_shr(bn_uint_t *a, bn_uint_t *expected_result)
{
	BN_CREATE_VARIABLE(res, a->length);
	info("Start testing a >> 1");
	start_count_time();
	bn_copy(a, &res, res.length);
	bn_shr(&res);
	stop_count_time();
	uint32_t t = get_us();
	//print_values(2, &test_amod, &res);

	info("Execution time: %d us", t);
	info("--------------------------------------------", t);
	return bn_is_equal(&res, expected_result);

}

