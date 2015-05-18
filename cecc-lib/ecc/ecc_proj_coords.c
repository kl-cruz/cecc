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
#include "nist_curves_ops.h"

//#define POINT_DBL_ECCBOOK
#define POINT_DBL_HYPERELLIPTIC
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
#ifdef POINT_DBL_HYPERELLIPTIC
  /*  Cost: 3M + 5S + 8add + 1*4 + 2*8 + 1*3.
   Source: 2001 Bernstein "A software implementation of NIST P-224".
   Explicit formulas:

   delta = Z12
   gamma = Y12
   beta = X1*gamma
   alpha = 3*(X1-delta)*(X1+delta)
   X3 = alpha2-8*beta
   Z3 = (Y1+Z1)2-gamma-delta
   Y3 = alpha*(4*beta-X3)-8*gamma2
   http://www.hyperelliptic.org/EFD/g1p/auto-shortw-jacobian-3.html#doubling-dbl-2001-b

   THEORETICALLY WORKS ONLY WITH NIST CURVES!
   */
  BN_CREATE_VARIABLE(a, inx->length);
  BN_CREATE_VARIABLE(b, inx->length);
  BN_CREATE_VARIABLE(g, inx->length);
  BN_CREATE_VARIABLE(d, inx->length);
  BN_CREATE_VARIABLE(tmp, inx->length);
  nist_square_curve_mod(inz, curve, &d);
  nist_square_curve_mod(iny, curve, &g);
  nist_mul_curve_mod(inx, &g, curve, &b);
  bn_field_add(inx, &d, curve->p, outx);
  bn_field_sub(inx, &d, curve->p, outy);
  nist_mul_curve_mod(outx, outy, curve, outz);
  bn_field_add(outz, outz, curve->p, outy);
  bn_field_add(outz, outy, curve->p, &a);

  /*bn_zero(outy);
  outy->number[0] = 3;
  nist_mul_curve_mod(outz, outy, curve, &a);*/

  //XYZ
  nist_square_curve_mod(&a, curve, &tmp); //a^2
  bn_field_add(&b, &b, curve->p, outz);
  bn_field_add(outz, outz, curve->p, outy);
  bn_field_add(outy, outy, curve->p, outz);

  /*outy->number[0] = 8;
  nist_mul_curve_mod(outy, &b, curve, outz);*/
  bn_field_sub(&tmp, outz, curve->p, outx); //X!

  bn_field_add(iny, inz, curve->p, outz);
  nist_square_curve_mod(outz, curve, outz);
  bn_field_sub(outz, &g, curve->p, &tmp);
  bn_field_sub(&tmp, &d, curve->p, outz); //Z!

  nist_square_curve_mod(&g, curve, &tmp);
  bn_field_add(&tmp, &tmp, curve->p, outy);
  bn_field_add(outy, outy, curve->p, &tmp);
  bn_field_add(&tmp, &tmp, curve->p, &g);
  /*bn_zero(outy);
  outy->number[0] = 8;
  nist_mul_curve_mod(outy, &tmp, curve, &g); //g -> 8*g^2*/
  bn_field_add(&b, &b, curve->p, outy);
  bn_field_add(outy, outy, curve->p, &b);
  /*outy->number[0] = 4;
  nist_mul_curve_mod(outy, &b, curve, &b); // b -> 4*b*/
  bn_field_sub(&b, outx, curve->p, &tmp);
  nist_mul_curve_mod(&a, &tmp, curve, &a); // b -> 4*b
  bn_field_sub(&a, &g, curve->p, outy);
  return 0;
