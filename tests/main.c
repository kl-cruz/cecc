/*
 * main.c
 *
 * All rights reserved.
 *
 *  Created on: 17-10-2013
 *      Author: Karol Lasończyk
 */

#include "platform_utils.h"

//tests
#include  "test_bignum.h"
#include  "test_bignum_fixtures.h"
#include  "test_ecc_fixtures.h"
#include "nist_curves.h"
#include "test_ecc.h"
#include "seatest.h"

void tests_shr(void)
{
	uint32_t i;
	for (i = 0; i < shr_128_tab_len; ++i) {
		assert_true(test_shr(shr_128_test_tab[i][0], shr_128_test_tab[i][1]) == 0);
	}
	for (i = 0; i < shr_256_tab_len; ++i) {
		assert_true(test_shr(shr_256_test_tab[i][0], shr_256_test_tab[i][1]) == 0);
	}
}

void tests_add(void)
{
	uint32_t i;
	for (i = 0; i < add_128_tab_len; ++i) {
		assert_true(test_add(add_128_test_tab[i][0], add_128_test_tab[i][1], add_128_test_tab[i][2]) == 0);
	}
	for (i = 0; i < add_256_tab_len; ++i) {
		assert_true(test_add(add_256_test_tab[i][0], add_256_test_tab[i][1], add_256_test_tab[i][2]) == 0);
	}
}

void tests_sub(void)
{
	uint32_t i;
	for (i = 0; i < sub_128_tab_len; ++i) {
		assert_true(test_sub(sub_128_test_tab[i][0], sub_128_test_tab[i][1], sub_128_test_tab[i][2]) == 0);
	}
	for (i = 0; i < sub_256_tab_len; ++i) {
		assert_true(test_sub(sub_256_test_tab[i][0], sub_256_test_tab[i][1], sub_256_test_tab[i][2]) == 0);
	}
}

void tests_mul(void)
{
	uint32_t i;
	for (i = 0; i < mul_128_tab_len; ++i) {
		assert_true(test_mul(mul_128_test_tab[i][0], mul_128_test_tab[i][1], mul_128_test_tab[i][2]) == 0);
	}
	for (i = 0; i < mul_256_tab_len; ++i) {
		assert_true(test_mul(mul_256_test_tab[i][0], mul_256_test_tab[i][1], mul_256_test_tab[i][2]) == 0);
	}
}

void tests_field_add(void)
{
	uint32_t i = 0;
	for (i = 0; i < add_mod_128_tab_len; ++i) {
		assert_true(
				test_field_add(add_mod_128_test_tab[i][0], add_mod_128_test_tab[i][1], add_mod_128_test_tab[i][2], add_mod_128_test_tab[i][3]) == 0);
	}
	for (i = 0; i < add_mod_256_tab_len; ++i) {
		assert_true(
				test_field_add(add_mod_256_test_tab[i][0], add_mod_256_test_tab[i][1], add_mod_256_test_tab[i][2], add_mod_256_test_tab[i][3]) == 0);
	}
}

void tests_field_sub(void)
{
	uint32_t i;
	for (i = 0; i < sub_mod_128_tab_len; ++i) {
		assert_true(
				test_field_sub(sub_mod_128_test_tab[i][0], sub_mod_128_test_tab[i][1], sub_mod_128_test_tab[i][2], sub_mod_128_test_tab[i][3]) == 0);
	}
	for (i = 0; i < sub_mod_256_tab_len; ++i) {
		assert_true(
				test_field_sub(sub_mod_256_test_tab[i][0], sub_mod_256_test_tab[i][1], sub_mod_256_test_tab[i][2], sub_mod_256_test_tab[i][3]) == 0);
	}
}

void tests_field_mul(void)
{
	uint32_t i;
	for (i = 0; i < mul_mod_barret_128_tab_len; ++i) {
		assert_true(
				test_field_mul_barret(mul_mod_barret_128_test_tab[i][0], mul_mod_barret_128_test_tab[i][1], &mul_mod_barret_128_mi_,
						&mul_mod_barret_128_p_, mul_mod_barret_128_test_tab[i][2]) == 0);
	}
	for (i = 0; i < mul_mod_barret_256_tab_len; ++i) {
		assert_true(
				test_field_mul_barret(mul_mod_barret_256_test_tab[i][0], mul_mod_barret_256_test_tab[i][1], &mul_mod_barret_256_mi_,
						&mul_mod_barret_256_p_, mul_mod_barret_256_test_tab[i][2]) == 0);
	}
}

void tests_field_inv(void)
{
	uint32_t i;
	for (i = 0; i < inv_mod_128_tab_len; ++i) {
		assert_true(test_field_inv(inv_mod_128_test_tab[i][0], inv_mod_128_test_tab[i][1], inv_mod_128_test_tab[i][2]) == 0);
	}
	for (i = 0; i < inv_mod_256_tab_len; ++i) {
		assert_true(test_field_inv(inv_mod_256_test_tab[i][0], inv_mod_256_test_tab[i][1], inv_mod_256_test_tab[i][2]) == 0);
	}
}

