/*
 * main.c
 *
 * All rights reserved.
 *
 *  Created on: 17-10-2013
 *      Author: Karol Lasończyk
 */

#include "platform_utils.h"

//tests
#include "test_bignum.h"
#include "fixtures/test_bignum_fixtures.h"
#include "test_ecc.h"
#include "fixtures/test_ecc_fixtures.h"
#include "nist_curves.h"
#include "seatest.h"
#include "test_ecc_utils.h"
#include "test_ecc_proj_coords.h"

/*
 * Test have some options to enable or disable test.
 * Firstly, during normal compilation all tests are enabled.
 * If you want to compile only interesting test you may use define:
 *      TEST_DISABLE_ALL
 * To disable all tests. Now you can check which test can be compile:
 *
 *      TEST_BIGNUM
 *          TEST_BIGNUM_SHL                 -> Enable shift left tests
 *          TEST_BIGNUM_SHR                 -> Enable shift right tests
 *          TEST_BIGNUM_ADD                 -> Enable addition tests
 *          TEST_BIGNUM_SUB                 -> Enable subtraction tests
 *          TEST_BIGNUM_MUL                 -> Enable multiplication tests
 *          TEST_BIGNUM_MUL_2_BARRET        -> Enable mul*2 using barret modulo tests
 *          TEST_BIGNUM_MUL_2_ADD           -> Enable mul*2 using field add a+a tests
 *          TEST_BIGNUM_MUL_8_BARRET        -> Enable mul*8 using barret modulo tests
 *          TEST_BIGNUM_MUL_8_ADD           -> Enable mul*8 using field add a+a+a+a+a+a+a+a tests
 *          TEST_BIGNUM_SQUARE              -> Enable square tests
 *          TEST_BIGNUM_FIELD_ADD           -> Enable field add tests
 *          TEST_BIGNUM_FIELD_SUB           -> Enable field sub tests
 *          TEST_BIGNUM_FIELD_MUL           -> Enable field mul tests
 *          TEST_BIGNUM_FIELD_INV           -> Enable field inv tests
 *          TEST_BIGNUM_BARRET_MOD          -> Enable barret mod tests
 *
 *      TEST_ECC_AFFINE
 *          TEST_ECC_AFFINE_ADD             -> Enable affine points add tests
 *          TEST_ECC_AFFINE_DBL             -> Enable affine point double tests
 *          TEST_ECC_AFFINE_MUL             -> Enable affine point multiplication tests
 *          TEST_ECC_AFFINE_ECDSA_SIG_GEN   -> Enable affine ECDSA signature generation tests
 *          TEST_ECC_AFFINE_ECDSA_SIG_VAL   -> Enable affine ECDSA signature validation tests
 *          TEST_ECC_AFFINE_KEYGEN          -> Enable affine keys generation tests
 *          TEST_ECC_AFFINE_ECDH            -> Enable affine ECDH tests
 *          TEST_ECC_AFFINE_SIG_GEN_VAL     -> Enable affine ECDSA signature generation and validation tests
 *
 *      TEST_ECC_UTILS
 *          TEST_ECC_UTILS_CONV             -> Enable convertion between afiine and projective systems tests
 *          TEST_ECC_UTILS_CURVE_MOD        -> Enable dedicated modulo secp256r1 tests
 *
 *      TEST_ECC_PROJ
 *          TEST_ECC_PROJ_DBL               -> Enable projective point double tests
 *          TEST_ECC_PROJ_ADD               -> Enable projective points add tests
 *          TEST_ECC_PROJ_MUL               -> Enable projective point multiplication tests
 *          TEST_ECC_PROJ_ECDSA_SIG_GEN     -> Enable projective ECDSA signature generation tests
 *          TEST_ECC_PROJ_ECDSA_SIG_VAL     -> Enable projective ECDSA signature validation tests
 *          TEST_ECC_PROJ_ECDSA_SIG_GEN_VAL -> Enable projective ECDSA signature generation and validation tests
 *          TEST_ECC_PROJ_KEYGEN            -> Enable projective keys generation tests
 *          TEST_ECC_PROJ_ECDH              -> Enable projective ECDH tests
 *
 */

