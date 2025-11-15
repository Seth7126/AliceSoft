// 函数: sub_57a130
// 地址: 0x57a130
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t eax = *arg4

if (not(arg1 f< _mm_cvtepi32_ps(zx.o(eax))))
    int32_t ecx = arg4[6]
    *arg2 = *(arg4 + 8)
    arg2[1].d = ecx
    return arg2

int32_t eax_2 = eax - *arg3

if (eax_2 s<= 0)
    int32_t ecx_1 = arg3[6]
    *arg2 = *(arg3 + 8)
    arg2[1].d = ecx_1
    return arg2

float xmm0_5 = _mm_cvtepi32_ps(zx.o(*arg3))
float xmm3 = arg4[3]
float xmm4 = arg4[4]
float xmm2_1 = (arg1 - xmm0_5) / _mm_cvtepi32_ps(zx.o(eax_2))
float xmm5_2 = (arg4[5] f- arg3[5]) * xmm2_1
float xmm6_2 = (arg4[6] f- arg3[6]) * xmm2_1
float xmm0_12 = arg3[4] f+ (xmm4 f- arg3[4]) * xmm2_1
int64_t xmm2_4 =
    _mm_unpacklo_ps(arg3[2] f+ (arg4[2] f- arg3[2]) * xmm2_1, arg3[3] f+ (xmm3 f- arg3[3]) * xmm2_1)
float xmm0_14 = arg3[5] f+ xmm5_2
*arg2 = xmm2_4
*(arg2 + 8) = xmm0_12
*(arg2 + 0xc) = xmm0_14
arg2[1].d = arg3[6] f+ xmm6_2
return arg2
