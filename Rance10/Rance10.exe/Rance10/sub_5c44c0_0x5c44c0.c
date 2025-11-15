// 函数: sub_5c44c0
// 地址: 0x5c44c0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

double xmm0_1 = fconvert.d(arg2)
double xmm0_3 = _mm_cvtps_pd(arg5)
double (* result)[0x2]
double xmm0_8
long double x87_r0
result, xmm0_8 = ___libm_sse2_tan(_mm_cvtps_pd(arg6) * 0.5 * 0.017453292519943295, x87_r0)
int32_t xmm5 = (zx.o(0)).d
double xmm7

if (arg6 <= 0f)
    result = sub_5c4700(arg1, arg2, arg3, arg4, arg5, arg6 ^ (data_79aad0).d)
    xmm7 = xmm0_3
else
    double xmm4_1 = 1.0
    xmm0_8 f- 0
    result:1.b = (xmm0_8 == 0.0 ? 1 : 0) << 6 | (is_unordered.q(xmm0_8, 0.0) ? 1 : 0) << 2
        | (xmm0_8 < 0.0 ? 1 : 0)
    bool p_2 = unimplemented  {test ah, 0x44}
    double xmm2_2[0x2]
    double xmm3_2[0x2]
    
    if (not(p_2))
        xmm2_2 = zx.o(0)
        xmm3_2 = zx.o(0)
    else
        double xmm0_11 = _mm_cvtepi32_pd(zx.q(arg4))
        xmm2_2 = xmm4_1 / xmm0_8
        xmm3_2 = _mm_cvtepi32_pd(zx.q(arg3)) / (xmm0_11 * xmm0_8)
    
    xmm7 = xmm0_3
    double xmm0_14 = xmm7 - xmm0_1
    xmm0_14 f- 0
    result:1.b = (xmm0_14 == 0.0 ? 1 : 0) << 6 | (is_unordered.q(xmm0_14, 0.0) ? 1 : 0) << 2
        | (xmm0_14 < 0.0 ? 1 : 0)
    bool p_4 = unimplemented  {test ah, 0x44}
    float xmm1_1
    
    if (not(p_4))
        xmm1_1 = (zx.o(0)).d
    else
        double xmm4_2 = xmm4_1 / xmm0_14
        xmm5 = _mm_cvtpd_ps(xmm4_2 * xmm7)
        xmm1_1 = fconvert.s((xmm7 * xmm0_1 * xmm4_2) ^ (data_79aac0).q)
    
    int32_t xmm0_21 = _mm_cvtpd_ps(xmm2_2)
    arg1[1] = 0
    arg1[2] = 0
    arg1[3] = 0
    arg1[4] = 0
    arg1[6] = 0
    arg1[7] = 0
    *arg1 = xmm0_21
    int32_t xmm0_22 = _mm_cvtpd_ps(xmm3_2)
    arg1[8] = 0
    arg1[9] = 0
    arg1[0xb] = 0x3f800000
    arg1[0xc] = 0
    arg1[0xd] = 0
    arg1[0xa] = xmm5
    arg1[5] = xmm0_22
    arg1[0xe] = xmm1_1
    arg1[0xf] = 0

double xmm2_4 = xmm0_8 * xmm0_1
arg1[0x10] = arg3
arg1[0x12] = arg2
arg1[0x13] = arg5
arg1[0x14] = arg6
arg1[0x11] = arg4
arg1[0x15] = fconvert.s(xmm2_4)

if (arg3 == 0)
    arg1[0x16] = 0
else
    arg1[0x16] = _mm_cvtpd_ps(_mm_cvtepi32_pd(zx.q(arg4)) * xmm2_4 / _mm_cvtepi32_pd(zx.q(arg3)))

double xmm6_1 = xmm0_8 * xmm7
arg1[0x17] = fconvert.s(xmm6_1)

if (arg3 == 0)
    arg1[0x18] = 0
    return result

arg1[0x18] = _mm_cvtpd_ps(_mm_cvtepi32_pd(zx.q(arg4)) * xmm6_1 / _mm_cvtepi32_pd(zx.q(arg3)))
return result
