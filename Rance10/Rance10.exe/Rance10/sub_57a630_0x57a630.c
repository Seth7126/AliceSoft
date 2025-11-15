// 函数: sub_57a630
// 地址: 0x57a630
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

float xmm0 = arg4
int32_t esi = 0
float var_30 = xmm0
*arg7 = 0

if (arg5 s<= 0)
    return 

arg1 = arg5 - 1

do
    float xmm0_1 = sub_57a7a0(esi, arg1, xmm0)
    int32_t ecx_2 = (arg2 + esi) * 7
    int32_t edx_1 = *arg3
    float eax_3
    float xmm0_7
    int64_t xmm1_2
    float xmm2_3[0x4]
    
    if (esi != 0)
        xmm2_3 = *arg6 + *(edx_1 + (ecx_2 << 2) + 8) * xmm0_1
        xmm1_2 = *(arg6 + 4) + *(edx_1 + (ecx_2 << 2) + 0xc) * xmm0_1
        eax_3 = *(arg6 + 8) + *(edx_1 + (ecx_2 << 2) + 0x10) * xmm0_1
        float var_8_2 = *(arg6 + 0xc) + *(edx_1 + (ecx_2 << 2) + 0x14) * xmm0_1
        xmm0_7 = arg6[1].d f+ *(edx_1 + (ecx_2 << 2) + 0x18) * xmm0_1
    else
        xmm2_3 = *(edx_1 + (ecx_2 << 2) + 8) * xmm0_1
        eax_3 = *(edx_1 + (ecx_2 << 2) + 0x10) * xmm0_1
        xmm1_2 = *(edx_1 + (ecx_2 << 2) + 0xc) * xmm0_1
        float var_8_1 = *(edx_1 + (ecx_2 << 2) + 0x14) * xmm0_1
        xmm0_7 = *(edx_1 + (ecx_2 << 2) + 0x18) * xmm0_1
    
    esi += 1
    float var_c_1 = eax_3
    *arg6 = _mm_unpacklo_ps(xmm2_3, xmm1_2).o
    arg6[1].d = xmm0_7
    arg1 = arg5 - 1
    *arg7 = _mm_cvtepi32_ps(zx.o(*(edx_1 + (ecx_2 << 2)))) * xmm0_1 f+ *arg7
    xmm0 = var_30
while (esi s< arg5)
