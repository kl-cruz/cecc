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
//	assert_true(test_field__sub2() == 0);

}

void tests(void)
{
	run_test(tests_bignumber);
}

void execute_function_with_count_time(void (*function)(void))
{
	start_count_time();
	(*function)();
	stop_count_time();
	fm_printf("\n\n----> Elapsed time:%d us <----\n\n", get_us());
}

int main(void)
{

	init();

	test_fixture_start()
	;
	run_test(tests_bignumber);
	test_fixture_end()
	;

	/*info("###################\n");
	info("# Start tests     #\n");
	info("###################\n");*/

	/*info("----------------------TEST ADD--------------------------------------------\n");
	 test_add();
	 info("----------------------TEST ADD2-------------------------------------------\n");
	 test_add2();
	 info("----------------------TEST SUB--------------------------------------------\n");
	 test_sub();
	 info("----------------------TEST SUB2-------------------------------------------\n");
	 test_sub2();
	 info("----------------------TEST MUL--------------------------------------------\n");
	 test_mul();

	 info("----------------------TEST FIELD SUB--------------------------------------\n");
	 test_field_sub();
	 info("----------------------TEST FIELD SUB3-------------------------------------\n");
	 test_field_sub2();
	 info("----------------------TEST FIELD ADD--------------------------------------\n");
	 test_field_add();*/

	/*info("###################\n");
	info("# Finish tests    #\n");
	info("###################\n");*/
	return 0;
}
