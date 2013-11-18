/*
 * ecc.c
 *
 * All rights reserved.
 *
 *  Created on: 04-11-2013
 *      Author: Karol Lasończyk
 */

#include "ecc.h"
#include "platform_utils.h"

/**
 * Points addition
 * @param px
 * @param py
 * @param qx
 * @param qy
 * @param sx
 * @param sy
 * @param curve
 * @return
 */
uint32_t ecc_ec_ad(bn_uint_t *px, bn_uint_t *py, bn_uint_t *qx, bn_uint_t *qy, bn_uint_t *sx, bn_uint_t *sy, bn_uint_t *mi, bn_uint_t *p)
{
	BN_CREATE_VARIABLE(lambda, px->length);
	BN_CREATE_VARIABLE(tmp, px->length);
	bn_zero(&lambda);
	bn_zero(&tmp);
	//check if exists sense to count this points
	if ((bn_compare(px, &tmp) == 0) && (bn_compare(py, &tmp) == 0)) {
		bn_copy(qx, sx, sx->length);
		bn_copy(qy, sy, sy->length);
		return 1;
	} else if ((bn_compare(qx, &tmp) == 0) && (bn_compare(qy, &tmp) == 0)) {
		bn_copy(px, sx, sx->length);
		bn_copy(py, sy, sy->length);
		return 1;
	}
	//try to use initialized variables
	bn_zero(sx);
	bn_zero(sy);
	bn_field_sub(py, qy, p, sy);
	bn_field_sub(px, qx, p, sx);
	bn_field_inverse(sx, p, &lambda);
	bn_copy(&lambda, sx, sx->length);
	//here is lambda
	bn_field_mul_barret(sy, sx, mi, p, &lambda);
	bn_field_mul_barret(&lambda, &lambda, mi, p, sx);
	bn_field_sub(sx, px, p, sy);
	bn_field_sub(sy, qx, p, sx);
	//count Sy
	bn_field_sub(qx, sx, p, sy);
	bn_field_mul_barret(sy, &lambda, mi, p, &tmp);
	bn_field_sub(&tmp, qy, p, sy);

	return 0;
}
uint32_t ecc_ec_add(bn_uint_t *px, bn_uint_t *py, bn_uint_t *qx, bn_uint_t *qy, bn_uint_t *sx, bn_uint_t *sy, ecc_curve_t *curve)
{
	BN_CREATE_VARIABLE(lambda, px->length);
	BN_CREATE_VARIABLE(tmp, px->length);
	bn_zero(&lambda);
	bn_zero(&tmp);
	//check if exists sense to count this points
	if ((bn_compare(px, &tmp) == 0) && (bn_compare(py, &tmp) == 0)) {
		bn_copy(qx, sx, sx->length);
		bn_copy(qy, sy, sy->length);
		return 1;
	} else if ((bn_compare(qx, &tmp) == 0) && (bn_compare(qy, &tmp) == 0)) {
		bn_copy(px, sx, sx->length);
		bn_copy(py, sy, sy->length);
		return 1;
	}
	//try to use initialized variables
	bn_zero(sx);
	bn_zero(sy);
	bn_field_sub(py, qy, curve->p, sy);
	bn_field_sub(px, qx, curve->p, sx);
	bn_field_inverse(sx, curve->p, &lambda);
	bn_copy(&lambda, sx, sx->length);
	//here is lambda
	bn_field_mul_barret(sy, sx, curve->barret_mi, curve->p, &lambda);
	bn_field_mul_barret(&lambda, &lambda, curve->barret_mi, curve->p, sx);
	bn_field_sub(sx, px, curve->p, sy);
	bn_field_sub(sy, qx, curve->p, sx);
	//count Sy
	bn_field_sub(qx, sx, curve->p, sy);
	bn_field_mul_barret(sy, &lambda, curve->barret_mi, curve->p, &tmp);
	bn_field_sub(&tmp, qy, curve->p, sy);

	return 0;
}

uint32_t ecc_ec_addn(bn_uint_t *px, bn_uint_t *py, bn_uint_t *qx, bn_uint_t *qy, bn_uint_t *sx, bn_uint_t *sy, ecc_curve_t *curve)
{
	BN_CREATE_VARIABLE(lambda, px->length);
	BN_CREATE_VARIABLE(tmp, px->length);
	bn_zero(&lambda);
	bn_zero(&tmp);
	//check if exists sense to count this points
	if ((bn_compare(px, &tmp) == 0) && (bn_compare(py, &tmp) == 0)) {
		bn_copy(qx, sx, sx->length);
		bn_copy(qy, sy, sy->length);
		return 1;
	} else if ((bn_compare(qx, &tmp) == 0) && (bn_compare(qy, &tmp) == 0)) {
		bn_copy(px, sx, sx->length);
		bn_copy(py, sy, sy->length);
		return 1;
	}
	//try to use initialized variables
	bn_zero(sx);
	bn_zero(sy);
	bn_field_sub(py, qy, curve->n, sy);
	bn_field_sub(px, qx, curve->n, sx);
	bn_field_inverse(sx, curve->n, &lambda);
	bn_copy(&lambda, sx, sx->length);
	//here is lambda
	bn_field_mul_barret(sy, sx, curve->barret_mi_n, curve->n, &lambda);
	bn_field_mul_barret(&lambda, &lambda, curve->barret_mi_n, curve->n, sx);
	bn_field_sub(sx, px, curve->n, sy);
	bn_field_sub(sy, qx, curve->n, sx);
	//count Sy
	bn_field_sub(qx, sx, curve->n, sy);
	bn_field_mul_barret(sy, &lambda, curve->barret_mi_n, curve->n, &tmp);
	bn_field_sub(&tmp, qy, curve->n, sy);

	return 0;
}

