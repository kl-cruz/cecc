/*
 * test_ecc.c
 *
 * All rights reserved.
 *
 *  Created on: 05-11-2013
 *      Author: Karol Lasończyk
 */
#include "ecc.h"
#include "platform_utils.h"

//TODO ustawić stos na 0x0400 i sprawdzić czemu nie działa dla takiego małego stosu a działa dla 0x0800
uint32_t test_ecc_add(bn_uint_t *ax, bn_uint_t *ay, bn_uint_t *bx, bn_uint_t *by, bn_uint_t *expx, bn_uint_t *expy, ecc_curve_t *curve)
{
	BN_CREATE_VARIABLE(outx, expx->length);
	BN_CREATE_VARIABLE(outy, expy->length);
	//start_count_time();
	ecc_ec_add(ax, ay, bx, by, &outx, &outy, curve);
	//stop_count_time();
	//info("working time: %d us", get_us());
	//print_values(4, &outx, expx, &outy, expy);

	if ((bn_is_equal(&outx, expx) == 0) && (bn_is_equal(&outy, expy) == 0))
		return 0;
	return 1;
}

uint32_t test_ecc_double(bn_uint_t *ax, bn_uint_t *ay, bn_uint_t *expx, bn_uint_t *expy, ecc_curve_t *curve)
{
	BN_CREATE_VARIABLE(outx, expx->length);
	BN_CREATE_VARIABLE(outy, expy->length);
	//start_count_time();
	ecc_ec_double(ax, ay, &outx, &outy, curve);
	//stop_count_time();
	//info("working time: %d us", get_us());
	//print_values(2, &outx, &outy);

	if ((bn_is_equal(&outx, expx) == 0) && (bn_is_equal(&outy, expy) == 0))
		return 0;
	return 1;
}

uint32_t test_ecc_mul(bn_uint_t *px, bn_uint_t *py, bn_uint_t *k, bn_uint_t *expx, bn_uint_t *expy, ecc_curve_t *curve)
{
	BN_CREATE_VARIABLE(outx, expx->length);
	BN_CREATE_VARIABLE(outy, expy->length);
	//start_count_time();
	ecc_ec_mult(px,py,k,&outx,&outy,curve);
	//stop_count_time();
	//info("working time: %d us", get_us());
	//print_values(2, &outx, &outy);

	if ((bn_is_equal(&outx, expx) == 0) && (bn_is_equal(&outy, expy) == 0))
		return 0;
	return 1;
}
