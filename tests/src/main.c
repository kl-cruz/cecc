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
  run_test(tests_shl);
  run_test(tests_shr);
  run_test(tests_add);
  run_test(tests_sub);
  run_test(tests_mul);
  run_test(tests_square);
  run_test(tests_field_add);
  run_test(tests_field_sub);
  run_test(tests_field_mul);
  run_test(tests_field_inv);
  run_test(tests_barret_modulus);
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

  for (i = 0; i < P_256_SHA_1_tab_len; ++i) {
    assert_true(
        test_ecdsa_gen_sig(P_256_SHA_1_tab[i][4], P_256_SHA_1_tab[i][0],
                           P_256_SHA_1_tab[i][1], P_256_SHA_1_tab[i][5],
                           P_256_SHA_1_tab[i][6], &ec_secp256r1) == 0);

  }

}

void tests_ecc_ECDSA_val_signature(void) {
  uint32_t i = 0;

  for (i = 0; i < P_256_SHA_1_tab_len; ++i) {

    assert_true(
        test_ecdsa_val_sig(P_256_SHA_1_tab[i][5], P_256_SHA_1_tab[i][6],
                           P_256_SHA_1_tab[i][0], P_256_SHA_1_tab[i][2],
                           P_256_SHA_1_tab[i][3], &ec_secp256r1) == 0);

  }
}

void tests_ecc_gen_keys(void) {
  uint32_t i = 0;

  for (i = 0; i < P_256_SHA_1_tab_len; ++i) {

    assert_true(
        test_gen_key(P_256_SHA_1_tab[i][1], P_256_SHA_1_tab[i][2],
                     P_256_SHA_1_tab[i][3], &ec_secp256r1) == 0);

  }
}

void tests_ecc_ECDSA(void) {
  uint32_t i = 0;

  for (i = 0; i < P_256_SHA_1_tab_len; ++i) {

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
  for (i = 0; i < P_256_SHA_1_tab_len; ++i) {
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
  run_test(tests_ecc_add);
  run_test(tests_ecc_double);
  run_test(tests_ecc_mul);
  run_test(tests_ecc_ECDSA_gen_signature);
  run_test(tests_ecc_ECDSA_val_signature);
  run_test(tests_ecc_gen_keys);
  run_test(tests_ecc_ECDH);
  run_test(tests_ecc_ECDSA);
  run_test(tests_ecc_curve_modulus);
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
  run_test(tests_ecc_utils_conv);
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

  for (i = 0; i < P_256_SHA_1_tab_len; ++i) {
    assert_true(
        test_ecdsa_proj_gen_sig(P_256_SHA_1_tab[i][4], P_256_SHA_1_tab[i][0],
                           P_256_SHA_1_tab[i][1], P_256_SHA_1_tab[i][5],
                           P_256_SHA_1_tab[i][6], &ec_secp256r1) == 0);

  }

}

void tests_ecc_proj_ECDSA_val_signature(void) {
  uint32_t i = 0;

  for (i = 0; i < P_256_SHA_1_tab_len; ++i) {

    assert_true(
        test_ecdsa_proj_val_sig(P_256_SHA_1_tab[i][5], P_256_SHA_1_tab[i][6],
                           P_256_SHA_1_tab[i][0], P_256_SHA_1_tab[i][2],
                           P_256_SHA_1_tab[i][3], &ec_secp256r1) == 0);

  }
}

void tests_ecc_proj_gen_keys(void) {
  uint32_t i = 0;

  for (i = 0; i < P_256_SHA_1_tab_len; ++i) {

    assert_true(
        test_gen_proj_key(P_256_SHA_1_tab[i][1], P_256_SHA_1_tab[i][2],
                     P_256_SHA_1_tab[i][3], &ec_secp256r1) == 0);

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
  for (i = 0; i < P_256_SHA_1_tab_len; ++i) {
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

  for (i = 0; i < P_256_SHA_1_tab_len; ++i) {

    assert_true(
        test_ecdsa_proj_sig_val_sig(&ec_secp256r1) == 0);

  }
}

void ecc_ops_proj_coords_tests(void) {
  test_fixture_start()
  ;
  run_test(tests_ecc_proj_coords_double);
  run_test(tests_ecc_proj_coords_add);
  run_test(tests_ecc_proj_coords_mul);
  run_test(tests_ecc_proj_ECDSA_gen_signature);
  run_test(tests_ecc_proj_ECDSA_val_signature);
  run_test(tests_ecc_proj_ECDSA);
  run_test(tests_ecc_proj_gen_keys);
  run_test(tests_ecc_proj_ECDH);
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
  return 0;
}
