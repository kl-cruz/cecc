#include "test_tinydtls_ecc.h"
#include "tecc.h"

#include <stdint.h>
#include "platform_utils.h"


uint32_t test_ecdsa_tinydtls_gen_sig(bn_uint_t *k, bn_uint_t *hash, bn_uint_t *d, bn_uint_t *expr, bn_uint_t *exps, ecc_curve_t *curve)
{
    (void)(curve);
    BN_CREATE_VARIABLE(r, expr->length);
    BN_CREATE_VARIABLE(s, exps->length);
    uint32_t res;

    start_count_time();

    res = tecc_ecdsa_sign(d->number, hash->number, k->number, r.number, s.number);

    stop_count_time();

    info("ecc_tinydtls_ECDSA_gen_time_%dB: %u us %u ticks", curve->p->length, get_us(), get_ticks());
    if ((bn_compare(&r, expr) == 0) && (bn_compare(&s, exps) == 0) && (res == 0))
        return 0;
    return 1;
}


uint32_t test_ecdsa_tinydtls_val_sig(bn_uint_t *r, bn_uint_t *s, bn_uint_t *hash, bn_uint_t *pub_k_x, bn_uint_t *pub_k_y, ecc_curve_t *curve)
{
    (void)(curve);
    uint32_t res;

    start_count_time();

    res = tecc_ecdsa_validate(pub_k_x->number, pub_k_y->number, hash->number, r->number, s->number);

    stop_count_time();

    info("ecc_tinydtls_ECDSA_val_time_%dB: %u us %u ticks", curve->p->length, get_us(), get_ticks());
    return res;
}

uint32_t test_ecdsa_tinydtls_sig_val_sig(ecc_curve_t *curve) {
    (void)(curve);
    uint32_t res = 0;
    BN_CREATE_VARIABLE(priv_key, 8);
    BN_CREATE_VARIABLE(k, 8);
    uint32_t pubx[8];
    uint32_t puby[8];
    uint32_t hash[8];
    uint32_t r[9];
    uint32_t s[9];

    start_count_time();

    default_prgn(&priv_key);
    default_prgn(&k);
    tecc_gen_pub_key(priv_key.number, pubx, puby);
    res |= tecc_ecdsa_sign(priv_key.number, hash, k.number, r, s);
    res |= tecc_ecdsa_validate(pubx, puby, hash, r, s);

    stop_count_time();

    info("ecc_tinydtls_ECDSA_gen_val_time_%dB: %u us %u ticks", curve->p->length, get_us(), get_ticks());
    return res;
}

uint32_t test_gen_proj_tinydtls_key(bn_uint_t *d, bn_uint_t *exp_pub_k_x, bn_uint_t *exp_pub_k_y, ecc_curve_t *curve)
{    
    (void)(curve);
    BN_CREATE_VARIABLE(pubx, exp_pub_k_x->length);
    BN_CREATE_VARIABLE(puby, exp_pub_k_y->length);

    start_count_time();

    tecc_gen_pub_key(d->number, pubx.number, puby.number);

    stop_count_time();

    info("ecc_tinydtls_keygen_time_%dB: %u us %u ticks", curve->p->length, get_us(), get_ticks());
    if ((bn_compare(&pubx, exp_pub_k_x) == 0) && (bn_compare(&puby, exp_pub_k_y) == 0))
        return 0;
    return 1;
}

uint32_t test_tinydtls_ecdh(bn_uint_t *d_alice, bn_uint_t *pubx_alice, bn_uint_t *puby_alice, bn_uint_t *d_bob, bn_uint_t *pubx_bob, bn_uint_t *puby_bob,
                            ecc_curve_t *curve)
{
    (void)(curve);
    uint32_t tempAx2[8];
    uint32_t tempAy2[8];
    uint32_t tempBx2[8];
    uint32_t tempBy2[8];

    start_count_time();

    tecc_ec_mult(pubx_bob->number, puby_bob->number, d_alice->number, tempAx2, tempAy2);
    tecc_ec_mult(pubx_alice->number, puby_alice->number, d_bob->number, tempBx2, tempBy2);

    stop_count_time();
    info("ecc_tinydtls_ECDH_time_%dB: %u us %u ticks", curve->p->length, get_us(), get_ticks());

    uint32_t i, result = 1;
    for(i = 0; i < 8; ++i){
        result &= (tempAx2[i] == tempBx2[i]);
        result &= (tempAy2[i] == tempBy2[i]);
    }
    if (result == 1)
        return 0;
    return 1;
}
