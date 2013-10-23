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

//PSEUDORANDOM (human) A and B
//teat_a = 0xA749BE78 8351AFFF EFACD8E3 AAC53DBA
uint32_t test_tab_a[8] = { 0xAAC53DBA, 0xEFACD8E3, 0x8351AFFF, 0xC749BE78, 0, 0, 0, 0 };
//test_b = 0xB493ECFF 12345678 BABAFABE DEFA3256
uint32_t test_tab_b[8] = { 0xDEFA3256, 0xBABAFABE, 0x12345678, 0xB493ECFF, 0, 0, 0, 0 };

//Huge values for field op
uint32_t test_tab_amod[4] = { 0xAAC53DBA, 0xEFACD8E3, 0x8351AFFF, 0xC749BE78 };
uint32_t test_tab_bmod[4] = { 0xDEFA3256, 0xBABAFABE, 0x12345678, 0xB493ECFF};

uint32_t test_tab_p[5] = { 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFD, 0xFFFFFFFF,0 };
//uint32_t test_tab_p_add[4] = { 0x9038A115, 0x75A30D1B, 0x00000000, 0xFFFFFFFE };
uint32_t test_tab_p_add[4] = { 0xFFFFFFFE, 0x00000000, 0x75A30D1B, 0x9038A115 };
//uint32_t test_tab_p[8] = { 0xFFFFFFFF, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF };
//12b5d179 711d5987 34f1de24 cbcb0b64
uint32_t res_sub_amod_bmod_modp[4] = { 0xcbcb0b64, 0x34f1de24, 0x711d5987, 0x12b5d179 };
//ed4a2e868ee2a658cb0e21db3434f49b
uint32_t res_sub2_amod_bmod_modp[4] = { 0x3434f49b, 0xcb0e21db, 0x8ee2a676, 0xed4a2e86 };
//7bddab77 95860698 aa67d3a2 89bf7011
uint32_t res_add_amod_bmod_modp[4] = { 0x89bf7011, 0xaa67d3a2, 0x9586067a, 0x7bddab77 };

//a+b = 0x1 5BDDAB77 95860678 AA67D3A2 89BF7010
uint32_t res_tab_add_ab[8] = { 0x89BF7010, 0xAA67D3A2, 0x95860678, 0x7BDDAB77, 0x01, 0, 0, 0 };
//b-a = 0xD4A2E86 8EE2A678 CB0E21DB 3434F49C
uint32_t res_tab_sub_ba[8] = { 0x3434F49C, 0xCB0E21DB, 0x8EE2A678, 0xD4A2E86, 0, 0, 0, 0 };
//b*a = 0x76008423 C57A0DA2 F5645D09 23983EB4 D1738C79 7E272AC0 DCA89807 77F5107C
uint32_t res_tab_mul_ba[8] = { 0x77F5107C, 0xDCA89807, 0x7E272AC0, 0xD1738C79, 0x23983EB4, 0xF5645D09, 0xC57A0DA2, 0x76008423 };

bn_uint_t test_a = { test_tab_a, 8 };
bn_uint_t test_b = { test_tab_b, 8 };
bn_uint_t test_amod = { test_tab_amod, 4 };
bn_uint_t test_bmod = { test_tab_bmod, 4 };
bn_uint_t test_p = { test_tab_p, 5 };
bn_uint_t test_p_add = { test_tab_p_add, 4 };
bn_uint_t add_res = { res_tab_add_ab, 8 };
bn_uint_t sub_res = { res_tab_sub_ba, 8 };
bn_uint_t mul_res = { res_tab_mul_ba, 8 };
bn_uint_t submod_res = { res_sub_amod_bmod_modp, 4 };
bn_uint_t submod2_res = { res_sub2_amod_bmod_modp, 4 };
bn_uint_t addmod_res = { res_add_amod_bmod_modp, 4};
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

	start_count_time();
	bn_add(&test_a, &test_b, &res);
	stop_count_time();
	uint32_t t = get_us();

	print_values(&test_a, &test_b, &res, &add_res);
	info("Execution time: %d us\n", t);
	if (bn_is_equal(&res, &add_res) == 0) {
		info("Add working!\n");
		return 0;
	} else {
		info("Add not working! %d\n", bn_is_equal(&res, &add_res));
		return 1;
	}
}

uint32_t test_add2()
{
	uint32_t res_tab[4] = { 0, 0, 0, 0 };
	bn_uint_t res = { res_tab, 4 };

	start_count_time();
	bn_add(&test_amod, &test_bmod, &res);
	stop_count_time();
	uint32_t t = get_us();

	print_values(&test_amod, &test_bmod, &res, &add_res);
	info("Execution time: %d us\n", t);
	if (bn_is_equal(&res, &add_res) == 0) {
		info("Add working!\n");
		return 0;
	} else {
		info("Add not working! %d\n", bn_is_equal(&res, &add_res));
		return 1;
	}
}

