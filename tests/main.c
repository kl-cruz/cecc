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
	 test_field_mul_barret(mul_mod_barret_128_test_tab[i][0], mul_mod_barret_128_test_tab[i][1],&mul_mod_barret_128_mi_,&mul_mod_barret_128_p_, mul_mod_barret_128_test_tab[i][2]) == 0);
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

int main(void)
{

	init();
	//bignum_tests();
	test_ecc_add();


	fm_printf("\n");
	return 0;
}
