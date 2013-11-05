/*
File generate using external software
*/
#ifndef TEST_BIGNUM_VALUES_H_
#define TEST_BIGNUM_VALUES_H_
#include "bignum.h"

//variable 'add_128_a_0' value: 0x4ed0cae1d313d2438afc3d67c8af10c6
uint32_t add_128_a_0_tab [4] = {0xc8af10c6, 0x8afc3d67, 0xd313d243, 0x4ed0cae1};
bn_uint_t add_128_a_0= {.number = add_128_a_0_tab, .length = 4};
//variable 'add_128_b_0' value: 0x9db8564e686d5eb837d6ea13e8d3b5c9
uint32_t add_128_b_0_tab [4] = {0xe8d3b5c9, 0x37d6ea13, 0x686d5eb8, 0x9db8564e};
bn_uint_t add_128_b_0= {.number = add_128_b_0_tab, .length = 4};
//variable 'add_128_res_0' value: 0xec8921303b8130fbc2d3277bb182c68f
uint32_t add_128_res_0_tab [4] = {0xb182c68f, 0xc2d3277b, 0x3b8130fb, 0xec892130};
bn_uint_t add_128_res_0= {.number = add_128_res_0_tab, .length = 4};
uint32_t add_128_tab_len=1;
bn_uint_t *add_128_test_tab[1][3]={
{&add_128_a_0,&add_128_b_0,&add_128_res_0},
};
//variable 'add_256_a_0' value: 0x2f02fb1031b7029979c80a16c51afae47132dd7aaf9a02a8a88a890ff801e51a
uint32_t add_256_a_0_tab [8] = {0xf801e51a, 0xa88a890f, 0xaf9a02a8, 0x7132dd7a, 0xc51afae4, 0x79c80a16, 0x31b70299, 0x2f02fb10};
bn_uint_t add_256_a_0= {.number = add_256_a_0_tab, .length = 8};
//variable 'add_256_b_0' value: 0x3fd6188851f312df97a3125ca57344539dc69cb88daedb0482ac064dc0ee38f2
uint32_t add_256_b_0_tab [8] = {0xc0ee38f2, 0x82ac064d, 0x8daedb04, 0x9dc69cb8, 0xa5734453, 0x97a3125c, 0x51f312df, 0x3fd61888};
bn_uint_t add_256_b_0= {.number = add_256_b_0_tab, .length = 8};
//variable 'add_256_res_0' value: 0x6ed9139883aa1579116b1c736a8e3f380ef97a333d48ddad2b368f5db8f01e0c
uint32_t add_256_res_0_tab [8] = {0xb8f01e0c, 0x2b368f5d, 0x3d48ddad, 0x0ef97a33, 0x6a8e3f38, 0x116b1c73, 0x83aa1579, 0x6ed91398};
bn_uint_t add_256_res_0= {.number = add_256_res_0_tab, .length = 8};
uint32_t add_256_tab_len=1;
bn_uint_t *add_256_test_tab[1][3]={
{&add_256_a_0,&add_256_b_0,&add_256_res_0},
};
//variable 'sub_128_a_0' value: 0x85aaf14adce7f6b2b51644acfc4bcd7c
uint32_t sub_128_a_0_tab [4] = {0xfc4bcd7c, 0xb51644ac, 0xdce7f6b2, 0x85aaf14a};
bn_uint_t sub_128_a_0= {.number = sub_128_a_0_tab, .length = 4};
//variable 'sub_128_b_0' value: 0xb7a97d096de66413adf38d99116af2e7
uint32_t sub_128_b_0_tab [4] = {0x116af2e7, 0xadf38d99, 0x6de66413, 0xb7a97d09};
bn_uint_t sub_128_b_0= {.number = sub_128_b_0_tab, .length = 4};
//variable 'sub_128_res_0' value: 0x-31fe8bbe90fe6d60f8dd48ec151f256b
uint32_t sub_128_res_0_tab [5] = {0xeae0da95, 0x0722b713, 0x6f01929f, 0xce017441, 0xffffffff};
bn_uint_t sub_128_res_0= {.number = sub_128_res_0_tab, .length = 5};
uint32_t sub_128_tab_len=1;
bn_uint_t *sub_128_test_tab[1][3]={
{&sub_128_a_0,&sub_128_b_0,&sub_128_res_0},
};
//variable 'sub_256_a_0' value: 0x19c1f0abe7f3030e03eb7f257bb9668b63277e7c2166cef5ede1283c4b61424b
uint32_t sub_256_a_0_tab [8] = {0x4b61424b, 0xede1283c, 0x2166cef5, 0x63277e7c, 0x7bb9668b, 0x03eb7f25, 0xe7f3030e, 0x19c1f0ab};
bn_uint_t sub_256_a_0= {.number = sub_256_a_0_tab, .length = 8};
//variable 'sub_256_b_0' value: 0x32acc6dc6836069c52e766124c9eaf4430059b2e50575af22e9edad4fe2a0922
uint32_t sub_256_b_0_tab [8] = {0xfe2a0922, 0x2e9edad4, 0x50575af2, 0x30059b2e, 0x4c9eaf44, 0x52e76612, 0x6836069c, 0x32acc6dc};
bn_uint_t sub_256_b_0= {.number = sub_256_b_0_tab, .length = 8};
//variable 'sub_256_res_0' value: 0x-18ead6308043038e4efbe6ecd0e548b8ccde1cb22ef08bfc40bdb298b2c8c6d7
uint32_t sub_256_res_0_tab [9] = {0x4d373929, 0xbf424d67, 0xd10f7403, 0x3321e34d, 0x2f1ab747, 0xb1041913, 0x7fbcfc71, 0xe71529cf, 0xffffffff};
bn_uint_t sub_256_res_0= {.number = sub_256_res_0_tab, .length = 9};
uint32_t sub_256_tab_len=1;
bn_uint_t *sub_256_test_tab[1][3]={
{&sub_256_a_0,&sub_256_b_0,&sub_256_res_0},
};
//variable 'add_mod_128_a_0' value: 0x33e7a02e58be0d36c352cdcc2d479805
uint32_t add_mod_128_a_0_tab [4] = {0x2d479805, 0xc352cdcc, 0x58be0d36, 0x33e7a02e};
bn_uint_t add_mod_128_a_0= {.number = add_mod_128_a_0_tab, .length = 4};
//variable 'add_mod_128_b_0' value: 0x7fbc76eb62f26c5315fe0af9deef2b46
uint32_t add_mod_128_b_0_tab [4] = {0xdeef2b46, 0x15fe0af9, 0x62f26c53, 0x7fbc76eb};
bn_uint_t add_mod_128_b_0= {.number = add_mod_128_b_0_tab, .length = 4};
//variable 'add_mod_128_p_0' value: 0xcb52df76ee78eaa930846337b1e07957
uint32_t add_mod_128_p_0_tab [4] = {0xb1e07957, 0x30846337, 0xee78eaa9, 0xcb52df76};
bn_uint_t add_mod_128_p_0= {.number = add_mod_128_p_0_tab, .length = 4};
//variable 'add_mod_128_res_0' value: 0xb3a41719bbb07989d950d8c60c36c34b
uint32_t add_mod_128_res_0_tab [4] = {0x0c36c34b, 0xd950d8c6, 0xbbb07989, 0xb3a41719};
bn_uint_t add_mod_128_res_0= {.number = add_mod_128_res_0_tab, .length = 4};
uint32_t add_mod_128_tab_len=1;
bn_uint_t *add_mod_128_test_tab[1][4]={
{&add_mod_128_a_0,&add_mod_128_b_0,&add_mod_128_p_0,&add_mod_128_res_0},
};
//variable 'add_mod_256_a_0' value: 0x5db789b6dfdd8840a768ae3b079a87d652677b5884db155a018c11c4016d8deb
uint32_t add_mod_256_a_0_tab [8] = {0x016d8deb, 0x018c11c4, 0x84db155a, 0x52677b58, 0x079a87d6, 0xa768ae3b, 0xdfdd8840, 0x5db789b6};
bn_uint_t add_mod_256_a_0= {.number = add_mod_256_a_0_tab, .length = 8};
//variable 'add_mod_256_b_0' value: 0x2444c49b2e817517536f09b4ddb7d2bc6bf76c782d40a846dc0e37e1ad9020ca
uint32_t add_mod_256_b_0_tab [8] = {0xad9020ca, 0xdc0e37e1, 0x2d40a846, 0x6bf76c78, 0xddb7d2bc, 0x536f09b4, 0x2e817517, 0x2444c49b};
bn_uint_t add_mod_256_b_0= {.number = add_mod_256_b_0_tab, .length = 8};
//variable 'add_mod_256_p_0' value: 0x500b784a65caeca97a99752e5e5c1e34d77ce76bb9c556f8aaba2e71abc3710
uint32_t add_mod_256_p_0_tab [8] = {0x1abc3710, 0x8aaba2e7, 0xbb9c556f, 0x4d77ce76, 0xe5e5c1e3, 0x97a99752, 0xa65caeca, 0x500b784};
bn_uint_t add_mod_256_p_0= {.number = add_mod_256_p_0_tab, .length = 8};
//variable 'add_mod_256_res_0' value: 0x4ea625dcf51eb8f2b47f0d771e26b602dabbe385fd765bc52d76114129c4e25
uint32_t add_mod_256_res_0_tab [8] = {0x129c4e25, 0x52d76114, 0x5fd765bc, 0x2dabbe38, 0x71e26b60, 0x2b47f0d7, 0xcf51eb8f, 0x4ea625d};
bn_uint_t add_mod_256_res_0= {.number = add_mod_256_res_0_tab, .length = 8};
uint32_t add_mod_256_tab_len=1;
bn_uint_t *add_mod_256_test_tab[1][4]={
{&add_mod_256_a_0,&add_mod_256_b_0,&add_mod_256_p_0,&add_mod_256_res_0},
};
//variable 'sub_mod_128_a_0' value: 0x2a7af352ccfae6bfe78569af2e70b30b
uint32_t sub_mod_128_a_0_tab [4] = {0x2e70b30b, 0xe78569af, 0xccfae6bf, 0x2a7af352};
bn_uint_t sub_mod_128_a_0= {.number = sub_mod_128_a_0_tab, .length = 4};
//variable 'sub_mod_128_b_0' value: 0x717a10d9e669d842ea1f2fd1aefe217d
uint32_t sub_mod_128_b_0_tab [4] = {0xaefe217d, 0xea1f2fd1, 0xe669d842, 0x717a10d9};
bn_uint_t sub_mod_128_b_0= {.number = sub_mod_128_b_0_tab, .length = 4};
//variable 'sub_mod_128_p_0' value: 0xfed150c439008c19b7568e570a151fc7
uint32_t sub_mod_128_p_0_tab [4] = {0x0a151fc7, 0xb7568e57, 0x39008c19, 0xfed150c4};
bn_uint_t sub_mod_128_p_0= {.number = sub_mod_128_p_0_tab, .length = 4};
//variable 'sub_mod_128_res_0' value: 0xb7d2333d1f919a96b4bcc8348987b155
uint32_t sub_mod_128_res_0_tab [4] = {0x8987b155, 0xb4bcc834, 0x1f919a96, 0xb7d2333d};
bn_uint_t sub_mod_128_res_0= {.number = sub_mod_128_res_0_tab, .length = 4};
uint32_t sub_mod_128_tab_len=1;
bn_uint_t *sub_mod_128_test_tab[1][4]={
{&sub_mod_128_a_0,&sub_mod_128_b_0,&sub_mod_128_p_0,&sub_mod_128_res_0},
};
//variable 'sub_mod_256_a_0' value: 0x550cdc4898c90fe9c8d5a9c6c2162a8330097d55351c945825a1d671df3c2e2e
uint32_t sub_mod_256_a_0_tab [8] = {0xdf3c2e2e, 0x25a1d671, 0x351c9458, 0x30097d55, 0xc2162a83, 0xc8d5a9c6, 0x98c90fe9, 0x550cdc48};
bn_uint_t sub_mod_256_a_0= {.number = sub_mod_256_a_0_tab, .length = 8};
//variable 'sub_mod_256_b_0' value: 0x9232f68e4f705ae83e86c155ab94c273329fdd32d675cf42b686aef952398ee6
uint32_t sub_mod_256_b_0_tab [8] = {0x52398ee6, 0xb686aef9, 0xd675cf42, 0x329fdd32, 0xab94c273, 0x3e86c155, 0x4f705ae8, 0x9232f68e};
bn_uint_t sub_mod_256_b_0= {.number = sub_mod_256_b_0_tab, .length = 8};
//variable 'sub_mod_256_p_0' value: 0xc5ca1528a57dace224eac08c564da7767f81284aaf58f66d3afff87cea8e54fc
uint32_t sub_mod_256_p_0_tab [8] = {0xea8e54fc, 0x3afff87c, 0xaf58f66d, 0x7f81284a, 0x564da776, 0x24eac08c, 0xa57dace2, 0xc5ca1528};
bn_uint_t sub_mod_256_p_0= {.number = sub_mod_256_p_0_tab, .length = 8};
//variable 'sub_mod_256_res_0' value: 0x88a3fae2eed661e3af39a8fd6ccf0f867ceac86d0dffbb82aa1b1ff57790f444
uint32_t sub_mod_256_res_0_tab [8] = {0x7790f444, 0xaa1b1ff5, 0x0dffbb82, 0x7ceac86d, 0x6ccf0f86, 0xaf39a8fd, 0xeed661e3, 0x88a3fae2};
bn_uint_t sub_mod_256_res_0= {.number = sub_mod_256_res_0_tab, .length = 8};
uint32_t sub_mod_256_tab_len=1;
bn_uint_t *sub_mod_256_test_tab[1][4]={
{&sub_mod_256_a_0,&sub_mod_256_b_0,&sub_mod_256_p_0,&sub_mod_256_res_0},
};
//variable 'shr_128_a_0' value: 0xf64fff88c4ef0ee0ca22889d99b97ded
uint32_t shr_128_a_0_tab [4] = {0x99b97ded, 0xca22889d, 0xc4ef0ee0, 0xf64fff88};
bn_uint_t shr_128_a_0= {.number = shr_128_a_0_tab, .length = 4};
//variable 'shr_128_res_0' value: 0x7b27ffc4627787706511444eccdcbef6
uint32_t shr_128_res_0_tab [4] = {0xccdcbef6, 0x6511444e, 0x62778770, 0x7b27ffc4};
bn_uint_t shr_128_res_0= {.number = shr_128_res_0_tab, .length = 4};
uint32_t shr_128_tab_len=1;
bn_uint_t *shr_128_test_tab[1][2]={
{&shr_128_a_0,&shr_128_res_0},
};
//variable 'shr_256_a_0' value: 0xbf2a8218b228a358e06e1e6bd1d4dc01062ddb10398766528d7020157d085acc
uint32_t shr_256_a_0_tab [8] = {0x7d085acc, 0x8d702015, 0x39876652, 0x062ddb10, 0xd1d4dc01, 0xe06e1e6b, 0xb228a358, 0xbf2a8218};
bn_uint_t shr_256_a_0= {.number = shr_256_a_0_tab, .length = 8};
//variable 'shr_256_res_0' value: 0x5f95410c591451ac70370f35e8ea6e008316ed881cc3b32946b8100abe842d66
uint32_t shr_256_res_0_tab [8] = {0xbe842d66, 0x46b8100a, 0x1cc3b329, 0x8316ed88, 0xe8ea6e00, 0x70370f35, 0x591451ac, 0x5f95410c};
bn_uint_t shr_256_res_0= {.number = shr_256_res_0_tab, .length = 8};
uint32_t shr_256_tab_len=1;
bn_uint_t *shr_256_test_tab[1][2]={
{&shr_256_a_0,&shr_256_res_0},
};
//variable 'inv_mod_128_a_0' value: 0x8c3269419ce9650f1fb9d4e9508b125b
uint32_t inv_mod_128_a_0_tab [4] = {0x508b125b, 0x1fb9d4e9, 0x9ce9650f, 0x8c326941};
bn_uint_t inv_mod_128_a_0= {.number = inv_mod_128_a_0_tab, .length = 4};
//variable 'inv_mod_128_p_0' value: 0xc7da739a659f1e61e6de2f24cfcc8f5d
uint32_t inv_mod_128_p_0_tab [4] = {0xcfcc8f5d, 0xe6de2f24, 0x659f1e61, 0xc7da739a};
bn_uint_t inv_mod_128_p_0= {.number = inv_mod_128_p_0_tab, .length = 4};
//variable 'inv_mod_128_res_0' value: 0x726c4a52473698cc797b3f61f37a9a70
uint32_t inv_mod_128_res_0_tab [4] = {0xf37a9a70, 0x797b3f61, 0x473698cc, 0x726c4a52};
bn_uint_t inv_mod_128_res_0= {.number = inv_mod_128_res_0_tab, .length = 4};
uint32_t inv_mod_128_tab_len=1;
bn_uint_t *inv_mod_128_test_tab[1][3]={
{&inv_mod_128_a_0,&inv_mod_128_p_0,&inv_mod_128_res_0},
};
//variable 'inv_mod_256_a_0' value: 0x1883e28cc905801d5eb30c827fa45edc0b1725f5f3a2543e47269a4102c9893b
uint32_t inv_mod_256_a_0_tab [8] = {0x02c9893b, 0x47269a41, 0xf3a2543e, 0x0b1725f5, 0x7fa45edc, 0x5eb30c82, 0xc905801d, 0x1883e28c};
bn_uint_t inv_mod_256_a_0= {.number = inv_mod_256_a_0_tab, .length = 8};
//variable 'inv_mod_256_p_0' value: 0xfd5910686260d27c269becd86375c43336765ebd07d7da078a85d697f7fe8791
uint32_t inv_mod_256_p_0_tab [8] = {0xf7fe8791, 0x8a85d697, 0x07d7da07, 0x36765ebd, 0x6375c433, 0x269becd8, 0x6260d27c, 0xfd591068};
bn_uint_t inv_mod_256_p_0= {.number = inv_mod_256_p_0_tab, .length = 8};
//variable 'inv_mod_256_res_0' value: 0x474410130a38afe8740e682abbeec7d04bbf89781cf64ac9a8cd5db18e754f40
uint32_t inv_mod_256_res_0_tab [8] = {0x8e754f40, 0xa8cd5db1, 0x1cf64ac9, 0x4bbf8978, 0xbbeec7d0, 0x740e682a, 0x0a38afe8, 0x47441013};
bn_uint_t inv_mod_256_res_0= {.number = inv_mod_256_res_0_tab, .length = 8};
uint32_t inv_mod_256_tab_len=1;
bn_uint_t *inv_mod_256_test_tab[1][3]={
{&inv_mod_256_a_0,&inv_mod_256_p_0,&inv_mod_256_res_0},
};
//variable 'mul_128_a_0' value: 0xe29fec0ecf4287eabeb230e232fa03c5
uint32_t mul_128_a_0_tab [4] = {0x32fa03c5, 0xbeb230e2, 0xcf4287ea, 0xe29fec0e};
bn_uint_t mul_128_a_0= {.number = mul_128_a_0_tab, .length = 4};
//variable 'mul_128_b_0' value: 0x850bef35795446e1126a912f33586a9e
uint32_t mul_128_b_0_tab [4] = {0x33586a9e, 0x126a912f, 0x795446e1, 0x850bef35};
bn_uint_t mul_128_b_0= {.number = mul_128_b_0_tab, .length = 4};
//variable 'mul_128_res_0' value: 0x75c7a6457a365cd4400d9fc982c12cc275ac23958e15192ab9bc6f938695e596
uint32_t mul_128_res_0_tab [8] = {0x8695e596, 0xb9bc6f93, 0x8e15192a, 0x75ac2395, 0x82c12cc2, 0x400d9fc9, 0x7a365cd4, 0x75c7a645};
bn_uint_t mul_128_res_0= {.number = mul_128_res_0_tab, .length = 8};
uint32_t mul_128_tab_len=1;
bn_uint_t *mul_128_test_tab[1][3]={
{&mul_128_a_0,&mul_128_b_0,&mul_128_res_0},
};
//variable 'mul_256_a_0' value: 0x9f37fd22d2ad657bd5ef8dc49e7fc38c7cfd179644341f2d8c33d40423272f30
uint32_t mul_256_a_0_tab [8] = {0x23272f30, 0x8c33d404, 0x44341f2d, 0x7cfd1796, 0x9e7fc38c, 0xd5ef8dc4, 0xd2ad657b, 0x9f37fd22};
bn_uint_t mul_256_a_0= {.number = mul_256_a_0_tab, .length = 8};
//variable 'mul_256_b_0' value: 0x161b66cf972feb15c3a438c86577b6ede47fadb8ae7c74c290aa8a45b972a6d7
uint32_t mul_256_b_0_tab [8] = {0xb972a6d7, 0x90aa8a45, 0xae7c74c2, 0xe47fadb8, 0x6577b6ed, 0xc3a438c8, 0x972feb15, 0x161b66cf};
bn_uint_t mul_256_b_0= {.number = mul_256_b_0_tab, .length = 8};
//variable 'mul_256_res_0' value: 0xdbfda9a1bf081e8bb6405c4fcdc37e840553a78207f4f33774a65cb1ece41d76befdb178b021d0e9878fd162c13971721210e5099b2e076b1204ec1a1e1c150
uint32_t mul_256_res_0_tab [16] = {0xa1e1c150, 0xb1204ec1, 0x99b2e076, 0x21210e50, 0x2c139717, 0x9878fd16, 0x8b021d0e, 0x6befdb17, 0x1ece41d7, 0x774a65cb, 0x207f4f33, 0x40553a78, 0xfcdc37e8, 0xbb6405c4, 0x1bf081e8, 0xdbfda9a};
bn_uint_t mul_256_res_0= {.number = mul_256_res_0_tab, .length = 16};
uint32_t mul_256_tab_len=1;
bn_uint_t *mul_256_test_tab[1][3]={
{&mul_256_a_0,&mul_256_b_0,&mul_256_res_0},
};
//variable 'mod_barret_128_a_0' value: 0x2820cb4a334b202a528b8c0b475b8a7afab72657bffb66aba87ed5c5ff619389
uint32_t mod_barret_128_a_0_tab [8] = {0xff619389, 0xa87ed5c5, 0xbffb66ab, 0xfab72657, 0x475b8a7a, 0x528b8c0b, 0x334b202a, 0x2820cb4a};
bn_uint_t mod_barret_128_a_0= {.number = mod_barret_128_a_0_tab, .length = 8};
//variable 'mod_barret_128_res_0' value: 0x1822ecc043881d6b0223cf4ffa071118
uint32_t mod_barret_128_res_0_tab [4] = {0xfa071118, 0x0223cf4f, 0x43881d6b, 0x1822ecc0};
bn_uint_t mod_barret_128_res_0= {.number = mod_barret_128_res_0_tab, .length = 4};
//variable 'mod_barret_128_a_1' value: 0x7774d91d8ac6e7edd760245c6214e497278de7614ef00f4a93733a9aef0e64e5
uint32_t mod_barret_128_a_1_tab [8] = {0xef0e64e5, 0x93733a9a, 0x4ef00f4a, 0x278de761, 0x6214e497, 0xd760245c, 0x8ac6e7ed, 0x7774d91d};
bn_uint_t mod_barret_128_a_1= {.number = mod_barret_128_a_1_tab, .length = 8};
//variable 'mod_barret_128_res_1' value: 0x8e31ec75c8a0a9755e34934ce6a5fae0
uint32_t mod_barret_128_res_1_tab [4] = {0xe6a5fae0, 0x5e34934c, 0xc8a0a975, 0x8e31ec75};
bn_uint_t mod_barret_128_res_1= {.number = mod_barret_128_res_1_tab, .length = 4};
//variable 'mod_barret_128_a_2' value: 0xd46776d13d8a2d50e23f368071a18feba1802ce310cde48500e028a48ec134ed
uint32_t mod_barret_128_a_2_tab [8] = {0x8ec134ed, 0x00e028a4, 0x10cde485, 0xa1802ce3, 0x71a18feb, 0xe23f3680, 0x3d8a2d50, 0xd46776d1};
bn_uint_t mod_barret_128_a_2= {.number = mod_barret_128_a_2_tab, .length = 8};
//variable 'mod_barret_128_res_2' value: 0x14f07545f726ff7bafd195125e459db5
uint32_t mod_barret_128_res_2_tab [4] = {0x5e459db5, 0xafd19512, 0xf726ff7b, 0x14f07545};
bn_uint_t mod_barret_128_res_2= {.number = mod_barret_128_res_2_tab, .length = 4};
//variable 'mod_barret_128_a_3' value: 0x38a45ee707cb5c6403fc4c4c267ffb89e9978553cf624fde12a00324875e33bf
uint32_t mod_barret_128_a_3_tab [8] = {0x875e33bf, 0x12a00324, 0xcf624fde, 0xe9978553, 0x267ffb89, 0x03fc4c4c, 0x07cb5c64, 0x38a45ee7};
bn_uint_t mod_barret_128_a_3= {.number = mod_barret_128_a_3_tab, .length = 8};
//variable 'mod_barret_128_res_3' value: 0x47cdde1748766a1108c483d69a2730ad
uint32_t mod_barret_128_res_3_tab [4] = {0x9a2730ad, 0x08c483d6, 0x48766a11, 0x47cdde17};
bn_uint_t mod_barret_128_res_3= {.number = mod_barret_128_res_3_tab, .length = 4};
//variable 'mod_barret_128_a_4' value: 0xb121410d4ce999415598c986717ce1f1ad2c1d2a76ff1d0c2426ef90cfaa587c
uint32_t mod_barret_128_a_4_tab [8] = {0xcfaa587c, 0x2426ef90, 0x76ff1d0c, 0xad2c1d2a, 0x717ce1f1, 0x5598c986, 0x4ce99941, 0xb121410d};
bn_uint_t mod_barret_128_a_4= {.number = mod_barret_128_a_4_tab, .length = 8};
//variable 'mod_barret_128_res_4' value: 0x110b232d262b386ad817efd4a9093af6
uint32_t mod_barret_128_res_4_tab [4] = {0xa9093af6, 0xd817efd4, 0x262b386a, 0x110b232d};
bn_uint_t mod_barret_128_res_4= {.number = mod_barret_128_res_4_tab, .length = 4};
//variable 'mod_barret_128_a_5' value: 0xcb1f81865226a588c3da30c88dad1badc512784e2960ce8761b18619e98a7f57
uint32_t mod_barret_128_a_5_tab [8] = {0xe98a7f57, 0x61b18619, 0x2960ce87, 0xc512784e, 0x8dad1bad, 0xc3da30c8, 0x5226a588, 0xcb1f8186};
bn_uint_t mod_barret_128_a_5= {.number = mod_barret_128_a_5_tab, .length = 8};
//variable 'mod_barret_128_res_5' value: 0xfe22391811c6771ff6570813a0829ef8
uint32_t mod_barret_128_res_5_tab [4] = {0xa0829ef8, 0xf6570813, 0x11c6771f, 0xfe223918};
bn_uint_t mod_barret_128_res_5= {.number = mod_barret_128_res_5_tab, .length = 4};
//variable 'mod_barret_128_a_6' value: 0x349f2cca2eab04ad86d8b4b4ce4b1b8ca5ace837627bbb9cb388e4dddb451272
uint32_t mod_barret_128_a_6_tab [8] = {0xdb451272, 0xb388e4dd, 0x627bbb9c, 0xa5ace837, 0xce4b1b8c, 0x86d8b4b4, 0x2eab04ad, 0x349f2cca};
bn_uint_t mod_barret_128_a_6= {.number = mod_barret_128_a_6_tab, .length = 8};
//variable 'mod_barret_128_res_6' value: 0x51901103fa6519df6a34561816e71073
uint32_t mod_barret_128_res_6_tab [4] = {0x16e71073, 0x6a345618, 0xfa6519df, 0x51901103};
bn_uint_t mod_barret_128_res_6= {.number = mod_barret_128_res_6_tab, .length = 4};
//variable 'mod_barret_128_a_7' value: 0xd42b9f160f0c8b80b7c533debc61cf2fe195e8ca953c61177930dd4d3c4f9935
uint32_t mod_barret_128_a_7_tab [8] = {0x3c4f9935, 0x7930dd4d, 0x953c6117, 0xe195e8ca, 0xbc61cf2f, 0xb7c533de, 0x0f0c8b80, 0xd42b9f16};
bn_uint_t mod_barret_128_a_7= {.number = mod_barret_128_a_7_tab, .length = 8};
//variable 'mod_barret_128_res_7' value: 0xc8b8433e4ca02ac79fbda48c45caf6e3
uint32_t mod_barret_128_res_7_tab [4] = {0x45caf6e3, 0x9fbda48c, 0x4ca02ac7, 0xc8b8433e};
bn_uint_t mod_barret_128_res_7= {.number = mod_barret_128_res_7_tab, .length = 4};
//variable 'mod_barret_128_a_8' value: 0xb867c7431ba86dd28a9d7dc471953bd8e35d5c3bf2db6c6ecdfafc6bc6b800e
uint32_t mod_barret_128_a_8_tab [8] = {0xbc6b800e, 0xecdfafc6, 0xbf2db6c6, 0x8e35d5c3, 0x471953bd, 0x28a9d7dc, 0x31ba86dd, 0xb867c74};
bn_uint_t mod_barret_128_a_8= {.number = mod_barret_128_a_8_tab, .length = 8};
//variable 'mod_barret_128_res_8' value: 0x10d2575207f5368ca718872e77f6829b
uint32_t mod_barret_128_res_8_tab [4] = {0x77f6829b, 0xa718872e, 0x07f5368c, 0x10d25752};
bn_uint_t mod_barret_128_res_8= {.number = mod_barret_128_res_8_tab, .length = 4};
//variable 'mod_barret_128_a_9' value: 0x8fde3d72886b95683be299b1d0348c6f90377acec4bc41970f5eeda5fd20974b
uint32_t mod_barret_128_a_9_tab [8] = {0xfd20974b, 0x0f5eeda5, 0xc4bc4197, 0x90377ace, 0xd0348c6f, 0x3be299b1, 0x886b9568, 0x8fde3d72};
bn_uint_t mod_barret_128_a_9= {.number = mod_barret_128_a_9_tab, .length = 8};
//variable 'mod_barret_128_res_9' value: 0xf149ba646ce451e69b91a7f6e5ba985c
uint32_t mod_barret_128_res_9_tab [4] = {0xe5ba985c, 0x9b91a7f6, 0x6ce451e6, 0xf149ba64};
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
//variable 'mul_mod_barret_128_a_0' value: 0x58d51284b924fd67d37e3e6446d522f
uint32_t mul_mod_barret_128_a_0_tab [4] = {0x446d522f, 0x7d37e3e6, 0x4b924fd6, 0x58d5128};
bn_uint_t mul_mod_barret_128_a_0= {.number = mul_mod_barret_128_a_0_tab, .length = 4};
//variable 'mul_mod_barret_128_b_0' value: 0xfecc75480aa83a145c0d9aedee8d08ce
uint32_t mul_mod_barret_128_b_0_tab [4] = {0xee8d08ce, 0x5c0d9aed, 0x0aa83a14, 0xfecc7548};
bn_uint_t mul_mod_barret_128_b_0= {.number = mul_mod_barret_128_b_0_tab, .length = 4};
//variable 'mul_mod_barret_128_res_0' value: 0x8a3c92035d1e4e78d29d0849f3f7e40a
uint32_t mul_mod_barret_128_res_0_tab [4] = {0xf3f7e40a, 0xd29d0849, 0x5d1e4e78, 0x8a3c9203};
bn_uint_t mul_mod_barret_128_res_0= {.number = mul_mod_barret_128_res_0_tab, .length = 4};
//variable 'mul_mod_barret_128_a_1' value: 0xc1ad531704eba3e808312a191f3500d9
uint32_t mul_mod_barret_128_a_1_tab [4] = {0x1f3500d9, 0x08312a19, 0x04eba3e8, 0xc1ad5317};
bn_uint_t mul_mod_barret_128_a_1= {.number = mul_mod_barret_128_a_1_tab, .length = 4};
//variable 'mul_mod_barret_128_b_1' value: 0x296aa24d8ec3158adde5ab8886d8eecb
uint32_t mul_mod_barret_128_b_1_tab [4] = {0x86d8eecb, 0xdde5ab88, 0x8ec3158a, 0x296aa24d};
bn_uint_t mul_mod_barret_128_b_1= {.number = mul_mod_barret_128_b_1_tab, .length = 4};
//variable 'mul_mod_barret_128_res_1' value: 0x7d40cf3c239858714c47ff39db830ae6
uint32_t mul_mod_barret_128_res_1_tab [4] = {0xdb830ae6, 0x4c47ff39, 0x23985871, 0x7d40cf3c};
bn_uint_t mul_mod_barret_128_res_1= {.number = mul_mod_barret_128_res_1_tab, .length = 4};
//variable 'mul_mod_barret_128_a_2' value: 0xac4f00f736748822657984897827e838
uint32_t mul_mod_barret_128_a_2_tab [4] = {0x7827e838, 0x65798489, 0x36748822, 0xac4f00f7};
bn_uint_t mul_mod_barret_128_a_2= {.number = mul_mod_barret_128_a_2_tab, .length = 4};
//variable 'mul_mod_barret_128_b_2' value: 0xb2b7981b89b9215d3a309d8c6558143c
uint32_t mul_mod_barret_128_b_2_tab [4] = {0x6558143c, 0x3a309d8c, 0x89b9215d, 0xb2b7981b};
bn_uint_t mul_mod_barret_128_b_2= {.number = mul_mod_barret_128_b_2_tab, .length = 4};
//variable 'mul_mod_barret_128_res_2' value: 0x8b7a6463ca3617d981d2076b26fc2d6c
uint32_t mul_mod_barret_128_res_2_tab [4] = {0x26fc2d6c, 0x81d2076b, 0xca3617d9, 0x8b7a6463};
bn_uint_t mul_mod_barret_128_res_2= {.number = mul_mod_barret_128_res_2_tab, .length = 4};
//variable 'mul_mod_barret_128_a_3' value: 0xa69d976d919a6bc46dc33fe9c043bcce
uint32_t mul_mod_barret_128_a_3_tab [4] = {0xc043bcce, 0x6dc33fe9, 0x919a6bc4, 0xa69d976d};
bn_uint_t mul_mod_barret_128_a_3= {.number = mul_mod_barret_128_a_3_tab, .length = 4};
//variable 'mul_mod_barret_128_b_3' value: 0x911e4ff11ead7a55bc9f2e5d7496c3c7
uint32_t mul_mod_barret_128_b_3_tab [4] = {0x7496c3c7, 0xbc9f2e5d, 0x1ead7a55, 0x911e4ff1};
bn_uint_t mul_mod_barret_128_b_3= {.number = mul_mod_barret_128_b_3_tab, .length = 4};
//variable 'mul_mod_barret_128_res_3' value: 0x58150bc73bb0abdfe1ba075cbcf71403
uint32_t mul_mod_barret_128_res_3_tab [4] = {0xbcf71403, 0xe1ba075c, 0x3bb0abdf, 0x58150bc7};
bn_uint_t mul_mod_barret_128_res_3= {.number = mul_mod_barret_128_res_3_tab, .length = 4};
//variable 'mul_mod_barret_128_a_4' value: 0xf02d27e862a15989020bbcff688e0d5a
uint32_t mul_mod_barret_128_a_4_tab [4] = {0x688e0d5a, 0x020bbcff, 0x62a15989, 0xf02d27e8};
bn_uint_t mul_mod_barret_128_a_4= {.number = mul_mod_barret_128_a_4_tab, .length = 4};
//variable 'mul_mod_barret_128_b_4' value: 0x3fde857ffaf9b69ff90206ade72f47e9
uint32_t mul_mod_barret_128_b_4_tab [4] = {0xe72f47e9, 0xf90206ad, 0xfaf9b69f, 0x3fde857f};
bn_uint_t mul_mod_barret_128_b_4= {.number = mul_mod_barret_128_b_4_tab, .length = 4};
//variable 'mul_mod_barret_128_res_4' value: 0x2a675f2fbe3b542d8f13bfbbc96caa11
uint32_t mul_mod_barret_128_res_4_tab [4] = {0xc96caa11, 0x8f13bfbb, 0xbe3b542d, 0x2a675f2f};
bn_uint_t mul_mod_barret_128_res_4= {.number = mul_mod_barret_128_res_4_tab, .length = 4};
//variable 'mul_mod_barret_128_a_5' value: 0xb1f5364806ab170a4a29cf98c201cae7
uint32_t mul_mod_barret_128_a_5_tab [4] = {0xc201cae7, 0x4a29cf98, 0x06ab170a, 0xb1f53648};
bn_uint_t mul_mod_barret_128_a_5= {.number = mul_mod_barret_128_a_5_tab, .length = 4};
//variable 'mul_mod_barret_128_b_5' value: 0x1cf44492d0e2b7ad44bfae160d5eecc9
uint32_t mul_mod_barret_128_b_5_tab [4] = {0x0d5eecc9, 0x44bfae16, 0xd0e2b7ad, 0x1cf44492};
bn_uint_t mul_mod_barret_128_b_5= {.number = mul_mod_barret_128_b_5_tab, .length = 4};
//variable 'mul_mod_barret_128_res_5' value: 0x6500955e5c9b4f05d5b1a703358d502f
uint32_t mul_mod_barret_128_res_5_tab [4] = {0x358d502f, 0xd5b1a703, 0x5c9b4f05, 0x6500955e};
bn_uint_t mul_mod_barret_128_res_5= {.number = mul_mod_barret_128_res_5_tab, .length = 4};
//variable 'mul_mod_barret_128_a_6' value: 0x167e61e374ab0af21813deac00736ee3
uint32_t mul_mod_barret_128_a_6_tab [4] = {0x00736ee3, 0x1813deac, 0x74ab0af2, 0x167e61e3};
bn_uint_t mul_mod_barret_128_a_6= {.number = mul_mod_barret_128_a_6_tab, .length = 4};
//variable 'mul_mod_barret_128_b_6' value: 0x90de6817bdd8bd1836a2f46309342eb2
uint32_t mul_mod_barret_128_b_6_tab [4] = {0x09342eb2, 0x36a2f463, 0xbdd8bd18, 0x90de6817};
bn_uint_t mul_mod_barret_128_b_6= {.number = mul_mod_barret_128_b_6_tab, .length = 4};
//variable 'mul_mod_barret_128_res_6' value: 0xf02ab90fce2091a2264ab4ab88b5963a
uint32_t mul_mod_barret_128_res_6_tab [4] = {0x88b5963a, 0x264ab4ab, 0xce2091a2, 0xf02ab90f};
bn_uint_t mul_mod_barret_128_res_6= {.number = mul_mod_barret_128_res_6_tab, .length = 4};
//variable 'mul_mod_barret_128_a_7' value: 0x286c156d9652989984da823b37b9b70a
uint32_t mul_mod_barret_128_a_7_tab [4] = {0x37b9b70a, 0x84da823b, 0x96529899, 0x286c156d};
bn_uint_t mul_mod_barret_128_a_7= {.number = mul_mod_barret_128_a_7_tab, .length = 4};
//variable 'mul_mod_barret_128_b_7' value: 0x96fc89dcd1c1ad640b4bc08aed5b02bb
uint32_t mul_mod_barret_128_b_7_tab [4] = {0xed5b02bb, 0x0b4bc08a, 0xd1c1ad64, 0x96fc89dc};
bn_uint_t mul_mod_barret_128_b_7= {.number = mul_mod_barret_128_b_7_tab, .length = 4};
//variable 'mul_mod_barret_128_res_7' value: 0xae0650daa52f0773a93ebb7e35563106
uint32_t mul_mod_barret_128_res_7_tab [4] = {0x35563106, 0xa93ebb7e, 0xa52f0773, 0xae0650da};
bn_uint_t mul_mod_barret_128_res_7= {.number = mul_mod_barret_128_res_7_tab, .length = 4};
//variable 'mul_mod_barret_128_a_8' value: 0xffe8b6c4609e1d38528204de58fd6a7c
uint32_t mul_mod_barret_128_a_8_tab [4] = {0x58fd6a7c, 0x528204de, 0x609e1d38, 0xffe8b6c4};
bn_uint_t mul_mod_barret_128_a_8= {.number = mul_mod_barret_128_a_8_tab, .length = 4};
//variable 'mul_mod_barret_128_b_8' value: 0xeb74215ec9ffb07f1c0bbbd719076eff
uint32_t mul_mod_barret_128_b_8_tab [4] = {0x19076eff, 0x1c0bbbd7, 0xc9ffb07f, 0xeb74215e};
bn_uint_t mul_mod_barret_128_b_8= {.number = mul_mod_barret_128_b_8_tab, .length = 4};
//variable 'mul_mod_barret_128_res_8' value: 0x613b24e9c07b795356b5bbd4218f1828
uint32_t mul_mod_barret_128_res_8_tab [4] = {0x218f1828, 0x56b5bbd4, 0xc07b7953, 0x613b24e9};
bn_uint_t mul_mod_barret_128_res_8= {.number = mul_mod_barret_128_res_8_tab, .length = 4};
//variable 'mul_mod_barret_128_a_9' value: 0xae52faa57601d094b690fe00e166676f
uint32_t mul_mod_barret_128_a_9_tab [4] = {0xe166676f, 0xb690fe00, 0x7601d094, 0xae52faa5};
bn_uint_t mul_mod_barret_128_a_9= {.number = mul_mod_barret_128_a_9_tab, .length = 4};
//variable 'mul_mod_barret_128_b_9' value: 0x4438ceec415d507785089fb43a0ab973
uint32_t mul_mod_barret_128_b_9_tab [4] = {0x3a0ab973, 0x85089fb4, 0x415d5077, 0x4438ceec};
bn_uint_t mul_mod_barret_128_b_9= {.number = mul_mod_barret_128_b_9_tab, .length = 4};
//variable 'mul_mod_barret_128_res_9' value: 0x905581064ef4df3e3fe87b37ee707e8c
uint32_t mul_mod_barret_128_res_9_tab [4] = {0xee707e8c, 0x3fe87b37, 0x4ef4df3e, 0x90558106};
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
//variable 'mod_barret_256_a_0' value: 0x37cc03d1d689c790d02a6c68cbf35675af313493772d030167f02f2224f0d1d7e1c8e8e7a27904d8929e29323b47783dfe840267fafedc648453a816c7288a09
uint32_t mod_barret_256_a_0_tab [16] = {0xc7288a09, 0x8453a816, 0xfafedc64, 0xfe840267, 0x3b47783d, 0x929e2932, 0xa27904d8, 0xe1c8e8e7, 0x24f0d1d7, 0x67f02f22, 0x772d0301, 0xaf313493, 0xcbf35675, 0xd02a6c68, 0xd689c790, 0x37cc03d1};
bn_uint_t mod_barret_256_a_0= {.number = mod_barret_256_a_0_tab, .length = 16};
//variable 'mod_barret_256_res_0' value: 0xeba1cbc1d8f7ce9df1745d626aef9368004a801742dcdc2db8fd4bf93230cc00
uint32_t mod_barret_256_res_0_tab [8] = {0x3230cc00, 0xb8fd4bf9, 0x42dcdc2d, 0x004a8017, 0x6aef9368, 0xf1745d62, 0xd8f7ce9d, 0xeba1cbc1};
bn_uint_t mod_barret_256_res_0= {.number = mod_barret_256_res_0_tab, .length = 8};
//variable 'mod_barret_256_a_1' value: 0x7f9d9464a93077622682c514db7f6fa68f068de616df969118773fac617d65c1c02d809cc58d503e0c0195d590999b3b3d996f6a0ea93577b866b1588947b207
uint32_t mod_barret_256_a_1_tab [16] = {0x8947b207, 0xb866b158, 0x0ea93577, 0x3d996f6a, 0x90999b3b, 0x0c0195d5, 0xc58d503e, 0xc02d809c, 0x617d65c1, 0x18773fac, 0x16df9691, 0x8f068de6, 0xdb7f6fa6, 0x2682c514, 0xa9307762, 0x7f9d9464};
bn_uint_t mod_barret_256_a_1= {.number = mod_barret_256_a_1_tab, .length = 16};
//variable 'mod_barret_256_res_1' value: 0xf89b4a5b6ce7fed4851f7eb10e77a5d63f95f5c4653e8912bced4713c9031d72
uint32_t mod_barret_256_res_1_tab [8] = {0xc9031d72, 0xbced4713, 0x653e8912, 0x3f95f5c4, 0x0e77a5d6, 0x851f7eb1, 0x6ce7fed4, 0xf89b4a5b};
bn_uint_t mod_barret_256_res_1= {.number = mod_barret_256_res_1_tab, .length = 8};
//variable 'mod_barret_256_a_2' value: 0x4c0ebdc4f163b3f7bb1162b1c401932791a46afb3a105f90bffbe0c396ff7de246e97a702375254abed0bb53369c0b25c21a7b8e167067fa9bf977a578376ee6
uint32_t mod_barret_256_a_2_tab [16] = {0x78376ee6, 0x9bf977a5, 0x167067fa, 0xc21a7b8e, 0x369c0b25, 0xbed0bb53, 0x2375254a, 0x46e97a70, 0x96ff7de2, 0xbffbe0c3, 0x3a105f90, 0x91a46afb, 0xc4019327, 0xbb1162b1, 0xf163b3f7, 0x4c0ebdc4};
bn_uint_t mod_barret_256_a_2= {.number = mod_barret_256_a_2_tab, .length = 16};
//variable 'mod_barret_256_res_2' value: 0x774d713cf3d3c0c79814dbdf2c196a7b856dbe19e9a15e17d9805063cd17b8c0
uint32_t mod_barret_256_res_2_tab [8] = {0xcd17b8c0, 0xd9805063, 0xe9a15e17, 0x856dbe19, 0x2c196a7b, 0x9814dbdf, 0xf3d3c0c7, 0x774d713c};
bn_uint_t mod_barret_256_res_2= {.number = mod_barret_256_res_2_tab, .length = 8};
//variable 'mod_barret_256_a_3' value: 0xa018e90a9d08fe432cacb4c91dfb61138e540373603853eb815644ac16ff5f450127c6272e133836d702fe04bbcf7a23c8b42cec03861b9b78726db4b5f24ec2
uint32_t mod_barret_256_a_3_tab [16] = {0xb5f24ec2, 0x78726db4, 0x03861b9b, 0xc8b42cec, 0xbbcf7a23, 0xd702fe04, 0x2e133836, 0x0127c627, 0x16ff5f45, 0x815644ac, 0x603853eb, 0x8e540373, 0x1dfb6113, 0x2cacb4c9, 0x9d08fe43, 0xa018e90a};
bn_uint_t mod_barret_256_a_3= {.number = mod_barret_256_a_3_tab, .length = 16};
//variable 'mod_barret_256_res_3' value: 0xbf3d7352d9b715ed1bfaf5c90c9a0b8815911dc58843d6e2d2370921d842db21
uint32_t mod_barret_256_res_3_tab [8] = {0xd842db21, 0xd2370921, 0x8843d6e2, 0x15911dc5, 0x0c9a0b88, 0x1bfaf5c9, 0xd9b715ed, 0xbf3d7352};
bn_uint_t mod_barret_256_res_3= {.number = mod_barret_256_res_3_tab, .length = 8};
//variable 'mod_barret_256_a_4' value: 0xeaf607ecf42dcdd1c708f473b08a975dc4f48b37d930da67d91bf6c5e2457ecf4367ac9f9c5c74aa99cd9b0693f34da454cb40678f206e2db11e6621fbdede6e
uint32_t mod_barret_256_a_4_tab [16] = {0xfbdede6e, 0xb11e6621, 0x8f206e2d, 0x54cb4067, 0x93f34da4, 0x99cd9b06, 0x9c5c74aa, 0x4367ac9f, 0xe2457ecf, 0xd91bf6c5, 0xd930da67, 0xc4f48b37, 0xb08a975d, 0xc708f473, 0xf42dcdd1, 0xeaf607ec};
bn_uint_t mod_barret_256_a_4= {.number = mod_barret_256_a_4_tab, .length = 16};
//variable 'mod_barret_256_res_4' value: 0xd0d651c85a796cd75d0bc1dec4fb61ea607afc818719099a0cb3d5bf868a6f2a
uint32_t mod_barret_256_res_4_tab [8] = {0x868a6f2a, 0x0cb3d5bf, 0x8719099a, 0x607afc81, 0xc4fb61ea, 0x5d0bc1de, 0x5a796cd7, 0xd0d651c8};
bn_uint_t mod_barret_256_res_4= {.number = mod_barret_256_res_4_tab, .length = 8};
//variable 'mod_barret_256_a_5' value: 0x65d28d20e736f2ff495416d2d99c0c7000251804eaa543a4ab09be975f13850e4908c287dbff46654900e20c435e653bb2d90352d30d1c0a0b73a0004f8c6d18
uint32_t mod_barret_256_a_5_tab [16] = {0x4f8c6d18, 0x0b73a000, 0xd30d1c0a, 0xb2d90352, 0x435e653b, 0x4900e20c, 0xdbff4665, 0x4908c287, 0x5f13850e, 0xab09be97, 0xeaa543a4, 0x00251804, 0xd99c0c70, 0x495416d2, 0xe736f2ff, 0x65d28d20};
bn_uint_t mod_barret_256_a_5= {.number = mod_barret_256_a_5_tab, .length = 16};
//variable 'mod_barret_256_res_5' value: 0xcbd9700d9c800cd2251f2727dac69c843fbf92482779e0c03128fed94f5d8277
uint32_t mod_barret_256_res_5_tab [8] = {0x4f5d8277, 0x3128fed9, 0x2779e0c0, 0x3fbf9248, 0xdac69c84, 0x251f2727, 0x9c800cd2, 0xcbd9700d};
bn_uint_t mod_barret_256_res_5= {.number = mod_barret_256_res_5_tab, .length = 8};
//variable 'mod_barret_256_a_6' value: 0x821bb6d7c529c7d6c82156b4ee33c5a921d9b9b3bac94c791ac13e77de1e5cc40ca73c54adb51b8753a450ef5de3133030a429b648ed3650fe27225fa674f7d9
uint32_t mod_barret_256_a_6_tab [16] = {0xa674f7d9, 0xfe27225f, 0x48ed3650, 0x30a429b6, 0x5de31330, 0x53a450ef, 0xadb51b87, 0x0ca73c54, 0xde1e5cc4, 0x1ac13e77, 0xbac94c79, 0x21d9b9b3, 0xee33c5a9, 0xc82156b4, 0xc529c7d6, 0x821bb6d7};
bn_uint_t mod_barret_256_a_6= {.number = mod_barret_256_a_6_tab, .length = 16};
//variable 'mod_barret_256_res_6' value: 0xde209b16d0ab9c3413b33eb1ba2c88d19de52d1016296719d617124401fbf52d
uint32_t mod_barret_256_res_6_tab [8] = {0x01fbf52d, 0xd6171244, 0x16296719, 0x9de52d10, 0xba2c88d1, 0x13b33eb1, 0xd0ab9c34, 0xde209b16};
bn_uint_t mod_barret_256_res_6= {.number = mod_barret_256_res_6_tab, .length = 8};
//variable 'mod_barret_256_a_7' value: 0x6f961a0dc5a8f96102069b61582e590e73d3995e5925d8f288b4dd5ff5e691d79d6862d85b625684d1e8394039d16a123c1287b49744ac4d84640f176e382804
uint32_t mod_barret_256_a_7_tab [16] = {0x6e382804, 0x84640f17, 0x9744ac4d, 0x3c1287b4, 0x39d16a12, 0xd1e83940, 0x5b625684, 0x9d6862d8, 0xf5e691d7, 0x88b4dd5f, 0x5925d8f2, 0x73d3995e, 0x582e590e, 0x02069b61, 0xc5a8f961, 0x6f961a0d};
bn_uint_t mod_barret_256_a_7= {.number = mod_barret_256_a_7_tab, .length = 16};
//variable 'mod_barret_256_res_7' value: 0xbae2dc1a0ef4a2ed03e40a81d20995ffe7eb7ea92cf86fcdd6cabd8b5922100d
uint32_t mod_barret_256_res_7_tab [8] = {0x5922100d, 0xd6cabd8b, 0x2cf86fcd, 0xe7eb7ea9, 0xd20995ff, 0x03e40a81, 0x0ef4a2ed, 0xbae2dc1a};
bn_uint_t mod_barret_256_res_7= {.number = mod_barret_256_res_7_tab, .length = 8};
//variable 'mod_barret_256_a_8' value: 0xb86559a8231727e40f1d2328f5d1cb4b081740473c57290b138764a81d2e7428379a4b72032f0d4d36368ca994a7b80f71dd1ed52df17ff75006dbdbf1b454e6
uint32_t mod_barret_256_a_8_tab [16] = {0xf1b454e6, 0x5006dbdb, 0x2df17ff7, 0x71dd1ed5, 0x94a7b80f, 0x36368ca9, 0x032f0d4d, 0x379a4b72, 0x1d2e7428, 0x138764a8, 0x3c57290b, 0x08174047, 0xf5d1cb4b, 0x0f1d2328, 0x231727e4, 0xb86559a8};
bn_uint_t mod_barret_256_a_8= {.number = mod_barret_256_a_8_tab, .length = 16};
//variable 'mod_barret_256_res_8' value: 0x349b74cfbba682a10e96131971be2f2793b126a787c64493bf79f98ef24cd719
uint32_t mod_barret_256_res_8_tab [8] = {0xf24cd719, 0xbf79f98e, 0x87c64493, 0x93b126a7, 0x71be2f27, 0x0e961319, 0xbba682a1, 0x349b74cf};
bn_uint_t mod_barret_256_res_8= {.number = mod_barret_256_res_8_tab, .length = 8};
//variable 'mod_barret_256_a_9' value: 0xfb3678de61c004c3b712f785d8eda9b26e917bee28bfd102b423b7e6cb17cda3b370f7a5e0ebb655b7dae5899a1403d9e5554ea0d18f7b596db5fc9d624d1724
uint32_t mod_barret_256_a_9_tab [16] = {0x624d1724, 0x6db5fc9d, 0xd18f7b59, 0xe5554ea0, 0x9a1403d9, 0xb7dae589, 0xe0ebb655, 0xb370f7a5, 0xcb17cda3, 0xb423b7e6, 0x28bfd102, 0x6e917bee, 0xd8eda9b2, 0xb712f785, 0x61c004c3, 0xfb3678de};
bn_uint_t mod_barret_256_a_9= {.number = mod_barret_256_a_9_tab, .length = 16};
//variable 'mod_barret_256_res_9' value: 0x48da41c0347028574d660a0a3ef1c223b0f492fb54d753215da266ac81367ac7
uint32_t mod_barret_256_res_9_tab [8] = {0x81367ac7, 0x5da266ac, 0x54d75321, 0xb0f492fb, 0x3ef1c223, 0x4d660a0a, 0x34702857, 0x48da41c0};
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
//variable 'mul_mod_barret_256_a_0' value: 0x9ced1229780ce2ad5bdcf784677019bb0ac5c12a2d55ec1a19795d317e074900
uint32_t mul_mod_barret_256_a_0_tab [8] = {0x7e074900, 0x19795d31, 0x2d55ec1a, 0x0ac5c12a, 0x677019bb, 0x5bdcf784, 0x780ce2ad, 0x9ced1229};
bn_uint_t mul_mod_barret_256_a_0= {.number = mul_mod_barret_256_a_0_tab, .length = 8};
//variable 'mul_mod_barret_256_b_0' value: 0x925e59f5456186e898697bc1afee7e42fc536f5922602193671db33e0bf57ef2
uint32_t mul_mod_barret_256_b_0_tab [8] = {0x0bf57ef2, 0x671db33e, 0x22602193, 0xfc536f59, 0xafee7e42, 0x98697bc1, 0x456186e8, 0x925e59f5};
bn_uint_t mul_mod_barret_256_b_0= {.number = mul_mod_barret_256_b_0_tab, .length = 8};
//variable 'mul_mod_barret_256_res_0' value: 0xf22625eb8eda21ebfdec11298d3dd0f2e2f9c3abadfd8082224952923d580057
uint32_t mul_mod_barret_256_res_0_tab [8] = {0x3d580057, 0x22495292, 0xadfd8082, 0xe2f9c3ab, 0x8d3dd0f2, 0xfdec1129, 0x8eda21eb, 0xf22625eb};
bn_uint_t mul_mod_barret_256_res_0= {.number = mul_mod_barret_256_res_0_tab, .length = 8};
//variable 'mul_mod_barret_256_a_1' value: 0xc0d737d5da141ddb256c4cb245adb66fcaa6c8c019a046be56a7549350132d4c
uint32_t mul_mod_barret_256_a_1_tab [8] = {0x50132d4c, 0x56a75493, 0x19a046be, 0xcaa6c8c0, 0x45adb66f, 0x256c4cb2, 0xda141ddb, 0xc0d737d5};
bn_uint_t mul_mod_barret_256_a_1= {.number = mul_mod_barret_256_a_1_tab, .length = 8};
//variable 'mul_mod_barret_256_b_1' value: 0xc1ebb6d482a85fe8f326bba1222ffbf8f6c2de5f1c766871561824214d49f22f
uint32_t mul_mod_barret_256_b_1_tab [8] = {0x4d49f22f, 0x56182421, 0x1c766871, 0xf6c2de5f, 0x222ffbf8, 0xf326bba1, 0x82a85fe8, 0xc1ebb6d4};
bn_uint_t mul_mod_barret_256_b_1= {.number = mul_mod_barret_256_b_1_tab, .length = 8};
//variable 'mul_mod_barret_256_res_1' value: 0xfba732167278dd2adfca21b4987654954f08aec0c90aabfd04d1627b8e1ada59
uint32_t mul_mod_barret_256_res_1_tab [8] = {0x8e1ada59, 0x04d1627b, 0xc90aabfd, 0x4f08aec0, 0x98765495, 0xdfca21b4, 0x7278dd2a, 0xfba73216};
bn_uint_t mul_mod_barret_256_res_1= {.number = mul_mod_barret_256_res_1_tab, .length = 8};
//variable 'mul_mod_barret_256_a_2' value: 0x5de60a00cfa4169249b7f45666ccbee6c6b032e1b0667e403cfa120f14944c
uint32_t mul_mod_barret_256_a_2_tab [8] = {0x0f14944c, 0x403cfa12, 0xe1b0667e, 0xe6c6b032, 0x5666ccbe, 0x9249b7f4, 0x00cfa416, 0x5de60a};
bn_uint_t mul_mod_barret_256_a_2= {.number = mul_mod_barret_256_a_2_tab, .length = 8};
//variable 'mul_mod_barret_256_b_2' value: 0x26290ce28a3232146af69163309310966b472fe7eae25abb6ec9f6b62a5dec7c
uint32_t mul_mod_barret_256_b_2_tab [8] = {0x2a5dec7c, 0x6ec9f6b6, 0xeae25abb, 0x6b472fe7, 0x30931096, 0x6af69163, 0x8a323214, 0x26290ce2};
bn_uint_t mul_mod_barret_256_b_2= {.number = mul_mod_barret_256_b_2_tab, .length = 8};
//variable 'mul_mod_barret_256_res_2' value: 0x6fd95694b2a6fa7a053366beb9347bac60145848073e5bb45423adeb785cff85
uint32_t mul_mod_barret_256_res_2_tab [8] = {0x785cff85, 0x5423adeb, 0x073e5bb4, 0x60145848, 0xb9347bac, 0x053366be, 0xb2a6fa7a, 0x6fd95694};
bn_uint_t mul_mod_barret_256_res_2= {.number = mul_mod_barret_256_res_2_tab, .length = 8};
//variable 'mul_mod_barret_256_a_3' value: 0xc66b59d8b0d9970663173d24c17db1898d5c407ab32ff0c9dce9714027b8de1
uint32_t mul_mod_barret_256_a_3_tab [8] = {0x027b8de1, 0x9dce9714, 0xab32ff0c, 0x98d5c407, 0x4c17db18, 0x663173d2, 0x8b0d9970, 0xc66b59d};
bn_uint_t mul_mod_barret_256_a_3= {.number = mul_mod_barret_256_a_3_tab, .length = 8};
//variable 'mul_mod_barret_256_b_3' value: 0x99becbe143ce23fb3df1683ad8590250894d7a7668195efe0d049f2a8a7e369d
uint32_t mul_mod_barret_256_b_3_tab [8] = {0x8a7e369d, 0x0d049f2a, 0x68195efe, 0x894d7a76, 0xd8590250, 0x3df1683a, 0x43ce23fb, 0x99becbe1};
bn_uint_t mul_mod_barret_256_b_3= {.number = mul_mod_barret_256_b_3_tab, .length = 8};
//variable 'mul_mod_barret_256_res_3' value: 0x294580b9d347c55d1db4fa42b5ef6aabe9b47ba0613af6ff02863419e4c9abf4
uint32_t mul_mod_barret_256_res_3_tab [8] = {0xe4c9abf4, 0x02863419, 0x613af6ff, 0xe9b47ba0, 0xb5ef6aab, 0x1db4fa42, 0xd347c55d, 0x294580b9};
bn_uint_t mul_mod_barret_256_res_3= {.number = mul_mod_barret_256_res_3_tab, .length = 8};
//variable 'mul_mod_barret_256_a_4' value: 0x16906917123ce29b4e42cae10096cf86d330de9584f674a8b5e198c2187b65d7
uint32_t mul_mod_barret_256_a_4_tab [8] = {0x187b65d7, 0xb5e198c2, 0x84f674a8, 0xd330de95, 0x0096cf86, 0x4e42cae1, 0x123ce29b, 0x16906917};
bn_uint_t mul_mod_barret_256_a_4= {.number = mul_mod_barret_256_a_4_tab, .length = 8};
//variable 'mul_mod_barret_256_b_4' value: 0x576697b61aa99458c89f2fc8d60d3f7bdbfb5aa8ed47e0c3c89cbc72e5e9a630
uint32_t mul_mod_barret_256_b_4_tab [8] = {0xe5e9a630, 0xc89cbc72, 0xed47e0c3, 0xdbfb5aa8, 0xd60d3f7b, 0xc89f2fc8, 0x1aa99458, 0x576697b6};
bn_uint_t mul_mod_barret_256_b_4= {.number = mul_mod_barret_256_b_4_tab, .length = 8};
//variable 'mul_mod_barret_256_res_4' value: 0xa7027898cbb18d40e159dd87be762368465b707733df3c553efe64ddc196d863
uint32_t mul_mod_barret_256_res_4_tab [8] = {0xc196d863, 0x3efe64dd, 0x33df3c55, 0x465b7077, 0xbe762368, 0xe159dd87, 0xcbb18d40, 0xa7027898};
bn_uint_t mul_mod_barret_256_res_4= {.number = mul_mod_barret_256_res_4_tab, .length = 8};
//variable 'mul_mod_barret_256_a_5' value: 0x646549613930781778368b41b4218920763a2e583107a09ebce1f048b9f1a71b
uint32_t mul_mod_barret_256_a_5_tab [8] = {0xb9f1a71b, 0xbce1f048, 0x3107a09e, 0x763a2e58, 0xb4218920, 0x78368b41, 0x39307817, 0x64654961};
bn_uint_t mul_mod_barret_256_a_5= {.number = mul_mod_barret_256_a_5_tab, .length = 8};
//variable 'mul_mod_barret_256_b_5' value: 0xfacf0bb7ea6b13e3b48359013328c93705f1c01e26db71025abff6e267fc39f7
uint32_t mul_mod_barret_256_b_5_tab [8] = {0x67fc39f7, 0x5abff6e2, 0x26db7102, 0x05f1c01e, 0x3328c937, 0xb4835901, 0xea6b13e3, 0xfacf0bb7};
bn_uint_t mul_mod_barret_256_b_5= {.number = mul_mod_barret_256_b_5_tab, .length = 8};
//variable 'mul_mod_barret_256_res_5' value: 0x8002e4d4e2bcfe32a698c586fbf96f5b794a3fa83223c62db88dbb1205a30ae4
uint32_t mul_mod_barret_256_res_5_tab [8] = {0x05a30ae4, 0xb88dbb12, 0x3223c62d, 0x794a3fa8, 0xfbf96f5b, 0xa698c586, 0xe2bcfe32, 0x8002e4d4};
bn_uint_t mul_mod_barret_256_res_5= {.number = mul_mod_barret_256_res_5_tab, .length = 8};
//variable 'mul_mod_barret_256_a_6' value: 0x78363a7193c10699bcb847f4a4588f5e35f7191cb6aed343855a9c8f05f0358b
uint32_t mul_mod_barret_256_a_6_tab [8] = {0x05f0358b, 0x855a9c8f, 0xb6aed343, 0x35f7191c, 0xa4588f5e, 0xbcb847f4, 0x93c10699, 0x78363a71};
bn_uint_t mul_mod_barret_256_a_6= {.number = mul_mod_barret_256_a_6_tab, .length = 8};
//variable 'mul_mod_barret_256_b_6' value: 0x715219c313fd9689cd11805662f937f1fde5c1ac9af6cc449830d2f50ab430d0
uint32_t mul_mod_barret_256_b_6_tab [8] = {0x0ab430d0, 0x9830d2f5, 0x9af6cc44, 0xfde5c1ac, 0x62f937f1, 0xcd118056, 0x13fd9689, 0x715219c3};
bn_uint_t mul_mod_barret_256_b_6= {.number = mul_mod_barret_256_b_6_tab, .length = 8};
//variable 'mul_mod_barret_256_res_6' value: 0x3ca8a3950bb4bef499e7b4006b549a929172a49290c3a4f11ad92e9810354b36
uint32_t mul_mod_barret_256_res_6_tab [8] = {0x10354b36, 0x1ad92e98, 0x90c3a4f1, 0x9172a492, 0x6b549a92, 0x99e7b400, 0x0bb4bef4, 0x3ca8a395};
bn_uint_t mul_mod_barret_256_res_6= {.number = mul_mod_barret_256_res_6_tab, .length = 8};
//variable 'mul_mod_barret_256_a_7' value: 0xe4927d047850a0915110b982abcecbab57b0aa8367d87da97b2eea92b99743b8
uint32_t mul_mod_barret_256_a_7_tab [8] = {0xb99743b8, 0x7b2eea92, 0x67d87da9, 0x57b0aa83, 0xabcecbab, 0x5110b982, 0x7850a091, 0xe4927d04};
bn_uint_t mul_mod_barret_256_a_7= {.number = mul_mod_barret_256_a_7_tab, .length = 8};
//variable 'mul_mod_barret_256_b_7' value: 0x7a48b1d5ccad74ab1875faa8df52bc936dadc9f0460a33f2185450cf1968ed36
uint32_t mul_mod_barret_256_b_7_tab [8] = {0x1968ed36, 0x185450cf, 0x460a33f2, 0x6dadc9f0, 0xdf52bc93, 0x1875faa8, 0xccad74ab, 0x7a48b1d5};
bn_uint_t mul_mod_barret_256_b_7= {.number = mul_mod_barret_256_b_7_tab, .length = 8};
//variable 'mul_mod_barret_256_res_7' value: 0xf2ea5e3c4c104f2246eeb31fc28fbf889331935b30d0c1a33515682c089c89d4
uint32_t mul_mod_barret_256_res_7_tab [8] = {0x089c89d4, 0x3515682c, 0x30d0c1a3, 0x9331935b, 0xc28fbf88, 0x46eeb31f, 0x4c104f22, 0xf2ea5e3c};
bn_uint_t mul_mod_barret_256_res_7= {.number = mul_mod_barret_256_res_7_tab, .length = 8};
//variable 'mul_mod_barret_256_a_8' value: 0x450edb86d3dd98f4a9d6d3b792d2a210088035550c69250d76422c3b4092c83c
uint32_t mul_mod_barret_256_a_8_tab [8] = {0x4092c83c, 0x76422c3b, 0x0c69250d, 0x08803555, 0x92d2a210, 0xa9d6d3b7, 0xd3dd98f4, 0x450edb86};
bn_uint_t mul_mod_barret_256_a_8= {.number = mul_mod_barret_256_a_8_tab, .length = 8};
//variable 'mul_mod_barret_256_b_8' value: 0xa47589f516f8416d4e436720843a491a51eadea62d70dfc3dc83679bd582c0
uint32_t mul_mod_barret_256_b_8_tab [8] = {0x9bd582c0, 0xc3dc8367, 0xa62d70df, 0x1a51eade, 0x20843a49, 0x6d4e4367, 0xf516f841, 0xa47589};
bn_uint_t mul_mod_barret_256_b_8= {.number = mul_mod_barret_256_b_8_tab, .length = 8};
//variable 'mul_mod_barret_256_res_8' value: 0x7d09a16dcc5509a480db2854bd8a34edd5b626d98b0f6fd6f37ffd8dd5ff7d2c
uint32_t mul_mod_barret_256_res_8_tab [8] = {0xd5ff7d2c, 0xf37ffd8d, 0x8b0f6fd6, 0xd5b626d9, 0xbd8a34ed, 0x80db2854, 0xcc5509a4, 0x7d09a16d};
bn_uint_t mul_mod_barret_256_res_8= {.number = mul_mod_barret_256_res_8_tab, .length = 8};
//variable 'mul_mod_barret_256_a_9' value: 0xaa6c0404f8c621c46168cd7c937965dab4019760d3ba8c355b243f98e93ba561
uint32_t mul_mod_barret_256_a_9_tab [8] = {0xe93ba561, 0x5b243f98, 0xd3ba8c35, 0xb4019760, 0x937965da, 0x6168cd7c, 0xf8c621c4, 0xaa6c0404};
bn_uint_t mul_mod_barret_256_a_9= {.number = mul_mod_barret_256_a_9_tab, .length = 8};
//variable 'mul_mod_barret_256_b_9' value: 0x131f956bed4b0cda7d81f5b1176dd1f856f85e6680f8c5a5dea276141d95f8b8
uint32_t mul_mod_barret_256_b_9_tab [8] = {0x1d95f8b8, 0xdea27614, 0x80f8c5a5, 0x56f85e66, 0x176dd1f8, 0x7d81f5b1, 0xed4b0cda, 0x131f956b};
bn_uint_t mul_mod_barret_256_b_9= {.number = mul_mod_barret_256_b_9_tab, .length = 8};
//variable 'mul_mod_barret_256_res_9' value: 0xe2c44285b2e60f1c3b861cbdbef0cdcdc8074275426ac8ac6a5d89bbf3580559
uint32_t mul_mod_barret_256_res_9_tab [8] = {0xf3580559, 0x6a5d89bb, 0x426ac8ac, 0xc8074275, 0xbef0cdcd, 0x3b861cbd, 0xb2e60f1c, 0xe2c44285};
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
