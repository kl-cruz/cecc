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
#include "test_bignum_values.h"

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

uint32_t test_add()
{
	uint32_t res_tab[8] = { 0, 0, 0, 0, 0 };
	bn_uint_t res = { res_tab, 8 };

	info("Start testing a+b");
	start_count_time();
	bn_add(&test_a, &test_b, &res);
	stop_count_time();
	uint32_t t = get_us();

	//print_values(4,&test_a, &test_b, &res, &add_res);
	info("Execution time: %d us", t);
	info("--------------------------------------------", t);
	return bn_is_equal(&res, &add_res);

}

uint32_t test_add2()
{
	uint32_t res_tab[8] = { 0 };
	bn_uint_t res = { res_tab, 8 };

	info("Start testing b+a");
	start_count_time();
	bn_add(&test_amod, &test_bmod, &res);
	stop_count_time();
	uint32_t t = get_us();

	//print_values(&test_b, &test_a, &res, &add_res);
	info("Execution time: %d us", t);
	info("--------------------------------------------", t);
	return bn_is_equal(&res, &add_res);

}

uint32_t test_sub()
{
	uint32_t res_tab[8] = { 0, 0, 0, 0, 0 };
	bn_uint_t res = { res_tab, 8 };
	info("Start testing b-a");
	start_count_time();
	bn_sub(&test_b, &test_a, &res);
	stop_count_time();
	uint32_t t = get_us();

	//print_values(&test_b, &test_a, &res, &sub_res);

	info("Execution time: %d us", t);
	info("--------------------------------------------", t);
	return bn_is_equal(&res, &sub_res);

}

uint32_t test_sub2()
{
	uint32_t res_tab[8] = { 0, 0, 0, 0, 0 };
	bn_uint_t res = { res_tab, 8 };
	info("Start testing a-b");
	start_count_time();
	bn_sub(&test_a, &test_b, &res);
	stop_count_time();
	uint32_t t = get_us();

	//print_values(&test_a, &test_b, &res, &sub_res2);

	info("Execution time: %d us", t);
	info("--------------------------------------------", t);
	return bn_is_equal(&res, &sub_res2);

}

uint32_t test_mul()
{
	uint32_t res_tab[8] = { 0, 0, 0, 0, 0 };
	bn_uint_t res = { res_tab, 8 };
	info("Start testing a*b");
	start_count_time();
	bn_mul(&test_b, &test_a, &res);
	stop_count_time();
	uint32_t t = get_us();

	info("Execution time: %d us", t);
	info("--------------------------------------------", t);
	return bn_is_equal(&res, &mul_res);
}

uint32_t test_field_add()
{
	uint32_t res_tab[4] = { 0, 0, 0, 0 };
	bn_uint_t res = { res_tab, 4 };
	info("Start testing a+b mod p");
	start_count_time();
	bn_field_add(&test_amod, &test_bmod, &test_p, &res);
	stop_count_time();
	uint32_t t = get_us();
	//print_values(&test_amod, &test_bmod, &res, &addmod_res);
	/*print_values(&test_p, &test_p, &test_p, &test_p);*/

	info("Execution time: %d us", t);
	info("--------------------------------------------", t);
	return bn_is_equal(&res, &addmod_res);

}

uint32_t test_field_sub()
{
	uint32_t res_tab[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	bn_uint_t res = { res_tab, 4 };
	info("Start testing a-b mod p");
	start_count_time();
	bn_field_sub(&test_amod, &test_bmod, &test_p, &res);
	stop_count_time();
	uint32_t t = get_us();
	//print_values(&test_amod, &test_bmod, &res, &submod_res);
	info("Execution time: %d us", t);
	info("--------------------------------------------", t);
	return bn_is_equal(&res, &submod_res);

}

uint32_t test_field_sub2()
{
	uint32_t res_tab[4] = { 0, 0, 0, 0 };
	bn_uint_t res = { res_tab, 4 };
	info("Start testing b-a mod p");
	start_count_time();
	bn_field_sub(&test_bmod, &test_amod, &test_p, &res);
	stop_count_time();
	uint32_t t = get_us();
	//print_values(&test_bmod, &test_amod, &res, &submod2_res);

	info("Execution time: %d us", t);
	info("--------------------------------------------", t);
	return bn_is_equal(&res, &submod2_res);

}