void speed_test_mul_2_barret(void) {
    uint32_t i;
    for (i = 0; i < mul_mod_barret_128_tab_len; ++i) {
      assert_true(
          test_field_mul_barret(mul_mod_speed_2_128_test_tab[i][0],
                                mul_mod_speed_2_128_test_tab[i][1],
                                &mul_mod_speed_2_128_mi_, &mul_mod_speed_2_128_p_,
                                mul_mod_speed_2_128_test_tab[i][2]) == 0);
    }
    for (i = 0; i < mul_mod_barret_256_tab_len; ++i) {
      assert_true(
          test_field_mul_barret(mul_mod_speed_2_256_test_tab[i][0],
                                mul_mod_speed_2_256_test_tab[i][1],
                                &mul_mod_speed_2_256_mi_, &mul_mod_speed_2_256_p_,
                                mul_mod_speed_2_256_test_tab[i][2]) == 0);
    }
}

void speed_test_mul_2(void) {
    uint32_t i;
    for (i = 0; i < mul_mod_barret_128_tab_len; ++i) {
      assert_true(
          test_field_mul_add(mul_mod_speed_2_128_test_tab[i][0],
                                mul_mod_speed_2_128_test_tab[i][1],
                                &mul_mod_speed_2_128_mi_, &mul_mod_speed_2_128_p_,
                                mul_mod_speed_2_128_test_tab[i][2]) == 0);
    }
    for (i = 0; i < mul_mod_barret_256_tab_len; ++i) {
      assert_true(
          test_field_mul_add(mul_mod_speed_2_256_test_tab[i][0],
                                mul_mod_speed_2_256_test_tab[i][1],
                                &mul_mod_speed_2_256_mi_, &mul_mod_speed_2_256_p_,
                                mul_mod_speed_2_256_test_tab[i][2]) == 0);
    }
}

void speed_test_mul_8_barret(void) {
    uint32_t i;
    for (i = 0; i < mul_mod_speed_8_128_tab_len; ++i) {
      assert_true(
          test_field_mul_barret(mul_mod_speed_8_128_test_tab[i][0],
                                mul_mod_speed_8_128_test_tab[i][1],
                                &mul_mod_speed_8_128_mi_, &mul_mod_speed_8_128_p_,
                                mul_mod_speed_8_128_test_tab[i][2]) == 0);
    }
    for (i = 0; i < mul_mod_speed_8_256_tab_len; ++i) {
      assert_true(
          test_field_mul_barret(mul_mod_speed_8_256_test_tab[i][0],
                                mul_mod_speed_8_256_test_tab[i][1],
                                &mul_mod_speed_8_256_mi_, &mul_mod_speed_8_256_p_,
                                mul_mod_speed_8_256_test_tab[i][2]) == 0);
    }
}

void speed_test_mul_8(void) {
    uint32_t i;
    for (i = 0; i < mul_mod_speed_8_128_tab_len; ++i) {
      assert_true(
          test_field_mul_add(mul_mod_speed_8_128_test_tab[i][0],
                                mul_mod_speed_8_128_test_tab[i][1],
                                &mul_mod_speed_8_128_mi_, &mul_mod_speed_8_128_p_,
                                mul_mod_speed_8_128_test_tab[i][2]) == 0);
    }
    for (i = 0; i < mul_mod_speed_8_256_tab_len; ++i) {
      assert_true(
          test_field_mul_add(mul_mod_speed_8_256_test_tab[i][0],
                                mul_mod_speed_8_256_test_tab[i][1],
                                &mul_mod_speed_8_256_mi_, &mul_mod_speed_8_256_p_,
                                mul_mod_speed_8_256_test_tab[i][2]) == 0);
    }
}

void tests_shr(void) {
  uint32_t i;
  for (i = 0; i < shr_128_tab_len; ++i) {
    assert_true(test_shr(shr_128_test_tab[i][0], shr_128_test_tab[i][1]) == 0);
  }
  for (i = 0; i < shr_256_tab_len; ++i) {
    assert_true(test_shr(shr_256_test_tab[i][0], shr_256_test_tab[i][1]) == 0);
  }
}

void tests_shl(void) {
  uint32_t i;
  for (i = 0; i < shl_128_tab_len; ++i) {
    assert_true(test_shl(shl_128_test_tab[i][0], shl_128_test_tab[i][1]) == 0);
  }
  for (i = 0; i < shl_256_tab_len; ++i) {
    assert_true(test_shl(shl_256_test_tab[i][0], shl_256_test_tab[i][1]) == 0);
  }
}

