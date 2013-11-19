#include <string.h>
#include <stdlib.h>
#include <stdint.h>

#include "seatest.h"
#include "platform_utils.h"

unsigned int get_ms_time(void)
{
	return 0;
}

#ifdef SEATEST_INTERNAL_TESTS
static int sea_test_last_passed = 0;
#endif

static int seatest_screen_width = 70;
static int sea_tests_run = 0;
static int sea_tests_passed = 0;
static int sea_tests_failed = 0;
static int seatest_display_only = 0;
static int seatest_machine_readable = 0; //UNITTEST_RUNNER;
static char* seatest_current_fixture;
static char* seatest_current_fixture_path;
static char seatest_magic_marker[20] = "";

static seatest_void_void suite_setup_cb = NULL;
static seatest_void_void suite_teardown_cb = NULL;
static seatest_void_void fixture_setup_cb = NULL;
static seatest_void_void fixture_teardown_cb = NULL;

static char buffer[SEATEST_PRINT_BUFFER_SIZE];

void seatest_result_juint(int passed, char* reason, const char* function, unsigned int line);

void (*seatest_simple_test_result)(int passed, char* reason, const char* function, unsigned int line) = seatest_simple_test_result_log; //seatest_simple_test_result_log;

void fill_seq(uint8_t *buffer, uint16_t length)
{
	int i;
	for (i = 0; i < length; i++) {
		buffer[i] = i;
	}
}

void set_suite_setup(seatest_void_void setup)
{
	suite_setup_cb = setup;
}
void set_suite_teardown(seatest_void_void teardown)
{
	suite_teardown_cb = teardown;
}

int seatest_is_display_only(void)
{
	return seatest_display_only;
}

void suite_setup(void)
{
	if (suite_setup_cb != 0)
		suite_setup_cb();
}

void suite_teardown(void)
{
	if (suite_teardown_cb != 0)
		suite_teardown_cb();
}

void set_fixture_setup(void (*setup)(void))
{
	fixture_setup_cb = setup;
}
void set_fixture_teardown(void (*teardown)(void))
{
	fixture_teardown_cb = teardown;
}

void fixture_setup(void)
{
	if (fixture_setup_cb != 0)
		fixture_setup_cb();
}

void fixture_teardown(void)
{
	if (fixture_teardown_cb != 0)
		fixture_teardown_cb();
}

char* test_file_name(char* path)
{
	char* file = path + strlen(path);
	while (file != path && *file != '\\')
		file--;
	if (*file == '\\')
		file++;
	return file;
}

static int seatest_fixture_tests_run;
static int seatest_fixture_tests_failed;

void seatest_simple_test_result_log(int passed, char* reason, const char* function, unsigned int line)
{
	if (!passed) {

		error("%-30s Line %-5d %s", function, line, reason);

		sea_tests_failed++;
	} else {
		/*if (seatest_verbose)*/{

			info("%-30s Line %-5d Passed", function, line);

		}
		sea_tests_passed++;
	}
}

//machine readable
void seatest_simple_test_result_log_machine_readable(int passed, char* reason, const char* function, unsigned int line)
{
	if (!passed) {
		error("fail,%s,%s,%u,%s", seatest_current_fixture_path, function, line, reason);
		sea_tests_failed++;
	} else {
		info("pass,%s,%s,%u", seatest_current_fixture_path, function, line);
		sea_tests_passed++;
	}
}

//Output for junit

void seatest_result_juint(int passed, char* reason, const char* function, unsigned int line)
{
	if (!passed) {
		fm_printf("\n<testcase classname=\"%s\" name=\"%s:%d\" time=\"0.00\" >\n<failure message=\"test failure\">%s\n</failure>\n</testcase>",
				function, function, line, reason);
		sea_tests_failed++;
	} else {
		fm_printf("\n<testcase classname=\"%s\" name=\"%s:%d\" time=\"0.00\" />", function, function, line);
		sea_tests_passed++;
	}
}

void seatest_assert_true(int test, const char* function, unsigned int line)
{
	seatest_simple_test_result(test, "Should have been true", function, line);

}

void seatest_assert_false(int test, const char* function, unsigned int line)
{
	seatest_simple_test_result(!test, "Should have been false", function, line);
}

void seatest_assert_int_equal(int expected, int actual, const char* function, unsigned int line)
{
	fm_snprintf(buffer, SEATEST_PRINT_BUFFER_SIZE, "Expected %d but was %d", expected, actual);
	seatest_simple_test_result(expected == actual, buffer, function, line);
}

