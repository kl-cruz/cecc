/*
File generate using external software
*/
#ifndef CURVES_H_
#define CURVES_H_
#include "bignum.h"
#include "ecc.h"

//variable 'ec_secp256r1_p' value: 0xffffffff00000001000000000000000000000000ffffffffffffffffffffffff
const uint32_t ec_secp256r1_p_tab [8] = {0xffffffff, 0xffffffff, 0xffffffff, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0xffffffff};
const bn_uint_t ec_secp256r1_p = {.number = ec_secp256r1_p_tab, .length = 8};
//variable 'ec_secp256r1_a' value: 0xffffffff00000001000000000000000000000000fffffffffffffffffffffffc
const uint32_t ec_secp256r1_a_tab [8] = {0xfffffffc, 0xffffffff, 0xffffffff, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0xffffffff};
const bn_uint_t ec_secp256r1_a = {.number = ec_secp256r1_a_tab, .length = 8};
//variable 'ec_secp256r1_b' value: 0x5ac635d8aa3a93e7b3ebbd55769886bc651d06b0cc53b0f63bce3c3e27d2604b
const uint32_t ec_secp256r1_b_tab [8] = {0x27d2604b, 0x3bce3c3e, 0xcc53b0f6, 0x651d06b0, 0x769886bc, 0xb3ebbd55, 0xaa3a93e7, 0x5ac635d8};
const bn_uint_t ec_secp256r1_b = {.number = ec_secp256r1_b_tab, .length = 8};
//variable 'ec_secp256r1_G' value: 0x46b17d1f2e12c424f8bce6e563a440f277037d812deb33a0f4a13945d898c2964fe342e2fe1a7f9b8ee7eb4a7c0f9e162bce3356b315ececbb6406837bf51f5
const uint32_t ec_secp256r1_G_tab [16] = {0x37bf51f5, 0xcbb64068, 0x6b315ece, 0x62bce335, 0xa7c0f9e1, 0xb8ee7eb4, 0x2fe1a7f9, 0x64fe342e, 0x5d898c29, 0x0f4a1394, 0x12deb33a, 0x277037d8, 0x563a440f, 0x4f8bce6e, 0xf2e12c42, 0x46b17d1};
const bn_uint_t ec_secp256r1_G = {.number = ec_secp256r1_G_tab, .length = 16};
//variable 'ec_secp256r1_n' value: 0xffffffff00000000ffffffffffffffffbce6faada7179e84f3b9cac2fc632551
const uint32_t ec_secp256r1_n_tab [8] = {0xfc632551, 0xf3b9cac2, 0xa7179e84, 0xbce6faad, 0xffffffff, 0xffffffff, 0x00000000, 0xffffffff};
const bn_uint_t ec_secp256r1_n = {.number = ec_secp256r1_n_tab, .length = 8};
//variable 'ec_secp256r1_h' value: 0x1
const uint32_t ec_secp256r1_h_tab [1] = {0x1};
const bn_uint_t ec_secp256r1_h = {.number = ec_secp256r1_h_tab, .length = 1};
//variable 'ec_secp256r1_S' value: 0xc49d360886e704936a6678e1139d26b7819f7e90
const uint32_t ec_secp256r1_S_tab [5] = {0x819f7e90, 0x139d26b7, 0x6a6678e1, 0x86e70493, 0xc49d3608};
const bn_uint_t ec_secp256r1_S = {.number = ec_secp256r1_S_tab, .length = 5};
//variable 'ec_secp256r1_mi' value: 0x100000000fffffffffffffffefffffffefffffffeffffffff0000000000000003
const uint32_t ec_secp256r1_mi_tab [9] = {0x00000003, 0x00000000, 0xffffffff, 0xfffffffe, 0xfffffffe, 0xfffffffe, 0xffffffff, 0x00000000, 0x1};
const bn_uint_t ec_secp256r1_mi = {.number = ec_secp256r1_mi_tab, .length = 9};
const ecc_curve_t ec_secp256r1 = {&ec_secp256r1_p, &ec_secp256r1_a, &ec_secp256r1_b, &ec_secp256r1_S, &ec_secp256r1_G, &ec_secp256r1_n, &ec_secp256r1_h, &ec_secp256r1_mi};

#endif /* CURVES_H_ */
