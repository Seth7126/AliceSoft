// 函数: sub_57a520
// 地址: 0x57a520
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

float xmm0 = arg4
int32_t esi = 0
float var_10 = xmm0
*arg7 = 0

if (arg5 s<= 0)
    return 

arg1 = arg5 - 1

do
    float xmm0_1 = sub_57a7a0(esi, arg1, xmm0)
    int32_t ecx_1 = (arg2 + esi) * 5
    int32_t edx_1 = *arg3
    
    if (esi != 0)
        float xmm2_6 = *(edx_1 + (ecx_1 << 2) + 0xc) * xmm0_1
        float xmm3_1 = *(edx_1 + (ecx_1 << 2) + 0x10) * xmm0_1
        *arg6 = *arg6 + *(edx_1 + (ecx_1 << 2) + 8) * xmm0_1
        *(arg6 + 4) = *(arg6 + 4) + xmm2_6
        arg6[1].d = arg6[1].d f+ xmm3_1
    else
        float xmm0_3 = *(edx_1 + (ecx_1 << 2) + 0x10) * xmm0_1
        *arg6 = _mm_unpacklo_ps(*(edx_1 + (ecx_1 << 2) + 8) * xmm0_1, 
            *(edx_1 + (ecx_1 << 2) + 0xc) * xmm0_1)
        arg6[1].d = xmm0_3
    
    arg1 = arg5 - 1
    esi += 1
    *arg7 = _mm_cvtepi32_ps(zx.o(*(edx_1 + (ecx_1 << 2)))) * xmm0_1 f+ *arg7
    xmm0 = var_10
while (esi s< arg5)
