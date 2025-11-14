// 函数: sub_5123f0
// 地址: 0x5123f0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

long double x87_r0
double xmm0_5 =
    ___libm_sse2_tan(_mm_cvtps_pd(arg4) * 0.5 * 3.1415926535897931 * 0.0055555555555555558, x87_r0)
*(arg1 + 8) = 0
*(arg1 + 0xc) = 0
*(arg1 + 0x10) = 0
*(arg1 + 0x14) = 0
*(arg1 + 0x1c) = 0
*(arg1 + 0x20) = 0
*(arg1 + 0x24) = 0
*(arg1 + 0x28) = 0
*(arg1 + 0x34) = 0
*(arg1 + 0x38) = 0
double xmm6_1 = _mm_cvtepi32_pd(zx.q(arg2))
double xmm5_1 = _mm_cvtepi32_pd(zx.q(arg3))
double xmm0_10[0x2]

if (arg4 <= 0f)
    *(arg1 + 0x2c) = 0x3d4ccccd
    double xmm1_2[0x2] = fconvert.d(arg4 ^ (data_7094c0).d)
    *(arg1 + 0x30) = 0
    *(arg1 + 0x3c) = 0
    *(arg1 + 0x40) = 0x3f800000
    *(arg1 + 4) = _mm_cvtpd_ps(xmm1_2)
    xmm0_10 = xmm6_1 f* xmm1_2 / xmm5_1
else
    *(arg1 + 0x2c) = 0x3fc00000
    *(arg1 + 0x30) = 0x3f800000
    *(arg1 + 0x3c) = 0xc1700000
    *(arg1 + 0x40) = 0
    *(arg1 + 4) = _mm_cvtpd_ps(1.0 / xmm0_5)
    xmm0_10 = xmm6_1 / (xmm5_1 * xmm0_5)

*(arg1 + 0x18) = _mm_cvtpd_ps(xmm0_10)
float xmm2_1 = _mm_cvtepi32_ps(zx.o(arg2))
*(arg1 + 0x94) = arg2
*(arg1 + 0x98) = arg3
*(arg1 + 0xac) = 0x41200000
float xmm2_2 = xmm2_1 * 0.5f
*(arg1 + 0xb0) = 0x41f00000
float xmm1_5 = _mm_cvtepi32_ps(zx.o(arg3)) * 0.5f
*(arg1 + 0x9c) = xmm2_2
*(arg1 + 0xa4) = 1f / xmm2_2
double xmm2_4 = 1.0 / xmm6_1
*(arg1 + 0xa0) = xmm1_5
*(arg1 + 0xa8) = 1f / xmm1_5
double xmm1_7[0x2] = xmm0_5 * 10.0
double xmm7_1 = xmm0_5 * 30.0
*(arg1 + 0xb4) = arg4
*(arg1 + 0xb8) = _mm_cvtpd_ps(xmm1_7)
*(arg1 + 0xbc) = _mm_cvtpd_ps(xmm1_7 f* xmm5_1 * xmm2_4)
*(arg1 + 0xc0) = fconvert.s(xmm7_1)
*(arg1 + 0xc4) = fconvert.s(xmm7_1 * xmm5_1 * xmm2_4)
*(arg1 + 0x84) = _mm_unpacklo_ps(zx.o(0), 0)
*(arg1 + 0x8c) = 0x41a00000
float xmm3_1 = *(arg1 + 0x88)
float xmm1_10 = *(arg1 + 0x84)
float xmm2_5 = *(arg1 + 0x8c)
float xmm5_6 =
    *(arg1 + 0xc) * xmm1_10 + *(arg1 + 0x1c) * xmm3_1 + *(arg1 + 0x2c) * xmm2_5 f+ *(arg1 + 0x3c)
float xmm7_8 =
    *(arg1 + 0x10) * xmm1_10 + *(arg1 + 0x20) * xmm3_1 + *(arg1 + 0x30) * xmm2_5 f+ *(arg1 + 0x40)
xmm7_8 - 1f
int32_t eax_1
eax_1:1.b =
    (xmm7_8 == 1f ? 1 : 0) << 6 | (is_unordered.d(xmm7_8, 1f) ? 1 : 0) << 2 | (xmm7_8 < 1f ? 1 : 0)
bool p_1 = unimplemented  {test ah, 0x44}

if (p_1)
    xmm7_8 f- 0
    eax_1:1.b = (xmm7_8 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm7_8, 0f) ? 1 : 0) << 2
        | (xmm7_8 < 0f ? 1 : 0)
    bool p_3 = unimplemented  {test ah, 0x44}
    
    if (p_3)
        xmm5_6 = 1f / xmm7_8 * xmm5_6

*(arg1 + 0x90) = xmm5_6
void var_48
int32_t* result = sub_47ba10(arg1 + 4, &var_48)
*(arg1 + 0x44) = *result
*(arg1 + 0x54) = *(result + 0x10)
*(arg1 + 0x64) = *(result + 0x20)
*(arg1 + 0x74) = *(result + 0x30)
return result
