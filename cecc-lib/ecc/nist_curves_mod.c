/*
 * nist_curves_mod.c
 *
 * Copyright (c) 2014, Sastrion Sp. z o.o.
 * All rights reserved.
 *
 *  Created on: 16-07-2014
 *      Author: Karol Lasończyk
 */

#include "nist_curves.h"
#include "nist_curves_mod.h"
#define NDEBUG
#include <assert.h>

/*
 * Code based on work:
 * Software Implementation of the NIST Elliptic
 * Curves Over Prime Fields
 * M. Brown 1 , D. Hankerson 2,4 , J. Lopez 3 , and A. Menezes
 * page 8
 */
void ec_secp256r1_mod(bn_uint_t *a, bn_uint_t *result) {
  assert(a->length == 16);
  assert(result->length == 8);
  BN_CREATE_VARIABLE(W0, result->length);
  BN_CREATE_VARIABLE(W1, result->length);
  BN_CREATE_VARIABLE(W2, result->length);
  BN_CREATE_VARIABLE(W3, result->length);
  BN_CREATE_VARIABLE(W4, result->length);
  BN_CREATE_VARIABLE(W5, result->length);
  BN_CREATE_VARIABLE(W6, result->length);
  BN_CREATE_VARIABLE(W7, result->length);
  BN_CREATE_VARIABLE(W8, result->length);

  BN_CREATE_VARIABLE(U, result->length + 1);
  BN_CREATE_VARIABLE(tmp, result->length + 1);

  bn_zero(&W0);
  bn_zero(&W1);
  bn_zero(&W2);
  bn_zero(&W3);
  bn_zero(&W4);
  bn_zero(&W5);
  bn_zero(&W6);
  bn_zero(&W7);
  bn_zero(&W8);
  uint8_t i;
  //Let's the magic plays! ^^
  for (i = 0; i < result->length; ++i) {
    W0.number[i] = a->number[i];
  }
  for (i = 3; i < result->length; ++i) {
    W1.number[i] = a->number[i + 8];
  }
  for (i = 3; i < result->length - 1; ++i) {
    W2.number[i] = a->number[i + 9];
  }
  W3.number[0] = a->number[8];
  W3.number[1] = a->number[9];
  W3.number[2] = a->number[10];
  W3.number[6] = a->number[14];
  W3.number[7] = a->number[15];

  W4.number[0] = a->number[9];
  W4.number[1] = a->number[10];
  W4.number[2] = a->number[11];
  W4.number[3] = a->number[13];
  W4.number[4] = a->number[14];
  W4.number[5] = a->number[15];
  W4.number[6] = a->number[13];
  W4.number[7] = a->number[8];

  W5.number[0] = a->number[11];
  W5.number[1] = a->number[12];
  W5.number[2] = a->number[13];
  W5.number[6] = a->number[8];
  W5.number[7] = a->number[10];

  W6.number[0] = a->number[12];
  W6.number[1] = a->number[13];
  W6.number[2] = a->number[14];
  W6.number[3] = a->number[15];
  W6.number[6] = a->number[9];
  W6.number[7] = a->number[11];

  W7.number[0] = a->number[13];
  W7.number[1] = a->number[14];
  W7.number[2] = a->number[15];
  W7.number[3] = a->number[8];
  W7.number[4] = a->number[9];
  W7.number[5] = a->number[10];
  W7.number[7] = a->number[12];

  W8.number[0] = a->number[14];
  W8.number[1] = a->number[15];
  W8.number[3] = a->number[9];
  W8.number[4] = a->number[10];
  W8.number[5] = a->number[11];
  W8.number[7] = a->number[13];

  bn_add(&W0, &W1, &tmp);
  bn_add(&tmp, &W1, &U);
  bn_add(&U, &W2, &tmp);
  bn_add(&tmp, &W2, &U);
  bn_add(&U, &W3, &tmp);
  bn_add(&tmp, &W4, &U);

  bn_sub(&U, &W5, &tmp);
  bn_sub(&tmp, &W6, &U);
  bn_sub(&U, &W7, &tmp);
  bn_sub(&tmp, &W8, &U);
  bn_uint_t *res = &U;
  if (U.number[U.length - 1] > 0xF0000000) //very simply (but in this case fast) modulo for negative numbers
      {
    while (U.number[U.length - 1] > 0xF0000000)
      bn_add(&U, ec_secp256r1.p, &U);
  }
  else if (U.number[U.length - 1] > 0) {
    while (U.number[U.length - 1] > 0x00000000)
      bn_sub(&U, ec_secp256r1.p, &U);
  }

  for (i = 0; i < result->length; ++i) {
    result->number[i] = res->number[i];
  }
}
