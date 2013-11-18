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
	for (i = 0; i < ecc_point_double_secp256r1_tab_len; ++i) {
		assert_true(
				test_ecc_double(ecc_point_double_secp256r1_test_tab[i][0], ecc_point_double_secp256r1_test_tab[i][1],
						ecc_point_double_secp256r1_test_tab[i][2], ecc_point_double_secp256r1_test_tab[i][3], &ec_secp256r1) == 0);
	}
}

void tests_ecc_mul(void)
{
	uint32_t i = 0;
	for (i = 0; i < ecc_point_mul_secp256r1_tab_len; ++i) {
		assert_true(
				test_ecc_mul(ecc_point_mul_secp256r1_test_tab[i][0], ecc_point_mul_secp256r1_test_tab[i][1], ecc_point_mul_secp256r1_test_tab[i][2],
						ecc_point_mul_secp256r1_test_tab[i][3], ecc_point_mul_secp256r1_test_tab[i][4], &ec_secp256r1) == 0);
	}
}

uint32_t BasePointx[8] = { 0xd898c296, 0xf4a13945, 0x2deb33a0, 0x77037d81, 0x63a440f2, 0xf8bce6e5, 0xe12c4247, 0x6b17d1f2 };
bn_uint_t base_point_x = { .number = BasePointx, .length = 8 };

//4fe342e2 fe1a7f9b 8ee7eb4a 7c0f9e16 2bce3357 6b315ece cbb64068 37bf51f5
uint32_t BasePointy[8] = { 0x37bf51f5, 0xcbb64068, 0x6b315ece, 0x2bce3357, 0x7c0f9e16, 0x8ee7eb4a, 0xfe1a7f9b, 0x4fe342e2 };
bn_uint_t base_point_y = { .number = BasePointy, .length = 8 };

const uint32_t ecdsaTestMessage[8] = { 0x65637572, 0x20612073, 0x68206F66, 0x20686173, 0x69732061, 0x68697320, 0x6F2C2054, 0x48616C6C };
bn_uint_t hash = { .number = ecdsaTestMessage, .length = 8 };

const uint32_t ecdsaTestSecret[8] = { 0x94A949FA, 0x401455A1, 0xAD7294CA, 0x896A33BB, 0x7A80E714, 0x4321435B, 0x51247A14, 0x45C1CB6B };
bn_uint_t secret = { .number = ecdsaTestSecret, .length = 8 };

const uint32_t ecdsaTestRand1[8] = { 0x1D1E1F20, 0x191A1B1C, 0x15161718, 0x11121314, 0x0D0E0F10, 0x090A0B0C, 0x05060708, 0x11020304 };
bn_uint_t random1 = { .number = ecdsaTestRand1, .length = 8 };
const uint32_t ecdsaTestresultR1[8] = { 0xC3B4035F, 0x515AD0A6, 0xBF375DCA, 0x0CC1E997, 0x7F54FDCD, 0x04D3FECA, 0xB9E396B9, 0x515C3D6E };
bn_uint_t res_r1 = { .number = ecdsaTestresultR1, .length = 8 };
const uint32_t ecdsaTestresultS1[8] = { 0x5366B1AB, 0x0F1DBF46, 0xB0C8D3C4, 0xDB755B6F, 0xB9BF9243, 0xE644A8BE, 0x55159A59, 0x6F9E52A6 };
bn_uint_t res_s1 = { .number = ecdsaTestresultS1, .length = 8 };

const uint32_t ecdsaTestRand2[8] = { 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0xFFFFFFFF, 0x01FFFFFF };
bn_uint_t random2 = { .number = ecdsaTestRand2, .length = 8 };
const uint32_t ecdsaTestresultR2[8] = { 0x14146C91, 0xE878724D, 0xCD4FF928, 0xCC24BC04, 0xAC403390, 0x650C0060, 0x4A30B3F1, 0x9C69B726 };
bn_uint_t res_r2 = { .number = ecdsaTestresultR2, .length = 8 };
const uint32_t ecdsaTestresultS2[8] = { 0x433AAB6F, 0x808250B1, 0xE46F90F4, 0xB342E972, 0x18B2F7E4, 0x2DB981A2, 0x6A288FA4, 0x41CF59DB };
bn_uint_t res_s2 = { .number = ecdsaTestresultS2, .length = 8 };

#include "../cecc-lib/bignum/bignum.h"

void tests_ecc_ECDSA(void)
{
	uint32_t i = 0, res;
	BN_CREATE_VARIABLE(r, hash.length);
	BN_CREATE_VARIABLE(s, hash.length);

	for (i = 0; i < P_256_SHA_1_tab_len; ++i) {
		start_count_time();
		res = ecc_ECDSA_signature_gen(P_256_SHA_1_tab[i][4], P_256_SHA_1_tab[i][0], P_256_SHA_1_tab[i][1], &r, &s, &ec_secp256r1);
		stop_count_time();
		info("ECDSA signature generation time:%f ms", get_us()/1000.0);
		assert_true(res == 0);
		assert_true(bn_compare(&r, P_256_SHA_1_tab[i][5]) == 0);
		assert_true(bn_compare(&s, P_256_SHA_1_tab[i][6]) == 0);
	}
	for (i = 0; i < P_256_SHA_1_tab_len; ++i) {
		start_count_time();
		res = ecc_ECDSA_signature_val(P_256_SHA_1_tab[i][5], P_256_SHA_1_tab[i][6], P_256_SHA_1_tab[i][0], P_256_SHA_1_tab[i][2],
				P_256_SHA_1_tab[i][3], &ec_secp256r1);
		stop_count_time();
		info("ECDSA signature validation time:%f ms", get_us()/1000.0);

		assert_true(res == 0);
	}
}

void ecc_ops_tests(void)
{
	test_fixture_start()
	;
	run_test(tests_ecc_add);
	run_test(tests_ecc_double);
	run_test(tests_ecc_mul);
	run_test(tests_ecc_ECDSA);
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
