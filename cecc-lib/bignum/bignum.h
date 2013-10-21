/*
 * bignum.h
 *
 * All rights reserved.
 *
 *  Created on: 19-10-2013
 *      Author: Karol Lasończyk
 */

#ifndef BIGNUM_H_
#define BIGNUM_H_

#include <stdint.h>

typedef struct bn_uint{
	uint32_t *number;
	uint32_t lentgh;
} bn_uint_t;

//operators
uint32_t bn_add(bn_uint_t *a, bn_uint_t *b, bn_uint_t *result);

uint32_t bn_sub(bn_uint_t *a, bn_uint_t *b, bn_uint_t *result);

uint32_t bn_mul(bn_uint_t *a, bn_uint_t *b, bn_uint_t *result);

uint32_t bn_inv(void);

//functions
uint32_t bn_is_equal(bn_uint_t *a, bn_uint_t *b);

#endif /* BIGNUM_H_ */