/**
 * Point double
 * @param inx
 * @param iny
 * @param outx
 * @param outy
 * @param curve
 * @return
 */
uint32_t ecc_ec_dbl(bn_uint_t *inx, bn_uint_t *iny, bn_uint_t *outx, bn_uint_t *outy, bn_uint_t *mi, bn_uint_t *p,bn_uint_t *a)
{
	BN_CREATE_VARIABLE(lambda, inx->length);
	BN_CREATE_VARIABLE(tmp, inx->length);
	bn_zero(&tmp);
	bn_zero(outy);
	bn_zero(outx);
	tmp.number[0] = 3;

	bn_field_mul_barret(inx, inx, mi, p, outx); //outx = x^2
	bn_field_mul_barret(&tmp, outx, mi, p, outy); //outy = 3x^2
	bn_field_add(outy, a, p, outx); //outx = 3x^2 + a (eg. a = 3)

	bn_field_add(iny, iny, p, outy);
	bn_field_inverse(outy, p, &tmp); //tmp=1/2*y
	bn_field_mul_barret(outx, &tmp, mi, p, &lambda); //lambda=(3*x^2 - a)/(2*y)
	//counting result x
	bn_field_mul_barret(&lambda, &lambda, mi, p, outx); //outx=lambda^2
	bn_field_sub(outx, inx, p, outy); //outy=lambda^2-x
	bn_field_sub(outy, inx, p, outx); //outx=lambda^2-x-x
	bn_field_sub(inx, outx, p, outy); //outy=x-outx
	bn_field_mul_barret(outy, &lambda, mi, p, &tmp); //tmp=lambda*(x-outx)
	bn_field_sub(&tmp, iny, p, outy);
	return 0;
}
uint32_t ecc_ec_double(bn_uint_t *inx, bn_uint_t *iny, bn_uint_t *outx, bn_uint_t *outy, ecc_curve_t *curve)
{
	BN_CREATE_VARIABLE(lambda, inx->length);
	BN_CREATE_VARIABLE(tmp, inx->length);
	bn_zero(&tmp);
	bn_zero(outy);
	bn_zero(outx);
	tmp.number[0] = 3;

	bn_field_mul_barret(inx, inx, curve->barret_mi, curve->p, outx); //outx = x^2
	bn_field_mul_barret(&tmp, outx, curve->barret_mi, curve->p, outy); //outy = 3x^2
	bn_field_add(outy, curve->a, curve->p, outx); //outx = 3x^2 + a (eg. a = 3)

	bn_field_add(iny, iny, curve->p, outy);
	bn_field_inverse(outy, curve->p, &tmp); //tmp=1/2*y
	bn_field_mul_barret(outx, &tmp, curve->barret_mi, curve->p, &lambda); //lambda=(3*x^2 - a)/(2*y)
	//counting result x
	bn_field_mul_barret(&lambda, &lambda, curve->barret_mi, curve->p, outx); //outx=lambda^2
	bn_field_sub(outx, inx, curve->p, outy); //outy=lambda^2-x
	bn_field_sub(outy, inx, curve->p, outx); //outx=lambda^2-x-x
	bn_field_sub(inx, outx, curve->p, outy); //outy=x-outx
	bn_field_mul_barret(outy, &lambda, curve->barret_mi, curve->p, &tmp); //tmp=lambda*(x-outx)
	bn_field_sub(&tmp, iny, curve->p, outy);
	return 0;
}
uint32_t ecc_ec_doublen(bn_uint_t *inx, bn_uint_t *iny, bn_uint_t *outx, bn_uint_t *outy, ecc_curve_t *curve)
{
	ecc_ec_dbl(inx,iny,outx,outy,curve->barret_mi_n,curve->n,curve->a);
}

/**
 * Point multiplication
 * @param px Point x
 * @param py Point y
 * @param k factor
 * @param outx output point x
 * @param outy output point y
 * @param curve
 * @return
 */