uint32_t test_add3()
{
	uint32_t res_tab[8] = { 0,0,0,0,0, 0, 0, 0 };
	bn_uint_t res = { res_tab, 4 };

	start_count_time();
	bn_add(&test_bmod, &test_amod, &res);
	stop_count_time();
	uint32_t t = get_us();

	print_values(&test_bmod, &test_amod, &res, &add_res);
	info("Execution time: %d us\n", t);
	if (bn_is_equal(&res, &add_res) == 0) {
		info("Add working!\n");
		return 0;
	} else {
		info("Add not working! %d\n", bn_is_equal(&res, &add_res));
		return 1;
	}
}

uint32_t test_sub()
{
	uint32_t res_tab[8] = { 0, 0, 0, 0, 0 };
	bn_uint_t res = { res_tab, 8 };
	start_count_time();
	bn_sub(&test_b, &test_a, &res);
	stop_count_time();
	uint32_t t = get_us();

	print_values(&test_b, &test_a, &res, &sub_res);

	info("Execution time: %d us\n", t);
	if (bn_is_equal(&res, &sub_res) == 0) {
		info("Sub working!\n");
		return 0;
	} else {
		info("Sub not working! %d \n", bn_is_equal(&res, &sub_res));
		return 1;
	}
}

uint32_t test_sub2()
{
	uint32_t res_tab[8] = { 0, 0, 0, 0, 0 };
	bn_uint_t res = { res_tab, 8 };
	start_count_time();
	bn_sub(&test_a, &test_b, &res);
	stop_count_time();
	uint32_t t = get_us();

	print_values(&test_a, &test_b, &res, &sub_res);

	info("Execution time: %d us\n", t);
	if (bn_is_equal(&res, &sub_res) == 0) {
		info("Sub working!\n");
		return 0;
	} else {
		info("Sub not working! %d \n", bn_is_equal(&res, &sub_res));
		return 1;
	}
}

uint32_t test_mul()
{
	uint32_t res_tab[8] = { 0, 0, 0, 0, 0 };
	bn_uint_t res = { res_tab, 8 };

	start_count_time();
	bn_mul(&test_b, &test_a, &res);
	stop_count_time();
	uint32_t t = get_us();

	fm_printf("\n\n-----b    :%8x %8x %8x %8x %8x %8x %8x %8x  -----\n", 0, 0, 0, 0, test_b.number[3], test_b.number[2], test_b.number[1],
			test_b.number[0]);
	fm_printf("-----a    :%8x %8x %8x %8x %8x %8x %8x %8x  -----\n", 0, 0, 0, 0, test_a.number[3], test_a.number[2], test_a.number[1],
			test_a.number[0]);
	fm_printf("-----res  :%8x %8x %8x %8x %8x %8x %8x %8x  -----\n", res.number[7], res.number[6], res.number[5], res.number[4], res.number[3],
			res.number[2], res.number[1], res.number[0]);
	fm_printf("-----resOK:%8x %8x %8x %8x %8x %8x %8x %8x  -----\n", mul_res.number[7], mul_res.number[6], mul_res.number[5], mul_res.number[4],
			mul_res.number[3], mul_res.number[2], mul_res.number[1], mul_res.number[0]);
	info("Execution time: %d us\n", t);
	if (bn_is_equal(&res, &mul_res) == 0) {
		info("Mul working!\n");
		return 0;
	} else {
		info("Mul not working!\n");
		return 1;
	}
}

uint32_t test_field_add()
{
	uint32_t res_tab[4] = { 0, 0, 0, 0 };
	bn_uint_t res = { res_tab,4 };

	start_count_time();
	bn_field_add(&test_amod, &test_bmod, &test_p, &res);
	stop_count_time();
	uint32_t t = get_us();
	print_values(&test_amod, &test_bmod, &res, &addmod_res);
	print_values(&test_p, &test_p, &test_p, &test_p);

	info("Execution time: %d us\n", t);

}

uint32_t test_field_sub()
{
	uint32_t res_tab[8] = { 0, 0, 0, 0, 0, 0, 0, 0 };
	bn_uint_t res = { res_tab, 4 };

	start_count_time();
	bn_field_sub(&test_amod, &test_bmod, &test_p, &res);
	stop_count_time();
	uint32_t t = get_us();
	print_values(&test_amod, &test_bmod, &res, &submod_res);

	info("Execution time: %d us\n", t);
}

uint32_t test_field_sub2()
{
	uint32_t res_tab[4] = { 0, 0, 0, 0};
	bn_uint_t res = { res_tab, 4 };

	start_count_time();
	bn_field_sub(&test_bmod, &test_amod, &test_p, &res);
	stop_count_time();
	uint32_t t = get_us();
	print_values(&test_bmod, &test_amod, &res, &submod2_res);

	info("Execution time: %d us\n", t);

}

