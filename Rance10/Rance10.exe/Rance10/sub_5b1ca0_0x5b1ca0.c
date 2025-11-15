// 函数: sub_5b1ca0
// 地址: 0x5b1ca0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

float xmm4 = arg1[1]
float xmm2 = *arg1
float xmm3 = arg1[2]
float xmm7 = arg3[7]
float xmm5 = arg3[3]
float xmm6 = arg3[0xb]
float xmm0_5 = arg3[5] * xmm4
*arg2 = xmm2 * *arg3 + xmm4 * arg3[4] + xmm3 * arg3[8]
float xmm0_9 = arg3[6] * xmm4
arg2[1] = arg3[1] * xmm2 + xmm0_5 + arg3[9] * xmm3
float xmm4_1 = arg1[4]
arg2[2] = arg3[2] * xmm2 + xmm0_9 + arg3[0xa] * xmm3
float xmm2_1 = arg1[6]
float xmm3_1 = arg1[5]
float xmm0_17 = xmm3_1 * arg3[4]
arg2[3] = xmm5 * xmm2 + xmm7 * xmm4 + xmm6 * xmm3
float xmm0_21 = xmm3_1 * arg3[5]
arg2[4] = xmm4_1 * *arg3 + xmm0_17 + xmm2_1 * arg3[8]
float xmm0_25 = xmm3_1 * arg3[6]
arg2[5] = xmm4_1 * arg3[1] + xmm0_21 + xmm2_1 * arg3[9]
float xmm3_3 = arg1[9]
arg2[6] = xmm4_1 * arg3[2] + xmm0_25 + xmm2_1 * arg3[0xa]
arg2[7] = xmm4_1 * xmm5 + xmm3_1 * xmm7 + xmm2_1 * xmm6
float xmm4_5 = arg1[8]
float xmm2_3 = arg1[0xa]
float xmm1_30 = xmm4_5 * *arg3 + xmm3_3 * arg3[4]
arg2[0xc] = arg3[0xc]
float xmm0_31 = xmm2_3 * arg3[8]
arg2[0xd] = arg3[0xd]
arg2[0xe] = arg3[0xe]
arg2[0xf] = arg3[0xf]
float xmm0_33 = xmm3_3 * arg3[5]
arg2[8] = xmm1_30 + xmm0_31
float xmm0_37 = xmm3_3 * arg3[6]
arg2[9] = xmm4_5 * arg3[1] + xmm0_33 + xmm2_3 * arg3[9]
arg2[0xa] = xmm4_5 * arg3[2] + xmm0_37 + xmm2_3 * arg3[0xa]
arg2[0xb] = xmm4_5 * xmm5 + xmm3_3 * xmm7 + xmm2_3 * xmm6
return arg2