void seatest_assert_ulong_equal(unsigned long expected, unsigned long actual, const char* function, unsigned int line)
{

	fm_snprintf(buffer, SEATEST_PRINT_BUFFER_SIZE, "Expected %lu but was %lu", expected, actual);
	seatest_simple_test_result(expected == actual, buffer, function, line);
}

void seatest_assert_float_equal(float expected, float actual, float delta, const char* function, unsigned int line)
{

	float result = expected - actual;
	fm_snprintf(buffer, SEATEST_PRINT_BUFFER_SIZE, "Expected %f but was %f", expected, actual);
	if (result < 0.0)
		result = 0.0f - result;
	seatest_simple_test_result(result <= delta, buffer, function, line);
}

void seatest_assert_double_equal(double expected, double actual, double delta, const char* function, unsigned int line)
{

	double result = expected - actual;
	fm_snprintf(buffer, SEATEST_PRINT_BUFFER_SIZE, "Expected %f but was %f", expected, actual);
	if (result < 0.0)
		result = 0.0 - result;
	seatest_simple_test_result(result <= delta, buffer, function, line);
}

void seatest_assert_string_equal(char* expected, char* actual, const char* function, unsigned int line)
{
	int comparison;

	if ((expected == (char *) 0) && (actual == (char *) 0)) {
		fm_snprintf(buffer, SEATEST_PRINT_BUFFER_SIZE, "Expected <NULL> but was <NULL>");
		comparison = 1;
	} else if ((expected == (char *) 0)) {
		fm_snprintf(buffer, SEATEST_PRINT_BUFFER_SIZE, "Expected <NULL> but was %s", actual);
		comparison = 0;
	} else if ((actual == (char *) 0)) {
		fm_snprintf(buffer, SEATEST_PRINT_BUFFER_SIZE, "Expected %s but was <NULL>", expected);
		comparison = 0;
	} else {
		comparison = strcmp(expected, actual) == 0;
		fm_snprintf(buffer, SEATEST_PRINT_BUFFER_SIZE, "Expected %s but was %s", expected, actual);
	}

	seatest_simple_test_result(comparison, buffer, function, line);
}

void seatest_assert_string_ends_with(char* expected, char* actual, const char* function, unsigned int line)
{
	fm_snprintf(buffer, SEATEST_PRINT_BUFFER_SIZE, "Expected %s to end with %s", actual, expected);
	seatest_simple_test_result(strcmp(expected, actual + (strlen(actual) - strlen(expected))) == 0, buffer, function, line);
}

void seatest_assert_string_starts_with(char* expected, char* actual, const char* function, unsigned int line)
{
	fm_snprintf(buffer, SEATEST_PRINT_BUFFER_SIZE, "Expected %s to start with %s", actual, expected);
	seatest_simple_test_result(strncmp(expected, actual, strlen(expected)) == 0, buffer, function, line);
}

void seatest_assert_string_contains(char* expected, char* actual, const char* function, unsigned int line)
{
	fm_snprintf(buffer, SEATEST_PRINT_BUFFER_SIZE, "Expected %s to be in %s", expected, actual);
	seatest_simple_test_result(strstr(actual, expected) != 0, buffer, function, line);
}

void seatest_assert_string_doesnt_contain(char* expected, char* actual, const char* function, unsigned int line)
{
	fm_snprintf(buffer, SEATEST_PRINT_BUFFER_SIZE, "Expected %s not to have %s in it", actual, expected);
	seatest_simple_test_result(strstr(actual, expected) == 0, buffer, function, line);
}

void seatest_assert_memory_equal(void *expected, void *actual, size_t len, const char *function, unsigned int line)
{
	fm_snprintf(buffer, SEATEST_PRINT_BUFFER_SIZE, "Expected %p to be the same as %p", actual, expected);
	seatest_simple_test_result(memcmp(expected, actual, len) == 0, buffer, function, line);
}

void seatest_run_test(char* fixture, char* test)
{
	UNUSED(fixture);
	UNUSED(test);
	sea_tests_run++;
}

