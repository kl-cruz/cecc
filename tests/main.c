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
#include "seatest.h"

void tests_bignumber()
{
	assert_true(test_add() == 0);
	assert_true(test_add2() == 0);
	assert_true(test_sub() == 0);
	assert_true(test_sub2() == 0);
	assert_true(test_mul() == 0);
	assert_true(test_field_add() == 0);
	assert_true(test_field_sub() == 0);
	assert_true(test_field_sub2() == 0);

}

void tests(void)
{
	run_test(tests_bignumber);
}

int main(void)
{

	init();

	test_fixture_start();
	run_test(tests_bignumber);
	test_fixture_end();

	fm_printf("\n");
	return 0;
}
