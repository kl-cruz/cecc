/*
File generate using external software
*/
#ifndef CURVES_H_
#define CURVES_H_
#include "bignum.h"
#include "ecc.h"
#include "nist_curves_mod.h"

//variable 'ec_secp256r1_p' value: 0xffffffff00000001000000000000000000000000ffffffffffffffffffffffff
static uint32_t ec_secp256r1_p_tab [8] = {0xffffffff, 0xffffffff, 0xffffffff, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0xffffffff};
static bn_uint_t ec_secp256r1_p = {.number = ec_secp256r1_p_tab, .length = 8};
//variable 'ec_secp256r1_a' value: 0xffffffff00000001000000000000000000000000fffffffffffffffffffffffc
static uint32_t ec_secp256r1_a_tab [8] = {0xfffffffc, 0xffffffff, 0xffffffff, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0xffffffff};
static bn_uint_t ec_secp256r1_a = {.number = ec_secp256r1_a_tab, .length = 8};
//variable 'ec_secp256r1_b' value: 0x5ac635d8aa3a93e7b3ebbd55769886bc651d06b0cc53b0f63bce3c3e27d2604b
static uint32_t ec_secp256r1_b_tab [8] = {0x27d2604b, 0x3bce3c3e, 0xcc53b0f6, 0x651d06b0, 0x769886bc, 0xb3ebbd55, 0xaa3a93e7, 0x5ac635d8};
static bn_uint_t ec_secp256r1_b = {.number = ec_secp256r1_b_tab, .length = 8};
//variable 'ec_secp256r1_Gx' value: 0x6b17d1f2e12c4247f8bce6e563a440f277037d812deb33a0f4a13945d898c296
static uint32_t ec_secp256r1_Gx_tab [8] = {0xd898c296, 0xf4a13945, 0x2deb33a0, 0x77037d81, 0x63a440f2, 0xf8bce6e5, 0xe12c4247, 0x6b17d1f2};
static bn_uint_t ec_secp256r1_Gx = {.number = ec_secp256r1_Gx_tab, .length = 8};
//variable 'ec_secp256r1_Gy' value: 0x4fe342e2fe1a7f9b8ee7eb4a7c0f9e162bce33576b315ececbb6406837bf51f5
static uint32_t ec_secp256r1_Gy_tab [8] = {0x37bf51f5, 0xcbb64068, 0x6b315ece, 0x2bce3357, 0x7c0f9e16, 0x8ee7eb4a, 0xfe1a7f9b, 0x4fe342e2};
static bn_uint_t ec_secp256r1_Gy = {.number = ec_secp256r1_Gy_tab, .length = 8};
//variable 'ec_secp256r1_n' value: 0xffffffff00000000ffffffffffffffffbce6faada7179e84f3b9cac2fc632551
static uint32_t ec_secp256r1_n_tab [8] = {0xfc632551, 0xf3b9cac2, 0xa7179e84, 0xbce6faad, 0xffffffff, 0xffffffff, 0x00000000, 0xffffffff};
static bn_uint_t ec_secp256r1_n = {.number = ec_secp256r1_n_tab, .length = 8};
//variable 'ec_secp256r1_h' value: 0x1
static uint32_t ec_secp256r1_h_tab [1] = {0x1};
static bn_uint_t ec_secp256r1_h = {.number = ec_secp256r1_h_tab, .length = 1};
//variable 'ec_secp256r1_mi' value: 0x100000000fffffffffffffffefffffffefffffffeffffffff0000000000000003
static uint32_t ec_secp256r1_mi_tab [9] = {0x00000003, 0x00000000, 0xffffffff, 0xfffffffe, 0xfffffffe, 0xfffffffe, 0xffffffff, 0x00000000, 0x1};
static bn_uint_t ec_secp256r1_mi = {.number = ec_secp256r1_mi_tab, .length = 9};
//variable 'ec_secp256r1_mi_n' value: 0x100000000fffffffffffffffeffffffff43190552df1a6c21012ffd85eedf9bfe
static uint32_t ec_secp256r1_mi_n_tab [9] = {0xeedf9bfe, 0x012ffd85, 0xdf1a6c21, 0x43190552, 0xffffffff, 0xfffffffe, 0xffffffff, 0x00000000, 0x1};
static bn_uint_t ec_secp256r1_mi_n = {.number = ec_secp256r1_mi_n_tab, .length = 9};
static ecc_curve_t ec_secp256r1 = {&ec_secp256r1_p, &ec_secp256r1_a, &ec_secp256r1_b, &ec_secp256r1_Gx, &ec_secp256r1_Gy, &ec_secp256r1_n, &ec_secp256r1_h, &ec_secp256r1_mi, &ec_secp256r1_mi_n, &ec_secp256r1_mod};

#endif /* CURVES_H_ */
