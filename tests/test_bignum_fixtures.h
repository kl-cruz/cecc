/*
File generate using external software
*/
#ifndef TEST_BIGNUM_VALUES_H_
#define TEST_BIGNUM_VALUES_H_
#include "bignum.h"

//variable 'add_128_a_0' value: 0xf2b1105f9a49920a3ca5041d4d46e18c
uint32_t add_128_a_0_tab [4] = {0x4d46e18c, 0x3ca5041d, 0x9a49920a, 0xf2b1105f};
bn_uint_t add_128_a_0= {.number = add_128_a_0_tab, .length = 4};
//variable 'add_128_b_0' value: 0xe3bc1adfec27b0c4529b3a8fe2888c0b
uint32_t add_128_b_0_tab [4] = {0xe2888c0b, 0x529b3a8f, 0xec27b0c4, 0xe3bc1adf};
bn_uint_t add_128_b_0= {.number = add_128_b_0_tab, .length = 4};
//variable 'add_128_res_0' value: 0x1d66d2b3f867142ce8f403ead2fcf6d97
uint32_t add_128_res_0_tab [5] = {0x2fcf6d97, 0x8f403ead, 0x867142ce, 0xd66d2b3f, 0x1};
bn_uint_t add_128_res_0= {.number = add_128_res_0_tab, .length = 5};
uint32_t add_128_tab_len=1;
bn_uint_t *add_128_test_tab[1][3]={
{&add_128_a_0,&add_128_b_0,&add_128_res_0},
};
//variable 'add_256_a_0' value: 0x42d3400438872d38497920357767cc90a8d8ef6f8839843825f355218ed3459f
uint32_t add_256_a_0_tab [8] = {0x8ed3459f, 0x25f35521, 0x88398438, 0xa8d8ef6f, 0x7767cc90, 0x49792035, 0x38872d38, 0x42d34004};
bn_uint_t add_256_a_0= {.number = add_256_a_0_tab, .length = 8};
//variable 'add_256_b_0' value: 0x8067d95087d6bb38ba7f55bf5529471682d3b75488c51720cf1f2c7a51967408
uint32_t add_256_b_0_tab [8] = {0x51967408, 0xcf1f2c7a, 0x88c51720, 0x82d3b754, 0x55294716, 0xba7f55bf, 0x87d6bb38, 0x8067d950};
bn_uint_t add_256_b_0= {.number = add_256_b_0_tab, .length = 8};
//variable 'add_256_res_0' value: 0xc33b1954c05de87103f875f4cc9113a72baca6c410fe9b58f512819be069b9a7
uint32_t add_256_res_0_tab [8] = {0xe069b9a7, 0xf512819b, 0x10fe9b58, 0x2baca6c4, 0xcc9113a7, 0x03f875f4, 0xc05de871, 0xc33b1954};
bn_uint_t add_256_res_0= {.number = add_256_res_0_tab, .length = 8};
uint32_t add_256_tab_len=1;
bn_uint_t *add_256_test_tab[1][3]={
{&add_256_a_0,&add_256_b_0,&add_256_res_0},
};
//variable 'sub_128_a_0' value: 0x1937fa0d363717ad20fe87342aba5cf
uint32_t sub_128_a_0_tab [4] = {0x42aba5cf, 0xd20fe873, 0xd363717a, 0x1937fa0};
bn_uint_t sub_128_a_0= {.number = sub_128_a_0_tab, .length = 4};
//variable 'sub_128_b_0' value: 0x89ce73890cd95369372d8cb0b25bff4b
uint32_t sub_128_b_0_tab [4] = {0xb25bff4b, 0x372d8cb0, 0x0cd95369, 0x89ce7389};
bn_uint_t sub_128_b_0= {.number = sub_128_b_0_tab, .length = 4};
//variable 'sub_128_res_0' value: 0x-883af3e83975e1ee651da43d6fb0597c
uint32_t sub_128_res_0_tab [5] = {0x904fa684, 0x9ae25bc2, 0xc68a1e11, 0x77c50c17, 0xffffffff};
bn_uint_t sub_128_res_0= {.number = sub_128_res_0_tab, .length = 5};
uint32_t sub_128_tab_len=1;
bn_uint_t *sub_128_test_tab[1][3]={
{&sub_128_a_0,&sub_128_b_0,&sub_128_res_0},
};
//variable 'sub_256_a_0' value: 0xcf376befea41069f86f8722b7804c190218dd92496799ade180196dc06bf80f0
uint32_t sub_256_a_0_tab [8] = {0x06bf80f0, 0x180196dc, 0x96799ade, 0x218dd924, 0x7804c190, 0x86f8722b, 0xea41069f, 0xcf376bef};
bn_uint_t sub_256_a_0= {.number = sub_256_a_0_tab, .length = 8};
//variable 'sub_256_b_0' value: 0xae6e1084bb8f3f3eff5d33305087c525b5788e5e5b7a8beb1514c36fb8d526bd
uint32_t sub_256_b_0_tab [8] = {0xb8d526bd, 0x1514c36f, 0x5b7a8beb, 0xb5788e5e, 0x5087c525, 0xff5d3330, 0xbb8f3f3e, 0xae6e1084};
bn_uint_t sub_256_b_0= {.number = sub_256_b_0_tab, .length = 8};
//variable 'sub_256_res_0' value: 0x20c95b6b2eb1c760879b3efb277cfc6a6c154ac63aff0ef302ecd36c4dea5a33
uint32_t sub_256_res_0_tab [8] = {0x4dea5a33, 0x02ecd36c, 0x3aff0ef3, 0x6c154ac6, 0x277cfc6a, 0x879b3efb, 0x2eb1c760, 0x20c95b6b};
bn_uint_t sub_256_res_0= {.number = sub_256_res_0_tab, .length = 8};
uint32_t sub_256_tab_len=1;
bn_uint_t *sub_256_test_tab[1][3]={
{&sub_256_a_0,&sub_256_b_0,&sub_256_res_0},
};
//variable 'add_mod_128_a_0' value: 0x2983022a63a6eca8723d5eea84629e92
uint32_t add_mod_128_a_0_tab [4] = {0x84629e92, 0x723d5eea, 0x63a6eca8, 0x2983022a};
bn_uint_t add_mod_128_a_0= {.number = add_mod_128_a_0_tab, .length = 4};
//variable 'add_mod_128_b_0' value: 0xa8b466cf7dfb112b11b2164165e2459
uint32_t add_mod_128_b_0_tab [4] = {0x165e2459, 0xb11b2164, 0xf7dfb112, 0xa8b466c};
bn_uint_t add_mod_128_b_0= {.number = add_mod_128_b_0_tab, .length = 4};
//variable 'add_mod_128_p_0' value: 0xc160261f48879533bfd9598336fa3ce4
uint32_t add_mod_128_p_0_tab [4] = {0x36fa3ce4, 0xbfd95983, 0x48879533, 0xc160261f};
bn_uint_t add_mod_128_p_0= {.number = add_mod_128_p_0_tab, .length = 4};
//variable 'add_mod_128_res_0' value: 0x340e48975b869dbb2358804e9ac0c2eb
uint32_t add_mod_128_res_0_tab [4] = {0x9ac0c2eb, 0x2358804e, 0x5b869dbb, 0x340e4897};
bn_uint_t add_mod_128_res_0= {.number = add_mod_128_res_0_tab, .length = 4};
uint32_t add_mod_128_tab_len=1;
bn_uint_t *add_mod_128_test_tab[1][4]={
{&add_mod_128_a_0,&add_mod_128_b_0,&add_mod_128_p_0,&add_mod_128_res_0},
};
//variable 'add_mod_256_a_0' value: 0xd009086b73173d915748e645974fa7ee09052757e2e9019338649123bd114d7
uint32_t add_mod_256_a_0_tab [8] = {0x3bd114d7, 0x33864912, 0x7e2e9019, 0xe0905275, 0x5974fa7e, 0x15748e64, 0xb73173d9, 0xd009086};
bn_uint_t add_mod_256_a_0= {.number = add_mod_256_a_0_tab, .length = 8};
//variable 'add_mod_256_b_0' value: 0xcf7859fe34b2da169c7df0793f15f46e2929551ee755c163af710838dc17ebb6
uint32_t add_mod_256_b_0_tab [8] = {0xdc17ebb6, 0xaf710838, 0xe755c163, 0x2929551e, 0x3f15f46e, 0x9c7df079, 0x34b2da16, 0xcf7859fe};
bn_uint_t add_mod_256_b_0= {.number = add_mod_256_b_0_tab, .length = 8};
//variable 'add_mod_256_p_0' value: 0xf771db909a90d046dc85f53ccc39706e3ccd4e8a35db7c0a8d70491f23aced4e
uint32_t add_mod_256_p_0_tab [8] = {0x23aced4e, 0x8d70491f, 0x35db7c0a, 0x3ccd4e8a, 0xcc39706e, 0xdc85f53c, 0x9a90d046, 0xf771db90};
bn_uint_t add_mod_256_p_0= {.number = add_mod_256_p_0_tab, .length = 8};
//variable 'add_mod_256_res_0' value: 0xdc78ea84ebe44defb1f27edd988aeeed09b9a7946584517ce2f7514b17e9008d
uint32_t add_mod_256_res_0_tab [8] = {0x17e9008d, 0xe2f7514b, 0x6584517c, 0x09b9a794, 0x988aeeed, 0xb1f27edd, 0xebe44def, 0xdc78ea84};
bn_uint_t add_mod_256_res_0= {.number = add_mod_256_res_0_tab, .length = 8};
uint32_t add_mod_256_tab_len=1;
bn_uint_t *add_mod_256_test_tab[1][4]={
{&add_mod_256_a_0,&add_mod_256_b_0,&add_mod_256_p_0,&add_mod_256_res_0},
};
//variable 'sub_mod_128_a_0' value: 0x3fcf2741b39fe1c428e646d5d9736af5
uint32_t sub_mod_128_a_0_tab [4] = {0xd9736af5, 0x28e646d5, 0xb39fe1c4, 0x3fcf2741};
bn_uint_t sub_mod_128_a_0= {.number = sub_mod_128_a_0_tab, .length = 4};
//variable 'sub_mod_128_b_0' value: 0x5e99a32e95a7384aa63b75b875708ddf
uint32_t sub_mod_128_b_0_tab [4] = {0x75708ddf, 0xa63b75b8, 0x95a7384a, 0x5e99a32e};
bn_uint_t sub_mod_128_b_0= {.number = sub_mod_128_b_0_tab, .length = 4};
//variable 'sub_mod_128_p_0' value: 0x88adce7e71caa1ac3b0abd509fa36c46
uint32_t sub_mod_128_p_0_tab [4] = {0x9fa36c46, 0x3b0abd50, 0x71caa1ac, 0x88adce7e};
bn_uint_t sub_mod_128_p_0= {.number = sub_mod_128_p_0_tab, .length = 4};
//variable 'sub_mod_128_res_0' value: 0x69e352918fc34b25bdb58e6e03a6495c
uint32_t sub_mod_128_res_0_tab [4] = {0x03a6495c, 0xbdb58e6e, 0x8fc34b25, 0x69e35291};
bn_uint_t sub_mod_128_res_0= {.number = sub_mod_128_res_0_tab, .length = 4};
uint32_t sub_mod_128_tab_len=1;
bn_uint_t *sub_mod_128_test_tab[1][4]={
{&sub_mod_128_a_0,&sub_mod_128_b_0,&sub_mod_128_p_0,&sub_mod_128_res_0},
};
//variable 'sub_mod_256_a_0' value: 0xc28586f2bf68e66c24dcb4df8b6a42f528f49d0bc4ed571c4f7e0f8b9343696d
uint32_t sub_mod_256_a_0_tab [8] = {0x9343696d, 0x4f7e0f8b, 0xc4ed571c, 0x28f49d0b, 0x8b6a42f5, 0x24dcb4df, 0xbf68e66c, 0xc28586f2};
bn_uint_t sub_mod_256_a_0= {.number = sub_mod_256_a_0_tab, .length = 8};
//variable 'sub_mod_256_b_0' value: 0xb9d4e150e5894c2056b1364dbbedc1a3069a2bae821e180be0a97daf7c0eadaa
uint32_t sub_mod_256_b_0_tab [8] = {0x7c0eadaa, 0xe0a97daf, 0x821e180b, 0x069a2bae, 0xbbedc1a3, 0x56b1364d, 0xe5894c20, 0xb9d4e150};
bn_uint_t sub_mod_256_b_0= {.number = sub_mod_256_b_0_tab, .length = 8};
//variable 'sub_mod_256_p_0' value: 0x2d72f9975cfac908ea673265e604524c4fc7e0e87e719d35c6d1bd889eed7d2
uint32_t sub_mod_256_p_0_tab [8] = {0x89eed7d2, 0x5c6d1bd8, 0x87e719d3, 0xc4fc7e0e, 0x5e604524, 0x8ea67326, 0x75cfac90, 0x2d72f99};
bn_uint_t sub_mod_256_p_0= {.number = sub_mod_256_p_0_tab, .length = 8};
//variable 'sub_mod_256_res_0' value: 0x2b16d57870949a2238251eb45bb1e3d364f731ab19f196598d3e527968344d
uint32_t sub_mod_256_res_0_tab [8] = {0x7968344d, 0x598d3e52, 0xab19f196, 0xd364f731, 0xb45bb1e3, 0x2238251e, 0x7870949a, 0x2b16d5};
bn_uint_t sub_mod_256_res_0= {.number = sub_mod_256_res_0_tab, .length = 8};
uint32_t sub_mod_256_tab_len=1;
bn_uint_t *sub_mod_256_test_tab[1][4]={
{&sub_mod_256_a_0,&sub_mod_256_b_0,&sub_mod_256_p_0,&sub_mod_256_res_0},
};
//variable 'shr_128_a_0' value: 0x10475753a392dc03417a8da10fdf4391
uint32_t shr_128_a_0_tab [4] = {0x0fdf4391, 0x417a8da1, 0xa392dc03, 0x10475753};
bn_uint_t shr_128_a_0= {.number = shr_128_a_0_tab, .length = 4};
//variable 'shr_128_res_0' value: 0x823aba9d1c96e01a0bd46d087efa1c8
uint32_t shr_128_res_0_tab [4] = {0x87efa1c8, 0xa0bd46d0, 0xd1c96e01, 0x823aba9};
bn_uint_t shr_128_res_0= {.number = shr_128_res_0_tab, .length = 4};
uint32_t shr_128_tab_len=1;
bn_uint_t *shr_128_test_tab[1][2]={
{&shr_128_a_0,&shr_128_res_0},
};
//variable 'shr_256_a_0' value: 0x3ebe0c97e41db3ce25bdd5380fa0740a3ad1e535ef2b61a6455a28b8b9e5f33f
uint32_t shr_256_a_0_tab [8] = {0xb9e5f33f, 0x455a28b8, 0xef2b61a6, 0x3ad1e535, 0x0fa0740a, 0x25bdd538, 0xe41db3ce, 0x3ebe0c97};
bn_uint_t shr_256_a_0= {.number = shr_256_a_0_tab, .length = 8};
//variable 'shr_256_res_0' value: 0x1f5f064bf20ed9e712deea9c07d03a051d68f29af795b0d322ad145c5cf2f99f
uint32_t shr_256_res_0_tab [8] = {0x5cf2f99f, 0x22ad145c, 0xf795b0d3, 0x1d68f29a, 0x07d03a05, 0x12deea9c, 0xf20ed9e7, 0x1f5f064b};
bn_uint_t shr_256_res_0= {.number = shr_256_res_0_tab, .length = 8};
uint32_t shr_256_tab_len=1;
bn_uint_t *shr_256_test_tab[1][2]={
{&shr_256_a_0,&shr_256_res_0},
};
//variable 'inv_mod_128_a_0' value: 0x2d9957d825be7c2f878799690a2cb53f
uint32_t inv_mod_128_a_0_tab [4] = {0x0a2cb53f, 0x87879969, 0x25be7c2f, 0x2d9957d8};
bn_uint_t inv_mod_128_a_0= {.number = inv_mod_128_a_0_tab, .length = 4};
//variable 'inv_mod_128_p_0' value: 0xc2ca6308ff95d8464e4de65c647be569
uint32_t inv_mod_128_p_0_tab [4] = {0x647be569, 0x4e4de65c, 0xff95d846, 0xc2ca6308};
bn_uint_t inv_mod_128_p_0= {.number = inv_mod_128_p_0_tab, .length = 4};
//variable 'inv_mod_128_res_0' value: 0x6fa2fc52d1b48c4a97a6fb3f02bd634d
uint32_t inv_mod_128_res_0_tab [4] = {0x02bd634d, 0x97a6fb3f, 0xd1b48c4a, 0x6fa2fc52};
bn_uint_t inv_mod_128_res_0= {.number = inv_mod_128_res_0_tab, .length = 4};
uint32_t inv_mod_128_tab_len=1;
bn_uint_t *inv_mod_128_test_tab[1][3]={
{&inv_mod_128_a_0,&inv_mod_128_p_0,&inv_mod_128_res_0},
};
//variable 'inv_mod_256_a_0' value: 0x217ac5856b811083629c693e71a100fb5a5506e7e20436d64068e6be37a76706
uint32_t inv_mod_256_a_0_tab [8] = {0x37a76706, 0x4068e6be, 0xe20436d6, 0x5a5506e7, 0x71a100fb, 0x629c693e, 0x6b811083, 0x217ac585};
bn_uint_t inv_mod_256_a_0= {.number = inv_mod_256_a_0_tab, .length = 8};
//variable 'inv_mod_256_p_0' value: 0xb7f47cea9b943ca7ce6bea60960f10ffefb7b2061e001ec5e5aaded8b79ee6e9
uint32_t inv_mod_256_p_0_tab [8] = {0xb79ee6e9, 0xe5aaded8, 0x1e001ec5, 0xefb7b206, 0x960f10ff, 0xce6bea60, 0x9b943ca7, 0xb7f47cea};
bn_uint_t inv_mod_256_p_0= {.number = inv_mod_256_p_0_tab, .length = 8};
//variable 'inv_mod_256_res_0' value: 0x7328a8d18bc0f2efe744a695d7b10db7056c401bd77a204bda074b30f370231b
uint32_t inv_mod_256_res_0_tab [8] = {0xf370231b, 0xda074b30, 0xd77a204b, 0x056c401b, 0xd7b10db7, 0xe744a695, 0x8bc0f2ef, 0x7328a8d1};
bn_uint_t inv_mod_256_res_0= {.number = inv_mod_256_res_0_tab, .length = 8};
uint32_t inv_mod_256_tab_len=1;
bn_uint_t *inv_mod_256_test_tab[1][3]={
{&inv_mod_256_a_0,&inv_mod_256_p_0,&inv_mod_256_res_0},
};
//variable 'mul_128_a_0' value: 0x7285686ca1fd2b318c190d3bd7287f04
uint32_t mul_128_a_0_tab [4] = {0xd7287f04, 0x8c190d3b, 0xa1fd2b31, 0x7285686c};
bn_uint_t mul_128_a_0= {.number = mul_128_a_0_tab, .length = 4};
//variable 'mul_128_b_0' value: 0x5496b136104d1c6de80a61beb59b884c
uint32_t mul_128_b_0_tab [4] = {0xb59b884c, 0xe80a61be, 0x104d1c6d, 0x5496b136};
bn_uint_t mul_128_b_0= {.number = mul_128_b_0_tab, .length = 4};
//variable 'mul_128_res_0' value: 0x25d72fb5416ff4ccbc181cba67245d2fe0d0c7ef7b6dccfdd729685c1eebd530
uint32_t mul_128_res_0_tab [8] = {0x1eebd530, 0xd729685c, 0x7b6dccfd, 0xe0d0c7ef, 0x67245d2f, 0xbc181cba, 0x416ff4cc, 0x25d72fb5};
bn_uint_t mul_128_res_0= {.number = mul_128_res_0_tab, .length = 8};
uint32_t mul_128_tab_len=1;
bn_uint_t *mul_128_test_tab[1][3]={
{&mul_128_a_0,&mul_128_b_0,&mul_128_res_0},
};
//variable 'mul_256_a_0' value: 0xcaf99131b6837b87d10636ae19fd3acea70ca3b5fee4d75a405014d3bd8aeb06
uint32_t mul_256_a_0_tab [8] = {0xbd8aeb06, 0x405014d3, 0xfee4d75a, 0xa70ca3b5, 0x19fd3ace, 0xd10636ae, 0xb6837b87, 0xcaf99131};
bn_uint_t mul_256_a_0= {.number = mul_256_a_0_tab, .length = 8};
//variable 'mul_256_b_0' value: 0xbf939fd1a71efb9a1838bda74c53182b42820a7616367c6f95cda755bc0bccc0
uint32_t mul_256_b_0_tab [8] = {0xbc0bccc0, 0x95cda755, 0x16367c6f, 0x42820a76, 0x4c53182b, 0x1838bda7, 0xa71efb9a, 0xbf939fd1};
bn_uint_t mul_256_b_0= {.number = mul_256_b_0_tab, .length = 8};
//variable 'mul_256_res_0' value: 0x97e53f59b226af0f3f967f7de7614c4eae1c69bf252d6e1e88b187b37a65c2ddb8f3796cf8a431e1011abeb6a1f52549e52362a722bd7f42b13276675cbb0c80
uint32_t mul_256_res_0_tab [16] = {0x5cbb0c80, 0xb1327667, 0x22bd7f42, 0xe52362a7, 0xa1f52549, 0x011abeb6, 0xf8a431e1, 0xb8f3796c, 0x7a65c2dd, 0x88b187b3, 0x252d6e1e, 0xae1c69bf, 0xe7614c4e, 0x3f967f7d, 0xb226af0f, 0x97e53f59};
bn_uint_t mul_256_res_0= {.number = mul_256_res_0_tab, .length = 16};
uint32_t mul_256_tab_len=1;
bn_uint_t *mul_256_test_tab[1][3]={
{&mul_256_a_0,&mul_256_b_0,&mul_256_res_0},
};
//variable 'mod_barret_128_a_0' value: 0x213d451cd440b531f3280637d168e2f9248ea59e7da402eb271d22e0493e5fd8
uint32_t mod_barret_128_a_0_tab [8] = {0x493e5fd8, 0x271d22e0, 0x7da402eb, 0x248ea59e, 0xd168e2f9, 0xf3280637, 0xd440b531, 0x213d451c};
bn_uint_t mod_barret_128_a_0= {.number = mod_barret_128_a_0_tab, .length = 8};
//variable 'mod_barret_128_res_0' value: 0x6b17c4ed945f425747bba7f05be44cf1
uint32_t mod_barret_128_res_0_tab [4] = {0x5be44cf1, 0x47bba7f0, 0x945f4257, 0x6b17c4ed};
bn_uint_t mod_barret_128_res_0= {.number = mod_barret_128_res_0_tab, .length = 4};
//variable 'mod_barret_128_a_1' value: 0xf060d23b5f3fa268eda14594726160ee02920e1316a1ad20dfd9520e62adaf4
uint32_t mod_barret_128_a_1_tab [8] = {0xe62adaf4, 0x0dfd9520, 0x316a1ad2, 0xe02920e1, 0x4726160e, 0x8eda1459, 0xb5f3fa26, 0xf060d23};
bn_uint_t mod_barret_128_a_1= {.number = mod_barret_128_a_1_tab, .length = 8};
//variable 'mod_barret_128_res_1' value: 0x58e44ef9056a2f4044d7d2569b056b6e
uint32_t mod_barret_128_res_1_tab [4] = {0x9b056b6e, 0x44d7d256, 0x056a2f40, 0x58e44ef9};
bn_uint_t mod_barret_128_res_1= {.number = mod_barret_128_res_1_tab, .length = 4};
//variable 'mod_barret_128_a_2' value: 0x4bd2c16d76945ca3ba2674a417341621ced55cd07fb0847a9a51eb7c2aaf85ad
uint32_t mod_barret_128_a_2_tab [8] = {0x2aaf85ad, 0x9a51eb7c, 0x7fb0847a, 0xced55cd0, 0x17341621, 0xba2674a4, 0x76945ca3, 0x4bd2c16d};
bn_uint_t mod_barret_128_a_2= {.number = mod_barret_128_a_2_tab, .length = 8};
//variable 'mod_barret_128_res_2' value: 0xa37919108dea63fa70ec1f1fef180316
uint32_t mod_barret_128_res_2_tab [4] = {0xef180316, 0x70ec1f1f, 0x8dea63fa, 0xa3791910};
bn_uint_t mod_barret_128_res_2= {.number = mod_barret_128_res_2_tab, .length = 4};
//variable 'mod_barret_128_a_3' value: 0xe0ded9eeeb9a920170b11d54aa497c9bcb0327b6ee56fd0034fca76adc829258
uint32_t mod_barret_128_a_3_tab [8] = {0xdc829258, 0x34fca76a, 0xee56fd00, 0xcb0327b6, 0xaa497c9b, 0x70b11d54, 0xeb9a9201, 0xe0ded9ee};
bn_uint_t mod_barret_128_a_3= {.number = mod_barret_128_a_3_tab, .length = 8};
//variable 'mod_barret_128_res_3' value: 0x2dfb9f499baf42e3005e50851d8f6129
uint32_t mod_barret_128_res_3_tab [4] = {0x1d8f6129, 0x005e5085, 0x9baf42e3, 0x2dfb9f49};
bn_uint_t mod_barret_128_res_3= {.number = mod_barret_128_res_3_tab, .length = 4};
//variable 'mod_barret_128_a_4' value: 0x82e2c3a1fa90f0072483a0267f57b372ab1d7dc848ca25bc2900fd7c3da339d6
uint32_t mod_barret_128_a_4_tab [8] = {0x3da339d6, 0x2900fd7c, 0x48ca25bc, 0xab1d7dc8, 0x7f57b372, 0x2483a026, 0xfa90f007, 0x82e2c3a1};
bn_uint_t mod_barret_128_a_4= {.number = mod_barret_128_a_4_tab, .length = 8};
//variable 'mod_barret_128_res_4' value: 0xc171e35349209d094e318c3d075c0aca
uint32_t mod_barret_128_res_4_tab [4] = {0x075c0aca, 0x4e318c3d, 0x49209d09, 0xc171e353};
bn_uint_t mod_barret_128_res_4= {.number = mod_barret_128_res_4_tab, .length = 4};
//variable 'mod_barret_128_a_5' value: 0xf8644bff9f602ffcb59e77f730640ecab2a3c61d5ca9122182dbf09e638298f0
uint32_t mod_barret_128_a_5_tab [8] = {0x638298f0, 0x82dbf09e, 0x5ca91221, 0xb2a3c61d, 0x30640eca, 0xb59e77f7, 0x9f602ffc, 0xf8644bff};
bn_uint_t mod_barret_128_a_5= {.number = mod_barret_128_a_5_tab, .length = 8};
//variable 'mod_barret_128_res_5' value: 0x63904f90ecd1da2158cbf8953fc6b7a9
uint32_t mod_barret_128_res_5_tab [4] = {0x3fc6b7a9, 0x58cbf895, 0xecd1da21, 0x63904f90};
bn_uint_t mod_barret_128_res_5= {.number = mod_barret_128_res_5_tab, .length = 4};
//variable 'mod_barret_128_a_6' value: 0x9f1b3687cf4d524bb2c2b408b7326b696098f71591d8d75f305e4ca215f7541b
uint32_t mod_barret_128_a_6_tab [8] = {0x15f7541b, 0x305e4ca2, 0x91d8d75f, 0x6098f715, 0xb7326b69, 0xb2c2b408, 0xcf4d524b, 0x9f1b3687};
bn_uint_t mod_barret_128_a_6= {.number = mod_barret_128_a_6_tab, .length = 8};
//variable 'mod_barret_128_res_6' value: 0xa541cf829f5c96bcfe287f6668be250d
uint32_t mod_barret_128_res_6_tab [4] = {0x68be250d, 0xfe287f66, 0x9f5c96bc, 0xa541cf82};
bn_uint_t mod_barret_128_res_6= {.number = mod_barret_128_res_6_tab, .length = 4};
//variable 'mod_barret_128_a_7' value: 0x4232cbf4a663943956777cac8daf6ef8c3ed9393d5630bbc99c562912f804ea
uint32_t mod_barret_128_a_7_tab [8] = {0x12f804ea, 0xc99c5629, 0x3d5630bb, 0x8c3ed939, 0xc8daf6ef, 0x956777ca, 0x4a663943, 0x4232cbf};
bn_uint_t mod_barret_128_a_7= {.number = mod_barret_128_a_7_tab, .length = 8};
//variable 'mod_barret_128_res_7' value: 0xd1a69149002c37e045cf37851543678
uint32_t mod_barret_128_res_7_tab [4] = {0x51543678, 0x045cf378, 0x9002c37e, 0xd1a6914};
bn_uint_t mod_barret_128_res_7= {.number = mod_barret_128_res_7_tab, .length = 4};
//variable 'mod_barret_128_a_8' value: 0xa8af9612ef92a6f0cc227007d982a84d717429b38bad8c4a3a39528c058003dd
uint32_t mod_barret_128_a_8_tab [8] = {0x058003dd, 0x3a39528c, 0x8bad8c4a, 0x717429b3, 0xd982a84d, 0xcc227007, 0xef92a6f0, 0xa8af9612};
bn_uint_t mod_barret_128_a_8= {.number = mod_barret_128_a_8_tab, .length = 8};
//variable 'mod_barret_128_res_8' value: 0x541694dcc9f5f63883f68c67b0ed8a0
uint32_t mod_barret_128_res_8_tab [4] = {0x7b0ed8a0, 0x883f68c6, 0xcc9f5f63, 0x541694d};
bn_uint_t mod_barret_128_res_8= {.number = mod_barret_128_res_8_tab, .length = 4};
//variable 'mod_barret_128_a_9' value: 0x96fefc048a78ffbae58851474e048385a125a7c55e8965dfee32acdf260072db
uint32_t mod_barret_128_a_9_tab [8] = {0x260072db, 0xee32acdf, 0x5e8965df, 0xa125a7c5, 0x4e048385, 0xe5885147, 0x8a78ffba, 0x96fefc04};
bn_uint_t mod_barret_128_a_9= {.number = mod_barret_128_a_9_tab, .length = 8};
//variable 'mod_barret_128_res_9' value: 0x2e06ae2717005da644a8edb320f17809
uint32_t mod_barret_128_res_9_tab [4] = {0x20f17809, 0x44a8edb3, 0x17005da6, 0x2e06ae27};
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
//variable 'mul_mod_barret_128_a_0' value: 0xbb80ce3366b8fc7d25d5fe3e4ab6756f
uint32_t mul_mod_barret_128_a_0_tab [4] = {0x4ab6756f, 0x25d5fe3e, 0x66b8fc7d, 0xbb80ce33};
bn_uint_t mul_mod_barret_128_a_0= {.number = mul_mod_barret_128_a_0_tab, .length = 4};
//variable 'mul_mod_barret_128_b_0' value: 0xa06be944a0d9ee7b97bcebf0c41c804a
uint32_t mul_mod_barret_128_b_0_tab [4] = {0xc41c804a, 0x97bcebf0, 0xa0d9ee7b, 0xa06be944};
bn_uint_t mul_mod_barret_128_b_0= {.number = mul_mod_barret_128_b_0_tab, .length = 4};
//variable 'mul_mod_barret_128_res_0' value: 0x484835fc27827ddeb9878c6eaa44115c
uint32_t mul_mod_barret_128_res_0_tab [4] = {0xaa44115c, 0xb9878c6e, 0x27827dde, 0x484835fc};
bn_uint_t mul_mod_barret_128_res_0= {.number = mul_mod_barret_128_res_0_tab, .length = 4};
//variable 'mul_mod_barret_128_a_1' value: 0xde1de354cc9def77c8009a5abe165579
uint32_t mul_mod_barret_128_a_1_tab [4] = {0xbe165579, 0xc8009a5a, 0xcc9def77, 0xde1de354};
bn_uint_t mul_mod_barret_128_a_1= {.number = mul_mod_barret_128_a_1_tab, .length = 4};
//variable 'mul_mod_barret_128_b_1' value: 0xc79b26a69d8f98459ff78469ec11847c
uint32_t mul_mod_barret_128_b_1_tab [4] = {0xec11847c, 0x9ff78469, 0x9d8f9845, 0xc79b26a6};
bn_uint_t mul_mod_barret_128_b_1= {.number = mul_mod_barret_128_b_1_tab, .length = 4};
//variable 'mul_mod_barret_128_res_1' value: 0x8e270643dcb91f0763f87c11742754f6
uint32_t mul_mod_barret_128_res_1_tab [4] = {0x742754f6, 0x63f87c11, 0xdcb91f07, 0x8e270643};
bn_uint_t mul_mod_barret_128_res_1= {.number = mul_mod_barret_128_res_1_tab, .length = 4};
//variable 'mul_mod_barret_128_a_2' value: 0xf30efb7c6d576e13bec5cdf36ff50d01
uint32_t mul_mod_barret_128_a_2_tab [4] = {0x6ff50d01, 0xbec5cdf3, 0x6d576e13, 0xf30efb7c};
bn_uint_t mul_mod_barret_128_a_2= {.number = mul_mod_barret_128_a_2_tab, .length = 4};
//variable 'mul_mod_barret_128_b_2' value: 0xb51c394ee5a5d7adb58b621fcd3396d
uint32_t mul_mod_barret_128_b_2_tab [4] = {0xfcd3396d, 0xdb58b621, 0xee5a5d7a, 0xb51c394};
bn_uint_t mul_mod_barret_128_b_2= {.number = mul_mod_barret_128_b_2_tab, .length = 4};
//variable 'mul_mod_barret_128_res_2' value: 0x825b4ea3261f4f62ed47bacddc804253
uint32_t mul_mod_barret_128_res_2_tab [4] = {0xdc804253, 0xed47bacd, 0x261f4f62, 0x825b4ea3};
bn_uint_t mul_mod_barret_128_res_2= {.number = mul_mod_barret_128_res_2_tab, .length = 4};
//variable 'mul_mod_barret_128_a_3' value: 0xc9ac622ec813195b022bd467f3d9342
uint32_t mul_mod_barret_128_a_3_tab [4] = {0x7f3d9342, 0xb022bd46, 0xec813195, 0xc9ac622};
bn_uint_t mul_mod_barret_128_a_3= {.number = mul_mod_barret_128_a_3_tab, .length = 4};
//variable 'mul_mod_barret_128_b_3' value: 0x9960d47699740f8b1a2fa2bd654410b3
uint32_t mul_mod_barret_128_b_3_tab [4] = {0x654410b3, 0x1a2fa2bd, 0x99740f8b, 0x9960d476};
bn_uint_t mul_mod_barret_128_b_3= {.number = mul_mod_barret_128_b_3_tab, .length = 4};
//variable 'mul_mod_barret_128_res_3' value: 0x4a846cd3b678366d2dfcd75b6199ddbe
uint32_t mul_mod_barret_128_res_3_tab [4] = {0x6199ddbe, 0x2dfcd75b, 0xb678366d, 0x4a846cd3};
bn_uint_t mul_mod_barret_128_res_3= {.number = mul_mod_barret_128_res_3_tab, .length = 4};
//variable 'mul_mod_barret_128_a_4' value: 0xef30df0e589d2caf25e0d9a874c85d82
uint32_t mul_mod_barret_128_a_4_tab [4] = {0x74c85d82, 0x25e0d9a8, 0x589d2caf, 0xef30df0e};
bn_uint_t mul_mod_barret_128_a_4= {.number = mul_mod_barret_128_a_4_tab, .length = 4};
//variable 'mul_mod_barret_128_b_4' value: 0x5cb410ac2dc5856776ced57374b13775
uint32_t mul_mod_barret_128_b_4_tab [4] = {0x74b13775, 0x76ced573, 0x2dc58567, 0x5cb410ac};
bn_uint_t mul_mod_barret_128_b_4= {.number = mul_mod_barret_128_b_4_tab, .length = 4};
//variable 'mul_mod_barret_128_res_4' value: 0xc494f1b7e820dc2bed1430c67afb7387
uint32_t mul_mod_barret_128_res_4_tab [4] = {0x7afb7387, 0xed1430c6, 0xe820dc2b, 0xc494f1b7};
bn_uint_t mul_mod_barret_128_res_4= {.number = mul_mod_barret_128_res_4_tab, .length = 4};
//variable 'mul_mod_barret_128_a_5' value: 0x1f0c748ce9351426975829cdfec5c5b1
uint32_t mul_mod_barret_128_a_5_tab [4] = {0xfec5c5b1, 0x975829cd, 0xe9351426, 0x1f0c748c};
bn_uint_t mul_mod_barret_128_a_5= {.number = mul_mod_barret_128_a_5_tab, .length = 4};
//variable 'mul_mod_barret_128_b_5' value: 0x158b26e6e71e89deb61d929f3ddabf8d
uint32_t mul_mod_barret_128_b_5_tab [4] = {0x3ddabf8d, 0xb61d929f, 0xe71e89de, 0x158b26e6};
bn_uint_t mul_mod_barret_128_b_5= {.number = mul_mod_barret_128_b_5_tab, .length = 4};
//variable 'mul_mod_barret_128_res_5' value: 0xa499dcb23db0320481899c2288be9f3c
uint32_t mul_mod_barret_128_res_5_tab [4] = {0x88be9f3c, 0x81899c22, 0x3db03204, 0xa499dcb2};
bn_uint_t mul_mod_barret_128_res_5= {.number = mul_mod_barret_128_res_5_tab, .length = 4};
//variable 'mul_mod_barret_128_a_6' value: 0x7f729bf0a15a119335cfab51c84f5c9c
uint32_t mul_mod_barret_128_a_6_tab [4] = {0xc84f5c9c, 0x35cfab51, 0xa15a1193, 0x7f729bf0};
bn_uint_t mul_mod_barret_128_a_6= {.number = mul_mod_barret_128_a_6_tab, .length = 4};
//variable 'mul_mod_barret_128_b_6' value: 0x8c4b342010d4c7418da8c5bcec2ca486
uint32_t mul_mod_barret_128_b_6_tab [4] = {0xec2ca486, 0x8da8c5bc, 0x10d4c741, 0x8c4b3420};
bn_uint_t mul_mod_barret_128_b_6= {.number = mul_mod_barret_128_b_6_tab, .length = 4};
//variable 'mul_mod_barret_128_res_6' value: 0x254ca4f8bfc91d621349a2f96ca9dfea
uint32_t mul_mod_barret_128_res_6_tab [4] = {0x6ca9dfea, 0x1349a2f9, 0xbfc91d62, 0x254ca4f8};
bn_uint_t mul_mod_barret_128_res_6= {.number = mul_mod_barret_128_res_6_tab, .length = 4};
//variable 'mul_mod_barret_128_a_7' value: 0xcca46e48d1cd7c58a0b09460b1ac53bd
uint32_t mul_mod_barret_128_a_7_tab [4] = {0xb1ac53bd, 0xa0b09460, 0xd1cd7c58, 0xcca46e48};
bn_uint_t mul_mod_barret_128_a_7= {.number = mul_mod_barret_128_a_7_tab, .length = 4};
//variable 'mul_mod_barret_128_b_7' value: 0x6d30b6a793668ff35cbabc500558a1ed
uint32_t mul_mod_barret_128_b_7_tab [4] = {0x0558a1ed, 0x5cbabc50, 0x93668ff3, 0x6d30b6a7};
bn_uint_t mul_mod_barret_128_b_7= {.number = mul_mod_barret_128_b_7_tab, .length = 4};
//variable 'mul_mod_barret_128_res_7' value: 0x74af81926900dac1240f0b104475c673
uint32_t mul_mod_barret_128_res_7_tab [4] = {0x4475c673, 0x240f0b10, 0x6900dac1, 0x74af8192};
bn_uint_t mul_mod_barret_128_res_7= {.number = mul_mod_barret_128_res_7_tab, .length = 4};
//variable 'mul_mod_barret_128_a_8' value: 0x65e81acf5185ac42b023ba2daa08dea0
uint32_t mul_mod_barret_128_a_8_tab [4] = {0xaa08dea0, 0xb023ba2d, 0x5185ac42, 0x65e81acf};
bn_uint_t mul_mod_barret_128_a_8= {.number = mul_mod_barret_128_a_8_tab, .length = 4};
//variable 'mul_mod_barret_128_b_8' value: 0x8ba44a2ea296f961ff419513bed939cf
uint32_t mul_mod_barret_128_b_8_tab [4] = {0xbed939cf, 0xff419513, 0xa296f961, 0x8ba44a2e};
bn_uint_t mul_mod_barret_128_b_8= {.number = mul_mod_barret_128_b_8_tab, .length = 4};
//variable 'mul_mod_barret_128_res_8' value: 0x76cbe62f66c1b85ff5d6c401a8079dda
uint32_t mul_mod_barret_128_res_8_tab [4] = {0xa8079dda, 0xf5d6c401, 0x66c1b85f, 0x76cbe62f};
bn_uint_t mul_mod_barret_128_res_8= {.number = mul_mod_barret_128_res_8_tab, .length = 4};
//variable 'mul_mod_barret_128_a_9' value: 0x8bfb4ab50af02a8d2e8b3fb8b754198a
uint32_t mul_mod_barret_128_a_9_tab [4] = {0xb754198a, 0x2e8b3fb8, 0x0af02a8d, 0x8bfb4ab5};
bn_uint_t mul_mod_barret_128_a_9= {.number = mul_mod_barret_128_a_9_tab, .length = 4};
//variable 'mul_mod_barret_128_b_9' value: 0x581d4db7ee1dc564af28e37bcb5236dd
uint32_t mul_mod_barret_128_b_9_tab [4] = {0xcb5236dd, 0xaf28e37b, 0xee1dc564, 0x581d4db7};
bn_uint_t mul_mod_barret_128_b_9= {.number = mul_mod_barret_128_b_9_tab, .length = 4};
//variable 'mul_mod_barret_128_res_9' value: 0x22642be6801aec557f43ef3abf814cd7
uint32_t mul_mod_barret_128_res_9_tab [4] = {0xbf814cd7, 0x7f43ef3a, 0x801aec55, 0x22642be6};
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
//variable 'mod_barret_256_a_0' value: 0xea99797e92025feb975123fddc9c29291d8105c6909df0520343803bf3eea68c483f3755ce5f34021410569ee68f6e4c7ea403ed43ab49197bbb13d0f76182d
uint32_t mod_barret_256_a_0_tab [16] = {0x0f76182d, 0x97bbb13d, 0xd43ab491, 0xc7ea403e, 0xee68f6e4, 0x21410569, 0x5ce5f340, 0xc483f375, 0xbf3eea68, 0x20343803, 0x6909df05, 0x91d8105c, 0xddc9c292, 0xb975123f, 0xe92025fe, 0xea99797};
bn_uint_t mod_barret_256_a_0= {.number = mod_barret_256_a_0_tab, .length = 16};
//variable 'mod_barret_256_res_0' value: 0x1d9ee0720f9b843f7a331e1d7cc8af7f72863e581dddd41c91f135dcdcb22f6c
uint32_t mod_barret_256_res_0_tab [8] = {0xdcb22f6c, 0x91f135dc, 0x1dddd41c, 0x72863e58, 0x7cc8af7f, 0x7a331e1d, 0x0f9b843f, 0x1d9ee072};
bn_uint_t mod_barret_256_res_0= {.number = mod_barret_256_res_0_tab, .length = 8};
//variable 'mod_barret_256_a_1' value: 0xc07cbd89505d3396775f93066d6caeb7b579e950502f6563e9321eff76df5aeab8f21997cdd94c482ceb9072690bedf537a9305eca6173a960a321e0e4ae632c
uint32_t mod_barret_256_a_1_tab [16] = {0xe4ae632c, 0x60a321e0, 0xca6173a9, 0x37a9305e, 0x690bedf5, 0x2ceb9072, 0xcdd94c48, 0xb8f21997, 0x76df5aea, 0xe9321eff, 0x502f6563, 0xb579e950, 0x6d6caeb7, 0x775f9306, 0x505d3396, 0xc07cbd89};
bn_uint_t mod_barret_256_a_1= {.number = mod_barret_256_a_1_tab, .length = 16};
//variable 'mod_barret_256_res_1' value: 0x86d21caf57387b3977388c8149a020a3d447bbff47d13e36a45e73665a1c7e73
uint32_t mod_barret_256_res_1_tab [8] = {0x5a1c7e73, 0xa45e7366, 0x47d13e36, 0xd447bbff, 0x49a020a3, 0x77388c81, 0x57387b39, 0x86d21caf};
bn_uint_t mod_barret_256_res_1= {.number = mod_barret_256_res_1_tab, .length = 8};
//variable 'mod_barret_256_a_2' value: 0xe024f76a415612183cfbe57e365b0a46fee60cf987356f1dd4d21f5cba8f8c683ff721e00208d2a46d45e3449a7448fcb3a0c9605a62121db84ba462fd012e20
uint32_t mod_barret_256_a_2_tab [16] = {0xfd012e20, 0xb84ba462, 0x5a62121d, 0xb3a0c960, 0x9a7448fc, 0x6d45e344, 0x0208d2a4, 0x3ff721e0, 0xba8f8c68, 0xd4d21f5c, 0x87356f1d, 0xfee60cf9, 0x365b0a46, 0x3cfbe57e, 0x41561218, 0xe024f76a};
bn_uint_t mod_barret_256_a_2= {.number = mod_barret_256_a_2_tab, .length = 16};
//variable 'mod_barret_256_res_2' value: 0xa18328ae33ef3179c3f34dc46670ac23eb983a2d82069f337f813995d8cfcb10
uint32_t mod_barret_256_res_2_tab [8] = {0xd8cfcb10, 0x7f813995, 0x82069f33, 0xeb983a2d, 0x6670ac23, 0xc3f34dc4, 0x33ef3179, 0xa18328ae};
bn_uint_t mod_barret_256_res_2= {.number = mod_barret_256_res_2_tab, .length = 8};
//variable 'mod_barret_256_a_3' value: 0x47727951ad8b90fb9af44e3a276feca3327dd0a39526a36bf8c3120a7e68f68e70dcee0eadfeac1e17c8f8e6a5cff201c18455bbaf33e744c55a72244f6f7c68
uint32_t mod_barret_256_a_3_tab [16] = {0x4f6f7c68, 0xc55a7224, 0xaf33e744, 0xc18455bb, 0xa5cff201, 0x17c8f8e6, 0xadfeac1e, 0x70dcee0e, 0x7e68f68e, 0xf8c3120a, 0x9526a36b, 0x327dd0a3, 0x276feca3, 0x9af44e3a, 0xad8b90fb, 0x47727951};
bn_uint_t mod_barret_256_a_3= {.number = mod_barret_256_a_3_tab, .length = 16};
//variable 'mod_barret_256_res_3' value: 0x3b94a1a6694e97552896bc944a3a434151b59c97e6e602cc9be1e270242de885
uint32_t mod_barret_256_res_3_tab [8] = {0x242de885, 0x9be1e270, 0xe6e602cc, 0x51b59c97, 0x4a3a4341, 0x2896bc94, 0x694e9755, 0x3b94a1a6};
bn_uint_t mod_barret_256_res_3= {.number = mod_barret_256_res_3_tab, .length = 8};
//variable 'mod_barret_256_a_4' value: 0x7dfff918eb6a512c40c2f961d3a601fc0e5e6fef4ddf78876b8c6425d5972291c908b9f330447174410fec1579362adf33b6f04201e562652bd86286433589c6
uint32_t mod_barret_256_a_4_tab [16] = {0x433589c6, 0x2bd86286, 0x01e56265, 0x33b6f042, 0x79362adf, 0x410fec15, 0x30447174, 0xc908b9f3, 0xd5972291, 0x6b8c6425, 0x4ddf7887, 0x0e5e6fef, 0xd3a601fc, 0x40c2f961, 0xeb6a512c, 0x7dfff918};
bn_uint_t mod_barret_256_a_4= {.number = mod_barret_256_a_4_tab, .length = 16};
//variable 'mod_barret_256_res_4' value: 0xa7f8e3fcee22c9d4bb2c91d3d4069619795f4da8b3f607346770f99076275405
uint32_t mod_barret_256_res_4_tab [8] = {0x76275405, 0x6770f990, 0xb3f60734, 0x795f4da8, 0xd4069619, 0xbb2c91d3, 0xee22c9d4, 0xa7f8e3fc};
bn_uint_t mod_barret_256_res_4= {.number = mod_barret_256_res_4_tab, .length = 8};
//variable 'mod_barret_256_a_5' value: 0x39a3118001b02cd4e95e57d819d8f5a1cc3dedd2ab5536d0c9b077f3bf3ca5b88bc7a034f907437b1dc46b1982d0ee08dce8ccfec686655cf531647493572380
uint32_t mod_barret_256_a_5_tab [16] = {0x93572380, 0xf5316474, 0xc686655c, 0xdce8ccfe, 0x82d0ee08, 0x1dc46b19, 0xf907437b, 0x8bc7a034, 0xbf3ca5b8, 0xc9b077f3, 0xab5536d0, 0xcc3dedd2, 0x19d8f5a1, 0xe95e57d8, 0x01b02cd4, 0x39a31180};
bn_uint_t mod_barret_256_a_5= {.number = mod_barret_256_a_5_tab, .length = 16};
//variable 'mod_barret_256_res_5' value: 0x7d230850d1cf2725b5f1615015ea070ccfe4bc931967f3d32bac876a4b1ed90b
uint32_t mod_barret_256_res_5_tab [8] = {0x4b1ed90b, 0x2bac876a, 0x1967f3d3, 0xcfe4bc93, 0x15ea070c, 0xb5f16150, 0xd1cf2725, 0x7d230850};
bn_uint_t mod_barret_256_res_5= {.number = mod_barret_256_res_5_tab, .length = 8};
//variable 'mod_barret_256_a_6' value: 0x9739aef701d20ed487094c389a3cc4a66dbbb971fb0c08490c96ce9305e362cf4d71b8dfbea117edf796f5b6948a8b6488530584952f06169e91c71d80f83d7d
uint32_t mod_barret_256_a_6_tab [16] = {0x80f83d7d, 0x9e91c71d, 0x952f0616, 0x88530584, 0x948a8b64, 0xf796f5b6, 0xbea117ed, 0x4d71b8df, 0x05e362cf, 0x0c96ce93, 0xfb0c0849, 0x6dbbb971, 0x9a3cc4a6, 0x87094c38, 0x01d20ed4, 0x9739aef7};
bn_uint_t mod_barret_256_a_6= {.number = mod_barret_256_a_6_tab, .length = 16};
//variable 'mod_barret_256_res_6' value: 0x8ef455fc6719bd2f37bf990cd145e51a75996d92dde1bdccebe2cf4f029e95bb
uint32_t mod_barret_256_res_6_tab [8] = {0x029e95bb, 0xebe2cf4f, 0xdde1bdcc, 0x75996d92, 0xd145e51a, 0x37bf990c, 0x6719bd2f, 0x8ef455fc};
bn_uint_t mod_barret_256_res_6= {.number = mod_barret_256_res_6_tab, .length = 8};
//variable 'mod_barret_256_a_7' value: 0xbf2c90f2bb7a1d9df873b06ce69fa7197ca16f91158ceee5a171622b4d3b6c53945c57be996e2438b2edca71687c7a6e12d9e4512b55b3d2725059cf40aa03a4
uint32_t mod_barret_256_a_7_tab [16] = {0x40aa03a4, 0x725059cf, 0x2b55b3d2, 0x12d9e451, 0x687c7a6e, 0xb2edca71, 0x996e2438, 0x945c57be, 0x4d3b6c53, 0xa171622b, 0x158ceee5, 0x7ca16f91, 0xe69fa719, 0xf873b06c, 0xbb7a1d9d, 0xbf2c90f2};
bn_uint_t mod_barret_256_a_7= {.number = mod_barret_256_a_7_tab, .length = 16};
//variable 'mod_barret_256_res_7' value: 0xaddbc0f053fc80e547c799032b1ef60723f6629f4a69b34acf94a4c91827ed6f
uint32_t mod_barret_256_res_7_tab [8] = {0x1827ed6f, 0xcf94a4c9, 0x4a69b34a, 0x23f6629f, 0x2b1ef607, 0x47c79903, 0x53fc80e5, 0xaddbc0f0};
bn_uint_t mod_barret_256_res_7= {.number = mod_barret_256_res_7_tab, .length = 8};
//variable 'mod_barret_256_a_8' value: 0x7ad398bc3c25d5267efef66743eab59791a7a6ace153b2dfc1826e6d043df8a5a9c6b9825ff82308f36b1814f21cc20b75f66fa287c5755ca84e55e3af88ef45
uint32_t mod_barret_256_a_8_tab [16] = {0xaf88ef45, 0xa84e55e3, 0x87c5755c, 0x75f66fa2, 0xf21cc20b, 0xf36b1814, 0x5ff82308, 0xa9c6b982, 0x043df8a5, 0xc1826e6d, 0xe153b2df, 0x91a7a6ac, 0x43eab597, 0x7efef667, 0x3c25d526, 0x7ad398bc};
bn_uint_t mod_barret_256_a_8= {.number = mod_barret_256_a_8_tab, .length = 16};
//variable 'mod_barret_256_res_8' value: 0xe89a76d2c34f6349718cee60113fcde25f861ec2c4c86a9ed1415d4ee4922e86
uint32_t mod_barret_256_res_8_tab [8] = {0xe4922e86, 0xd1415d4e, 0xc4c86a9e, 0x5f861ec2, 0x113fcde2, 0x718cee60, 0xc34f6349, 0xe89a76d2};
bn_uint_t mod_barret_256_res_8= {.number = mod_barret_256_res_8_tab, .length = 8};
//variable 'mod_barret_256_a_9' value: 0x35232b062ef2d23dd93e9a398ba66f22ec38b77890a2ad1612f73cfb1a238e04ddbcea155eb9248e4d214d4f336f96819cc14de62fb3c695a39a8be7251079ff
uint32_t mod_barret_256_a_9_tab [16] = {0x251079ff, 0xa39a8be7, 0x2fb3c695, 0x9cc14de6, 0x336f9681, 0x4d214d4f, 0x5eb9248e, 0xddbcea15, 0x1a238e04, 0x12f73cfb, 0x90a2ad16, 0xec38b778, 0x8ba66f22, 0xd93e9a39, 0x2ef2d23d, 0x35232b06};
bn_uint_t mod_barret_256_a_9= {.number = mod_barret_256_a_9_tab, .length = 16};
//variable 'mod_barret_256_res_9' value: 0xb5898b4201fbc08e15cbecb58892916703803f506f3a93a67e396f57d21ab1ec
uint32_t mod_barret_256_res_9_tab [8] = {0xd21ab1ec, 0x7e396f57, 0x6f3a93a6, 0x03803f50, 0x88929167, 0x15cbecb5, 0x01fbc08e, 0xb5898b42};
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
//variable 'mul_mod_barret_256_a_0' value: 0xacc1934a0e597cfa26dbc0d911b72ee4fa258c10d66fc62327e2278fd27acd51
uint32_t mul_mod_barret_256_a_0_tab [8] = {0xd27acd51, 0x27e2278f, 0xd66fc623, 0xfa258c10, 0x11b72ee4, 0x26dbc0d9, 0x0e597cfa, 0xacc1934a};
bn_uint_t mul_mod_barret_256_a_0= {.number = mul_mod_barret_256_a_0_tab, .length = 8};
//variable 'mul_mod_barret_256_b_0' value: 0x1a4016d815098ceebbd1d0dc02995b206c5cbcc9040a2b58352b9a3557e4fbcf
uint32_t mul_mod_barret_256_b_0_tab [8] = {0x57e4fbcf, 0x352b9a35, 0x040a2b58, 0x6c5cbcc9, 0x02995b20, 0xbbd1d0dc, 0x15098cee, 0x1a4016d8};
bn_uint_t mul_mod_barret_256_b_0= {.number = mul_mod_barret_256_b_0_tab, .length = 8};
//variable 'mul_mod_barret_256_res_0' value: 0xc473bf743e89a0a3b990abd49ab3c73cc9d312b0c92d4aff48518f14d535d744
uint32_t mul_mod_barret_256_res_0_tab [8] = {0xd535d744, 0x48518f14, 0xc92d4aff, 0xc9d312b0, 0x9ab3c73c, 0xb990abd4, 0x3e89a0a3, 0xc473bf74};
bn_uint_t mul_mod_barret_256_res_0= {.number = mul_mod_barret_256_res_0_tab, .length = 8};
//variable 'mul_mod_barret_256_a_1' value: 0xd752f7f4158cd65849090265fac7ee8737dc31468e01afc8214756a1f4198c2f
uint32_t mul_mod_barret_256_a_1_tab [8] = {0xf4198c2f, 0x214756a1, 0x8e01afc8, 0x37dc3146, 0xfac7ee87, 0x49090265, 0x158cd658, 0xd752f7f4};
bn_uint_t mul_mod_barret_256_a_1= {.number = mul_mod_barret_256_a_1_tab, .length = 8};
//variable 'mul_mod_barret_256_b_1' value: 0x8e9a8515e4ab21d24c50053396d486dcd62f2befffa649d490f04c7d97f7cd8c
uint32_t mul_mod_barret_256_b_1_tab [8] = {0x97f7cd8c, 0x90f04c7d, 0xffa649d4, 0xd62f2bef, 0x96d486dc, 0x4c500533, 0xe4ab21d2, 0x8e9a8515};
bn_uint_t mul_mod_barret_256_b_1= {.number = mul_mod_barret_256_b_1_tab, .length = 8};
//variable 'mul_mod_barret_256_res_1' value: 0x7c56cb88b39e6b23f9752386d1eec007561669105e55a6beb4f88e9562b1bed4
uint32_t mul_mod_barret_256_res_1_tab [8] = {0x62b1bed4, 0xb4f88e95, 0x5e55a6be, 0x56166910, 0xd1eec007, 0xf9752386, 0xb39e6b23, 0x7c56cb88};
bn_uint_t mul_mod_barret_256_res_1= {.number = mul_mod_barret_256_res_1_tab, .length = 8};
//variable 'mul_mod_barret_256_a_2' value: 0x80fb1fbe7c20a5bc0e33cc330befc21319fa9fbd514fc5fe775fdb171d9368c1
uint32_t mul_mod_barret_256_a_2_tab [8] = {0x1d9368c1, 0x775fdb17, 0x514fc5fe, 0x19fa9fbd, 0x0befc213, 0x0e33cc33, 0x7c20a5bc, 0x80fb1fbe};
bn_uint_t mul_mod_barret_256_a_2= {.number = mul_mod_barret_256_a_2_tab, .length = 8};
//variable 'mul_mod_barret_256_b_2' value: 0xe451023276f5e019daeb634c0739753ffc584bc26c88252659bb1f8ab8a2cceb
uint32_t mul_mod_barret_256_b_2_tab [8] = {0xb8a2cceb, 0x59bb1f8a, 0x6c882526, 0xfc584bc2, 0x0739753f, 0xdaeb634c, 0x76f5e019, 0xe4510232};
bn_uint_t mul_mod_barret_256_b_2= {.number = mul_mod_barret_256_b_2_tab, .length = 8};
//variable 'mul_mod_barret_256_res_2' value: 0x5dfb1dd5593f36980ee0f43de6827d03534678d7f07a32ec11c34159b88c06ae
uint32_t mul_mod_barret_256_res_2_tab [8] = {0xb88c06ae, 0x11c34159, 0xf07a32ec, 0x534678d7, 0xe6827d03, 0x0ee0f43d, 0x593f3698, 0x5dfb1dd5};
bn_uint_t mul_mod_barret_256_res_2= {.number = mul_mod_barret_256_res_2_tab, .length = 8};
//variable 'mul_mod_barret_256_a_3' value: 0x96bfc02d658f3e9d4c158d9ea8bc882fe873de2948d0429a84d3d75b2f0664c2
uint32_t mul_mod_barret_256_a_3_tab [8] = {0x2f0664c2, 0x84d3d75b, 0x48d0429a, 0xe873de29, 0xa8bc882f, 0x4c158d9e, 0x658f3e9d, 0x96bfc02d};
bn_uint_t mul_mod_barret_256_a_3= {.number = mul_mod_barret_256_a_3_tab, .length = 8};
//variable 'mul_mod_barret_256_b_3' value: 0x342884c1f484b9821f10b0f599f73524630d6b89fe0e9582636c97c3e3f4d57c
uint32_t mul_mod_barret_256_b_3_tab [8] = {0xe3f4d57c, 0x636c97c3, 0xfe0e9582, 0x630d6b89, 0x99f73524, 0x1f10b0f5, 0xf484b982, 0x342884c1};
bn_uint_t mul_mod_barret_256_b_3= {.number = mul_mod_barret_256_b_3_tab, .length = 8};
//variable 'mul_mod_barret_256_res_3' value: 0xb3b6a88221857ff43fbb95c959c79b9f7ca243fc9addfcf636af8be1008faca4
uint32_t mul_mod_barret_256_res_3_tab [8] = {0x008faca4, 0x36af8be1, 0x9addfcf6, 0x7ca243fc, 0x59c79b9f, 0x3fbb95c9, 0x21857ff4, 0xb3b6a882};
bn_uint_t mul_mod_barret_256_res_3= {.number = mul_mod_barret_256_res_3_tab, .length = 8};
//variable 'mul_mod_barret_256_a_4' value: 0x94764dbb47c5cb82851afc15eae54b98221290a54288fdf07a5e38462daa037d
uint32_t mul_mod_barret_256_a_4_tab [8] = {0x2daa037d, 0x7a5e3846, 0x4288fdf0, 0x221290a5, 0xeae54b98, 0x851afc15, 0x47c5cb82, 0x94764dbb};
bn_uint_t mul_mod_barret_256_a_4= {.number = mul_mod_barret_256_a_4_tab, .length = 8};
//variable 'mul_mod_barret_256_b_4' value: 0x4dbf72d66ffc5c70577e1b29ba230b509adfa417678792cd741fe313167bb5f3
uint32_t mul_mod_barret_256_b_4_tab [8] = {0x167bb5f3, 0x741fe313, 0x678792cd, 0x9adfa417, 0xba230b50, 0x577e1b29, 0x6ffc5c70, 0x4dbf72d6};
bn_uint_t mul_mod_barret_256_b_4= {.number = mul_mod_barret_256_b_4_tab, .length = 8};
//variable 'mul_mod_barret_256_res_4' value: 0xb5339db8765224d56cb703190cdbfc4aaad739e906b3bc62bb6260227f342730
uint32_t mul_mod_barret_256_res_4_tab [8] = {0x7f342730, 0xbb626022, 0x06b3bc62, 0xaad739e9, 0x0cdbfc4a, 0x6cb70319, 0x765224d5, 0xb5339db8};
bn_uint_t mul_mod_barret_256_res_4= {.number = mul_mod_barret_256_res_4_tab, .length = 8};
//variable 'mul_mod_barret_256_a_5' value: 0x4e8f4865cfb10e19267e74bc2ede893debd608463713960ba387c3a52b951654
uint32_t mul_mod_barret_256_a_5_tab [8] = {0x2b951654, 0xa387c3a5, 0x3713960b, 0xebd60846, 0x2ede893d, 0x267e74bc, 0xcfb10e19, 0x4e8f4865};
bn_uint_t mul_mod_barret_256_a_5= {.number = mul_mod_barret_256_a_5_tab, .length = 8};
//variable 'mul_mod_barret_256_b_5' value: 0x322e022887cc39a91d98b7fb00fb0b95e3fca6307e0c5147243e6208cc4101ce
uint32_t mul_mod_barret_256_b_5_tab [8] = {0xcc4101ce, 0x243e6208, 0x7e0c5147, 0xe3fca630, 0x00fb0b95, 0x1d98b7fb, 0x87cc39a9, 0x322e0228};
bn_uint_t mul_mod_barret_256_b_5= {.number = mul_mod_barret_256_b_5_tab, .length = 8};
//variable 'mul_mod_barret_256_res_5' value: 0x1794b5076381327bbde86138677a6d28d2f3e056fd41f56b66966157ce389115
uint32_t mul_mod_barret_256_res_5_tab [8] = {0xce389115, 0x66966157, 0xfd41f56b, 0xd2f3e056, 0x677a6d28, 0xbde86138, 0x6381327b, 0x1794b507};
bn_uint_t mul_mod_barret_256_res_5= {.number = mul_mod_barret_256_res_5_tab, .length = 8};
//variable 'mul_mod_barret_256_a_6' value: 0x59325b7f646325f8a81800c16d68022efe8115665271050ebd2e546f06a8e2dc
uint32_t mul_mod_barret_256_a_6_tab [8] = {0x06a8e2dc, 0xbd2e546f, 0x5271050e, 0xfe811566, 0x6d68022e, 0xa81800c1, 0x646325f8, 0x59325b7f};
bn_uint_t mul_mod_barret_256_a_6= {.number = mul_mod_barret_256_a_6_tab, .length = 8};
//variable 'mul_mod_barret_256_b_6' value: 0xcfbf40799aed6ddda7c0ad8084df0f5104e751deb4f2a5088a9521dd712e080e
uint32_t mul_mod_barret_256_b_6_tab [8] = {0x712e080e, 0x8a9521dd, 0xb4f2a508, 0x04e751de, 0x84df0f51, 0xa7c0ad80, 0x9aed6ddd, 0xcfbf4079};
bn_uint_t mul_mod_barret_256_b_6= {.number = mul_mod_barret_256_b_6_tab, .length = 8};
//variable 'mul_mod_barret_256_res_6' value: 0x1ca6a12f41913a75fb94b6eb303d7bd05f8f4293817d119f181d07a54807598
uint32_t mul_mod_barret_256_res_6_tab [8] = {0x54807598, 0xf181d07a, 0x3817d119, 0x05f8f429, 0xb303d7bd, 0x5fb94b6e, 0xf41913a7, 0x1ca6a12};
bn_uint_t mul_mod_barret_256_res_6= {.number = mul_mod_barret_256_res_6_tab, .length = 8};
//variable 'mul_mod_barret_256_a_7' value: 0x1e0f13281d1179f40cd4609be635bf827cb7b62dc1890cc05a5c873dce07a8dc
uint32_t mul_mod_barret_256_a_7_tab [8] = {0xce07a8dc, 0x5a5c873d, 0xc1890cc0, 0x7cb7b62d, 0xe635bf82, 0x0cd4609b, 0x1d1179f4, 0x1e0f1328};
bn_uint_t mul_mod_barret_256_a_7= {.number = mul_mod_barret_256_a_7_tab, .length = 8};
//variable 'mul_mod_barret_256_b_7' value: 0x213a482149a3645d3a162b67baabc63438692adaf4c5cff15c4daf5b24efcd42
uint32_t mul_mod_barret_256_b_7_tab [8] = {0x24efcd42, 0x5c4daf5b, 0xf4c5cff1, 0x38692ada, 0xbaabc634, 0x3a162b67, 0x49a3645d, 0x213a4821};
bn_uint_t mul_mod_barret_256_b_7= {.number = mul_mod_barret_256_b_7_tab, .length = 8};
//variable 'mul_mod_barret_256_res_7' value: 0xfdf023f8e7ec2c1882bf9fd20c12aeaab790056ba242ff19a7d2223acaf7d3e5
uint32_t mul_mod_barret_256_res_7_tab [8] = {0xcaf7d3e5, 0xa7d2223a, 0xa242ff19, 0xb790056b, 0x0c12aeaa, 0x82bf9fd2, 0xe7ec2c18, 0xfdf023f8};
bn_uint_t mul_mod_barret_256_res_7= {.number = mul_mod_barret_256_res_7_tab, .length = 8};
//variable 'mul_mod_barret_256_a_8' value: 0xb74ce34db7a4e2685af5799d1bda915afbcbff362918a1b1fb55492d9e78897d
uint32_t mul_mod_barret_256_a_8_tab [8] = {0x9e78897d, 0xfb55492d, 0x2918a1b1, 0xfbcbff36, 0x1bda915a, 0x5af5799d, 0xb7a4e268, 0xb74ce34d};
bn_uint_t mul_mod_barret_256_a_8= {.number = mul_mod_barret_256_a_8_tab, .length = 8};
//variable 'mul_mod_barret_256_b_8' value: 0xdf7cd8b38d9ad45300292ccf55af8fcc409a2df40054098e20b99cd85a851957
uint32_t mul_mod_barret_256_b_8_tab [8] = {0x5a851957, 0x20b99cd8, 0x0054098e, 0x409a2df4, 0x55af8fcc, 0x00292ccf, 0x8d9ad453, 0xdf7cd8b3};
bn_uint_t mul_mod_barret_256_b_8= {.number = mul_mod_barret_256_b_8_tab, .length = 8};
//variable 'mul_mod_barret_256_res_8' value: 0xa7d2bedaea97721044c06059f3c08b118e49f76dc07fe1a67ecb5cd8ead08070
uint32_t mul_mod_barret_256_res_8_tab [8] = {0xead08070, 0x7ecb5cd8, 0xc07fe1a6, 0x8e49f76d, 0xf3c08b11, 0x44c06059, 0xea977210, 0xa7d2beda};
bn_uint_t mul_mod_barret_256_res_8= {.number = mul_mod_barret_256_res_8_tab, .length = 8};
//variable 'mul_mod_barret_256_a_9' value: 0x68b317757d33822b3e047687c2efffb46c07c11dcbecc6efc250a478db075563
uint32_t mul_mod_barret_256_a_9_tab [8] = {0xdb075563, 0xc250a478, 0xcbecc6ef, 0x6c07c11d, 0xc2efffb4, 0x3e047687, 0x7d33822b, 0x68b31775};
bn_uint_t mul_mod_barret_256_a_9= {.number = mul_mod_barret_256_a_9_tab, .length = 8};
//variable 'mul_mod_barret_256_b_9' value: 0x6ee476685e0f00f1a8ee1f4d37cf9018c6f13efe16441279c0757f0330d8ea60
uint32_t mul_mod_barret_256_b_9_tab [8] = {0x30d8ea60, 0xc0757f03, 0x16441279, 0xc6f13efe, 0x37cf9018, 0xa8ee1f4d, 0x5e0f00f1, 0x6ee47668};
bn_uint_t mul_mod_barret_256_b_9= {.number = mul_mod_barret_256_b_9_tab, .length = 8};
//variable 'mul_mod_barret_256_res_9' value: 0x1650b0dd118642608dd8558620ea7e92d13bfb0365edd7c1394498018811f0f0
uint32_t mul_mod_barret_256_res_9_tab [8] = {0x8811f0f0, 0x39449801, 0x65edd7c1, 0xd13bfb03, 0x20ea7e92, 0x8dd85586, 0x11864260, 0x1650b0dd};
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