void tests_add(void) {
  uint32_t i;
  for (i = 0; i < add_128_tab_len; ++i) {
    assert_true(
        test_add(add_128_test_tab[i][0], add_128_test_tab[i][1],
                 add_128_test_tab[i][2]) == 0);
  }
  for (i = 0; i < add_256_tab_len; ++i) {
    assert_true(
        test_add(add_256_test_tab[i][0], add_256_test_tab[i][1],
                 add_256_test_tab[i][2]) == 0);
  }
}

void tests_sub(void) {
  uint32_t i;
  for (i = 0; i < sub_128_tab_len; ++i) {
    assert_true(
        test_sub(sub_128_test_tab[i][0], sub_128_test_tab[i][1],
                 sub_128_test_tab[i][2]) == 0);
  }
  for (i = 0; i < sub_256_tab_len; ++i) {
    assert_true(
        test_sub(sub_256_test_tab[i][0], sub_256_test_tab[i][1],
                 sub_256_test_tab[i][2]) == 0);
  }
}

void tests_mul(void) {
  uint32_t i;
  for (i = 0; i < mul_128_tab_len; ++i) {
    assert_true(
        test_mul(mul_128_test_tab[i][0], mul_128_test_tab[i][1],
                 mul_128_test_tab[i][2]) == 0);
  }
  for (i = 0; i < mul_256_tab_len; ++i) {
    assert_true(
        test_mul(mul_256_test_tab[i][0], mul_256_test_tab[i][1],
                 mul_256_test_tab[i][2]) == 0);
  }
}

void tests_square(void) {
  uint32_t i;
  for (i = 0; i < square_128_tab_len; ++i) {
    assert_true(
        test_square(square_128_test_tab[i][0], square_128_test_tab[i][1]) == 0);
  }
  for (i = 0; i < square_256_tab_len; ++i) {
    assert_true(
        test_square(square_256_test_tab[i][0], square_256_test_tab[i][1]) == 0);
  }
}

void tests_field_add(void) {
  uint32_t i = 0;
  for (i = 0; i < add_mod_128_tab_len; ++i) {
    assert_true(
        test_field_add(add_mod_128_test_tab[i][0], add_mod_128_test_tab[i][1],
                       add_mod_128_test_tab[i][2], add_mod_128_test_tab[i][3])
            == 0);
  }
  for (i = 0; i < add_mod_256_tab_len; ++i) {
    assert_true(
        test_field_add(add_mod_256_test_tab[i][0], add_mod_256_test_tab[i][1],
                       add_mod_256_test_tab[i][2], add_mod_256_test_tab[i][3])
            == 0);
  }
}

void tests_field_sub(void) {
  uint32_t i;
  for (i = 0; i < sub_mod_128_tab_len; ++i) {
    assert_true(
        test_field_sub(sub_mod_128_test_tab[i][0], sub_mod_128_test_tab[i][1],
                       sub_mod_128_test_tab[i][2], sub_mod_128_test_tab[i][3])
            == 0);
  }
  for (i = 0; i < sub_mod_256_tab_len; ++i) {
    assert_true(
        test_field_sub(sub_mod_256_test_tab[i][0], sub_mod_256_test_tab[i][1],
                       sub_mod_256_test_tab[i][2], sub_mod_256_test_tab[i][3])
            == 0);
  }
}

void tests_field_mul(void) {
  uint32_t i;
  for (i = 0; i < mul_mod_barret_128_tab_len; ++i) {
    assert_true(
        test_field_mul_barret(mul_mod_barret_128_test_tab[i][0],
                              mul_mod_barret_128_test_tab[i][1],
                              &mul_mod_barret_128_mi_, &mul_mod_barret_128_p_,
                              mul_mod_barret_128_test_tab[i][2]) == 0);
  }
  for (i = 0; i < mul_mod_barret_256_tab_len; ++i) {
    assert_true(
        test_field_mul_barret(mul_mod_barret_256_test_tab[i][0],
                              mul_mod_barret_256_test_tab[i][1],
                              &mul_mod_barret_256_mi_, &mul_mod_barret_256_p_,
                              mul_mod_barret_256_test_tab[i][2]) == 0);
  }
}

