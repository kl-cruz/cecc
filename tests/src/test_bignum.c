/*
 * test_bignum.c
 *
 * All rights reserved.
 *
 *  Created on: 17-10-2013
 *      Author: Karol Lasończyk
 */

#include "seatest.h"
#include "bignum.h"
#include "test_bignum.h"
#include "platform_utils.h"
#include <stdio.h>


void print_number(bn_uint_t *a)
{
    uint32_t i = 0;
    fm_printf("\n");
    for (i = a->length; i > 0; --i) {
        fm_printf("%8x ", a->number[i - 1]);
    }
    fm_printf("\n");
}

int print_values(int num_args, ...)
{
    bn_uint_t *val;
    va_list ap;
    int i;
    fm_printf("\n");
    va_start(ap, num_args);
    for (i = 0; i < num_args; i++) {
        val = va_arg(ap, bn_uint_t*);
        print_number(val);
    }
    va_end(ap);

    return 0;
}

uint32_t test_add(bn_uint_t *a, bn_uint_t *b, bn_uint_t *expected_result)
{
    BN_CREATE_VARIABLE(res, expected_result->length);
    bn_zero(&res);
    start_count_time();
    bn_add(a, b, &res);
    stop_count_time();
    info("add_time_%dB: %u us %u ticks", a->length, get_us(), get_ticks());
    return bn_compare(&res, expected_result);

}

uint32_t test_sub(bn_uint_t *a, bn_uint_t *b, bn_uint_t *expected_result)
{
    BN_CREATE_VARIABLE(res, expected_result->length);
    bn_zero(&res);
    start_count_time();
    bn_sub(a, b, &res);
    stop_count_time();
    info("sub_time_%dB: %u us %u ticks", a->length, get_us(), get_ticks());
    return bn_compare(&res, expected_result);
}

uint32_t test_mul(bn_uint_t *a, bn_uint_t *b, bn_uint_t *expected_result)
{
    BN_CREATE_VARIABLE(res, expected_result->length);
    start_count_time();
    bn_mul(a, b, &res);
    stop_count_time();
    info("mul_time_%dB: %u us %u ticks", a->length, get_us(), get_ticks());
    return bn_compare(&res, expected_result);
}

uint32_t test_square(bn_uint_t *a, bn_uint_t *expected_result)
{
    BN_CREATE_VARIABLE(res, expected_result->length);
    start_count_time();
    bn_square(a, &res);
    stop_count_time();
    info("square_time_%dB: %u us %u ticks", a->length, get_us(), get_ticks());
    return bn_compare(&res, expected_result);
}

uint32_t test_field_add(bn_uint_t *a, bn_uint_t *b, bn_uint_t *p, bn_uint_t *expected_result)
{
    BN_CREATE_VARIABLE(res, expected_result->length);
    start_count_time();
    bn_field_add(a, b, p, &res);
    stop_count_time();
    info("field_add_time_%dB: %u us %u ticks", a->length, get_us(), get_ticks());
    return bn_compare(&res, expected_result);
}

uint32_t test_field_sub(bn_uint_t *a, bn_uint_t *b, bn_uint_t *p, bn_uint_t *expected_result)
{
    BN_CREATE_VARIABLE(res, expected_result->length);
    start_count_time();
    bn_field_sub(a, b, p, &res);
    stop_count_time();
    info("field_sub_time_%dB: %u us %u ticks", a->length, get_us(), get_ticks());
    return bn_compare(&res, expected_result);
}

uint32_t test_field_inv(bn_uint_t *a, bn_uint_t *p, bn_uint_t *expected_result)
{
    BN_CREATE_VARIABLE(res, expected_result->length);
    start_count_time();
    uint32_t r = bn_field_inverse(a, p, &res);
    stop_count_time();
    info("field_inv_time_%dB: %u us %u ticks", a->length, get_us(), get_ticks());
    if(r==1)
    {
        error("bad numbers!");
    }
    return bn_compare(expected_result, &res);
}

uint32_t test_field_mul_barret(bn_uint_t *a, bn_uint_t *b, bn_uint_t *mi, bn_uint_t *p, bn_uint_t *expected_result)
{
    BN_CREATE_VARIABLE(res, expected_result->length);
    start_count_time();
    bn_field_mul_barret(a, b, mi, p, &res);
    stop_count_time();
    info("field_mul_time_%dB: %u us %u ticks", a->length, get_us(), get_ticks());
    return bn_compare(&res, expected_result);
}

uint32_t test_field_mul_add(bn_uint_t *a, bn_uint_t *b, bn_uint_t *mi, bn_uint_t *p, bn_uint_t *expected_result)
{
    (void)(mi);
    BN_CREATE_VARIABLE(res, expected_result->length);
    uint32_t i;
    start_count_time();
    bn_field_add(a, a, p, &res);
    for(i = 2; i<b->number[0]; ++i){
        bn_field_add(&res, a, p, &res);
    }
    stop_count_time();
    info("field_mul_by_%d_time_%dB: %u us %u ticks", b->number[0], a->length, get_us(), get_ticks());
    return bn_compare(&res, expected_result);
}

uint32_t test_shr(bn_uint_t *a, bn_uint_t *expected_result)
{
    BN_CREATE_VARIABLE(res, a->length);
    bn_copy(a, &res, res.length);
    start_count_time();
    bn_shr(&res);
    stop_count_time();
    info("shr_time_%dB: %u us %u ticks", a->length, get_us(), get_ticks());
    return bn_compare(&res, expected_result);
}

uint32_t test_shl(bn_uint_t *a, bn_uint_t *expected_result)
{
    BN_CREATE_VARIABLE(res, a->length);
    bn_copy(a, &res, res.length);
    start_count_time();
    bn_shl(&res);
    stop_count_time();
    info("shl_time_%dB: %u us %u ticks", a->length, get_us(), get_ticks());
    return bn_compare(&res, expected_result);
}

uint32_t test_barret_mod(bn_uint_t *a, bn_uint_t *mi, bn_uint_t *p, bn_uint_t *expected_result)
{
    BN_CREATE_VARIABLE(res, expected_result->length);
    start_count_time();
    bn_barret_modulus(a, mi, p, &res);
    stop_count_time();
    info("barret_mod_time_%dB: %u us %u ticks", p->length, get_us(), get_ticks());
    return bn_compare(&res, expected_result);
}

