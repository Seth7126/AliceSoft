// 函数: sub_5b2020
// 地址: 0x5b2020
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

float xmm1 = arg1[5]
float xmm7 = *(arg3 + 0x14)
float xmm6 = *(arg3 + 0x18)
int32_t eax = *arg1
float xmm3 = arg1[0xd]
float xmm2 = arg1[0xe]
arg2[1] = arg1[1] f* xmm7
float xmm0_3 = xmm6 f* arg1[1]
*arg2 = eax
arg2[4] = arg1[4]
arg2[2] = xmm0_3
arg2[0xc] = arg1[0xc]
arg2[5] = xmm1 * xmm7
float xmm0_7 = arg1[0xa] f* *(arg3 + 0x24)
arg2[3] = 0
arg2[6] = xmm1 * xmm6
float xmm1_3 = xmm2 f* *(arg3 + 0x24)
arg2[7] = 0
float xmm2_1 = xmm2 f* *(arg3 + 0x28)
arg2[8] = 0
arg2[9] = xmm0_7
float xmm0_9 = *(arg3 + 0x28) f* arg1[0xa]
arg2[0xb] = 0
arg2[0xf] = 0x3f800000
arg2[0xa] = xmm0_9
arg2[0xd] = xmm1_3 + xmm3 * xmm7
arg2[0xe] = xmm2_1 + xmm3 * xmm6
return arg2
