/*
 * platform_utils.c
 *
 * All rights reserved.
 *
 *  Created on: 17-10-2013
 *      Author: Karol Lasończyk
 */

#include <stdlib.h>
#include <stdint.h>


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
}



#define RTT2US(ticks) ((ticks) / (halGetCounterFrequency() / 1000000UL))

static TimeMeasurement time;

void start_count_time(void)
{
	tmObjectInit(&time);
	tmStartMeasurement(&time);
}
void stop_count_time(void)
{
	tmStopMeasurement(&time);
}
uint32_t get_us(void)
{
	return RTT2US(time.last);
}


int fm_putchar(int c)
{
	return chIOPut((BaseChannel *)&SD2, c);
}
#else

#include <sys/time.h>
#include <stdio.h>

struct timeval start,stop;

void init(void){

}

void start_count_time(void)
{
	gettimeofday(&start, NULL);
}
void stop_count_time(void)
{
	gettimeofday(&stop, NULL);
}
uint32_t get_us(void)
{
	return stop.tv_usec - start.tv_usec;
}

int fm_putchar(int c)
{
	return putchar(c);
}

#endif
