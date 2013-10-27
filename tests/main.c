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
#include "test_example.h"
#include  "test_bignum.h"
#include  "test_bignum_fixtures.h"
#include "seatest.h"

void tests_bignumber(void)
{
	/*assert_true(test_shr(&shr_128_a, &res_shr_128) == 0);
	 assert_true(test_shr(&shr_256_a, &res_shr_256) == 0);
	 assert_true(test_add(&add128_a, &add128_b, &res_add128) == 0);
	 assert_true(test_add(&add256_a, &add256_b, &res_add256) == 0);
	 assert_true(test_sub(&sub128_a, &sub128_b, &res_sub128) == 0);
	 assert_true(test_sub(&sub256_a, &sub256_b, &res_sub256) == 0);

	 */
	assert_true(test_field_sub(&sub_mod_p_128_a, &sub_mod_p_128_b, &sub_mod_p_128_p, &res_sub_mod_p_128) == 0);
	assert_true(test_field_sub(&sub_mod_p_256_a, &sub_mod_p_256_b, &sub_mod_p_256_p, &res_sub_mod_p_256) == 0);
	//assert_true(test_mul(&mul128_a,&mul128_b,&res_mul128) == 0);
	//assert_true(test_mul(&mul256_a,&mul256_b,&res_mul256) == 0);
	assert_true(test_field_add(&add_mod_p_128_a, &add_mod_p_128_b, &add_mod_p_128_p, &res_add_mod_p_128) == 0);
	assert_true(test_field_add(&add_mod_p_256_a, &add_mod_p_256_b, &add_mod_p_256_p, &res_add_mod_p_256) == 0);

}

void tests(void)
{
	run_test(tests_bignumber);
}

int main(void)
{

	init();

	test_fixture_start()
	;
	run_test(tests_bignumber);
	test_fixture_end()
	;

	fm_printf("\n");
	return 0;
}
