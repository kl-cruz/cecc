# Imported source files

# 

PROJECT = test_main

FWSRC = main.c seatest.c platform_utils.c format/src/format.c format/lib/format_printf.c format/lib/format_snprintf.c\
		test_example.c \
		../cecc-lib/bignum/bignum.c \
		test_bignum.c 

FWINC = . format/src format/lib ../cecc-lib/bignum

PRJ_ROOT = 

BUILDDIR = build_$(target)
ifeq ($(target),posix)
    include posix.mk
else

ifeq ($(target),stm32f4)
    include STM32F4.mk
endif

UDEFS += -DCHIBIOS_PRINTF
endif
