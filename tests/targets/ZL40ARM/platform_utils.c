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

        /* Timer configuration.*/
        rccEnableTIM3(FALSE);
        rccResetTIM3();
        rccEnableTIM4(FALSE);
        rccResetTIM4();

        TIM3->CR1  = 0;                          /* Initially stopped.       */
        TIM4->CR1  = 0;                          /* Initially stopped.       */

        TIM3->CR2  = TIM_CR2_MMS_1;
        TIM3->PSC  = ((STM32_TIMCLK2 / 1000000) - 1);                        /* Prescaler value.         */
        TIM3->SR   = 0;                          /* Clear pending IRQs.      */
        TIM3->DIER = 0;
        TIM3->SMCR = TIM_SMCR_MSM;

        TIM4->CR2  = 0;
        TIM4->PSC  = 0;                        /* Prescaler value.         */
        TIM4->SR   = 0;                          /* Clear pending IRQs.      */
        TIM4->DIER = 0;
        TIM4->SMCR = TIM_SMCR_TS_1 | TIM_SMCR_MSM | TIM_SMCR_SMS_2 | TIM_SMCR_SMS_1 | TIM_SMCR_SMS_0;

        TIM4->CR1 = TIM_CR1_CEN;

        TIM3->CNT  = 0;                          /* Initially stopped.       */
        TIM4->CNT  = 0;                          /* Initially stopped.       */

        start_count_time();
        chThdSleepMilliseconds(1000);
        stop_count_time();

        sdStart(&SD2, NULL);


        info("---------------ECDSA ECDH Test Suite---------------");
        info("CPU frequency %f MHz", STM32_SYSCLK/1000000.0);
        info("---------------------------------------------------");
        info("-----------------Timer second test-----------------");
        info("Start timer and wait 1 sec");
        start_count_time();
        chThdSleepMilliseconds(1000);
        stop_count_time();
        info("Timer result 1sec = %u us", get_us());
        info("---------------------------------------------------");
}

void inf_loop(void){
    while(1){
        chThdSleepSeconds(1);
    }
}

/**
 * @brief start counting time
 */
void start_count_time(void)
{
    TIM3->CNT  = 0;                          /* Initially stopped.       */
    TIM4->CNT  = 0;                          /* Initially stopped.       */
    TIM3->CR1 = TIM_CR1_CEN;
}

/**
 * @brief stop counting time
 */
void stop_count_time(void)
{
    TIM3->CR1 = 0;
}
/**
 * @brief Function returns elapsed time (stop-start) in µs
 * @return time in µs
 */
uint32_t get_us(void)
{
    uint32_t result = TIM4->CNT << 16;
    result |= TIM3->CNT;
    return result;
}

uint32_t get_ticks(void)
{
    uint32_t result = TIM4->CNT << 16;
    result |= TIM3->CNT;
    return result;
}
/**
 * @brief Function required to properly using format library
 * @param c char
 * @return
 */
int fm_putchar(int c)
{
  sdPut(&SD2, c);
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
                tmp.number[i]=j*rand();
		++j;
	}
	bn_copy(&tmp, output, output->length);
}