#endif
#ifdef POINT_DBL_ECCBOOK
  BN_CREATE_VARIABLE(l1, inx->length);
  BN_CREATE_VARIABLE(l2, inx->length);
  BN_CREATE_VARIABLE(l3, inx->length);
  BN_CREATE_VARIABLE(tmp, inx->length);
  BN_CREATE_VARIABLE(tmp2, inx->length);
  nist_square_curve_mod(inx, curve, outx); //X1^2
  bn_field_add(outx, outx, curve->p, &tmp2);
  bn_field_add(outx, &tmp2, curve->p, outz);
  /*bn_zero(&tmp2);
  tmp2.number[0] = 3;
  nist_mul_curve_mod(outx, &tmp2, curve, outz); // 3X1^2*/
  nist_square_curve_mod(inz, curve, outx); //Z1^2
  nist_square_curve_mod(outx, curve, outy); //Z1^4
  nist_mul_curve_mod(curve->a, outy, curve, outx); // aZ1^4
  bn_field_add(outx, outz, curve->p, &l1); // l1=3X1^2+aZ1^4

  nist_mul_curve_mod(iny, inz, curve, outx); // X3=Y1Z1
  bn_field_add(outx, outx, curve->p, outz);
  /*tmp2.number[0] = 2;
  nist_mul_curve_mod(&tmp2, outx, curve, outz); // Z3=2Y1Z1*/

  nist_square_curve_mod(iny, curve, outy); //temporary Y3=Y1^2
  nist_mul_curve_mod(inx, outy, curve, &l3);
  bn_field_add(&l3, &l3, curve->p, &tmp2);
  bn_field_add(&tmp2, &tmp2, curve->p, &l2);
  /*  tmp2.number[0] = 4;
  nist_mul_curve_mod(&tmp2, &l3, curve, &l2); //l2=4X1Y1^2*/

  nist_square_curve_mod(&l1, curve, &tmp); //temporary tmp=l1^2
  bn_field_add(&l2, &l2, curve->p, &l3);
  /*tmp2.number[0] = 2;
  nist_mul_curve_mod(&tmp2, &l2, curve, &l3); //2*l2*/

  bn_field_sub(&tmp, &l3, curve->p, outx); // X3=l1^2-2l2

  nist_square_curve_mod(outy, curve, &tmp); //temporary tmp=Y1^4
  bn_field_add(&tmp, &tmp, curve->p, &tmp2);
  bn_field_add(&tmp2, &tmp2, curve->p, &tmp);
  bn_field_add(&tmp, &tmp, curve->p, &l3);
 /* tmp2.number[0] = 8;
  nist_mul_curve_mod(&tmp2, &tmp, curve, &l3); //l3=8Y1^4*/

  bn_field_sub(&l2, outx, curve->p, &tmp);
  nist_mul_curve_mod(&l1, &tmp, curve, &tmp2);
  bn_field_sub(&tmp2, &l3, curve->p, outy);
  return 0;

#endif
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
  nist_square_curve_mod(qz, curve, sz); //sz => Z2^2
  nist_mul_curve_mod(px, sz, curve, &U1); //U1 = X1*Z2^2

  nist_square_curve_mod(pz, curve, sy); //sy => Z1^2
  nist_mul_curve_mod(qx, sy, curve, &U2); //U2 = X2*Z1^2

  nist_mul_curve_mod(sz, qz, curve, sx); //sx=Z2^3
  nist_mul_curve_mod(py, sx, curve, &S1); //S1 = Y1*Z2^3

  nist_mul_curve_mod(sy, pz, curve, sx); //sx=Z1^3
  nist_mul_curve_mod(qy, sx, curve, &S2); //S2 = Y2*Z1^3

  nist_mul_curve_mod(sz, qz, curve, sz);

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

  nist_square_curve_mod(&H, curve, &H2); //H^2
  nist_mul_curve_mod(&H, &H2, curve, &H3); //H^3

  //COUNTING X3
  bn_zero(sy);
  sy->number[0] = 2;
  nist_mul_curve_mod(sy, &U1, curve, sx); //sx => => 2*U1
  nist_mul_curve_mod(sx, &H2, curve, sy); //sy => 2*U1*H^2
  nist_square_curve_mod(&R, curve, sx); //sx => R^2
  bn_field_sub(sx, &H3, curve->p, sz); //sz=R^2 - H^3
  bn_field_sub(sz, sy, curve->p, sx); //sx => X3 = R^2 - H^3 - 2*U1*H^2

  //COUNTING Y3
  nist_mul_curve_mod(&S1, &H3, curve, &S2); //S2 => S1*H^3
  nist_mul_curve_mod(&U1, &H2, curve, &U2); //U2 => U1*H^2
  bn_field_sub(&U2, sx, curve->p, sz); //sz=> U1*H^2 - X3
  nist_mul_curve_mod(&R, sz, curve, &U2); //&U2 => R*(U1*H^2 - X3)
  bn_field_sub(&U2, &S2, curve->p, sy); // sy=> Y3 = R*(U1*H^2 - X3) - S1*H^3

  //COUNTING Z3
  nist_mul_curve_mod(&H, pz, curve, &S2); //S2 => H*Z1
  nist_mul_curve_mod(&S2, qz, curve, sz); //S2 => H*Z1

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