void tests_field_inv(void) {
  uint32_t i;
  for (i = 0; i < inv_mod_128_tab_len; ++i) {
    assert_true(
        test_field_inv(inv_mod_128_test_tab[i][0], inv_mod_128_test_tab[i][1],
                       inv_mod_128_test_tab[i][2]) == 0);
  }
  for (i = 0; i < inv_mod_256_tab_len; ++i) {
    assert_true(
        test_field_inv(inv_mod_256_test_tab[i][0], inv_mod_256_test_tab[i][1],
                       inv_mod_256_test_tab[i][2]) == 0);
  }
}

void tests_barret_modulus(void) {
  uint32_t i = 0;
  for (i = 0; i < mod_barret_128_tab_len; ++i) {
    assert_true(
        test_barret_mod(mod_barret_128_test_tab[i][0], &mod_barret_128_mi_,
                        &mod_barret_128_p_, mod_barret_128_test_tab[i][1])
            == 0);
  }
  for (i = 0; i < mod_barret_256_tab_len; ++i) {
    assert_true(
        test_barret_mod(mod_barret_256_test_tab[i][0], &mod_barret_256_mi_,
                        &mod_barret_256_p_, mod_barret_256_test_tab[i][1])
            == 0);
  }
}

void bignum_tests(void) {
  test_fixture_start()
  ;
#if defined(TEST_BIGNUM_SHL) || !defined(TEST_DISABLE_ALL)
  run_test(tests_shl);
#endif

#if defined(TEST_BIGNUM_SHR) || !defined(TEST_DISABLE_ALL)
  run_test(tests_shr);
#endif

#if defined(TEST_BIGNUM_ADD) || !defined(TEST_DISABLE_ALL)
  run_test(tests_add);
#endif

#if defined(TEST_BIGNUM_SUB) || !defined(TEST_DISABLE_ALL)
  run_test(tests_sub);
#endif

#if defined(TEST_BIGNUM_MUL) || !defined(TEST_DISABLE_ALL)
  run_test(tests_mul);
#endif

#if defined(TEST_BIGNUM_MUL_2_BARRET) || !defined(TEST_DISABLE_ALL)
  run_test(speed_test_mul_2_barret);
#endif

#if defined(TEST_BIGNUM_MUL_2_ADD) || !defined(TEST_DISABLE_ALL)
  run_test(speed_test_mul_2);
#endif

#if defined(TEST_BIGNUM_MUL_8_BARRET) || !defined(TEST_DISABLE_ALL)
  run_test(speed_test_mul_8_barret);
#endif

#if defined(TEST_BIGNUM_MUL_8_ADD) || !defined(TEST_DISABLE_ALL)
  run_test(speed_test_mul_8);
#endif

#if defined(TEST_BIGNUM_SQUARE) || !defined(TEST_DISABLE_ALL)
  run_test(tests_square);
#endif

#if defined(TEST_BIGNUM_FIELD_ADD) || !defined(TEST_DISABLE_ALL)
  run_test(tests_field_add);
#endif

#if defined(TEST_BIGNUM_FIELD_SUB) || !defined(TEST_DISABLE_ALL)
  run_test(tests_field_sub);
#endif

#if defined(TEST_BIGNUM_FIELD_MUL) || !defined(TEST_DISABLE_ALL)
  run_test(tests_field_mul);
#endif

#if defined(TEST_BIGNUM_FIELD_INV) || !defined(TEST_DISABLE_ALL)
  run_test(tests_field_inv);
#endif

#if defined(TEST_BIGNUM_BARRET_MOD) || !defined(TEST_DISABLE_ALL)
  run_test(tests_barret_modulus);
#endif

  test_fixture_end()
  ;
}

void tests_ecc_add(void) {
  uint32_t i = 0;
  for (i = 0; i < ecc_points_add_secp256r1_tab_len; ++i) {
    assert_true(
        test_ecc_add(ecc_points_add_secp256r1_test_tab[i][0],
                     ecc_points_add_secp256r1_test_tab[i][1],
                     ecc_points_add_secp256r1_test_tab[i][2],
                     ecc_points_add_secp256r1_test_tab[i][3],
                     ecc_points_add_secp256r1_test_tab[i][4],
                     ecc_points_add_secp256r1_test_tab[i][5], &ec_secp256r1)
            == 0);
  }
}

