// 函数: sub_55b5a0
// 地址: 0x55b5a0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

float edx_1 = arg7
int32_t edi = *(edx_1 i+ 0x14)
int32_t esi_1

if (edi s> 0)
    esi_1 = *(edx_1 i+ 0x18)

if (edi s<= 0 || esi_1 s<= 0)
    *(arg10 + 8) = *(edx_1 i+ 8)
    *(arg10 + 0xc) = *(edx_1 i+ 0xc)
    *(arg10 + 0x14) = *(edx_1 i+ 0x14)
    *(arg10 + 0x18) = *(edx_1 i+ 0x18)
else
    int32_t eax = *(edx_1 i+ 8)
    int32_t ecx = *(edx_1 i+ 0xc)
    uint128_t xmm5_1 = zx.o(arg3)
    int32_t eax_1 = eax + edi
    float xmm6_3 = _mm_cvtepi32_ps(zx.o(arg4)) + arg2
    float xmm0_2 = _mm_cvtepi32_ps(zx.o(eax_1))
    float xmm5_3 = _mm_cvtepi32_ps(xmm5_1) + arg1
    float xmm4_2 = _mm_cvtepi32_ps(zx.o(eax))
    float xmm3_2 = _mm_cvtepi32_ps(zx.o(ecx))
    float xmm7_2 = _mm_cvtepi32_ps(zx.o(ecx + esi_1))
    arg7 = xmm6_3
    
    if (xmm0_2 <= arg1 || xmm7_2 <= arg2 || xmm5_3 <= xmm4_2 || xmm6_3 <= xmm3_2)
        eax_1.b = 0
        return eax_1
    
    if (arg1 <= xmm4_2 || arg2 <= xmm3_2 || xmm0_2 <= xmm5_3 || not(xmm7_2 > xmm6_3))
        float xmm6_7 = _mm_min_ss(_mm_cvtepi32_ps(zx.o(eax_1)) - arg1, xmm5_3 - xmm4_2)
        float xmm0_6 = arg7 - xmm3_2
        arg3 = xmm6_7
        arg4 = _mm_min_ss(xmm7_2 - arg2, xmm0_6)
        float xmm6_11 = arg7
        int32_t xmm0_8
        
        if (not(xmm4_2 <= arg1))
            xmm0_8 = _mm_cvtepi32_ps(zx.o(eax_1))
        
        float xmm5_5
        
        if (xmm4_2 <= arg1 || xmm5_3 f<= xmm0_8)
            xmm5_5 = arg3
        else
            xmm5_5 = _mm_cvtepi32_ps(zx.o(edi))
        
        if (not(arg2 <= xmm3_2) && not(xmm7_2 <= xmm6_11))
            arg4 = _mm_cvtepi32_ps(zx.o(esi_1))
        
        float* eax_2 = &arg7
        arg3 = 0f
        int32_t var_4 = 0
        int32_t edx = int.d(xmm3_2 - arg2)
        int32_t var_8 = edx
        int32_t ecx_2 = int.d(xmm4_2 - arg1)
        arg7 = ecx_2
        
        if (ecx_2 s<= 0)
            eax_2 = &arg3
        
        *(arg10 + 8) = *eax_2
        int32_t* eax_4 = &var_8
        
        if (edx s<= 0)
            eax_4 = &var_4
        
        *(arg10 + 0xc) = *eax_4
        *(arg10 + 0x14) = int.d(xmm5_5)
        *(arg10 + 0x18) = int.d(fconvert.t(arg4))
    
    if (xmm4_2 <= arg1)
        arg1 = arg1 - (xmm4_2 - arg5)
    else
        arg1 = arg5
    
    if (xmm3_2 <= arg2)
        arg2 = arg2 - (xmm3_2 - arg6)
    else
        arg2 = arg6

*arg8 = arg1
*arg9 = arg2
float* eax_13
eax_13.b = 1
return eax_13
