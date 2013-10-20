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
	fm_printf("###################\n");
	fm_printf("# Start tests     #\n");
	fm_printf("###################\n");

	//execute_function_with_count_time(tests);
	test_add();
	test_sub();
	test_mul();

	fm_printf("###################\n");
	fm_printf("# Finish tests    #\n");
	fm_printf("###################\n");
	return 0;
}
