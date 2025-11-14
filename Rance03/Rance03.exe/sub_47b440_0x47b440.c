// 函数: sub_47b440
// 地址: 0x47b440
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

float xmm5[0x4] = *arg1
float xmm0[0x4] = arg1[3]
float xmm0_1 = arg2[4]
float xmm1_1 = *arg2 f* xmm5
float xmm6[0x4] = arg1[1]
float xmm7[0x4] = arg1[2]
float xmm4_1 = _mm_shuffle_ps(xmm5, xmm5, 0x55)
float xmm3_1 = _mm_shuffle_ps(xmm5, xmm5, 0xaa)
float xmm2_1 = _mm_shuffle_ps(xmm5, xmm5, 0xff)
*arg1 = xmm1_1 + xmm0_1 * xmm4_1 + arg2[8] f* xmm3_1 + arg2[0xc] f* xmm2_1
*(arg1 + 4) = xmm5[0] f* arg2[1] + xmm4_1 f* arg2[5] + arg2[9] f* xmm3_1 + arg2[0xd] f* xmm2_1
*(arg1 + 8) = arg2[2] f* xmm5 + arg2[6] f* xmm4_1 + arg2[0xa] f* xmm3_1 + arg2[0xe] f* xmm2_1
float xmm2_2 = xmm2_1 f* arg2[0xf]
float xmm0_20 = arg2[7] f* xmm4_1
float xmm1_16 = arg2[3] f* xmm5
float xmm4_3 = _mm_shuffle_ps(xmm6, xmm6, 0x55)
float xmm0_22 = arg2[0xb] f* xmm3_1
float xmm3_3 = _mm_shuffle_ps(xmm6, xmm6, 0xaa)
float xmm2_4 = _mm_shuffle_ps(xmm6, xmm6, 0xff)
*(arg1 + 0xc) = xmm1_16 + xmm0_20 + xmm0_22 + xmm2_2
arg1[1].d = *arg2 f* xmm6 + arg2[4] f* xmm4_3 + arg2[8] f* xmm3_3 + arg2[0xc] f* xmm2_4
*(arg1 + 0x14) = xmm6[0] f* arg2[1] + xmm4_3 f* arg2[5] + arg2[9] f* xmm3_3 + arg2[0xd] f* xmm2_4
*(arg1 + 0x18) = arg2[2] f* xmm6 + arg2[6] f* xmm4_3 + arg2[0xa] f* xmm3_3 + arg2[0xe] f* xmm2_4
float xmm0_42 = arg2[7] f* xmm4_3
float xmm2_5 = xmm2_4 f* arg2[0xf]
float xmm1_36 = arg2[3] f* xmm6
float xmm4_5 = _mm_shuffle_ps(xmm7, xmm7, 0x55)
float xmm0_44 = arg2[0xb] f* xmm3_3
float xmm3_5 = _mm_shuffle_ps(xmm7, xmm7, 0xaa)
float xmm2_7 = _mm_shuffle_ps(xmm7, xmm7, 0xff)
*(arg1 + 0x1c) = xmm1_36 + xmm0_42 + xmm0_44 + xmm2_5
arg1[2].d = *arg2 f* xmm7 + arg2[4] f* xmm4_5 + arg2[8] f* xmm3_5 + arg2[0xc] f* xmm2_7
*(arg1 + 0x24) = xmm7[0] f* arg2[1] + xmm4_5 f* arg2[5] + arg2[9] f* xmm3_5 + arg2[0xd] f* xmm2_7
*(arg1 + 0x28) = arg2[2] f* xmm7 + arg2[6] f* xmm4_5 + arg2[0xa] f* xmm3_5 + arg2[0xe] f* xmm2_7
float xmm1_59 = arg2[3] f* xmm7 + arg2[7] f* xmm4_5 + arg2[0xb] f* xmm3_5 + xmm2_7 f* arg2[0xf]
float xmm0_67 = xmm0[0]
float xmm4_7 = _mm_shuffle_ps(xmm0, xmm0, 0x55)
float xmm3_7 = _mm_shuffle_ps(xmm0, xmm0, 0xaa)
float xmm2_10 = _mm_shuffle_ps(xmm0, xmm0, 0xff)
*(arg1 + 0x2c) = xmm1_59
arg1[3].d = arg2[4] f* xmm4_7 + xmm0_67 f* *arg2 + xmm3_7 f* arg2[8] + xmm2_10 f* arg2[0xc]
float xmm0_79 = xmm0[0]
*(arg1 + 0x34) = xmm0[0] f* arg2[1] + xmm4_7 f* arg2[5] + xmm3_7 f* arg2[9] + xmm2_10 f* arg2[0xd]
*(arg1 + 0x38) = arg2[6] f* xmm4_7 + xmm0_79 f* arg2[2] + xmm3_7 f* arg2[0xa] + arg2[0xe] f* xmm2_10
*(arg1 + 0x3c) = arg2[7] f* xmm4_7 + arg2[3] f* xmm0 + arg2[0xb] f* xmm3_7 + xmm2_10 f* arg2[0xf]
return arg1
