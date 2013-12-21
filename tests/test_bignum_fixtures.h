/*
File generate using external software
*/
#ifndef TEST_BIGNUM_VALUES_H_
#define TEST_BIGNUM_VALUES_H_
#include "bignum.h"

//variable 'add_128_a_0' value: 0x98217d1ef6d6173b58b783c7b17e74b3
uint32_t add_128_a_0_tab [4] = {0xb17e74b3, 0x58b783c7, 0xf6d6173b, 0x98217d1e};
bn_uint_t add_128_a_0= {.number = add_128_a_0_tab, .length = 4};
//variable 'add_128_b_0' value: 0xad3c6d22c3e9556bdec56becbaf473b
uint32_t add_128_b_0_tab [4] = {0xcbaf473b, 0xbdec56be, 0x2c3e9556, 0xad3c6d2};
bn_uint_t add_128_b_0= {.number = add_128_b_0_tab, .length = 4};
//variable 'add_128_res_0' value: 0xa2f543f12314ac9216a3da867d2dbbee
uint32_t add_128_res_0_tab [4] = {0x7d2dbbee, 0x16a3da86, 0x2314ac92, 0xa2f543f1};
bn_uint_t add_128_res_0= {.number = add_128_res_0_tab, .length = 4};
uint32_t add_128_tab_len=1;
bn_uint_t *add_128_test_tab[1][3]={
{&add_128_a_0,&add_128_b_0,&add_128_res_0},
};
//variable 'add_256_a_0' value: 0xc4dd1a030beacf267eae3303e2785455fcb5c3ae475514dd92f0fcad0379e852
uint32_t add_256_a_0_tab [8] = {0x0379e852, 0x92f0fcad, 0x475514dd, 0xfcb5c3ae, 0xe2785455, 0x7eae3303, 0x0beacf26, 0xc4dd1a03};
bn_uint_t add_256_a_0= {.number = add_256_a_0_tab, .length = 8};
//variable 'add_256_b_0' value: 0x21cbcc0a8733b944c7e1764b7ee4aa78342ccc2841701c2b5841b3b247684d47
uint32_t add_256_b_0_tab [8] = {0x47684d47, 0x5841b3b2, 0x41701c2b, 0x342ccc28, 0x7ee4aa78, 0xc7e1764b, 0x8733b944, 0x21cbcc0a};
bn_uint_t add_256_b_0= {.number = add_256_b_0_tab, .length = 8};
//variable 'add_256_res_0' value: 0xe6a8e60d931e886b468fa94f615cfece30e28fd688c53108eb32b05f4ae23599
uint32_t add_256_res_0_tab [8] = {0x4ae23599, 0xeb32b05f, 0x88c53108, 0x30e28fd6, 0x615cfece, 0x468fa94f, 0x931e886b, 0xe6a8e60d};
bn_uint_t add_256_res_0= {.number = add_256_res_0_tab, .length = 8};
uint32_t add_256_tab_len=1;
bn_uint_t *add_256_test_tab[1][3]={
{&add_256_a_0,&add_256_b_0,&add_256_res_0},
};
//variable 'sub_128_a_0' value: 0xa195636158c98436694f01103e555650
uint32_t sub_128_a_0_tab [4] = {0x3e555650, 0x694f0110, 0x58c98436, 0xa1956361};
bn_uint_t sub_128_a_0= {.number = sub_128_a_0_tab, .length = 4};
//variable 'sub_128_b_0' value: 0xcccfb01fe949157b7300dffa908b3d20
uint32_t sub_128_b_0_tab [4] = {0x908b3d20, 0x7300dffa, 0xe949157b, 0xcccfb01f};
bn_uint_t sub_128_b_0= {.number = sub_128_b_0_tab, .length = 4};
//variable 'sub_128_res_0' value: 0x-2b3a4cbe907f914509b1deea5235e6d0
uint32_t sub_128_res_0_tab [5] = {0xadca1930, 0xf64e2115, 0x6f806eba, 0xd4c5b341, 0xffffffff};
bn_uint_t sub_128_res_0= {.number = sub_128_res_0_tab, .length = 5};
uint32_t sub_128_tab_len=1;
bn_uint_t *sub_128_test_tab[1][3]={
{&sub_128_a_0,&sub_128_b_0,&sub_128_res_0},
};
//variable 'sub_256_a_0' value: 0x35bb93cbe66d124700dfa0ed11e3f6a20b1564eac498a7144f46f3edd1cceb5d
uint32_t sub_256_a_0_tab [8] = {0xd1cceb5d, 0x4f46f3ed, 0xc498a714, 0x0b1564ea, 0x11e3f6a2, 0x00dfa0ed, 0xe66d1247, 0x35bb93cb};
bn_uint_t sub_256_a_0= {.number = sub_256_a_0_tab, .length = 8};
//variable 'sub_256_b_0' value: 0x7b983ceace4777ccb0d0579805df49460efd1e52c4161bf44ba7278f2500e361
uint32_t sub_256_b_0_tab [8] = {0x2500e361, 0x4ba7278f, 0xc4161bf4, 0x0efd1e52, 0x05df4946, 0xb0d05798, 0xce4777cc, 0x7b983cea};
bn_uint_t sub_256_b_0= {.number = sub_256_b_0_tab, .length = 8};
//variable 'sub_256_res_0' value: 0x-45dca91ee7da6585aff0b6aaf3fb52a403e7b967ff7d74dffc6033a15333f804
uint32_t sub_256_res_0_tab [9] = {0xaccc07fc, 0x039fcc5e, 0x00828b20, 0xfc184698, 0x0c04ad5b, 0x500f4955, 0x18259a7a, 0xba2356e1, 0xffffffff};
bn_uint_t sub_256_res_0= {.number = sub_256_res_0_tab, .length = 9};
uint32_t sub_256_tab_len=1;
bn_uint_t *sub_256_test_tab[1][3]={
{&sub_256_a_0,&sub_256_b_0,&sub_256_res_0},
};
//variable 'add_mod_128_a_0' value: 0x20406ead0719eb419444cd7e3084c4a8
uint32_t add_mod_128_a_0_tab [4] = {0x3084c4a8, 0x9444cd7e, 0x0719eb41, 0x20406ead};
bn_uint_t add_mod_128_a_0= {.number = add_mod_128_a_0_tab, .length = 4};
//variable 'add_mod_128_b_0' value: 0x9074af3ac49d45220145d98259128213
uint32_t add_mod_128_b_0_tab [4] = {0x59128213, 0x0145d982, 0xc49d4522, 0x9074af3a};
bn_uint_t add_mod_128_b_0= {.number = add_mod_128_b_0_tab, .length = 4};
//variable 'add_mod_128_p_0' value: 0x3727671971f5a8133764b378a0525102
uint32_t add_mod_128_p_0_tab [4] = {0xa0525102, 0x3764b378, 0x71f5a813, 0x37276719};
bn_uint_t add_mod_128_p_0= {.number = add_mod_128_p_0_tab, .length = 4};
//variable 'add_mod_128_res_0' value: 0xb3ee89b75d63829ef5c8c96a8a053b5
uint32_t add_mod_128_res_0_tab [4] = {0xa8a053b5, 0xef5c8c96, 0x75d63829, 0xb3ee89b};
bn_uint_t add_mod_128_res_0= {.number = add_mod_128_res_0_tab, .length = 4};
uint32_t add_mod_128_tab_len=1;
bn_uint_t *add_mod_128_test_tab[1][4]={
{&add_mod_128_a_0,&add_mod_128_b_0,&add_mod_128_p_0,&add_mod_128_res_0},
};
//variable 'add_mod_256_a_0' value: 0xea7ad6fffce50e23e5dcfeda3953fdd6cd5266e34cff1cb59b648ae5d5f975a9
uint32_t add_mod_256_a_0_tab [8] = {0xd5f975a9, 0x9b648ae5, 0x4cff1cb5, 0xcd5266e3, 0x3953fdd6, 0xe5dcfeda, 0xfce50e23, 0xea7ad6ff};
bn_uint_t add_mod_256_a_0= {.number = add_mod_256_a_0_tab, .length = 8};
//variable 'add_mod_256_b_0' value: 0x1cf1b2ee61a621fdbe4f0ffb44787360c32b3710ccc290b73232306afdde42be
uint32_t add_mod_256_b_0_tab [8] = {0xfdde42be, 0x3232306a, 0xccc290b7, 0xc32b3710, 0x44787360, 0xbe4f0ffb, 0x61a621fd, 0x1cf1b2ee};
bn_uint_t add_mod_256_b_0= {.number = add_mod_256_b_0_tab, .length = 8};
//variable 'add_mod_256_p_0' value: 0x3e0e8ad0773dee150dfc101a3672c73cf27f83a341b116559f205ff698deb0cf
uint32_t add_mod_256_p_0_tab [8] = {0x98deb0cf, 0x9f205ff6, 0x41b11655, 0xf27f83a3, 0x3672c73c, 0x0dfc101a, 0x773dee15, 0x3e0e8ad0};
bn_uint_t add_mod_256_p_0= {.number = add_mod_256_p_0_tab, .length = 8};
//variable 'add_mod_256_res_0' value: 0xf325eac819377cd6c3bce6ca4015443c67f8f6712fd541651153b76705cf52b
uint32_t add_mod_256_res_0_tab [8] = {0x705cf52b, 0x51153b76, 0x12fd5416, 0xc67f8f67, 0xa4015443, 0x6c3bce6c, 0x819377cd, 0xf325eac};
bn_uint_t add_mod_256_res_0= {.number = add_mod_256_res_0_tab, .length = 8};
uint32_t add_mod_256_tab_len=1;
bn_uint_t *add_mod_256_test_tab[1][4]={
{&add_mod_256_a_0,&add_mod_256_b_0,&add_mod_256_p_0,&add_mod_256_res_0},
};
//variable 'sub_mod_128_a_0' value: 0xbffecfcb6995e410d5625658d3545f90
uint32_t sub_mod_128_a_0_tab [4] = {0xd3545f90, 0xd5625658, 0x6995e410, 0xbffecfcb};
bn_uint_t sub_mod_128_a_0= {.number = sub_mod_128_a_0_tab, .length = 4};
//variable 'sub_mod_128_b_0' value: 0x157230c6d2ce49a2de7003c775a58389
uint32_t sub_mod_128_b_0_tab [4] = {0x75a58389, 0xde7003c7, 0xd2ce49a2, 0x157230c6};
bn_uint_t sub_mod_128_b_0= {.number = sub_mod_128_b_0_tab, .length = 4};
//variable 'sub_mod_128_p_0' value: 0x29bc95d13cbf02f8c06e46dc36262554
uint32_t sub_mod_128_p_0_tab [4] = {0x36262554, 0xc06e46dc, 0x3cbf02f8, 0x29bc95d1};
bn_uint_t sub_mod_128_p_0= {.number = sub_mod_128_p_0_tab, .length = 4};
//variable 'sub_mod_128_res_0' value: 0x39a47bfa3cb8e8af5393720851646b7
uint32_t sub_mod_128_res_0_tab [4] = {0x851646b7, 0xf5393720, 0xa3cb8e8a, 0x39a47bf};
bn_uint_t sub_mod_128_res_0= {.number = sub_mod_128_res_0_tab, .length = 4};
uint32_t sub_mod_128_tab_len=1;
bn_uint_t *sub_mod_128_test_tab[1][4]={
{&sub_mod_128_a_0,&sub_mod_128_b_0,&sub_mod_128_p_0,&sub_mod_128_res_0},
};
//variable 'sub_mod_256_a_0' value: 0x986a06ddee7782be596f783609a2a166f09ddab0f2b0fc4353a33fc737e40020
uint32_t sub_mod_256_a_0_tab [8] = {0x37e40020, 0x53a33fc7, 0xf2b0fc43, 0xf09ddab0, 0x09a2a166, 0x596f7836, 0xee7782be, 0x986a06dd};
bn_uint_t sub_mod_256_a_0= {.number = sub_mod_256_a_0_tab, .length = 8};
//variable 'sub_mod_256_b_0' value: 0x5caad55afdb56a0fb21a5cad593069141a8faf76d9304dcc1c707da7759b4bba
uint32_t sub_mod_256_b_0_tab [8] = {0x759b4bba, 0x1c707da7, 0xd9304dcc, 0x1a8faf76, 0x59306914, 0xb21a5cad, 0xfdb56a0f, 0x5caad55a};
bn_uint_t sub_mod_256_b_0= {.number = sub_mod_256_b_0_tab, .length = 8};
//variable 'sub_mod_256_p_0' value: 0xefa084db4386bdb4feaf49509f49230382d12fceabac63b708e2ad1b532c2ee1
uint32_t sub_mod_256_p_0_tab [8] = {0x532c2ee1, 0x08e2ad1b, 0xabac63b7, 0x82d12fce, 0x9f492303, 0xfeaf4950, 0x4386bdb4, 0xefa084db};
bn_uint_t sub_mod_256_p_0= {.number = sub_mod_256_p_0_tab, .length = 8};
//variable 'sub_mod_256_res_0' value: 0x3bbf3182f0c218aea7551b88b0723852d60e2b3a1980ae773732c21fc248b466
uint32_t sub_mod_256_res_0_tab [8] = {0xc248b466, 0x3732c21f, 0x1980ae77, 0xd60e2b3a, 0xb0723852, 0xa7551b88, 0xf0c218ae, 0x3bbf3182};
bn_uint_t sub_mod_256_res_0= {.number = sub_mod_256_res_0_tab, .length = 8};
uint32_t sub_mod_256_tab_len=1;
bn_uint_t *sub_mod_256_test_tab[1][4]={
{&sub_mod_256_a_0,&sub_mod_256_b_0,&sub_mod_256_p_0,&sub_mod_256_res_0},
};
//variable 'shr_128_a_0' value: 0xd88e7d8c516629432699c92017c97c27
uint32_t shr_128_a_0_tab [4] = {0x17c97c27, 0x2699c920, 0x51662943, 0xd88e7d8c};
bn_uint_t shr_128_a_0= {.number = shr_128_a_0_tab, .length = 4};
//variable 'shr_128_res_0' value: 0x6c473ec628b314a1934ce4900be4be13
uint32_t shr_128_res_0_tab [4] = {0x0be4be13, 0x934ce490, 0x28b314a1, 0x6c473ec6};
bn_uint_t shr_128_res_0= {.number = shr_128_res_0_tab, .length = 4};
uint32_t shr_128_tab_len=1;
bn_uint_t *shr_128_test_tab[1][2]={
{&shr_128_a_0,&shr_128_res_0},
};
//variable 'shr_256_a_0' value: 0x67254f656df2352f441d836c5496b96db7879ffdf7afd87cfa09b4920d768ab4
uint32_t shr_256_a_0_tab [8] = {0x0d768ab4, 0xfa09b492, 0xf7afd87c, 0xb7879ffd, 0x5496b96d, 0x441d836c, 0x6df2352f, 0x67254f65};
bn_uint_t shr_256_a_0= {.number = shr_256_a_0_tab, .length = 8};
//variable 'shr_256_res_0' value: 0x3392a7b2b6f91a97a20ec1b62a4b5cb6dbc3cffefbd7ec3e7d04da4906bb455a
uint32_t shr_256_res_0_tab [8] = {0x06bb455a, 0x7d04da49, 0xfbd7ec3e, 0xdbc3cffe, 0x2a4b5cb6, 0xa20ec1b6, 0xb6f91a97, 0x3392a7b2};
bn_uint_t shr_256_res_0= {.number = shr_256_res_0_tab, .length = 8};
uint32_t shr_256_tab_len=1;
bn_uint_t *shr_256_test_tab[1][2]={
{&shr_256_a_0,&shr_256_res_0},
};
//variable 'inv_mod_128_a_0' value: 0x54bc33ef03dd7924c0ffb86a126189a1
uint32_t inv_mod_128_a_0_tab [4] = {0x126189a1, 0xc0ffb86a, 0x03dd7924, 0x54bc33ef};
bn_uint_t inv_mod_128_a_0= {.number = inv_mod_128_a_0_tab, .length = 4};
//variable 'inv_mod_128_p_0' value: 0xede8612012d1542825138cc80436864d
uint32_t inv_mod_128_p_0_tab [4] = {0x0436864d, 0x25138cc8, 0x12d15428, 0xede86120};
bn_uint_t inv_mod_128_p_0= {.number = inv_mod_128_p_0_tab, .length = 4};
//variable 'inv_mod_128_res_0' value: 0x6f3554ad3d0cff46e49d32a86e294228
uint32_t inv_mod_128_res_0_tab [4] = {0x6e294228, 0xe49d32a8, 0x3d0cff46, 0x6f3554ad};
bn_uint_t inv_mod_128_res_0= {.number = inv_mod_128_res_0_tab, .length = 4};
uint32_t inv_mod_128_tab_len=1;
bn_uint_t *inv_mod_128_test_tab[1][3]={
{&inv_mod_128_a_0,&inv_mod_128_p_0,&inv_mod_128_res_0},
};
//variable 'inv_mod_256_a_0' value: 0x3d83975021fc6b70275938e00853131ecb0c5ad8864236a73236f8f5b2769add
uint32_t inv_mod_256_a_0_tab [8] = {0xb2769add, 0x3236f8f5, 0x864236a7, 0xcb0c5ad8, 0x0853131e, 0x275938e0, 0x21fc6b70, 0x3d839750};
bn_uint_t inv_mod_256_a_0= {.number = inv_mod_256_a_0_tab, .length = 8};
//variable 'inv_mod_256_p_0' value: 0xb12ab38d25db6e71221de25291004f8ddb35b573718721980c94f07a0fdbd561
uint32_t inv_mod_256_p_0_tab [8] = {0x0fdbd561, 0x0c94f07a, 0x71872198, 0xdb35b573, 0x91004f8d, 0x221de252, 0x25db6e71, 0xb12ab38d};
bn_uint_t inv_mod_256_p_0= {.number = inv_mod_256_p_0_tab, .length = 8};
//variable 'inv_mod_256_res_0' value: 0x3ee68375d153bf5945bc4949e913bac45d42f2bbd0d91463c3628cf7e9b0d548
uint32_t inv_mod_256_res_0_tab [8] = {0xe9b0d548, 0xc3628cf7, 0xd0d91463, 0x5d42f2bb, 0xe913bac4, 0x45bc4949, 0xd153bf59, 0x3ee68375};
bn_uint_t inv_mod_256_res_0= {.number = inv_mod_256_res_0_tab, .length = 8};
uint32_t inv_mod_256_tab_len=1;
bn_uint_t *inv_mod_256_test_tab[1][3]={
{&inv_mod_256_a_0,&inv_mod_256_p_0,&inv_mod_256_res_0},
};
//variable 'mul_128_a_0' value: 0x3a96cdf1ef11766a606e314ff30edf7f
uint32_t mul_128_a_0_tab [4] = {0xf30edf7f, 0x606e314f, 0xef11766a, 0x3a96cdf1};
bn_uint_t mul_128_a_0= {.number = mul_128_a_0_tab, .length = 4};
//variable 'mul_128_b_0' value: 0xa6adaf0993ba560b51a95c39d7b864d5
uint32_t mul_128_b_0_tab [4] = {0xd7b864d5, 0x51a95c39, 0x93ba560b, 0xa6adaf09};
bn_uint_t mul_128_b_0= {.number = mul_128_b_0_tab, .length = 4};
//variable 'mul_128_res_0' value: 0x262589835568bf092663d35114ba727d32db4310db2a12ef0e02da2256f590ab
uint32_t mul_128_res_0_tab [8] = {0x56f590ab, 0x0e02da22, 0xdb2a12ef, 0x32db4310, 0x14ba727d, 0x2663d351, 0x5568bf09, 0x26258983};
bn_uint_t mul_128_res_0= {.number = mul_128_res_0_tab, .length = 8};
uint32_t mul_128_tab_len=1;
bn_uint_t *mul_128_test_tab[1][3]={
{&mul_128_a_0,&mul_128_b_0,&mul_128_res_0},
};
//variable 'mul_256_a_0' value: 0x9579836bda6dbabca7101ae67586210d3c35889a90b94ab9063df2fdcdb0cd18
uint32_t mul_256_a_0_tab [8] = {0xcdb0cd18, 0x063df2fd, 0x90b94ab9, 0x3c35889a, 0x7586210d, 0xa7101ae6, 0xda6dbabc, 0x9579836b};
bn_uint_t mul_256_a_0= {.number = mul_256_a_0_tab, .length = 8};
//variable 'mul_256_b_0' value: 0x1171c951f9cd908d77fd6bb4580f6bbc6c174736f9da3169c964614870936ee5
uint32_t mul_256_b_0_tab [8] = {0x70936ee5, 0xc9646148, 0xf9da3169, 0x6c174736, 0x580f6bbc, 0x77fd6bb4, 0xf9cd908d, 0x1171c951};
bn_uint_t mul_256_b_0= {.number = mul_256_b_0_tab, .length = 8};
//variable 'mul_256_res_0' value: 0xa2f81e9719a2eff51702a97d8b2ca1d0213b5b73e88e2f2fda9217ab152a4e066ab83b333f234ed705a905482e33e5f79b444808e2d6b54925da86b3c0fc678
uint32_t mul_256_res_0_tab [16] = {0x3c0fc678, 0x925da86b, 0x8e2d6b54, 0x79b44480, 0x82e33e5f, 0x705a9054, 0x33f234ed, 0x66ab83b3, 0xb152a4e0, 0xfda9217a, 0x3e88e2f2, 0x0213b5b7, 0xd8b2ca1d, 0x51702a97, 0x719a2eff, 0xa2f81e9};
bn_uint_t mul_256_res_0= {.number = mul_256_res_0_tab, .length = 16};
uint32_t mul_256_tab_len=1;
bn_uint_t *mul_256_test_tab[1][3]={
{&mul_256_a_0,&mul_256_b_0,&mul_256_res_0},
};
//variable 'mod_barret_128_a_0' value: 0x933c0ddcda21ebefb9aaf84c3b4d01111f4d66fd565094118c687a3af87fbdf4
uint32_t mod_barret_128_a_0_tab [8] = {0xf87fbdf4, 0x8c687a3a, 0x56509411, 0x1f4d66fd, 0x3b4d0111, 0xb9aaf84c, 0xda21ebef, 0x933c0ddc};
bn_uint_t mod_barret_128_a_0= {.number = mod_barret_128_a_0_tab, .length = 8};
//variable 'mod_barret_128_res_0' value: 0x149f958d56ea9bbd474781dea98ace4d
uint32_t mod_barret_128_res_0_tab [4] = {0xa98ace4d, 0x474781de, 0x56ea9bbd, 0x149f958d};
bn_uint_t mod_barret_128_res_0= {.number = mod_barret_128_res_0_tab, .length = 4};
//variable 'mod_barret_128_a_1' value: 0xb7b658797e77dc9dc00cf6a02774926bc960619fc02c88f204f0b58da9b04619
uint32_t mod_barret_128_a_1_tab [8] = {0xa9b04619, 0x04f0b58d, 0xc02c88f2, 0xc960619f, 0x2774926b, 0xc00cf6a0, 0x7e77dc9d, 0xb7b65879};
bn_uint_t mod_barret_128_a_1= {.number = mod_barret_128_a_1_tab, .length = 8};
//variable 'mod_barret_128_res_1' value: 0x3f582610ae111685a0c6c75508d0fc14
uint32_t mod_barret_128_res_1_tab [4] = {0x08d0fc14, 0xa0c6c755, 0xae111685, 0x3f582610};
bn_uint_t mod_barret_128_res_1= {.number = mod_barret_128_res_1_tab, .length = 4};
//variable 'mod_barret_128_a_2' value: 0x3e8da0be3cefe191fb1e84b555c73ad456af1402ee8200a3e903c56f188832b1
uint32_t mod_barret_128_a_2_tab [8] = {0x188832b1, 0xe903c56f, 0xee8200a3, 0x56af1402, 0x55c73ad4, 0xfb1e84b5, 0x3cefe191, 0x3e8da0be};
bn_uint_t mod_barret_128_a_2= {.number = mod_barret_128_a_2_tab, .length = 8};
//variable 'mod_barret_128_res_2' value: 0xfd9e55b9a88d23b3583890434cb9032d
uint32_t mod_barret_128_res_2_tab [4] = {0x4cb9032d, 0x58389043, 0xa88d23b3, 0xfd9e55b9};
bn_uint_t mod_barret_128_res_2= {.number = mod_barret_128_res_2_tab, .length = 4};
//variable 'mod_barret_128_a_3' value: 0x96529a0d6c6816b334ae8601505af9895a6c6f43c2db21e34067a23b1d4fba4f
uint32_t mod_barret_128_a_3_tab [8] = {0x1d4fba4f, 0x4067a23b, 0xc2db21e3, 0x5a6c6f43, 0x505af989, 0x34ae8601, 0x6c6816b3, 0x96529a0d};
bn_uint_t mod_barret_128_a_3= {.number = mod_barret_128_a_3_tab, .length = 8};
//variable 'mod_barret_128_res_3' value: 0x2c996aee5be86cb3a730bddd3b3ceb1d
uint32_t mod_barret_128_res_3_tab [4] = {0x3b3ceb1d, 0xa730bddd, 0x5be86cb3, 0x2c996aee};
bn_uint_t mod_barret_128_res_3= {.number = mod_barret_128_res_3_tab, .length = 4};
//variable 'mod_barret_128_a_4' value: 0x4719c34bf2eafe87d9a61a11582215d2cb28fba8effc360d2a0f775fb217f572
uint32_t mod_barret_128_a_4_tab [8] = {0xb217f572, 0x2a0f775f, 0xeffc360d, 0xcb28fba8, 0x582215d2, 0xd9a61a11, 0xf2eafe87, 0x4719c34b};
bn_uint_t mod_barret_128_a_4= {.number = mod_barret_128_a_4_tab, .length = 8};
//variable 'mod_barret_128_res_4' value: 0x32137be7711abb2e05f29bb2c20053eb
uint32_t mod_barret_128_res_4_tab [4] = {0xc20053eb, 0x05f29bb2, 0x711abb2e, 0x32137be7};
bn_uint_t mod_barret_128_res_4= {.number = mod_barret_128_res_4_tab, .length = 4};
//variable 'mod_barret_128_a_5' value: 0x2b80b705d645b202b694f991fa00fa9d183cf8f2ba2bc58fb8892430a11e148e
uint32_t mod_barret_128_a_5_tab [8] = {0xa11e148e, 0xb8892430, 0xba2bc58f, 0x183cf8f2, 0xfa00fa9d, 0xb694f991, 0xd645b202, 0x2b80b705};
bn_uint_t mod_barret_128_a_5= {.number = mod_barret_128_a_5_tab, .length = 8};
//variable 'mod_barret_128_res_5' value: 0x7c4c8bf2e772e59ec9ac5de0bd65828b
uint32_t mod_barret_128_res_5_tab [4] = {0xbd65828b, 0xc9ac5de0, 0xe772e59e, 0x7c4c8bf2};
bn_uint_t mod_barret_128_res_5= {.number = mod_barret_128_res_5_tab, .length = 4};
//variable 'mod_barret_128_a_6' value: 0xd0ef7476d3437d43328517d392587c87c926c4e1105e03536c4747ae4b60af0e
uint32_t mod_barret_128_a_6_tab [8] = {0x4b60af0e, 0x6c4747ae, 0x105e0353, 0xc926c4e1, 0x92587c87, 0x328517d3, 0xd3437d43, 0xd0ef7476};
bn_uint_t mod_barret_128_a_6= {.number = mod_barret_128_a_6_tab, .length = 8};
//variable 'mod_barret_128_res_6' value: 0x31eec3598580698789112bea174cf40e
uint32_t mod_barret_128_res_6_tab [4] = {0x174cf40e, 0x89112bea, 0x85806987, 0x31eec359};
bn_uint_t mod_barret_128_res_6= {.number = mod_barret_128_res_6_tab, .length = 4};
//variable 'mod_barret_128_a_7' value: 0x4ef5f14010e5f43e664281dace10064af3c690309484a72c1adaafe11e77e44a
uint32_t mod_barret_128_a_7_tab [8] = {0x1e77e44a, 0x1adaafe1, 0x9484a72c, 0xf3c69030, 0xce10064a, 0x664281da, 0x10e5f43e, 0x4ef5f140};
bn_uint_t mod_barret_128_a_7= {.number = mod_barret_128_a_7_tab, .length = 8};
//variable 'mod_barret_128_res_7' value: 0xee754b6f43567debdec0df3b74544949
uint32_t mod_barret_128_res_7_tab [4] = {0x74544949, 0xdec0df3b, 0x43567deb, 0xee754b6f};
bn_uint_t mod_barret_128_res_7= {.number = mod_barret_128_res_7_tab, .length = 4};
//variable 'mod_barret_128_a_8' value: 0x351346a1b96b96ab6e0b5dd3475e1fa404896e8a76979e0ca62c36eb01666e56
uint32_t mod_barret_128_a_8_tab [8] = {0x01666e56, 0xa62c36eb, 0x76979e0c, 0x04896e8a, 0x475e1fa4, 0x6e0b5dd3, 0xb96b96ab, 0x351346a1};
bn_uint_t mod_barret_128_a_8= {.number = mod_barret_128_a_8_tab, .length = 8};
//variable 'mod_barret_128_res_8' value: 0x9d178b3e9a29c1fc5b5bdc9db323d95f
uint32_t mod_barret_128_res_8_tab [4] = {0xb323d95f, 0x5b5bdc9d, 0x9a29c1fc, 0x9d178b3e};
bn_uint_t mod_barret_128_res_8= {.number = mod_barret_128_res_8_tab, .length = 4};
//variable 'mod_barret_128_a_9' value: 0x8a0f86800e4bef12f0cdf7cbc7c6a5982916f022e72582cb747b107db2677ef8
uint32_t mod_barret_128_a_9_tab [8] = {0xb2677ef8, 0x747b107d, 0xe72582cb, 0x2916f022, 0xc7c6a598, 0xf0cdf7cb, 0x0e4bef12, 0x8a0f8680};
bn_uint_t mod_barret_128_a_9= {.number = mod_barret_128_a_9_tab, .length = 8};
//variable 'mod_barret_128_res_9' value: 0x194381ae09907ee0aa1f0073e576047d
uint32_t mod_barret_128_res_9_tab [4] = {0xe576047d, 0xaa1f0073, 0x09907ee0, 0x194381ae};
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
//variable 'mul_mod_barret_128_a_0' value: 0xa305ab38400630eefafdda8e1840dac6
uint32_t mul_mod_barret_128_a_0_tab [4] = {0x1840dac6, 0xfafdda8e, 0x400630ee, 0xa305ab38};
bn_uint_t mul_mod_barret_128_a_0= {.number = mul_mod_barret_128_a_0_tab, .length = 4};
//variable 'mul_mod_barret_128_b_0' value: 0xd237e5308ccfc9618fe9c7e6d710c6e3
uint32_t mul_mod_barret_128_b_0_tab [4] = {0xd710c6e3, 0x8fe9c7e6, 0x8ccfc961, 0xd237e530};
bn_uint_t mul_mod_barret_128_b_0= {.number = mul_mod_barret_128_b_0_tab, .length = 4};
//variable 'mul_mod_barret_128_res_0' value: 0x3b816d60b396bf39a049d408f1b5abfd
uint32_t mul_mod_barret_128_res_0_tab [4] = {0xf1b5abfd, 0xa049d408, 0xb396bf39, 0x3b816d60};
bn_uint_t mul_mod_barret_128_res_0= {.number = mul_mod_barret_128_res_0_tab, .length = 4};
//variable 'mul_mod_barret_128_a_1' value: 0x3c664129eaf615a01aea85806f81da04
uint32_t mul_mod_barret_128_a_1_tab [4] = {0x6f81da04, 0x1aea8580, 0xeaf615a0, 0x3c664129};
bn_uint_t mul_mod_barret_128_a_1= {.number = mul_mod_barret_128_a_1_tab, .length = 4};
//variable 'mul_mod_barret_128_b_1' value: 0x847a24bd02ec1163d2192ba891053d78
uint32_t mul_mod_barret_128_b_1_tab [4] = {0x91053d78, 0xd2192ba8, 0x02ec1163, 0x847a24bd};
bn_uint_t mul_mod_barret_128_b_1= {.number = mul_mod_barret_128_b_1_tab, .length = 4};
//variable 'mul_mod_barret_128_res_1' value: 0xc224b5effa964308dc6d1c2c6a9b3047
uint32_t mul_mod_barret_128_res_1_tab [4] = {0x6a9b3047, 0xdc6d1c2c, 0xfa964308, 0xc224b5ef};
bn_uint_t mul_mod_barret_128_res_1= {.number = mul_mod_barret_128_res_1_tab, .length = 4};
//variable 'mul_mod_barret_128_a_2' value: 0x32ea9a49c317ad0fc15f476bcc5cf1fb
uint32_t mul_mod_barret_128_a_2_tab [4] = {0xcc5cf1fb, 0xc15f476b, 0xc317ad0f, 0x32ea9a49};
bn_uint_t mul_mod_barret_128_a_2= {.number = mul_mod_barret_128_a_2_tab, .length = 4};
//variable 'mul_mod_barret_128_b_2' value: 0x644f2c8b3d08f58a7f7932ab273693c7
uint32_t mul_mod_barret_128_b_2_tab [4] = {0x273693c7, 0x7f7932ab, 0x3d08f58a, 0x644f2c8b};
bn_uint_t mul_mod_barret_128_b_2= {.number = mul_mod_barret_128_b_2_tab, .length = 4};
//variable 'mul_mod_barret_128_res_2' value: 0x5c8b4af43fee5df04a05a244d6ad9f51
uint32_t mul_mod_barret_128_res_2_tab [4] = {0xd6ad9f51, 0x4a05a244, 0x3fee5df0, 0x5c8b4af4};
bn_uint_t mul_mod_barret_128_res_2= {.number = mul_mod_barret_128_res_2_tab, .length = 4};
//variable 'mul_mod_barret_128_a_3' value: 0x9d0aa2abfc2ea4c7726f23dd55339840
uint32_t mul_mod_barret_128_a_3_tab [4] = {0x55339840, 0x726f23dd, 0xfc2ea4c7, 0x9d0aa2ab};
bn_uint_t mul_mod_barret_128_a_3= {.number = mul_mod_barret_128_a_3_tab, .length = 4};
//variable 'mul_mod_barret_128_b_3' value: 0xf3665a36aaaec5f72911bb00aae41a65
uint32_t mul_mod_barret_128_b_3_tab [4] = {0xaae41a65, 0x2911bb00, 0xaaaec5f7, 0xf3665a36};
bn_uint_t mul_mod_barret_128_b_3= {.number = mul_mod_barret_128_b_3_tab, .length = 4};
//variable 'mul_mod_barret_128_res_3' value: 0xa7f8c5abd8684e858fd6e57d0a1f801f
uint32_t mul_mod_barret_128_res_3_tab [4] = {0x0a1f801f, 0x8fd6e57d, 0xd8684e85, 0xa7f8c5ab};
bn_uint_t mul_mod_barret_128_res_3= {.number = mul_mod_barret_128_res_3_tab, .length = 4};
//variable 'mul_mod_barret_128_a_4' value: 0x5a747015afcd64e1f222a6338cd7c0f1
uint32_t mul_mod_barret_128_a_4_tab [4] = {0x8cd7c0f1, 0xf222a633, 0xafcd64e1, 0x5a747015};
bn_uint_t mul_mod_barret_128_a_4= {.number = mul_mod_barret_128_a_4_tab, .length = 4};
//variable 'mul_mod_barret_128_b_4' value: 0x67320af458b39c2f693dd509aa3f081c
uint32_t mul_mod_barret_128_b_4_tab [4] = {0xaa3f081c, 0x693dd509, 0x58b39c2f, 0x67320af4};
bn_uint_t mul_mod_barret_128_b_4= {.number = mul_mod_barret_128_b_4_tab, .length = 4};
//variable 'mul_mod_barret_128_res_4' value: 0x3ff2631179dbf6c24aa6922b29309955
uint32_t mul_mod_barret_128_res_4_tab [4] = {0x29309955, 0x4aa6922b, 0x79dbf6c2, 0x3ff26311};
bn_uint_t mul_mod_barret_128_res_4= {.number = mul_mod_barret_128_res_4_tab, .length = 4};
//variable 'mul_mod_barret_128_a_5' value: 0xec01b6a6c9f228113c1c14a9c7929ecc
uint32_t mul_mod_barret_128_a_5_tab [4] = {0xc7929ecc, 0x3c1c14a9, 0xc9f22811, 0xec01b6a6};
bn_uint_t mul_mod_barret_128_a_5= {.number = mul_mod_barret_128_a_5_tab, .length = 4};
//variable 'mul_mod_barret_128_b_5' value: 0x1695ed5cd37092ab0ed9be9c61f160cc
uint32_t mul_mod_barret_128_b_5_tab [4] = {0x61f160cc, 0x0ed9be9c, 0xd37092ab, 0x1695ed5c};
bn_uint_t mul_mod_barret_128_b_5= {.number = mul_mod_barret_128_b_5_tab, .length = 4};
//variable 'mul_mod_barret_128_res_5' value: 0x11352114c3bc252ef5dd0afb3ef4bc24
uint32_t mul_mod_barret_128_res_5_tab [4] = {0x3ef4bc24, 0xf5dd0afb, 0xc3bc252e, 0x11352114};
bn_uint_t mul_mod_barret_128_res_5= {.number = mul_mod_barret_128_res_5_tab, .length = 4};
//variable 'mul_mod_barret_128_a_6' value: 0xb27a85e9f314a2e8a30af01880921626
uint32_t mul_mod_barret_128_a_6_tab [4] = {0x80921626, 0xa30af018, 0xf314a2e8, 0xb27a85e9};
bn_uint_t mul_mod_barret_128_a_6= {.number = mul_mod_barret_128_a_6_tab, .length = 4};
//variable 'mul_mod_barret_128_b_6' value: 0x1d15c5bc2ef84253203e11c33decf8da
uint32_t mul_mod_barret_128_b_6_tab [4] = {0x3decf8da, 0x203e11c3, 0x2ef84253, 0x1d15c5bc};
bn_uint_t mul_mod_barret_128_b_6= {.number = mul_mod_barret_128_b_6_tab, .length = 4};
//variable 'mul_mod_barret_128_res_6' value: 0xf92d71757eedc32f0a5071a2238417ae
uint32_t mul_mod_barret_128_res_6_tab [4] = {0x238417ae, 0x0a5071a2, 0x7eedc32f, 0xf92d7175};
bn_uint_t mul_mod_barret_128_res_6= {.number = mul_mod_barret_128_res_6_tab, .length = 4};
//variable 'mul_mod_barret_128_a_7' value: 0x5a5693c964f9d2a78834aa497a207d7
uint32_t mul_mod_barret_128_a_7_tab [4] = {0x97a207d7, 0x78834aa4, 0x964f9d2a, 0x5a5693c};
bn_uint_t mul_mod_barret_128_a_7= {.number = mul_mod_barret_128_a_7_tab, .length = 4};
//variable 'mul_mod_barret_128_b_7' value: 0xcd8fb27a0502f6889715c153f953119a
uint32_t mul_mod_barret_128_b_7_tab [4] = {0xf953119a, 0x9715c153, 0x0502f688, 0xcd8fb27a};
bn_uint_t mul_mod_barret_128_b_7= {.number = mul_mod_barret_128_b_7_tab, .length = 4};
//variable 'mul_mod_barret_128_res_7' value: 0x13fa827ecac7c03f1fd61abce092d600
uint32_t mul_mod_barret_128_res_7_tab [4] = {0xe092d600, 0x1fd61abc, 0xcac7c03f, 0x13fa827e};
bn_uint_t mul_mod_barret_128_res_7= {.number = mul_mod_barret_128_res_7_tab, .length = 4};
//variable 'mul_mod_barret_128_a_8' value: 0x32e68fc589e5cc8f86624ab70e03c1fc
uint32_t mul_mod_barret_128_a_8_tab [4] = {0x0e03c1fc, 0x86624ab7, 0x89e5cc8f, 0x32e68fc5};
bn_uint_t mul_mod_barret_128_a_8= {.number = mul_mod_barret_128_a_8_tab, .length = 4};
//variable 'mul_mod_barret_128_b_8' value: 0x280d20ad4691704f6621973aadca735b
uint32_t mul_mod_barret_128_b_8_tab [4] = {0xadca735b, 0x6621973a, 0x4691704f, 0x280d20ad};
bn_uint_t mul_mod_barret_128_b_8= {.number = mul_mod_barret_128_b_8_tab, .length = 4};
//variable 'mul_mod_barret_128_res_8' value: 0x87c8659fe43df5a738e7994d4d7c7889
uint32_t mul_mod_barret_128_res_8_tab [4] = {0x4d7c7889, 0x38e7994d, 0xe43df5a7, 0x87c8659f};
bn_uint_t mul_mod_barret_128_res_8= {.number = mul_mod_barret_128_res_8_tab, .length = 4};
//variable 'mul_mod_barret_128_a_9' value: 0xd75d78cfa0ccf701813bf43d535ecdf9
uint32_t mul_mod_barret_128_a_9_tab [4] = {0x535ecdf9, 0x813bf43d, 0xa0ccf701, 0xd75d78cf};
bn_uint_t mul_mod_barret_128_a_9= {.number = mul_mod_barret_128_a_9_tab, .length = 4};
//variable 'mul_mod_barret_128_b_9' value: 0x9fa51a7737594c4065445a8f2325593a
uint32_t mul_mod_barret_128_b_9_tab [4] = {0x2325593a, 0x65445a8f, 0x37594c40, 0x9fa51a77};
bn_uint_t mul_mod_barret_128_b_9= {.number = mul_mod_barret_128_b_9_tab, .length = 4};
//variable 'mul_mod_barret_128_res_9' value: 0x567e3d5eaebc9ca7353285c4f69f65db
uint32_t mul_mod_barret_128_res_9_tab [4] = {0xf69f65db, 0x353285c4, 0xaebc9ca7, 0x567e3d5e};
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
//variable 'mod_barret_256_a_0' value: 0xc7b0ef6f6fe3a42f9cefa275832c987c87b6625d34896eff184e4b15dad6d0413c4224ec6bc153b557e9482dec5bc3f3d1c83a7cba2195d5a36066bf7c1f9320
uint32_t mod_barret_256_a_0_tab [16] = {0x7c1f9320, 0xa36066bf, 0xba2195d5, 0xd1c83a7c, 0xec5bc3f3, 0x57e9482d, 0x6bc153b5, 0x3c4224ec, 0xdad6d041, 0x184e4b15, 0x34896eff, 0x87b6625d, 0x832c987c, 0x9cefa275, 0x6fe3a42f, 0xc7b0ef6f};
bn_uint_t mod_barret_256_a_0= {.number = mod_barret_256_a_0_tab, .length = 16};
//variable 'mod_barret_256_res_0' value: 0x91cfb730f498a6407d00f38b4fa023f1c9a7c7dca1dd311c98875243578e6cfa
uint32_t mod_barret_256_res_0_tab [8] = {0x578e6cfa, 0x98875243, 0xa1dd311c, 0xc9a7c7dc, 0x4fa023f1, 0x7d00f38b, 0xf498a640, 0x91cfb730};
bn_uint_t mod_barret_256_res_0= {.number = mod_barret_256_res_0_tab, .length = 8};
//variable 'mod_barret_256_a_1' value: 0x15fc30304130350661559c8021003b2bceeadb49612721e953bc0ea6ae7fe6621475b2a8c64ce7652e0efae5746508e2f2c6ceca4c10f10d353f640d98a73158
uint32_t mod_barret_256_a_1_tab [16] = {0x98a73158, 0x353f640d, 0x4c10f10d, 0xf2c6ceca, 0x746508e2, 0x2e0efae5, 0xc64ce765, 0x1475b2a8, 0xae7fe662, 0x53bc0ea6, 0x612721e9, 0xceeadb49, 0x21003b2b, 0x61559c80, 0x41303506, 0x15fc3030};
bn_uint_t mod_barret_256_a_1= {.number = mod_barret_256_a_1_tab, .length = 16};
//variable 'mod_barret_256_res_1' value: 0x528254bd14ef8e505904d0f0055dbcb11bba72fbc3a0ec8910a057bb08723e65
uint32_t mod_barret_256_res_1_tab [8] = {0x08723e65, 0x10a057bb, 0xc3a0ec89, 0x1bba72fb, 0x055dbcb1, 0x5904d0f0, 0x14ef8e50, 0x528254bd};
bn_uint_t mod_barret_256_res_1= {.number = mod_barret_256_res_1_tab, .length = 8};
//variable 'mod_barret_256_a_2' value: 0x7371e4cf5e2e1ed8c3e7346fbfe8f1d8df5230076d2335a8e64db2a54affc934b4aace279cf35b782f7474986f6db600dc263d0b2fbb317bc560dc8898f21f18
uint32_t mod_barret_256_a_2_tab [16] = {0x98f21f18, 0xc560dc88, 0x2fbb317b, 0xdc263d0b, 0x6f6db600, 0x2f747498, 0x9cf35b78, 0xb4aace27, 0x4affc934, 0xe64db2a5, 0x6d2335a8, 0xdf523007, 0xbfe8f1d8, 0xc3e7346f, 0x5e2e1ed8, 0x7371e4cf};
bn_uint_t mod_barret_256_a_2= {.number = mod_barret_256_a_2_tab, .length = 16};
//variable 'mod_barret_256_res_2' value: 0x89bab9d330fb3a369a9b9a4881cb391c39c45490e6a95f13c3619ae608ef25ca
uint32_t mod_barret_256_res_2_tab [8] = {0x08ef25ca, 0xc3619ae6, 0xe6a95f13, 0x39c45490, 0x81cb391c, 0x9a9b9a48, 0x30fb3a36, 0x89bab9d3};
bn_uint_t mod_barret_256_res_2= {.number = mod_barret_256_res_2_tab, .length = 8};
//variable 'mod_barret_256_a_3' value: 0x12f1b5617dcec494972fbae528e8947ea74aa5bdd6d52ad21e9a52eb9eb592cd901e2095645c593889d7e7f69238fa75d26b1e840c6c9872bd24d56126f099a3
uint32_t mod_barret_256_a_3_tab [16] = {0x26f099a3, 0xbd24d561, 0x0c6c9872, 0xd26b1e84, 0x9238fa75, 0x89d7e7f6, 0x645c5938, 0x901e2095, 0x9eb592cd, 0x1e9a52eb, 0xd6d52ad2, 0xa74aa5bd, 0x28e8947e, 0x972fbae5, 0x7dcec494, 0x12f1b561};
bn_uint_t mod_barret_256_a_3= {.number = mod_barret_256_a_3_tab, .length = 16};
//variable 'mod_barret_256_res_3' value: 0x2970b393dd8be6e548a6cbbb9ac8e01439bfb2c7629c342761bb89c4ff0ec5a6
uint32_t mod_barret_256_res_3_tab [8] = {0xff0ec5a6, 0x61bb89c4, 0x629c3427, 0x39bfb2c7, 0x9ac8e014, 0x48a6cbbb, 0xdd8be6e5, 0x2970b393};
bn_uint_t mod_barret_256_res_3= {.number = mod_barret_256_res_3_tab, .length = 8};
//variable 'mod_barret_256_a_4' value: 0xcbb7b20352679c8bf7e1132ed6681924ed48da1f72e1510ff852e5921edb86ed888c6438650a17cbd92124bae25a3f38564177ac30626d278255de868814ca71
uint32_t mod_barret_256_a_4_tab [16] = {0x8814ca71, 0x8255de86, 0x30626d27, 0x564177ac, 0xe25a3f38, 0xd92124ba, 0x650a17cb, 0x888c6438, 0x1edb86ed, 0xf852e592, 0x72e1510f, 0xed48da1f, 0xd6681924, 0xf7e1132e, 0x52679c8b, 0xcbb7b203};
bn_uint_t mod_barret_256_a_4= {.number = mod_barret_256_a_4_tab, .length = 16};
//variable 'mod_barret_256_res_4' value: 0xdc1ba9afd462f824d9400b04661ffdc8f29e52de7a8c369801219a45914993f3
uint32_t mod_barret_256_res_4_tab [8] = {0x914993f3, 0x01219a45, 0x7a8c3698, 0xf29e52de, 0x661ffdc8, 0xd9400b04, 0xd462f824, 0xdc1ba9af};
bn_uint_t mod_barret_256_res_4= {.number = mod_barret_256_res_4_tab, .length = 8};
//variable 'mod_barret_256_a_5' value: 0xcd65465c6f99e1c619c73ddeb64148d53a148f8f618afb0efec2d52b2abaae020ed462ef4b0e8fceef5c49d06e4c9ae47a0eb3cfdd23b0fba22c78a30dc7ba6e
uint32_t mod_barret_256_a_5_tab [16] = {0x0dc7ba6e, 0xa22c78a3, 0xdd23b0fb, 0x7a0eb3cf, 0x6e4c9ae4, 0xef5c49d0, 0x4b0e8fce, 0x0ed462ef, 0x2abaae02, 0xfec2d52b, 0x618afb0e, 0x3a148f8f, 0xb64148d5, 0x19c73dde, 0x6f99e1c6, 0xcd65465c};
bn_uint_t mod_barret_256_a_5= {.number = mod_barret_256_a_5_tab, .length = 16};
//variable 'mod_barret_256_res_5' value: 0x3616d2b824f07c8a33e444d81da9b9d77d9ed8eb21fcd597f5729a06bd8e4594
uint32_t mod_barret_256_res_5_tab [8] = {0xbd8e4594, 0xf5729a06, 0x21fcd597, 0x7d9ed8eb, 0x1da9b9d7, 0x33e444d8, 0x24f07c8a, 0x3616d2b8};
bn_uint_t mod_barret_256_res_5= {.number = mod_barret_256_res_5_tab, .length = 8};
//variable 'mod_barret_256_a_6' value: 0x7e9161661cbb4443618f57f5e3694e276dc0e1569e242e929ddabf8afa7fb4e7d9ed5285a62a0f911bd60c6ee71449a60637678f66704219c8bdb0d55a99a2d2
uint32_t mod_barret_256_a_6_tab [16] = {0x5a99a2d2, 0xc8bdb0d5, 0x66704219, 0x0637678f, 0xe71449a6, 0x1bd60c6e, 0xa62a0f91, 0xd9ed5285, 0xfa7fb4e7, 0x9ddabf8a, 0x9e242e92, 0x6dc0e156, 0xe3694e27, 0x618f57f5, 0x1cbb4443, 0x7e916166};
bn_uint_t mod_barret_256_a_6= {.number = mod_barret_256_a_6_tab, .length = 16};
//variable 'mod_barret_256_res_6' value: 0xff43759ac2b382aa8b17965e51c1ec05f32f48a7757954632477532c237f4b8e
uint32_t mod_barret_256_res_6_tab [8] = {0x237f4b8e, 0x2477532c, 0x75795463, 0xf32f48a7, 0x51c1ec05, 0x8b17965e, 0xc2b382aa, 0xff43759a};
bn_uint_t mod_barret_256_res_6= {.number = mod_barret_256_res_6_tab, .length = 8};
//variable 'mod_barret_256_a_7' value: 0x11e13f58af13cca7d7ef7c3be4bebcd55fc090f7e262545e84be62f95449b8b4249a5176fd89a621b58b70ff2b2cda9ae54df2360473d7eaeab1c58a2b0dfeb8
uint32_t mod_barret_256_a_7_tab [16] = {0x2b0dfeb8, 0xeab1c58a, 0x0473d7ea, 0xe54df236, 0x2b2cda9a, 0xb58b70ff, 0xfd89a621, 0x249a5176, 0x5449b8b4, 0x84be62f9, 0xe262545e, 0x5fc090f7, 0xe4bebcd5, 0xd7ef7c3b, 0xaf13cca7, 0x11e13f58};
bn_uint_t mod_barret_256_a_7= {.number = mod_barret_256_a_7_tab, .length = 16};
//variable 'mod_barret_256_res_7' value: 0xafb6a9cd2d6eeb5993505cc8ec7c620d5b52af06adb23504d42f37d0389383b4
uint32_t mod_barret_256_res_7_tab [8] = {0x389383b4, 0xd42f37d0, 0xadb23504, 0x5b52af06, 0xec7c620d, 0x93505cc8, 0x2d6eeb59, 0xafb6a9cd};
bn_uint_t mod_barret_256_res_7= {.number = mod_barret_256_res_7_tab, .length = 8};
//variable 'mod_barret_256_a_8' value: 0xbf993f5b6435bad19ba649f1511d6568e2142406b01370a46766c1bbefdb0e034ff470f1e63306d3623ec905c50825174c65b76f0baeb8f305ffda3a901ae930
uint32_t mod_barret_256_a_8_tab [16] = {0x901ae930, 0x05ffda3a, 0x0baeb8f3, 0x4c65b76f, 0xc5082517, 0x623ec905, 0xe63306d3, 0x4ff470f1, 0xefdb0e03, 0x6766c1bb, 0xb01370a4, 0xe2142406, 0x511d6568, 0x9ba649f1, 0x6435bad1, 0xbf993f5b};
bn_uint_t mod_barret_256_a_8= {.number = mod_barret_256_a_8_tab, .length = 16};
//variable 'mod_barret_256_res_8' value: 0xffaff904d66b30308f687d3beb4b0c3c37940522de61097f0ce76313b44f2abe
uint32_t mod_barret_256_res_8_tab [8] = {0xb44f2abe, 0x0ce76313, 0xde61097f, 0x37940522, 0xeb4b0c3c, 0x8f687d3b, 0xd66b3030, 0xffaff904};
bn_uint_t mod_barret_256_res_8= {.number = mod_barret_256_res_8_tab, .length = 8};
//variable 'mod_barret_256_a_9' value: 0x47545cbf1181b92f2410b6c54f7da2e6f98598223d5837aa9a05c4538a5f345ecc38b1acfa3ace196baf48afa7bff43ca7aef025ab64585c2aa97b77395ff1f2
uint32_t mod_barret_256_a_9_tab [16] = {0x395ff1f2, 0x2aa97b77, 0xab64585c, 0xa7aef025, 0xa7bff43c, 0x6baf48af, 0xfa3ace19, 0xcc38b1ac, 0x8a5f345e, 0x9a05c453, 0x3d5837aa, 0xf9859822, 0x4f7da2e6, 0x2410b6c5, 0x1181b92f, 0x47545cbf};
bn_uint_t mod_barret_256_a_9= {.number = mod_barret_256_a_9_tab, .length = 16};
//variable 'mod_barret_256_res_9' value: 0x8228d2d0bd147137e74ab58ac90064c5f20cc78b655b5b7535a307dadf2f3fa7
uint32_t mod_barret_256_res_9_tab [8] = {0xdf2f3fa7, 0x35a307da, 0x655b5b75, 0xf20cc78b, 0xc90064c5, 0xe74ab58a, 0xbd147137, 0x8228d2d0};
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
//variable 'mul_mod_barret_256_a_0' value: 0xeb2c96510ad1a05690154de10ff6a1447fc9b2ce9570202217b508b5da516004
uint32_t mul_mod_barret_256_a_0_tab [8] = {0xda516004, 0x17b508b5, 0x95702022, 0x7fc9b2ce, 0x0ff6a144, 0x90154de1, 0x0ad1a056, 0xeb2c9651};
bn_uint_t mul_mod_barret_256_a_0= {.number = mul_mod_barret_256_a_0_tab, .length = 8};
//variable 'mul_mod_barret_256_b_0' value: 0xa39d54fb861e48ade7a8e549aa36533b8a9b3ba8a88e2af1c2e03bbeb1b1fd5a
uint32_t mul_mod_barret_256_b_0_tab [8] = {0xb1b1fd5a, 0xc2e03bbe, 0xa88e2af1, 0x8a9b3ba8, 0xaa36533b, 0xe7a8e549, 0x861e48ad, 0xa39d54fb};
bn_uint_t mul_mod_barret_256_b_0= {.number = mul_mod_barret_256_b_0_tab, .length = 8};
//variable 'mul_mod_barret_256_res_0' value: 0x488b7ab3492eb117df10b8a77ec1b82653531b5fde0426dfddd7c8fd1487cc5
uint32_t mul_mod_barret_256_res_0_tab [8] = {0xd1487cc5, 0xfddd7c8f, 0xfde0426d, 0x653531b5, 0x77ec1b82, 0x7df10b8a, 0x3492eb11, 0x488b7ab};
bn_uint_t mul_mod_barret_256_res_0= {.number = mul_mod_barret_256_res_0_tab, .length = 8};
//variable 'mul_mod_barret_256_a_1' value: 0xfbe621fc662c33171bf7e419373c98a740a8d128ef6a24f58df173e24aded1c9
uint32_t mul_mod_barret_256_a_1_tab [8] = {0x4aded1c9, 0x8df173e2, 0xef6a24f5, 0x40a8d128, 0x373c98a7, 0x1bf7e419, 0x662c3317, 0xfbe621fc};
bn_uint_t mul_mod_barret_256_a_1= {.number = mul_mod_barret_256_a_1_tab, .length = 8};
//variable 'mul_mod_barret_256_b_1' value: 0x917a1ab030af1f34e4f4c39342c967dcb92f1538a148bf40f48586e56fad7280
uint32_t mul_mod_barret_256_b_1_tab [8] = {0x6fad7280, 0xf48586e5, 0xa148bf40, 0xb92f1538, 0x42c967dc, 0xe4f4c393, 0x30af1f34, 0x917a1ab0};
bn_uint_t mul_mod_barret_256_b_1= {.number = mul_mod_barret_256_b_1_tab, .length = 8};
//variable 'mul_mod_barret_256_res_1' value: 0x7ba8903aa083007a979c2323570837ae1392aa73708d82fd36345a9dd6b09bcc
uint32_t mul_mod_barret_256_res_1_tab [8] = {0xd6b09bcc, 0x36345a9d, 0x708d82fd, 0x1392aa73, 0x570837ae, 0x979c2323, 0xa083007a, 0x7ba8903a};
bn_uint_t mul_mod_barret_256_res_1= {.number = mul_mod_barret_256_res_1_tab, .length = 8};
//variable 'mul_mod_barret_256_a_2' value: 0x284b67a8f57ab26373784e488b09f4b6d67ec2ddda487f3b91e46feb5fa8ff9b
uint32_t mul_mod_barret_256_a_2_tab [8] = {0x5fa8ff9b, 0x91e46feb, 0xda487f3b, 0xd67ec2dd, 0x8b09f4b6, 0x73784e48, 0xf57ab263, 0x284b67a8};
bn_uint_t mul_mod_barret_256_a_2= {.number = mul_mod_barret_256_a_2_tab, .length = 8};
//variable 'mul_mod_barret_256_b_2' value: 0xeda5a52a7079b9a5f306c773949a5f146ccee7fc9259748e7c364ac46a84c61f
uint32_t mul_mod_barret_256_b_2_tab [8] = {0x6a84c61f, 0x7c364ac4, 0x9259748e, 0x6ccee7fc, 0x949a5f14, 0xf306c773, 0x7079b9a5, 0xeda5a52a};
bn_uint_t mul_mod_barret_256_b_2= {.number = mul_mod_barret_256_b_2_tab, .length = 8};
//variable 'mul_mod_barret_256_res_2' value: 0x8aaa5b784b93cce2460ad8e4b25ae00e2cf26cf0a9710a83c4b615cb195c813a
uint32_t mul_mod_barret_256_res_2_tab [8] = {0x195c813a, 0xc4b615cb, 0xa9710a83, 0x2cf26cf0, 0xb25ae00e, 0x460ad8e4, 0x4b93cce2, 0x8aaa5b78};
bn_uint_t mul_mod_barret_256_res_2= {.number = mul_mod_barret_256_res_2_tab, .length = 8};
//variable 'mul_mod_barret_256_a_3' value: 0xe4b761c7e05b0fe5dfd5afc1e840ea567bc3579a0e9840ba030c80f8c23ef0b3
uint32_t mul_mod_barret_256_a_3_tab [8] = {0xc23ef0b3, 0x030c80f8, 0x0e9840ba, 0x7bc3579a, 0xe840ea56, 0xdfd5afc1, 0xe05b0fe5, 0xe4b761c7};
bn_uint_t mul_mod_barret_256_a_3= {.number = mul_mod_barret_256_a_3_tab, .length = 8};
//variable 'mul_mod_barret_256_b_3' value: 0x37855d715b59ee3fc972315f19a7f280d140f534100721447267fef9a0263e71
uint32_t mul_mod_barret_256_b_3_tab [8] = {0xa0263e71, 0x7267fef9, 0x10072144, 0xd140f534, 0x19a7f280, 0xc972315f, 0x5b59ee3f, 0x37855d71};
bn_uint_t mul_mod_barret_256_b_3= {.number = mul_mod_barret_256_b_3_tab, .length = 8};
//variable 'mul_mod_barret_256_res_3' value: 0x41ea1d2f7211634b12705a5dea6db63047243cc4ea49c74636c31d189a6a5c55
uint32_t mul_mod_barret_256_res_3_tab [8] = {0x9a6a5c55, 0x36c31d18, 0xea49c746, 0x47243cc4, 0xea6db630, 0x12705a5d, 0x7211634b, 0x41ea1d2f};
bn_uint_t mul_mod_barret_256_res_3= {.number = mul_mod_barret_256_res_3_tab, .length = 8};
//variable 'mul_mod_barret_256_a_4' value: 0x90688e1fbb7208e157df16a07bbb1ae08b64a35e049ae87d76801b274b8ee0c3
uint32_t mul_mod_barret_256_a_4_tab [8] = {0x4b8ee0c3, 0x76801b27, 0x049ae87d, 0x8b64a35e, 0x7bbb1ae0, 0x57df16a0, 0xbb7208e1, 0x90688e1f};
bn_uint_t mul_mod_barret_256_a_4= {.number = mul_mod_barret_256_a_4_tab, .length = 8};
//variable 'mul_mod_barret_256_b_4' value: 0xe7af29051fa89f2e417223e712e74b9eaf85cf4a88b180afd7d5fa989c656e30
uint32_t mul_mod_barret_256_b_4_tab [8] = {0x9c656e30, 0xd7d5fa98, 0x88b180af, 0xaf85cf4a, 0x12e74b9e, 0x417223e7, 0x1fa89f2e, 0xe7af2905};
bn_uint_t mul_mod_barret_256_b_4= {.number = mul_mod_barret_256_b_4_tab, .length = 8};
//variable 'mul_mod_barret_256_res_4' value: 0xac99f33640713a128d1f3bb6309cba29108cf60c2cc997bbfd70c04705bbabc3
uint32_t mul_mod_barret_256_res_4_tab [8] = {0x05bbabc3, 0xfd70c047, 0x2cc997bb, 0x108cf60c, 0x309cba29, 0x8d1f3bb6, 0x40713a12, 0xac99f336};
bn_uint_t mul_mod_barret_256_res_4= {.number = mul_mod_barret_256_res_4_tab, .length = 8};
//variable 'mul_mod_barret_256_a_5' value: 0xaed2ac21d2b3c5858d1781adb18ab9fd03fd12cbc7ab1ec93a35c14d11b89ce
uint32_t mul_mod_barret_256_a_5_tab [8] = {0xd11b89ce, 0x93a35c14, 0xbc7ab1ec, 0xd03fd12c, 0xdb18ab9f, 0x58d1781a, 0x1d2b3c58, 0xaed2ac2};
bn_uint_t mul_mod_barret_256_a_5= {.number = mul_mod_barret_256_a_5_tab, .length = 8};
//variable 'mul_mod_barret_256_b_5' value: 0x8559da8ca26155cb3f17b88d9f43a00f398f9cf511f0c10aa8417aad994bb16c
uint32_t mul_mod_barret_256_b_5_tab [8] = {0x994bb16c, 0xa8417aad, 0x11f0c10a, 0x398f9cf5, 0x9f43a00f, 0x3f17b88d, 0xa26155cb, 0x8559da8c};
bn_uint_t mul_mod_barret_256_b_5= {.number = mul_mod_barret_256_b_5_tab, .length = 8};
//variable 'mul_mod_barret_256_res_5' value: 0x54f68de188b9a97b2b8818ec8094a130d618df461ad354628aa15b3fd64a586d
uint32_t mul_mod_barret_256_res_5_tab [8] = {0xd64a586d, 0x8aa15b3f, 0x1ad35462, 0xd618df46, 0x8094a130, 0x2b8818ec, 0x88b9a97b, 0x54f68de1};
bn_uint_t mul_mod_barret_256_res_5= {.number = mul_mod_barret_256_res_5_tab, .length = 8};
//variable 'mul_mod_barret_256_a_6' value: 0x1e01a4e88e62264597eb71cd7ab78e39c38a6e2618effb6f63d354a3058edf7f
uint32_t mul_mod_barret_256_a_6_tab [8] = {0x058edf7f, 0x63d354a3, 0x18effb6f, 0xc38a6e26, 0x7ab78e39, 0x97eb71cd, 0x8e622645, 0x1e01a4e8};
bn_uint_t mul_mod_barret_256_a_6= {.number = mul_mod_barret_256_a_6_tab, .length = 8};
//variable 'mul_mod_barret_256_b_6' value: 0xf25c78cf8606539d7659d22f555252619d1c4d220f2523de1312329859af5c7d
uint32_t mul_mod_barret_256_b_6_tab [8] = {0x59af5c7d, 0x13123298, 0x0f2523de, 0x9d1c4d22, 0x55525261, 0x7659d22f, 0x8606539d, 0xf25c78cf};
bn_uint_t mul_mod_barret_256_b_6= {.number = mul_mod_barret_256_b_6_tab, .length = 8};
//variable 'mul_mod_barret_256_res_6' value: 0x9c9089ad4326e5fc519172de73550641676fb59f0e8be6a36554de1af4c482ee
uint32_t mul_mod_barret_256_res_6_tab [8] = {0xf4c482ee, 0x6554de1a, 0x0e8be6a3, 0x676fb59f, 0x73550641, 0x519172de, 0x4326e5fc, 0x9c9089ad};
bn_uint_t mul_mod_barret_256_res_6= {.number = mul_mod_barret_256_res_6_tab, .length = 8};
//variable 'mul_mod_barret_256_a_7' value: 0xa724ab155ba49c053fdb3d06bd4e2a6b2283df661cd5a20813c6e580bcf5f6f5
uint32_t mul_mod_barret_256_a_7_tab [8] = {0xbcf5f6f5, 0x13c6e580, 0x1cd5a208, 0x2283df66, 0xbd4e2a6b, 0x3fdb3d06, 0x5ba49c05, 0xa724ab15};
bn_uint_t mul_mod_barret_256_a_7= {.number = mul_mod_barret_256_a_7_tab, .length = 8};
//variable 'mul_mod_barret_256_b_7' value: 0x45ce6a0333928a2009616f563cbca7df7183beb58e37db971670f69ac62c8400
uint32_t mul_mod_barret_256_b_7_tab [8] = {0xc62c8400, 0x1670f69a, 0x8e37db97, 0x7183beb5, 0x3cbca7df, 0x09616f56, 0x33928a20, 0x45ce6a03};
bn_uint_t mul_mod_barret_256_b_7= {.number = mul_mod_barret_256_b_7_tab, .length = 8};
//variable 'mul_mod_barret_256_res_7' value: 0x770c75c2bc632479a6ff637559c0df16f998691610204a6a8938fcaef7a212e7
uint32_t mul_mod_barret_256_res_7_tab [8] = {0xf7a212e7, 0x8938fcae, 0x10204a6a, 0xf9986916, 0x59c0df16, 0xa6ff6375, 0xbc632479, 0x770c75c2};
bn_uint_t mul_mod_barret_256_res_7= {.number = mul_mod_barret_256_res_7_tab, .length = 8};
//variable 'mul_mod_barret_256_a_8' value: 0x9bedf8b9b2d00c921532139d743ec7b5f294f7b86e84ef207bd91e379ebac8c
uint32_t mul_mod_barret_256_a_8_tab [8] = {0x79ebac8c, 0x07bd91e3, 0x86e84ef2, 0x5f294f7b, 0xd743ec7b, 0x21532139, 0x9b2d00c9, 0x9bedf8b};
bn_uint_t mul_mod_barret_256_a_8= {.number = mul_mod_barret_256_a_8_tab, .length = 8};
//variable 'mul_mod_barret_256_b_8' value: 0xba62f45b479f797c3f48b0ad2148d1f6abac43ee35aba0d5ac6f55b7dff63494
uint32_t mul_mod_barret_256_b_8_tab [8] = {0xdff63494, 0xac6f55b7, 0x35aba0d5, 0xabac43ee, 0x2148d1f6, 0x3f48b0ad, 0x479f797c, 0xba62f45b};
bn_uint_t mul_mod_barret_256_b_8= {.number = mul_mod_barret_256_b_8_tab, .length = 8};
//variable 'mul_mod_barret_256_res_8' value: 0x282165c381bc7785ffe42e03562faa2be6bde538b45077f82b1a59e83db1a58d
uint32_t mul_mod_barret_256_res_8_tab [8] = {0x3db1a58d, 0x2b1a59e8, 0xb45077f8, 0xe6bde538, 0x562faa2b, 0xffe42e03, 0x81bc7785, 0x282165c3};
bn_uint_t mul_mod_barret_256_res_8= {.number = mul_mod_barret_256_res_8_tab, .length = 8};
//variable 'mul_mod_barret_256_a_9' value: 0x639a25f64eab8140b161b9acd493801c2b70a3d9bab285a9a396049718d82df9
uint32_t mul_mod_barret_256_a_9_tab [8] = {0x18d82df9, 0xa3960497, 0xbab285a9, 0x2b70a3d9, 0xd493801c, 0xb161b9ac, 0x4eab8140, 0x639a25f6};
bn_uint_t mul_mod_barret_256_a_9= {.number = mul_mod_barret_256_a_9_tab, .length = 8};
//variable 'mul_mod_barret_256_b_9' value: 0x5eab8c7dc47e2eef2ab77487701f325da236baa208562148e5e035595df724c9
uint32_t mul_mod_barret_256_b_9_tab [8] = {0x5df724c9, 0xe5e03559, 0x08562148, 0xa236baa2, 0x701f325d, 0x2ab77487, 0xc47e2eef, 0x5eab8c7d};
bn_uint_t mul_mod_barret_256_b_9= {.number = mul_mod_barret_256_b_9_tab, .length = 8};
//variable 'mul_mod_barret_256_res_9' value: 0x4852ec5f734723aea871e9f72d32a2e5eacf92d5fab2d94fdea5226d65139a5e
uint32_t mul_mod_barret_256_res_9_tab [8] = {0x65139a5e, 0xdea5226d, 0xfab2d94f, 0xeacf92d5, 0x2d32a2e5, 0xa871e9f7, 0x734723ae, 0x4852ec5f};
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