void tests_ecc_double(void) {
  uint32_t i = 0;
  for (i = 0; i < ecc_point_double_secp256r1_tab_len; ++i) {
    assert_true(
        test_ecc_double(ecc_point_double_secp256r1_test_tab[i][0],
                        ecc_point_double_secp256r1_test_tab[i][1],
                        ecc_point_double_secp256r1_test_tab[i][2],
                        ecc_point_double_secp256r1_test_tab[i][3],
                        &ec_secp256r1) == 0);
  }
}

void tests_ecc_mul(void) {
  uint32_t i = 0;
  for (i = 0; i < ecc_point_mul_secp256r1_tab_len; ++i) {
    assert_true(
        test_ecc_mul(ecc_point_mul_secp256r1_test_tab[i][0],
                     ecc_point_mul_secp256r1_test_tab[i][1],
                     ecc_point_mul_secp256r1_test_tab[i][2],
                     ecc_point_mul_secp256r1_test_tab[i][3],
                     ecc_point_mul_secp256r1_test_tab[i][4], &ec_secp256r1)
            == 0);
  }
}

void tests_ecc_ECDSA_gen_signature(void) {
  uint32_t i = 0;

  for (i = 0; i < P_256_SHA_256_tab_len; ++i) {
    assert_true(
        test_ecdsa_gen_sig(P_256_SHA_256_tab[i][4], P_256_SHA_256_tab[i][0],
                           P_256_SHA_256_tab[i][1], P_256_SHA_256_tab[i][5],
                           P_256_SHA_256_tab[i][6], &ec_secp256r1) == 0);

  }

}

void tests_ecc_ECDSA_val_signature(void) {
  uint32_t i = 0;

  for (i = 0; i < P_256_SHA_256_tab_len; ++i) {

    assert_true(
        test_ecdsa_val_sig(P_256_SHA_256_tab[i][5], P_256_SHA_256_tab[i][6],
                           P_256_SHA_256_tab[i][0], P_256_SHA_256_tab[i][2],
                           P_256_SHA_256_tab[i][3], &ec_secp256r1) == 0);

  }
}

void tests_ecc_gen_keys(void) {
  uint32_t i = 0;

  for (i = 0; i < P_256_SHA_256_tab_len; ++i) {

    assert_true(
        test_gen_key(P_256_SHA_256_tab[i][1], P_256_SHA_256_tab[i][2],
                     P_256_SHA_256_tab[i][3], &ec_secp256r1) == 0);

  }
}

void tests_ecc_ECDSA(void) {
  uint32_t i = 0;

  for (i = 0; i < P_256_SHA_256_tab_len; ++i) {

    assert_true(
        test_ecdsa_sig_val_sig(&ec_secp256r1) == 0);

  }
}

void tests_ecc_ECDH(void) {
  uint32_t i = 0;

  BN_CREATE_VARIABLE(bob_d, ec_secp256r1.n->length);
  BN_CREATE_VARIABLE(bob_pubx, ec_secp256r1.n->length);
  BN_CREATE_VARIABLE(bob_puby, ec_secp256r1.n->length);
  BN_CREATE_VARIABLE(alice_d, ec_secp256r1.n->length);
  BN_CREATE_VARIABLE(alice_pubx, ec_secp256r1.n->length);
  BN_CREATE_VARIABLE(alice_puby, ec_secp256r1.n->length);
  for (i = 0; i < P_256_SHA_256_tab_len; ++i) {
    ecc_generate_key(&default_prgn, &bob_d, &bob_pubx, &bob_puby,
                     &ec_secp256r1);
    ecc_generate_key(&default_prgn, &alice_d, &alice_pubx, &alice_puby,
                     &ec_secp256r1);
    assert_true(
        test_ecdh(&alice_d, &alice_pubx, &alice_puby, &bob_d, &bob_pubx,
                  &bob_puby, &ec_secp256r1) == 0);
  }
}

void tests_ecc_curve_modulus(void) {
  uint32_t i = 0;
  for (i = 0; i < mod_barret_256_tab_len; ++i) {
    assert_true(
        test_curve_mod(mod_barret_256_test_tab[i][0],mod_barret_256_test_tab[i][1],&ec_secp256r1)
            == 0);
  }
}

