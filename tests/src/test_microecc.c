/* Copyright 2014, Kenneth MacKay. Licensed under the BSD 2-clause license. */

#include "../../ExtraRepos/micro-ecc/uECC.h"
#include "test_microecc.h"

#include <stdint.h>
#include <string.h>
#include "platform_utils.h"

static bn_uint_t *rng_source;

int fake_rng(uint8_t *p_dest, unsigned p_size)
{
    BN_CREATE_VARIABLE(priv_key, 8);
    default_prgn(&priv_key);
    memcpy(p_dest, priv_key.number, p_size);
    return 1;
}

int copy_rng(uint8_t *p_dest, unsigned p_size)
{
    (void)(p_size);
    int32_t i, j=0;
    uint32_t value;
    for(i = 0; i < uECC_BYTES - 1; i += 4){
        value = rng_source->number[rng_source->length-j-1];
        p_dest[i+3] = (value) & 0xFF;
        p_dest[i+2] = (value>>8) & 0xFF;
        p_dest[i+1] = (value>>16) & 0xFF;
        p_dest[i]   = (value>>24) & 0xFF;
        ++j;
    }

    return 1;
}

int copy_rng_ECDSA(uint8_t *p_dest, unsigned p_size)
{
    (void)(p_size);
    memcpy(p_dest, rng_source->number, p_size);
    return 1;
}

void convert_bn_to_uint(uint8_t *p_dest, bn_uint_t *p_src)
{
    int32_t i, j=0;
    uint32_t value;
    for(i = 0; i < uECC_BYTES - 1; i += 4){
        value = p_src->number[p_src->length-j-1];
        p_dest[i+3] = (value) & 0xFF;
        p_dest[i+2] = (value>>8) & 0xFF;
        p_dest[i+1] = (value>>16) & 0xFF;
        p_dest[i]   = (value>>24) & 0xFF;
        ++j;
    }
}

void convert_uint_to_bn(bn_uint_t *p_dest, uint8_t *p_src)
{
    int32_t i, j=0;
    uint32_t value;
    for(i = 0; i < uECC_BYTES; i += 4){
        value =  p_src[i+3];
        value |= p_src[i+2]<<8;
        value |= p_src[i+1]<<16;
        value |= p_src[i]<<24;
        p_dest->number[p_dest->length-j-1] = value;
        ++j;
    }
}

uint32_t test_ecdsa_microecc_gen_sig(bn_uint_t *k, bn_uint_t *hash, bn_uint_t *d, bn_uint_t *expr, bn_uint_t *exps, ecc_curve_t *curve)
{
    uECC_set_rng(&copy_rng_ECDSA);
    rng_source = k;
    BN_CREATE_VARIABLE(r, expr->length);
    BN_CREATE_VARIABLE(s, exps->length);
    uint32_t res;
    uint8_t l_private[uECC_BYTES];
    uint8_t l_hash[uECC_BYTES];
    uint8_t l_sig[uECC_BYTES*2];

    start_count_time();

    convert_bn_to_uint(l_private, d);
    convert_bn_to_uint(l_hash, hash);
    res = uECC_sign(l_private, l_hash, l_sig);
    convert_uint_to_bn(&r, l_sig);
    convert_uint_to_bn(&s, l_sig+uECC_BYTES);

    stop_count_time();

    info("ecc_microecc_ECDSA_gen_time_%dB: %u us %u ticks", curve->p->length, get_us(), get_ticks());
    if ((bn_compare(&r, expr) == 0) && (bn_compare(&s, exps) == 0) && (res == 1))
        return 0;
    return 1;
}


uint32_t test_ecdsa_microecc_val_sig(bn_uint_t *r, bn_uint_t *s, bn_uint_t *hash, bn_uint_t *pub_k_x, bn_uint_t *pub_k_y, ecc_curve_t *curve)
{
    uint32_t res;
    uint8_t l_public[uECC_BYTES*2];
    uint8_t l_hash[uECC_BYTES];
    uint8_t l_sig[uECC_BYTES*2];

    start_count_time();

    convert_bn_to_uint(l_public, pub_k_x);
    convert_bn_to_uint(l_public+uECC_BYTES, pub_k_y);
    convert_bn_to_uint(l_sig, r);
    convert_bn_to_uint(l_sig+uECC_BYTES, s);
    convert_bn_to_uint(l_hash, hash);
    res = uECC_verify(l_public, l_hash, l_sig);

    stop_count_time();

    info("ecc_microecc_ECDSA_val_time_%dB: %u us %u ticks", curve->p->length, get_us(), get_ticks());
    if (res == 1)
        return 0;
    return 1;
}

