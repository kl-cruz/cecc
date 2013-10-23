#ifndef PLATFORM_UTILS_H_
#define PLATFORM_UTILS_H_

#include <stdint.h>

//Platform dependent code

#ifdef CHIBIOS_PRINTF //microcontrollers
#include "ch.h"
#include "hal.h"

int ch_putchar(int c);

//fm_set_out_f(ch_putchar);
#define fm_putchar(c) chIOPut((BaseChannel *)&SD2, c)

//STM32 not support assert for now
#define assert(c) (void)(c)

#else //PC
#include <assert.h>
#include <stdlib.h>
#include <stdio.h>
#define fm_putchar putchar
#endif


//Platform independent code

#include "format.h"
#include "format_printf.h"

#ifndef PRINT_INFO_DISABLE

#define error(_format, ...) fm_printf("\nERROR: %d :" # _format, __LINE__, ##__VA_ARGS__)
#define warn(_format, ...)  fm_printf("\nWARN: %d :" #  _format, __LINE__, ##__VA_ARGS__)
#define info(_format, ...)  fm_printf("\nINFO: %d :" # _format, __LINE__, ##__VA_ARGS__)
#define debug(_format, ...) fm_printf("\nDEBUG: %d :"# _format, __LINE__, ##__VA_ARGS__)

#else
#define error(_format, ...)
#define warn(_format, ...)
#define info(_format, ...)
#define debug(_format, ...)
#endif

#define UNUSED(x)   (void)(x);



void init(void);


void start_count_time(void);
void stop_count_time(void);
uint32_t get_us(void);




#endif
