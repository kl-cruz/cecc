/*
 * test_ecc.h
 *
 * All rights reserved.
 *
 *  Created on: 05-11-2013
 *      Author: Karol Lasończyk
 */

#ifndef TEST_ECC_H_
#define TEST_ECC_H_

uint32_t test_ecc_add(bn_uint_t *ax, bn_uint_t *ay, bn_uint_t *bx, bn_uint_t *by, bn_uint_t *expx, bn_uint_t *expy, ecc_curve_t *curve);
uint32_t test_ecc_double(bn_uint_t *ax, bn_uint_t *ay, bn_uint_t *expx, bn_uint_t *expy, ecc_curve_t *curve);

#endif /* TEST_ECC_H_ */
