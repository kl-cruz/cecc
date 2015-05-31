#ifndef PLATFORM_UTILS_H_
#define PLATFORM_UTILS_H_

#include <stdint.h>
#include "bignum.h"

//Platform dependent code
#include <assert.h>
#include <stdlib.h>
#include <stdio.h>

//Platform independent code

#include "format.h"
#include "format_printf.h"

#ifndef PRINT_INFO_DISABLE

#define error(_format, ...) fm_printf("\nERROR: %s [%d] :" # _format, __FILE__,__LINE__, ##__VA_ARGS__)
#define warn(_format, ...)  fm_printf("\nWARN: %s [%d] :" #  _format, __FILE__,__LINE__, ##__VA_ARGS__)
#define info(_format, ...)  fm_printf("\nINFO: %s [%d] :" # _format, __FILE__,__LINE__, ##__VA_ARGS__)
#define debug(_format, ...) fm_printf("\nDEBUG: %s [%d] :"# _format, __FILE__,__LINE__, ##__VA_ARGS__)

#else
#define error(_format, ...)
#define warn(_format, ...)
#define info(_format, ...)
#define debug(_format, ...)
#endif

#define UNUSED(x)   (void)(x);



void init(void);
void inf_loop(void);

void start_count_time(void);
void stop_count_time(void);
uint32_t get_us(void);
uint32_t get_ticks(void);
void default_prgn(bn_uint_t *output);

int fm_putchar(int c);



#endif
