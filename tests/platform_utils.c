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

#define RTT2US(ticks) ((ticks) / (halGetCounterFrequency() / 1000000UL))

uint32_t start_time,stop_time;

void start_count_time(void)
{
	start_time=halGetCounterValue();
}
void stop_count_time(void)
{
	stop_time=halGetCounterValue();
}
uint32_t get_us(void)
{
	return RTT2US(stop_time-start_time); //time.last);
}

int fm_putchar(int c)
{
	return chIOPut((BaseChannel *)&SD2, c);
}

/*Very but and not pseudo random generator but function returns different numbers*/
static uint32_t j;

void default_prgn(bn_uint_t *output)
{
	BN_CREATE_VARIABLE(tmp, output->length);
	uint32_t i;

	for(i=0;i<tmp.length;++i)
	{
		tmp.number[i]=i*42*j*j*j*j*j*j;
		++j;
	}
	bn_copy(&tmp, output, output->length);
}
#else

#include <sys/time.h>
#include <stdio.h>

struct timeval start, stop;

void init(void)
{

}

void start_count_time(void)
{
	gettimeofday(&start, NULL );
}
void stop_count_time(void)
{
	gettimeofday(&stop, NULL );
}
uint32_t get_us(void)
{
	int diff = (stop.tv_usec + 1000000 * stop.tv_sec) - (start.tv_usec + 1000000 * start.tv_sec);
	return diff;
}

int fm_putchar(int c)
{
	return putchar(c);
}

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
