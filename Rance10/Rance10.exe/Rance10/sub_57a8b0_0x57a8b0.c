// 函数: sub_57a8b0
// 地址: 0x57a8b0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (arg5 == 0 || arg5 - 1 u> 1)
    int32_t ecx_1 = arg1[4]
    *arg3 = *arg1
    arg3[2].d = ecx_1
    return arg3

float xmm0 = *arg1
float xmm2 = arg1[2]
float xmm7 = arg1[3]
float xmm6 = arg1[4]
float xmm1_2 = (arg4[1] f- arg1[1]) * arg2
float xmm6_1 = xmm6 + (arg4[4] f- xmm6) * arg2
float var_14
var_14.q = (arg4[2] f- xmm2) * arg2
int64_t xmm0_5 = xmm0 + (*arg4 - xmm0) * arg2
*(arg3 + 0xc) = xmm7 + (arg4[3] f- xmm7) * arg2
arg3[2].d = xmm6_1
*arg3 = _mm_unpacklo_ps(zx.o(xmm0_5), arg1[1] f+ xmm1_2)
arg3[1].d = xmm2 + var_14
return arg3