void tests_barret_modulus(void)
{
	uint32_t i = 0;
	for (i = 0; i < mod_barret_128_tab_len; ++i) {
		assert_true(test_barret_mod(mod_barret_128_test_tab[i][0], &mod_barret_128_mi_, &mod_barret_128_p_, mod_barret_128_test_tab[i][1]) == 0);
	}
	for (i = 0; i < mod_barret_256_tab_len; ++i) {
		assert_true(test_barret_mod(mod_barret_256_test_tab[i][0], &mod_barret_256_mi_, &mod_barret_256_p_, mod_barret_256_test_tab[i][1]) == 0);
	}
}

void bignum_tests(void)
{
	test_fixture_start()
	;
	run_test(tests_shr);
	run_test(tests_add);
	run_test(tests_sub);
	run_test(tests_mul);
	run_test(tests_field_add);
	run_test(tests_field_sub);
	run_test(tests_field_mul);
	run_test(tests_field_inv);
	run_test(tests_barret_modulus);
	test_fixture_end()
	;
}

void tests_ecc_add(void)
{
	uint32_t i = 0;
	for (i = 0; i < ecc_points_add_secp256r1_tab_len; ++i) {
		assert_true(
				test_ecc_add(ecc_points_add_secp256r1_test_tab[i][0], ecc_points_add_secp256r1_test_tab[i][1],
						ecc_points_add_secp256r1_test_tab[i][2], ecc_points_add_secp256r1_test_tab[i][3], ecc_points_add_secp256r1_test_tab[i][4],
						ecc_points_add_secp256r1_test_tab[i][5], &ec_secp256r1) == 0);
	}
}

void tests_ecc_double(void)
{
	uint32_t i = 0;
	for (i = 0; i < ecc_points_double_secp256r1_tab_len; ++i) {
		assert_true(
				test_ecc_double(ecc_points_double_secp256r1_test_tab[i][0], ecc_points_double_secp256r1_test_tab[i][1],
						ecc_points_double_secp256r1_test_tab[i][2], ecc_points_double_secp256r1_test_tab[i][3], &ec_secp256r1) == 0);
	}
}

//de2444be bc8d36e6 82edd27e 0f271508 617519b3 221a8fa0 b77cab39 89da97c9
uint32_t Sx[8] = { 0x89da97c9, 0xb77cab39, 0x221a8fa0, 0x617519b3, 0x0f271508, 0x82edd27e, 0xbc8d36e6, 0xde2444be };
const bn_uint_t ecc_mul_sx = { .number = Sx, .length = 8 };

//c093ae7f f36e5380 fc01a5aa d1e66659 702de80f 53cec576 b6350b24 3042a256
uint32_t Sy[8] = { 0x3042a256, 0xb6350b24, 0x53cec576, 0x702de80f, 0xd1e66659, 0xfc01a5aa, 0xf36e5380, 0xc093ae7f };
const bn_uint_t ecc_mul_sy = { .number = Sy, .length = 8 };

//51d08d5f 2d427888 2946d88d 83c97d11 e62becc3 cfc18bed acc89ba3 4eeca03f
uint32_t resultMultx[8] = { 0x4eeca03f, 0xacc89ba3, 0xcfc18bed, 0xe62becc3, 0x83c97d11, 0x2946d88d, 0x2d427888, 0x51d08d5f };
const bn_uint_t ecc_mul_res_x = { .number = resultMultx, .length = 8 };

//75ee68eb 8bf626aa 5b673ab5 1f6e744e 06f8fcf8 a6c0cf30 35beca95 6a7b41d5
uint32_t resultMulty[8] = { 0x6a7b41d5, 0x35beca95, 0xa6c0cf30, 0x06f8fcf8, 0x1f6e744e, 0x5b673ab5, 0x8bf626aa, 0x75ee68eb };
const bn_uint_t ecc_mul_res_y = { .number = resultMulty, .length = 8 };

//c51e4753 afdec1e6 b6c6a5b9 92f43f8d d0c7a893 3072708b 6522468b 2ffb06fd
uint32_t secret[8] = { 0x2ffb06fd, 0x6522468b, 0x3072708b, 0xd0c7a893, 0x92f43f8d, 0xb6c6a5b9, 0xafdec1e6, 0xc51e4753 };
const bn_uint_t ecc_k = { .number = secret, .length = 8 };

void tests_ecc_mul(void)
{
	uint32_t i = 0;
	//for (i = 0; i < ecc_points_double_secp256r1_tab_len; ++i) {
		assert_true(
				test_ecc_mul(&ecc_mul_sx,&ecc_mul_sy,&ecc_k,&ecc_mul_res_x,&ecc_mul_res_y,&ec_secp256r1) == 0);
	//}
}

void ecc_ops_tests(void)
{
	test_fixture_start()
	;
	run_test(tests_ecc_add);
	run_test(tests_ecc_double);
	run_test(tests_ecc_mul);
	test_fixture_end()
	;
}

int main(void)
{

	init();
	bignum_tests();
	ecc_ops_tests();

	fm_printf("\n");
	return 0;
}
