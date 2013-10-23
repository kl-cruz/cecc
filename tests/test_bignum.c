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
}

void print_values(bn_uint_t *a, bn_uint_t *b, bn_uint_t *res, bn_uint_t *resok)
{
	fm_printf("\n\n-----a    :");
	print_number(a);
	fm_printf("  -----\n");

	fm_printf("-----b    :");
	print_number(b);
	fm_printf("  -----\n");

	fm_printf("-----res  :");
	print_number(res);
	fm_printf("  -----\n");

	fm_printf("-----resok:");
	print_number(resok);
	fm_printf("  -----\n\n");
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

	//print_values(&test_a, &test_b, &res, &add_res);
	info("Execution time: %d us", t);
	if (bn_is_equal(&res, &add_res) == 0) {
		info("Add working!");
		return 0;
	} else {
		info("Add not working! %d", bn_is_equal(&res, &add_res));
		return 1;
	}
	return 0;
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
	if (bn_is_equal(&res, &add_res) == 0) {
		info("Add working!\n");
		return 0;
	} else {
		info("Add not working! %d\n", bn_is_equal(&res, &add_res));
		return 1;
	}
	return 0;
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

	info("Execution time: %d us\n", t);
	if (bn_is_equal(&res, &sub_res) == 0) {
		info("Sub working!\n");
		return 0;
	} else {
		info("Sub not working! %d \n", bn_is_equal(&res, &sub_res));
		return 1;
	}
	return 0;
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

info("Execution time: %d us\n", t);
	if (bn_is_equal(&res, &sub_res2) == 0) {
		info("Sub working!\n");
		return 0;
	} else {
		info("Sub not working! %d \n", bn_is_equal(&res, &sub_res));
		return 1;
	}
return 0;
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

	/*fm_printf("\n\n-----b    :%8x %8x %8x %8x %8x %8x %8x %8x  -----\n", 0, 0, 0, 0, test_b.number[3], test_b.number[2], test_b.number[1],
			test_b.number[0]);
	fm_printf("-----a    :%8x %8x %8x %8x %8x %8x %8x %8x  -----\n", 0, 0, 0, 0, test_a.number[3], test_a.number[2], test_a.number[1],
			test_a.number[0]);
	fm_printf("-----res  :%8x %8x %8x %8x %8x %8x %8x %8x  -----\n", res.number[7], res.number[6], res.number[5], res.number[4], res.number[3],
			res.number[2], res.number[1], res.number[0]);
	fm_printf("-----resOK:%8x %8x %8x %8x %8x %8x %8x %8x  -----\n", mul_res.number[7], mul_res.number[6], mul_res.number[5], mul_res.number[4],
			mul_res.number[3], mul_res.number[2], mul_res.number[1], mul_res.number[0]);*/
	info("Execution time: %d us\n", t);
	if (bn_is_equal(&res, &mul_res) == 0) {
		info("Mul working!\n");
		return 0;
	} else {
		info("Mul not working!\n");
		return 1;
	}
	return 0;
}

uint32_t test_field_add()
{
	uint32_t res_tab[4] = { 0, 0, 0, 0 };
	bn_uint_t res = { res_tab,4 };

	start_count_time();
	bn_field_add(&test_amod, &test_bmod, &test_p, &res);
	stop_count_time();
	uint32_t t = get_us();
	/*print_values(&test_amod, &test_bmod, &res, &addmod_res);
	print_values(&test_p, &test_p, &test_p, &test_p);*/

	info("Execution time: %d us\n", t);
	return 0;

}

uint32_t test_field_sub()
{
	uint32_t res_tab[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	bn_uint_t res = { res_tab, 4 };

	start_count_time();
	bn_field_sub(&test_amod, &test_bmod, &test_p, &res);
	stop_count_time();
	uint32_t t = get_us();
	//print_values(&test_amod, &test_bmod, &res, &submod_res);

	info("Execution time: %d us\n", t);
	return 0;
}

uint32_t test_field_sub2()
{
	uint32_t res_tab[4] = { 0, 0, 0, 0};
	bn_uint_t res = { res_tab, 4 };

	start_count_time();
	bn_field_sub(&test_bmod, &test_amod, &test_p, &res);
	stop_count_time();
	uint32_t t = get_us();
	//print_values(&test_bmod, &test_amod, &res, &submod2_res);

	info("Execution time: %d us\n", t);
	return 0;

}

