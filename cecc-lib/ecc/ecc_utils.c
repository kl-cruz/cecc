/*
 * ecc_utils.c
 *
 * All rights reserved.
 *
 *  Created on: 09-07-2014
 *      Author: Karol Lasończyk
 */

#include "ecc_utils.h"
#include "ecc.h"
#include "platform_utils.h"

uint32_t eccutils_affine_to_projective(bn_uint_t *ax, bn_uint_t *ay,
                                       bn_uint_t *px, bn_uint_t *py,
                                       bn_uint_t *pz, ecc_curve_t *curve) {
  (void)(curve);
  //trying to create (X,Y,Z) => (X,Y,1) from (x,y)
  bn_copy(ax, px, ax->length);
  bn_copy(ay, py, ay->length);
  bn_zero(pz);
  pz->number[0] = 1;
  return 0;
}

uint32_t eccutils_projective_to_affine(bn_uint_t *px, bn_uint_t *py,
                                       bn_uint_t *pz, bn_uint_t *ax,
                                       bn_uint_t *ay, ecc_curve_t *curve) {
  BN_CREATE_VARIABLE(invz, pz->length);
  BN_CREATE_VARIABLE(invztmp, pz->length);
  BN_CREATE_VARIABLE(invztmp2, pz->length);
  bn_zero(&invz);
  invz.number[0] = 1;
  if (bn_compare(&invz, pz) == 0) {
    bn_copy(px, ax, px->length);
    bn_copy(py, ay, py->length);
    return 0;
  }
  bn_field_inverse(pz, curve->p, &invz);
  bn_field_mul_barret(&invz, &invz, curve->barret_mi, curve->p, &invztmp); //now we've got z^2
  bn_field_mul_barret(&invztmp, px, curve->barret_mi, curve->p, ax); //now we've got affine x
  bn_field_mul_barret(&invztmp, &invz, curve->barret_mi, curve->p, &invztmp2); //now we've got z^3
  bn_field_mul_barret(&invztmp2, py, curve->barret_mi, curve->p, ay); //now we've got affine y
  return 0;
}