uint32_t ecc_ec_mul(bn_uint_t *px, bn_uint_t *py, bn_uint_t *k, bn_uint_t *outx, bn_uint_t *outy, bn_uint_t *mi, bn_uint_t *p,bn_uint_t *a)
{
	BN_CREATE_VARIABLE(tmpx, outx->length);
	BN_CREATE_VARIABLE(tmpy, outy->length);
	bn_zero(outx);
	bn_zero(outy);
	int32_t i;
	for (i = (k->length * 32) - 1; i >= 0; i--) {
		ecc_ec_dbl(outx, outy, &tmpx, &tmpy, mi,p,a);
		bn_copy(&tmpx, outx, outx->length);
		bn_copy(&tmpy, outy, outy->length);
		if ((((k->number[i / 32]) >> (i % 32)) & 0x01) == 1) {
			ecc_ec_ad(outx, outy, px, py, &tmpx, &tmpy, mi,p); //eccAdd
			bn_copy(&tmpx, outx, outx->length);
			bn_copy(&tmpy, outy, outy->length);
		}
	}
}

//TODO This binary algorithm is soooo slooooow...
uint32_t ecc_ec_mult(bn_uint_t *px, bn_uint_t *py, bn_uint_t *k, bn_uint_t *outx, bn_uint_t *outy, ecc_curve_t *curve)
{
	BN_CREATE_VARIABLE(tmpx, outx->length);
	BN_CREATE_VARIABLE(tmpy, outy->length);
	bn_zero(outx);
	bn_zero(outy);
	int32_t i;
	for (i = (k->length * 32) - 1; i >= 0; i--) {
		ecc_ec_double(outx, outy, &tmpx, &tmpy, curve);
		bn_copy(&tmpx, outx, outx->length);
		bn_copy(&tmpy, outy, outy->length);
		if ((((k->number[i / 32]) >> (i % 32)) & 0x01) == 1) {
			ecc_ec_add(outx, outy, px, py, &tmpx, &tmpy, curve); //eccAdd
			bn_copy(&tmpx, outx, outx->length);
			bn_copy(&tmpy, outy, outy->length);
		}
	}
}

uint32_t ecc_ec_multn(bn_uint_t *px, bn_uint_t *py, bn_uint_t *k, bn_uint_t *outx, bn_uint_t *outy, ecc_curve_t *curve)
{
	ecc_ec_mul(px,py,k,outx,outy,curve->barret_mi_n,curve->n,curve->a);
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
 */

/**
 * Generate ECDSA signature for hash
 * @param k random number
 * @param hash hash
 * @param d private ecc key
 * @param r output value r
 * @param s output value s
 * @param curve curve
 * @return 0 Everything is OK
 * @return 1 Choose other k for proper counting
 */
uint32_t ecc_ECDSA_signature_gen(bn_uint_t *k, bn_uint_t *hash, bn_uint_t *d, bn_uint_t *r, bn_uint_t *s, ecc_curve_t *curve)
{
	BN_CREATE_VARIABLE(tmp, r->length);
	BN_CREATE_VARIABLE(tmp2, r->length);
	bn_zero(&tmp);
	if (bn_compare(k, &tmp) == 0) //if k==0 then exit. Change k
			{
		return 1;
	}

	bn_zero(&tmp2);
	bn_zero(r);
	ecc_ec_mult(curve->Gx, curve->Gy, k, r, s, curve);

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
 * Validate ECDSA signature
 * @param r
 * @param s
 * @param hash
 * @param pub_k_x public key x
 * @param pub_k_y public key y
 * @param curve
 * @return 0 message is consistent
 * @return 1 message is not consistent
 * @return 2 r is greater than field size
 * @return 3 s is greater than field size
 */

uint32_t ecc_ECDSA_signature_val(bn_uint_t *r, bn_uint_t *s, bn_uint_t *hash, bn_uint_t *pub_k_x, bn_uint_t *pub_k_y, ecc_curve_t *curve)
{
	BN_CREATE_VARIABLE(u1, r->length);
	BN_CREATE_VARIABLE(u2, r->length);
	BN_CREATE_VARIABLE(tmpx1, r->length);
	BN_CREATE_VARIABLE(tmpx2, r->length);
	BN_CREATE_VARIABLE(tmpy1, r->length);
	BN_CREATE_VARIABLE(tmpy2, r->length);

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
	//info("w");
	bn_field_inverse(s, curve->n, &tmpx1); //tmpx1=s^-1 (w=s^-1)
	//print_values(1, &tmpx1);
	//info("r");
	//print_values(1, r);
	//info("u2");
	bn_field_mul_barret(&tmpx1, r, curve->barret_mi_n, curve->n, &u2); //u2=rw mod n
	//print_values(1, &u2);
	//info("e");
	//print_values(1, hash);
	//info("u1");
	bn_field_mul_barret(&tmpx1, hash, curve->barret_mi_n, curve->n, &u1); //u1=hash*w mod n
	//print_values(1, &u1);

	//count X
	bn_zero(&tmpx1);
	ecc_ec_mult(curve->Gx, curve->Gy, &u1, &tmpx1, &tmpy1, curve);
	ecc_ec_mult(pub_k_x, pub_k_y, &u2, &tmpx2, &tmpy2, curve);
	ecc_ec_add(&tmpx1, &tmpy1, &tmpx2, &tmpy2, &u1, &u2, curve);
	//info("tmp3");
	//print_values(1, &u1);
	if (bn_compare(&u1, r) == 0) {
		return 0;
	}
	return 1;
}

