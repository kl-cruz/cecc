/*
 * test_ecc_utils.h
 *
 * Copyright (c) 2014, Sastrion Sp. z o.o.
 * All rights reserved.
 *
 *  Created on: 09-07-2014
 *      Author: Karol Lasończyk
 */

#ifndef TEST_ECC_UTILS_H_
#define TEST_ECC_UTILS_H_

#include "ecc.h"
uint32_t test_ecc_utils_conversion(bn_uint_t *ax, bn_uint_t *ay,
                                   ecc_curve_t *curve);

#endif /* TEST_ECC_UTILS_H_ */
