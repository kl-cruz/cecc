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
uint32_t test_tab_a[4] = { 0xAAC53DBA, 0xEFACD8E3, 0x8351AFFF, 0xA749BE78 };
//uint32_t test_tab_a[4] = { 0x5, 0x4, 0x3, 0x2 };
//uint32_t test_tab_a[4] = { 0x5, 0xFFFFFFFF, 0x3, 0xFFFFFFFF };
//test_b = 0xB493ECFF 12345678 BABAFABE DEFA3256
uint32_t test_tab_b[4] = { 0xDEFA3256, 0xBABAFABE, 0x12345678 ,0xB493ECFF };
//uint32_t test_tab_b[4] = { 0xFffffff1, 0x0, 0xF ,0x0 };
//uint32_t test_tab_b[4] = { 0xF, 0xFFFFFFFF, 0xF ,0x0 };


//a+b = 0x1 5BDDAB77 95860678 AA67D3A2 89BF7010
uint32_t res_tab_add_ab[5] = { 0x89BF7010, 0xAA67D3A2, 0x95860678, 0x5BDDAB77,  0x01 };
//b-a = 0xD4A2E86 8EE2A678 CB0E21DB 3434F49C
uint32_t res_tab_sub_ba[5] = { 0x3434F49C, 0xCB0E21DB, 0x8EE2A678, 0xD4A2E86,  0 };
//b*a = 0x76008423 C57A0DA2 F5645D09 23983EB4 D1738C79 7E272AC0 DCA89807 77F5107C
uint32_t res_tab_mul_ba[8] = { 0x77F5107C, 0xDCA89807, 0x7E272AC0, 0xD1738C79,  0x23983EB4,0xF5645D09,0xC57A0DA2, 0x76008423 };


bn_uint_t test_a = { test_tab_a, 4 };
bn_uint_t test_b = { test_tab_b, 4 };
bn_uint_t add_res = { res_tab_add_ab, 5 };
bn_uint_t sub_res = { res_tab_sub_ba, 5 };
bn_uint_t mul_res = { res_tab_mul_ba, 8 };

uint32_t test_add()
{
	uint32_t res_tab[5]={0,0,0,0,0};
	bn_uint_t res = { res_tab, 5 };

	bn_add(&test_a, &test_b, &res);

	fm_printf("-----a    :%8x %8x %8x %8x %8x  -----\n", 0, test_a.number[3], test_a.number[2],test_a.number[1],test_a.number[0]);
	fm_printf("-----b    :%8x %8x %8x %8x %8x  -----\n", 0, test_b.number[3], test_b.number[2],test_b.number[1],test_b.number[0]);
	fm_printf("-----res  :%8x %8x %8x %8x %8x  -----\n", res.number[4],res.number[3],res.number[2], res.number[1], res.number[0]);
	if (bn_is_equal(&res, &add_res) == 0) {
		fm_printf("Add working!\n");
		return 0;
	} else {
		fm_printf("Add not working!\n");
		return 1;
	}
}

uint32_t test_sub()
{
	uint32_t res_tab[5]={0,0,0,0,0};
	bn_uint_t res = { res_tab, 5 };

	bn_sub(&test_b, &test_a, &res);

	fm_printf("-----b    :%8x %8x %8x %8x %8x  -----\n", 0, test_b.number[3], test_b.number[2],test_b.number[1],test_b.number[0]);
	fm_printf("-----a    :%8x %8x %8x %8x %8x  -----\n", 0, test_a.number[3], test_a.number[2],test_a.number[1],test_a.number[0]);
	fm_printf("-----res  :%8x %8x %8x %8x %8x  -----\n", res.number[4],res.number[3],res.number[2], res.number[1], res.number[0]);
	if (bn_is_equal(&res, &sub_res) == 0) {
		fm_printf("Sub working!\n");
		return 0;
	} else {
		fm_printf("Sub not working!\n");
		return 1;
	}
}

uint32_t test_mul()
{
	uint32_t res_tab[8]={0,0,0,0,0}, res_code;
	bn_uint_t res = { res_tab, 8 };


	res_code = bn_mul(&test_b, &test_a, &res);
	switch(res_code)
	{
		case 0:
			fm_printf("-----b    :%8x %8x %8x %8x %8x %8x %8x %8x  -----\n", 0, 0, 0, 0, test_b.number[3], test_b.number[2],test_b.number[1],test_b.number[0]);
			fm_printf("-----a    :%8x %8x %8x %8x %8x %8x %8x %8x  -----\n", 0, 0, 0, 0, test_a.number[3], test_a.number[2],test_a.number[1],test_a.number[0]);
			fm_printf("-----res  :%8x %8x %8x %8x %8x %8x %8x %8x  -----\n", res.number[7], res.number[6], res.number[5], res.number[4],res.number[3],res.number[2], res.number[1], res.number[0]);
			fm_printf("-----resOK:%8x %8x %8x %8x %8x %8x %8x %8x  -----\n", mul_res.number[7], mul_res.number[6], mul_res.number[5], mul_res.number[4],mul_res.number[3],mul_res.number[2], mul_res.number[1], mul_res.number[0]);
			if (bn_is_equal(&res, &mul_res) == 0) {
				fm_printf("Mul working!\n");
				return 0;
			} else {
				fm_printf("Mul not working!\n");
				return 1;
			}
			break;
		case 1:
			fm_printf("a and b length not the same\n");
			break;
		case 2:
			fm_printf("result too short!\n");
			break;
		case 3:
			fm_printf("Fatal Error, math is lying!\n");
			break;
	}
	return 1;

}