void ecc_ops_tests(void) {
  test_fixture_start()
  ;
#if defined(TEST_ECC_AFFINE_ADD) || !defined(TEST_DISABLE_ALL)
  run_test(tests_ecc_add);
#endif

#if defined(TEST_ECC_AFFINE_DBL) || !defined(TEST_DISABLE_ALL)
  run_test(tests_ecc_double);
#endif

#if defined(TEST_ECC_AFFINE_MUL) || !defined(TEST_DISABLE_ALL)
  run_test(tests_ecc_mul);
#endif

#if defined(TEST_ECC_AFFINE_ECDSA_SIG_GEN) || !defined(TEST_DISABLE_ALL)
  run_test(tests_ecc_ECDSA_gen_signature);
#endif

#if defined(TEST_ECC_AFFINE_ECDSA_SIG_VAL) || !defined(TEST_DISABLE_ALL)
  run_test(tests_ecc_ECDSA_val_signature);
#endif

#if defined(TEST_ECC_AFFINE_KEYGEN) || !defined(TEST_DISABLE_ALL)
  run_test(tests_ecc_gen_keys);
#endif

#if defined(TEST_ECC_AFFINE_ECDH) || !defined(TEST_DISABLE_ALL)
  run_test(tests_ecc_ECDH);
#endif

#if defined(TEST_ECC_AFFINE_SIG_GEN_VAL) || !defined(TEST_DISABLE_ALL)
  run_test(tests_ecc_ECDSA);
#endif

  test_fixture_end()
  ;
}

void tests_ecc_utils_conv(void) {
  uint32_t i = 0;
  for (i = 0; i < ecc_point_mul_secp256r1_tab_len; ++i) {
    assert_true(
        test_ecc_utils_conversion(ecc_point_mul_secp256r1_test_tab[i][0],
                                  ecc_point_mul_secp256r1_test_tab[i][1],
                                  &ec_secp256r1) == 0);
  }
}

void ecc_utils_tests(void) {
  test_fixture_start()
  ;

#if defined(TEST_ECC_UTILS_CONV) || !defined(TEST_DISABLE_ALL)
  run_test(tests_ecc_utils_conv);
#endif

#if defined(TEST_ECC_UTILS_CURVE_MOD) || !defined(TEST_DISABLE_ALL)
  run_test(tests_ecc_curve_modulus);
#endif

  test_fixture_end()
  ;
}

void tests_ecc_proj_coords_double(void) {
  uint32_t i = 0;
  for (i = 0; i < ecc_point_double_secp256r1_tab_len; ++i) {
    assert_true(
        test_ecc_proj_coords_double(ecc_point_double_secp256r1_test_tab[i][0],
                                    ecc_point_double_secp256r1_test_tab[i][1],
                                    ecc_point_double_secp256r1_test_tab[i][2],
                                    ecc_point_double_secp256r1_test_tab[i][3],
                                    &ec_secp256r1) == 0);
  }
}

void tests_ecc_proj_coords_add(void) {
  uint32_t i = 0;
  for (i = 0; i < ecc_points_add_secp256r1_tab_len; ++i) {
    assert_true(
        test_ecc_proj_coords_add(ecc_points_add_secp256r1_test_tab[i][0],
                                 ecc_points_add_secp256r1_test_tab[i][1],
                                 ecc_points_add_secp256r1_test_tab[i][2],
                                 ecc_points_add_secp256r1_test_tab[i][3],
                                 ecc_points_add_secp256r1_test_tab[i][4],
                                 ecc_points_add_secp256r1_test_tab[i][5],
                                 &ec_secp256r1) == 0);
  }
}

void tests_ecc_proj_coords_mul(void) {
  uint32_t i = 0;
  for (i = 0; i < ecc_point_mul_secp256r1_tab_len; ++i) {
    assert_true(
        test_ecc_proj_coords_mul(ecc_point_mul_secp256r1_test_tab[i][0],
                     ecc_point_mul_secp256r1_test_tab[i][1],
                     ecc_point_mul_secp256r1_test_tab[i][2],
                     ecc_point_mul_secp256r1_test_tab[i][3],
                     ecc_point_mul_secp256r1_test_tab[i][4], &ec_secp256r1)
            == 0);
  }
}

void tests_ecc_proj_ECDSA_gen_signature(void) {
  uint32_t i = 0;

  for (i = 0; i < P_256_SHA_256_tab_len; ++i) {
    assert_true(
        test_ecdsa_proj_gen_sig(P_256_SHA_256_tab[i][4], P_256_SHA_256_tab[i][0],
                           P_256_SHA_256_tab[i][1], P_256_SHA_256_tab[i][5],
                           P_256_SHA_256_tab[i][6], &ec_secp256r1) == 0);

  }

}

