// 函数: sub_535d80
// 地址: 0x535d80
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

float xmm4 = *(arg1 + 4)
float xmm2 = *(arg1 + 0xc)
float xmm0_1 = xmm4 * xmm4
float xmm1 = *(arg1 + 0x10)
float xmm6_1 = xmm2 * xmm2
float xmm0_2 = *(arg1 + 8)
float xmm7_1 = xmm2 f* *(arg1 + 8)
arg2[3] = 0
float xmm5_1 = xmm0_2 * xmm0_2
arg2[7] = 0
float xmm3_1 = xmm0_2 * xmm4
arg2[0xb] = 0
float xmm0_4 = xmm2 * xmm4
float xmm2_2 = xmm1 f* *(arg1 + 0xc)
float xmm0_6 = xmm1 * xmm4
float xmm4_2 = xmm1 f* *(arg1 + 8)
*arg2 = 1f - (xmm6_1 + xmm5_1) * 2f
float xmm2_3 = *(arg1 + 0x1c)
arg2[1] = (xmm2_2 + xmm3_1) * 2f
arg2[4] = (xmm3_1 - xmm2_2) * 2f
float xmm3_4 = *(arg1 + 0x20)
arg2[2] = (xmm0_4 - xmm4_2) * 2f
arg2[5] = 1f - (xmm6_1 + xmm0_1) * 2f
arg2[8] = (xmm4_2 + xmm0_4) * 2f
float xmm4_5 = *(arg1 + 0x18)
arg2[6] = (xmm7_1 + xmm0_6) * 2f
arg2[9] = (xmm7_1 - xmm0_6) * 2f
float xmm7_4 = *(arg1 + 0x10)
float xmm0_22 = xmm3_4 f* *(arg1 + 4)
arg2[0xa] = 1f - (xmm5_1 + xmm0_1) * 2f
float xmm5_3 = *(arg1 + 0x14)
float xmm0_24 = xmm4_5 f* *(arg1 + 0xc)
arg2[0xf] = 0x3f800000
float xmm0_28 = xmm3_4 f* *(arg1 + 8)
float xmm3_5 = xmm3_4 f* *(arg1 + 0xc)
arg2[0xc] = (xmm5_3 * xmm7_4 - xmm0_22 - xmm0_24 + xmm2_3 f* *(arg1 + 8)) * 2f
float xmm4_9 = xmm4_5 f* *(arg1 + 4) - xmm3_5 + xmm2_3 * xmm7_4 - xmm5_3 f* *(arg1 + 8)
arg2[0xd] = (xmm5_3 f* *(arg1 + 0xc) - xmm0_28 - xmm2_3 f* *(arg1 + 4) + xmm4_5 * xmm7_4) * 2f
arg2[0xe] = xmm4_9 * 2f
return arg2
