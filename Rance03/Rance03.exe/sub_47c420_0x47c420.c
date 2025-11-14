// 函数: sub_47c420
// 地址: 0x47c420
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

float xmm1 = *arg1
float xmm2 = arg1[1]
float xmm0_1 = xmm1 * xmm1
float xmm4_1 = xmm2 * xmm1
float xmm0_2 = arg1[2]
float xmm6_1 = xmm2 * xmm2
arg2[3] = 0
float xmm3_1 = xmm0_2 * xmm1
arg2[7] = 0
float xmm7_1 = xmm0_2 * xmm0_2
arg2[0xb] = 0
float xmm3_2 = arg1[3]
float xmm5_1 = xmm3_2 * xmm1
arg2[0xc] = 0
float xmm1_2 = xmm0_2 * xmm2
arg2[0xd] = 0
float xmm3_3 = xmm3_2 * xmm0_2
arg2[0xe] = 0
float xmm5_3 = xmm3_2 * xmm2
arg2[0xf] = 0x3f800000
*arg2 = 1f - (xmm7_1 + xmm6_1) * 2f
arg2[1] = (xmm3_3 + xmm4_1) * 2f
arg2[4] = (xmm4_1 - xmm3_3) * 2f
arg2[2] = (xmm3_1 - xmm5_3) * 2f
arg2[8] = (xmm5_3 + xmm3_1) * 2f
arg2[5] = 1f - (xmm7_1 + xmm0_1) * 2f
arg2[6] = (xmm1_2 + xmm5_1) * 2f
arg2[9] = (xmm1_2 - xmm5_1) * 2f
arg2[0xa] = 1f - (xmm6_1 + xmm0_1) * 2f
return arg2
