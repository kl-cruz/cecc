/*
 * main.c
 *
 * All rights reserved.
 *
 *  Created on: 17-10-2013
 *      Author: Karol Lasończyk
 */

#include "platform_utils.h"
#include "seatest.h"

//tests
#include "test_example.h"
#include  "test_bignum.h"

void lol(void)
{
	assert_true(test_example() == 1);
}

void tests(void)
{
	test_fixture_start();
	run_test(lol);
	test_fixture_end();
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
	info("###################\n");
	info("# Start tests     #\n");
	info("###################\n");

	//execute_function_with_count_time(tests);
	info("----------------------TEST ADD--------------------------------------------\n");
	test_add();
	info("----------------------TEST ADD2-------------------------------------------\n");
	test_add2();
	info("----------------------TEST ADD3-------------------------------------------\n");
	test_add3();
	info("----------------------TEST SUB--------------------------------------------\n");
	test_sub();
	info("----------------------TEST SUB2-------------------------------------------\n");
	test_sub2();

	/*
	info("----------------------TEST MUL--------------------------------------------\n");
	test_mul();*/

	info("----------------------TEST FIELD SUB--------------------------------------\n");
	//test_field_sub();
	test_field_sub2();
	info("----------------------TEST FIELD ADD--------------------------------------\n");
	test_field_add();

	info("###################\n");
	info("# Finish tests    #\n");
	info("###################\n");
	return 0;
}
