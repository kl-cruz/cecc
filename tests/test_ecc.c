/*
 * test_ecc.c
 *
 * All rights reserved.
 *
 *  Created on: 05-11-2013
 *      Author: Karol Lasończyk
 */
#include "ecc.h"
#include "platform_utils.h"

//TODO ustawić stos na 0x0400 i sprawdzić czemu nie działa dla takiego małego stosu a działa dla 0x0800
uint32_t test_ecc_add(bn_uint_t *ax, bn_uint_t *ay, bn_uint_t *bx, bn_uint_t *by, bn_uint_t *expx, bn_uint_t *expy, ecc_curve_t *curve)
{
	BN_CREATE_VARIABLE(outx, expx->length);
	BN_CREATE_VARIABLE(outy, expy->length);
	//start_count_time();
	ecc_ec_add(ax, ay, bx, by, &outx, &outy, curve);
	//stop_count_time();
	//info("working time: %d us", get_us());
	//print_values(4, &outx, expx, &outy, expy);

	if ((bn_is_equal(&outx, expx) == 0) && (bn_is_equal(&outy, expy) == 0))
		return 0;
	return 1;
}

uint32_t test_ecc_double(bn_uint_t *ax, bn_uint_t *ay, bn_uint_t *expx, bn_uint_t *expy, ecc_curve_t *curve)
{
	BN_CREATE_VARIABLE(outx, expx->length);
	BN_CREATE_VARIABLE(outy, expy->length);
	//start_count_time();
	ecc_ec_double(ax, ay, &outx, &outy, curve);
	//stop_count_time();
	//info("working time: %d us", get_us());
	//print_values(2, &outx, &outy);

	if ((bn_is_equal(&outx, expx) == 0) && (bn_is_equal(&outy, expy) == 0))
		return 0;
	return 1;
}

uint32_t test_ecc_mul(bn_uint_t *px, bn_uint_t *py, bn_uint_t *k, bn_uint_t *expx, bn_uint_t *expy, ecc_curve_t *curve)
{
	BN_CREATE_VARIABLE(outx, expx->length);
	BN_CREATE_VARIABLE(outy, expy->length);
	//start_count_time();
	ecc_ec_mult(px, py, k, &outx, &outy, curve);
	//stop_count_time();
	//info("working time: %d us", get_us());
	//print_values(2, &outx, &outy);

	if ((bn_is_equal(&outx, expx) == 0) && (bn_is_equal(&outy, expy) == 0))
		return 0;
	return 1;
}

uint32_t test_ecdsa_gen_sig(bn_uint_t *k, bn_uint_t *hash, bn_uint_t *d, bn_uint_t *expr, bn_uint_t *exps, ecc_curve_t *curve)
{
	BN_CREATE_VARIABLE(r, expr->length);
	BN_CREATE_VARIABLE(s, exps->length);
	uint32_t res;
	start_count_time();
	res = ecc_ECDSA_signature_gen(k, hash, d, &r, &s, curve);
	stop_count_time();
	info("ECDSA signature generation time:%f ms", get_us() / 1000.0);

	if ((bn_is_equal(&r, expr) == 0) && (bn_is_equal(&s, exps) == 0) && (res == 0))
		return 0;
	return 1;
}

uint32_t test_ecdsa_val_sig(bn_uint_t *r, bn_uint_t *s, bn_uint_t *hash, bn_uint_t *pub_k_x, bn_uint_t *pub_k_y, ecc_curve_t *curve)
{
	uint32_t res;
	start_count_time();
	res = ecc_ECDSA_signature_val(r, s, hash, pub_k_x, pub_k_y, curve);
	stop_count_time();
	info("ECDSA signature validation time:%f ms", get_us() / 1000.0);

	if (res == 0)
		return 0;
	return 1;
}

uint32_t test_gen_key(bn_uint_t *d, bn_uint_t *exp_pub_k_x, bn_uint_t *exp_pub_k_y, ecc_curve_t *curve)
{
	BN_CREATE_VARIABLE(dtmp, d->length);
	void prgn(bn_uint_t *output)
	{
		bn_copy(d, output, output->length);
	}
	BN_CREATE_VARIABLE(pubx, exp_pub_k_x->length);
	BN_CREATE_VARIABLE(puby, exp_pub_k_y->length);

	uint32_t res;
	start_count_time();
	ecc_generate_key(&prgn, &dtmp, &pubx, &puby, curve);
	stop_count_time();
	info("EC key generation time:%f ms", get_us() / 1000.0);

	if ((bn_is_equal(&pubx, exp_pub_k_x) == 0) && (bn_is_equal(&puby, exp_pub_k_y) == 0))
		return 0;
	return 1;
}

uint32_t test_ecdh(bn_uint_t *d_alice, bn_uint_t *pubx_alice, bn_uint_t *puby_alice, bn_uint_t *d_bob, bn_uint_t *pubx_bob, bn_uint_t *puby_bob,
		ecc_curve_t *curve)
{
	//print_values(6,d_alice,pubx_alice,puby_alice,d_bob,pubx_bob,puby_bob);
	start_count_time();

	BN_CREATE_VARIABLE(secret_alice, d_alice->length);
	BN_CREATE_VARIABLE(secret_bob, d_bob->length);

	//now magic starts! alice and bob exchange their Qx and Qx
	ecc_ECDH_secret_gen(&ecc_default_hash, d_alice, pubx_bob, puby_bob, &secret_alice, curve);
	//bob also count secret
	ecc_ECDH_secret_gen(&ecc_default_hash, d_bob, pubx_alice, puby_alice, &secret_bob, curve);
	stop_count_time();
	//print_values(2,&secret_alice,&secret_bob);
	info("ECDH exchange time:%f ms", get_us() / 1000.0);
	if (bn_is_equal(&secret_alice, &secret_bob) == 0)
		return 0;
	return 1;
}
