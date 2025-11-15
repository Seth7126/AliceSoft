// 函数: sub_6cb020
// 地址: 0x6cb020
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

float xmm1[0x4] = *arg2
float xmm2[0x4] = arg2[1].d
float xmm3[0x4] = arg2[2].d
float xmm0[0x4] = *arg4
float xmm4[0x4] = arg2[3].d
float xmm5[0x4] = *(arg2 + 4)
float xmm2_2[0x4] = _mm_mul_ps(_mm_shuffle_ps(xmm2, xmm2, 0), xmm0)
float xmm1_2[0x4] = _mm_mul_ps(_mm_shuffle_ps(xmm1, xmm1, 0), xmm0)
float xmm3_2[0x4] = _mm_mul_ps(_mm_shuffle_ps(xmm3, xmm3, 0), xmm0)
float xmm4_2[0x4] = _mm_mul_ps(_mm_shuffle_ps(xmm4, xmm4, 0), xmm0)
float xmm0_1[0x4] = arg4[1]
float xmm5_2[0x4] = _mm_mul_ps(_mm_shuffle_ps(xmm5, xmm5, 0), xmm0_1)
float xmm6[0x4] = *(arg2 + 0x28)
float xmm6_1[0x4] = _mm_shuffle_ps(xmm6, xmm6, 0)
float xmm5_3[0x4] = _mm_add_ps(xmm5_2, xmm1_2)
float xmm1_3[0x4] = *(arg2 + 0x14)
float xmm1_6[0x4] = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(xmm1_3, xmm1_3, 0), xmm0_1), xmm2_2)
float xmm2_3[0x4] = *(arg2 + 0x24)
float xmm2_6[0x4] = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(xmm2_3, xmm2_3, 0), xmm0_1), xmm3_2)
float xmm3_3[0x4] = *(arg2 + 0x34)
float xmm3_5[0x4] = _mm_mul_ps(_mm_shuffle_ps(xmm3_3, xmm3_3, 0), xmm0_1)
float xmm0_2[0x4] = arg4[2]
float xmm6_2[0x4] = _mm_mul_ps(xmm6_1, xmm0_2)
float xmm3_6[0x4] = _mm_add_ps(xmm3_5, xmm4_2)
float xmm4_3[0x4] = *(arg2 + 8)
float xmm4_5[0x4] = _mm_mul_ps(_mm_shuffle_ps(xmm4_3, xmm4_3, 0), xmm0_2)
float xmm6_3[0x4] = _mm_add_ps(xmm6_2, xmm2_6)
float xmm2_7[0x4] = *(arg2 + 0x38)
float xmm2_9[0x4] = _mm_mul_ps(_mm_shuffle_ps(xmm2_7, xmm2_7, 0), xmm0_2)
float xmm4_6[0x4] = _mm_add_ps(xmm4_5, xmm5_3)
float xmm5_4[0x4] = *(arg2 + 0x18)
float xmm5_6[0x4] = _mm_mul_ps(_mm_shuffle_ps(xmm5_4, xmm5_4, 0), xmm0_2)
float xmm0_3[0x4] = *(arg2 + 0xc)
float xmm2_10[0x4] = _mm_add_ps(xmm2_9, xmm3_6)
float xmm0_4[0x4] = _mm_shuffle_ps(xmm0_3, xmm0_3, 0)
float xmm5_7[0x4] = _mm_add_ps(xmm5_6, xmm1_6)
float xmm1_7[0x4] = arg4[3]
*arg3 = _mm_add_ps(_mm_mul_ps(xmm0_4, xmm1_7), xmm4_6)
float xmm0_7[0x4] = *(arg2 + 0x1c)
arg3[1] = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(xmm0_7, xmm0_7, 0), xmm1_7), xmm5_7)
float xmm0_11[0x4] = *(arg2 + 0x2c)
arg3[2] = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(xmm0_11, xmm0_11, 0), xmm1_7), xmm6_3)
float xmm0_15[0x4] = *(arg2 + 0x3c)
arg3[3] = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(xmm0_15, xmm0_15, 0), xmm1_7), xmm2_10)
return arg3
