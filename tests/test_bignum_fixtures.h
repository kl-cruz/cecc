/*
File generate using external software
*/
#ifndef TEST_BIGNUM_VALUES_H_
#define TEST_BIGNUM_VALUES_H_
#include "bignum.h"

//variable 'add_128_a_0' value: 0x892f1a10f2584dd1c55d9bc960473e7c
uint32_t add_128_a_0_tab [4] = {0x60473e7c, 0xc55d9bc9, 0xf2584dd1, 0x892f1a10};
bn_uint_t add_128_a_0= {.number = add_128_a_0_tab, .length = 4};
//variable 'add_128_b_0' value: 0xd9eeeb0dd868b684df453ae8129f4929
uint32_t add_128_b_0_tab [4] = {0x129f4929, 0xdf453ae8, 0xd868b684, 0xd9eeeb0d};
bn_uint_t add_128_b_0= {.number = add_128_b_0_tab, .length = 4};
//variable 'add_128_res_0' value: 0x1631e051ecac10456a4a2d6b172e687a5
uint32_t add_128_res_0_tab [5] = {0x72e687a5, 0xa4a2d6b1, 0xcac10456, 0x631e051e, 0x1};
bn_uint_t add_128_res_0= {.number = add_128_res_0_tab, .length = 5};
uint32_t add_128_tab_len=1;
bn_uint_t *add_128_test_tab[1][3]={
{&add_128_a_0,&add_128_b_0,&add_128_res_0},
};
//variable 'add_256_a_0' value: 0x8d24ec344a4b22abe6543f103cfc0cba7a0c8676641f7684b49ad9558f2c06b2
uint32_t add_256_a_0_tab [8] = {0x8f2c06b2, 0xb49ad955, 0x641f7684, 0x7a0c8676, 0x3cfc0cba, 0xe6543f10, 0x4a4b22ab, 0x8d24ec34};
bn_uint_t add_256_a_0= {.number = add_256_a_0_tab, .length = 8};
//variable 'add_256_b_0' value: 0x186c171cc8303cf1d6593f8056788822f6018a5e88f13beaf2c9301185da4fa4
uint32_t add_256_b_0_tab [8] = {0x85da4fa4, 0xf2c93011, 0x88f13bea, 0xf6018a5e, 0x56788822, 0xd6593f80, 0xc8303cf1, 0x186c171c};
bn_uint_t add_256_b_0= {.number = add_256_b_0_tab, .length = 8};
//variable 'add_256_res_0' value: 0xa5910351127b5f9dbcad7e90937494dd700e10d4ed10b26fa764096715065656
uint32_t add_256_res_0_tab [8] = {0x15065656, 0xa7640967, 0xed10b26f, 0x700e10d4, 0x937494dd, 0xbcad7e90, 0x127b5f9d, 0xa5910351};
bn_uint_t add_256_res_0= {.number = add_256_res_0_tab, .length = 8};
uint32_t add_256_tab_len=1;
bn_uint_t *add_256_test_tab[1][3]={
{&add_256_a_0,&add_256_b_0,&add_256_res_0},
};
//variable 'sub_128_a_0' value: 0x9959c50ee6c2a99b7a12644f4be38450
uint32_t sub_128_a_0_tab [4] = {0x4be38450, 0x7a12644f, 0xe6c2a99b, 0x9959c50e};
bn_uint_t sub_128_a_0= {.number = sub_128_a_0_tab, .length = 4};
//variable 'sub_128_b_0' value: 0xb66ce33d735e7dec2600b26d288e0172
uint32_t sub_128_b_0_tab [4] = {0x288e0172, 0x2600b26d, 0x735e7dec, 0xb66ce33d};
bn_uint_t sub_128_b_0= {.number = sub_128_b_0_tab, .length = 4};
//variable 'sub_128_res_0' value: 0x-1d131e2e8c9bd450abee4e1ddcaa7d22
uint32_t sub_128_res_0_tab [5] = {0x235582de, 0x5411b1e2, 0x73642baf, 0xe2ece1d1, 0xffffffff};
bn_uint_t sub_128_res_0= {.number = sub_128_res_0_tab, .length = 5};
uint32_t sub_128_tab_len=1;
bn_uint_t *sub_128_test_tab[1][3]={
{&sub_128_a_0,&sub_128_b_0,&sub_128_res_0},
};
//variable 'sub_256_a_0' value: 0xd1e77ef6223071cba66278097af49577a8bf39aa1048c7ba52b110434abd4573
uint32_t sub_256_a_0_tab [8] = {0x4abd4573, 0x52b11043, 0x1048c7ba, 0xa8bf39aa, 0x7af49577, 0xa6627809, 0x223071cb, 0xd1e77ef6};
bn_uint_t sub_256_a_0= {.number = sub_256_a_0_tab, .length = 8};
//variable 'sub_256_b_0' value: 0x81e0054b2a498d8cee7a80e4a7f2e865361538fbdd293b0751fa6a673e714d7d
uint32_t sub_256_b_0_tab [8] = {0x3e714d7d, 0x51fa6a67, 0xdd293b07, 0x361538fb, 0xa7f2e865, 0xee7a80e4, 0x2a498d8c, 0x81e0054b};
bn_uint_t sub_256_b_0= {.number = sub_256_b_0_tab, .length = 8};
//variable 'sub_256_res_0' value: 0x500779aaf7e6e43eb7e7f724d301ad1272aa00ae331f8cb300b6a5dc0c4bf7f6
uint32_t sub_256_res_0_tab [8] = {0x0c4bf7f6, 0x00b6a5dc, 0x331f8cb3, 0x72aa00ae, 0xd301ad12, 0xb7e7f724, 0xf7e6e43e, 0x500779aa};
bn_uint_t sub_256_res_0= {.number = sub_256_res_0_tab, .length = 8};
uint32_t sub_256_tab_len=1;
bn_uint_t *sub_256_test_tab[1][3]={
{&sub_256_a_0,&sub_256_b_0,&sub_256_res_0},
};
//variable 'add_mod_128_a_0' value: 0xa598928848b7f4789c744499dd314b3c
uint32_t add_mod_128_a_0_tab [4] = {0xdd314b3c, 0x9c744499, 0x48b7f478, 0xa5989288};
bn_uint_t add_mod_128_a_0= {.number = add_mod_128_a_0_tab, .length = 4};
//variable 'add_mod_128_b_0' value: 0xea7caba1dd436723053959d25700d22a
uint32_t add_mod_128_b_0_tab [4] = {0x5700d22a, 0x053959d2, 0xdd436723, 0xea7caba1};
bn_uint_t add_mod_128_b_0= {.number = add_mod_128_b_0_tab, .length = 4};
//variable 'add_mod_128_p_0' value: 0xc3b68d6f79fe7c832071bf166fa9e485
uint32_t add_mod_128_p_0_tab [4] = {0x6fa9e485, 0x2071bf16, 0x79fe7c83, 0xc3b68d6f};
bn_uint_t add_mod_128_p_0= {.number = add_mod_128_p_0_tab, .length = 4};
//variable 'add_mod_128_res_0' value: 0x8a8234b31fe629560ca203f54de545c
uint32_t add_mod_128_res_0_tab [4] = {0x54de545c, 0x60ca203f, 0x31fe6295, 0x8a8234b};
bn_uint_t add_mod_128_res_0= {.number = add_mod_128_res_0_tab, .length = 4};
uint32_t add_mod_128_tab_len=1;
bn_uint_t *add_mod_128_test_tab[1][4]={
{&add_mod_128_a_0,&add_mod_128_b_0,&add_mod_128_p_0,&add_mod_128_res_0},
};
//variable 'add_mod_256_a_0' value: 0xacde3c9bbfc10c09131ca967c528fb8086ac37e127d17f6f1e28011ebcd696f7
uint32_t add_mod_256_a_0_tab [8] = {0xbcd696f7, 0x1e28011e, 0x27d17f6f, 0x86ac37e1, 0xc528fb80, 0x131ca967, 0xbfc10c09, 0xacde3c9b};
bn_uint_t add_mod_256_a_0= {.number = add_mod_256_a_0_tab, .length = 8};
//variable 'add_mod_256_b_0' value: 0xe7081f1657949cf45e9f1e8a64749aeeb2e91f0c34b4ea1174c630cce79b6061
uint32_t add_mod_256_b_0_tab [8] = {0xe79b6061, 0x74c630cc, 0x34b4ea11, 0xb2e91f0c, 0x64749aee, 0x5e9f1e8a, 0x57949cf4, 0xe7081f16};
bn_uint_t add_mod_256_b_0= {.number = add_mod_256_b_0_tab, .length = 8};
//variable 'add_mod_256_p_0' value: 0x5c42db7a1b83b262447a9977b65a40fe99051d4d916e60d0c4ea8dcccf35472b
uint32_t add_mod_256_p_0_tab [8] = {0xcf35472b, 0xc4ea8dcc, 0x916e60d0, 0x99051d4d, 0xb65a40fe, 0x447a9977, 0x1b83b262, 0x5c42db7a};
bn_uint_t add_mod_256_p_0= {.number = add_mod_256_p_0_tab, .length = 8};
//variable 'add_mod_256_res_0' value: 0x22daedc9a946df745fd1621350349274d580e1b716cce63d7f43fab8679cdaac
uint32_t add_mod_256_res_0_tab [8] = {0x679cdaac, 0x7f43fab8, 0x16cce63d, 0xd580e1b7, 0x50349274, 0x5fd16213, 0xa946df74, 0x22daedc9};
bn_uint_t add_mod_256_res_0= {.number = add_mod_256_res_0_tab, .length = 8};
uint32_t add_mod_256_tab_len=1;
bn_uint_t *add_mod_256_test_tab[1][4]={
{&add_mod_256_a_0,&add_mod_256_b_0,&add_mod_256_p_0,&add_mod_256_res_0},
};
//variable 'sub_mod_128_a_0' value: 0xce82835dd799f321e6c038bafe656047
uint32_t sub_mod_128_a_0_tab [4] = {0xfe656047, 0xe6c038ba, 0xd799f321, 0xce82835d};
bn_uint_t sub_mod_128_a_0= {.number = sub_mod_128_a_0_tab, .length = 4};
//variable 'sub_mod_128_b_0' value: 0x55c6d4235033bcd76f602042c58c603a
uint32_t sub_mod_128_b_0_tab [4] = {0xc58c603a, 0x6f602042, 0x5033bcd7, 0x55c6d423};
bn_uint_t sub_mod_128_b_0= {.number = sub_mod_128_b_0_tab, .length = 4};
//variable 'sub_mod_128_p_0' value: 0xac6dd2f7f4de75be96df0741ddc7f6c2
uint32_t sub_mod_128_p_0_tab [4] = {0xddc7f6c2, 0x96df0741, 0xf4de75be, 0xac6dd2f7};
bn_uint_t sub_mod_128_p_0= {.number = sub_mod_128_p_0_tab, .length = 4};
//variable 'sub_mod_128_res_0' value: 0x78bbaf3a8766364a7760187838d9000d
uint32_t sub_mod_128_res_0_tab [4] = {0x38d9000d, 0x77601878, 0x8766364a, 0x78bbaf3a};
bn_uint_t sub_mod_128_res_0= {.number = sub_mod_128_res_0_tab, .length = 4};
uint32_t sub_mod_128_tab_len=1;
bn_uint_t *sub_mod_128_test_tab[1][4]={
{&sub_mod_128_a_0,&sub_mod_128_b_0,&sub_mod_128_p_0,&sub_mod_128_res_0},
};
//variable 'sub_mod_256_a_0' value: 0xf245cce4587371967150d8c8ded13ce0304379b6d545443ecfea70f5a04870de
uint32_t sub_mod_256_a_0_tab [8] = {0xa04870de, 0xcfea70f5, 0xd545443e, 0x304379b6, 0xded13ce0, 0x7150d8c8, 0x58737196, 0xf245cce4};
bn_uint_t sub_mod_256_a_0= {.number = sub_mod_256_a_0_tab, .length = 8};
//variable 'sub_mod_256_b_0' value: 0xb3286713726bff2bd37b395f61ae9f7c0369fe0de0e65518e1c8696e4c92e327
uint32_t sub_mod_256_b_0_tab [8] = {0x4c92e327, 0xe1c8696e, 0xe0e65518, 0x0369fe0d, 0x61ae9f7c, 0xd37b395f, 0x726bff2b, 0xb3286713};
bn_uint_t sub_mod_256_b_0= {.number = sub_mod_256_b_0_tab, .length = 8};
//variable 'sub_mod_256_p_0' value: 0xe5fc8326fa59f9763ddc44225d8baac3967e2228c24d3bbff1b490366c36648
uint32_t sub_mod_256_p_0_tab [8] = {0x66c36648, 0xff1b4903, 0x8c24d3bb, 0x3967e222, 0x25d8baac, 0x63ddc442, 0x6fa59f97, 0xe5fc832};
bn_uint_t sub_mod_256_p_0= {.number = sub_mod_256_p_0_tab, .length = 8};
//variable 'sub_mod_256_res_0' value: 0x59e45072770f40d0e5e8e60e5bfb2b34739f31ec3cba035f1b4e379b8a7f497
uint32_t sub_mod_256_res_0_tab [8] = {0xb8a7f497, 0xf1b4e379, 0xc3cba035, 0x4739f31e, 0xe5bfb2b3, 0x0e5e8e60, 0x2770f40d, 0x59e4507};
bn_uint_t sub_mod_256_res_0= {.number = sub_mod_256_res_0_tab, .length = 8};
uint32_t sub_mod_256_tab_len=1;
bn_uint_t *sub_mod_256_test_tab[1][4]={
{&sub_mod_256_a_0,&sub_mod_256_b_0,&sub_mod_256_p_0,&sub_mod_256_res_0},
};
//variable 'shr_128_a_0' value: 0x35c62784bbf7356e6e13d3c397f25cb6
uint32_t shr_128_a_0_tab [4] = {0x97f25cb6, 0x6e13d3c3, 0xbbf7356e, 0x35c62784};
bn_uint_t shr_128_a_0= {.number = shr_128_a_0_tab, .length = 4};
//variable 'shr_128_res_0' value: 0x1ae313c25dfb9ab73709e9e1cbf92e5b
uint32_t shr_128_res_0_tab [4] = {0xcbf92e5b, 0x3709e9e1, 0x5dfb9ab7, 0x1ae313c2};
bn_uint_t shr_128_res_0= {.number = shr_128_res_0_tab, .length = 4};
uint32_t shr_128_tab_len=1;
bn_uint_t *shr_128_test_tab[1][2]={
{&shr_128_a_0,&shr_128_res_0},
};
//variable 'shr_256_a_0' value: 0x990730a927063169fb0a11739c724de44ce19f016795dd263b6d44ee7ff03d91
uint32_t shr_256_a_0_tab [8] = {0x7ff03d91, 0x3b6d44ee, 0x6795dd26, 0x4ce19f01, 0x9c724de4, 0xfb0a1173, 0x27063169, 0x990730a9};
bn_uint_t shr_256_a_0= {.number = shr_256_a_0_tab, .length = 8};
//variable 'shr_256_res_0' value: 0x4c839854938318b4fd8508b9ce3926f22670cf80b3caee931db6a2773ff81ec8
uint32_t shr_256_res_0_tab [8] = {0x3ff81ec8, 0x1db6a277, 0xb3caee93, 0x2670cf80, 0xce3926f2, 0xfd8508b9, 0x938318b4, 0x4c839854};
bn_uint_t shr_256_res_0= {.number = shr_256_res_0_tab, .length = 8};
uint32_t shr_256_tab_len=1;
bn_uint_t *shr_256_test_tab[1][2]={
{&shr_256_a_0,&shr_256_res_0},
};
//variable 'inv_mod_128_a_0' value: 0x6e23b6502bcaea879415ad33f1def9be
uint32_t inv_mod_128_a_0_tab [4] = {0xf1def9be, 0x9415ad33, 0x2bcaea87, 0x6e23b650};
bn_uint_t inv_mod_128_a_0= {.number = inv_mod_128_a_0_tab, .length = 4};
//variable 'inv_mod_128_p_0' value: 0x8bd69afa7d8d671d25709c7b75812cab
uint32_t inv_mod_128_p_0_tab [4] = {0x75812cab, 0x25709c7b, 0x7d8d671d, 0x8bd69afa};
bn_uint_t inv_mod_128_p_0= {.number = inv_mod_128_p_0_tab, .length = 4};
//variable 'inv_mod_128_res_0' value: 0x231c9cfc652d0be4f86c1c63cf9f9a82
uint32_t inv_mod_128_res_0_tab [4] = {0xcf9f9a82, 0xf86c1c63, 0x652d0be4, 0x231c9cfc};
bn_uint_t inv_mod_128_res_0= {.number = inv_mod_128_res_0_tab, .length = 4};
uint32_t inv_mod_128_tab_len=1;
bn_uint_t *inv_mod_128_test_tab[1][3]={
{&inv_mod_128_a_0,&inv_mod_128_p_0,&inv_mod_128_res_0},
};
//variable 'inv_mod_256_a_0' value: 0x9b60a339e3de8cf0a19f645b7b43a9b26f4e9527f7239864a065517294a3cf0e
uint32_t inv_mod_256_a_0_tab [8] = {0x94a3cf0e, 0xa0655172, 0xf7239864, 0x6f4e9527, 0x7b43a9b2, 0xa19f645b, 0xe3de8cf0, 0x9b60a339};
bn_uint_t inv_mod_256_a_0= {.number = inv_mod_256_a_0_tab, .length = 8};
//variable 'inv_mod_256_p_0' value: 0xb67c6e91eca7e664f434e55333322f8f85f7533dbfccfd25fe720a377b358ed7
uint32_t inv_mod_256_p_0_tab [8] = {0x7b358ed7, 0xfe720a37, 0xbfccfd25, 0x85f7533d, 0x33322f8f, 0xf434e553, 0xeca7e664, 0xb67c6e91};
bn_uint_t inv_mod_256_p_0= {.number = inv_mod_256_p_0_tab, .length = 8};
//variable 'inv_mod_256_res_0' value: 0x618f62a8288762719edb43ae0b2e7d932e94605e3e57c7de9cfc52c60f094696
uint32_t inv_mod_256_res_0_tab [8] = {0x0f094696, 0x9cfc52c6, 0x3e57c7de, 0x2e94605e, 0x0b2e7d93, 0x9edb43ae, 0x28876271, 0x618f62a8};
bn_uint_t inv_mod_256_res_0= {.number = inv_mod_256_res_0_tab, .length = 8};
uint32_t inv_mod_256_tab_len=1;
bn_uint_t *inv_mod_256_test_tab[1][3]={
{&inv_mod_256_a_0,&inv_mod_256_p_0,&inv_mod_256_res_0},
};
//variable 'mul_128_a_0' value: 0xd3b1db50a470061b40307c21b3305831
uint32_t mul_128_a_0_tab [4] = {0xb3305831, 0x40307c21, 0xa470061b, 0xd3b1db50};
bn_uint_t mul_128_a_0= {.number = mul_128_a_0_tab, .length = 4};
//variable 'mul_128_b_0' value: 0xebd666b56090580a8db66c091065fc83
uint32_t mul_128_b_0_tab [4] = {0x1065fc83, 0x8db66c09, 0x6090580a, 0xebd666b5};
bn_uint_t mul_128_b_0= {.number = mul_128_b_0_tab, .length = 4};
//variable 'mul_128_res_0' value: 0xc3058fef36588be07ce3f1e0da830b71a83bc569a79731a8093d2ef123e25d13
uint32_t mul_128_res_0_tab [8] = {0x23e25d13, 0x093d2ef1, 0xa79731a8, 0xa83bc569, 0xda830b71, 0x7ce3f1e0, 0x36588be0, 0xc3058fef};
bn_uint_t mul_128_res_0= {.number = mul_128_res_0_tab, .length = 8};
uint32_t mul_128_tab_len=1;
bn_uint_t *mul_128_test_tab[1][3]={
{&mul_128_a_0,&mul_128_b_0,&mul_128_res_0},
};
//variable 'mul_256_a_0' value: 0xe1f635cc83271b00c24985b14c5efa1c90d48378b9fb4e4c011c061fc7f00ee7
uint32_t mul_256_a_0_tab [8] = {0xc7f00ee7, 0x011c061f, 0xb9fb4e4c, 0x90d48378, 0x4c5efa1c, 0xc24985b1, 0x83271b00, 0xe1f635cc};
bn_uint_t mul_256_a_0= {.number = mul_256_a_0_tab, .length = 8};
//variable 'mul_256_b_0' value: 0x4fb06e10c73af22a905ed760f4856640601880042b0343a5767954e836033058
uint32_t mul_256_b_0_tab [8] = {0x36033058, 0x767954e8, 0x2b0343a5, 0x60188004, 0xf4856640, 0x905ed760, 0xc73af22a, 0x4fb06e10};
bn_uint_t mul_256_b_0= {.number = mul_256_b_0_tab, .length = 8};
//variable 'mul_256_res_0' value: 0x4656b505b36ee4b5477dbf7db3da2c9400b07c4242536af1af01630c9355b907900f92996d9cfa7465759aff2ee8f37251b304e16a1c4894e4f458b6a4056f68
uint32_t mul_256_res_0_tab [16] = {0xa4056f68, 0xe4f458b6, 0x6a1c4894, 0x51b304e1, 0x2ee8f372, 0x65759aff, 0x6d9cfa74, 0x900f9299, 0x9355b907, 0xaf01630c, 0x42536af1, 0x00b07c42, 0xb3da2c94, 0x477dbf7d, 0xb36ee4b5, 0x4656b505};
bn_uint_t mul_256_res_0= {.number = mul_256_res_0_tab, .length = 16};
uint32_t mul_256_tab_len=1;
bn_uint_t *mul_256_test_tab[1][3]={
{&mul_256_a_0,&mul_256_b_0,&mul_256_res_0},
};
//variable 'mod_barret_128_a_0' value: 0x94acbdeecb263318951ae04b39de340ae2fb6334b488960899b2a32705e3bbe6
uint32_t mod_barret_128_a_0_tab [8] = {0x05e3bbe6, 0x99b2a327, 0xb4889608, 0xe2fb6334, 0x39de340a, 0x951ae04b, 0xcb263318, 0x94acbdee};
bn_uint_t mod_barret_128_a_0= {.number = mod_barret_128_a_0_tab, .length = 8};
//variable 'mod_barret_128_res_0' value: 0xe3cd822aa908450117cce1633bf66c69
uint32_t mod_barret_128_res_0_tab [4] = {0x3bf66c69, 0x17cce163, 0xa9084501, 0xe3cd822a};
bn_uint_t mod_barret_128_res_0= {.number = mod_barret_128_res_0_tab, .length = 4};
//variable 'mod_barret_128_a_1' value: 0x5cd662d4f35e192be1a36b2d70fb8ffc15ebce80fcb9a43086c4b0efe92c169f
uint32_t mod_barret_128_a_1_tab [8] = {0xe92c169f, 0x86c4b0ef, 0xfcb9a430, 0x15ebce80, 0x70fb8ffc, 0xe1a36b2d, 0xf35e192b, 0x5cd662d4};
bn_uint_t mod_barret_128_a_1= {.number = mod_barret_128_a_1_tab, .length = 8};
//variable 'mod_barret_128_res_1' value: 0x439df4bea9c48307c27dd9cbd199f853
uint32_t mod_barret_128_res_1_tab [4] = {0xd199f853, 0xc27dd9cb, 0xa9c48307, 0x439df4be};
bn_uint_t mod_barret_128_res_1= {.number = mod_barret_128_res_1_tab, .length = 4};
//variable 'mod_barret_128_a_2' value: 0x7b009a0d6b10ba8dec80534803e7e3d025f9d9454d3fcdfe0373cffadca5da66
uint32_t mod_barret_128_a_2_tab [8] = {0xdca5da66, 0x0373cffa, 0x4d3fcdfe, 0x25f9d945, 0x03e7e3d0, 0xec805348, 0x6b10ba8d, 0x7b009a0d};
bn_uint_t mod_barret_128_a_2= {.number = mod_barret_128_a_2_tab, .length = 8};
//variable 'mod_barret_128_res_2' value: 0x635afd69ae51bca8b21800983dd61f71
uint32_t mod_barret_128_res_2_tab [4] = {0x3dd61f71, 0xb2180098, 0xae51bca8, 0x635afd69};
bn_uint_t mod_barret_128_res_2= {.number = mod_barret_128_res_2_tab, .length = 4};
//variable 'mod_barret_128_a_3' value: 0x5c64df1a4d8c031bd310d158ff7300efc3532feb520f35874820d6136e8e6679
uint32_t mod_barret_128_a_3_tab [8] = {0x6e8e6679, 0x4820d613, 0x520f3587, 0xc3532feb, 0xff7300ef, 0xd310d158, 0x4d8c031b, 0x5c64df1a};
bn_uint_t mod_barret_128_a_3= {.number = mod_barret_128_a_3_tab, .length = 8};
//variable 'mod_barret_128_res_3' value: 0x9d8f60d85864f6d927dd2a102d7a0f62
uint32_t mod_barret_128_res_3_tab [4] = {0x2d7a0f62, 0x27dd2a10, 0x5864f6d9, 0x9d8f60d8};
bn_uint_t mod_barret_128_res_3= {.number = mod_barret_128_res_3_tab, .length = 4};
//variable 'mod_barret_128_a_4' value: 0x91f847db3adbcb8a5a6d792bd77656593c664b40c48444381d829d718f53606b
uint32_t mod_barret_128_a_4_tab [8] = {0x8f53606b, 0x1d829d71, 0xc4844438, 0x3c664b40, 0xd7765659, 0x5a6d792b, 0x3adbcb8a, 0x91f847db};
bn_uint_t mod_barret_128_a_4= {.number = mod_barret_128_a_4_tab, .length = 8};
//variable 'mod_barret_128_res_4' value: 0xdd63fe9723509f7b3588cd2396d61628
uint32_t mod_barret_128_res_4_tab [4] = {0x96d61628, 0x3588cd23, 0x23509f7b, 0xdd63fe97};
bn_uint_t mod_barret_128_res_4= {.number = mod_barret_128_res_4_tab, .length = 4};
//variable 'mod_barret_128_a_5' value: 0x42f48e344c4c0e00ccf05e6ae9a1643612d82e3fb30c73009cdb0d4ca58fbb04
uint32_t mod_barret_128_a_5_tab [8] = {0xa58fbb04, 0x9cdb0d4c, 0xb30c7300, 0x12d82e3f, 0xe9a16436, 0xccf05e6a, 0x4c4c0e00, 0x42f48e34};
bn_uint_t mod_barret_128_a_5= {.number = mod_barret_128_a_5_tab, .length = 8};
//variable 'mod_barret_128_res_5' value: 0xee7a51de85419d6b0e35c08c71e685b9
uint32_t mod_barret_128_res_5_tab [4] = {0x71e685b9, 0x0e35c08c, 0x85419d6b, 0xee7a51de};
bn_uint_t mod_barret_128_res_5= {.number = mod_barret_128_res_5_tab, .length = 4};
//variable 'mod_barret_128_a_6' value: 0x13aa66de4203f39d449187e3d0c86c6f5ec11aeb57fd2e34844c10b4f90b5a5e
uint32_t mod_barret_128_a_6_tab [8] = {0xf90b5a5e, 0x844c10b4, 0x57fd2e34, 0x5ec11aeb, 0xd0c86c6f, 0x449187e3, 0x4203f39d, 0x13aa66de};
bn_uint_t mod_barret_128_a_6= {.number = mod_barret_128_a_6_tab, .length = 8};
//variable 'mod_barret_128_res_6' value: 0x71088507c155ef8e9b8f1b4cf859dbfd
uint32_t mod_barret_128_res_6_tab [4] = {0xf859dbfd, 0x9b8f1b4c, 0xc155ef8e, 0x71088507};
bn_uint_t mod_barret_128_res_6= {.number = mod_barret_128_res_6_tab, .length = 4};
//variable 'mod_barret_128_a_7' value: 0x53a8f60885d02ebf655e12a54598018d2e30e100b3a4031a80df242be34eb5ce
uint32_t mod_barret_128_a_7_tab [8] = {0xe34eb5ce, 0x80df242b, 0xb3a4031a, 0x2e30e100, 0x4598018d, 0x655e12a5, 0x85d02ebf, 0x53a8f608};
bn_uint_t mod_barret_128_a_7= {.number = mod_barret_128_a_7_tab, .length = 8};
//variable 'mod_barret_128_res_7' value: 0xb92fb47e0c61dec40816c74a82b47ed
uint32_t mod_barret_128_res_7_tab [4] = {0xa82b47ed, 0x40816c74, 0xe0c61dec, 0xb92fb47};
bn_uint_t mod_barret_128_res_7= {.number = mod_barret_128_res_7_tab, .length = 4};
//variable 'mod_barret_128_a_8' value: 0xa2eaa3187e1b1121c6cfaada30b4970fd47951a911c07e10110307ff17c92b6e
uint32_t mod_barret_128_a_8_tab [8] = {0x17c92b6e, 0x110307ff, 0x11c07e10, 0xd47951a9, 0x30b4970f, 0xc6cfaada, 0x7e1b1121, 0xa2eaa318};
bn_uint_t mod_barret_128_a_8= {.number = mod_barret_128_a_8_tab, .length = 8};
//variable 'mod_barret_128_res_8' value: 0x138e88f6d5b0d5655fb36183e5de7588
uint32_t mod_barret_128_res_8_tab [4] = {0xe5de7588, 0x5fb36183, 0xd5b0d565, 0x138e88f6};
bn_uint_t mod_barret_128_res_8= {.number = mod_barret_128_res_8_tab, .length = 4};
//variable 'mod_barret_128_a_9' value: 0xa054120f8333a81123655a3c88a8d532e484484d95ec399acd3ed4bbc7306457
uint32_t mod_barret_128_a_9_tab [8] = {0xc7306457, 0xcd3ed4bb, 0x95ec399a, 0xe484484d, 0x88a8d532, 0x23655a3c, 0x8333a811, 0xa054120f};
bn_uint_t mod_barret_128_a_9= {.number = mod_barret_128_a_9_tab, .length = 8};
//variable 'mod_barret_128_res_9' value: 0x429dcf4c59c805cd785bc75da6131ece
uint32_t mod_barret_128_res_9_tab [4] = {0xa6131ece, 0x785bc75d, 0x59c805cd, 0x429dcf4c};
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
//variable 'mul_mod_barret_128_a_0' value: 0x761dab3574ce0f20d4e75754f956534
uint32_t mul_mod_barret_128_a_0_tab [4] = {0x4f956534, 0x0d4e7575, 0x574ce0f2, 0x761dab3};
bn_uint_t mul_mod_barret_128_a_0= {.number = mul_mod_barret_128_a_0_tab, .length = 4};
//variable 'mul_mod_barret_128_b_0' value: 0xce6f326e513f7899150a6d5071225da7
uint32_t mul_mod_barret_128_b_0_tab [4] = {0x71225da7, 0x150a6d50, 0x513f7899, 0xce6f326e};
bn_uint_t mul_mod_barret_128_b_0= {.number = mul_mod_barret_128_b_0_tab, .length = 4};
//variable 'mul_mod_barret_128_res_0' value: 0x3b49f527ce135bb6e967145ca50cbdaf
uint32_t mul_mod_barret_128_res_0_tab [4] = {0xa50cbdaf, 0xe967145c, 0xce135bb6, 0x3b49f527};
bn_uint_t mul_mod_barret_128_res_0= {.number = mul_mod_barret_128_res_0_tab, .length = 4};
//variable 'mul_mod_barret_128_a_1' value: 0x313b658e57d32374ea924d326a5a88fc
uint32_t mul_mod_barret_128_a_1_tab [4] = {0x6a5a88fc, 0xea924d32, 0x57d32374, 0x313b658e};
bn_uint_t mul_mod_barret_128_a_1= {.number = mul_mod_barret_128_a_1_tab, .length = 4};
//variable 'mul_mod_barret_128_b_1' value: 0xc9a12555bc46e9a0bed376f62ca9275a
uint32_t mul_mod_barret_128_b_1_tab [4] = {0x2ca9275a, 0xbed376f6, 0xbc46e9a0, 0xc9a12555};
bn_uint_t mul_mod_barret_128_b_1= {.number = mul_mod_barret_128_b_1_tab, .length = 4};
//variable 'mul_mod_barret_128_res_1' value: 0xfb1c0f2fd49755d34f79ea5fe633b142
uint32_t mul_mod_barret_128_res_1_tab [4] = {0xe633b142, 0x4f79ea5f, 0xd49755d3, 0xfb1c0f2f};
bn_uint_t mul_mod_barret_128_res_1= {.number = mul_mod_barret_128_res_1_tab, .length = 4};
//variable 'mul_mod_barret_128_a_2' value: 0xca5e158aa6b2ead19a38b397bd16c4fd
uint32_t mul_mod_barret_128_a_2_tab [4] = {0xbd16c4fd, 0x9a38b397, 0xa6b2ead1, 0xca5e158a};
bn_uint_t mul_mod_barret_128_a_2= {.number = mul_mod_barret_128_a_2_tab, .length = 4};
//variable 'mul_mod_barret_128_b_2' value: 0x58bdfc46eb5c0c8e57c09398f4acdcc7
uint32_t mul_mod_barret_128_b_2_tab [4] = {0xf4acdcc7, 0x57c09398, 0xeb5c0c8e, 0x58bdfc46};
bn_uint_t mul_mod_barret_128_b_2= {.number = mul_mod_barret_128_b_2_tab, .length = 4};
//variable 'mul_mod_barret_128_res_2' value: 0x7383f63e0e49e5ae9d1eef67ef047238
uint32_t mul_mod_barret_128_res_2_tab [4] = {0xef047238, 0x9d1eef67, 0x0e49e5ae, 0x7383f63e};
bn_uint_t mul_mod_barret_128_res_2= {.number = mul_mod_barret_128_res_2_tab, .length = 4};
//variable 'mul_mod_barret_128_a_3' value: 0x8888e08fd20ec3126d33dbacfe7798b3
uint32_t mul_mod_barret_128_a_3_tab [4] = {0xfe7798b3, 0x6d33dbac, 0xd20ec312, 0x8888e08f};
bn_uint_t mul_mod_barret_128_a_3= {.number = mul_mod_barret_128_a_3_tab, .length = 4};
//variable 'mul_mod_barret_128_b_3' value: 0x3e7c3dd2566d0537ce90f467bf3d75f2
uint32_t mul_mod_barret_128_b_3_tab [4] = {0xbf3d75f2, 0xce90f467, 0x566d0537, 0x3e7c3dd2};
bn_uint_t mul_mod_barret_128_b_3= {.number = mul_mod_barret_128_b_3_tab, .length = 4};
//variable 'mul_mod_barret_128_res_3' value: 0xc06d3c3a80423d931eb8eb16d419ebac
uint32_t mul_mod_barret_128_res_3_tab [4] = {0xd419ebac, 0x1eb8eb16, 0x80423d93, 0xc06d3c3a};
bn_uint_t mul_mod_barret_128_res_3= {.number = mul_mod_barret_128_res_3_tab, .length = 4};
//variable 'mul_mod_barret_128_a_4' value: 0xf60fa635ff1ffd54d2683623c1ae709
uint32_t mul_mod_barret_128_a_4_tab [4] = {0x3c1ae709, 0x4d268362, 0x5ff1ffd5, 0xf60fa63};
bn_uint_t mul_mod_barret_128_a_4= {.number = mul_mod_barret_128_a_4_tab, .length = 4};
//variable 'mul_mod_barret_128_b_4' value: 0x1d3962378a2542d441f504c5ca53e3c
uint32_t mul_mod_barret_128_b_4_tab [4] = {0x5ca53e3c, 0x441f504c, 0x78a2542d, 0x1d39623};
bn_uint_t mul_mod_barret_128_b_4= {.number = mul_mod_barret_128_b_4_tab, .length = 4};
//variable 'mul_mod_barret_128_res_4' value: 0x51f93f051e2fc0c9a0ba412a86a41eaa
uint32_t mul_mod_barret_128_res_4_tab [4] = {0x86a41eaa, 0xa0ba412a, 0x1e2fc0c9, 0x51f93f05};
bn_uint_t mul_mod_barret_128_res_4= {.number = mul_mod_barret_128_res_4_tab, .length = 4};
//variable 'mul_mod_barret_128_a_5' value: 0x8d7625afb75520871bc4d8b95e13bd7c
uint32_t mul_mod_barret_128_a_5_tab [4] = {0x5e13bd7c, 0x1bc4d8b9, 0xb7552087, 0x8d7625af};
bn_uint_t mul_mod_barret_128_a_5= {.number = mul_mod_barret_128_a_5_tab, .length = 4};
//variable 'mul_mod_barret_128_b_5' value: 0x4bb0a43b821f1887dee7bb9389242b6e
uint32_t mul_mod_barret_128_b_5_tab [4] = {0x89242b6e, 0xdee7bb93, 0x821f1887, 0x4bb0a43b};
bn_uint_t mul_mod_barret_128_b_5= {.number = mul_mod_barret_128_b_5_tab, .length = 4};
//variable 'mul_mod_barret_128_res_5' value: 0xfd845f91a8b9301ae1c940497d8ca39f
uint32_t mul_mod_barret_128_res_5_tab [4] = {0x7d8ca39f, 0xe1c94049, 0xa8b9301a, 0xfd845f91};
bn_uint_t mul_mod_barret_128_res_5= {.number = mul_mod_barret_128_res_5_tab, .length = 4};
//variable 'mul_mod_barret_128_a_6' value: 0xdce581ab2c6d1aad215bdbcf9aca605b
uint32_t mul_mod_barret_128_a_6_tab [4] = {0x9aca605b, 0x215bdbcf, 0x2c6d1aad, 0xdce581ab};
bn_uint_t mul_mod_barret_128_a_6= {.number = mul_mod_barret_128_a_6_tab, .length = 4};
//variable 'mul_mod_barret_128_b_6' value: 0x4debf8b8489606fadce8b514e076d5bf
uint32_t mul_mod_barret_128_b_6_tab [4] = {0xe076d5bf, 0xdce8b514, 0x489606fa, 0x4debf8b8};
bn_uint_t mul_mod_barret_128_b_6= {.number = mul_mod_barret_128_b_6_tab, .length = 4};
//variable 'mul_mod_barret_128_res_6' value: 0xa072a33539bb0126ee1d6583211a6fd7
uint32_t mul_mod_barret_128_res_6_tab [4] = {0x211a6fd7, 0xee1d6583, 0x39bb0126, 0xa072a335};
bn_uint_t mul_mod_barret_128_res_6= {.number = mul_mod_barret_128_res_6_tab, .length = 4};
//variable 'mul_mod_barret_128_a_7' value: 0x1561a156561fd4a322a59968a08f5488
uint32_t mul_mod_barret_128_a_7_tab [4] = {0xa08f5488, 0x22a59968, 0x561fd4a3, 0x1561a156};
bn_uint_t mul_mod_barret_128_a_7= {.number = mul_mod_barret_128_a_7_tab, .length = 4};
//variable 'mul_mod_barret_128_b_7' value: 0x38e0a346bc8fed6b4cbaa0f7a3205a06
uint32_t mul_mod_barret_128_b_7_tab [4] = {0xa3205a06, 0x4cbaa0f7, 0xbc8fed6b, 0x38e0a346};
bn_uint_t mul_mod_barret_128_b_7= {.number = mul_mod_barret_128_b_7_tab, .length = 4};
//variable 'mul_mod_barret_128_res_7' value: 0x675fc6392b7c5320dfa3f8c0778dfdfa
uint32_t mul_mod_barret_128_res_7_tab [4] = {0x778dfdfa, 0xdfa3f8c0, 0x2b7c5320, 0x675fc639};
bn_uint_t mul_mod_barret_128_res_7= {.number = mul_mod_barret_128_res_7_tab, .length = 4};
//variable 'mul_mod_barret_128_a_8' value: 0x502e8e0d6ad0fc556cb972a74a1b5b4b
uint32_t mul_mod_barret_128_a_8_tab [4] = {0x4a1b5b4b, 0x6cb972a7, 0x6ad0fc55, 0x502e8e0d};
bn_uint_t mul_mod_barret_128_a_8= {.number = mul_mod_barret_128_a_8_tab, .length = 4};
//variable 'mul_mod_barret_128_b_8' value: 0xd1558b4b3a9ca0330e83a8448dc82753
uint32_t mul_mod_barret_128_b_8_tab [4] = {0x8dc82753, 0x0e83a844, 0x3a9ca033, 0xd1558b4b};
bn_uint_t mul_mod_barret_128_b_8= {.number = mul_mod_barret_128_b_8_tab, .length = 4};
//variable 'mul_mod_barret_128_res_8' value: 0x7ba672c3031bd17798d730f155187a24
uint32_t mul_mod_barret_128_res_8_tab [4] = {0x55187a24, 0x98d730f1, 0x031bd177, 0x7ba672c3};
bn_uint_t mul_mod_barret_128_res_8= {.number = mul_mod_barret_128_res_8_tab, .length = 4};
//variable 'mul_mod_barret_128_a_9' value: 0x51ebfcfc0c7d6f78c43472c3318d6516
uint32_t mul_mod_barret_128_a_9_tab [4] = {0x318d6516, 0xc43472c3, 0x0c7d6f78, 0x51ebfcfc};
bn_uint_t mul_mod_barret_128_a_9= {.number = mul_mod_barret_128_a_9_tab, .length = 4};
//variable 'mul_mod_barret_128_b_9' value: 0x39d728e69ab8cc2e8318165cf647d2ed
uint32_t mul_mod_barret_128_b_9_tab [4] = {0xf647d2ed, 0x8318165c, 0x9ab8cc2e, 0x39d728e6};
bn_uint_t mul_mod_barret_128_b_9= {.number = mul_mod_barret_128_b_9_tab, .length = 4};
//variable 'mul_mod_barret_128_res_9' value: 0xdc063c59f448c6da47f2db6e18652ea8
uint32_t mul_mod_barret_128_res_9_tab [4] = {0x18652ea8, 0x47f2db6e, 0xf448c6da, 0xdc063c59};
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
//variable 'mod_barret_256_a_0' value: 0xa6ae48666b4a9c578ed63035b3964e107e857f85b8ba7a7e7e97e4b9b16d127d34faa86c2da514532d9f333d0ce4d5a042884367874f4a9983d5d6288481a6e2
uint32_t mod_barret_256_a_0_tab [16] = {0x8481a6e2, 0x83d5d628, 0x874f4a99, 0x42884367, 0x0ce4d5a0, 0x2d9f333d, 0x2da51453, 0x34faa86c, 0xb16d127d, 0x7e97e4b9, 0xb8ba7a7e, 0x7e857f85, 0xb3964e10, 0x8ed63035, 0x6b4a9c57, 0xa6ae4866};
bn_uint_t mod_barret_256_a_0= {.number = mod_barret_256_a_0_tab, .length = 16};
//variable 'mod_barret_256_res_0' value: 0x60c61bd51bb2b324914f1ab9c5b60f4b5ee2cf2a1dc02fa966c2d25c884a03f7
uint32_t mod_barret_256_res_0_tab [8] = {0x884a03f7, 0x66c2d25c, 0x1dc02fa9, 0x5ee2cf2a, 0xc5b60f4b, 0x914f1ab9, 0x1bb2b324, 0x60c61bd5};
bn_uint_t mod_barret_256_res_0= {.number = mod_barret_256_res_0_tab, .length = 8};
//variable 'mod_barret_256_a_1' value: 0x9dcb52d5832412ebd955d3cd2c1afc143fdc4fdc7317208256c0911be7f982a3e84668ae627b3f9491f41eacc3f115deba35c3d76780cb68a60ec2badcfeeffa
uint32_t mod_barret_256_a_1_tab [16] = {0xdcfeeffa, 0xa60ec2ba, 0x6780cb68, 0xba35c3d7, 0xc3f115de, 0x91f41eac, 0x627b3f94, 0xe84668ae, 0xe7f982a3, 0x56c0911b, 0x73172082, 0x3fdc4fdc, 0x2c1afc14, 0xd955d3cd, 0x832412eb, 0x9dcb52d5};
bn_uint_t mod_barret_256_a_1= {.number = mod_barret_256_a_1_tab, .length = 16};
//variable 'mod_barret_256_res_1' value: 0xf13da394c219de1035bfce95881f16ee8ef4c8ef202f023849863eb65347d111
uint32_t mod_barret_256_res_1_tab [8] = {0x5347d111, 0x49863eb6, 0x202f0238, 0x8ef4c8ef, 0x881f16ee, 0x35bfce95, 0xc219de10, 0xf13da394};
bn_uint_t mod_barret_256_res_1= {.number = mod_barret_256_res_1_tab, .length = 8};
//variable 'mod_barret_256_a_2' value: 0x33d717e989b6b047cb80e152623dbced0b388aee265d530dbe4b002dbd08b5bce0b0346aa3ca600f17d203b838bb81ab87ac5916d78e08322fa38dea5f3fe426
uint32_t mod_barret_256_a_2_tab [16] = {0x5f3fe426, 0x2fa38dea, 0xd78e0832, 0x87ac5916, 0x38bb81ab, 0x17d203b8, 0xa3ca600f, 0xe0b0346a, 0xbd08b5bc, 0xbe4b002d, 0x265d530d, 0x0b388aee, 0x623dbced, 0xcb80e152, 0x89b6b047, 0x33d717e9};
bn_uint_t mod_barret_256_a_2= {.number = mod_barret_256_a_2_tab, .length = 16};
//variable 'mod_barret_256_res_2' value: 0xd9e9b5a8f8c9cc21c48260da39471b367eeefc4b80153caa28ff7ab517e5c09b
uint32_t mod_barret_256_res_2_tab [8] = {0x17e5c09b, 0x28ff7ab5, 0x80153caa, 0x7eeefc4b, 0x39471b36, 0xc48260da, 0xf8c9cc21, 0xd9e9b5a8};
bn_uint_t mod_barret_256_res_2= {.number = mod_barret_256_res_2_tab, .length = 8};
//variable 'mod_barret_256_a_3' value: 0xac7a5a5503699bb6950280600086d10bebb7b93a8b6645c3702eae862a53947d1c656a8e0e4d65fb99b7741f0e1804b0b6160d04946578d6109aa4f51c992f10
uint32_t mod_barret_256_a_3_tab [16] = {0x1c992f10, 0x109aa4f5, 0x946578d6, 0xb6160d04, 0x0e1804b0, 0x99b7741f, 0x0e4d65fb, 0x1c656a8e, 0x2a53947d, 0x702eae86, 0x8b6645c3, 0xebb7b93a, 0x0086d10b, 0x95028060, 0x03699bb6, 0xac7a5a55};
bn_uint_t mod_barret_256_a_3= {.number = mod_barret_256_a_3_tab, .length = 16};
//variable 'mod_barret_256_res_3' value: 0x3f80bda36bff2b24ffec07a340ff4ef4dc990496c69d0167c6c251c73270cbb8
uint32_t mod_barret_256_res_3_tab [8] = {0x3270cbb8, 0xc6c251c7, 0xc69d0167, 0xdc990496, 0x40ff4ef4, 0xffec07a3, 0x6bff2b24, 0x3f80bda3};
bn_uint_t mod_barret_256_res_3= {.number = mod_barret_256_res_3_tab, .length = 8};
//variable 'mod_barret_256_a_4' value: 0xb8b2ad3da8a65ec3a45c11480f59fda0574496d2baad3fcb6e9624a12bd817cd4fb5fb53133cb457fa6c6b555353e88c4764ec69b00f1ba82dd80e6dca0baa4a
uint32_t mod_barret_256_a_4_tab [16] = {0xca0baa4a, 0x2dd80e6d, 0xb00f1ba8, 0x4764ec69, 0x5353e88c, 0xfa6c6b55, 0x133cb457, 0x4fb5fb53, 0x2bd817cd, 0x6e9624a1, 0xbaad3fcb, 0x574496d2, 0x0f59fda0, 0xa45c1148, 0xa8a65ec3, 0xb8b2ad3d};
bn_uint_t mod_barret_256_a_4= {.number = mod_barret_256_a_4_tab, .length = 16};
//variable 'mod_barret_256_res_4' value: 0xdffe35558882fff73b32220c3a2300b365dd3ce9bc4bd4fc420c57f0b0d8e23b
uint32_t mod_barret_256_res_4_tab [8] = {0xb0d8e23b, 0x420c57f0, 0xbc4bd4fc, 0x65dd3ce9, 0x3a2300b3, 0x3b32220c, 0x8882fff7, 0xdffe3555};
bn_uint_t mod_barret_256_res_4= {.number = mod_barret_256_res_4_tab, .length = 8};
//variable 'mod_barret_256_a_5' value: 0x2ee2046081638983f017d8654bfbd416ffa1011a64e44c50f9faef38ed982adc39cf2a608100646bed0dbc24c4fdd312d5d21e0a46782052a69d6a0cfee6929a
uint32_t mod_barret_256_a_5_tab [16] = {0xfee6929a, 0xa69d6a0c, 0x46782052, 0xd5d21e0a, 0xc4fdd312, 0xed0dbc24, 0x8100646b, 0x39cf2a60, 0xed982adc, 0xf9faef38, 0x64e44c50, 0xffa1011a, 0x4bfbd416, 0xf017d865, 0x81638983, 0x2ee20460};
bn_uint_t mod_barret_256_a_5= {.number = mod_barret_256_a_5_tab, .length = 16};
//variable 'mod_barret_256_res_5' value: 0x137468776b73c8089a6136ec5fa97a0546ae825c0aa0077419236b3629617595
uint32_t mod_barret_256_res_5_tab [8] = {0x29617595, 0x19236b36, 0x0aa00774, 0x46ae825c, 0x5fa97a05, 0x9a6136ec, 0x6b73c808, 0x13746877};
bn_uint_t mod_barret_256_res_5= {.number = mod_barret_256_res_5_tab, .length = 8};
//variable 'mod_barret_256_a_6' value: 0xb42eaf95187849ae2dc68d377ca99e05529b4df787111915cbcd4906a277b27fef23d975ad270e3d260590d3cbe9808fa62084d469b8ff720615db9c4e62806c
uint32_t mod_barret_256_a_6_tab [16] = {0x4e62806c, 0x0615db9c, 0x69b8ff72, 0xa62084d4, 0xcbe9808f, 0x260590d3, 0xad270e3d, 0xef23d975, 0xa277b27f, 0xcbcd4906, 0x87111915, 0x529b4df7, 0x7ca99e05, 0x2dc68d37, 0x187849ae, 0xb42eaf95};
bn_uint_t mod_barret_256_a_6= {.number = mod_barret_256_a_6_tab, .length = 16};
//variable 'mod_barret_256_res_6' value: 0x2a0b086e1e6edc218d058726e663be9a4ffd3ee748f7e003e1dd1938a723b912
uint32_t mod_barret_256_res_6_tab [8] = {0xa723b912, 0xe1dd1938, 0x48f7e003, 0x4ffd3ee7, 0xe663be9a, 0x8d058726, 0x1e6edc21, 0x2a0b086e};
bn_uint_t mod_barret_256_res_6= {.number = mod_barret_256_res_6_tab, .length = 8};
//variable 'mod_barret_256_a_7' value: 0xbced709106242fefc94dec6d517dd504bc6c2bf2ecd435ca94744b9237784c6bd570cf91491269cb2cc3d44fd170596a5020c12403e6105cdf4c7c192aea6e5f
uint32_t mod_barret_256_a_7_tab [16] = {0x2aea6e5f, 0xdf4c7c19, 0x03e6105c, 0x5020c124, 0xd170596a, 0x2cc3d44f, 0x491269cb, 0xd570cf91, 0x37784c6b, 0x94744b92, 0xecd435ca, 0xbc6c2bf2, 0x517dd504, 0xc94dec6d, 0x06242fef, 0xbced7091};
bn_uint_t mod_barret_256_a_7= {.number = mod_barret_256_a_7_tab, .length = 16};
//variable 'mod_barret_256_res_7' value: 0x7fa54a83d2bb2f2adf551bdd8be38ae0ac68a6ef20c6e52b82b79b83197ae90a
uint32_t mod_barret_256_res_7_tab [8] = {0x197ae90a, 0x82b79b83, 0x20c6e52b, 0xac68a6ef, 0x8be38ae0, 0xdf551bdd, 0xd2bb2f2a, 0x7fa54a83};
bn_uint_t mod_barret_256_res_7= {.number = mod_barret_256_res_7_tab, .length = 8};
//variable 'mod_barret_256_a_8' value: 0x49b5d417ebaf8c4f091092b0d866032b44835a06d76568482df46c43e1e3b544f9d1544391bdf04f8bb96b2c6abd4bb88255a63763bffe8a11ccf83d07c95383
uint32_t mod_barret_256_a_8_tab [16] = {0x07c95383, 0x11ccf83d, 0x63bffe8a, 0x8255a637, 0x6abd4bb8, 0x8bb96b2c, 0x91bdf04f, 0xf9d15443, 0xe1e3b544, 0x2df46c43, 0xd7656848, 0x44835a06, 0xd866032b, 0x091092b0, 0xebaf8c4f, 0x49b5d417};
bn_uint_t mod_barret_256_a_8= {.number = mod_barret_256_a_8_tab, .length = 16};
//variable 'mod_barret_256_res_8' value: 0xbb772da5e170ae94a306baf514002f336baafdab4132cdc1004ad68605f7f8da
uint32_t mod_barret_256_res_8_tab [8] = {0x05f7f8da, 0x004ad686, 0x4132cdc1, 0x6baafdab, 0x14002f33, 0xa306baf5, 0xe170ae94, 0xbb772da5};
bn_uint_t mod_barret_256_res_8= {.number = mod_barret_256_res_8_tab, .length = 8};
//variable 'mod_barret_256_a_9' value: 0xababafe559a6652ea78ba20be54dabd64088306d09ae00986635d18e3dd4ce2ea89d925e002a6b32b8092da72e906845213807a1d111d9fdca2f9a12ec4708b5
uint32_t mod_barret_256_a_9_tab [16] = {0xec4708b5, 0xca2f9a12, 0xd111d9fd, 0x213807a1, 0x2e906845, 0xb8092da7, 0x002a6b32, 0xa89d925e, 0x3dd4ce2e, 0x6635d18e, 0x09ae0098, 0x4088306d, 0xe54dabd6, 0xa78ba20b, 0x59a6652e, 0xababafe5};
bn_uint_t mod_barret_256_a_9= {.number = mod_barret_256_a_9_tab, .length = 16};
//variable 'mod_barret_256_res_9' value: 0x1265f15867f5fcd71be2bafc32059710c4b9128f6e6a53e2a7e809436949c4f6
uint32_t mod_barret_256_res_9_tab [8] = {0x6949c4f6, 0xa7e80943, 0x6e6a53e2, 0xc4b9128f, 0x32059710, 0x1be2bafc, 0x67f5fcd7, 0x1265f158};
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
//variable 'mul_mod_barret_256_a_0' value: 0x68510a98dee4f977e3e50a1ad4c460c22e00b6d29eeaf41d35e5e2772eb7dede
uint32_t mul_mod_barret_256_a_0_tab [8] = {0x2eb7dede, 0x35e5e277, 0x9eeaf41d, 0x2e00b6d2, 0xd4c460c2, 0xe3e50a1a, 0xdee4f977, 0x68510a98};
bn_uint_t mul_mod_barret_256_a_0= {.number = mul_mod_barret_256_a_0_tab, .length = 8};
//variable 'mul_mod_barret_256_b_0' value: 0xdac5dd269a4f854a1bb55ed2152cc1e5f61a3e1f66910a0cceb2a0beffef834e
uint32_t mul_mod_barret_256_b_0_tab [8] = {0xffef834e, 0xceb2a0be, 0x66910a0c, 0xf61a3e1f, 0x152cc1e5, 0x1bb55ed2, 0x9a4f854a, 0xdac5dd26};
bn_uint_t mul_mod_barret_256_b_0= {.number = mul_mod_barret_256_b_0_tab, .length = 8};
//variable 'mul_mod_barret_256_res_0' value: 0xf8f9fbf14f4eca8ed079060f710ac847fe19aefb05fa778b125509474a0a14e1
uint32_t mul_mod_barret_256_res_0_tab [8] = {0x4a0a14e1, 0x12550947, 0x05fa778b, 0xfe19aefb, 0x710ac847, 0xd079060f, 0x4f4eca8e, 0xf8f9fbf1};
bn_uint_t mul_mod_barret_256_res_0= {.number = mul_mod_barret_256_res_0_tab, .length = 8};
//variable 'mul_mod_barret_256_a_1' value: 0xf250dfae81cea961c429ac2837ef763f606011c7c2f68870ad0da2128ec129db
uint32_t mul_mod_barret_256_a_1_tab [8] = {0x8ec129db, 0xad0da212, 0xc2f68870, 0x606011c7, 0x37ef763f, 0xc429ac28, 0x81cea961, 0xf250dfae};
bn_uint_t mul_mod_barret_256_a_1= {.number = mul_mod_barret_256_a_1_tab, .length = 8};
//variable 'mul_mod_barret_256_b_1' value: 0x4ba41c87f55a25693910fc5d05ebaf23774e261991d579a11eca4040803d036a
uint32_t mul_mod_barret_256_b_1_tab [8] = {0x803d036a, 0x1eca4040, 0x91d579a1, 0x774e2619, 0x05ebaf23, 0x3910fc5d, 0xf55a2569, 0x4ba41c87};
bn_uint_t mul_mod_barret_256_b_1= {.number = mul_mod_barret_256_b_1_tab, .length = 8};
//variable 'mul_mod_barret_256_res_1' value: 0xe543eb2eb4f25661fdbbf7262cc33006e2cfa8eab8a18ad3ec0e9e7dc08ce648
uint32_t mul_mod_barret_256_res_1_tab [8] = {0xc08ce648, 0xec0e9e7d, 0xb8a18ad3, 0xe2cfa8ea, 0x2cc33006, 0xfdbbf726, 0xb4f25661, 0xe543eb2e};
bn_uint_t mul_mod_barret_256_res_1= {.number = mul_mod_barret_256_res_1_tab, .length = 8};
//variable 'mul_mod_barret_256_a_2' value: 0xa4467937a005f48d729e660c9ea1d25f0ef1b9139c9b1c91b7fe2e9ea3d57414
uint32_t mul_mod_barret_256_a_2_tab [8] = {0xa3d57414, 0xb7fe2e9e, 0x9c9b1c91, 0x0ef1b913, 0x9ea1d25f, 0x729e660c, 0xa005f48d, 0xa4467937};
bn_uint_t mul_mod_barret_256_a_2= {.number = mul_mod_barret_256_a_2_tab, .length = 8};
//variable 'mul_mod_barret_256_b_2' value: 0x20b9119d3b5aa46e6f8ac0ccf5337956670dade5ed4974fca59985c27500f22d
uint32_t mul_mod_barret_256_b_2_tab [8] = {0x7500f22d, 0xa59985c2, 0xed4974fc, 0x670dade5, 0xf5337956, 0x6f8ac0cc, 0x3b5aa46e, 0x20b9119d};
bn_uint_t mul_mod_barret_256_b_2= {.number = mul_mod_barret_256_b_2_tab, .length = 8};
//variable 'mul_mod_barret_256_res_2' value: 0xacf3a2edf32030d6575d921de85214eb9f4cdde1316c1c2baccd9bea4bcb8851
uint32_t mul_mod_barret_256_res_2_tab [8] = {0x4bcb8851, 0xaccd9bea, 0x316c1c2b, 0x9f4cdde1, 0xe85214eb, 0x575d921d, 0xf32030d6, 0xacf3a2ed};
bn_uint_t mul_mod_barret_256_res_2= {.number = mul_mod_barret_256_res_2_tab, .length = 8};
//variable 'mul_mod_barret_256_a_3' value: 0xa2207c67d6faf97d2ca1bbbaf5aafd9a170f3dcbb125f485c51ac2a772860ad5
uint32_t mul_mod_barret_256_a_3_tab [8] = {0x72860ad5, 0xc51ac2a7, 0xb125f485, 0x170f3dcb, 0xf5aafd9a, 0x2ca1bbba, 0xd6faf97d, 0xa2207c67};
bn_uint_t mul_mod_barret_256_a_3= {.number = mul_mod_barret_256_a_3_tab, .length = 8};
//variable 'mul_mod_barret_256_b_3' value: 0x832a773a727e92c31be5b3ce2804df166dc709dcc731de211271a3f051c282a8
uint32_t mul_mod_barret_256_b_3_tab [8] = {0x51c282a8, 0x1271a3f0, 0xc731de21, 0x6dc709dc, 0x2804df16, 0x1be5b3ce, 0x727e92c3, 0x832a773a};
bn_uint_t mul_mod_barret_256_b_3= {.number = mul_mod_barret_256_b_3_tab, .length = 8};
//variable 'mul_mod_barret_256_res_3' value: 0x166d2bb92cf4e2fbdfb690b1172eeb5e43b67e6f49b4daac8c6e218c4e6fc60c
uint32_t mul_mod_barret_256_res_3_tab [8] = {0x4e6fc60c, 0x8c6e218c, 0x49b4daac, 0x43b67e6f, 0x172eeb5e, 0xdfb690b1, 0x2cf4e2fb, 0x166d2bb9};
bn_uint_t mul_mod_barret_256_res_3= {.number = mul_mod_barret_256_res_3_tab, .length = 8};
//variable 'mul_mod_barret_256_a_4' value: 0x6d43dec335c067ae0751f2079b38385a331cdf58631c517b62e7abefe2ed164b
uint32_t mul_mod_barret_256_a_4_tab [8] = {0xe2ed164b, 0x62e7abef, 0x631c517b, 0x331cdf58, 0x9b38385a, 0x0751f207, 0x35c067ae, 0x6d43dec3};
bn_uint_t mul_mod_barret_256_a_4= {.number = mul_mod_barret_256_a_4_tab, .length = 8};
//variable 'mul_mod_barret_256_b_4' value: 0xd3c0ad55652744308df07555f22055e9c5b4e4c129e20ed1a094905b03ee29d4
uint32_t mul_mod_barret_256_b_4_tab [8] = {0x03ee29d4, 0xa094905b, 0x29e20ed1, 0xc5b4e4c1, 0xf22055e9, 0x8df07555, 0x65274430, 0xd3c0ad55};
bn_uint_t mul_mod_barret_256_b_4= {.number = mul_mod_barret_256_b_4_tab, .length = 8};
//variable 'mul_mod_barret_256_res_4' value: 0x3944845cf328eb33b5945195c48973f7db0e150bd9ae0dccaaf3ef513f62aebc
uint32_t mul_mod_barret_256_res_4_tab [8] = {0x3f62aebc, 0xaaf3ef51, 0xd9ae0dcc, 0xdb0e150b, 0xc48973f7, 0xb5945195, 0xf328eb33, 0x3944845c};
bn_uint_t mul_mod_barret_256_res_4= {.number = mul_mod_barret_256_res_4_tab, .length = 8};
//variable 'mul_mod_barret_256_a_5' value: 0x6787b059fd4835325cb6afd415c3c9d0b132534c73d1d90e03e29d51938dfb3d
uint32_t mul_mod_barret_256_a_5_tab [8] = {0x938dfb3d, 0x03e29d51, 0x73d1d90e, 0xb132534c, 0x15c3c9d0, 0x5cb6afd4, 0xfd483532, 0x6787b059};
bn_uint_t mul_mod_barret_256_a_5= {.number = mul_mod_barret_256_a_5_tab, .length = 8};
//variable 'mul_mod_barret_256_b_5' value: 0x1ebb9275f11dfbcde3179f55a5a27389c25ef5c7fb1662560017c77dcb0d3013
uint32_t mul_mod_barret_256_b_5_tab [8] = {0xcb0d3013, 0x0017c77d, 0xfb166256, 0xc25ef5c7, 0xa5a27389, 0xe3179f55, 0xf11dfbcd, 0x1ebb9275};
bn_uint_t mul_mod_barret_256_b_5= {.number = mul_mod_barret_256_b_5_tab, .length = 8};
//variable 'mul_mod_barret_256_res_5' value: 0xad9f2d204e1964524befc3b2193bd21103ba14ec920caa56ce9a0b47f5abe351
uint32_t mul_mod_barret_256_res_5_tab [8] = {0xf5abe351, 0xce9a0b47, 0x920caa56, 0x03ba14ec, 0x193bd211, 0x4befc3b2, 0x4e196452, 0xad9f2d20};
bn_uint_t mul_mod_barret_256_res_5= {.number = mul_mod_barret_256_res_5_tab, .length = 8};
//variable 'mul_mod_barret_256_a_6' value: 0xcf151944116dc1d8c566206bdf04e8fcd96eec5849d385fb2b1fc2ec9a2c7ed1
uint32_t mul_mod_barret_256_a_6_tab [8] = {0x9a2c7ed1, 0x2b1fc2ec, 0x49d385fb, 0xd96eec58, 0xdf04e8fc, 0xc566206b, 0x116dc1d8, 0xcf151944};
bn_uint_t mul_mod_barret_256_a_6= {.number = mul_mod_barret_256_a_6_tab, .length = 8};
//variable 'mul_mod_barret_256_b_6' value: 0x17d3dd412df44fd972332044a3fb5b822f2144403bdf75b6cdf3717d4e25460b
uint32_t mul_mod_barret_256_b_6_tab [8] = {0x4e25460b, 0xcdf3717d, 0x3bdf75b6, 0x2f214440, 0xa3fb5b82, 0x72332044, 0x2df44fd9, 0x17d3dd41};
bn_uint_t mul_mod_barret_256_b_6= {.number = mul_mod_barret_256_b_6_tab, .length = 8};
//variable 'mul_mod_barret_256_res_6' value: 0xcf9cc436bfe9e1a11bf67dca2487fbdc3f2dca7cb0abcfdbb513d5e61733966a
uint32_t mul_mod_barret_256_res_6_tab [8] = {0x1733966a, 0xb513d5e6, 0xb0abcfdb, 0x3f2dca7c, 0x2487fbdc, 0x1bf67dca, 0xbfe9e1a1, 0xcf9cc436};
bn_uint_t mul_mod_barret_256_res_6= {.number = mul_mod_barret_256_res_6_tab, .length = 8};
//variable 'mul_mod_barret_256_a_7' value: 0xc4b5dd5a3d1fde9c4b97f8c377396dab46de88a0a6e1a0ce5171d882e3e73fbd
uint32_t mul_mod_barret_256_a_7_tab [8] = {0xe3e73fbd, 0x5171d882, 0xa6e1a0ce, 0x46de88a0, 0x77396dab, 0x4b97f8c3, 0x3d1fde9c, 0xc4b5dd5a};
bn_uint_t mul_mod_barret_256_a_7= {.number = mul_mod_barret_256_a_7_tab, .length = 8};
//variable 'mul_mod_barret_256_b_7' value: 0x54b9e745ca9377da5ff4802aa7cae855dcf4ed2f6c80263a4d4e67fb1baff713
uint32_t mul_mod_barret_256_b_7_tab [8] = {0x1baff713, 0x4d4e67fb, 0x6c80263a, 0xdcf4ed2f, 0xa7cae855, 0x5ff4802a, 0xca9377da, 0x54b9e745};
bn_uint_t mul_mod_barret_256_b_7= {.number = mul_mod_barret_256_b_7_tab, .length = 8};
//variable 'mul_mod_barret_256_res_7' value: 0x8353b27cceb98af94209aff873a977b5605cf088b0dc62c58475532e76967cb
uint32_t mul_mod_barret_256_res_7_tab [8] = {0xe76967cb, 0x58475532, 0x8b0dc62c, 0x5605cf08, 0x873a977b, 0x94209aff, 0xcceb98af, 0x8353b27};
bn_uint_t mul_mod_barret_256_res_7= {.number = mul_mod_barret_256_res_7_tab, .length = 8};
//variable 'mul_mod_barret_256_a_8' value: 0x531d2cf239eedd8e1c9a4403a907c0b6b494cfc707907ade2e31c5c708354be7
uint32_t mul_mod_barret_256_a_8_tab [8] = {0x08354be7, 0x2e31c5c7, 0x07907ade, 0xb494cfc7, 0xa907c0b6, 0x1c9a4403, 0x39eedd8e, 0x531d2cf2};
bn_uint_t mul_mod_barret_256_a_8= {.number = mul_mod_barret_256_a_8_tab, .length = 8};
//variable 'mul_mod_barret_256_b_8' value: 0x799d119f2041be739945a3546f2a6faf444654d721a4b4413dbc109fd6465dc9
uint32_t mul_mod_barret_256_b_8_tab [8] = {0xd6465dc9, 0x3dbc109f, 0x21a4b441, 0x444654d7, 0x6f2a6faf, 0x9945a354, 0x2041be73, 0x799d119f};
bn_uint_t mul_mod_barret_256_b_8= {.number = mul_mod_barret_256_b_8_tab, .length = 8};
//variable 'mul_mod_barret_256_res_8' value: 0xa8aed7ab5da30d9d37f3d53633fa90372958e71fbd4c776bc64e0df2ac33366b
uint32_t mul_mod_barret_256_res_8_tab [8] = {0xac33366b, 0xc64e0df2, 0xbd4c776b, 0x2958e71f, 0x33fa9037, 0x37f3d536, 0x5da30d9d, 0xa8aed7ab};
bn_uint_t mul_mod_barret_256_res_8= {.number = mul_mod_barret_256_res_8_tab, .length = 8};
//variable 'mul_mod_barret_256_a_9' value: 0x74766dd91e3aaf3929dc76f4160817716dd52b472d7517fa3c581ebac09e30d5
uint32_t mul_mod_barret_256_a_9_tab [8] = {0xc09e30d5, 0x3c581eba, 0x2d7517fa, 0x6dd52b47, 0x16081771, 0x29dc76f4, 0x1e3aaf39, 0x74766dd9};
bn_uint_t mul_mod_barret_256_a_9= {.number = mul_mod_barret_256_a_9_tab, .length = 8};
//variable 'mul_mod_barret_256_b_9' value: 0x3a172410b35fd9078233f36b960f1f601247b5e6f470ce1fedbf7a88ca6798ac
uint32_t mul_mod_barret_256_b_9_tab [8] = {0xca6798ac, 0xedbf7a88, 0xf470ce1f, 0x1247b5e6, 0x960f1f60, 0x8233f36b, 0xb35fd907, 0x3a172410};
bn_uint_t mul_mod_barret_256_b_9= {.number = mul_mod_barret_256_b_9_tab, .length = 8};
//variable 'mul_mod_barret_256_res_9' value: 0x37bf5ec946473309a9a19a18e7203d16eeb66e8803dc4d3d6c4bc1b109705aa5
uint32_t mul_mod_barret_256_res_9_tab [8] = {0x09705aa5, 0x6c4bc1b1, 0x03dc4d3d, 0xeeb66e88, 0xe7203d16, 0xa9a19a18, 0x46473309, 0x37bf5ec9};
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
