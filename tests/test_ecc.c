/*
 * test_ecc.c
 *
 * All rights reserved.
 *
 *  Created on: 05-11-2013
 *      Author: Karol Lasończyk
 */
#include "ecc.h"
#include "nist_curves.h"
#include "platform_utils.h"

const uint32_t ecc_tx_tab[8] = { 0x35e0986b, 0xbb8cf92e, 0x61c89575, 0x39540dc8, 0x5316212e, 0x62f6b3b2, 0x8da1d44e, 0x55a8b00f };
const bn_uint_t ecc_tx = { .number = ecc_tx_tab, .length = 8 };

const uint32_t ecc_ty_tab[8] = { 0xc8b24316, 0xb656e9d8, 0x598b9e7a, 0xf61a8a52, 0xc4c3dd90, 0x4835d82a, 0x9c2d6c70, 0x5421c320 };
const bn_uint_t ecc_ty = { .number = ecc_ty_tab, .length = 8 };

const uint32_t ecc_sx_tab[8] = { 0x89da97c9, 0xb77cab39, 0x221a8fa0, 0x617519b3, 0x0f271508, 0x82edd27e, 0xbc8d36e6, 0xde2444be };
const bn_uint_t ecc_sx = { .number = ecc_sx_tab, .length = 8 };

const uint32_t ecc_sy_tab[8] = { 0x3042a256, 0xb6350b24, 0x53cec576, 0x702de80f, 0xd1e66659, 0xfc01a5aa, 0xf36e5380, 0xc093ae7f };
const bn_uint_t ecc_sy = { .number = ecc_sy_tab, .length = 8 };

uint32_t resultAddx[8] = { 0x545a067e, 0x553cf35a, 0xac476bd4, 0x70349191, 0x8cc5ba69, 0x745195e9, 0x354b6b81, 0x72b13dd4 };
const bn_uint_t ecc_x = { .number = resultAddx, .length = 8 };

//8d585cbb 2e1327d7 5241a8a1 22d7620d c33b1331 5aa5c9d4 6d013011 744ac264
uint32_t resultAddy[8] = { 0x744ac264, 0x6d013011, 0x5aa5c9d4, 0xc33b1331, 0x22d7620d, 0x5241a8a1, 0x2e1327d7, 0x8d585cbb };
const bn_uint_t ecc_y = { .number = resultAddy, .length = 8 };

uint32_t test_ecc_secp256r1_add(bn_uint_t *ax, bn_uint_t *ay, bn_uint_t *bx, bn_uint_t *by, bn_uint_t *expx, bn_uint_t *expy)
{
	BN_CREATE_VARIABLE(outx, ecc_tx.length);
	BN_CREATE_VARIABLE(outy, ecc_tx.length);
//TODO zabezpieczyć przed dodawaniem dwóch tych samych punktów
	//start_count_time();
	ecc_ec_add(ax, ay, bx, by, &outx, &outy, &ec_secp256r1);
	//stop_count_time();
	//info("working time: %d us", get_us());
	//print_values(4, &outx, expx, &outy, expy);

	if ((bn_is_equal(&outx, expx) == 0) && (bn_is_equal(&outy, expy) == 0))
		return 0;
	return 1;
}