void seatest_header_printer(char* s, int length, char f)
{
	int l = strlen(s);
	int d = (length - (l + 2)) / 2;
	int i;

	if (seatest_is_display_only() || seatest_machine_readable)
		return;

	memset(buffer, 0, SEATEST_PRINT_BUFFER_SIZE);

	for (i = 0; i < d; i++)
		buffer[i] = f;
	if (l == 0)
		fm_snprintf(&buffer[i], SEATEST_PRINT_BUFFER_SIZE, "%c%c", f, f);
	else
		fm_snprintf(&buffer[i], SEATEST_PRINT_BUFFER_SIZE, " %s ", s);
	for (i = (d + l + 2); i < length; i++)
		buffer[i] = f;

	info("%s", buffer);
}

void seatest_test_fixture_start(char* filepath)
{
	seatest_current_fixture_path = filepath;
	seatest_current_fixture = test_file_name(filepath);
	seatest_header_printer(seatest_current_fixture, seatest_screen_width, '-');
	seatest_fixture_tests_failed = sea_tests_failed;
	seatest_fixture_tests_run = sea_tests_run;
	fixture_teardown_cb = NULL;
	fixture_setup_cb = NULL;
}

void seatest_test_fixture_end()
{
	if (seatest_machine_readable) {
		info("summary,%s,%d,%d", seatest_current_fixture, sea_tests_run - seatest_fixture_tests_run, sea_tests_failed - seatest_fixture_tests_failed);
	} else {
		seatest_header_printer("", seatest_screen_width, '-');
		info("Fixture %s: %d run %d failed", seatest_current_fixture, sea_tests_run - seatest_fixture_tests_run,
				sea_tests_failed - seatest_fixture_tests_failed);
	}
}

static char* seatest_fixture_filter = 0;
static char* seatest_test_filter = 0;

void fixture_filter(char* filter)
{
	seatest_fixture_filter = filter;
}

void test_filter(char* filter)
{
	seatest_test_filter = filter;
}

void set_magic_marker(char* marker)
{
	if (marker == NULL )
		return;
	strcpy(seatest_magic_marker, marker);
}

void seatest_display_test(char* fixture_name, char* test_name)
{
	if (test_name == NULL )
		return;
	info("%s,%s", fixture_name, test_name);
}

int seatest_should_run(char* fixture, char* test)
{
	int run = 1;
	if (seatest_fixture_filter) {
		if (strncmp(seatest_fixture_filter, fixture, strlen(seatest_fixture_filter)) != 0)
			run = 0;
	}
	if (seatest_test_filter && test != NULL ) {
		if (strncmp(seatest_test_filter, test, strlen(seatest_test_filter)) != 0)
			run = 0;
	}

	if (run && seatest_display_only) {
		seatest_display_test(fixture, test);
		run = 0;
	}
	return run;
}

#ifdef CHIBIOS
static WORKING_AREA(waTestRunner, 4096);

msg_t seatest_runner_thd(void *args)
{
	seatest_void_void tests = (seatest_void_void)args;

	if (seatest_machine_readable) {
		seatest_header_printer("", seatest_screen_width, '=');
	}

	unsigned long start = get_ms_time();
	tests();
	unsigned long end = get_ms_time();

	if (!seatest_machine_readable) {
		if (sea_tests_failed > 0) {
			error("FAILED %d tests [Run %d tests in %lu ms]", sea_tests_failed, sea_tests_run, end - start);
		} else {
			info("ALL PASSED [Run %d tests in %lu ms]", sea_tests_run, end - start);
		}
		seatest_header_printer("", seatest_screen_width, '=');
	} else {
		info("result,%d,%d,%ld", sea_tests_run, sea_tests_failed, end - start);
	}

	return sea_tests_failed == 0;
}

void seatest_runner(seatest_void_void tests, seatest_void_void setup, seatest_void_void teardown)
{
	set_suite_setup(setup);
	set_suite_teardown(teardown);
	chThdCreateStatic(waTestRunner, sizeof(waTestRunner), NORMALPRIO, seatest_runner_thd, tests);
}

#endif

#ifdef SEATEST_INTERNAL_TESTS
void seatest_simple_test_result_nolog(int passed, char* reason, const char* function, unsigned int line)
{
	sea_test_last_passed = passed;
}

void seatest_assert_last_passed()
{
	assert_int_equal(1, sea_test_last_passed);
}

void seatest_assert_last_failed()
{
	assert_int_equal(0, sea_test_last_passed);
}*/

void seatest_disable_logging()
{
	seatest_simple_test_result = seatest_simple_test_result_nolog;
}

void seatest_enable_logging()
{
	seatest_simple_test_result = seatest_simple_test_result_log;
}
#endif