#define EC_MULT_RIGHT_TO_LEFT_NAF

uint32_t ecc_proj_ec_mult(bn_uint_t *px, bn_uint_t *py, bn_uint_t *pz,
                          bn_uint_t *k, bn_uint_t *outx, bn_uint_t *outy,
                          bn_uint_t *outz, ecc_curve_t *curve) {
#ifdef EC_MULT_RIGHT_TO_LEFT
  bn_zero(outx);
  bn_zero(outy);
  bn_zero(outz);
  BN_CREATE_VARIABLE(pcopyx, px->length);
  BN_CREATE_VARIABLE(pcopyy, py->length);
  BN_CREATE_VARIABLE(pcopyz, pz->length);
  bn_copy(px, &pcopyx, px->length);
  bn_copy(py, &pcopyy, py->length);
  bn_copy(pz, &pcopyz, pz->length);

  BN_CREATE_VARIABLE(tmpx, outx->length);
  BN_CREATE_VARIABLE(tmpy, outy->length);
  BN_CREATE_VARIABLE(tmpz, outz->length);

  BN_CREATE_VARIABLE(kcopy, k->length);
  bn_copy(k, &kcopy, k->length);

  BN_CREATE_VARIABLE(zero, outx->length);
  bn_zero(&zero);

  while (bn_compare(&kcopy, &zero) == 1) {
    if (kcopy.number[0] & 0x1) { //if k is odd
      ecc_proj_ec_add(outx, outy, outz, &pcopyx, &pcopyy, &pcopyz, &tmpx, &tmpy,
          &tmpz, curve);
      bn_copy(&tmpx, outx, outx->length);
      bn_copy(&tmpy, outy, outy->length);
      bn_copy(&tmpz, outz, outz->length);
    }
    bn_shr(&kcopy);
    ecc_proj_ec_double(&pcopyx, &pcopyy, &pcopyz, &tmpx, &tmpy, &tmpz, curve);
    bn_copy(&tmpx, &pcopyx, pcopyx.length);
    bn_copy(&tmpy, &pcopyy, pcopyy.length);
    bn_copy(&tmpz, &pcopyz, pcopyz.length);

    //k <- k - u
  }
#endif

#ifdef EC_MULT_STANDARD_BINARY

  BN_CREATE_VARIABLE(tmpx, outx->length);
  BN_CREATE_VARIABLE(tmpy, outy->length);
  BN_CREATE_VARIABLE(tmpz, outz->length);

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
#endif

#ifdef EC_MULT_RIGHT_TO_LEFT_NAF

  /*
   * Algorithm base on master thesis:
   * HELSINKI UNIVERSITY OF TECHNOLOGY
   * Department of Computer Science and Engineering
   * Laboratory for Theoretical Computer Science
   * Billy Bob Brumley
   * Efficient Elliptic Curve Algorithms for
   * Compact Digital Signatures
   * 3.3.1 NAF, Addition-Subtraction Method page 21
   */

  bn_zero(outx);
  bn_zero(outy);
  bn_zero(outz);
  BN_CREATE_VARIABLE(pcopyx, px->length);
  BN_CREATE_VARIABLE(pcopyy, py->length);
  BN_CREATE_VARIABLE(pcopyyminus, py->length);
  BN_CREATE_VARIABLE(pcopyz, pz->length);
  bn_copy(px, &pcopyx, px->length);
  bn_copy(py, &pcopyy, py->length);
  bn_copy(pz, &pcopyz, pz->length);

  BN_CREATE_VARIABLE(tmpx, outx->length);
  BN_CREATE_VARIABLE(tmpy, outy->length);
  BN_CREATE_VARIABLE(tmpz, outz->length);

  BN_CREATE_VARIABLE(kcopy, k->length);
  bn_copy(k, &kcopy, k->length);

  BN_CREATE_VARIABLE(zero, outx->length);
  bn_zero(&zero);
  bn_field_sub(&zero, py, curve->p, &pcopyyminus);
  BN_CREATE_VARIABLE(one, outx->length);
  bn_zero(&one);
  one.number[0] = 1;

  int32_t u;

  while (bn_compare(&kcopy, &zero) == 1) {

    if (kcopy.number[0] & 0x1) { //if k is odd
      u = 2 - (kcopy.number[0] & 0x3);

      if (u == -1) {
        bn_add(&kcopy, &one, &kcopy);
        ecc_proj_ec_add(outx, outy, outz, &pcopyx, &pcopyyminus, &pcopyz, &tmpx,
                        &tmpy, &tmpz, curve);
      }
      if (u == 1) {
        bn_sub(&kcopy, &one, &kcopy);
        ecc_proj_ec_add(outx, outy, outz, &pcopyx, &pcopyy, &pcopyz, &tmpx,
                        &tmpy, &tmpz, curve);
      }
      bn_copy(&tmpx, outx, outx->length);
      bn_copy(&tmpy, outy, outy->length);
      bn_copy(&tmpz, outz, outz->length);
    }
    bn_shr(&kcopy);
    ecc_proj_ec_double(&pcopyx, &pcopyy, &pcopyz, &tmpx, &tmpy, &tmpz, curve);
    bn_copy(&tmpx, &pcopyx, pcopyx.length);
    bn_copy(&tmpy, &pcopyy, pcopyy.length);
    bn_copy(&tmpz, &pcopyz, pcopyz.length);
    bn_field_sub(&zero, &pcopyy, curve->p, &pcopyyminus);

    //k <- k - u
  }
#endif
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

#define ECC_ECDSA_MULTISCALAR_GENERIC

uint32_t ecc_proj_ECDSA_signature_val(bn_uint_t *r, bn_uint_t *s,
                                      bn_uint_t *hash, bn_uint_t *pub_k_x,
                                      bn_uint_t *pub_k_y, ecc_curve_t *curve) {
  BN_CREATE_VARIABLE(u1, r->length);
  BN_CREATE_VARIABLE(u2, r->length);
  BN_CREATE_VARIABLE(tmpx1, r->length);

  BN_CREATE_VARIABLE(fpx, r->length);
  BN_CREATE_VARIABLE(fpy, r->length);
  BN_CREATE_VARIABLE(fpz, r->length);
  BN_CREATE_VARIABLE(pubk_j_x, r->length);
  BN_CREATE_VARIABLE(pubk_j_y, r->length);
  BN_CREATE_VARIABLE(pubk_j_z, r->length);
  BN_CREATE_VARIABLE(ox, r->length);
  BN_CREATE_VARIABLE(oy, r->length);
  BN_CREATE_VARIABLE(oz, r->length);

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

  eccutils_affine_to_projective(curve->Gx, curve->Gy, &fpx, &fpy, &fpz, curve);
  eccutils_affine_to_projective(pub_k_x, pub_k_y, &pubk_j_x, &pubk_j_y,
                                &pubk_j_z, curve);

  /*For count k1P1+k2P2 we can use two algorithms, normal generic or Solinas*/
#ifdef ECC_ECDSA_MULTISCALAR_GENERIC
  ecc_proj_ec_mult(&fpx, &fpy, &fpz, &u1, &ox, &oy, &oz, curve);
  ecc_proj_ec_mult(&pubk_j_x, &pubk_j_y, &pubk_j_z, &u2, &fpx, &fpy, &fpz,
                   curve);
  ecc_proj_ec_add(&ox, &oy, &oz, &fpx, &fpy, &fpz, &pubk_j_x, &pubk_j_y,
                  &pubk_j_z, curve);
#endif
#ifdef ECC_ECDSA_MULTISCALAR_SOLINAS
  /*Analysis of Multi-Scalar Multiplication in Elliptic Curve Cryptosystem ∗
   Xinchun Yin, Hailing Zhang
   Department of Information Technology and Engineering, Yangzhou University,Yangzhou, China
   page 4*/

#endif
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
  (*prgn)(&random_value);
  bn_barret_modulus(&random_value, curve->barret_mi_n, curve->n, d);

  eccutils_affine_to_projective(curve->Gx, curve->Gy, &fpx, &fpy, &fpz, curve);

  ecc_proj_ec_mult(&fpx, &fpy, &fpz, d, &ox, &oy, &oz, curve);

  eccutils_projective_to_affine(&ox, &oy, &oz, pub_k_x, pub_k_y, curve);

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
  (void)(hash_func);
  /*hash_func(secret, &y);
   bn_copy(&y, secret, secret->length);*/
  return 0;
}
