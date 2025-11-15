// 函数: sub_5572c0
// 地址: 0x5572c0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_34 = 0x40
operator new(*(arg1 + 4))
int32_t var_3c = 0x40
operator new(*(arg1 + 8))
int64_t var_20 = 0
int32_t* eax_1

if (arg4 <= 0f)
    float (* eax_2)[0x2]
    int32_t ecx_2
    eax_2, ecx_2 = sub_6e810c(0x40)
    int32_t var_34_2 = arg4 ^ (data_79aad0).d
    float (* var_24_1)[0x2] = eax_2
    eax_1 = sub_5570d0(eax_2, arg2, eax_2, arg3, ecx_2)
else
    int32_t* eax
    int32_t ecx
    eax, ecx = sub_6e810c(0x40)
    float var_34_1 = arg4
    int32_t* var_24 = eax
    eax_1 = sub_557000(eax, arg2, eax, arg3, ecx)

*(arg1 + 4) = eax_1
float* eax_3 = sub_6e810c(0x40)
int32_t* ecx_4 = *(arg1 + 4)
float* var_24_2 = eax_3
float xmm0_4 = ecx_4[0xa]
float xmm5 = ecx_4[0xb]
float xmm4 = ecx_4[0xf]
float xmm2 = ecx_4[0xe]
float xmm7 = ecx_4[5]
float xmm6 = *ecx_4
eax_3[8] = 0
float xmm1_3 = (xmm0_4 * xmm4 - xmm5 * xmm2) * xmm7
float xmm3 = 1f / (xmm6 * xmm1_3)
*eax_3 = xmm3 * xmm1_3
float xmm2_2[0x4] = xmm3 * -0f
float xmm5_3 = (xmm5 * xmm7 * xmm6) ^ (data_79aad0).d
eax_3[0xe] = ((xmm2 * xmm7 * xmm6) ^ (data_79aad0).d) * xmm3
float xmm2_3[0x4] = _mm_shuffle_ps(xmm2_2, xmm2_2, 0)
eax_3[0xf] = xmm0_4 * xmm7 * xmm6 * xmm3
double xmm0_24 = _mm_cvtps_pd(arg4) * 0.5
*(eax_3 + 4) = xmm2_3
eax_3[5] = (xmm4 * xmm0_4 - xmm2 * xmm5) * xmm6 * xmm3
eax_3[6] = xmm2_3
eax_3[7] = xmm2_3
eax_3[9] = xmm2_3
eax_3[0xa] = xmm4 * xmm7 * xmm6 * xmm3
eax_3[0xb] = xmm5_3 * xmm3
eax_3[0xc] = xmm2_3
eax_3[0xd] = xmm2_3
*(arg1 + 8) = eax_3
double xmm0_26 = ___libm_sse2_tan(xmm0_24 * 0.017453292519943295)
*(arg1 + 0x1c) = arg2
*(arg1 + 0x20) = arg3
float xmm2_6 = _mm_cvtepi32_ps(zx.o(arg2)) * 0.5f
double xmm1_10 = xmm0_26 * 10.0
int32_t var_c = 0x41a00000
float xmm0_28 = _mm_cvtepi32_ps(zx.o(arg3))
*(arg1 + 0x34) = 0x41200000
*(arg1 + 0x38) = 0x41f00000
float xmm7_1 = 1f / xmm2_6
float xmm0_29 = xmm0_28 * 0.5f
*(arg1 + 0x24) = xmm2_6
float xmm6_1 = 1f / xmm0_29
*(arg1 + 0x28) = xmm0_29
*(arg1 + 0x3c) = arg4
double xmm4_5 = xmm0_26 * 30.0
*(arg1 + 0x40) = fconvert.s(xmm1_10)
double xmm2_8 = 1.0 / _mm_cvtepi32_pd(zx.q(arg2))
double xmm3_2 = _mm_cvtepi32_pd(zx.q(arg3))
int32_t* var_34_3 = *(arg1 + 4)
*(arg1 + 0x2c) = xmm7_1
*(arg1 + 0x30) = xmm6_1
*(arg1 + 0x44) = _mm_cvtpd_ps(xmm3_2 * xmm1_10 * xmm2_8)
*(arg1 + 0x48) = fconvert.s(xmm4_5)
*(arg1 + 0x4c) = fconvert.s(xmm4_5 * xmm3_2 * xmm2_8)
uint128_t xmm0_40 = 0
*(arg1 + 0xc) = _mm_unpacklo_ps(xmm0_40, xmm0_40)
*(arg1 + 0x14) = var_c
void var_14
int64_t* result = sub_528e30(arg1 + 0xc, &var_14, var_34_3)
float xmm1_11 = result[1].d
*(arg1 + 0x18) = xmm1_11
float xmm1_12 = 1f / (eax_3[0xb] * xmm1_11 + eax_3[0xf])
*(arg1 + 0x50) = xmm1_12 * xmm7_1 * *eax_3
*(arg1 + 0x54) = (xmm1_12 * xmm6_1 * eax_3[5]) ^ (data_79aad0).d
return result
