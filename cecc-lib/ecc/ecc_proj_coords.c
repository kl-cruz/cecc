/*
 * ecc_proj_coords.c
 *
 * All rights reserved.
 *
 *  Created on: 09-07-2014
 *      Author: Karol Lasończyk
 */

#include "ecc_proj_coords.h"
#include "ecc_utils.h"

/**
 * @brief Point double, Jacobian projective coordinates
 * @param inx
 * @param iny
 * @param inz
 * @param outx
 * @param outy
 * @param outz
 * @param curve
 * @return
 */
uint32_t ecc_proj_ec_double(bn_uint_t *inx, bn_uint_t *iny, bn_uint_t *inz,
                            bn_uint_t *outx, bn_uint_t *outy, bn_uint_t *outz,
                            ecc_curve_t *curve) {
  /*
   * if (Y == 0)
   return POINT_AT_INFINITY
   S = 4*X*Y^2
   M = 3*X^2 + a*Z^4
   X' = M^2 - 2*S
   Y' = M*(S - X') - 8*Y^4
   Z' = 2*Y*Z
   return (X', Y', Z')*/
  //based on http://en.wikibooks.org/wiki/Cryptography/Prime_Curve/Jacobian_Coordinates
  //Checked with book: Krzywe eliptyczne w kryptografii (Elliptic Curves in Cryptography)
  //Ian F. Blake, Gadiel Seroussi, and Nigel P. Smart
  //--------------COUNTING S
  BN_CREATE_VARIABLE(S, inx->length);
  BN_CREATE_VARIABLE(M, inx->length);
  BN_CREATE_VARIABLE(Y2, inx->length);
  bn_zero(outx);
  bn_zero(outy);
  bn_zero(outz);
  //compare below is used to check if input point is validate point (inz=0 => point in infinity)
  if (bn_compare(outx, inz) == 0) {
    return 1;

  }
  bn_field_mul_barret(iny, iny, curve->barret_mi, curve->p, &Y2);
  bn_field_mul_barret(&Y2, inx, curve->barret_mi, curve->p, outz);
  bn_zero(outx);
  outx->number[0] = 4;
  bn_field_mul_barret(outz, outx, curve->barret_mi, curve->p, &S); //now we've got 4*X*Y^2 in S OK
  //--------------COUNTING M
  bn_zero(outx);
  outx->number[0] = 3;
  bn_field_mul_barret(inx, inx, curve->barret_mi, curve->p, outz);
  bn_field_mul_barret(outz, outx, curve->barret_mi, curve->p, outy); //outy=>3*X^2
  bn_field_mul_barret(inz, inz, curve->barret_mi, curve->p, outz); //outz=>Z^2
  bn_field_mul_barret(outz, outz, curve->barret_mi, curve->p, outx); //outx=>Z^4
  bn_field_mul_barret(outx, curve->a, curve->barret_mi, curve->p, outz); //outz=>a*Z^4
  bn_field_add(outy, outz, curve->p, &M); // now we've got 3*X^2 + a*Z^4 in M
  //--------------COUNTING X
  bn_field_mul_barret(&M, &M, curve->barret_mi, curve->p, outz); //outz=>M^2
  bn_zero(outx);
  outx->number[0] = 2;
  bn_field_mul_barret(outx, &S, curve->barret_mi, curve->p, outy); //outy=>2*S
  bn_field_sub(outz, outy, curve->p, outx);
  //--------------COUNTING Y
  bn_field_sub(&S, outx, curve->p, outy);
  bn_field_mul_barret(outy, &M, curve->barret_mi, curve->p, outz);
  bn_zero(outy);
  outy->number[0] = 8;
  bn_field_mul_barret(&Y2, &Y2, curve->barret_mi, curve->p, &S);
  bn_field_mul_barret(outy, &S, curve->barret_mi, curve->p, &M);
  bn_field_sub(outz, &M, curve->p, outy);
  //--------------COUNTING Z
  bn_zero(&M);
  M.number[0] = 2;
  bn_field_mul_barret(&M, iny, curve->barret_mi, curve->p, &S);
  bn_field_mul_barret(&S, inz, curve->barret_mi, curve->p, outz);

  return 0;
}

