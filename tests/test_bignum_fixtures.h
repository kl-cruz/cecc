/*
File generate using external software
*/
#ifndef TEST_BIGNUM_VALUES_H_
#define TEST_BIGNUM_VALUES_H_
#include "bignum.h"

//variable 'add_128_a_0' value: 0xff5177aaa5182463343ab82761a0da93
uint32_t add_128_a_0_tab [4] = {0x61a0da93, 0x343ab827, 0xa5182463, 0xff5177aa};
bn_uint_t add_128_a_0= {.number = add_128_a_0_tab, .length = 4};
//variable 'add_128_b_0' value: 0xb4da58094f25443aba047c95d3641e67
uint32_t add_128_b_0_tab [4] = {0xd3641e67, 0xba047c95, 0x4f25443a, 0xb4da5809};
bn_uint_t add_128_b_0= {.number = add_128_b_0_tab, .length = 4};
//variable 'add_128_res_0' value: 0x1b42bcfb3f43d689dee3f34bd3504f8fa
uint32_t add_128_res_0_tab [5] = {0x3504f8fa, 0xee3f34bd, 0xf43d689d, 0xb42bcfb3, 0x1};
bn_uint_t add_128_res_0= {.number = add_128_res_0_tab, .length = 5};
uint32_t add_128_tab_len=1;
bn_uint_t *add_128_test_tab[1][3]={
{&add_128_a_0,&add_128_b_0,&add_128_res_0},
};
//variable 'add_256_a_0' value: 0x341f6b9fc694e7d213d74a6f8bc31032b4e7f47752ec86ec797abddfb1c5780f
uint32_t add_256_a_0_tab [8] = {0xb1c5780f, 0x797abddf, 0x52ec86ec, 0xb4e7f477, 0x8bc31032, 0x13d74a6f, 0xc694e7d2, 0x341f6b9f};
bn_uint_t add_256_a_0= {.number = add_256_a_0_tab, .length = 8};
//variable 'add_256_b_0' value: 0x19d079a26abdcab73584b8c14b9360346128757f2fb5a60983262df5e2f1aca4
uint32_t add_256_b_0_tab [8] = {0xe2f1aca4, 0x83262df5, 0x2fb5a609, 0x6128757f, 0x4b936034, 0x3584b8c1, 0x6abdcab7, 0x19d079a2};
bn_uint_t add_256_b_0= {.number = add_256_b_0_tab, .length = 8};
//variable 'add_256_res_0' value: 0x4defe5423152b289495c0330d7567067161069f682a22cf5fca0ebd594b724b3
uint32_t add_256_res_0_tab [8] = {0x94b724b3, 0xfca0ebd5, 0x82a22cf5, 0x161069f6, 0xd7567067, 0x495c0330, 0x3152b289, 0x4defe542};
bn_uint_t add_256_res_0= {.number = add_256_res_0_tab, .length = 8};
uint32_t add_256_tab_len=1;
bn_uint_t *add_256_test_tab[1][3]={
{&add_256_a_0,&add_256_b_0,&add_256_res_0},
};
//variable 'sub_128_a_0' value: 0x7245f77435843ef054b0761ce231e512
uint32_t sub_128_a_0_tab [4] = {0xe231e512, 0x54b0761c, 0x35843ef0, 0x7245f774};
bn_uint_t sub_128_a_0= {.number = sub_128_a_0_tab, .length = 4};
//variable 'sub_128_b_0' value: 0x3dff3924bef8dfee30af134df839bdf5
uint32_t sub_128_b_0_tab [4] = {0xf839bdf5, 0x30af134d, 0xbef8dfee, 0x3dff3924};
bn_uint_t sub_128_b_0= {.number = sub_128_b_0_tab, .length = 4};
//variable 'sub_128_res_0' value: 0x3446be4f768b5f02240162cee9f8271d
uint32_t sub_128_res_0_tab [4] = {0xe9f8271d, 0x240162ce, 0x768b5f02, 0x3446be4f};
bn_uint_t sub_128_res_0= {.number = sub_128_res_0_tab, .length = 4};
uint32_t sub_128_tab_len=1;
bn_uint_t *sub_128_test_tab[1][3]={
{&sub_128_a_0,&sub_128_b_0,&sub_128_res_0},
};
//variable 'sub_256_a_0' value: 0xf903d080b9e5fa6c1b1903c9c048965b7b96d4be153d5501f3f3949f3bb40382
uint32_t sub_256_a_0_tab [8] = {0x3bb40382, 0xf3f3949f, 0x153d5501, 0x7b96d4be, 0xc048965b, 0x1b1903c9, 0xb9e5fa6c, 0xf903d080};
bn_uint_t sub_256_a_0= {.number = sub_256_a_0_tab, .length = 8};
//variable 'sub_256_b_0' value: 0xcc21e5d7b15f88e8e726f796bde1b73854d9682e40f997fd555c3b4cf1aabe15
uint32_t sub_256_b_0_tab [8] = {0xf1aabe15, 0x555c3b4c, 0x40f997fd, 0x54d9682e, 0xbde1b738, 0xe726f796, 0xb15f88e8, 0xcc21e5d7};
bn_uint_t sub_256_b_0= {.number = sub_256_b_0_tab, .length = 8};
//variable 'sub_256_res_0' value: 0x2ce1eaa90886718333f20c330266df2326bd6c8fd443bd049e9759524a09456d
uint32_t sub_256_res_0_tab [8] = {0x4a09456d, 0x9e975952, 0xd443bd04, 0x26bd6c8f, 0x0266df23, 0x33f20c33, 0x08867183, 0x2ce1eaa9};
bn_uint_t sub_256_res_0= {.number = sub_256_res_0_tab, .length = 8};
uint32_t sub_256_tab_len=1;
bn_uint_t *sub_256_test_tab[1][3]={
{&sub_256_a_0,&sub_256_b_0,&sub_256_res_0},
};
//variable 'add_mod_128_a_0' value: 0x980ce11d704d3a8d5ff5aaf2d8bb6949
uint32_t add_mod_128_a_0_tab [4] = {0xd8bb6949, 0x5ff5aaf2, 0x704d3a8d, 0x980ce11d};
bn_uint_t add_mod_128_a_0= {.number = add_mod_128_a_0_tab, .length = 4};
//variable 'add_mod_128_b_0' value: 0xa8fb07cc68bbdd3828e955e4cbf34431
uint32_t add_mod_128_b_0_tab [4] = {0xcbf34431, 0x28e955e4, 0x68bbdd38, 0xa8fb07cc};
bn_uint_t add_mod_128_b_0= {.number = add_mod_128_b_0_tab, .length = 4};
//variable 'add_mod_128_p_0' value: 0x7d25505793baf3aa4ea13ac344595f35
uint32_t add_mod_128_p_0_tab [4] = {0x44595f35, 0x4ea13ac3, 0x93baf3aa, 0x7d255057};
bn_uint_t add_mod_128_p_0= {.number = add_mod_128_p_0_tab, .length = 4};
//variable 'add_mod_128_res_0' value: 0x46bd483ab1933070eb9c8b511bfbef10
uint32_t add_mod_128_res_0_tab [4] = {0x1bfbef10, 0xeb9c8b51, 0xb1933070, 0x46bd483a};
bn_uint_t add_mod_128_res_0= {.number = add_mod_128_res_0_tab, .length = 4};
uint32_t add_mod_128_tab_len=1;
bn_uint_t *add_mod_128_test_tab[1][4]={
{&add_mod_128_a_0,&add_mod_128_b_0,&add_mod_128_p_0,&add_mod_128_res_0},
};
//variable 'add_mod_256_a_0' value: 0x68c211a66c93574e46aed5e1e691b569d57c4875d6fac2513692351b2116cf72
uint32_t add_mod_256_a_0_tab [8] = {0x2116cf72, 0x3692351b, 0xd6fac251, 0xd57c4875, 0xe691b569, 0x46aed5e1, 0x6c93574e, 0x68c211a6};
bn_uint_t add_mod_256_a_0= {.number = add_mod_256_a_0_tab, .length = 8};
//variable 'add_mod_256_b_0' value: 0x94b8b75b5f0adee0b1860cd5c5c47d6829c406e03f5234c6ec6b00dbfe6529c6
uint32_t add_mod_256_b_0_tab [8] = {0xfe6529c6, 0xec6b00db, 0x3f5234c6, 0x29c406e0, 0xc5c47d68, 0xb1860cd5, 0x5f0adee0, 0x94b8b75b};
bn_uint_t add_mod_256_b_0= {.number = add_mod_256_b_0_tab, .length = 8};
//variable 'add_mod_256_p_0' value: 0x7a27b2de0117bc43e881411b6b0d01beb5af4d509a39d481f73098515c12b0c1
uint32_t add_mod_256_p_0_tab [8] = {0x5c12b0c1, 0xf7309851, 0x9a39d481, 0xb5af4d50, 0x6b0d01be, 0xe881411b, 0x0117bc43, 0x7a27b2de};
bn_uint_t add_mod_256_p_0= {.number = add_mod_256_p_0_tab, .length = 8};
//variable 'add_mod_256_res_0' value: 0x92b6345c96ebda727326080d63c2f5493e1b4b4e1d94e14349c0554675697b6
uint32_t add_mod_256_res_0_tab [8] = {0x675697b6, 0x349c0554, 0xe1d94e14, 0x93e1b4b4, 0xd63c2f54, 0x27326080, 0xc96ebda7, 0x92b6345};
bn_uint_t add_mod_256_res_0= {.number = add_mod_256_res_0_tab, .length = 8};
uint32_t add_mod_256_tab_len=1;
bn_uint_t *add_mod_256_test_tab[1][4]={
{&add_mod_256_a_0,&add_mod_256_b_0,&add_mod_256_p_0,&add_mod_256_res_0},
};
//variable 'sub_mod_128_a_0' value: 0x3e4e15a0f3f3c4f290ac3e21c381a213
uint32_t sub_mod_128_a_0_tab [4] = {0xc381a213, 0x90ac3e21, 0xf3f3c4f2, 0x3e4e15a0};
bn_uint_t sub_mod_128_a_0= {.number = sub_mod_128_a_0_tab, .length = 4};
//variable 'sub_mod_128_b_0' value: 0xdf1de767d0adc2d1a9724e5603896cf9
uint32_t sub_mod_128_b_0_tab [4] = {0x03896cf9, 0xa9724e56, 0xd0adc2d1, 0xdf1de767};
bn_uint_t sub_mod_128_b_0= {.number = sub_mod_128_b_0_tab, .length = 4};
//variable 'sub_mod_128_p_0' value: 0x8e4d1bc12581d4c9d959d1732e7fc022
uint32_t sub_mod_128_p_0_tab [4] = {0x2e7fc022, 0xd959d173, 0x2581d4c9, 0x8e4d1bc1};
bn_uint_t sub_mod_128_p_0= {.number = sub_mod_128_p_0_tab, .length = 4};
//variable 'sub_mod_128_res_0' value: 0x7bca65bb6e49abb499ed92b21cf7b55e
uint32_t sub_mod_128_res_0_tab [4] = {0x1cf7b55e, 0x99ed92b2, 0x6e49abb4, 0x7bca65bb};
bn_uint_t sub_mod_128_res_0= {.number = sub_mod_128_res_0_tab, .length = 4};
uint32_t sub_mod_128_tab_len=1;
bn_uint_t *sub_mod_128_test_tab[1][4]={
{&sub_mod_128_a_0,&sub_mod_128_b_0,&sub_mod_128_p_0,&sub_mod_128_res_0},
};
//variable 'sub_mod_256_a_0' value: 0x9ef25a9a9052ce9585cd278678725b27b16b65de90ac5de247cd39d268e1b71f
uint32_t sub_mod_256_a_0_tab [8] = {0x68e1b71f, 0x47cd39d2, 0x90ac5de2, 0xb16b65de, 0x78725b27, 0x85cd2786, 0x9052ce95, 0x9ef25a9a};
bn_uint_t sub_mod_256_a_0= {.number = sub_mod_256_a_0_tab, .length = 8};
//variable 'sub_mod_256_b_0' value: 0xca0f7101a3a8cc2622a366298018f9658e31caf440aad75dc82c5e692214185d
uint32_t sub_mod_256_b_0_tab [8] = {0x2214185d, 0xc82c5e69, 0x40aad75d, 0x8e31caf4, 0x8018f965, 0x22a36629, 0xa3a8cc26, 0xca0f7101};
bn_uint_t sub_mod_256_b_0= {.number = sub_mod_256_b_0_tab, .length = 8};
//variable 'sub_mod_256_p_0' value: 0xe82f6f19db8567a5d0044a7fa7024a4d1ded655a6a2c615cf02102437fc560dc
uint32_t sub_mod_256_p_0_tab [8] = {0x7fc560dc, 0xf0210243, 0x6a2c615c, 0x1ded655a, 0xa7024a4d, 0xd0044a7f, 0xdb8567a5, 0xe82f6f19};
bn_uint_t sub_mod_256_p_0= {.number = sub_mod_256_p_0_tab, .length = 8};
//variable 'sub_mod_256_res_0' value: 0xbd1258b2c82f6a15332e0bdc9f5bac0f41270044ba2de7e16fc1ddacc692ff9e
uint32_t sub_mod_256_res_0_tab [8] = {0xc692ff9e, 0x6fc1ddac, 0xba2de7e1, 0x41270044, 0x9f5bac0f, 0x332e0bdc, 0xc82f6a15, 0xbd1258b2};
bn_uint_t sub_mod_256_res_0= {.number = sub_mod_256_res_0_tab, .length = 8};
uint32_t sub_mod_256_tab_len=1;
bn_uint_t *sub_mod_256_test_tab[1][4]={
{&sub_mod_256_a_0,&sub_mod_256_b_0,&sub_mod_256_p_0,&sub_mod_256_res_0},
};
//variable 'shr_128_a_0' value: 0xbaf68a85a6985ee7190c79834847a900
uint32_t shr_128_a_0_tab [4] = {0x4847a900, 0x190c7983, 0xa6985ee7, 0xbaf68a85};
bn_uint_t shr_128_a_0= {.number = shr_128_a_0_tab, .length = 4};
//variable 'shr_128_res_0' value: 0x5d7b4542d34c2f738c863cc1a423d480
uint32_t shr_128_res_0_tab [4] = {0xa423d480, 0x8c863cc1, 0xd34c2f73, 0x5d7b4542};
bn_uint_t shr_128_res_0= {.number = shr_128_res_0_tab, .length = 4};
uint32_t shr_128_tab_len=1;
bn_uint_t *shr_128_test_tab[1][2]={
{&shr_128_a_0,&shr_128_res_0},
};
//variable 'shr_256_a_0' value: 0x4541a75a99a775f36a22e0b2e4c34e97288ba1c3d7cfcd0d08f594936b2d7694
uint32_t shr_256_a_0_tab [8] = {0x6b2d7694, 0x08f59493, 0xd7cfcd0d, 0x288ba1c3, 0xe4c34e97, 0x6a22e0b2, 0x99a775f3, 0x4541a75a};
bn_uint_t shr_256_a_0= {.number = shr_256_a_0_tab, .length = 8};
//variable 'shr_256_res_0' value: 0x22a0d3ad4cd3baf9b51170597261a74b9445d0e1ebe7e686847aca49b596bb4a
uint32_t shr_256_res_0_tab [8] = {0xb596bb4a, 0x847aca49, 0xebe7e686, 0x9445d0e1, 0x7261a74b, 0xb5117059, 0x4cd3baf9, 0x22a0d3ad};
bn_uint_t shr_256_res_0= {.number = shr_256_res_0_tab, .length = 8};
uint32_t shr_256_tab_len=1;
bn_uint_t *shr_256_test_tab[1][2]={
{&shr_256_a_0,&shr_256_res_0},
};
//variable 'inv_mod_128_a_0' value: 0x440fd77a8be08c54d496bff88468a363
uint32_t inv_mod_128_a_0_tab [4] = {0x8468a363, 0xd496bff8, 0x8be08c54, 0x440fd77a};
bn_uint_t inv_mod_128_a_0= {.number = inv_mod_128_a_0_tab, .length = 4};
//variable 'inv_mod_128_p_0' value: 0x9d1527b70cce3be37898e427c7a37307
uint32_t inv_mod_128_p_0_tab [4] = {0xc7a37307, 0x7898e427, 0x0cce3be3, 0x9d1527b7};
bn_uint_t inv_mod_128_p_0= {.number = inv_mod_128_p_0_tab, .length = 4};
//variable 'inv_mod_128_res_0' value: 0x618bccaf046b6df5f23597bb8834f87e
uint32_t inv_mod_128_res_0_tab [4] = {0x8834f87e, 0xf23597bb, 0x046b6df5, 0x618bccaf};
bn_uint_t inv_mod_128_res_0= {.number = inv_mod_128_res_0_tab, .length = 4};
uint32_t inv_mod_128_tab_len=1;
bn_uint_t *inv_mod_128_test_tab[1][3]={
{&inv_mod_128_a_0,&inv_mod_128_p_0,&inv_mod_128_res_0},
};
//variable 'inv_mod_256_a_0' value: 0xab67ef87f04b936978fef90ee6a023a6f903b61a6eea226d07697ccf8b2768f7
uint32_t inv_mod_256_a_0_tab [8] = {0x8b2768f7, 0x07697ccf, 0x6eea226d, 0xf903b61a, 0xe6a023a6, 0x78fef90e, 0xf04b9369, 0xab67ef87};
bn_uint_t inv_mod_256_a_0= {.number = inv_mod_256_a_0_tab, .length = 8};
//variable 'inv_mod_256_p_0' value: 0xe99877ec064174a29fbbee7fde32eb2f64b71225655400a37db48caea15561e9
uint32_t inv_mod_256_p_0_tab [8] = {0xa15561e9, 0x7db48cae, 0x655400a3, 0x64b71225, 0xde32eb2f, 0x9fbbee7f, 0x064174a2, 0xe99877ec};
bn_uint_t inv_mod_256_p_0= {.number = inv_mod_256_p_0_tab, .length = 8};
//variable 'inv_mod_256_res_0' value: 0x25c4146a66597a003a617e68d7b96164908af8d7523787dcf74bb1f69b9ab48f
uint32_t inv_mod_256_res_0_tab [8] = {0x9b9ab48f, 0xf74bb1f6, 0x523787dc, 0x908af8d7, 0xd7b96164, 0x3a617e68, 0x66597a00, 0x25c4146a};
bn_uint_t inv_mod_256_res_0= {.number = inv_mod_256_res_0_tab, .length = 8};
uint32_t inv_mod_256_tab_len=1;
bn_uint_t *inv_mod_256_test_tab[1][3]={
{&inv_mod_256_a_0,&inv_mod_256_p_0,&inv_mod_256_res_0},
};
//variable 'mul_128_a_0' value: 0x8520d54d1e37a200d953dccca38d5591
uint32_t mul_128_a_0_tab [4] = {0xa38d5591, 0xd953dccc, 0x1e37a200, 0x8520d54d};
bn_uint_t mul_128_a_0= {.number = mul_128_a_0_tab, .length = 4};
//variable 'mul_128_b_0' value: 0x8e509fd53448bf01d5834aa626ae33da
uint32_t mul_128_b_0_tab [4] = {0x26ae33da, 0xd5834aa6, 0x3448bf01, 0x8e509fd5};
bn_uint_t mul_128_b_0= {.number = mul_128_b_0_tab, .length = 4};
//variable 'mul_128_res_0' value: 0x4a0223b1b2d92c11e5da83dcfdb89001bb68952613a96bd9905955a21cf4c07a
uint32_t mul_128_res_0_tab [8] = {0x1cf4c07a, 0x905955a2, 0x13a96bd9, 0xbb689526, 0xfdb89001, 0xe5da83dc, 0xb2d92c11, 0x4a0223b1};
bn_uint_t mul_128_res_0= {.number = mul_128_res_0_tab, .length = 8};
uint32_t mul_128_tab_len=1;
bn_uint_t *mul_128_test_tab[1][3]={
{&mul_128_a_0,&mul_128_b_0,&mul_128_res_0},
};
//variable 'mul_256_a_0' value: 0xbfdad0c61ec63e5c11b94174f46390b8fccf378baed09112e4db6df184e8c9ea
uint32_t mul_256_a_0_tab [8] = {0x84e8c9ea, 0xe4db6df1, 0xaed09112, 0xfccf378b, 0xf46390b8, 0x11b94174, 0x1ec63e5c, 0xbfdad0c6};
bn_uint_t mul_256_a_0= {.number = mul_256_a_0_tab, .length = 8};
//variable 'mul_256_b_0' value: 0xa4339846be8e84729eb32f9cefd9198c2dbe068d1b1a957289f4768d5b53903a
uint32_t mul_256_b_0_tab [8] = {0x5b53903a, 0x89f4768d, 0x1b1a9572, 0x2dbe068d, 0xefd9198c, 0x9eb32f9c, 0xbe8e8472, 0xa4339846};
bn_uint_t mul_256_b_0= {.number = mul_256_b_0_tab, .length = 8};
//variable 'mul_256_res_0' value: 0x7b0ed87573c90f7919b09869b1fbd521bd09a033df7380dbef1d90a7759f25bf274907bf94be29d1c5955735c006b8db38b86bc6c624f1a8f56cac9cb32f5f04
uint32_t mul_256_res_0_tab [16] = {0xb32f5f04, 0xf56cac9c, 0xc624f1a8, 0x38b86bc6, 0xc006b8db, 0xc5955735, 0x94be29d1, 0x274907bf, 0x759f25bf, 0xef1d90a7, 0xdf7380db, 0xbd09a033, 0xb1fbd521, 0x19b09869, 0x73c90f79, 0x7b0ed875};
bn_uint_t mul_256_res_0= {.number = mul_256_res_0_tab, .length = 16};
uint32_t mul_256_tab_len=1;
bn_uint_t *mul_256_test_tab[1][3]={
{&mul_256_a_0,&mul_256_b_0,&mul_256_res_0},
};
//variable 'mod_barret_128_a_0' value: 0x958195d76e0c61c7a082072cf620e04c065fdfe1533842e357228577834b7d02
uint32_t mod_barret_128_a_0_tab [8] = {0x834b7d02, 0x57228577, 0x533842e3, 0x065fdfe1, 0xf620e04c, 0xa082072c, 0x6e0c61c7, 0x958195d7};
bn_uint_t mod_barret_128_a_0= {.number = mod_barret_128_a_0_tab, .length = 8};
//variable 'mod_barret_128_res_0' value: 0xd2a7becbec47d05c29c3a7961eaea18b
uint32_t mod_barret_128_res_0_tab [4] = {0x1eaea18b, 0x29c3a796, 0xec47d05c, 0xd2a7becb};
bn_uint_t mod_barret_128_res_0= {.number = mod_barret_128_res_0_tab, .length = 4};
//variable 'mod_barret_128_a_1' value: 0x6393a938a4d09d920e47ed56df301e468416c1cdf5bbf9ce52c78a4df17bf759
uint32_t mod_barret_128_a_1_tab [8] = {0xf17bf759, 0x52c78a4d, 0xf5bbf9ce, 0x8416c1cd, 0xdf301e46, 0x0e47ed56, 0xa4d09d92, 0x6393a938};
bn_uint_t mod_barret_128_a_1= {.number = mod_barret_128_a_1_tab, .length = 8};
//variable 'mod_barret_128_res_1' value: 0x3ee9dd1761b3e9d338ff57ae9d1bb061
uint32_t mod_barret_128_res_1_tab [4] = {0x9d1bb061, 0x38ff57ae, 0x61b3e9d3, 0x3ee9dd17};
bn_uint_t mod_barret_128_res_1= {.number = mod_barret_128_res_1_tab, .length = 4};
//variable 'mod_barret_128_a_2' value: 0x4786f048c300ab0948f8f17f8d8f52e2bbb69e78bb6c59d7e7f85d5497dc2f1a
uint32_t mod_barret_128_a_2_tab [8] = {0x97dc2f1a, 0xe7f85d54, 0xbb6c59d7, 0xbbb69e78, 0x8d8f52e2, 0x48f8f17f, 0xc300ab09, 0x4786f048};
bn_uint_t mod_barret_128_a_2= {.number = mod_barret_128_a_2_tab, .length = 8};
//variable 'mod_barret_128_res_2' value: 0xd2b457640d7ae573d50e660bff97936b
uint32_t mod_barret_128_res_2_tab [4] = {0xff97936b, 0xd50e660b, 0x0d7ae573, 0xd2b45764};
bn_uint_t mod_barret_128_res_2= {.number = mod_barret_128_res_2_tab, .length = 4};
//variable 'mod_barret_128_a_3' value: 0xdfec38c6d71be31b758cb6329c316b7357db35c1990e2216cd3f191a80d03de2
uint32_t mod_barret_128_a_3_tab [8] = {0x80d03de2, 0xcd3f191a, 0x990e2216, 0x57db35c1, 0x9c316b73, 0x758cb632, 0xd71be31b, 0xdfec38c6};
bn_uint_t mod_barret_128_a_3= {.number = mod_barret_128_a_3_tab, .length = 8};
//variable 'mod_barret_128_res_3' value: 0xfdffc3a0300276c370b478a663ec686d
uint32_t mod_barret_128_res_3_tab [4] = {0x63ec686d, 0x70b478a6, 0x300276c3, 0xfdffc3a0};
bn_uint_t mod_barret_128_res_3= {.number = mod_barret_128_res_3_tab, .length = 4};
//variable 'mod_barret_128_a_4' value: 0xd4e0365d5e744444b9a9d61638bd4d04836a590efe8091731616045700bded5d
uint32_t mod_barret_128_a_4_tab [8] = {0x00bded5d, 0x16160457, 0xfe809173, 0x836a590e, 0x38bd4d04, 0xb9a9d616, 0x5e744444, 0xd4e0365d};
bn_uint_t mod_barret_128_a_4= {.number = mod_barret_128_a_4_tab, .length = 8};
//variable 'mod_barret_128_res_4' value: 0xf21209e606b54275e0293c72cda1aa99
uint32_t mod_barret_128_res_4_tab [4] = {0xcda1aa99, 0xe0293c72, 0x06b54275, 0xf21209e6};
bn_uint_t mod_barret_128_res_4= {.number = mod_barret_128_res_4_tab, .length = 4};
//variable 'mod_barret_128_a_5' value: 0x43b3f9391427b7c88a0a6e12f3f8460e2bb6371c77eee55d2a3ae10e91dc277a
uint32_t mod_barret_128_a_5_tab [8] = {0x91dc277a, 0x2a3ae10e, 0x77eee55d, 0x2bb6371c, 0xf3f8460e, 0x8a0a6e12, 0x1427b7c8, 0x43b3f939};
bn_uint_t mod_barret_128_a_5= {.number = mod_barret_128_a_5_tab, .length = 8};
//variable 'mod_barret_128_res_5' value: 0x5c01c69c137e8f98eb64a3990827f29d
uint32_t mod_barret_128_res_5_tab [4] = {0x0827f29d, 0xeb64a399, 0x137e8f98, 0x5c01c69c};
bn_uint_t mod_barret_128_res_5= {.number = mod_barret_128_res_5_tab, .length = 4};
//variable 'mod_barret_128_a_6' value: 0xd657a1fe00e8f24be2d5bdcd86669fa33fe46960fe26e605f682e049e15d017d
uint32_t mod_barret_128_a_6_tab [8] = {0xe15d017d, 0xf682e049, 0xfe26e605, 0x3fe46960, 0x86669fa3, 0xe2d5bdcd, 0x00e8f24b, 0xd657a1fe};
bn_uint_t mod_barret_128_a_6= {.number = mod_barret_128_a_6_tab, .length = 8};
//variable 'mod_barret_128_res_6' value: 0x1b21f438abbf1c5134890aade3cff5e9
uint32_t mod_barret_128_res_6_tab [4] = {0xe3cff5e9, 0x34890aad, 0xabbf1c51, 0x1b21f438};
bn_uint_t mod_barret_128_res_6= {.number = mod_barret_128_res_6_tab, .length = 4};
//variable 'mod_barret_128_a_7' value: 0x5d668696bd7b80582f40518334f9037b3effcafbb29d2e0b778cf8755b875106
uint32_t mod_barret_128_a_7_tab [8] = {0x5b875106, 0x778cf875, 0xb29d2e0b, 0x3effcafb, 0x34f9037b, 0x2f405183, 0xbd7b8058, 0x5d668696};
bn_uint_t mod_barret_128_a_7= {.number = mod_barret_128_a_7_tab, .length = 8};
//variable 'mod_barret_128_res_7' value: 0x859e0acf2ae5bb92975e6506d0232da4
uint32_t mod_barret_128_res_7_tab [4] = {0xd0232da4, 0x975e6506, 0x2ae5bb92, 0x859e0acf};
bn_uint_t mod_barret_128_res_7= {.number = mod_barret_128_res_7_tab, .length = 4};
//variable 'mod_barret_128_a_8' value: 0x6a45b9db87265568242f81f55d277cc5c0ea81638e8b94cfcf4c24b6142235e4
uint32_t mod_barret_128_a_8_tab [8] = {0x142235e4, 0xcf4c24b6, 0x8e8b94cf, 0xc0ea8163, 0x5d277cc5, 0x242f81f5, 0x87265568, 0x6a45b9db};
bn_uint_t mod_barret_128_a_8= {.number = mod_barret_128_a_8_tab, .length = 8};
//variable 'mod_barret_128_res_8' value: 0x53cb85a7ea3d5df0aadf38ed286fdb18
uint32_t mod_barret_128_res_8_tab [4] = {0x286fdb18, 0xaadf38ed, 0xea3d5df0, 0x53cb85a7};
bn_uint_t mod_barret_128_res_8= {.number = mod_barret_128_res_8_tab, .length = 4};
//variable 'mod_barret_128_a_9' value: 0xdaf7af5b58bf3c30c926012656a61cc8c474e78ce9e79d74b6f25a3fbfdcfff7
uint32_t mod_barret_128_a_9_tab [8] = {0xbfdcfff7, 0xb6f25a3f, 0xe9e79d74, 0xc474e78c, 0x56a61cc8, 0xc9260126, 0x58bf3c30, 0xdaf7af5b};
bn_uint_t mod_barret_128_a_9= {.number = mod_barret_128_a_9_tab, .length = 8};
//variable 'mod_barret_128_res_9' value: 0xe6c5ac6bf896385f9d75913be3898ab8
uint32_t mod_barret_128_res_9_tab [4] = {0xe3898ab8, 0x9d75913b, 0xf896385f, 0xe6c5ac6b};
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
//variable 'mul_mod_barret_128_a_0' value: 0xd439db948f73c2da22d117b5cd3faa67
uint32_t mul_mod_barret_128_a_0_tab [4] = {0xcd3faa67, 0x22d117b5, 0x8f73c2da, 0xd439db94};
bn_uint_t mul_mod_barret_128_a_0= {.number = mul_mod_barret_128_a_0_tab, .length = 4};
//variable 'mul_mod_barret_128_b_0' value: 0x9224b403c389176f47e66ee93f521b0e
uint32_t mul_mod_barret_128_b_0_tab [4] = {0x3f521b0e, 0x47e66ee9, 0xc389176f, 0x9224b403};
bn_uint_t mul_mod_barret_128_b_0= {.number = mul_mod_barret_128_b_0_tab, .length = 4};
//variable 'mul_mod_barret_128_res_0' value: 0x134ba0401f4bf60ed3d633dc78d05e2d
uint32_t mul_mod_barret_128_res_0_tab [4] = {0x78d05e2d, 0xd3d633dc, 0x1f4bf60e, 0x134ba040};
bn_uint_t mul_mod_barret_128_res_0= {.number = mul_mod_barret_128_res_0_tab, .length = 4};
//variable 'mul_mod_barret_128_a_1' value: 0xcfbcc935979bfc8179954f17248df482
uint32_t mul_mod_barret_128_a_1_tab [4] = {0x248df482, 0x79954f17, 0x979bfc81, 0xcfbcc935};
bn_uint_t mul_mod_barret_128_a_1= {.number = mul_mod_barret_128_a_1_tab, .length = 4};
//variable 'mul_mod_barret_128_b_1' value: 0x30316cb8d704ea9816a61319dc041337
uint32_t mul_mod_barret_128_b_1_tab [4] = {0xdc041337, 0x16a61319, 0xd704ea98, 0x30316cb8};
bn_uint_t mul_mod_barret_128_b_1= {.number = mul_mod_barret_128_b_1_tab, .length = 4};
//variable 'mul_mod_barret_128_res_1' value: 0x6d5a0abc8e217685acb814e92f436bef
uint32_t mul_mod_barret_128_res_1_tab [4] = {0x2f436bef, 0xacb814e9, 0x8e217685, 0x6d5a0abc};
bn_uint_t mul_mod_barret_128_res_1= {.number = mul_mod_barret_128_res_1_tab, .length = 4};
//variable 'mul_mod_barret_128_a_2' value: 0xb9d08d5338f2326d610862c4011b1eee
uint32_t mul_mod_barret_128_a_2_tab [4] = {0x011b1eee, 0x610862c4, 0x38f2326d, 0xb9d08d53};
bn_uint_t mul_mod_barret_128_a_2= {.number = mul_mod_barret_128_a_2_tab, .length = 4};
//variable 'mul_mod_barret_128_b_2' value: 0xc8ecb4c2bd003fdfff0ba7ca5aa9dabd
uint32_t mul_mod_barret_128_b_2_tab [4] = {0x5aa9dabd, 0xff0ba7ca, 0xbd003fdf, 0xc8ecb4c2};
bn_uint_t mul_mod_barret_128_b_2= {.number = mul_mod_barret_128_b_2_tab, .length = 4};
//variable 'mul_mod_barret_128_res_2' value: 0xe7f4072e535cb58c721965f4a726ce50
uint32_t mul_mod_barret_128_res_2_tab [4] = {0xa726ce50, 0x721965f4, 0x535cb58c, 0xe7f4072e};
bn_uint_t mul_mod_barret_128_res_2= {.number = mul_mod_barret_128_res_2_tab, .length = 4};
//variable 'mul_mod_barret_128_a_3' value: 0xec1e9624d0121372f0cb91c052fe9dcb
uint32_t mul_mod_barret_128_a_3_tab [4] = {0x52fe9dcb, 0xf0cb91c0, 0xd0121372, 0xec1e9624};
bn_uint_t mul_mod_barret_128_a_3= {.number = mul_mod_barret_128_a_3_tab, .length = 4};
//variable 'mul_mod_barret_128_b_3' value: 0x1229c614e9e61e8d0ae368080b936368
uint32_t mul_mod_barret_128_b_3_tab [4] = {0x0b936368, 0x0ae36808, 0xe9e61e8d, 0x1229c614};
bn_uint_t mul_mod_barret_128_b_3= {.number = mul_mod_barret_128_b_3_tab, .length = 4};
//variable 'mul_mod_barret_128_res_3' value: 0xeee65ef64f58922506cb68cb9f21bca
uint32_t mul_mod_barret_128_res_3_tab [4] = {0xb9f21bca, 0x506cb68c, 0x64f58922, 0xeee65ef};
bn_uint_t mul_mod_barret_128_res_3= {.number = mul_mod_barret_128_res_3_tab, .length = 4};
//variable 'mul_mod_barret_128_a_4' value: 0xd17402df8b8fbc99888cdb7023df302
uint32_t mul_mod_barret_128_a_4_tab [4] = {0x023df302, 0x9888cdb7, 0xf8b8fbc9, 0xd17402d};
bn_uint_t mul_mod_barret_128_a_4= {.number = mul_mod_barret_128_a_4_tab, .length = 4};
//variable 'mul_mod_barret_128_b_4' value: 0xb45c5496e62aea80ca6f7bfa692c3391
uint32_t mul_mod_barret_128_b_4_tab [4] = {0x692c3391, 0xca6f7bfa, 0xe62aea80, 0xb45c5496};
bn_uint_t mul_mod_barret_128_b_4= {.number = mul_mod_barret_128_b_4_tab, .length = 4};
//variable 'mul_mod_barret_128_res_4' value: 0x4d496012336f7a03eaeb9e9ceca09b6e
uint32_t mul_mod_barret_128_res_4_tab [4] = {0xeca09b6e, 0xeaeb9e9c, 0x336f7a03, 0x4d496012};
bn_uint_t mul_mod_barret_128_res_4= {.number = mul_mod_barret_128_res_4_tab, .length = 4};
//variable 'mul_mod_barret_128_a_5' value: 0x922f6bef9fe1c1b51e70fc7befe0908e
uint32_t mul_mod_barret_128_a_5_tab [4] = {0xefe0908e, 0x1e70fc7b, 0x9fe1c1b5, 0x922f6bef};
bn_uint_t mul_mod_barret_128_a_5= {.number = mul_mod_barret_128_a_5_tab, .length = 4};
//variable 'mul_mod_barret_128_b_5' value: 0xa651ff2b92b90bd97a7e0ff8e13bbe26
uint32_t mul_mod_barret_128_b_5_tab [4] = {0xe13bbe26, 0x7a7e0ff8, 0x92b90bd9, 0xa651ff2b};
bn_uint_t mul_mod_barret_128_b_5= {.number = mul_mod_barret_128_b_5_tab, .length = 4};
//variable 'mul_mod_barret_128_res_5' value: 0xef6a8354623ab9e2fdec4ba14e73f513
uint32_t mul_mod_barret_128_res_5_tab [4] = {0x4e73f513, 0xfdec4ba1, 0x623ab9e2, 0xef6a8354};
bn_uint_t mul_mod_barret_128_res_5= {.number = mul_mod_barret_128_res_5_tab, .length = 4};
//variable 'mul_mod_barret_128_a_6' value: 0xb3495e6d61bfa5f8262debda261509e8
uint32_t mul_mod_barret_128_a_6_tab [4] = {0x261509e8, 0x262debda, 0x61bfa5f8, 0xb3495e6d};
bn_uint_t mul_mod_barret_128_a_6= {.number = mul_mod_barret_128_a_6_tab, .length = 4};
//variable 'mul_mod_barret_128_b_6' value: 0x7a65f3e46736c9ef1b636fc8450d6344
uint32_t mul_mod_barret_128_b_6_tab [4] = {0x450d6344, 0x1b636fc8, 0x6736c9ef, 0x7a65f3e4};
bn_uint_t mul_mod_barret_128_b_6= {.number = mul_mod_barret_128_b_6_tab, .length = 4};
//variable 'mul_mod_barret_128_res_6' value: 0xa96158b8814c029bdb9f4bbc9d34e69d
uint32_t mul_mod_barret_128_res_6_tab [4] = {0x9d34e69d, 0xdb9f4bbc, 0x814c029b, 0xa96158b8};
bn_uint_t mul_mod_barret_128_res_6= {.number = mul_mod_barret_128_res_6_tab, .length = 4};
//variable 'mul_mod_barret_128_a_7' value: 0xc34df3a92b5864b56bda5170aa1bd3e2
uint32_t mul_mod_barret_128_a_7_tab [4] = {0xaa1bd3e2, 0x6bda5170, 0x2b5864b5, 0xc34df3a9};
bn_uint_t mul_mod_barret_128_a_7= {.number = mul_mod_barret_128_a_7_tab, .length = 4};
//variable 'mul_mod_barret_128_b_7' value: 0x7d9462530e4216cdbcad7a74d1d812a7
uint32_t mul_mod_barret_128_b_7_tab [4] = {0xd1d812a7, 0xbcad7a74, 0x0e4216cd, 0x7d946253};
bn_uint_t mul_mod_barret_128_b_7= {.number = mul_mod_barret_128_b_7_tab, .length = 4};
//variable 'mul_mod_barret_128_res_7' value: 0x5dbc893486df6c72b73b63dbecdaead
uint32_t mul_mod_barret_128_res_7_tab [4] = {0xbecdaead, 0x2b73b63d, 0x486df6c7, 0x5dbc893};
bn_uint_t mul_mod_barret_128_res_7= {.number = mul_mod_barret_128_res_7_tab, .length = 4};
//variable 'mul_mod_barret_128_a_8' value: 0x54550b78ab6ff56339fa4e7bd9e82d13
uint32_t mul_mod_barret_128_a_8_tab [4] = {0xd9e82d13, 0x39fa4e7b, 0xab6ff563, 0x54550b78};
bn_uint_t mul_mod_barret_128_a_8= {.number = mul_mod_barret_128_a_8_tab, .length = 4};
//variable 'mul_mod_barret_128_b_8' value: 0x896df6d1ef5557b6a64af9411fb79e1b
uint32_t mul_mod_barret_128_b_8_tab [4] = {0x1fb79e1b, 0xa64af941, 0xef5557b6, 0x896df6d1};
bn_uint_t mul_mod_barret_128_b_8= {.number = mul_mod_barret_128_b_8_tab, .length = 4};
//variable 'mul_mod_barret_128_res_8' value: 0x50683b4e02db875543b7bd5d40a95c60
uint32_t mul_mod_barret_128_res_8_tab [4] = {0x40a95c60, 0x43b7bd5d, 0x02db8755, 0x50683b4e};
bn_uint_t mul_mod_barret_128_res_8= {.number = mul_mod_barret_128_res_8_tab, .length = 4};
//variable 'mul_mod_barret_128_a_9' value: 0x58d7ef8f8ca25aa4d6fcce2bd8ef8907
uint32_t mul_mod_barret_128_a_9_tab [4] = {0xd8ef8907, 0xd6fcce2b, 0x8ca25aa4, 0x58d7ef8f};
bn_uint_t mul_mod_barret_128_a_9= {.number = mul_mod_barret_128_a_9_tab, .length = 4};
//variable 'mul_mod_barret_128_b_9' value: 0x3474e3dad9ffd4da8ebf47a157a9ed33
uint32_t mul_mod_barret_128_b_9_tab [4] = {0x57a9ed33, 0x8ebf47a1, 0xd9ffd4da, 0x3474e3da};
bn_uint_t mul_mod_barret_128_b_9= {.number = mul_mod_barret_128_b_9_tab, .length = 4};
//variable 'mul_mod_barret_128_res_9' value: 0x1140dd8372c5345eabbd9c7277af8cfc
uint32_t mul_mod_barret_128_res_9_tab [4] = {0x77af8cfc, 0xabbd9c72, 0x72c5345e, 0x1140dd83};
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
//variable 'mod_barret_256_a_0' value: 0xe95c2fb65613063c3cc4d6d19b3c9c4efc7327f7703776c3792e7a7cbe21714ff6b54a28b58c3b8dc0ca90d1c39930544b3ac91a5a6ec41d034540b71b97d165
uint32_t mod_barret_256_a_0_tab [16] = {0x1b97d165, 0x034540b7, 0x5a6ec41d, 0x4b3ac91a, 0xc3993054, 0xc0ca90d1, 0xb58c3b8d, 0xf6b54a28, 0xbe21714f, 0x792e7a7c, 0x703776c3, 0xfc7327f7, 0x9b3c9c4e, 0x3cc4d6d1, 0x5613063c, 0xe95c2fb6};
bn_uint_t mod_barret_256_a_0= {.number = mod_barret_256_a_0_tab, .length = 16};
//variable 'mod_barret_256_res_0' value: 0x2c3f38c48ff298b2632bdbe8e0492b9096b30cf24ae55612d53a88e428601be0
uint32_t mod_barret_256_res_0_tab [8] = {0x28601be0, 0xd53a88e4, 0x4ae55612, 0x96b30cf2, 0xe0492b90, 0x632bdbe8, 0x8ff298b2, 0x2c3f38c4};
bn_uint_t mod_barret_256_res_0= {.number = mod_barret_256_res_0_tab, .length = 8};
//variable 'mod_barret_256_a_1' value: 0xbdc1f3106b0b77a81df1c505d965a3971e0bffd6d7a604da1cf3d51737e514b165f34fac9d6fbbfe6075adfa5c0219dc4c35af7820e0307273ced9a3164ce661
uint32_t mod_barret_256_a_1_tab [16] = {0x164ce661, 0x73ced9a3, 0x20e03072, 0x4c35af78, 0x5c0219dc, 0x6075adfa, 0x9d6fbbfe, 0x65f34fac, 0x37e514b1, 0x1cf3d517, 0xd7a604da, 0x1e0bffd6, 0xd965a397, 0x1df1c505, 0x6b0b77a8, 0xbdc1f310};
bn_uint_t mod_barret_256_a_1= {.number = mod_barret_256_a_1_tab, .length = 16};
//variable 'mod_barret_256_res_1' value: 0xea14d044232ee4543a8015b5c12288cc466fde7ecfd305644843e03eeab6f00f
uint32_t mod_barret_256_res_1_tab [8] = {0xeab6f00f, 0x4843e03e, 0xcfd30564, 0x466fde7e, 0xc12288cc, 0x3a8015b5, 0x232ee454, 0xea14d044};
bn_uint_t mod_barret_256_res_1= {.number = mod_barret_256_res_1_tab, .length = 8};
//variable 'mod_barret_256_a_2' value: 0x788aeb7dd59d85107b0185d58ca3a91e01453b7c1e021ec00dd636c9739d4c399e620aed6ae40460838136f75e7813d121c7539a6206dd35073cd1e461bf99f4
uint32_t mod_barret_256_a_2_tab [16] = {0x61bf99f4, 0x073cd1e4, 0x6206dd35, 0x21c7539a, 0x5e7813d1, 0x838136f7, 0x6ae40460, 0x9e620aed, 0x739d4c39, 0x0dd636c9, 0x1e021ec0, 0x01453b7c, 0x8ca3a91e, 0x7b0185d5, 0xd59d8510, 0x788aeb7d};
bn_uint_t mod_barret_256_a_2= {.number = mod_barret_256_a_2_tab, .length = 16};
//variable 'mod_barret_256_res_2' value: 0x54b39072d6606d5f7e02de051787a13ebe9c3421b824410cdd4787ec04ab2d78
uint32_t mod_barret_256_res_2_tab [8] = {0x04ab2d78, 0xdd4787ec, 0xb824410c, 0xbe9c3421, 0x1787a13e, 0x7e02de05, 0xd6606d5f, 0x54b39072};
bn_uint_t mod_barret_256_res_2= {.number = mod_barret_256_res_2_tab, .length = 8};
//variable 'mod_barret_256_a_3' value: 0x44260c08083132225b13336ac8fb2721972021786bf2e655ee9c0baa5eee74e0c981487d2e7b767d7da5cd65171a90c16c2f71458050dafe7d945ebff686d807
uint32_t mod_barret_256_a_3_tab [16] = {0xf686d807, 0x7d945ebf, 0x8050dafe, 0x6c2f7145, 0x171a90c1, 0x7da5cd65, 0x2e7b767d, 0xc981487d, 0x5eee74e0, 0xee9c0baa, 0x6bf2e655, 0x97202178, 0xc8fb2721, 0x5b13336a, 0x08313222, 0x44260c08};
bn_uint_t mod_barret_256_a_3= {.number = mod_barret_256_a_3_tab, .length = 16};
//variable 'mod_barret_256_res_3' value: 0xcdc07f1bdce3d7d485419cb90cd985fbf5c8a950dbf9713767bdb80980b1aa6b
uint32_t mod_barret_256_res_3_tab [8] = {0x80b1aa6b, 0x67bdb809, 0xdbf97137, 0xf5c8a950, 0x0cd985fb, 0x85419cb9, 0xdce3d7d4, 0xcdc07f1b};
bn_uint_t mod_barret_256_res_3= {.number = mod_barret_256_res_3_tab, .length = 8};
//variable 'mod_barret_256_a_4' value: 0x87bfa57b222c582f0593812f82d451bd1a730d9b4d79c69a3e1e1e8babb78a2de89707f9bfffb78be0aa5e141aa7d5dcef729a522bdf25e901e1c2711c3af330
uint32_t mod_barret_256_a_4_tab [16] = {0x1c3af330, 0x01e1c271, 0x2bdf25e9, 0xef729a52, 0x1aa7d5dc, 0xe0aa5e14, 0xbfffb78b, 0xe89707f9, 0xabb78a2d, 0x3e1e1e8b, 0x4d79c69a, 0x1a730d9b, 0x82d451bd, 0x0593812f, 0x222c582f, 0x87bfa57b};
bn_uint_t mod_barret_256_a_4= {.number = mod_barret_256_a_4_tab, .length = 16};
//variable 'mod_barret_256_res_4' value: 0x3b38db7951c1e3844ffce216c20beebebdff8bfbe44c7b445b25d70041096334
uint32_t mod_barret_256_res_4_tab [8] = {0x41096334, 0x5b25d700, 0xe44c7b44, 0xbdff8bfb, 0xc20beebe, 0x4ffce216, 0x51c1e384, 0x3b38db79};
bn_uint_t mod_barret_256_res_4= {.number = mod_barret_256_res_4_tab, .length = 8};
//variable 'mod_barret_256_a_5' value: 0x60b02c5eb3eeab5cf39a49d948b66c92eb3d1270747462df1f2353b7614b020d23e1ed0b91e6a9d6b43f9d4feb0796fdab3760dcdf3d2137c681c8df36c8952b
uint32_t mod_barret_256_a_5_tab [16] = {0x36c8952b, 0xc681c8df, 0xdf3d2137, 0xab3760dc, 0xeb0796fd, 0xb43f9d4f, 0x91e6a9d6, 0x23e1ed0b, 0x614b020d, 0x1f2353b7, 0x747462df, 0xeb3d1270, 0x48b66c92, 0xf39a49d9, 0xb3eeab5c, 0x60b02c5e};
bn_uint_t mod_barret_256_a_5= {.number = mod_barret_256_a_5_tab, .length = 16};
//variable 'mod_barret_256_res_5' value: 0xb3b487ae23ef8bf04503ecb83fff89c259a269836b574f20929f14ddbba76b7
uint32_t mod_barret_256_res_5_tab [8] = {0xdbba76b7, 0x0929f14d, 0x36b574f2, 0x259a2698, 0x83fff89c, 0x04503ecb, 0xe23ef8bf, 0xb3b487a};
bn_uint_t mod_barret_256_res_5= {.number = mod_barret_256_res_5_tab, .length = 8};
//variable 'mod_barret_256_a_6' value: 0x92f6875937b1afacfd4caaa410af9da2b56202aa5678c2e984c4b625d43e16b07f6b7b2a960fbb2ad1596eee87eded6ec9802f118ce9c00128e3865ee6140c2d
uint32_t mod_barret_256_a_6_tab [16] = {0xe6140c2d, 0x28e3865e, 0x8ce9c001, 0xc9802f11, 0x87eded6e, 0xd1596eee, 0x960fbb2a, 0x7f6b7b2a, 0xd43e16b0, 0x84c4b625, 0x5678c2e9, 0xb56202aa, 0x10af9da2, 0xfd4caaa4, 0x37b1afac, 0x92f68759};
bn_uint_t mod_barret_256_a_6= {.number = mod_barret_256_a_6_tab, .length = 16};
//variable 'mod_barret_256_res_6' value: 0xf2b61a0e075bb6b1c271e556005ab49966f6c61ed0cfa3ea2b7c80214406de66
uint32_t mod_barret_256_res_6_tab [8] = {0x4406de66, 0x2b7c8021, 0xd0cfa3ea, 0x66f6c61e, 0x005ab499, 0xc271e556, 0x075bb6b1, 0xf2b61a0e};
bn_uint_t mod_barret_256_res_6= {.number = mod_barret_256_res_6_tab, .length = 8};
//variable 'mod_barret_256_a_7' value: 0x5a37c0010190d5677e06136e5e66a55db39c3a38a202e45f9f7def7c1c9939c1b50904673ad647c2dfc5df9bad7acf0f7f4b3846699b6266eebe0726980c0d95
uint32_t mod_barret_256_a_7_tab [16] = {0x980c0d95, 0xeebe0726, 0x699b6266, 0x7f4b3846, 0xad7acf0f, 0xdfc5df9b, 0x3ad647c2, 0xb5090467, 0x1c9939c1, 0x9f7def7c, 0xa202e45f, 0xb39c3a38, 0x5e66a55d, 0x7e06136e, 0x0190d567, 0x5a37c001};
bn_uint_t mod_barret_256_a_7= {.number = mod_barret_256_a_7_tab, .length = 16};
//variable 'mod_barret_256_res_7' value: 0xae3da6c8b5e7322be38c52b0266442330b0821a1e56bd827f8098ccdc2896e67
uint32_t mod_barret_256_res_7_tab [8] = {0xc2896e67, 0xf8098ccd, 0xe56bd827, 0x0b0821a1, 0x26644233, 0xe38c52b0, 0xb5e7322b, 0xae3da6c8};
bn_uint_t mod_barret_256_res_7= {.number = mod_barret_256_res_7_tab, .length = 8};
//variable 'mod_barret_256_a_8' value: 0xb00bc9e4229fcff42e4e2ab044df04356bff6e0e1f3d950345e62422891cfb10a3849145431fd6c893c527258d2575accadd059be51a7257f722a7acde6cf4fd
uint32_t mod_barret_256_a_8_tab [16] = {0xde6cf4fd, 0xf722a7ac, 0xe51a7257, 0xcadd059b, 0x8d2575ac, 0x93c52725, 0x431fd6c8, 0xa3849145, 0x891cfb10, 0x45e62422, 0x1f3d9503, 0x6bff6e0e, 0x44df0435, 0x2e4e2ab0, 0x229fcff4, 0xb00bc9e4};
bn_uint_t mod_barret_256_a_8= {.number = mod_barret_256_a_8_tab, .length = 16};
//variable 'mod_barret_256_res_8' value: 0x3e5ab80e6a61e5e95a6fe34130fbea45dbd92bb96f5db0e0166d9814aba3a74a
uint32_t mod_barret_256_res_8_tab [8] = {0xaba3a74a, 0x166d9814, 0x6f5db0e0, 0xdbd92bb9, 0x30fbea45, 0x5a6fe341, 0x6a61e5e9, 0x3e5ab80e};
bn_uint_t mod_barret_256_res_8= {.number = mod_barret_256_res_8_tab, .length = 8};
//variable 'mod_barret_256_a_9' value: 0x92d5da89f990e4fed45234f9d0944977e3fc85adfe504ece6d4b51cf1a3f011d6de8a0ec372004a202761b25364dd50bcf633d5b51ede0b9970013bc0bd4ed6d
uint32_t mod_barret_256_a_9_tab [16] = {0x0bd4ed6d, 0x970013bc, 0x51ede0b9, 0xcf633d5b, 0x364dd50b, 0x02761b25, 0x372004a2, 0x6de8a0ec, 0x1a3f011d, 0x6d4b51cf, 0xfe504ece, 0xe3fc85ad, 0xd0944977, 0xd45234f9, 0xf990e4fe, 0x92d5da89};
bn_uint_t mod_barret_256_a_9= {.number = mod_barret_256_a_9_tab, .length = 16};
//variable 'mod_barret_256_res_9' value: 0xb975debb96464abf4ec555240e10164ff276e328d381c0b2d14e765f10eb573c
uint32_t mod_barret_256_res_9_tab [8] = {0x10eb573c, 0xd14e765f, 0xd381c0b2, 0xf276e328, 0x0e10164f, 0x4ec55524, 0x96464abf, 0xb975debb};
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
//variable 'mul_mod_barret_256_a_0' value: 0x89c29aeb6d23e22fe8a9fc97862ed967f20bad51966840352f42923060aa64b9
uint32_t mul_mod_barret_256_a_0_tab [8] = {0x60aa64b9, 0x2f429230, 0x96684035, 0xf20bad51, 0x862ed967, 0xe8a9fc97, 0x6d23e22f, 0x89c29aeb};
bn_uint_t mul_mod_barret_256_a_0= {.number = mul_mod_barret_256_a_0_tab, .length = 8};
//variable 'mul_mod_barret_256_b_0' value: 0x1c48813326ad1acb738ed431bfa66a169d84a5d6284bf801f872400e0efd865a
uint32_t mul_mod_barret_256_b_0_tab [8] = {0x0efd865a, 0xf872400e, 0x284bf801, 0x9d84a5d6, 0xbfa66a16, 0x738ed431, 0x26ad1acb, 0x1c488133};
bn_uint_t mul_mod_barret_256_b_0= {.number = mul_mod_barret_256_b_0_tab, .length = 8};
//variable 'mul_mod_barret_256_res_0' value: 0xca99c2c2cdaa19a319c2d139c9d264132e2e63aed69450dcdf102d4c0c817df
uint32_t mul_mod_barret_256_res_0_tab [8] = {0xc0c817df, 0xcdf102d4, 0xed69450d, 0x32e2e63a, 0x9c9d2641, 0x319c2d13, 0x2cdaa19a, 0xca99c2c};
bn_uint_t mul_mod_barret_256_res_0= {.number = mul_mod_barret_256_res_0_tab, .length = 8};
//variable 'mul_mod_barret_256_a_1' value: 0x2984c88c4ad0155d60cabab700c343e7e037c5e7472b4ac3d5dcce67776ec1a9
uint32_t mul_mod_barret_256_a_1_tab [8] = {0x776ec1a9, 0xd5dcce67, 0x472b4ac3, 0xe037c5e7, 0x00c343e7, 0x60cabab7, 0x4ad0155d, 0x2984c88c};
bn_uint_t mul_mod_barret_256_a_1= {.number = mul_mod_barret_256_a_1_tab, .length = 8};
//variable 'mul_mod_barret_256_b_1' value: 0x68f520d747cef3d5b3372a0e3ffb6526ef50811b82f83f4b04fb0974d206c466
uint32_t mul_mod_barret_256_b_1_tab [8] = {0xd206c466, 0x04fb0974, 0x82f83f4b, 0xef50811b, 0x3ffb6526, 0xb3372a0e, 0x47cef3d5, 0x68f520d7};
bn_uint_t mul_mod_barret_256_b_1= {.number = mul_mod_barret_256_b_1_tab, .length = 8};
//variable 'mul_mod_barret_256_res_1' value: 0x73ed738c6ec7660ecb2223f5b689012d2b0a37170b42b660befa05f09588b5a1
uint32_t mul_mod_barret_256_res_1_tab [8] = {0x9588b5a1, 0xbefa05f0, 0x0b42b660, 0x2b0a3717, 0xb689012d, 0xcb2223f5, 0x6ec7660e, 0x73ed738c};
bn_uint_t mul_mod_barret_256_res_1= {.number = mul_mod_barret_256_res_1_tab, .length = 8};
//variable 'mul_mod_barret_256_a_2' value: 0xbd404232502f55b83b035e6ab67e80bf55b6cbcde628fbfd355a69a3038d8bf0
uint32_t mul_mod_barret_256_a_2_tab [8] = {0x038d8bf0, 0x355a69a3, 0xe628fbfd, 0x55b6cbcd, 0xb67e80bf, 0x3b035e6a, 0x502f55b8, 0xbd404232};
bn_uint_t mul_mod_barret_256_a_2= {.number = mul_mod_barret_256_a_2_tab, .length = 8};
//variable 'mul_mod_barret_256_b_2' value: 0x9654d55859f72623e7e86611ce230786b6be54a115053128b1472e35589c8019
uint32_t mul_mod_barret_256_b_2_tab [8] = {0x589c8019, 0xb1472e35, 0x15053128, 0xb6be54a1, 0xce230786, 0xe7e86611, 0x59f72623, 0x9654d558};
bn_uint_t mul_mod_barret_256_b_2= {.number = mul_mod_barret_256_b_2_tab, .length = 8};
//variable 'mul_mod_barret_256_res_2' value: 0x83b2eb62bff828eef6ca215169f42ff02dbc0d2a1bd27c82a28c3a04d92947db
uint32_t mul_mod_barret_256_res_2_tab [8] = {0xd92947db, 0xa28c3a04, 0x1bd27c82, 0x2dbc0d2a, 0x69f42ff0, 0xf6ca2151, 0xbff828ee, 0x83b2eb62};
bn_uint_t mul_mod_barret_256_res_2= {.number = mul_mod_barret_256_res_2_tab, .length = 8};
//variable 'mul_mod_barret_256_a_3' value: 0x77a88e14ed70e9035037732703eddb052c3532799fb81e3e674ad7c534973bae
uint32_t mul_mod_barret_256_a_3_tab [8] = {0x34973bae, 0x674ad7c5, 0x9fb81e3e, 0x2c353279, 0x03eddb05, 0x50377327, 0xed70e903, 0x77a88e14};
bn_uint_t mul_mod_barret_256_a_3= {.number = mul_mod_barret_256_a_3_tab, .length = 8};
//variable 'mul_mod_barret_256_b_3' value: 0x3b184a0cdf638b43ac679da730d7bff312c6bade146d4b00630f9f49efeb05ea
uint32_t mul_mod_barret_256_b_3_tab [8] = {0xefeb05ea, 0x630f9f49, 0x146d4b00, 0x12c6bade, 0x30d7bff3, 0xac679da7, 0xdf638b43, 0x3b184a0c};
bn_uint_t mul_mod_barret_256_b_3= {.number = mul_mod_barret_256_b_3_tab, .length = 8};
//variable 'mul_mod_barret_256_res_3' value: 0xc474e82d1e6af2ad1ebc4212ede7461b71c9367724a4280adc1d66cfd42ca743
uint32_t mul_mod_barret_256_res_3_tab [8] = {0xd42ca743, 0xdc1d66cf, 0x24a4280a, 0x71c93677, 0xede7461b, 0x1ebc4212, 0x1e6af2ad, 0xc474e82d};
bn_uint_t mul_mod_barret_256_res_3= {.number = mul_mod_barret_256_res_3_tab, .length = 8};
//variable 'mul_mod_barret_256_a_4' value: 0x51d4ee2a01625c59602ff02ef0da659576fc64f417fe0bfb1fc3d986f0dfe35a
uint32_t mul_mod_barret_256_a_4_tab [8] = {0xf0dfe35a, 0x1fc3d986, 0x17fe0bfb, 0x76fc64f4, 0xf0da6595, 0x602ff02e, 0x01625c59, 0x51d4ee2a};
bn_uint_t mul_mod_barret_256_a_4= {.number = mul_mod_barret_256_a_4_tab, .length = 8};
//variable 'mul_mod_barret_256_b_4' value: 0x5c8b25b8c5de4064bc1c4c5d7f39c09c49cb1c63d9019a8c7cec1182017d568f
uint32_t mul_mod_barret_256_b_4_tab [8] = {0x017d568f, 0x7cec1182, 0xd9019a8c, 0x49cb1c63, 0x7f39c09c, 0xbc1c4c5d, 0xc5de4064, 0x5c8b25b8};
bn_uint_t mul_mod_barret_256_b_4= {.number = mul_mod_barret_256_b_4_tab, .length = 8};
//variable 'mul_mod_barret_256_res_4' value: 0xc6305b85c56c323f2776f5af66e160fc48ac954582360c8bf7458720c244a9a
uint32_t mul_mod_barret_256_res_4_tab [8] = {0x0c244a9a, 0xbf745872, 0x582360c8, 0xc48ac954, 0xf66e160f, 0xf2776f5a, 0x5c56c323, 0xc6305b8};
bn_uint_t mul_mod_barret_256_res_4= {.number = mul_mod_barret_256_res_4_tab, .length = 8};
//variable 'mul_mod_barret_256_a_5' value: 0x8ed2aa37968cece5d6755e1760f1f58ca8dab9c60bb1e6cc0f71d144e8ee1dbe
uint32_t mul_mod_barret_256_a_5_tab [8] = {0xe8ee1dbe, 0x0f71d144, 0x0bb1e6cc, 0xa8dab9c6, 0x60f1f58c, 0xd6755e17, 0x968cece5, 0x8ed2aa37};
bn_uint_t mul_mod_barret_256_a_5= {.number = mul_mod_barret_256_a_5_tab, .length = 8};
//variable 'mul_mod_barret_256_b_5' value: 0xfd04bd9ba7030384339ea1241e539869ee6c395a4bf61a09b47bee85b92d0fb1
uint32_t mul_mod_barret_256_b_5_tab [8] = {0xb92d0fb1, 0xb47bee85, 0x4bf61a09, 0xee6c395a, 0x1e539869, 0x339ea124, 0xa7030384, 0xfd04bd9b};
bn_uint_t mul_mod_barret_256_b_5= {.number = mul_mod_barret_256_b_5_tab, .length = 8};
//variable 'mul_mod_barret_256_res_5' value: 0x73aa1fe702f28f7bead99694530ff03952bee969257959153fcbfa018099a43
uint32_t mul_mod_barret_256_res_5_tab [8] = {0x18099a43, 0x53fcbfa0, 0x92579591, 0x952bee96, 0x4530ff03, 0xbead9969, 0x702f28f7, 0x73aa1fe};
bn_uint_t mul_mod_barret_256_res_5= {.number = mul_mod_barret_256_res_5_tab, .length = 8};
//variable 'mul_mod_barret_256_a_6' value: 0x6e47f57a6827a73fd4f43413b57716bd7469f1d60247d5ec13fff423d660d643
uint32_t mul_mod_barret_256_a_6_tab [8] = {0xd660d643, 0x13fff423, 0x0247d5ec, 0x7469f1d6, 0xb57716bd, 0xd4f43413, 0x6827a73f, 0x6e47f57a};
bn_uint_t mul_mod_barret_256_a_6= {.number = mul_mod_barret_256_a_6_tab, .length = 8};
//variable 'mul_mod_barret_256_b_6' value: 0x2da6339ed823695194cfd8a148312c1eea5b585133c3fd386cbe5727cc6e59ba
uint32_t mul_mod_barret_256_b_6_tab [8] = {0xcc6e59ba, 0x6cbe5727, 0x33c3fd38, 0xea5b5851, 0x48312c1e, 0x94cfd8a1, 0xd8236951, 0x2da6339e};
bn_uint_t mul_mod_barret_256_b_6= {.number = mul_mod_barret_256_b_6_tab, .length = 8};
//variable 'mul_mod_barret_256_res_6' value: 0xeaed49b095af09b10bf85d781b132d0d000651317d1f55202aae9611453394f9
uint32_t mul_mod_barret_256_res_6_tab [8] = {0x453394f9, 0x2aae9611, 0x7d1f5520, 0x00065131, 0x1b132d0d, 0x0bf85d78, 0x95af09b1, 0xeaed49b0};
bn_uint_t mul_mod_barret_256_res_6= {.number = mul_mod_barret_256_res_6_tab, .length = 8};
//variable 'mul_mod_barret_256_a_7' value: 0xdcf0cb2c2e02a5f6a43ccfb64ac650f886793fc2320123d6eb7db8d5c9a0214b
uint32_t mul_mod_barret_256_a_7_tab [8] = {0xc9a0214b, 0xeb7db8d5, 0x320123d6, 0x86793fc2, 0x4ac650f8, 0xa43ccfb6, 0x2e02a5f6, 0xdcf0cb2c};
bn_uint_t mul_mod_barret_256_a_7= {.number = mul_mod_barret_256_a_7_tab, .length = 8};
//variable 'mul_mod_barret_256_b_7' value: 0xbfe994b2670dd47719bf8ed152e9aea4a07b60d3b26e9cf0746182352b87d276
uint32_t mul_mod_barret_256_b_7_tab [8] = {0x2b87d276, 0x74618235, 0xb26e9cf0, 0xa07b60d3, 0x52e9aea4, 0x19bf8ed1, 0x670dd477, 0xbfe994b2};
bn_uint_t mul_mod_barret_256_b_7= {.number = mul_mod_barret_256_b_7_tab, .length = 8};
//variable 'mul_mod_barret_256_res_7' value: 0xed8aaa3aa4cc6c6c0e37c8d7af74a206d6496c43d643107e9b848153f0973d3f
uint32_t mul_mod_barret_256_res_7_tab [8] = {0xf0973d3f, 0x9b848153, 0xd643107e, 0xd6496c43, 0xaf74a206, 0x0e37c8d7, 0xa4cc6c6c, 0xed8aaa3a};
bn_uint_t mul_mod_barret_256_res_7= {.number = mul_mod_barret_256_res_7_tab, .length = 8};
//variable 'mul_mod_barret_256_a_8' value: 0x3386c1bd3d249f6328c3e5658074a4ac3f59065a46ada876e36f0fdcc39a023c
uint32_t mul_mod_barret_256_a_8_tab [8] = {0xc39a023c, 0xe36f0fdc, 0x46ada876, 0x3f59065a, 0x8074a4ac, 0x28c3e565, 0x3d249f63, 0x3386c1bd};
bn_uint_t mul_mod_barret_256_a_8= {.number = mul_mod_barret_256_a_8_tab, .length = 8};
//variable 'mul_mod_barret_256_b_8' value: 0xf191b3e5e491d6df85fab9991488fa0f054208a597bfedb8e392289d630d0652
uint32_t mul_mod_barret_256_b_8_tab [8] = {0x630d0652, 0xe392289d, 0x97bfedb8, 0x054208a5, 0x1488fa0f, 0x85fab999, 0xe491d6df, 0xf191b3e5};
bn_uint_t mul_mod_barret_256_b_8= {.number = mul_mod_barret_256_b_8_tab, .length = 8};
//variable 'mul_mod_barret_256_res_8' value: 0x9341f17797e645174fd80404bfe0fc62ceca3a6be747f43000aa2e89dbf989cb
uint32_t mul_mod_barret_256_res_8_tab [8] = {0xdbf989cb, 0x00aa2e89, 0xe747f430, 0xceca3a6b, 0xbfe0fc62, 0x4fd80404, 0x97e64517, 0x9341f177};
bn_uint_t mul_mod_barret_256_res_8= {.number = mul_mod_barret_256_res_8_tab, .length = 8};
//variable 'mul_mod_barret_256_a_9' value: 0x386941fcf0afb71079659a0316c1c682ebe5d9fa6199042bc355131d3b432c44
uint32_t mul_mod_barret_256_a_9_tab [8] = {0x3b432c44, 0xc355131d, 0x6199042b, 0xebe5d9fa, 0x16c1c682, 0x79659a03, 0xf0afb710, 0x386941fc};
bn_uint_t mul_mod_barret_256_a_9= {.number = mul_mod_barret_256_a_9_tab, .length = 8};
//variable 'mul_mod_barret_256_b_9' value: 0x3a7105092b28138963d55c82b92f60343e5c6bce5aa2b84ed09fa1de6e274256
uint32_t mul_mod_barret_256_b_9_tab [8] = {0x6e274256, 0xd09fa1de, 0x5aa2b84e, 0x3e5c6bce, 0xb92f6034, 0x63d55c82, 0x2b281389, 0x3a710509};
bn_uint_t mul_mod_barret_256_b_9= {.number = mul_mod_barret_256_b_9_tab, .length = 8};
//variable 'mul_mod_barret_256_res_9' value: 0x624c2e8ff4e3bbaf82ece33122893cd6c9b4c6cd0183836d020d8e01bde4c087
uint32_t mul_mod_barret_256_res_9_tab [8] = {0xbde4c087, 0x020d8e01, 0x0183836d, 0xc9b4c6cd, 0x22893cd6, 0x82ece331, 0xf4e3bbaf, 0x624c2e8f};
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
