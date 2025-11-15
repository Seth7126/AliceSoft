// 函数: sub_5c4700
// 地址: 0x5c4700
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t xmm2 = (zx.o(0)).d
double xmm5 = fconvert.d(arg2)
double xmm3_1 = _mm_cvtps_pd(arg5)
float xmm1_3

if (arg4 == 0)
    xmm1_3 = (zx.o(0)).d
else
    xmm1_3 = _mm_cvtepi32_ps(zx.o(arg3)) * arg6 / _mm_cvtepi32_ps(zx.o(arg4))

double xmm3_2 = xmm3_1 - xmm5
xmm3_2 - 0.0
int32_t result
result:1.b = (xmm3_2 == 0.0 ? 1 : 0) << 6 | (is_unordered.q(xmm3_2, 0.0) ? 1 : 0) << 2
    | (xmm3_2 < 0.0 ? 1 : 0)
bool p_1 = unimplemented  {test ah, 0x44}
float xmm0_7

if (not(p_1))
    xmm0_7 = (zx.o(0)).d
else
    double xmm0_4[0x2] = 1.0 / xmm3_2
    xmm2 = _mm_cvtpd_ps(xmm0_4)
    xmm0_7 = fconvert.s((xmm0_4 f* xmm5) ^ (data_79aac0).q)

*arg1 = arg6
arg1[1] = 0
arg1[2] = 0
arg1[3] = 0
arg1[4] = 0
arg1[5] = xmm1_3
arg1[6] = 0
arg1[7] = 0
arg1[8] = 0
arg1[9] = 0
arg1[0xa] = xmm2
arg1[0xb] = 0
arg1[0xc] = 0
arg1[0xd] = 0
arg1[0xe] = xmm0_7
arg1[0xf] = 0x3f800000
return result
