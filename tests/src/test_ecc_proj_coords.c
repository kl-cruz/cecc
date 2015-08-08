/*
 * test_ecc_utils.c
 *
 * Copyright (c) 2014, Sastrion Sp. z o.o.
 * All rights reserved.
 *
 *  Created on: 09-07-2014
 *      Author: Karol Lasończyk
 */

#include "ecc_proj_coords.h"
#include "ecc_utils.h"
#include "ecc.h"
#include "platform_utils.h"
#include "test_ecc_proj_coords.h"

uint32_t test_ecc_proj_coords_double(bn_uint_t *ax, bn_uint_t *ay,
                                     bn_uint_t *expx, bn_uint_t *expy,
                                     ecc_curve_t *curve) {
  BN_CREATE_VARIABLE(px, ax->length);
  BN_CREATE_VARIABLE(py, ay->length);
  BN_CREATE_VARIABLE(pz, ay->length);
  BN_CREATE_VARIABLE(ox, ax->length);
  BN_CREATE_VARIABLE(oy, ay->length);
  BN_CREATE_VARIABLE(oz, ay->length);
  BN_CREATE_VARIABLE(counted_ay, ay->length);
  BN_CREATE_VARIABLE(counted_ax, ax->length);

  start_count_time();

  eccutils_affine_to_projective(ax, ay, &px, &py, &pz, curve);
  ecc_proj_ec_double(&px, &py, &pz, &ox, &oy, &oz, curve);
  eccutils_projective_to_affine(&ox, &oy, &oz, &counted_ax, &counted_ay, curve);

  stop_count_time();

  info("ecc_proj_dbl_time_%dB: %u us %u ticks", curve->p->length, get_us(), get_ticks());
  if ((bn_compare(&counted_ax, expx) == 0)
      && (bn_compare(&counted_ay, expy) == 0))
    return 0;
  return 1;
}

uint32_t test_ecc_proj_coords_add(bn_uint_t *ax, bn_uint_t *ay, bn_uint_t *bx,
                                  bn_uint_t *by, bn_uint_t *expx,
                                  bn_uint_t *expy, ecc_curve_t *curve) {

  BN_CREATE_VARIABLE(px, ax->length);
  BN_CREATE_VARIABLE(py, ay->length);
  BN_CREATE_VARIABLE(pz, ay->length);
  BN_CREATE_VARIABLE(qx, ax->length);
  BN_CREATE_VARIABLE(qy, ay->length);
  BN_CREATE_VARIABLE(qz, ay->length);
  BN_CREATE_VARIABLE(ox, ax->length);
  BN_CREATE_VARIABLE(oy, ay->length);
  BN_CREATE_VARIABLE(oz, ay->length);
  BN_CREATE_VARIABLE(counted_ay, ay->length);
  BN_CREATE_VARIABLE(counted_ax, ax->length);

  start_count_time();

  eccutils_affine_to_projective(ax, ay, &px, &py, &pz, curve);
  eccutils_affine_to_projective(bx, by, &qx, &qy, &qz, curve);
  ecc_proj_ec_add(&px, &py, &pz, &qx, &qy, &qz, &ox, &oy, &oz, curve);
  eccutils_projective_to_affine(&ox, &oy, &oz, &counted_ax, &counted_ay, curve);

  stop_count_time();

  info("ecc_proj_add_time_%dB: %u us %u ticks", curve->p->length, get_us(), get_ticks());
  if ((bn_compare(&counted_ax, expx) == 0)
      && (bn_compare(&counted_ay, expy) == 0))
    return 0;
  return 1;
}

uint32_t test_ecc_proj_coords_mul(bn_uint_t *px, bn_uint_t *py, bn_uint_t *k,
                                  bn_uint_t *expx, bn_uint_t *expy,
                                  ecc_curve_t *curve) {
  BN_CREATE_VARIABLE(fpx, px->length);
  BN_CREATE_VARIABLE(fpy, py->length);
  BN_CREATE_VARIABLE(fpz, py->length);
  BN_CREATE_VARIABLE(ox, px->length);
  BN_CREATE_VARIABLE(oy, py->length);
  BN_CREATE_VARIABLE(oz, py->length);
  BN_CREATE_VARIABLE(counted_ay, expy->length);
  BN_CREATE_VARIABLE(counted_ax, expx->length);

  start_count_time();

  eccutils_affine_to_projective(px, py, &fpx, &fpy, &fpz, curve);
  ecc_proj_ec_mult(&fpx, &fpy, &fpz, k, &ox, &oy, &oz, curve);
  eccutils_projective_to_affine(&ox, &oy, &oz, &counted_ax, &counted_ay, curve);

  stop_count_time();

//  info("ecc_proj_mul_time_%dB: %u us %u ticks %u DWT ticks", curve->p->length, get_us(), get_ticks(), get_ticks_DWT());
  if ((bn_compare(&counted_ax, expx) == 0)
      && (bn_compare(&counted_ay, expy) == 0))
    return 0;
  return 1;
}