/**
 *
 * @param px
 * @param py
 * @param pz
 * @param qx
 * @param qy
 * @param qz
 * @param sx
 * @param sy
 * @param sz
 * @param curve
 * @return
 */
uint32_t ecc_proj_ec_add(bn_uint_t *px, bn_uint_t *py, bn_uint_t *pz,
                         bn_uint_t *qx, bn_uint_t *qy, bn_uint_t *qz,
                         bn_uint_t *sx, bn_uint_t *sy, bn_uint_t *sz,
                         ecc_curve_t *curve) {
  BN_CREATE_VARIABLE(U1, px->length);
  BN_CREATE_VARIABLE(U2, px->length);
  BN_CREATE_VARIABLE(S1, px->length);
  BN_CREATE_VARIABLE(S2, px->length);
  BN_CREATE_VARIABLE(H, px->length);
  BN_CREATE_VARIABLE(R, px->length);
  BN_CREATE_VARIABLE(H2, px->length);
  BN_CREATE_VARIABLE(H3, px->length);

  bn_zero(&U1);

  if ((bn_compare(px, &U1) || bn_compare(px, &U1) || bn_compare(px, &U1))
      == 0) {
    if ((bn_compare(qx, &U1) || bn_compare(qx, &U1) || bn_compare(qx, &U1))
        != 0) {
      bn_copy(qx, sx, sx->length);
      bn_copy(qy, sy, sy->length);
      bn_copy(qz, sz, sz->length);
      return 0;
    }
  }
  if ((bn_compare(px, &U1) || bn_compare(px, &U1) || bn_compare(px, &U1))
      != 0) {
    if ((bn_compare(qx, &U1) || bn_compare(qx, &U1) || bn_compare(qx, &U1))
        == 0) {
      bn_copy(px, sx, sx->length);
      bn_copy(py, sy, sy->length);
      bn_copy(pz, sz, sz->length);
      return 0;
    }
  }
  bn_field_mul_barret(qz, qz, curve->barret_mi, curve->p, sz); //sz => Z2^2
  bn_field_mul_barret(px, sz, curve->barret_mi, curve->p, &U1); //U1 = X1*Z2^2

  bn_field_mul_barret(pz, pz, curve->barret_mi, curve->p, sy); //sy => Z1^2
  bn_field_mul_barret(qx, sy, curve->barret_mi, curve->p, &U2); //U2 = X2*Z1^2

  bn_field_mul_barret(sz, qz, curve->barret_mi, curve->p, sx); //sx=Z2^3
  bn_field_mul_barret(py, sx, curve->barret_mi, curve->p, &S1); //S1 = Y1*Z2^3

  bn_field_mul_barret(sy, pz, curve->barret_mi, curve->p, sx); //sx=Z1^3
  bn_field_mul_barret(qy, sx, curve->barret_mi, curve->p, &S2); //S2 = Y2*Z1^3

  bn_field_mul_barret(sz, qz, curve->barret_mi, curve->p, sz);

  if (bn_compare(&U1, &U2) == 0) {
    if (bn_compare(&S1, &S2) != 0) {
      return 1;
    }
    else {
      ecc_proj_ec_double(px, py, pz, sx, sy, sz, curve);
      return 0;
    }
  }

  bn_field_sub(&U2, &U1, curve->p, &H);
  bn_field_sub(&S2, &S1, curve->p, &R);

  bn_field_mul_barret(&H, &H, curve->barret_mi, curve->p, &H2); //H^2
  bn_field_mul_barret(&H, &H2, curve->barret_mi, curve->p, &H3); //H^3

  //COUNTING X3
  bn_zero(sy);
  sy->number[0] = 2;
  bn_field_mul_barret(sy, &U1, curve->barret_mi, curve->p, sx); //sx => => 2*U1
  bn_field_mul_barret(sx, &H2, curve->barret_mi, curve->p, sy); //sy => 2*U1*H^2
  bn_field_mul_barret(&R, &R, curve->barret_mi, curve->p, sx); //sx => R^2
  bn_field_sub(sx, &H3, curve->p, sz); //sz=R^2 - H^3
  bn_field_sub(sz, sy, curve->p, sx); //sx => X3 = R^2 - H^3 - 2*U1*H^2

  //COUNTING Y3
  bn_field_mul_barret(&S1, &H3, curve->barret_mi, curve->p, &S2); //S2 => S1*H^3
  bn_field_mul_barret(&U1, &H2, curve->barret_mi, curve->p, &U2); //U2 => U1*H^2
  bn_field_sub(&U2, sx, curve->p, sz); //sz=> U1*H^2 - X3
  bn_field_mul_barret(&R, sz, curve->barret_mi, curve->p, &U2); //&U2 => R*(U1*H^2 - X3)
  bn_field_sub(&U2, &S2, curve->p, sy); // sy=> Y3 = R*(U1*H^2 - X3) - S1*H^3

  //COUNTING Z3
  bn_field_mul_barret(&H, pz, curve->barret_mi, curve->p, &S2); //S2 => H*Z1
  bn_field_mul_barret(&S2, qz, curve->barret_mi, curve->p, sz); //S2 => H*Z1

  //to see more interesting stuffs: http://www.hyperelliptic.org/EFD/g1p/auto-shortw-jacobian.html#addition-add-2007-bl

  return 0;
}

