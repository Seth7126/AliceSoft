// 函数: sub_585640
// 地址: 0x585640
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

double xmm0_2 = _mm_cvtps_pd(arg5)
double (* result)[0x2]
double xmm0_8
long double x87_r0
result, xmm0_8 =
    ___libm_sse2_tan(_mm_cvtps_pd(arg6) * 0.5 * 3.1415926535897931 * 0.0055555555555555558, x87_r0)
int32_t xmm3 = (zx.o(0)).d
float xmm1_3
double xmm6_3
double xmm7

if (arg6 <= 0f)
    double xmm5_2[0x2] = fconvert.d(arg6 ^ (data_7094c0).d)
    int32_t xmm4_2
    
    if (arg4 == 0)
        xmm4_2 = (zx.o(0)).d
    else
        xmm4_2 = _mm_cvtpd_ps(_mm_cvtepi32_pd(zx.q(arg3)) f* xmm5_2 / _mm_cvtepi32_pd(zx.q(arg4)))
    
    xmm6_3 = xmm0_2
    xmm7 = _mm_cvtps_pd(arg2)
    double xmm1_9 = xmm6_3 - xmm7
    xmm1_9 - 0.0
    result:1.b = (xmm1_9 == 0.0 ? 1 : 0) << 6 | (is_unordered.q(xmm1_9, 0.0) ? 1 : 0) << 2
        | (xmm1_9 < 0.0 ? 1 : 0)
    bool p_5 = unimplemented  {test ah, 0x44}
    
    if (not(p_5))
        xmm1_3 = (zx.o(0)).d
    else
        double xmm0_28[0x2] = 1.0 / xmm1_9
        xmm3 = _mm_cvtpd_ps(xmm0_28)
        xmm1_3 = fconvert.s(__xorpd_xmmxuq_memxuq(xmm0_28 f* xmm7, data_7094b0))
    
    int32_t xmm0_31 = _mm_cvtpd_ps(xmm5_2)
    *(arg1 + 0x30) = 0
    *(arg1 + 0x40) = 0x3f800000
    *(arg1 + 0x18) = xmm4_2
    *(arg1 + 4) = xmm0_31
else
    double xmm4 = 1.0
    xmm0_8 f- 0
    result:1.b = (xmm0_8 == 0.0 ? 1 : 0) << 6 | (is_unordered.q(xmm0_8, 0.0) ? 1 : 0) << 2
        | (xmm0_8 < 0.0 ? 1 : 0)
    bool p_1 = unimplemented  {test ah, 0x44}
    double xmm5_1
    double xmm6_2
    
    if (not(p_1))
        xmm5_1 = (zx.o(0)).q
        xmm6_2 = (zx.o(0)).q
    else
        double xmm0_11 = _mm_cvtepi32_pd(zx.q(arg4))
        xmm5_1 = xmm4 / xmm0_8
        xmm6_2 = _mm_cvtepi32_pd(zx.q(arg3)) / (xmm0_11 * xmm0_8)
    
    xmm7 = _mm_cvtps_pd(arg2)
    double xmm0_14 = xmm0_2 - xmm7
    xmm0_14 f- 0
    result:1.b = (xmm0_14 == 0.0 ? 1 : 0) << 6 | (is_unordered.q(xmm0_14, 0.0) ? 1 : 0) << 2
        | (xmm0_14 < 0.0 ? 1 : 0)
    bool p_3 = unimplemented  {test ah, 0x44}
    
    if (not(p_3))
        xmm1_3 = (zx.o(0)).d
    else
        double xmm4_1 = xmm4 / xmm0_14
        xmm3 = _mm_cvtpd_ps(xmm4_1 * xmm0_2)
        xmm1_3 = fconvert.s(__xorpd_xmmxuq_memxuq(xmm0_2 * xmm7 * xmm4_1, data_7094b0))
    
    *(arg1 + 0x30) = 0x3f800000
    *(arg1 + 0x40) = 0
    *(arg1 + 4) = fconvert.s(xmm5_1)
    xmm6_3 = xmm0_2
    *(arg1 + 0x18) = fconvert.s(xmm6_2)

*(arg1 + 0x3c) = xmm1_3
*(arg1 + 0x38) = 0
*(arg1 + 0x34) = 0
*(arg1 + 0x2c) = xmm3
*(arg1 + 0x28) = 0
*(arg1 + 0x24) = 0
*(arg1 + 0x20) = 0
*(arg1 + 0x1c) = 0
*(arg1 + 0x14) = 0
*(arg1 + 0x10) = 0
*(arg1 + 0xc) = 0
*(arg1 + 8) = 0
*(arg1 + 0x4c) = arg2
double xmm3_2[0x2] = xmm0_8 * xmm7
*(arg1 + 0x44) = arg3
*(arg1 + 0x50) = arg5
*(arg1 + 0x54) = arg6
*(arg1 + 0x48) = arg4
*(arg1 + 0x58) = _mm_cvtpd_ps(xmm3_2)

if (arg3 == 0)
    *(arg1 + 0x5c) = 0
else
    *(arg1 + 0x5c) =
        _mm_cvtpd_ps(_mm_cvtepi32_pd(zx.q(arg4)) f* xmm3_2 / _mm_cvtepi32_pd(zx.q(arg3)))

double xmm2_1 = xmm0_8 * xmm6_3
*(arg1 + 0x60) = fconvert.s(xmm2_1)

if (arg3 == 0)
    *(arg1 + 0x64) = 0
    return result

*(arg1 + 0x64) = _mm_cvtpd_ps(_mm_cvtepi32_pd(zx.q(arg4)) * xmm2_1 / _mm_cvtepi32_pd(zx.q(arg3)))
return result