uint32_t test_ecdsa_proj_gen_sig(bn_uint_t *k, bn_uint_t *hash, bn_uint_t *d, bn_uint_t *expr, bn_uint_t *exps, ecc_curve_t *curve)
{
    BN_CREATE_VARIABLE(r, expr->length);
    BN_CREATE_VARIABLE(s, exps->length);
    uint32_t res;

    start_count_time();

    res = ecc_proj_ECDSA_signature_gen(k, hash, d, &r, &s, curve);

    stop_count_time();

    info("ecc_proj_ECDSA_gen_time_%dB: %u us %u ticks", curve->p->length, get_us(), get_ticks());
    if ((bn_compare(&r, expr) == 0) && (bn_compare(&s, exps) == 0) && (res == 0))
        return 0;
    return 1;
}


uint32_t test_ecdsa_proj_val_sig(bn_uint_t *r, bn_uint_t *s, bn_uint_t *hash, bn_uint_t *pub_k_x, bn_uint_t *pub_k_y, ecc_curve_t *curve)
{
    uint32_t res;

    start_count_time();

    res = ecc_proj_ECDSA_signature_val(r, s, hash, pub_k_x, pub_k_y, curve);

    stop_count_time();

    info("ecc_proj_ECDSA_val_time_%dB: %u us %u ticks", curve->p->length, get_us(), get_ticks());
    if (res == 0)
        return 0;
    return 1;
}

uint32_t test_ecdsa_proj_sig_val_sig(ecc_curve_t *curve) {
  uint32_t res;
  BN_CREATE_VARIABLE(d, curve->p->length);
  BN_CREATE_VARIABLE(k, curve->p->length);
  BN_CREATE_VARIABLE(r, curve->p->length);
  BN_CREATE_VARIABLE(s, curve->p->length);
  BN_CREATE_VARIABLE(hash, curve->p->length);
  BN_CREATE_VARIABLE(pubx, curve->p->length);
  BN_CREATE_VARIABLE(puby, curve->p->length);

  start_count_time();

  default_prgn(&k);
  default_prgn(&hash);
  ecc_generate_key(&default_prgn, &d, &pubx, &puby, curve);
  res = ecc_proj_ECDSA_signature_gen(&k, &hash, &d, &r, &s, curve);
  res = ecc_proj_ECDSA_signature_val(&r, &s, &hash, &pubx, &puby, curve);

  stop_count_time();

  info("ecc_proj_ECDSA_gen_val_time_%dB: %u us %u ticks", curve->p->length, get_us(), get_ticks());
  if (res == 0)
    return 0;
  return 1;
}

uint32_t test_gen_proj_key(bn_uint_t *d, bn_uint_t *exp_pub_k_x, bn_uint_t *exp_pub_k_y, ecc_curve_t *curve)
{
    BN_CREATE_VARIABLE(dtmp, d->length);
    void prgn(bn_uint_t *output)
    {
        bn_copy(d, output, output->length);
    }
    BN_CREATE_VARIABLE(pubx, exp_pub_k_x->length);
    BN_CREATE_VARIABLE(puby, exp_pub_k_y->length);

    start_count_time();

    ecc_proj_generate_key(&prgn, &dtmp, &pubx, &puby, curve);

    stop_count_time();

    info("ecc_proj_keygen_time_%dB: %u us %u ticks", curve->p->length, get_us(), get_ticks());
    if ((bn_compare(&pubx, exp_pub_k_x) == 0) && (bn_compare(&puby, exp_pub_k_y) == 0))
        return 0;
    return 1;
}

uint32_t test_proj_ecdh(bn_uint_t *d_alice, bn_uint_t *pubx_alice, bn_uint_t *puby_alice, bn_uint_t *d_bob, bn_uint_t *pubx_bob, bn_uint_t *puby_bob,
        ecc_curve_t *curve)
{
    BN_CREATE_VARIABLE(secret_alice, d_alice->length);
    BN_CREATE_VARIABLE(secret_bob, d_bob->length);

    start_count_time();

    //now magic starts! alice and bob exchange their Qx and Qx
    ecc_proj_ECDH_secret_gen(&ecc_default_hash_no_hash, d_alice, pubx_bob, puby_bob, &secret_alice, curve);
    //bob also count secret
    ecc_proj_ECDH_secret_gen(&ecc_default_hash_no_hash, d_bob, pubx_alice, puby_alice, &secret_bob, curve);

    stop_count_time();

    info("ecc_proj_ECDH_time_%dB: %u us %u ticks", curve->p->length, get_us(), get_ticks());
    if (bn_compare(&secret_alice, &secret_bob) == 0)
        return 0;
    return 1;
}