/**
 * @brief Point multiplication
 * @param px Point x
 * @param py Point y
 * @param k factor
 * @param outx output point x
 * @param outy output point y
 * @param curve curve
 * @return 0
 */

//TODO This binary algorithm is soooo slooooow...
uint32_t ecc_proj_ec_mult(bn_uint_t *px, bn_uint_t *py, bn_uint_t *pz,
                          bn_uint_t *k, bn_uint_t *outx, bn_uint_t *outy,
                          bn_uint_t *outz, ecc_curve_t *curve) {
  BN_CREATE_VARIABLE(tmpx, outx->length);
  BN_CREATE_VARIABLE(tmpy, outy->length);
  BN_CREATE_VARIABLE(tmpz, outz->length);

  bn_zero(&tmpx);
  bn_zero(&tmpy);
  bn_zero(&tmpz);

  bn_zero(outx);
  bn_zero(outy);
  bn_zero(outz);
  int32_t i;

  for (i = (k->length * 32) - 1; i >= 0; i--) {

    ecc_proj_ec_double(outx, outy, outz, &tmpx, &tmpy, &tmpz, curve);

    if ((((k->number[i / 32]) >> (i % 32)) & 0x01) == 1) {

      ecc_proj_ec_add(&tmpx, &tmpy, &tmpz, px, py, pz, outx, outy, outz, curve);
    }
    else {
      bn_copy(&tmpx, outx, outx->length);
      bn_copy(&tmpy, outy, outy->length);
      bn_copy(&tmpz, outz, outz->length);

    }
  }

  return 0;
}

/*
 * ECDSA algorithms. Based on paper:
 * The Elliptic Curve Digital Signature Algorithm (ECDSA)
 * Don Johnson[1] and Alfred Menezes[1,2] and Scott Vanstone[1,2]
 * [1]Certicom Research, Canada
 * [2]Dept. of Combinatorics & Optimization, University of Waterloo, Canada
 * http://cs.ucsb.edu/~koc/ccs130h/notes/ecdsa-cert.pdf (page 26)
 *
 * or
 * http://residentrf.ucoz.ru/_ld/0/34_Digital_Signatu.pdf (page 24)
 */

/*
 * Docs for ECDSA recommends SHA-1 as hash function. SHA-1 isn't recommended
 * by NSA to use in new implementations.
 * Check if ECDSA could be implemented with SHA-2 (eg. SHA-256)
 *
 * see draft below:
 * http://tools.ietf.org/html/draft-os-ietf-sshfp-ecdsa-sha2-07
 *
 * Tested with: http://csrc.nist.gov/groups/STM/cavp/
 */

/**
 * @brief Generate ECDSA signature for hash
 * @param k random number
 * @param hash hash
 * @param d private ecc key
 * @param r output value r
 * @param s output value s
 * @param curve curve
 * @return 0 Everything is OK
 * @return 1 Choose other k for proper counting
 */
