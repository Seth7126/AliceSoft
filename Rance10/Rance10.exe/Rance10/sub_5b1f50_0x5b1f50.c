// 函数: sub_5b1f50
// 地址: 0x5b1f50
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

float xmm3 = arg1[0xd]
float xmm2 = arg1[0xc]
float xmm7 = *arg3
float xmm6 = arg3[1]
float xmm5 = arg3[4]
float xmm4 = arg3[5]
float xmm0_1 = *arg1 * xmm7
arg2[0xa] = arg1[0xa]
*arg2 = xmm0_1
float xmm0_3 = xmm6 f* *arg1
arg2[2] = 0
arg2[3] = 0
arg2[1] = xmm0_3
float xmm0_5 = arg1[5] f* xmm5
arg2[6] = 0
arg2[7] = 0
arg2[8] = 0
arg2[4] = xmm0_5
float xmm0_7 = xmm4 f* arg1[5]
int32_t ecx = arg1[0xe]
arg2[9] = 0
arg2[0xb] = 0
arg2[5] = xmm0_7
arg2[0xe] = ecx
arg2[0xf] = 0x3f800000
arg2[0xc] = xmm3 * xmm5 + xmm2 * xmm7
arg2[0xd] = xmm3 * xmm4 + xmm2 * xmm6
return arg2