uint32_t test_ecdsa_microecc_sig_val_sig(ecc_curve_t *curve)
{
    uint32_t res = 1;
    uECC_set_rng(&fake_rng);

    uint8_t l_public[uECC_BYTES*2];
    uint8_t l_private[uECC_BYTES];
    uint8_t l_hash[uECC_BYTES];
    uint8_t l_sig[uECC_BYTES*2];

    start_count_time();

    res &= uECC_make_key(l_public, l_private);
    memcpy(l_hash, l_public, uECC_BYTES);
    res &= uECC_sign(l_private, l_hash, l_sig);
    res &= uECC_verify(l_public, l_hash, l_sig);

    stop_count_time();

    info("ecc_microecc_ECDSA_gen_val_time_%dB: %u us %u ticks", curve->p->length, get_us(), get_ticks());
    if (res == 1)
        return 0;
    return 1;
}

uint32_t test_gen_proj_microecc_key(bn_uint_t *d, bn_uint_t *exp_pub_k_x, bn_uint_t *exp_pub_k_y, ecc_curve_t *curve)
{
    BN_CREATE_VARIABLE(pubx, exp_pub_k_x->length);
    BN_CREATE_VARIABLE(puby, exp_pub_k_y->length);
    uint8_t l_public[uECC_BYTES*2];
    uint8_t l_private[uECC_BYTES];

    start_count_time();

    convert_bn_to_uint(l_private, d);
    uECC_compute_public_key(l_private, l_public);
    convert_uint_to_bn(&pubx, l_public);
    convert_uint_to_bn(&puby, l_public+uECC_BYTES);

    stop_count_time();

    info("ecc_microecc_keygen_time_%dB: %u us %u ticks", curve->p->length, get_us(), get_ticks());
    if ((bn_compare(&pubx, exp_pub_k_x) == 0) && (bn_compare(&puby, exp_pub_k_y) == 0))
        return 0;
    return 1;
}

uint32_t test_microecc_ecdh(bn_uint_t *d_alice, bn_uint_t *pubx_alice, bn_uint_t *puby_alice, bn_uint_t *d_bob, bn_uint_t *pubx_bob, bn_uint_t *puby_bob,
                            ecc_curve_t *curve)
{
    uint32_t i, result = 1;

    uint8_t p_publicKeyA[uECC_BYTES*2];
    uint8_t p_privateKeyA[uECC_BYTES];
    uint8_t p_secretA[uECC_BYTES];

    uint8_t p_publicKeyB[uECC_BYTES*2];
    uint8_t p_privateKeyB[uECC_BYTES];
    uint8_t p_secretB[uECC_BYTES];

    start_count_time();

    //convert between bn_uint and bytes
    convert_bn_to_uint(p_privateKeyA,d_alice);
    convert_bn_to_uint(p_publicKeyA,pubx_alice);
    convert_bn_to_uint(p_publicKeyA+uECC_BYTES,puby_alice);
    convert_bn_to_uint(p_privateKeyB,d_bob);
    convert_bn_to_uint(p_publicKeyB,pubx_bob);
    convert_bn_to_uint(p_publicKeyB+uECC_BYTES,puby_bob);
    //now magic starts! alice and bob exchange their Qx and Qx
    uECC_shared_secret(p_publicKeyB, p_privateKeyA, p_secretA);
    //bob also count secret
    uECC_shared_secret(p_publicKeyA, p_privateKeyB, p_secretB);

    stop_count_time();

    info("ecc_microecc_ECDH_time_%dB: %u us %u ticks", curve->p->length, get_us(), get_ticks());
    for(i = 0; i < uECC_BYTES; ++i){
        result &= (p_secretA[i] == p_secretB[i]);
    }
    if (result == 1)
        return 0;
    return 1;
}