uint32_t ecc_proj_ECDSA_signature_gen(bn_uint_t *k, bn_uint_t *hash,
                                      bn_uint_t *d, bn_uint_t *r, bn_uint_t *s,
                                      ecc_curve_t *curve) {

  BN_CREATE_VARIABLE(tmp, r->length);
  BN_CREATE_VARIABLE(tmp2, r->length);
  bn_zero(&tmp);
  if (bn_compare(k, &tmp) == 0) //if k==0 then exit. Change k
      {
    return 1;
  }

  bn_zero(&tmp2);
  bn_zero(r);

  BN_CREATE_VARIABLE(fpx, r->length);
  BN_CREATE_VARIABLE(fpy, r->length);
  BN_CREATE_VARIABLE(fpz, r->length);
  BN_CREATE_VARIABLE(ox, r->length);
  BN_CREATE_VARIABLE(oy, r->length);
  BN_CREATE_VARIABLE(oz, r->length);

  eccutils_affine_to_projective(curve->Gx, curve->Gy, &fpx, &fpy, &fpz, curve);

  ecc_proj_ec_mult(&fpx, &fpy, &fpz, k, &ox, &oy, &oz, curve);

  eccutils_projective_to_affine(&ox, &oy, &oz, r, s, curve);

  if (bn_compare(r, &tmp) == 0) //if r==0 then exit. Change k
      {
    return 1;
  }
  /*
   * Zapamiętać na całe życie że tutaj nie jest coś mod P tylko mod N! Dokładne opisy są dostępne w art naukowych
   */

  bn_field_inverse(k, curve->n, &tmp); //k^-1 mod n
  bn_field_mul_barret(d, r, curve->barret_mi_n, curve->n, s); //s=dr
  bn_field_add(s, hash, curve->n, &tmp2); //tmp2=dr+c
  bn_zero(s);
  bn_field_mul_barret(&tmp, &tmp2, curve->barret_mi_n, curve->n, s); //s
  bn_zero(&tmp);
  if (bn_compare(s, &tmp) == 0) //if s==0 then exit. Change k
      {
    return 1;
  }

  return 0;
}

/**
 * @brief Validate ECDSA signature
 * @param r value to validate
 * @param s value to validate
 * @param hash message hash
 * @param pub_k_x public key x
 * @param pub_k_y public key y
 * @param curve curve
 * @return 0 message is consistent
 * @return 1 message is not consistent
 * @return 2 r is greater than field size
 * @return 3 s is greater than field size
 */

uint32_t ecc_proj_ECDSA_signature_val(bn_uint_t *r, bn_uint_t *s,
                                      bn_uint_t *hash, bn_uint_t *pub_k_x,
                                      bn_uint_t *pub_k_y, ecc_curve_t *curve) {
  BN_CREATE_VARIABLE(u1, r->length);
  BN_CREATE_VARIABLE(u2, r->length);
  BN_CREATE_VARIABLE(tmpx1, r->length);
  BN_CREATE_VARIABLE(tmpx2, r->length);
  BN_CREATE_VARIABLE(tmpy1, r->length);
  BN_CREATE_VARIABLE(tmpy2, r->length);

  BN_CREATE_VARIABLE(fpx, r->length);
  BN_CREATE_VARIABLE(fpy, r->length);
  BN_CREATE_VARIABLE(fpz, r->length);
  BN_CREATE_VARIABLE(pubk_j_x, r->length);
  BN_CREATE_VARIABLE(pubk_j_y, r->length);
  BN_CREATE_VARIABLE(pubk_j_z, r->length);
  BN_CREATE_VARIABLE(ox, r->length);
  BN_CREATE_VARIABLE(oy, r->length);
  BN_CREATE_VARIABLE(oz, r->length);

  bn_zero(&u1);
  bn_zero(&u2);
  bn_zero(&tmpx1);
  bn_zero(&tmpx2);
  bn_zero(&tmpy1);
  bn_zero(&tmpy2);
  if (bn_compare(r, curve->n) == 1) //if r>p then exit.
      {
    return 2;
  }
  if (bn_compare(s, curve->n) == 1) //if s>p then exit.
      {
    return 3;
  }
  bn_field_inverse(s, curve->n, &tmpx1); //tmpx1=s^-1 (w=s^-1)
  bn_field_mul_barret(&tmpx1, r, curve->barret_mi_n, curve->n, &u2); //u2=rw mod n
  bn_field_mul_barret(&tmpx1, hash, curve->barret_mi_n, curve->n, &u1); //u1=hash*w mod n

  //count X
  bn_zero(&tmpx1);

  eccutils_affine_to_projective(curve->Gx, curve->Gy, &fpx, &fpy, &fpz, curve);
  eccutils_affine_to_projective(pub_k_x, pub_k_y, &pubk_j_x, &pubk_j_y,
                                &pubk_j_z, curve);

  ecc_proj_ec_mult(&fpx, &fpy, &fpz, &u1, &ox, &oy, &oz, curve);
  ecc_proj_ec_mult(&pubk_j_x, &pubk_j_y, &pubk_j_z, &u2, &fpx, &fpy, &fpz,
                   curve);
  ecc_proj_ec_add(&ox, &oy, &oz, &fpx, &fpy, &fpz, &pubk_j_x, &pubk_j_y,
                  &pubk_j_z, curve);
  eccutils_projective_to_affine(&pubk_j_x, &pubk_j_y, &pubk_j_z, &u1, &u2,
                                curve);

  if (bn_compare(&u1, r) == 0) {
    return 0;
  }
  return 1;
}

