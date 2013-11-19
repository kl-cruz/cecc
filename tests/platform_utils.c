/*
 * platform_utils.c
 *
 * All rights reserved.
 *
 *  Created on: 17-10-2013
 *      Author: Karol Lasończyk
 */

#include "platform_utils.h"

#ifdef CHIBIOS_PRINTF
#include "ch.h"
#include "hal.h"
#include <tm.h>
/**
 * @brief Init function executed in first lines of tests. Started properly Chibios and ARM
 */
void init(void)
{
	/*
	 * System initializations.
	 * - HAL initialization, this also initializes the configured device drivers
	 *   and performs the board-specific initializations.
	 * - Kernel initialization, the main() function becomes a thread and the
	 *   RTOS is active.
	 */
	halInit();
	chSysInit();

	/*
	 * Activates the serial driver 2 using the driver default configuration.
	 * PA2(TX) and PA3(RX) are routed to USART2.
	 */
	sdStart(&SD2, NULL);
	palSetPadMode(GPIOA, 2, PAL_MODE_ALTERNATE(7));
	palSetPadMode(GPIOA, 3, PAL_MODE_ALTERNATE(7));
	info("---------------ECDSA ECDH Test Suite---------------");
	info("CPU frequency %f MHz",halGetCounterFrequency()/1000000.0);
	info("---------------------------------------------------");
}
//Convert ticks to µs
#define RTT2US(ticks) ((ticks) / (halGetCounterFrequency() / 1000000UL))

uint32_t start_time,stop_time;

/**
 * @brief start counting time
 */
void start_count_time(void)
{
	start_time=halGetCounterValue();
}

/**
 * @brief stop counting time
 */
void stop_count_time(void)
{
	stop_time=halGetCounterValue();
}
/**
 * @brief Function returns elapsed time (stop-start) in µs
 * @return time in µs
 */
uint32_t get_us(void)
{
	return RTT2US(stop_time-start_time); //time.last);
}
/**
 * @brief Function required to properly using format library
 * @param c char
 * @return
 */
int fm_putchar(int c)
{
	return chIOPut((BaseChannel *)&SD2, c);
}

/*Not pseudo random generator but function returns different numbers*/
static uint32_t j;

/**
 * @brief very bad implementation pseudo random generator looks like high quality prgn
 * @param output pseudo random number
 */
void default_prgn(bn_uint_t *output)
{
	BN_CREATE_VARIABLE(tmp, output->length);
	uint32_t i;

	for(i=0;i<tmp.length;++i)
	{
		tmp.number[i]=i*42*j*stop_time*j*j*start_time*j*j*j;
		++j;
	}
	bn_copy(&tmp, output, output->length);
}
#else

#include <sys/time.h>
#include <stdio.h>

struct timeval start, stop;

/**
 * @brief Init function executed in first lines of tests
 */
void init(void)
{

}
/**
 * @brief start counting time
 */
void start_count_time(void)
{
	gettimeofday(&start, NULL );
}
/**
 * @brief stop counting time
 */
void stop_count_time(void)
{
	gettimeofday(&stop, NULL );
}
/**
 * @brief Function returns elapsed time (stop-start) in µs
 * @return time in µs
 */
uint32_t get_us(void)
{
	int diff = (stop.tv_usec + 1000000 * stop.tv_sec) - (start.tv_usec + 1000000 * start.tv_sec);
	return diff;
}
/**
 * @brief Function required to properly using format library
 * @param c char
 * @return
 */
int fm_putchar(int c)
{
	return putchar(c);
}

/**
 * @brief Default pseudo random generator implementation for PC
 * @param output pseudo random number
 */
void default_prgn(bn_uint_t *output)
{
	BN_CREATE_VARIABLE(tmp, output->length);
	uint32_t i;
	srand(random());
	for (i = 0; i < tmp.length; ++i) {
		tmp.number[i] = random();
	}
	bn_copy(&tmp, output, output->length);
}

#endif
