/*
File generate using external software
*/
#ifndef TEST_BIGNUM_VALUES_H_
#define TEST_BIGNUM_VALUES_H_
#include "bignum.h"

//variable 'add_128_a_0' value: 0x408523205faf9807c9b7ac33d05f19e5
uint32_t add_128_a_0_tab [4] = {0xd05f19e5, 0xc9b7ac33, 0x5faf9807, 0x40852320};
bn_uint_t add_128_a_0= {.number = add_128_a_0_tab, .length = 4};
//variable 'add_128_b_0' value: 0x1528ae5a277142c02a15d63633b2a37e
uint32_t add_128_b_0_tab [4] = {0x33b2a37e, 0x2a15d636, 0x277142c0, 0x1528ae5a};
bn_uint_t add_128_b_0= {.number = add_128_b_0_tab, .length = 4};
//variable 'add_128_res_0' value: 0x55add17a8720dac7f3cd826a0411bd63
uint32_t add_128_res_0_tab [4] = {0x0411bd63, 0xf3cd826a, 0x8720dac7, 0x55add17a};
bn_uint_t add_128_res_0= {.number = add_128_res_0_tab, .length = 4};
uint32_t add_128_tab_len=1;
bn_uint_t *add_128_test_tab[1][3]={
{&add_128_a_0,&add_128_b_0,&add_128_res_0},
};
//variable 'add_256_a_0' value: 0x9ca691157b7ff9c7aa9c19d50eceeab24460412a24a95f13e33f1c6ee1731bb0
uint32_t add_256_a_0_tab [8] = {0xe1731bb0, 0xe33f1c6e, 0x24a95f13, 0x4460412a, 0x0eceeab2, 0xaa9c19d5, 0x7b7ff9c7, 0x9ca69115};
bn_uint_t add_256_a_0= {.number = add_256_a_0_tab, .length = 8};
//variable 'add_256_b_0' value: 0xeecad1ca9239dba3080701bdb1103d1a5d5a52f19fdb6182b293238744b4088c
uint32_t add_256_b_0_tab [8] = {0x44b4088c, 0xb2932387, 0x9fdb6182, 0x5d5a52f1, 0xb1103d1a, 0x080701bd, 0x9239dba3, 0xeecad1ca};
bn_uint_t add_256_b_0= {.number = add_256_b_0_tab, .length = 8};
//variable 'add_256_res_0' value: 0x18b7162e00db9d56ab2a31b92bfdf27cca1ba941bc484c09695d23ff62627243c
uint32_t add_256_res_0_tab [9] = {0x2627243c, 0x95d23ff6, 0xc484c096, 0xa1ba941b, 0xbfdf27cc, 0xb2a31b92, 0x0db9d56a, 0x8b7162e0, 0x1};
bn_uint_t add_256_res_0= {.number = add_256_res_0_tab, .length = 9};
uint32_t add_256_tab_len=1;
bn_uint_t *add_256_test_tab[1][3]={
{&add_256_a_0,&add_256_b_0,&add_256_res_0},
};
//variable 'sub_128_a_0' value: 0xbdda5fabc690c425e1fbf49c249adc16
uint32_t sub_128_a_0_tab [4] = {0x249adc16, 0xe1fbf49c, 0xc690c425, 0xbdda5fab};
bn_uint_t sub_128_a_0= {.number = sub_128_a_0_tab, .length = 4};
//variable 'sub_128_b_0' value: 0xbff7ede590f93cfe17e45d809fe7cff8
uint32_t sub_128_b_0_tab [4] = {0x9fe7cff8, 0x17e45d80, 0x90f93cfe, 0xbff7ede5};
bn_uint_t sub_128_b_0= {.number = sub_128_b_0_tab, .length = 4};
//variable 'sub_128_res_0' value: 0x-21d8e39ca6878d835e868e47b4cf3e2
uint32_t sub_128_res_0_tab [4] = {0x84b30c1e, 0xca17971b, 0x35978727, 0xfde271c6};
bn_uint_t sub_128_res_0= {.number = sub_128_res_0_tab, .length = 4};
uint32_t sub_128_tab_len=1;
bn_uint_t *sub_128_test_tab[1][3]={
{&sub_128_a_0,&sub_128_b_0,&sub_128_res_0},
};
//variable 'sub_256_a_0' value: 0xd451f44c4a96854026016e65130e9d3ba5bad82c96b27021f9fc2f8230d32a4f
uint32_t sub_256_a_0_tab [8] = {0x30d32a4f, 0xf9fc2f82, 0x96b27021, 0xa5bad82c, 0x130e9d3b, 0x26016e65, 0x4a968540, 0xd451f44c};
bn_uint_t sub_256_a_0= {.number = sub_256_a_0_tab, .length = 8};
//variable 'sub_256_b_0' value: 0xfc334ea259d00570678e82f75094e12a4c6afa4d5bd5b426f87337862dd8e3a0
uint32_t sub_256_b_0_tab [8] = {0x2dd8e3a0, 0xf8733786, 0x5bd5b426, 0x4c6afa4d, 0x5094e12a, 0x678e82f7, 0x59d00570, 0xfc334ea2};
bn_uint_t sub_256_b_0= {.number = sub_256_b_0_tab, .length = 8};
//variable 'sub_256_res_0' value: 0x-27e15a560f398030418d14923d8643eea6b02220c5234404fe770803fd05b951
uint32_t sub_256_res_0_tab [9] = {0x02fa46af, 0x0188f7fc, 0x3adcbbfb, 0x594fdddf, 0xc279bc11, 0xbe72eb6d, 0xf0c67fcf, 0xd81ea5a9, 0xffffffff};
bn_uint_t sub_256_res_0= {.number = sub_256_res_0_tab, .length = 9};
uint32_t sub_256_tab_len=1;
bn_uint_t *sub_256_test_tab[1][3]={
{&sub_256_a_0,&sub_256_b_0,&sub_256_res_0},
};
//variable 'add_mod_128_a_0' value: 0x627f7b66d7f66d218ab386ce15931e7c
uint32_t add_mod_128_a_0_tab [4] = {0x15931e7c, 0x8ab386ce, 0xd7f66d21, 0x627f7b66};
bn_uint_t add_mod_128_a_0= {.number = add_mod_128_a_0_tab, .length = 4};
//variable 'add_mod_128_b_0' value: 0x16e726796b444acf64bc9a6a25c070e1
uint32_t add_mod_128_b_0_tab [4] = {0x25c070e1, 0x64bc9a6a, 0x6b444acf, 0x16e72679};
bn_uint_t add_mod_128_b_0= {.number = add_mod_128_b_0_tab, .length = 4};
//variable 'add_mod_128_p_0' value: 0x35ae9dc9e6b473616a553ffb181a2758
uint32_t add_mod_128_p_0_tab [4] = {0x181a2758, 0x6a553ffb, 0xe6b47361, 0x35ae9dc9};
bn_uint_t add_mod_128_p_0= {.number = add_mod_128_p_0_tab, .length = 4};
//variable 'add_mod_128_res_0' value: 0xe09664c75d1d12e1ac5a1420b1f40ad
uint32_t add_mod_128_res_0_tab [4] = {0x0b1f40ad, 0x1ac5a142, 0x75d1d12e, 0xe09664c};
bn_uint_t add_mod_128_res_0= {.number = add_mod_128_res_0_tab, .length = 4};
uint32_t add_mod_128_tab_len=1;
bn_uint_t *add_mod_128_test_tab[1][4]={
{&add_mod_128_a_0,&add_mod_128_b_0,&add_mod_128_p_0,&add_mod_128_res_0},
};
//variable 'add_mod_256_a_0' value: 0x5e6368df2ca176b8818ae62fb45de3ba19e7f23b96c227c639cf839137105357
uint32_t add_mod_256_a_0_tab [8] = {0x37105357, 0x39cf8391, 0x96c227c6, 0x19e7f23b, 0xb45de3ba, 0x818ae62f, 0x2ca176b8, 0x5e6368df};
bn_uint_t add_mod_256_a_0= {.number = add_mod_256_a_0_tab, .length = 8};
//variable 'add_mod_256_b_0' value: 0x8e5574093ed794663d3db07c179f832055fb5db5d06504b36f9f234fcf9588b3
uint32_t add_mod_256_b_0_tab [8] = {0xcf9588b3, 0x6f9f234f, 0xd06504b3, 0x55fb5db5, 0x179f8320, 0x3d3db07c, 0x3ed79466, 0x8e557409};
bn_uint_t add_mod_256_b_0= {.number = add_mod_256_b_0_tab, .length = 8};
//variable 'add_mod_256_p_0' value: 0x6779dcdc2bf53c6154484f6ebb6baf28293fd9a7109875caae453d3beed81d45
uint32_t add_mod_256_p_0_tab [8] = {0xeed81d45, 0xae453d3b, 0x109875ca, 0x293fd9a7, 0xbb6baf28, 0x54484f6e, 0x2bf53c61, 0x6779dcdc};
bn_uint_t add_mod_256_p_0= {.number = add_mod_256_p_0_tab, .length = 8};
//variable 'add_mod_256_res_0' value: 0x1dc52330138e925c1637f7ce5526088a1d639ca345f640e44ce42c6928f5a180
uint32_t add_mod_256_res_0_tab [8] = {0x28f5a180, 0x4ce42c69, 0x45f640e4, 0x1d639ca3, 0x5526088a, 0x1637f7ce, 0x138e925c, 0x1dc52330};
bn_uint_t add_mod_256_res_0= {.number = add_mod_256_res_0_tab, .length = 8};
uint32_t add_mod_256_tab_len=1;
bn_uint_t *add_mod_256_test_tab[1][4]={
{&add_mod_256_a_0,&add_mod_256_b_0,&add_mod_256_p_0,&add_mod_256_res_0},
};
//variable 'sub_mod_128_a_0' value: 0xa37def3db1eb9f0da43104db11dd4c75
uint32_t sub_mod_128_a_0_tab [4] = {0x11dd4c75, 0xa43104db, 0xb1eb9f0d, 0xa37def3d};
bn_uint_t sub_mod_128_a_0= {.number = sub_mod_128_a_0_tab, .length = 4};
//variable 'sub_mod_128_b_0' value: 0xb6ab8c5dade723e21bd3788144bb9a
uint32_t sub_mod_128_b_0_tab [4] = {0x8144bb9a, 0xe21bd378, 0x5dade723, 0xb6ab8c};
bn_uint_t sub_mod_128_b_0= {.number = sub_mod_128_b_0_tab, .length = 4};
//variable 'sub_mod_128_p_0' value: 0x69fcb4dfbf2580f8c4d0b9495d7868a1
uint32_t sub_mod_128_p_0_tab [4] = {0x5d7868a1, 0xc4d0b949, 0xbf2580f8, 0x69fcb4df};
bn_uint_t sub_mod_128_p_0= {.number = sub_mod_128_p_0_tab, .length = 4};
//variable 'sub_mod_128_res_0' value: 0x38ca8ed1951836f0fd4478193320283a
uint32_t sub_mod_128_res_0_tab [4] = {0x3320283a, 0xfd447819, 0x951836f0, 0x38ca8ed1};
bn_uint_t sub_mod_128_res_0= {.number = sub_mod_128_res_0_tab, .length = 4};
uint32_t sub_mod_128_tab_len=1;
bn_uint_t *sub_mod_128_test_tab[1][4]={
{&sub_mod_128_a_0,&sub_mod_128_b_0,&sub_mod_128_p_0,&sub_mod_128_res_0},
};
//variable 'sub_mod_256_a_0' value: 0x4e50271fc9cc228433f9a557d3f3bd86e14ebc7829633d9a13c5224278d6521d
uint32_t sub_mod_256_a_0_tab [8] = {0x78d6521d, 0x13c52242, 0x29633d9a, 0xe14ebc78, 0xd3f3bd86, 0x33f9a557, 0xc9cc2284, 0x4e50271f};
bn_uint_t sub_mod_256_a_0= {.number = sub_mod_256_a_0_tab, .length = 8};
//variable 'sub_mod_256_b_0' value: 0x5595bbff94c619cc29b55a9c823897aef4622305b42248140e1284aeb22c6971
uint32_t sub_mod_256_b_0_tab [8] = {0xb22c6971, 0x0e1284ae, 0xb4224814, 0xf4622305, 0x823897ae, 0x29b55a9c, 0x94c619cc, 0x5595bbff};
bn_uint_t sub_mod_256_b_0= {.number = sub_mod_256_b_0_tab, .length = 8};
//variable 'sub_mod_256_p_0' value: 0xa7f83e96ca1aad3e652653b07da6ef8de0e8b448bea5900466eb774f4486cbcb
uint32_t sub_mod_256_p_0_tab [8] = {0x4486cbcb, 0x66eb774f, 0xbea59004, 0xe0e8b448, 0x7da6ef8d, 0x652653b0, 0xca1aad3e, 0xa7f83e96};
bn_uint_t sub_mod_256_p_0= {.number = sub_mod_256_p_0_tab, .length = 8};
//variable 'sub_mod_256_res_0' value: 0xa0b2a9b6ff20b5f66f6a9e6bcf621565cdd54dbb33e6858a6c9e14e30b30b477
uint32_t sub_mod_256_res_0_tab [8] = {0x0b30b477, 0x6c9e14e3, 0x33e6858a, 0xcdd54dbb, 0xcf621565, 0x6f6a9e6b, 0xff20b5f6, 0xa0b2a9b6};
bn_uint_t sub_mod_256_res_0= {.number = sub_mod_256_res_0_tab, .length = 8};
uint32_t sub_mod_256_tab_len=1;
bn_uint_t *sub_mod_256_test_tab[1][4]={
{&sub_mod_256_a_0,&sub_mod_256_b_0,&sub_mod_256_p_0,&sub_mod_256_res_0},
};
//variable 'shr_128_a_0' value: 0x53a9127ec017e97d8af3f68c8d0b4593
uint32_t shr_128_a_0_tab [4] = {0x8d0b4593, 0x8af3f68c, 0xc017e97d, 0x53a9127e};
bn_uint_t shr_128_a_0= {.number = shr_128_a_0_tab, .length = 4};
//variable 'shr_128_res_0' value: 0x29d4893f600bf4bec579fb464685a2c9
uint32_t shr_128_res_0_tab [4] = {0x4685a2c9, 0xc579fb46, 0x600bf4be, 0x29d4893f};
bn_uint_t shr_128_res_0= {.number = shr_128_res_0_tab, .length = 4};
uint32_t shr_128_tab_len=1;
bn_uint_t *shr_128_test_tab[1][2]={
{&shr_128_a_0,&shr_128_res_0},
};
//variable 'shr_256_a_0' value: 0xab942c87685a0a6ed669098daac0504d4bcb3509aa32a565aa3a3c208d294f44
uint32_t shr_256_a_0_tab [8] = {0x8d294f44, 0xaa3a3c20, 0xaa32a565, 0x4bcb3509, 0xaac0504d, 0xd669098d, 0x685a0a6e, 0xab942c87};
bn_uint_t shr_256_a_0= {.number = shr_256_a_0_tab, .length = 8};
//variable 'shr_256_res_0' value: 0x55ca1643b42d05376b3484c6d5602826a5e59a84d51952b2d51d1e104694a7a2
uint32_t shr_256_res_0_tab [8] = {0x4694a7a2, 0xd51d1e10, 0xd51952b2, 0xa5e59a84, 0xd5602826, 0x6b3484c6, 0xb42d0537, 0x55ca1643};
bn_uint_t shr_256_res_0= {.number = shr_256_res_0_tab, .length = 8};
uint32_t shr_256_tab_len=1;
bn_uint_t *shr_256_test_tab[1][2]={
{&shr_256_a_0,&shr_256_res_0},
};
//variable 'inv_mod_128_a_0' value: 0x7c2c0fd1e2add5c091f419d6ad216d6c
uint32_t inv_mod_128_a_0_tab [4] = {0xad216d6c, 0x91f419d6, 0xe2add5c0, 0x7c2c0fd1};
bn_uint_t inv_mod_128_a_0= {.number = inv_mod_128_a_0_tab, .length = 4};
//variable 'inv_mod_128_p_0' value: 0xe8fcc42955de09d6b5bfebd6fc8f523f
uint32_t inv_mod_128_p_0_tab [4] = {0xfc8f523f, 0xb5bfebd6, 0x55de09d6, 0xe8fcc429};
bn_uint_t inv_mod_128_p_0= {.number = inv_mod_128_p_0_tab, .length = 4};
//variable 'inv_mod_128_res_0' value: 0x1c8269d0d7d20110fd8d9c727e2f4bc
uint32_t inv_mod_128_res_0_tab [4] = {0x27e2f4bc, 0x0fd8d9c7, 0x0d7d2011, 0x1c8269d};
bn_uint_t inv_mod_128_res_0= {.number = inv_mod_128_res_0_tab, .length = 4};
uint32_t inv_mod_128_tab_len=1;
bn_uint_t *inv_mod_128_test_tab[1][3]={
{&inv_mod_128_a_0,&inv_mod_128_p_0,&inv_mod_128_res_0},
};
//variable 'inv_mod_256_a_0' value: 0x7b39356b8cea5e95dfe6c46f1222260190334b33ac9eec109cea7698272814a9
uint32_t inv_mod_256_a_0_tab [8] = {0x272814a9, 0x9cea7698, 0xac9eec10, 0x90334b33, 0x12222601, 0xdfe6c46f, 0x8cea5e95, 0x7b39356b};
bn_uint_t inv_mod_256_a_0= {.number = inv_mod_256_a_0_tab, .length = 8};
//variable 'inv_mod_256_p_0' value: 0x926ec9d59f29e3116be13c519ef50ed0e26f094e93033548240e1b73e02d3887
uint32_t inv_mod_256_p_0_tab [8] = {0xe02d3887, 0x240e1b73, 0x93033548, 0xe26f094e, 0x9ef50ed0, 0x6be13c51, 0x9f29e311, 0x926ec9d5};
bn_uint_t inv_mod_256_p_0= {.number = inv_mod_256_p_0_tab, .length = 8};
//variable 'inv_mod_256_res_0' value: 0x29fef5a2faeeb9827b96d5eba5de5c0c0cf64bb4bc3b8acecb6f1a66d8551d6c
uint32_t inv_mod_256_res_0_tab [8] = {0xd8551d6c, 0xcb6f1a66, 0xbc3b8ace, 0x0cf64bb4, 0xa5de5c0c, 0x7b96d5eb, 0xfaeeb982, 0x29fef5a2};
bn_uint_t inv_mod_256_res_0= {.number = inv_mod_256_res_0_tab, .length = 8};
uint32_t inv_mod_256_tab_len=1;
bn_uint_t *inv_mod_256_test_tab[1][3]={
{&inv_mod_256_a_0,&inv_mod_256_p_0,&inv_mod_256_res_0},
};
//variable 'mul_128_a_0' value: 0xf2f10295ef5c543101ac018a7c7e2116
uint32_t mul_128_a_0_tab [4] = {0x7c7e2116, 0x01ac018a, 0xef5c5431, 0xf2f10295};
bn_uint_t mul_128_a_0= {.number = mul_128_a_0_tab, .length = 4};
//variable 'mul_128_b_0' value: 0xb4291ac07d20c30f07abdac7850cb866
uint32_t mul_128_b_0_tab [4] = {0x850cb866, 0x07abdac7, 0x7d20c30f, 0xb4291ac0};
bn_uint_t mul_128_b_0= {.number = mul_128_b_0_tab, .length = 4};
//variable 'mul_128_res_0' value: 0xaaf877cdfc14313e37cf5efe8dddaf5c2f58c1aaf9bca3b332b9f7dc3d10fec4
uint32_t mul_128_res_0_tab [8] = {0x3d10fec4, 0x32b9f7dc, 0xf9bca3b3, 0x2f58c1aa, 0x8dddaf5c, 0x37cf5efe, 0xfc14313e, 0xaaf877cd};
bn_uint_t mul_128_res_0= {.number = mul_128_res_0_tab, .length = 8};
uint32_t mul_128_tab_len=1;
bn_uint_t *mul_128_test_tab[1][3]={
{&mul_128_a_0,&mul_128_b_0,&mul_128_res_0},
};
//variable 'mul_256_a_0' value: 0x920a7c9a99648b592d7f6070b1565cb9fab797f98ddab723b1e98ef4c7475228
uint32_t mul_256_a_0_tab [8] = {0xc7475228, 0xb1e98ef4, 0x8ddab723, 0xfab797f9, 0xb1565cb9, 0x2d7f6070, 0x99648b59, 0x920a7c9a};
bn_uint_t mul_256_a_0= {.number = mul_256_a_0_tab, .length = 8};
//variable 'mul_256_b_0' value: 0xec951d1acd79b340631ea5776438444f006d10b63f103f2e9ecc6c80d81fab42
uint32_t mul_256_b_0_tab [8] = {0xd81fab42, 0x9ecc6c80, 0x3f103f2e, 0x006d10b6, 0x6438444f, 0x631ea577, 0xcd79b340, 0xec951d1a};
bn_uint_t mul_256_b_0= {.number = mul_256_b_0_tab, .length = 8};
//variable 'mul_256_res_0' value: 0x86f6bb9385c9f60e0b0af71440e2b528e71cf45f6a81174bf5ada12eaf2222680a24b221e6d6fd5986098f4106c2befc22fbfc7dc7d3d6219aae9f2cb71be650
uint32_t mul_256_res_0_tab [16] = {0xb71be650, 0x9aae9f2c, 0xc7d3d621, 0x22fbfc7d, 0x06c2befc, 0x86098f41, 0xe6d6fd59, 0x0a24b221, 0xaf222268, 0xf5ada12e, 0x6a81174b, 0xe71cf45f, 0x40e2b528, 0x0b0af714, 0x85c9f60e, 0x86f6bb93};
bn_uint_t mul_256_res_0= {.number = mul_256_res_0_tab, .length = 16};
uint32_t mul_256_tab_len=1;
bn_uint_t *mul_256_test_tab[1][3]={
{&mul_256_a_0,&mul_256_b_0,&mul_256_res_0},
};
//variable 'mod_barret_128_a_0' value: 0x97c4d0c39d4e95885a8082ac1617fe687ede3288e79c62de0c92588f5f001631
uint32_t mod_barret_128_a_0_tab [8] = {0x5f001631, 0x0c92588f, 0xe79c62de, 0x7ede3288, 0x1617fe68, 0x5a8082ac, 0x9d4e9588, 0x97c4d0c3};
bn_uint_t mod_barret_128_a_0= {.number = mod_barret_128_a_0_tab, .length = 8};
//variable 'mod_barret_128_res_0' value: 0x1396c35fb47499f000c3495f5d79f63a
uint32_t mod_barret_128_res_0_tab [4] = {0x5d79f63a, 0x00c3495f, 0xb47499f0, 0x1396c35f};
bn_uint_t mod_barret_128_res_0= {.number = mod_barret_128_res_0_tab, .length = 4};
//variable 'mod_barret_128_mi_' value: 0x100000002000000040000000800000011
uint32_t mod_barret_128_mi__tab [5] = {0x00000011, 0x00000008, 0x00000004, 0x00000002, 0x1};
bn_uint_t mod_barret_128_mi_= {.number = mod_barret_128_mi__tab, .length = 5};
//variable 'mod_barret_128_p_' value: 0xfffffffdffffffffffffffffffffffff
uint32_t mod_barret_128_p__tab [4] = {0xffffffff, 0xffffffff, 0xffffffff, 0xfffffffd};
bn_uint_t mod_barret_128_p_= {.number = mod_barret_128_p__tab, .length = 4};
uint32_t mod_barret_128_tab_len=1;
bn_uint_t *mod_barret_128_test_tab[1][2]={
{&mod_barret_128_a_0,&mod_barret_128_res_0},
};
//variable 'mul_mod_barret_128_a_0' value: 0xd269823c308bf4e254261935e9421d21
uint32_t mul_mod_barret_128_a_0_tab [4] = {0xe9421d21, 0x54261935, 0x308bf4e2, 0xd269823c};
bn_uint_t mul_mod_barret_128_a_0= {.number = mul_mod_barret_128_a_0_tab, .length = 4};
//variable 'mul_mod_barret_128_b_0' value: 0xc101c0d322c69e11a16ac8b0d3453343
uint32_t mul_mod_barret_128_b_0_tab [4] = {0xd3453343, 0xa16ac8b0, 0x22c69e11, 0xc101c0d3};
bn_uint_t mul_mod_barret_128_b_0= {.number = mul_mod_barret_128_b_0_tab, .length = 4};
//variable 'mul_mod_barret_128_res_0' value: 0xfceba7bd18e7986a29b7098d878ad61c
uint32_t mul_mod_barret_128_res_0_tab [4] = {0x878ad61c, 0x29b7098d, 0x18e7986a, 0xfceba7bd};
bn_uint_t mul_mod_barret_128_res_0= {.number = mul_mod_barret_128_res_0_tab, .length = 4};
//variable 'mul_mod_barret_128_mi_' value: 0x100000002000000040000000800000011
uint32_t mul_mod_barret_128_mi__tab [5] = {0x00000011, 0x00000008, 0x00000004, 0x00000002, 0x1};
bn_uint_t mul_mod_barret_128_mi_= {.number = mul_mod_barret_128_mi__tab, .length = 5};
//variable 'mul_mod_barret_128_p_' value: 0xfffffffdffffffffffffffffffffffff
uint32_t mul_mod_barret_128_p__tab [4] = {0xffffffff, 0xffffffff, 0xffffffff, 0xfffffffd};
bn_uint_t mul_mod_barret_128_p_= {.number = mul_mod_barret_128_p__tab, .length = 4};
uint32_t mul_mod_barret_128_tab_len=1;
bn_uint_t *mul_mod_barret_128_test_tab[1][3]={
{&mul_mod_barret_128_a_0,&mul_mod_barret_128_b_0,&mul_mod_barret_128_res_0},
};
//variable 'mod_barret_256_a_0' value: 0xa1fec91b565a4c07d9a897acb80d35ae542a0e0c76a02913323306e6d9b1e5498d726d6bc3d2862a86629730c24bd42a91a64515a3c1e7067373916c8ccda2ab
uint32_t mod_barret_256_a_0_tab [16] = {0x8ccda2ab, 0x7373916c, 0xa3c1e706, 0x91a64515, 0xc24bd42a, 0x86629730, 0xc3d2862a, 0x8d726d6b, 0xd9b1e549, 0x323306e6, 0x76a02913, 0x542a0e0c, 0xb80d35ae, 0xd9a897ac, 0x565a4c07, 0xa1fec91b};
bn_uint_t mod_barret_256_a_0= {.number = mod_barret_256_a_0_tab, .length = 16};
//variable 'mod_barret_256_res_0' value: 0xf0a0a98ed8a2a7f4bd9cf095933e8aedd5d9aeea9c8a71559237dee85c78676d
uint32_t mod_barret_256_res_0_tab [8] = {0x5c78676d, 0x9237dee8, 0x9c8a7155, 0xd5d9aeea, 0x933e8aed, 0xbd9cf095, 0xd8a2a7f4, 0xf0a0a98e};
bn_uint_t mod_barret_256_res_0= {.number = mod_barret_256_res_0_tab, .length = 8};
//variable 'mod_barret_256_mi_' value: 0x100000000fffffffffffffffefffffffefffffffeffffffff0000000000000003
uint32_t mod_barret_256_mi__tab [9] = {0x00000003, 0x00000000, 0xffffffff, 0xfffffffe, 0xfffffffe, 0xfffffffe, 0xffffffff, 0x00000000, 0x1};
bn_uint_t mod_barret_256_mi_= {.number = mod_barret_256_mi__tab, .length = 9};
//variable 'mod_barret_256_p_' value: 0xffffffff00000001000000000000000000000000ffffffffffffffffffffffff
uint32_t mod_barret_256_p__tab [8] = {0xffffffff, 0xffffffff, 0xffffffff, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0xffffffff};
bn_uint_t mod_barret_256_p_= {.number = mod_barret_256_p__tab, .length = 8};
uint32_t mod_barret_256_tab_len=1;
bn_uint_t *mod_barret_256_test_tab[1][2]={
{&mod_barret_256_a_0,&mod_barret_256_res_0},
};
//variable 'mul_mod_barret_256_a_0' value: 0x44c8879b296cf79cf3f2b8a5beb8e1bd61c611297bbb3c1bd6a37bf27b061dc3
uint32_t mul_mod_barret_256_a_0_tab [8] = {0x7b061dc3, 0xd6a37bf2, 0x7bbb3c1b, 0x61c61129, 0xbeb8e1bd, 0xf3f2b8a5, 0x296cf79c, 0x44c8879b};
bn_uint_t mul_mod_barret_256_a_0= {.number = mul_mod_barret_256_a_0_tab, .length = 8};
//variable 'mul_mod_barret_256_b_0' value: 0xe071d6d608072e8674f4d6b22a6888c07167163567117657ed9fcd269b1f25bb
uint32_t mul_mod_barret_256_b_0_tab [8] = {0x9b1f25bb, 0xed9fcd26, 0x67117657, 0x71671635, 0x2a6888c0, 0x74f4d6b2, 0x08072e86, 0xe071d6d6};
bn_uint_t mul_mod_barret_256_b_0= {.number = mul_mod_barret_256_b_0_tab, .length = 8};
//variable 'mul_mod_barret_256_res_0' value: 0xbcbf248bb0d1d16c1cfb78be8941f9b388896cef5b37b801d0f4b0cbb2975ab9
uint32_t mul_mod_barret_256_res_0_tab [8] = {0xb2975ab9, 0xd0f4b0cb, 0x5b37b801, 0x88896cef, 0x8941f9b3, 0x1cfb78be, 0xb0d1d16c, 0xbcbf248b};
bn_uint_t mul_mod_barret_256_res_0= {.number = mul_mod_barret_256_res_0_tab, .length = 8};
//variable 'mul_mod_barret_256_mi_' value: 0x100000000fffffffffffffffefffffffefffffffeffffffff0000000000000003
uint32_t mul_mod_barret_256_mi__tab [9] = {0x00000003, 0x00000000, 0xffffffff, 0xfffffffe, 0xfffffffe, 0xfffffffe, 0xffffffff, 0x00000000, 0x1};
bn_uint_t mul_mod_barret_256_mi_= {.number = mul_mod_barret_256_mi__tab, .length = 9};
//variable 'mul_mod_barret_256_p_' value: 0xffffffff00000001000000000000000000000000ffffffffffffffffffffffff
uint32_t mul_mod_barret_256_p__tab [8] = {0xffffffff, 0xffffffff, 0xffffffff, 0x00000000, 0x00000000, 0x00000000, 0x00000001, 0xffffffff};
bn_uint_t mul_mod_barret_256_p_= {.number = mul_mod_barret_256_p__tab, .length = 8};
uint32_t mul_mod_barret_256_tab_len=1;
bn_uint_t *mul_mod_barret_256_test_tab[1][3]={
{&mul_mod_barret_256_a_0,&mul_mod_barret_256_b_0,&mul_mod_barret_256_res_0},
};

#endif /* TEST_BIGNUM_VALUES_H_ */
