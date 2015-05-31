/*
 * test_ecc_utils.c
 *
 * Copyright (c) 2014, Sastrion Sp. z o.o.
 * All rights reserved.
 *
 *  Created on: 09-07-2014
 *      Author: Karol Lasończyk
 */

#include "ecc_utils.h"
#include "ecc.h"
#include "platform_utils.h"

uint32_t test_ecc_utils_conversion(bn_uint_t *ax, bn_uint_t *ay,
                                   ecc_curve_t *curve) {
  BN_CREATE_VARIABLE(px, ax->length);
  BN_CREATE_VARIABLE(py, ay->length);
  BN_CREATE_VARIABLE(pz, ay->length);

  BN_CREATE_VARIABLE(expected_x, ay->length);
  BN_CREATE_VARIABLE(expected_y, ay->length);

  bn_zero(&expected_x);
  bn_zero(&expected_y);
  expected_x.number[0] = 256;
  expected_y.number[0] = 1024;

  bn_zero(&px);
  bn_zero(&py);
  bn_zero(&pz);

  px.number[0] = 43264;
  py.number[0] = 2249728;
  pz.number[0] = 13;

  BN_CREATE_VARIABLE(counted_ay, ay->length);
  BN_CREATE_VARIABLE(counted_ax, ax->length);

  start_count_time();

  //eccutils_affine_to_projective(ax, ay, &px, &py, &pz, curve);
  eccutils_projective_to_affine(&px, &py, &pz, &counted_ax, &counted_ay, curve);

  stop_count_time();

  info("ecc_utils_conv_time_%dB: %u us %u ticks", curve->p->length, get_us(), get_ticks());
  if ((bn_compare(&counted_ax, &expected_x) == 0)
      && (bn_compare(&counted_ay, &expected_y) == 0))
    return 0;
  return 1;
}

uint32_t test_curve_mod(bn_uint_t *a, bn_uint_t *expected_result, ecc_curve_t *curve)
{
    BN_CREATE_VARIABLE(res, expected_result->length);

    start_count_time();

    curve->mod(a,&res);

    stop_count_time();

    info("ecc_utils_curve_mod_time_%dB: %u us %u ticks", curve->p->length, get_us(), get_ticks());
    return bn_compare(&res, expected_result);
}
