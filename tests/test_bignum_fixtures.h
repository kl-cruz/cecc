/*
File generate using external software
*/
#ifndef TEST_BIGNUM_VALUES_H_
#define TEST_BIGNUM_VALUES_H_
#include "bignum.h"

//variable 'add_128_a_0' value: 0x2ccbb62de5e9b2c0aaa05b491bc6035c
uint32_t add_128_a_0_tab [4] = {0x1bc6035c, 0xaaa05b49, 0xe5e9b2c0, 0x2ccbb62d};
bn_uint_t add_128_a_0= {.number = add_128_a_0_tab, .length = 4};
//variable 'add_128_b_0' value: 0xa21de2bcf2d8923113900699ced79fdd
uint32_t add_128_b_0_tab [4] = {0xced79fdd, 0x13900699, 0xf2d89231, 0xa21de2bc};
bn_uint_t add_128_b_0= {.number = add_128_b_0_tab, .length = 4};
//variable 'add_128_res_0' value: 0xcee998ead8c244f1be3061e2ea9da339
uint32_t add_128_res_0_tab [4] = {0xea9da339, 0xbe3061e2, 0xd8c244f1, 0xcee998ea};
bn_uint_t add_128_res_0= {.number = add_128_res_0_tab, .length = 4};
uint32_t add_128_tab_len=1;
bn_uint_t *add_128_test_tab[1][3]={
{&add_128_a_0,&add_128_b_0,&add_128_res_0},
};
//variable 'add_256_a_0' value: 0x8b38b934b34ed7f190866563bf8b143c89db82c9cca343ff0d8a896b05c40e49
uint32_t add_256_a_0_tab [8] = {0x05c40e49, 0x0d8a896b, 0xcca343ff, 0x89db82c9, 0xbf8b143c, 0x90866563, 0xb34ed7f1, 0x8b38b934};
bn_uint_t add_256_a_0= {.number = add_256_a_0_tab, .length = 8};
//variable 'add_256_b_0' value: 0xd990381f888889425a7b705c63162109fde96a7a73a256694c9c606b896a2126
uint32_t add_256_b_0_tab [8] = {0x896a2126, 0x4c9c606b, 0x73a25669, 0xfde96a7a, 0x63162109, 0x5a7b705c, 0x88888942, 0xd990381f};
bn_uint_t add_256_b_0= {.number = add_256_b_0_tab, .length = 8};
//variable 'add_256_res_0' value: 0x164c8f1543bd76133eb01d5c022a1354687c4ed4440459a685a26e9d68f2e2f6f
uint32_t add_256_res_0_tab [9] = {0x8f2e2f6f, 0x5a26e9d6, 0x40459a68, 0x87c4ed44, 0x22a13546, 0xeb01d5c0, 0x3bd76133, 0x64c8f154, 0x1};
bn_uint_t add_256_res_0= {.number = add_256_res_0_tab, .length = 9};
uint32_t add_256_tab_len=1;
bn_uint_t *add_256_test_tab[1][3]={
{&add_256_a_0,&add_256_b_0,&add_256_res_0},
};
//variable 'sub_128_a_0' value: 0x4129f9acbe3e776e5e5014a9d91d6737
uint32_t sub_128_a_0_tab [4] = {0xd91d6737, 0x5e5014a9, 0xbe3e776e, 0x4129f9ac};
bn_uint_t sub_128_a_0= {.number = sub_128_a_0_tab, .length = 4};
//variable 'sub_128_b_0' value: 0xbb2e024b11e1059b916ef70b16d037c7
uint32_t sub_128_b_0_tab [4] = {0x16d037c7, 0x916ef70b, 0x11e1059b, 0xbb2e024b};
bn_uint_t sub_128_b_0= {.number = sub_128_b_0_tab, .length = 4};
//variable 'sub_128_res_0' value: 0x-7a04089e53a28e2d331ee2613db2d090
uint32_t sub_128_res_0_tab [5] = {0xc24d2f70, 0xcce11d9e, 0xac5d71d2, 0x85fbf761, 0xffffffff};
bn_uint_t sub_128_res_0= {.number = sub_128_res_0_tab, .length = 5};
uint32_t sub_128_tab_len=1;
bn_uint_t *sub_128_test_tab[1][3]={
{&sub_128_a_0,&sub_128_b_0,&sub_128_res_0},
};
//variable 'sub_256_a_0' value: 0x38956c30f4ba9de55c7ae92c5f09bdacf3ab6dcfed118e3dfb5f2f73a3e04199
uint32_t sub_256_a_0_tab [8] = {0xa3e04199, 0xfb5f2f73, 0xed118e3d, 0xf3ab6dcf, 0x5f09bdac, 0x5c7ae92c, 0xf4ba9de5, 0x38956c30};
bn_uint_t sub_256_a_0= {.number = sub_256_a_0_tab, .length = 8};
//variable 'sub_256_b_0' value: 0x4061692dd08c137b7505ff0b122e2fbd530ee56de7939a971c755de76721d0a2
uint32_t sub_256_b_0_tab [8] = {0x6721d0a2, 0x1c755de7, 0xe7939a97, 0x530ee56d, 0x122e2fbd, 0x7505ff0b, 0xd08c137b, 0x4061692d};
bn_uint_t sub_256_b_0= {.number = sub_256_b_0_tab, .length = 8};
//variable 'sub_256_res_0' value: 0x-7cbfcfcdbd17596188b15deb32472105f63779dfa820c5921162e73c3418f09
uint32_t sub_256_res_0_tab [8] = {0x3cbe70f7, 0xdee9d18c, 0x057df3a6, 0xa09c8862, 0x4cdb8def, 0xe774ea21, 0x242e8a69, 0xf8340303};
bn_uint_t sub_256_res_0= {.number = sub_256_res_0_tab, .length = 8};
uint32_t sub_256_tab_len=1;
bn_uint_t *sub_256_test_tab[1][3]={
{&sub_256_a_0,&sub_256_b_0,&sub_256_res_0},
};
//variable 'add_mod_128_a_0' value: 0x22a3df41a2d1f03c388accf6d12c0a5f
uint32_t add_mod_128_a_0_tab [4] = {0xd12c0a5f, 0x388accf6, 0xa2d1f03c, 0x22a3df41};
bn_uint_t add_mod_128_a_0= {.number = add_mod_128_a_0_tab, .length = 4};
//variable 'add_mod_128_b_0' value: 0xccf06b27f9201bac1a89459b7db2bbfa
uint32_t add_mod_128_b_0_tab [4] = {0x7db2bbfa, 0x1a89459b, 0xf9201bac, 0xccf06b27};
bn_uint_t add_mod_128_b_0= {.number = add_mod_128_b_0_tab, .length = 4};
//variable 'add_mod_128_p_0' value: 0x87f18ac341fb3cc4a1d3048f5a7ab65f
uint32_t add_mod_128_p_0_tab [4] = {0x5a7ab65f, 0xa1d3048f, 0x41fb3cc4, 0x87f18ac3};
bn_uint_t add_mod_128_p_0= {.number = add_mod_128_p_0_tab, .length = 4};
//variable 'add_mod_128_res_0' value: 0x67a2bfa659f6cf23b1410e02f4640ffa
uint32_t add_mod_128_res_0_tab [4] = {0xf4640ffa, 0xb1410e02, 0x59f6cf23, 0x67a2bfa6};
bn_uint_t add_mod_128_res_0= {.number = add_mod_128_res_0_tab, .length = 4};
uint32_t add_mod_128_tab_len=1;
bn_uint_t *add_mod_128_test_tab[1][4]={
{&add_mod_128_a_0,&add_mod_128_b_0,&add_mod_128_p_0,&add_mod_128_res_0},
};
//variable 'add_mod_256_a_0' value: 0xc865d3aaf51d21ec3eafad9cb84e2c9ae432827926f0783b449f66d31c70a6c8
uint32_t add_mod_256_a_0_tab [8] = {0x1c70a6c8, 0x449f66d3, 0x26f0783b, 0xe4328279, 0xb84e2c9a, 0x3eafad9c, 0xf51d21ec, 0xc865d3aa};
bn_uint_t add_mod_256_a_0= {.number = add_mod_256_a_0_tab, .length = 8};
//variable 'add_mod_256_b_0' value: 0x86f582403eb186adbe9e66ab51c158bc7b6f9f64df33a9b0b39a09751f8f6d33
uint32_t add_mod_256_b_0_tab [8] = {0x1f8f6d33, 0xb39a0975, 0xdf33a9b0, 0x7b6f9f64, 0x51c158bc, 0xbe9e66ab, 0x3eb186ad, 0x86f58240};
bn_uint_t add_mod_256_b_0= {.number = add_mod_256_b_0_tab, .length = 8};
//variable 'add_mod_256_p_0' value: 0x7d9db3ad7a3cf12f340f8be02943b599fc8dbbcabc0aaa30c1c5960b864c8516
uint32_t add_mod_256_p_0_tab [8] = {0x864c8516, 0xc1c5960b, 0xbc0aaa30, 0xfc8dbbca, 0x2943b599, 0x340f8be0, 0x7a3cf12f, 0x7d9db3ad};
bn_uint_t add_mod_256_p_0= {.number = add_mod_256_p_0_tab, .length = 8};
//variable 'add_mod_256_res_0' value: 0x541fee903f54c63b952efc87b7881a236686aa488e0ecd8a74ae44312f6709cf
uint32_t add_mod_256_res_0_tab [8] = {0x2f6709cf, 0x74ae4431, 0x8e0ecd8a, 0x6686aa48, 0xb7881a23, 0x952efc87, 0x3f54c63b, 0x541fee90};
bn_uint_t add_mod_256_res_0= {.number = add_mod_256_res_0_tab, .length = 8};
uint32_t add_mod_256_tab_len=1;
bn_uint_t *add_mod_256_test_tab[1][4]={
{&add_mod_256_a_0,&add_mod_256_b_0,&add_mod_256_p_0,&add_mod_256_res_0},
};
//variable 'sub_mod_128_a_0' value: 0x4509a09458b4e3bf2b6cdca4ef4471a
uint32_t sub_mod_128_a_0_tab [4] = {0x4ef4471a, 0xf2b6cdca, 0x458b4e3b, 0x4509a09};
bn_uint_t sub_mod_128_a_0= {.number = sub_mod_128_a_0_tab, .length = 4};
//variable 'sub_mod_128_b_0' value: 0x9313fec6a832b85324cadf61b38a1632
uint32_t sub_mod_128_b_0_tab [4] = {0xb38a1632, 0x24cadf61, 0xa832b853, 0x9313fec6};
bn_uint_t sub_mod_128_b_0= {.number = sub_mod_128_b_0_tab, .length = 4};
//variable 'sub_mod_128_p_0' value: 0xf9f677d37dbbbd1c7dc0079d021f1ae6
uint32_t sub_mod_128_p_0_tab [4] = {0x021f1ae6, 0x7dc0079d, 0x7dbbbd1c, 0xf9f677d3};
bn_uint_t sub_mod_128_p_0= {.number = sub_mod_128_p_0_tab, .length = 4};
//variable 'sub_mod_128_res_0' value: 0x6b3313161b1453054babf6059d894bce
uint32_t sub_mod_128_res_0_tab [4] = {0x9d894bce, 0x4babf605, 0x1b145305, 0x6b331316};
bn_uint_t sub_mod_128_res_0= {.number = sub_mod_128_res_0_tab, .length = 4};
uint32_t sub_mod_128_tab_len=1;
bn_uint_t *sub_mod_128_test_tab[1][4]={
{&sub_mod_128_a_0,&sub_mod_128_b_0,&sub_mod_128_p_0,&sub_mod_128_res_0},
};
//variable 'sub_mod_256_a_0' value: 0xc2ede52095b3cdfd992ee9de9a55c48d949ae38e24a229073784177536ad791e
uint32_t sub_mod_256_a_0_tab [8] = {0x36ad791e, 0x37841775, 0x24a22907, 0x949ae38e, 0x9a55c48d, 0x992ee9de, 0x95b3cdfd, 0xc2ede520};
bn_uint_t sub_mod_256_a_0= {.number = sub_mod_256_a_0_tab, .length = 8};
//variable 'sub_mod_256_b_0' value: 0xd6ca189669f994d5a5b99f4c30c8f2c73936d904c88f52450e9b96d873faec7d
uint32_t sub_mod_256_b_0_tab [8] = {0x73faec7d, 0x0e9b96d8, 0xc88f5245, 0x3936d904, 0x30c8f2c7, 0xa5b99f4c, 0x69f994d5, 0xd6ca1896};
bn_uint_t sub_mod_256_b_0= {.number = sub_mod_256_b_0_tab, .length = 8};
//variable 'sub_mod_256_p_0' value: 0xdcf539eab9130323419de61672960d1c067a137b892290d92541e663fe2ba9d
uint32_t sub_mod_256_p_0_tab [8] = {0x3fe2ba9d, 0x92541e66, 0xb892290d, 0xc067a137, 0x672960d1, 0x3419de61, 0xab913032, 0xdcf539e};
bn_uint_t sub_mod_256_p_0= {.number = sub_mod_256_p_0_tab, .length = 8};
//variable 'sub_mod_256_res_0' value: 0x7c273c782dc998c5ba9075537df9369dc334cf8cd3728dd4d90bd69427801db
uint32_t sub_mod_256_res_0_tab [8] = {0x427801db, 0x4d90bd69, 0xcd3728dd, 0xdc334cf8, 0x37df9369, 0x5ba90755, 0x82dc998c, 0x7c273c7};
bn_uint_t sub_mod_256_res_0= {.number = sub_mod_256_res_0_tab, .length = 8};
uint32_t sub_mod_256_tab_len=1;
bn_uint_t *sub_mod_256_test_tab[1][4]={
{&sub_mod_256_a_0,&sub_mod_256_b_0,&sub_mod_256_p_0,&sub_mod_256_res_0},
};
//variable 'shr_128_a_0' value: 0x269969bb23bd06196d5294a846f7f677
uint32_t shr_128_a_0_tab [4] = {0x46f7f677, 0x6d5294a8, 0x23bd0619, 0x269969bb};
bn_uint_t shr_128_a_0= {.number = shr_128_a_0_tab, .length = 4};
//variable 'shr_128_res_0' value: 0x134cb4dd91de830cb6a94a54237bfb3b
uint32_t shr_128_res_0_tab [4] = {0x237bfb3b, 0xb6a94a54, 0x91de830c, 0x134cb4dd};
bn_uint_t shr_128_res_0= {.number = shr_128_res_0_tab, .length = 4};
uint32_t shr_128_tab_len=1;
bn_uint_t *shr_128_test_tab[1][2]={
{&shr_128_a_0,&shr_128_res_0},
};
//variable 'shr_256_a_0' value: 0x5af9242b5eea26d1f6649ca6499310097955a7681bef56dfbf1fc0aecb47c77c
uint32_t shr_256_a_0_tab [8] = {0xcb47c77c, 0xbf1fc0ae, 0x1bef56df, 0x7955a768, 0x49931009, 0xf6649ca6, 0x5eea26d1, 0x5af9242b};
bn_uint_t shr_256_a_0= {.number = shr_256_a_0_tab, .length = 8};
//variable 'shr_256_res_0' value: 0x2d7c9215af751368fb324e5324c98804bcaad3b40df7ab6fdf8fe05765a3e3be
uint32_t shr_256_res_0_tab [8] = {0x65a3e3be, 0xdf8fe057, 0x0df7ab6f, 0xbcaad3b4, 0x24c98804, 0xfb324e53, 0xaf751368, 0x2d7c9215};
bn_uint_t shr_256_res_0= {.number = shr_256_res_0_tab, .length = 8};
uint32_t shr_256_tab_len=1;
bn_uint_t *shr_256_test_tab[1][2]={
{&shr_256_a_0,&shr_256_res_0},
};
//variable 'inv_mod_128_a_0' value: 0x71ebcef32ee10e31b9373d8039899e4c
uint32_t inv_mod_128_a_0_tab [4] = {0x39899e4c, 0xb9373d80, 0x2ee10e31, 0x71ebcef3};
bn_uint_t inv_mod_128_a_0= {.number = inv_mod_128_a_0_tab, .length = 4};
//variable 'inv_mod_128_p_0' value: 0x8d38f9a74b44202e0b873799f099626f
uint32_t inv_mod_128_p_0_tab [4] = {0xf099626f, 0x0b873799, 0x4b44202e, 0x8d38f9a7};
bn_uint_t inv_mod_128_p_0= {.number = inv_mod_128_p_0_tab, .length = 4};
//variable 'inv_mod_128_res_0' value: 0x83fe97f78e1238fac0901a80b0292220
uint32_t inv_mod_128_res_0_tab [4] = {0xb0292220, 0xc0901a80, 0x8e1238fa, 0x83fe97f7};
bn_uint_t inv_mod_128_res_0= {.number = inv_mod_128_res_0_tab, .length = 4};
uint32_t inv_mod_128_tab_len=1;
bn_uint_t *inv_mod_128_test_tab[1][3]={
{&inv_mod_128_a_0,&inv_mod_128_p_0,&inv_mod_128_res_0},
};
//variable 'inv_mod_256_a_0' value: 0x5ad1709d1ed5cb8eec1f0281105f4637ff20638ef7bb64ef4132fe55f079fac3
uint32_t inv_mod_256_a_0_tab [8] = {0xf079fac3, 0x4132fe55, 0xf7bb64ef, 0xff20638e, 0x105f4637, 0xec1f0281, 0x1ed5cb8e, 0x5ad1709d};
bn_uint_t inv_mod_256_a_0= {.number = inv_mod_256_a_0_tab, .length = 8};
//variable 'inv_mod_256_p_0' value: 0xba19352330d867ad7a91275d62e758fa3cb7bc10dd15fe6d8ea0a51748bf7481
uint32_t inv_mod_256_p_0_tab [8] = {0x48bf7481, 0x8ea0a517, 0xdd15fe6d, 0x3cb7bc10, 0x62e758fa, 0x7a91275d, 0x30d867ad, 0xba193523};
bn_uint_t inv_mod_256_p_0= {.number = inv_mod_256_p_0_tab, .length = 8};
//variable 'inv_mod_256_res_0' value: 0x51a669e87a203958a28fe5549744406fa0da4e0d1fd9176335f4704291b470e6
uint32_t inv_mod_256_res_0_tab [8] = {0x91b470e6, 0x35f47042, 0x1fd91763, 0xa0da4e0d, 0x9744406f, 0xa28fe554, 0x7a203958, 0x51a669e8};
bn_uint_t inv_mod_256_res_0= {.number = inv_mod_256_res_0_tab, .length = 8};
uint32_t inv_mod_256_tab_len=1;
bn_uint_t *inv_mod_256_test_tab[1][3]={
{&inv_mod_256_a_0,&inv_mod_256_p_0,&inv_mod_256_res_0},
};
//variable 'mul_128_a_0' value: 0xdac4b5df15b03a101cec365b3d760d44
uint32_t mul_128_a_0_tab [4] = {0x3d760d44, 0x1cec365b, 0x15b03a10, 0xdac4b5df};
bn_uint_t mul_128_a_0= {.number = mul_128_a_0_tab, .length = 4};
//variable 'mul_128_b_0' value: 0xc1a3efcee145d6d4013daaa157e71d10
uint32_t mul_128_b_0_tab [4] = {0x57e71d10, 0x013daaa1, 0xe145d6d4, 0xc1a3efce};
bn_uint_t mul_128_b_0= {.number = mul_128_b_0_tab, .length = 4};
//variable 'mul_128_res_0' value: 0xa57a654b6cfcdc31cb438f25ff56bdfe143ee51e77c589971864cf764b3d8840
uint32_t mul_128_res_0_tab [8] = {0x4b3d8840, 0x1864cf76, 0x77c58997, 0x143ee51e, 0xff56bdfe, 0xcb438f25, 0x6cfcdc31, 0xa57a654b};
bn_uint_t mul_128_res_0= {.number = mul_128_res_0_tab, .length = 8};
uint32_t mul_128_tab_len=1;
bn_uint_t *mul_128_test_tab[1][3]={
{&mul_128_a_0,&mul_128_b_0,&mul_128_res_0},
};
//variable 'mul_256_a_0' value: 0xa9b8e07b5f26fde93109fec0c2924f528d05b5b7651fed91d5c0495c04f3a31a
uint32_t mul_256_a_0_tab [8] = {0x04f3a31a, 0xd5c0495c, 0x651fed91, 0x8d05b5b7, 0xc2924f52, 0x3109fec0, 0x5f26fde9, 0xa9b8e07b};
bn_uint_t mul_256_a_0= {.number = mul_256_a_0_tab, .length = 8};
//variable 'mul_256_b_0' value: 0x8789a5e40df3ba0b5e5486b130c82131e4431ab140209c609cde71b643bd3e9a
uint32_t mul_256_b_0_tab [8] = {0x43bd3e9a, 0x9cde71b6, 0x40209c60, 0xe4431ab1, 0x30c82131, 0x5e5486b1, 0x0df3ba0b, 0x8789a5e4};
bn_uint_t mul_256_b_0= {.number = mul_256_b_0_tab, .length = 8};
//variable 'mul_256_res_0' value: 0x59dbc04c8bcae733f08e75b694f279f41a9f7e8a24d031897df9a06e98e1478d1353672c913a9701e1c2199c6c484782c2f712c6de41e7aebe6c4499344269a4
uint32_t mul_256_res_0_tab [16] = {0x344269a4, 0xbe6c4499, 0xde41e7ae, 0xc2f712c6, 0x6c484782, 0xe1c2199c, 0x913a9701, 0x1353672c, 0x98e1478d, 0x7df9a06e, 0x24d03189, 0x1a9f7e8a, 0x94f279f4, 0xf08e75b6, 0x8bcae733, 0x59dbc04c};
bn_uint_t mul_256_res_0= {.number = mul_256_res_0_tab, .length = 16};
uint32_t mul_256_tab_len=1;
bn_uint_t *mul_256_test_tab[1][3]={
{&mul_256_a_0,&mul_256_b_0,&mul_256_res_0},
};
//variable 'mod_barret_128_a_0' value: 0xebb2aaa460d757c0e7d655d59129486bc62c9a0ee2c8d6510314971b874c21ea
uint32_t mod_barret_128_a_0_tab [8] = {0x874c21ea, 0x0314971b, 0xe2c8d651, 0xc62c9a0e, 0x9129486b, 0xe7d655d5, 0x60d757c0, 0xebb2aaa4};
bn_uint_t mod_barret_128_a_0= {.number = mod_barret_128_a_0_tab, .length = 8};
//variable 'mod_barret_128_res_0' value: 0x3570954f1b05835e5b64470bc914ca37
uint32_t mod_barret_128_res_0_tab [4] = {0xc914ca37, 0x5b64470b, 0x1b05835e, 0x3570954f};
bn_uint_t mod_barret_128_res_0= {.number = mod_barret_128_res_0_tab, .length = 4};
//variable 'mod_barret_128_a_1' value: 0x406488f9e41a513273321ad98d67429a7dc3bb1920949a9e7fcdbe93564a8170
uint32_t mod_barret_128_a_1_tab [8] = {0x564a8170, 0x7fcdbe93, 0x20949a9e, 0x7dc3bb19, 0x8d67429a, 0x73321ad9, 0xe41a5132, 0x406488f9};
bn_uint_t mod_barret_128_a_1= {.number = mod_barret_128_a_1_tab, .length = 8};
//variable 'mod_barret_128_res_1' value: 0xccda4de78577fdc5bcc69fbb5da3865a
uint32_t mod_barret_128_res_1_tab [4] = {0x5da3865a, 0xbcc69fbb, 0x8577fdc5, 0xccda4de7};
bn_uint_t mod_barret_128_res_1= {.number = mod_barret_128_res_1_tab, .length = 4};
//variable 'mod_barret_128_a_2' value: 0x3ee96fe75972ec2d7ef796d37eb1c6e2084264f5d8a6d394ae0ba2711048bfca
uint32_t mod_barret_128_a_2_tab [8] = {0x1048bfca, 0xae0ba271, 0xd8a6d394, 0x084264f5, 0x7eb1c6e2, 0x7ef796d3, 0x5972ec2d, 0x3ee96fe7};
bn_uint_t mod_barret_128_a_2= {.number = mod_barret_128_a_2_tab, .length = 8};
//variable 'mod_barret_128_res_2' value: 0xfa9c1dd7afec9f91db8ed13eea00e447
uint32_t mod_barret_128_res_2_tab [4] = {0xea00e447, 0xdb8ed13e, 0xafec9f91, 0xfa9c1dd7};
bn_uint_t mod_barret_128_res_2= {.number = mod_barret_128_res_2_tab, .length = 4};
//variable 'mod_barret_128_a_3' value: 0xdd198d01bd2600dd3553b3b0c4bc9e70e9d7b63de1d43b3aac53fdb62dc5c3d8
uint32_t mod_barret_128_a_3_tab [8] = {0x2dc5c3d8, 0xac53fdb6, 0xe1d43b3a, 0xe9d7b63d, 0xc4bc9e70, 0x3553b3b0, 0xbd2600dd, 0xdd198d01};
bn_uint_t mod_barret_128_a_3= {.number = mod_barret_128_a_3_tab, .length = 8};
//variable 'mod_barret_128_res_3' value: 0xe0822607592d561ed059e72f3a8e353b
uint32_t mod_barret_128_res_3_tab [4] = {0x3a8e353b, 0xd059e72f, 0x592d561e, 0xe0822607};
bn_uint_t mod_barret_128_res_3= {.number = mod_barret_128_res_3_tab, .length = 4};
//variable 'mod_barret_128_a_4' value: 0xe6a345dce67e4c337d1a2ec0ad21dad9b7b2d73ab624b11fa79ce3b34efda253
uint32_t mod_barret_128_a_4_tab [8] = {0x4efda253, 0xa79ce3b3, 0xb624b11f, 0xb7b2d73a, 0xad21dad9, 0x7d1a2ec0, 0xe67e4c33, 0xe6a345dc};
bn_uint_t mod_barret_128_a_4= {.number = mod_barret_128_a_4_tab, .length = 8};
//variable 'mod_barret_128_res_4' value: 0x8b294d5769e989108c40c255c5673a72
uint32_t mod_barret_128_res_4_tab [4] = {0xc5673a72, 0x8c40c255, 0x69e98910, 0x8b294d57};
bn_uint_t mod_barret_128_res_4= {.number = mod_barret_128_res_4_tab, .length = 4};
//variable 'mod_barret_128_a_5' value: 0x9a678b5a01bd7aef1d9ba179d81dddb8484bad1befe697c09c251072469a39db
uint32_t mod_barret_128_a_5_tab [8] = {0x469a39db, 0x9c251072, 0xefe697c0, 0x484bad1b, 0xd81dddb8, 0x1d9ba179, 0x01bd7aef, 0x9a678b5a};
bn_uint_t mod_barret_128_a_5= {.number = mod_barret_128_a_5_tab, .length = 8};
//variable 'mod_barret_128_res_5' value: 0xbdc206fb2673296626d9d5373421a11d
uint32_t mod_barret_128_res_5_tab [4] = {0x3421a11d, 0x26d9d537, 0x26732966, 0xbdc206fb};
bn_uint_t mod_barret_128_res_5= {.number = mod_barret_128_res_5_tab, .length = 4};
//variable 'mod_barret_128_a_6' value: 0x492939dfc5c54018723313eac5a8e213a93c2450a0359b2cff8277bbfff754fa
uint32_t mod_barret_128_a_6_tab [8] = {0xfff754fa, 0xff8277bb, 0xa0359b2c, 0xa93c2450, 0xc5a8e213, 0x723313ea, 0xc5c54018, 0x492939df};
bn_uint_t mod_barret_128_a_6= {.number = mod_barret_128_a_6_tab, .length = 8};
//variable 'mod_barret_128_res_6' value: 0x74110ccf84d4f0621e4f3590a652e48
uint32_t mod_barret_128_res_6_tab [4] = {0x0a652e48, 0x21e4f359, 0xf84d4f06, 0x74110cc};
bn_uint_t mod_barret_128_res_6= {.number = mod_barret_128_res_6_tab, .length = 4};
//variable 'mod_barret_128_a_7' value: 0x56271e658b1315d01c109a9ff529e4386da126766dc890988f4b89a70236caf4
uint32_t mod_barret_128_a_7_tab [8] = {0x0236caf4, 0x8f4b89a7, 0x6dc89098, 0x6da12676, 0xf529e438, 0x1c109a9f, 0x8b1315d0, 0x56271e65};
bn_uint_t mod_barret_128_a_7= {.number = mod_barret_128_a_7_tab, .length = 8};
//variable 'mod_barret_128_res_7' value: 0xd9690cb0a529e3351a1ec9800d072ede
uint32_t mod_barret_128_res_7_tab [4] = {0x0d072ede, 0x1a1ec980, 0xa529e335, 0xd9690cb0};
bn_uint_t mod_barret_128_res_7= {.number = mod_barret_128_res_7_tab, .length = 4};
//variable 'mod_barret_128_a_8' value: 0xd29064ebc7a28e8bfb16a9ce0c2db148dbd9fc4ce46f8202dfe04602282ad99b
uint32_t mod_barret_128_a_8_tab [8] = {0x282ad99b, 0xdfe04602, 0xe46f8202, 0xdbd9fc4c, 0x0c2db148, 0xfb16a9ce, 0xc7a28e8b, 0xd29064eb};
bn_uint_t mod_barret_128_a_8= {.number = mod_barret_128_a_8_tab, .length = 8};
//variable 'mod_barret_128_res_8' value: 0x193b2e3c5132da69b47da09ddd93401c
uint32_t mod_barret_128_res_8_tab [4] = {0xdd93401c, 0xb47da09d, 0x5132da69, 0x193b2e3c};
bn_uint_t mod_barret_128_res_8= {.number = mod_barret_128_res_8_tab, .length = 4};
//variable 'mod_barret_128_a_9' value: 0xda226826073e7ccd0223dfb36a8247a92d5681267a4a33548786cd04621f4a3c
uint32_t mod_barret_128_a_9_tab [8] = {0x621f4a3c, 0x8786cd04, 0x7a4a3354, 0x2d568126, 0x6a8247a9, 0x0223dfb3, 0x073e7ccd, 0xda226826};
bn_uint_t mod_barret_128_a_9= {.number = mod_barret_128_a_9_tab, .length = 8};
//variable 'mod_barret_128_res_9' value: 0xc127605235cd807100b146f0bef685be
uint32_t mod_barret_128_res_9_tab [4] = {0xbef685be, 0x00b146f0, 0x35cd8071, 0xc1276052};
bn_uint_t mod_barret_128_res_9= {.number = mod_barret_128_res_9_tab, .length = 4};
//variable 'mod_barret_128_mi_' value: 0x100000002000000040000000800000011
uint32_t mod_barret_128_mi__tab [5] = {0x00000011, 0x00000008, 0x00000004, 0x00000002, 0x1};
bn_uint_t mod_barret_128_mi_= {.number = mod_barret_128_mi__tab, .length = 5};
//variable 'mod_barret_128_p_' value: 0xfffffffdffffffffffffffffffffffff
uint32_t mod_barret_128_p__tab [4] = {0xffffffff, 0xffffffff, 0xffffffff, 0xfffffffd};
bn_uint_t mod_barret_128_p_= {.number = mod_barret_128_p__tab, .length = 4};
uint32_t mod_barret_128_tab_len=10;
bn_uint_t *mod_barret_128_test_tab[10][2]={
{&mod_barret_128_a_0,&mod_barret_128_res_0},
{&mod_barret_128_a_1,&mod_barret_128_res_1},
{&mod_barret_128_a_2,&mod_barret_128_res_2},
{&mod_barret_128_a_3,&mod_barret_128_res_3},
{&mod_barret_128_a_4,&mod_barret_128_res_4},
{&mod_barret_128_a_5,&mod_barret_128_res_5},
{&mod_barret_128_a_6,&mod_barret_128_res_6},
{&mod_barret_128_a_7,&mod_barret_128_res_7},
{&mod_barret_128_a_8,&mod_barret_128_res_8},
{&mod_barret_128_a_9,&mod_barret_128_res_9},
};
//variable 'mul_mod_barret_128_a_0' value: 0xf373c9a1b9724340f5f674b03bfb9ee2
uint32_t mul_mod_barret_128_a_0_tab [4] = {0x3bfb9ee2, 0xf5f674b0, 0xb9724340, 0xf373c9a1};
bn_uint_t mul_mod_barret_128_a_0= {.number = mul_mod_barret_128_a_0_tab, .length = 4};
//variable 'mul_mod_barret_128_b_0' value: 0xb3cfdc8454fd48b8c2fa002386df68f7
uint32_t mul_mod_barret_128_b_0_tab [4] = {0x86df68f7, 0xc2fa0023, 0x54fd48b8, 0xb3cfdc84};
bn_uint_t mul_mod_barret_128_b_0= {.number = mul_mod_barret_128_b_0_tab, .length = 4};
//variable 'mul_mod_barret_128_res_0' value: 0xb763998eee486f97caf116ee1ef3812f
uint32_t mul_mod_barret_128_res_0_tab [4] = {0x1ef3812f, 0xcaf116ee, 0xee486f97, 0xb763998e};
bn_uint_t mul_mod_barret_128_res_0= {.number = mul_mod_barret_128_res_0_tab, .length = 4};
//variable 'mul_mod_barret_128_a_1' value: 0x9e5cb73adc4abe0fdf567f0b5ef83a7e
uint32_t mul_mod_barret_128_a_1_tab [4] = {0x5ef83a7e, 0xdf567f0b, 0xdc4abe0f, 0x9e5cb73a};
bn_uint_t mul_mod_barret_128_a_1= {.number = mul_mod_barret_128_a_1_tab, .length = 4};
//variable 'mul_mod_barret_128_b_1' value: 0x534a5614226089a13ae2343807e4d6a
uint32_t mul_mod_barret_128_b_1_tab [4] = {0x807e4d6a, 0x13ae2343, 0x4226089a, 0x534a561};
bn_uint_t mul_mod_barret_128_b_1= {.number = mul_mod_barret_128_b_1_tab, .length = 4};
//variable 'mul_mod_barret_128_res_1' value: 0x62233ee905154d986204de6039d2ad5a
uint32_t mul_mod_barret_128_res_1_tab [4] = {0x39d2ad5a, 0x6204de60, 0x05154d98, 0x62233ee9};
bn_uint_t mul_mod_barret_128_res_1= {.number = mul_mod_barret_128_res_1_tab, .length = 4};
//variable 'mul_mod_barret_128_a_2' value: 0x81e3a306b9dfeaef6e1f9dbe8c5c696a
uint32_t mul_mod_barret_128_a_2_tab [4] = {0x8c5c696a, 0x6e1f9dbe, 0xb9dfeaef, 0x81e3a306};
bn_uint_t mul_mod_barret_128_a_2= {.number = mul_mod_barret_128_a_2_tab, .length = 4};
//variable 'mul_mod_barret_128_b_2' value: 0xa780e752b0ac8684603bdaf28f2ae686
uint32_t mul_mod_barret_128_b_2_tab [4] = {0x8f2ae686, 0x603bdaf2, 0xb0ac8684, 0xa780e752};
bn_uint_t mul_mod_barret_128_b_2= {.number = mul_mod_barret_128_b_2_tab, .length = 4};
//variable 'mul_mod_barret_128_res_2' value: 0x79cd5f7cf7252c275e1dba2ca5efe6d2
uint32_t mul_mod_barret_128_res_2_tab [4] = {0xa5efe6d2, 0x5e1dba2c, 0xf7252c27, 0x79cd5f7c};
bn_uint_t mul_mod_barret_128_res_2= {.number = mul_mod_barret_128_res_2_tab, .length = 4};
//variable 'mul_mod_barret_128_a_3' value: 0xa79710ed696a5168726ed5392f565bb
uint32_t mul_mod_barret_128_a_3_tab [4] = {0x92f565bb, 0x8726ed53, 0xd696a516, 0xa79710e};
bn_uint_t mul_mod_barret_128_a_3= {.number = mul_mod_barret_128_a_3_tab, .length = 4};
//variable 'mul_mod_barret_128_b_3' value: 0xa1d046a6113bdc5ee431bf09d0f54850
uint32_t mul_mod_barret_128_b_3_tab [4] = {0xd0f54850, 0xe431bf09, 0x113bdc5e, 0xa1d046a6};
bn_uint_t mul_mod_barret_128_b_3= {.number = mul_mod_barret_128_b_3_tab, .length = 4};
//variable 'mul_mod_barret_128_res_3' value: 0xa19bc4b156721c51e8bec20168757ece
uint32_t mul_mod_barret_128_res_3_tab [4] = {0x68757ece, 0xe8bec201, 0x56721c51, 0xa19bc4b1};
bn_uint_t mul_mod_barret_128_res_3= {.number = mul_mod_barret_128_res_3_tab, .length = 4};
//variable 'mul_mod_barret_128_a_4' value: 0x5d79d090625b63389bb5cb55998824e0
uint32_t mul_mod_barret_128_a_4_tab [4] = {0x998824e0, 0x9bb5cb55, 0x625b6338, 0x5d79d090};
bn_uint_t mul_mod_barret_128_a_4= {.number = mul_mod_barret_128_a_4_tab, .length = 4};
//variable 'mul_mod_barret_128_b_4' value: 0x5e216fd5789365e24118bb9ba3989051
uint32_t mul_mod_barret_128_b_4_tab [4] = {0xa3989051, 0x4118bb9b, 0x789365e2, 0x5e216fd5};
bn_uint_t mul_mod_barret_128_b_4= {.number = mul_mod_barret_128_b_4_tab, .length = 4};
//variable 'mul_mod_barret_128_res_4' value: 0xce04a079b6bc23e8858be8872ab8fdff
uint32_t mul_mod_barret_128_res_4_tab [4] = {0x2ab8fdff, 0x858be887, 0xb6bc23e8, 0xce04a079};
bn_uint_t mul_mod_barret_128_res_4= {.number = mul_mod_barret_128_res_4_tab, .length = 4};
//variable 'mul_mod_barret_128_a_5' value: 0xad553484acf43c11047f7d5ed467a03f
uint32_t mul_mod_barret_128_a_5_tab [4] = {0xd467a03f, 0x047f7d5e, 0xacf43c11, 0xad553484};
bn_uint_t mul_mod_barret_128_a_5= {.number = mul_mod_barret_128_a_5_tab, .length = 4};
//variable 'mul_mod_barret_128_b_5' value: 0xd12316e502cfea3569286c4d9de8c185
uint32_t mul_mod_barret_128_b_5_tab [4] = {0x9de8c185, 0x69286c4d, 0x02cfea35, 0xd12316e5};
bn_uint_t mul_mod_barret_128_b_5= {.number = mul_mod_barret_128_b_5_tab, .length = 4};
//variable 'mul_mod_barret_128_res_5' value: 0x320b969f3993f8ac090c917967855e82
uint32_t mul_mod_barret_128_res_5_tab [4] = {0x67855e82, 0x090c9179, 0x3993f8ac, 0x320b969f};
bn_uint_t mul_mod_barret_128_res_5= {.number = mul_mod_barret_128_res_5_tab, .length = 4};
//variable 'mul_mod_barret_128_a_6' value: 0xd819377579ea5d82ab662161200e4c3a
uint32_t mul_mod_barret_128_a_6_tab [4] = {0x200e4c3a, 0xab662161, 0x79ea5d82, 0xd8193775};
bn_uint_t mul_mod_barret_128_a_6= {.number = mul_mod_barret_128_a_6_tab, .length = 4};
//variable 'mul_mod_barret_128_b_6' value: 0x95f26d4746958cf2d49b496ff1178c29
uint32_t mul_mod_barret_128_b_6_tab [4] = {0xf1178c29, 0xd49b496f, 0x46958cf2, 0x95f26d47};
bn_uint_t mul_mod_barret_128_b_6= {.number = mul_mod_barret_128_b_6_tab, .length = 4};
//variable 'mul_mod_barret_128_res_6' value: 0x8a7972423b3c012481b6c464d97284a5
uint32_t mul_mod_barret_128_res_6_tab [4] = {0xd97284a5, 0x81b6c464, 0x3b3c0124, 0x8a797242};
bn_uint_t mul_mod_barret_128_res_6= {.number = mul_mod_barret_128_res_6_tab, .length = 4};
//variable 'mul_mod_barret_128_a_7' value: 0xb803fac6d9df9ee87c16489c17b8f3f3
uint32_t mul_mod_barret_128_a_7_tab [4] = {0x17b8f3f3, 0x7c16489c, 0xd9df9ee8, 0xb803fac6};
bn_uint_t mul_mod_barret_128_a_7= {.number = mul_mod_barret_128_a_7_tab, .length = 4};
//variable 'mul_mod_barret_128_b_7' value: 0x10fcb14159fbb799aded9ad22289f8fa
uint32_t mul_mod_barret_128_b_7_tab [4] = {0x2289f8fa, 0xaded9ad2, 0x59fbb799, 0x10fcb141};
bn_uint_t mul_mod_barret_128_b_7= {.number = mul_mod_barret_128_b_7_tab, .length = 4};
//variable 'mul_mod_barret_128_res_7' value: 0xd37d5db461c162b28f949377d84e2510
uint32_t mul_mod_barret_128_res_7_tab [4] = {0xd84e2510, 0x8f949377, 0x61c162b2, 0xd37d5db4};
bn_uint_t mul_mod_barret_128_res_7= {.number = mul_mod_barret_128_res_7_tab, .length = 4};
//variable 'mul_mod_barret_128_a_8' value: 0x679313e333bc98fd5a80d806c0fb992a
uint32_t mul_mod_barret_128_a_8_tab [4] = {0xc0fb992a, 0x5a80d806, 0x33bc98fd, 0x679313e3};
bn_uint_t mul_mod_barret_128_a_8= {.number = mul_mod_barret_128_a_8_tab, .length = 4};
//variable 'mul_mod_barret_128_b_8' value: 0x9cccbb446aa4dbff6a61584872c10696
uint32_t mul_mod_barret_128_b_8_tab [4] = {0x72c10696, 0x6a615848, 0x6aa4dbff, 0x9cccbb44};
bn_uint_t mul_mod_barret_128_b_8= {.number = mul_mod_barret_128_b_8_tab, .length = 4};
//variable 'mul_mod_barret_128_res_8' value: 0xd9ae78772d1bfa08b6bba4ee0afa4e5e
uint32_t mul_mod_barret_128_res_8_tab [4] = {0x0afa4e5e, 0xb6bba4ee, 0x2d1bfa08, 0xd9ae7877};
bn_uint_t mul_mod_barret_128_res_8= {.number = mul_mod_barret_128_res_8_tab, .length = 4};
//variable 'mul_mod_barret_128_a_9' value: 0x71e2608fe7ba04aa1f090c25554e6868
uint32_t mul_mod_barret_128_a_9_tab [4] = {0x554e6868, 0x1f090c25, 0xe7ba04aa, 0x71e2608f};
bn_uint_t mul_mod_barret_128_a_9= {.number = mul_mod_barret_128_a_9_tab, .length = 4};
//variable 'mul_mod_barret_128_b_9' value: 0xb5f40e2cc7fcdfda0253c169d22f02b8
uint32_t mul_mod_barret_128_b_9_tab [4] = {0xd22f02b8, 0x0253c169, 0xc7fcdfda, 0xb5f40e2c};
bn_uint_t mul_mod_barret_128_b_9= {.number = mul_mod_barret_128_b_9_tab, .length = 4};
//variable 'mul_mod_barret_128_res_9' value: 0x7ed10250793345bf4021c6091847da5d
uint32_t mul_mod_barret_128_res_9_tab [4] = {0x1847da5d, 0x4021c609, 0x793345bf, 0x7ed10250};
bn_uint_t mul_mod_barret_128_res_9= {.number = mul_mod_barret_128_res_9_tab, .length = 4};
//variable 'mul_mod_barret_128_mi_' value: 0x100000002000000040000000800000011
uint32_t mul_mod_barret_128_mi__tab [5] = {0x00000011, 0x00000008, 0x00000004, 0x00000002, 0x1};
bn_uint_t mul_mod_barret_128_mi_= {.number = mul_mod_barret_128_mi__tab, .length = 5};
//variable 'mul_mod_barret_128_p_' value: 0xfffffffdffffffffffffffffffffffff
uint32_t mul_mod_barret_128_p__tab [4] = {0xffffffff, 0xffffffff, 0xffffffff, 0xfffffffd};
bn_uint_t mul_mod_barret_128_p_= {.number = mul_mod_barret_128_p__tab, .length = 4};
uint32_t mul_mod_barret_128_tab_len=10;
bn_uint_t *mul_mod_barret_128_test_tab[10][3]={
{&mul_mod_barret_128_a_0,&mul_mod_barret_128_b_0,&mul_mod_barret_128_res_0},
{&mul_mod_barret_128_a_1,&mul_mod_barret_128_b_1,&mul_mod_barret_128_res_1},
{&mul_mod_barret_128_a_2,&mul_mod_barret_128_b_2,&mul_mod_barret_128_res_2},
{&mul_mod_barret_128_a_3,&mul_mod_barret_128_b_3,&mul_mod_barret_128_res_3},
{&mul_mod_barret_128_a_4,&mul_mod_barret_128_b_4,&mul_mod_barret_128_res_4},
{&mul_mod_barret_128_a_5,&mul_mod_barret_128_b_5,&mul_mod_barret_128_res_5},
{&mul_mod_barret_128_a_6,&mul_mod_barret_128_b_6,&mul_mod_barret_128_res_6},
{&mul_mod_barret_128_a_7,&mul_mod_barret_128_b_7,&mul_mod_barret_128_res_7},
{&mul_mod_barret_128_a_8,&mul_mod_barret_128_b_8,&mul_mod_barret_128_res_8},
{&mul_mod_barret_128_a_9,&mul_mod_barret_128_b_9,&mul_mod_barret_128_res_9},
};
//variable 'mod_barret_256_a_0' value: 0xe8bc85833d18a7016cf4a9d3ca3c95175e2c248257c3f52d3c693c888325d5bb287f80a982e9d0a686928839820fa8c08c9341902ddef9b1ece0d9f4c0fd205d
uint32_t mod_barret_256_a_0_tab [16] = {0xc0fd205d, 0xece0d9f4, 0x2ddef9b1, 0x8c934190, 0x820fa8c0, 0x86928839, 0x82e9d0a6, 0x287f80a9, 0x8325d5bb, 0x3c693c88, 0x57c3f52d, 0x5e2c2482, 0xca3c9517, 0x6cf4a9d3, 0x3d18a701, 0xe8bc8583};
bn_uint_t mod_barret_256_a_0= {.number = mod_barret_256_a_0_tab, .length = 16};
//variable 'mod_barret_256_res_0' value: 0x78b98e57b91268400d7995b7995d9be1a20dc6cd51053d082407a03aae162834
uint32_t mod_barret_256_res_0_tab [8] = {0xae162834, 0x2407a03a, 0x51053d08, 0xa20dc6cd, 0x995d9be1, 0x0d7995b7, 0xb9126840, 0x78b98e57};
bn_uint_t mod_barret_256_res_0= {.number = mod_barret_256_res_0_tab, .length = 8};
//variable 'mod_barret_256_a_1' value: 0x7a7d91f60fcd006953d63536af3fbd50b7613e7e68634f2725165db0d7c5d00b9affeed53696a62b47f038a38764e2b882700c2eb42e38614a7ee90a84e8646
uint32_t mod_barret_256_a_1_tab [16] = {0xa84e8646, 0x14a7ee90, 0xeb42e386, 0x882700c2, 0x38764e2b, 0xb47f038a, 0x53696a62, 0xb9affeed, 0x0d7c5d00, 0x725165db, 0xe68634f2, 0x0b7613e7, 0x6af3fbd5, 0x953d6353, 0x60fcd006, 0x7a7d91f};
bn_uint_t mod_barret_256_a_1= {.number = mod_barret_256_a_1_tab, .length = 16};
//variable 'mod_barret_256_res_1' value: 0xebf63f489b1f2d2db69efa8340fe41b582c2e795df5d1fe704a9810fbb78060a
uint32_t mod_barret_256_res_1_tab [8] = {0xbb78060a, 0x04a9810f, 0xdf5d1fe7, 0x82c2e795, 0x40fe41b5, 0xb69efa83, 0x9b1f2d2d, 0xebf63f48};
bn_uint_t mod_barret_256_res_1= {.number = mod_barret_256_res_1_tab, .length = 8};
//variable 'mod_barret_256_a_2' value: 0x61ff685b1345a6f14a778aeb9606a99ffafaaef7d66dc0e96de0ee9bf882029643b4b51429c71d6ca250602dd50ee416691a75b9677290989f1ff5be4b5a8a8f
uint32_t mod_barret_256_a_2_tab [16] = {0x4b5a8a8f, 0x9f1ff5be, 0x67729098, 0x691a75b9, 0xd50ee416, 0xa250602d, 0x29c71d6c, 0x43b4b514, 0xf8820296, 0x6de0ee9b, 0xd66dc0e9, 0xfafaaef7, 0x9606a99f, 0x4a778aeb, 0x1345a6f1, 0x61ff685b};
bn_uint_t mod_barret_256_a_2= {.number = mod_barret_256_a_2_tab, .length = 16};
//variable 'mod_barret_256_res_2' value: 0xb04e4c500bab7cafee61bc61650244990d325846791e66418dab616bc2fef14d
uint32_t mod_barret_256_res_2_tab [8] = {0xc2fef14d, 0x8dab616b, 0x791e6641, 0x0d325846, 0x65024499, 0xee61bc61, 0x0bab7caf, 0xb04e4c50};
bn_uint_t mod_barret_256_res_2= {.number = mod_barret_256_res_2_tab, .length = 8};
//variable 'mod_barret_256_a_3' value: 0x1ff09169ca26ab0a2e45946e6fd8f966067569cb4e2f52fc8d9d258d918da286ea289efedd51dd9209d4ee3cc4b8f153788eb6605ca5aa071dd0191902274182
uint32_t mod_barret_256_a_3_tab [16] = {0x02274182, 0x1dd01919, 0x5ca5aa07, 0x788eb660, 0xc4b8f153, 0x09d4ee3c, 0xdd51dd92, 0xea289efe, 0x918da286, 0x8d9d258d, 0x4e2f52fc, 0x067569cb, 0x6fd8f966, 0x2e45946e, 0xca26ab0a, 0x1ff09169};
bn_uint_t mod_barret_256_a_3= {.number = mod_barret_256_a_3_tab, .length = 16};
//variable 'mod_barret_256_res_3' value: 0xe8c4ab268ac1cddec5f941cfef503f7c5455b7b398ed95ec7166c75ab29766ec
uint32_t mod_barret_256_res_3_tab [8] = {0xb29766ec, 0x7166c75a, 0x98ed95ec, 0x5455b7b3, 0xef503f7c, 0xc5f941cf, 0x8ac1cdde, 0xe8c4ab26};
bn_uint_t mod_barret_256_res_3= {.number = mod_barret_256_res_3_tab, .length = 8};
//variable 'mod_barret_256_a_4' value: 0xfb0355caca5d721ba70ec6c4420101ac86a6f645352990703b02ec1eb1a1a46621d6b6fcb3c1b61c3517d94762cec3a5270dbc1ac1e8bb8d40764ed45557adf5
uint32_t mod_barret_256_a_4_tab [16] = {0x5557adf5, 0x40764ed4, 0xc1e8bb8d, 0x270dbc1a, 0x62cec3a5, 0x3517d947, 0xb3c1b61c, 0x21d6b6fc, 0xb1a1a466, 0x3b02ec1e, 0x35299070, 0x86a6f645, 0x420101ac, 0xa70ec6c4, 0xca5d721b, 0xfb0355ca};
bn_uint_t mod_barret_256_a_4= {.number = mod_barret_256_a_4_tab, .length = 16};
//variable 'mod_barret_256_res_4' value: 0x1fa20da1c34aee4257231a1c8f1f4a1277c48c6f1149b39702323b0c07e80dab
uint32_t mod_barret_256_res_4_tab [8] = {0x07e80dab, 0x02323b0c, 0x1149b397, 0x77c48c6f, 0x8f1f4a12, 0x57231a1c, 0xc34aee42, 0x1fa20da1};
bn_uint_t mod_barret_256_res_4= {.number = mod_barret_256_res_4_tab, .length = 8};
//variable 'mod_barret_256_a_5' value: 0x7b2c43c4d97a012f22189525b023a55e36c3bd9896ee5fffb6da55fe5a9983b8ca702a95d7753172512c4d597c8d84adac767f84709fb91f3fffbde21e6e5f9c
uint32_t mod_barret_256_a_5_tab [16] = {0x1e6e5f9c, 0x3fffbde2, 0x709fb91f, 0xac767f84, 0x7c8d84ad, 0x512c4d59, 0xd7753172, 0xca702a95, 0x5a9983b8, 0xb6da55fe, 0x96ee5fff, 0x36c3bd98, 0xb023a55e, 0x22189525, 0xd97a012f, 0x7b2c43c4};
bn_uint_t mod_barret_256_a_5= {.number = mod_barret_256_a_5_tab, .length = 16};
//variable 'mod_barret_256_res_5' value: 0xf6a021826ae077f7f5cba02facb744e60fbdbd1ac792fc9d66e5f4684d684008
uint32_t mod_barret_256_res_5_tab [8] = {0x4d684008, 0x66e5f468, 0xc792fc9d, 0x0fbdbd1a, 0xacb744e6, 0xf5cba02f, 0x6ae077f7, 0xf6a02182};
bn_uint_t mod_barret_256_res_5= {.number = mod_barret_256_res_5_tab, .length = 8};
//variable 'mod_barret_256_a_6' value: 0x9cf686bed38089058ffa6c6607d97302d431fd7e60826e5a2d955165f9a229ab60c7805f5b2353fd2bad00eca65c211b146e62442d612eee3df032536f8a4aed
uint32_t mod_barret_256_a_6_tab [16] = {0x6f8a4aed, 0x3df03253, 0x2d612eee, 0x146e6244, 0xa65c211b, 0x2bad00ec, 0x5b2353fd, 0x60c7805f, 0xf9a229ab, 0x2d955165, 0x60826e5a, 0xd431fd7e, 0x07d97302, 0x8ffa6c66, 0xd3808905, 0x9cf686be};
bn_uint_t mod_barret_256_a_6= {.number = mod_barret_256_a_6_tab, .length = 16};
//variable 'mod_barret_256_res_6' value: 0x64c4f3087854eddf5ae506aa1b6ca9319851adda61a41e9bc3bd02e6573b6013
uint32_t mod_barret_256_res_6_tab [8] = {0x573b6013, 0xc3bd02e6, 0x61a41e9b, 0x9851adda, 0x1b6ca931, 0x5ae506aa, 0x7854eddf, 0x64c4f308};
bn_uint_t mod_barret_256_res_6= {.number = mod_barret_256_res_6_tab, .length = 8};
//variable 'mod_barret_256_a_7' value: 0x743714945b85f461dcade6b54b24b1cf531b72f639f660159fb989e8496c38eeb6602acb86022dbcc045de88593cce68191a98333eceedd25f3ba53177b7e5ef
uint32_t mod_barret_256_a_7_tab [16] = {0x77b7e5ef, 0x5f3ba531, 0x3eceedd2, 0x191a9833, 0x593cce68, 0xc045de88, 0x86022dbc, 0xb6602acb, 0x496c38ee, 0x9fb989e8, 0x39f66015, 0x531b72f6, 0x4b24b1cf, 0xdcade6b5, 0x5b85f461, 0x74371494};
bn_uint_t mod_barret_256_a_7= {.number = mod_barret_256_a_7_tab, .length = 16};
//variable 'mod_barret_256_res_7' value: 0xa78d35e8748a57e917d2d63f2ab809d4d4ebf1071f75d132415bedb48a69a8ea
uint32_t mod_barret_256_res_7_tab [8] = {0x8a69a8ea, 0x415bedb4, 0x1f75d132, 0xd4ebf107, 0x2ab809d4, 0x17d2d63f, 0x748a57e9, 0xa78d35e8};
bn_uint_t mod_barret_256_res_7= {.number = mod_barret_256_res_7_tab, .length = 8};
//variable 'mod_barret_256_a_8' value: 0x2d16ba78d3b1430bfa920842bd3f6ac3723c41a584f0f63eefda0ffabd4a33b65614cd7b2a85f206205839aebb5ffedbb7fabbda6f1b62db5a36131b2910e5ec
uint32_t mod_barret_256_a_8_tab [16] = {0x2910e5ec, 0x5a36131b, 0x6f1b62db, 0xb7fabbda, 0xbb5ffedb, 0x205839ae, 0x2a85f206, 0x5614cd7b, 0xbd4a33b6, 0xefda0ffa, 0x84f0f63e, 0x723c41a5, 0xbd3f6ac3, 0xfa920842, 0xd3b1430b, 0x2d16ba78};
bn_uint_t mod_barret_256_a_8= {.number = mod_barret_256_a_8_tab, .length = 16};
//variable 'mod_barret_256_res_8' value: 0xeba485b14d34f4adf2c852e089e921ba37491ec56aee94f81667a8c9d87631e5
uint32_t mod_barret_256_res_8_tab [8] = {0xd87631e5, 0x1667a8c9, 0x6aee94f8, 0x37491ec5, 0x89e921ba, 0xf2c852e0, 0x4d34f4ad, 0xeba485b1};
bn_uint_t mod_barret_256_res_8= {.number = mod_barret_256_res_8_tab, .length = 8};
//variable 'mod_barret_256_a_9' value: 0x7a6fefe7c1fd3627491dcd3e888f5fcf873c48e64744c153bf9e3074a16f4e9d3215902e4d6d58b56ee88cd5d12ce3ed29dcb473ebda6a5cc5430431f378805f
uint32_t mod_barret_256_a_9_tab [16] = {0xf378805f, 0xc5430431, 0xebda6a5c, 0x29dcb473, 0xd12ce3ed, 0x6ee88cd5, 0x4d6d58b5, 0x3215902e, 0xa16f4e9d, 0xbf9e3074, 0x4744c153, 0x873c48e6, 0x888f5fcf, 0x491dcd3e, 0xc1fd3627, 0x7a6fefe7};
bn_uint_t mod_barret_256_a_9= {.number = mod_barret_256_a_9_tab, .length = 16};
//variable 'mod_barret_256_res_9' value: 0xa2a6773c70552927310d794f2fa18267b714642334d08148be0ba2dd399f5356
uint32_t mod_barret_256_res_9_tab [8] = {0x399f5356, 0xbe0ba2dd, 0x34d08148, 0xb7146423, 0x2fa18267, 0x310d794f, 0x70552927, 0xa2a6773c};
bn_uint_t mod_barret_256_res_9= {.number = mod_barret_256_res_9_tab, .length = 8};
//variable 'mod_barret_256_mi_' value: 0x100000000fffffffffffffffefffffffefffffffeffffffff0000000000000003
uint32_t mod_barret_256_mi__tab [9] = {0x00000003, 0x00000000, 0xffffffff, 0xfffffffe, 0xfffffffe, 0xfffffffe, 0xffffffff, 0x00000000, 0x1};
bn_uint_t mod_barret_256_mi_= {.number = mod_barret_256_mi__tab, .length = 9};
//variable 'mod_barret_256_p_' value: 0xffffffff00000001000000000000000000000000ffffffffffffffffffffffff
uint32_t mod_barret_256_p__tab [8] = {0xffffffff, 0xffffffff, 0xffffffff, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0xffffffff};
bn_uint_t mod_barret_256_p_= {.number = mod_barret_256_p__tab, .length = 8};
uint32_t mod_barret_256_tab_len=10;
bn_uint_t *mod_barret_256_test_tab[10][2]={
{&mod_barret_256_a_0,&mod_barret_256_res_0},
{&mod_barret_256_a_1,&mod_barret_256_res_1},
{&mod_barret_256_a_2,&mod_barret_256_res_2},
{&mod_barret_256_a_3,&mod_barret_256_res_3},
{&mod_barret_256_a_4,&mod_barret_256_res_4},
{&mod_barret_256_a_5,&mod_barret_256_res_5},
{&mod_barret_256_a_6,&mod_barret_256_res_6},
{&mod_barret_256_a_7,&mod_barret_256_res_7},
{&mod_barret_256_a_8,&mod_barret_256_res_8},
{&mod_barret_256_a_9,&mod_barret_256_res_9},
};
//variable 'mul_mod_barret_256_a_0' value: 0x54cab71bfce1f67e5ea776abfbfe7c2f16a35656d0bd6ae2b3626b29f8162bab
uint32_t mul_mod_barret_256_a_0_tab [8] = {0xf8162bab, 0xb3626b29, 0xd0bd6ae2, 0x16a35656, 0xfbfe7c2f, 0x5ea776ab, 0xfce1f67e, 0x54cab71b};
bn_uint_t mul_mod_barret_256_a_0= {.number = mul_mod_barret_256_a_0_tab, .length = 8};
//variable 'mul_mod_barret_256_b_0' value: 0xd284904efeb2352a587f4c68fba5a88af4379417b714c559a0efe51a1a4afe0c
uint32_t mul_mod_barret_256_b_0_tab [8] = {0x1a4afe0c, 0xa0efe51a, 0xb714c559, 0xf4379417, 0xfba5a88a, 0x587f4c68, 0xfeb2352a, 0xd284904e};
bn_uint_t mul_mod_barret_256_b_0= {.number = mul_mod_barret_256_b_0_tab, .length = 8};
//variable 'mul_mod_barret_256_res_0' value: 0x4c4e7d61d186f0c223f9ef1d939b64d36534051083c0e33203818ea51ab7ce28
uint32_t mul_mod_barret_256_res_0_tab [8] = {0x1ab7ce28, 0x03818ea5, 0x83c0e332, 0x65340510, 0x939b64d3, 0x23f9ef1d, 0xd186f0c2, 0x4c4e7d61};
bn_uint_t mul_mod_barret_256_res_0= {.number = mul_mod_barret_256_res_0_tab, .length = 8};
//variable 'mul_mod_barret_256_a_1' value: 0x3730b5ab8de409360480a20e9c0e13ab119f59e4ff52ec5780161e1585521e6
uint32_t mul_mod_barret_256_a_1_tab [8] = {0x585521e6, 0x780161e1, 0x4ff52ec5, 0xb119f59e, 0xe9c0e13a, 0x60480a20, 0xb8de4093, 0x3730b5a};
bn_uint_t mul_mod_barret_256_a_1= {.number = mul_mod_barret_256_a_1_tab, .length = 8};
//variable 'mul_mod_barret_256_b_1' value: 0xca2d9cb429c7d51380f75c66dd26876d1a8fa6dff824e780437c60348c465ea6
uint32_t mul_mod_barret_256_b_1_tab [8] = {0x8c465ea6, 0x437c6034, 0xf824e780, 0x1a8fa6df, 0xdd26876d, 0x80f75c66, 0x29c7d513, 0xca2d9cb4};
bn_uint_t mul_mod_barret_256_b_1= {.number = mul_mod_barret_256_b_1_tab, .length = 8};
//variable 'mul_mod_barret_256_res_1' value: 0x97d0ddee38ba75b3386014a0e89ee08be11f3b6bcd0d097e7e9339dd812a3139
uint32_t mul_mod_barret_256_res_1_tab [8] = {0x812a3139, 0x7e9339dd, 0xcd0d097e, 0xe11f3b6b, 0xe89ee08b, 0x386014a0, 0x38ba75b3, 0x97d0ddee};
bn_uint_t mul_mod_barret_256_res_1= {.number = mul_mod_barret_256_res_1_tab, .length = 8};
//variable 'mul_mod_barret_256_a_2' value: 0xa501f0f7cfe61c1b179c54115627daf04ed6df4a1fb7b4a42df783faa97192c3
uint32_t mul_mod_barret_256_a_2_tab [8] = {0xa97192c3, 0x2df783fa, 0x1fb7b4a4, 0x4ed6df4a, 0x5627daf0, 0x179c5411, 0xcfe61c1b, 0xa501f0f7};
bn_uint_t mul_mod_barret_256_a_2= {.number = mul_mod_barret_256_a_2_tab, .length = 8};
//variable 'mul_mod_barret_256_b_2' value: 0x689cafdd493e3a1a13bf6c78e2cad8ecace0d2b8a43858a4115c0a3978681124
uint32_t mul_mod_barret_256_b_2_tab [8] = {0x78681124, 0x115c0a39, 0xa43858a4, 0xace0d2b8, 0xe2cad8ec, 0x13bf6c78, 0x493e3a1a, 0x689cafdd};
bn_uint_t mul_mod_barret_256_b_2= {.number = mul_mod_barret_256_b_2_tab, .length = 8};
//variable 'mul_mod_barret_256_res_2' value: 0x80d4fb6a652f977eb7ce85b54fcb985b96b5c55969ddf6cc477ee957eb55ff61
uint32_t mul_mod_barret_256_res_2_tab [8] = {0xeb55ff61, 0x477ee957, 0x69ddf6cc, 0x96b5c559, 0x4fcb985b, 0xb7ce85b5, 0x652f977e, 0x80d4fb6a};
bn_uint_t mul_mod_barret_256_res_2= {.number = mul_mod_barret_256_res_2_tab, .length = 8};
//variable 'mul_mod_barret_256_a_3' value: 0x2e59af46dc5fb06881c0ee3e334b0e088784cd2719038be91e0ad163e4ae2b6
uint32_t mul_mod_barret_256_a_3_tab [8] = {0x3e4ae2b6, 0x91e0ad16, 0x719038be, 0x88784cd2, 0xe334b0e0, 0x881c0ee3, 0x6dc5fb06, 0x2e59af4};
bn_uint_t mul_mod_barret_256_a_3= {.number = mul_mod_barret_256_a_3_tab, .length = 8};
//variable 'mul_mod_barret_256_b_3' value: 0xe7da6a5b41ecb24c5f830196156cf324319e5f05fab687a34e375c039e5d1bde
uint32_t mul_mod_barret_256_b_3_tab [8] = {0x9e5d1bde, 0x4e375c03, 0xfab687a3, 0x319e5f05, 0x156cf324, 0x5f830196, 0x41ecb24c, 0xe7da6a5b};
bn_uint_t mul_mod_barret_256_b_3= {.number = mul_mod_barret_256_b_3_tab, .length = 8};
//variable 'mul_mod_barret_256_res_3' value: 0x9abb5493e98e2535b9bd4cce056a371a4a385ef119a663024baf1e6a20b71e6b
uint32_t mul_mod_barret_256_res_3_tab [8] = {0x20b71e6b, 0x4baf1e6a, 0x19a66302, 0x4a385ef1, 0x056a371a, 0xb9bd4cce, 0xe98e2535, 0x9abb5493};
bn_uint_t mul_mod_barret_256_res_3= {.number = mul_mod_barret_256_res_3_tab, .length = 8};
//variable 'mul_mod_barret_256_a_4' value: 0xf1edff3b1815ddd0b93f4c3e59efc4ae0e35f1205f110935cac1d07ddc83f3b9
uint32_t mul_mod_barret_256_a_4_tab [8] = {0xdc83f3b9, 0xcac1d07d, 0x5f110935, 0x0e35f120, 0x59efc4ae, 0xb93f4c3e, 0x1815ddd0, 0xf1edff3b};
bn_uint_t mul_mod_barret_256_a_4= {.number = mul_mod_barret_256_a_4_tab, .length = 8};
//variable 'mul_mod_barret_256_b_4' value: 0x27a769284e335cad0403fc93b9f1f8cdf804cdb44a8b7b6e32d38a463863528b
uint32_t mul_mod_barret_256_b_4_tab [8] = {0x3863528b, 0x32d38a46, 0x4a8b7b6e, 0xf804cdb4, 0xb9f1f8cd, 0x0403fc93, 0x4e335cad, 0x27a76928};
bn_uint_t mul_mod_barret_256_b_4= {.number = mul_mod_barret_256_b_4_tab, .length = 8};
//variable 'mul_mod_barret_256_res_4' value: 0xcc6afb2be24561ef093263690d167d5275c61ab295cecec56f34290eade40838
uint32_t mul_mod_barret_256_res_4_tab [8] = {0xade40838, 0x6f34290e, 0x95cecec5, 0x75c61ab2, 0x0d167d52, 0x09326369, 0xe24561ef, 0xcc6afb2b};
bn_uint_t mul_mod_barret_256_res_4= {.number = mul_mod_barret_256_res_4_tab, .length = 8};
//variable 'mul_mod_barret_256_a_5' value: 0x8f8b7a53de39761cb4e2dec314f6c98345c8af29ea45414a5fb29692636b437c
uint32_t mul_mod_barret_256_a_5_tab [8] = {0x636b437c, 0x5fb29692, 0xea45414a, 0x45c8af29, 0x14f6c983, 0xb4e2dec3, 0xde39761c, 0x8f8b7a53};
bn_uint_t mul_mod_barret_256_a_5= {.number = mul_mod_barret_256_a_5_tab, .length = 8};
//variable 'mul_mod_barret_256_b_5' value: 0x236a1cd1bd0415323450a4a9e053ddb298aa9462fcdc96986c18350844b24eac
uint32_t mul_mod_barret_256_b_5_tab [8] = {0x44b24eac, 0x6c183508, 0xfcdc9698, 0x98aa9462, 0xe053ddb2, 0x3450a4a9, 0xbd041532, 0x236a1cd1};
bn_uint_t mul_mod_barret_256_b_5= {.number = mul_mod_barret_256_b_5_tab, .length = 8};
//variable 'mul_mod_barret_256_res_5' value: 0xa9055ecf5ad958a791505a4ae2724e2c55c56b407b380a5da75ae8a1c032ade1
uint32_t mul_mod_barret_256_res_5_tab [8] = {0xc032ade1, 0xa75ae8a1, 0x7b380a5d, 0x55c56b40, 0xe2724e2c, 0x91505a4a, 0x5ad958a7, 0xa9055ecf};
bn_uint_t mul_mod_barret_256_res_5= {.number = mul_mod_barret_256_res_5_tab, .length = 8};
//variable 'mul_mod_barret_256_a_6' value: 0x9456798a1db694749af7acba30f5357e71662eb66cb8258aafd331a0f51cec21
uint32_t mul_mod_barret_256_a_6_tab [8] = {0xf51cec21, 0xafd331a0, 0x6cb8258a, 0x71662eb6, 0x30f5357e, 0x9af7acba, 0x1db69474, 0x9456798a};
bn_uint_t mul_mod_barret_256_a_6= {.number = mul_mod_barret_256_a_6_tab, .length = 8};
//variable 'mul_mod_barret_256_b_6' value: 0x20c32d65dd73f3687d5c740c002786cad9e148ba8116fe17ff5b39b3a20d55ad
uint32_t mul_mod_barret_256_b_6_tab [8] = {0xa20d55ad, 0xff5b39b3, 0x8116fe17, 0xd9e148ba, 0x002786ca, 0x7d5c740c, 0xdd73f368, 0x20c32d65};
bn_uint_t mul_mod_barret_256_b_6= {.number = mul_mod_barret_256_b_6_tab, .length = 8};
//variable 'mul_mod_barret_256_res_6' value: 0x78eab619c279774a59925633dac0c01b72fd792d9b7c5605005f61c9ee3eb5
uint32_t mul_mod_barret_256_res_6_tab [8] = {0xc9ee3eb5, 0x05005f61, 0x2d9b7c56, 0x1b72fd79, 0x33dac0c0, 0x4a599256, 0x19c27977, 0x78eab6};
bn_uint_t mul_mod_barret_256_res_6= {.number = mul_mod_barret_256_res_6_tab, .length = 8};
//variable 'mul_mod_barret_256_a_7' value: 0x60757a1d57a2dd5f97a0ca8d21e0e38bc11e131a120c0cd12af0ebaec31bf008
uint32_t mul_mod_barret_256_a_7_tab [8] = {0xc31bf008, 0x2af0ebae, 0x120c0cd1, 0xc11e131a, 0x21e0e38b, 0x97a0ca8d, 0x57a2dd5f, 0x60757a1d};
bn_uint_t mul_mod_barret_256_a_7= {.number = mul_mod_barret_256_a_7_tab, .length = 8};
//variable 'mul_mod_barret_256_b_7' value: 0xdfdacfcfd2cceb91b8d3b5b0325d2fcb134fe36408bd7c42250003c61f4def0a
uint32_t mul_mod_barret_256_b_7_tab [8] = {0x1f4def0a, 0x250003c6, 0x08bd7c42, 0x134fe364, 0x325d2fcb, 0xb8d3b5b0, 0xd2cceb91, 0xdfdacfcf};
bn_uint_t mul_mod_barret_256_b_7= {.number = mul_mod_barret_256_b_7_tab, .length = 8};
//variable 'mul_mod_barret_256_res_7' value: 0x4a658dd3a90923a4fbc9b56b9519a873fbb2eead0311653f95475618955a832
uint32_t mul_mod_barret_256_res_7_tab [8] = {0x8955a832, 0xf9547561, 0xd0311653, 0x3fbb2eea, 0xb9519a87, 0x4fbc9b56, 0x3a90923a, 0x4a658dd};
bn_uint_t mul_mod_barret_256_res_7= {.number = mul_mod_barret_256_res_7_tab, .length = 8};
//variable 'mul_mod_barret_256_a_8' value: 0x933d15fbacf30be15dc1aed2d686ee1e9d4c72d25b7cfb30415db64df5064664
uint32_t mul_mod_barret_256_a_8_tab [8] = {0xf5064664, 0x415db64d, 0x5b7cfb30, 0x9d4c72d2, 0xd686ee1e, 0x5dc1aed2, 0xacf30be1, 0x933d15fb};
bn_uint_t mul_mod_barret_256_a_8= {.number = mul_mod_barret_256_a_8_tab, .length = 8};
//variable 'mul_mod_barret_256_b_8' value: 0xf57ffff86036479c30610983b0376b42f205f5642b4f609a0fb3218fbb9e799c
uint32_t mul_mod_barret_256_b_8_tab [8] = {0xbb9e799c, 0x0fb3218f, 0x2b4f609a, 0xf205f564, 0xb0376b42, 0x30610983, 0x6036479c, 0xf57ffff8};
bn_uint_t mul_mod_barret_256_b_8= {.number = mul_mod_barret_256_b_8_tab, .length = 8};
//variable 'mul_mod_barret_256_res_8' value: 0x7e38d903ecf4a6940017f0fdc19818a69946674653599f9f5a7288b94d7052f8
uint32_t mul_mod_barret_256_res_8_tab [8] = {0x4d7052f8, 0x5a7288b9, 0x53599f9f, 0x99466746, 0xc19818a6, 0x0017f0fd, 0xecf4a694, 0x7e38d903};
bn_uint_t mul_mod_barret_256_res_8= {.number = mul_mod_barret_256_res_8_tab, .length = 8};
//variable 'mul_mod_barret_256_a_9' value: 0x8d33836eb64705152f814e9bc6fcb9c183cfa96e9209e20e1decd1ed5f46db98
uint32_t mul_mod_barret_256_a_9_tab [8] = {0x5f46db98, 0x1decd1ed, 0x9209e20e, 0x83cfa96e, 0xc6fcb9c1, 0x2f814e9b, 0xb6470515, 0x8d33836e};
bn_uint_t mul_mod_barret_256_a_9= {.number = mul_mod_barret_256_a_9_tab, .length = 8};
//variable 'mul_mod_barret_256_b_9' value: 0xce45fd03755bc25c616ff02d1aeab85e241748e163381903b71f26cbf83fb2b
uint32_t mul_mod_barret_256_b_9_tab [8] = {0xbf83fb2b, 0x3b71f26c, 0x16338190, 0xe241748e, 0xd1aeab85, 0xc616ff02, 0x3755bc25, 0xce45fd0};
bn_uint_t mul_mod_barret_256_b_9= {.number = mul_mod_barret_256_b_9_tab, .length = 8};
//variable 'mul_mod_barret_256_res_9' value: 0x9501c91defaaea3949912d4469041c44e1f9b9dd66b263c5172755271c4da565
uint32_t mul_mod_barret_256_res_9_tab [8] = {0x1c4da565, 0x17275527, 0x66b263c5, 0xe1f9b9dd, 0x69041c44, 0x49912d44, 0xefaaea39, 0x9501c91d};
bn_uint_t mul_mod_barret_256_res_9= {.number = mul_mod_barret_256_res_9_tab, .length = 8};
//variable 'mul_mod_barret_256_mi_' value: 0x100000000fffffffffffffffefffffffefffffffeffffffff0000000000000003
uint32_t mul_mod_barret_256_mi__tab [9] = {0x00000003, 0x00000000, 0xffffffff, 0xfffffffe, 0xfffffffe, 0xfffffffe, 0xffffffff, 0x00000000, 0x1};
bn_uint_t mul_mod_barret_256_mi_= {.number = mul_mod_barret_256_mi__tab, .length = 9};
//variable 'mul_mod_barret_256_p_' value: 0xffffffff00000001000000000000000000000000ffffffffffffffffffffffff
uint32_t mul_mod_barret_256_p__tab [8] = {0xffffffff, 0xffffffff, 0xffffffff, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0xffffffff};
bn_uint_t mul_mod_barret_256_p_= {.number = mul_mod_barret_256_p__tab, .length = 8};
uint32_t mul_mod_barret_256_tab_len=10;
bn_uint_t *mul_mod_barret_256_test_tab[10][3]={
{&mul_mod_barret_256_a_0,&mul_mod_barret_256_b_0,&mul_mod_barret_256_res_0},
{&mul_mod_barret_256_a_1,&mul_mod_barret_256_b_1,&mul_mod_barret_256_res_1},
{&mul_mod_barret_256_a_2,&mul_mod_barret_256_b_2,&mul_mod_barret_256_res_2},
{&mul_mod_barret_256_a_3,&mul_mod_barret_256_b_3,&mul_mod_barret_256_res_3},
{&mul_mod_barret_256_a_4,&mul_mod_barret_256_b_4,&mul_mod_barret_256_res_4},
{&mul_mod_barret_256_a_5,&mul_mod_barret_256_b_5,&mul_mod_barret_256_res_5},
{&mul_mod_barret_256_a_6,&mul_mod_barret_256_b_6,&mul_mod_barret_256_res_6},
{&mul_mod_barret_256_a_7,&mul_mod_barret_256_b_7,&mul_mod_barret_256_res_7},
{&mul_mod_barret_256_a_8,&mul_mod_barret_256_b_8,&mul_mod_barret_256_res_8},
{&mul_mod_barret_256_a_9,&mul_mod_barret_256_b_9,&mul_mod_barret_256_res_9},
};

#endif /* TEST_BIGNUM_VALUES_H_ */
