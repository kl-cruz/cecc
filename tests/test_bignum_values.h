/*
 * test_bignum_values.h
 *
 * Copyright (c) 2013, Sastrion Sp. z o.o.
 * All rights reserved.
 *
 *  Created on: 23-10-2013
 *      Author: Karol Lasończyk
 */

#ifndef TEST_BIGNUM_VALUES_H_
#define TEST_BIGNUM_VALUES_H_

//magic starts here

//uint32_t test_tab_x[2] = { LSV, ... , MSV}; //less significant value, ... , most significant value

//Values for non modulo operators

//PSEUDORANDOM (human) A and B
//teat_a = 0xA749BE78 8351AFFF EFACD8E3 AAC53DBA
uint32_t test_tab_a[8] = { 0xAAC53DBA, 0xEFACD8E3, 0x8351AFFF, 0xC749BE78, 0, 0, 0, 0 };
//test_b = 0xB493ECFF 12345678 BABAFABE DEFA3256
uint32_t test_tab_b[8] = { 0xDEFA3256, 0xBABAFABE, 0x12345678, 0xB493ECFF, 0, 0, 0, 0 };

//a+b = 0x1 5BDDAB77 95860678 AA67D3A2 89BF7010
uint32_t res_tab_add_ab[8] = { 0x89BF7010, 0xAA67D3A2, 0x95860678, 0x7BDDAB77, 0x01, 0, 0, 0 };
//a-b = 0x12b5d179 711d5987 34f1de24 cbcb0b64
uint32_t res_tab_sub_ab[8] = { 0xcbcb0b64, 0x34f1de24, 0x711d5987, 0x12b5d179, 0x0, 0, 0, 0 };
//b-a = 0xD4A2E86 8EE2A678 CB0E21DB 3434F49C
uint32_t res_tab_sub_ba[8] = { 0x3434F49C, 0xCB0E21DB, 0x8EE2A678, 0xeD4A2E86, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff };
//b*a = 0x8c9301c3 a7c09872 0cbbbc60 ff7784ff 91738c79 7e272ac0 dca89807 77f5107c
uint32_t res_tab_mul_ba[8] = { 0x77F5107C, 0xDCA89807, 0x7E272AC0, 0x91738c79, 0xff7784ff, 0x0cbbbc60, 0xa7c09872, 0x8c9301c3 };

bn_uint_t test_a = { test_tab_a, 8 };
bn_uint_t test_b = { test_tab_b, 8 };
bn_uint_t add_res = { res_tab_add_ab, 8 };
bn_uint_t sub_res2 = { res_tab_sub_ab, 8 };
bn_uint_t sub_res = { res_tab_sub_ba, 8 };
bn_uint_t mul_res = { res_tab_mul_ba, 8 };














//Huge values for field op
uint32_t test_tab_amod[4] = { 0xAAC53DBA, 0xEFACD8E3, 0x8351AFFF, 0xC749BE78 };
uint32_t test_tab_bmod[4] = { 0xDEFA3256, 0xBABAFABE, 0x12345678, 0xB493ECFF};


uint32_t test_tab_p[4] = { 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFD, 0xFFFFFFFF };

//uint32_t test_tab_p[8] = { 0xFFFFFFFF, 0x00000001, 0x00000000, 0x00000000, 0x00000000, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF };
//12b5d179 711d5987 34f1de24 cbcb0b64
uint32_t res_sub_amod_bmod_modp[4] = { 0xcbcb0b64, 0x34f1de24, 0x711d5987, 0x12b5d179 };
//ed4a2e868ee2a658cb0e21db3434f49b
uint32_t res_sub2_amod_bmod_modp[4] = { 0x3434f49b, 0xcb0e21db, 0x8ee2a676, 0xed4a2e86 };
//7bddab77 95860698 aa67d3a2 89bf7011
uint32_t res_add_amod_bmod_modp[4] = { 0x89bf7011, 0xaa67d3a2, 0x9586067a, 0x7bddab77 };
//0x3257ccb2 ba247274 563c9063 f92a1d5b
uint32_t res_amod_inv_modp[4] = { 0xf92a1d5b, 0x563c9063, 0xba247274, 0x3257ccb2 };
//0x63a4df3c 41a8d7ff f7d66c71 d5629edd
uint32_t res_a_shr1[4] = { 0xd5629edd, 0xf7d66c71, 0x41a8d7ff, 0x63a4df3c };

bn_uint_t test_amod = { test_tab_amod, 4 };
bn_uint_t test_bmod = { test_tab_bmod, 4 };
bn_uint_t test_p = { test_tab_p, 4 };

bn_uint_t submod_res = { res_sub_amod_bmod_modp, 4 };
bn_uint_t submod2_res = { res_sub2_amod_bmod_modp, 4 };
bn_uint_t addmod_res = { res_add_amod_bmod_modp, 4};
bn_uint_t a1_modp_res = { res_amod_inv_modp, 4};
bn_uint_t a_shr_1_res = { res_a_shr1, 4};

#endif /* TEST_BIGNUM_VALUES_H_ */
