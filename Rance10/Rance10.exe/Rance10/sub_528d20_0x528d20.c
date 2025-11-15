// 函数: sub_528d20
// 地址: 0x528d20
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

float xmm1 = arg2[3]
arg3[3] = xmm1
float xmm4 = *(arg4 + 0x30)
float xmm3 = *(arg4 + 0x34)
float xmm2 = *(arg4 + 0x38)
*arg3 = xmm1 * xmm4 + *arg2
arg3[1] = xmm3 * xmm1 + arg2[1]
float xmm1_1 = arg2[7]
arg3[7] = xmm1_1
arg3[2] = xmm2 * xmm1 + arg2[2]
arg3[4] = xmm1_1 * xmm4 + arg2[4]
arg3[5] = xmm1_1 * xmm3 + arg2[5]
float xmm1_2 = arg2[0xb]
arg3[0xb] = xmm1_2
arg3[6] = xmm1_1 * xmm2 + arg2[6]
arg3[8] = xmm1_2 * xmm4 + arg2[8]
arg3[9] = xmm1_2 * xmm3 + arg2[9]
float xmm1_3 = arg2[0xf]
arg3[0xf] = xmm1_3
arg3[0xa] = xmm1_2 * xmm2 + arg2[0xa]
arg3[0xc] = xmm1_3 * xmm4 + arg2[0xc]
arg3[0xd] = xmm1_3 * xmm3 + arg2[0xd]
arg3[0xe] = xmm1_3 * xmm2 + arg2[0xe]
return arg3