/**
 * @brief
 * @param prgn pseudo random generator function. For use default function use ecc_default_prgn
 * @param d out -> private key
 * @param pub_k_x out -> public key x
 * @param pub_k_y out -> public key y
 * @param curve curve
 * @return
 */
uint32_t ecc_proj_generate_key(ecc_prgn prgn, bn_uint_t *d, bn_uint_t *pub_k_x,
                               bn_uint_t *pub_k_y, ecc_curve_t *curve) {
  BN_CREATE_VARIABLE(random_value, d->length);
  BN_CREATE_VARIABLE(fpx, d->length);
  BN_CREATE_VARIABLE(fpy, d->length);
  BN_CREATE_VARIABLE(fpz, d->length);
  BN_CREATE_VARIABLE(ox, d->length);
  BN_CREATE_VARIABLE(oy, d->length);
  BN_CREATE_VARIABLE(oz, d->length);
  (*prgn)(d);
  bn_copy(d, &random_value, d->length);
  bn_barret_modulus(d, curve->barret_mi_n, curve->n, &random_value);

  eccutils_affine_to_projective(curve->Gx, curve->Gy, &fpx, &fpy, &fpz, curve);

  ecc_proj_ec_mult(&fpx, &fpy, &fpz, &random_value, &ox, &oy, &oz, curve);

  eccutils_projective_to_affine(&ox, &oy, &oz, pub_k_x, pub_k_y, curve);

  bn_zero(d);
  bn_copy(&random_value, d, d->length);
  return 0;
}
/**
 * @brief Generate secret
 * @param hash_func hash function used in ECDH.
 * @param d my private key
 * @param pub_k_x second side public key -> X
 * @param pub_k_y second side public key -> Y
 * @param secret generated secret
 * @param curve curve
 * @return
 */
uint32_t ecc_proj_ECDH_secret_gen(ecc_hash hash_func, bn_uint_t *d,
                                  bn_uint_t *pub_k_x, bn_uint_t *pub_k_y,
                                  bn_uint_t *secret, ecc_curve_t *curve) {
  BN_CREATE_VARIABLE(y, pub_k_y->length);
  BN_CREATE_VARIABLE(fpx, d->length);
  BN_CREATE_VARIABLE(fpy, d->length);
  BN_CREATE_VARIABLE(fpz, d->length);
  BN_CREATE_VARIABLE(ox, d->length);
  BN_CREATE_VARIABLE(oy, d->length);
  BN_CREATE_VARIABLE(oz, d->length);
  eccutils_affine_to_projective(pub_k_x, pub_k_y, &fpx, &fpy, &fpz, curve);
  ecc_proj_ec_mult(&fpx, &fpy, &fpz, d, &ox, &oy, &oz, curve);
  eccutils_projective_to_affine(&ox, &oy, &oz, secret, &y, curve);
  hash_func(secret, &y);
  bn_copy(&y, secret, secret->length);
  return 0;
}
