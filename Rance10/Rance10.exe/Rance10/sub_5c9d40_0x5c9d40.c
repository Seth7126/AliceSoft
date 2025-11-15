// 函数: sub_5c9d40
// 地址: 0x5c9d40
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int128_t* edx = arg3
float xmm4 = *(arg1 + 0x30)
float xmm5 = *(arg1 + 0x38)
int128_t xmm0 = *edx
*(arg2 + 0x18) = *(edx + 0x18)
float xmm1_1 = *(edx + 0x1c)
float xmm2 = edx[2].d
*(arg2 + 0x1c) = xmm1_1
*(arg2 + 0x2c) = *(edx + 0x2c)
float xmm1_3 = *(arg1 + 0x34)
*arg2 = xmm0
float xmm0_1 = edx[1].d
arg2[1].d = xmm0_1
float xmm7 = *(edx + 0x14)
float xmm3 = *(edx + 0x24)
float xmm1_5 = xmm1_3 * xmm0_1 + xmm4 f* *edx
arg2[2].d = xmm2
float xmm6 = *(edx + 0x28)
float xmm2_1 = *(arg1 + 0x34)
*(arg2 + 0x14) = xmm7
*(arg2 + 0x24) = xmm3
*(arg2 + 0x28) = xmm6
arg2[3].d = xmm1_5 + xmm5 * xmm2 f+ edx[3].d
float xmm0_11 = xmm4 f* *(edx + 8)
float xmm4_1 = xmm4 f* *(edx + 0xc)
*(arg2 + 0x34) = xmm2_1 * xmm7 + xmm4 f* *(edx + 4) + xmm5 * xmm3 f+ *(edx + 0x34)
float xmm2_5 = xmm2_1 * xmm1_1 + xmm4_1 + xmm5 f* *(edx + 0x2c) f+ *(edx + 0x3c)
*(arg2 + 0x38) = xmm2_1 f* *(edx + 0x18) + xmm0_11 + xmm5 * xmm6 f+ *(edx + 0x38)
*(arg2 + 0x3c) = xmm2_5
return arg2