void tests_ecc_proj_ECDSA_val_signature(void) {
  uint32_t i = 0;

  for (i = 0; i < P_256_SHA_256_tab_len; ++i) {

    assert_true(
        test_ecdsa_proj_val_sig(P_256_SHA_256_tab[i][5], P_256_SHA_256_tab[i][6],
                           P_256_SHA_256_tab[i][0], P_256_SHA_256_tab[i][2],
                           P_256_SHA_256_tab[i][3], &ec_secp256r1) == 0);

  }
}

void tests_ecc_proj_gen_keys(void) {
  uint32_t i = 0;

  for (i = 0; i < P_256_SHA_256_tab_len; ++i) {

    assert_true(
        test_gen_proj_key(P_256_SHA_256_tab[i][1], P_256_SHA_256_tab[i][2],
                     P_256_SHA_256_tab[i][3], &ec_secp256r1) == 0);

  }
}

void tests_ecc_proj_ECDH(void) {
  uint32_t i = 0;

  BN_CREATE_VARIABLE(bob_d, ec_secp256r1.n->length);
  BN_CREATE_VARIABLE(bob_pubx, ec_secp256r1.n->length);
  BN_CREATE_VARIABLE(bob_puby, ec_secp256r1.n->length);
  BN_CREATE_VARIABLE(alice_d, ec_secp256r1.n->length);
  BN_CREATE_VARIABLE(alice_pubx, ec_secp256r1.n->length);
  BN_CREATE_VARIABLE(alice_puby, ec_secp256r1.n->length);
  for (i = 0; i < P_256_SHA_256_tab_len; ++i) {
    ecc_proj_generate_key(&default_prgn, &bob_d, &bob_pubx, &bob_puby,
                     &ec_secp256r1);
    ecc_proj_generate_key(&default_prgn, &alice_d, &alice_pubx, &alice_puby,
                     &ec_secp256r1);
    assert_true(
        test_proj_ecdh(&alice_d, &alice_pubx, &alice_puby, &bob_d, &bob_pubx,
                  &bob_puby, &ec_secp256r1) == 0);
  }
}

void tests_ecc_proj_ECDSA(void) {
  uint32_t i = 0;

  for (i = 0; i < P_256_SHA_256_tab_len; ++i) {

    assert_true(
        test_ecdsa_proj_sig_val_sig(&ec_secp256r1) == 0);

  }
}

void ecc_ops_proj_coords_tests(void) {
  test_fixture_start()
  ;
#if defined(TEST_ECC_PROJ_DBL) || !defined(TEST_DISABLE_ALL)
  run_test(tests_ecc_proj_coords_double);
#endif

#if defined(TEST_ECC_PROJ_ADD) || !defined(TEST_DISABLE_ALL)
  run_test(tests_ecc_proj_coords_add);
#endif

#if defined(TEST_ECC_PROJ_MUL) || !defined(TEST_DISABLE_ALL)
  run_test(tests_ecc_proj_coords_mul);
#endif

#if defined(TEST_ECC_PROJ_ECDSA_SIG_GEN) || !defined(TEST_DISABLE_ALL)
  run_test(tests_ecc_proj_ECDSA_gen_signature);
#endif

#if defined(TEST_ECC_PROJ_ECDSA_SIG_VAL) || !defined(TEST_DISABLE_ALL)
  run_test(tests_ecc_proj_ECDSA_val_signature);
#endif

#if defined(TEST_ECC_PROJ_ECDSA_SIG_GEN_VAL) || !defined(TEST_DISABLE_ALL)
  run_test(tests_ecc_proj_ECDSA);
#endif

#if defined(TEST_ECC_PROJ_KEYGEN) || !defined(TEST_DISABLE_ALL)
  run_test(tests_ecc_proj_gen_keys);
#endif

#if defined(TEST_ECC_PROJ_ECDH) || !defined(TEST_DISABLE_ALL)
  run_test(tests_ecc_proj_ECDH);
#endif

  test_fixture_end()
  ;
}

int main(void) {
  init();

  bignum_tests();
  ecc_ops_tests();
  ecc_utils_tests();
  ecc_ops_proj_coords_tests();

  fm_printf("\n");
  inf_loop();
  return 0;
}
