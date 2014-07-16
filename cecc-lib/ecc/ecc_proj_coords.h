/*
 * ecc_proj_coords.h
 *
 * All rights reserved.
 *
 *  Created on: 09-07-2014
 *      Author: Karol Lasończyk
 */

#ifndef ECC_PROJ_COORDS_H_
#define ECC_PROJ_COORDS_H_

#include "bignum.h"
#include "ecc.h"

uint32_t ecc_proj_ec_add(bn_uint_t *px, bn_uint_t *py, bn_uint_t *pz,
                         bn_uint_t *qx, bn_uint_t *qy, bn_uint_t *qz,
                         bn_uint_t *sx, bn_uint_t *sy, bn_uint_t *sz,
                         ecc_curve_t *curve);

uint32_t ecc_proj_ec_double(bn_uint_t *inx, bn_uint_t *iny, bn_uint_t *inz,
                            bn_uint_t *outx, bn_uint_t *outy, bn_uint_t *outz,
                            ecc_curve_t *curve);

uint32_t ecc_proj_ec_mult(bn_uint_t *px, bn_uint_t *py, bn_uint_t *pz,
                          bn_uint_t *k, bn_uint_t *outx, bn_uint_t *outy,
                          bn_uint_t *outz, ecc_curve_t *curve);


uint32_t ecc_proj_ECDSA_signature_gen(bn_uint_t *k, bn_uint_t *hash,
                                      bn_uint_t *d, bn_uint_t *r, bn_uint_t *s,
                                      ecc_curve_t *curve);

uint32_t ecc_proj_ECDSA_signature_val(bn_uint_t *r, bn_uint_t *s,
                                      bn_uint_t *hash, bn_uint_t *pub_k_x,
                                      bn_uint_t *pub_k_y, ecc_curve_t *curve);

uint32_t ecc_proj_generate_key(ecc_prgn prgn, bn_uint_t *d, bn_uint_t *pub_k_x,
                          bn_uint_t *pub_k_y, ecc_curve_t *curve);

uint32_t ecc_proj_ECDH_secret_gen(ecc_hash hash_func, bn_uint_t *d,
                                  bn_uint_t *pub_k_x, bn_uint_t *pub_k_y,
                                  bn_uint_t *secret, ecc_curve_t *curve);

#endif /* ECC_PROJ_COORDS_H_ */
