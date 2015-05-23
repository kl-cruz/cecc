/*
 * platform_utils.c
 *
 * All rights reserved.
 *
 *  Created on: 17-10-2013
 *      Author: Karol Lasończyk
 */

#include "platform_utils.h"

#include "ch.h"
#include "hal.h"
#include "usb.h"
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

        /*
         * Initializes a serial-over-USB CDC driver.
         */
        sduObjectInit(&SDU1);
        sduStart(&SDU1, &serusbcfg);

        /*
         * Activates the USB driver and then the USB bus pull-up on D+.
         * Note, a delay is inserted in order to not have to disconnect the cable
         * after a reset.
         */
        usbDisconnectBus(serusbcfg.usbp);
        chThdSleepMilliseconds(1000);
        usbStart(serusbcfg.usbp, &usbcfg);
        usbConnectBus(serusbcfg.usbp);

        /*
         * Stopping and restarting the USB in order to test the stop procedure. The
         * following lines are not usually required.
         */
        chThdSleepMilliseconds(3000);
	info("---------------ECDSA ECDH Test Suite---------------");
        info("CPU frequency %f MHz", STM32_SYSCLK/1000000.0);
	info("---------------------------------------------------");
        chThdSleepMilliseconds(3000);
}
//Convert ticks to µs
//#define RTT2US(ticks) ((ticks) / (halGetCounterFrequency() / 1000000UL))

//uint32_t start_time,stop_time;

time_measurement_t tm;

/**
 * @brief start counting time
 */
void start_count_time(void)
{
    chTMObjectInit(&tm);
    chTMStartMeasurementX(&tm);
}

/**
 * @brief stop counting time
 */
void stop_count_time(void)
{
    chTMStopMeasurementX(&tm);
}
/**
 * @brief Function returns elapsed time (stop-start) in µs
 * @return time in µs
 */
uint32_t get_us(void)
{
    return RTC2US(168000000, tm.last);
}
/**
 * @brief Function required to properly using format library
 * @param c char
 * @return
 */
int fm_putchar(int c)
{
    chThdSleepMilliseconds(2);
    chSequentialStreamPut(&SDU1, (uint8_t)c);
    return 1;
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
            tmp.number[i]=i*42*j*tm.best*j*j*tm.last*j*j*j;
                ++j;
	}
	bn_copy(&tmp, output, output->length);
}
