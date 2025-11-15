// 函数: sub_6a7180
// 地址: 0x6a7180
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

uint32_t var_c = arg1
uint32_t esi = arg1
uint32_t ebx = arg2

if (*(esi + 0x190) != 0 || *(esi + 0x194) != 0)
    sub_6a7530(arg1, "gamma table being rebuilt")
    arg1, arg2 = sub_6a6f50(esi)

uint32_t (* result)[0x4]

if (ebx s> 8)
    if ((*(esi + 0x157) & 2) == 0)
        ebx.b = *(esi + 0x1ab)
    else
        arg2.b = *(esi + 0x1a8)
        arg1.b = *(esi + 0x1a9)
        ebx = zx.d(arg2.b)
        
        if (arg1.b u> arg2.b)
            ebx = zx.d(arg1.b)
        
        uint32_t eax_6
        eax_6.b = *(esi + 0x1aa)
        
        if (eax_6.b u> ebx.b)
            ebx.b = eax_6.b
    
    char eax_7
    
    if (ebx.b - 1 u> 0xe)
        eax_7 = 0
    else
        eax_7 = 0x10 - ebx.b
    
    int32_t edx_4 = *(esi + 0x7c) & 0x4000400
    
    if (edx_4 == 0 || eax_7 u>= 5)
        arg1 = zx.d(eax_7)
        
        if (eax_7 u> 8)
            arg1 = 8
    else
        arg1.b = 5
    
    uint32_t edi_1 = zx.d(arg1.b)
    int32_t edx_5 = *(esi + 0x18c)
    *(esi + 0x188) = edi_1
    
    if (edx_4 == 0)
        int32_t eax_9
        
        if (edx_5 s<= 0)
            eax_9 = 0x186a0
        else
            eax_9 = sub_6a67d0(*(esi + 0x2dc), edx_5)
        
        result = sub_6a69e0(eax_9, esi + 0x194, esi, edi_1, eax_9)
    else if (edx_5 s<= 0)
        result = sub_6a6c00(0x186a0, esi + 0x194, esi, edi_1.b, 0x186a0)
    else
        int32_t eax_8 = sub_6a6740(*(esi + 0x2dc), edx_5)
        result = sub_6a6c00(eax_8, esi + 0x194, esi, edi_1.b, eax_8)
    
    if ((*(esi + 0x7c) & 0x600080) != 0)
        uint128_t xmm1_9 = 0x4330000000000000
        uint32_t xmm4_9[0x4] = 10000000000.0 / _mm_cvtepi32_pd(zx.q(*(esi + 0x2dc))) + 0.5
        uint32_t xmm2_8[0x4] = _mm_and_ps(-0x8000000000000000, xmm4_9)
        double xmm5_1 = xmm4_9[0].q
        double xmm1_11 = _mm_or_ps(
            _mm_and_ps(xmm1_9, _mm_cmpeq_sd(xmm4_9[0].q ^ xmm2_8[0].q, xmm1_9, 1)), xmm2_8)
        double xmm5_3 = xmm5_1 + xmm1_11 - xmm1_11
        double xmm5_4 =
            xmm5_3 - _mm_and_ps(_mm_cmpeq_sd(xmm5_3 f- xmm4_9, xmm2_8, 6), 0x3ff0000000000000)
        int32_t eax_10
        
        if (0x41dfffffffc00000 f< xmm5_4 || xmm5_4 < -2147483648.0)
            eax_10 = 0
        else
            eax_10 = int.d(xmm5_4)
        
        sub_6a69e0(eax_10, esi + 0x1a4, esi, edi_1, eax_10)
        int32_t ecx_11 = *(esi + 0x18c)
        int32_t eax_11
        
        if (ecx_11 s<= 0)
            eax_11 = *(esi + 0x2dc)
        else
            eax_11 = sub_6a66a0(ecx_11)
        
        return sub_6a69e0(eax_11, esi + 0x1a0, esi, edi_1, eax_11)
else
    int32_t eax_1 = *(esi + 0x18c)
    uint128_t xmm1_1 = 0x4330000000000000
    int32_t eax_2
    
    if (eax_1 s<= 0)
        eax_2 = 0x186a0
    else
        uint32_t xmm3_4[0x4] = 1000000000000000.0 / _mm_cvtepi32_pd(zx.q(*(esi + 0x2dc)))
            / _mm_cvtepi32_pd(zx.q(eax_1)) + 0.5
        uint32_t xmm2_2[0x4] = _mm_and_ps(-0x8000000000000000, xmm3_4)
        double xmm4_1 = xmm3_4[0].q
        double xmm1_3 = _mm_or_ps(
            _mm_and_ps(xmm1_1, _mm_cmpeq_sd(xmm3_4[0].q ^ xmm2_2[0].q, xmm1_1, 1)), xmm2_2)
        double xmm4_3 = xmm4_1 + xmm1_3 - xmm1_3
        double xmm4_4 =
            xmm4_3 - _mm_and_ps(_mm_cmpeq_sd(xmm4_3 f- xmm3_4, xmm2_2, 6), 0x3ff0000000000000)
        
        if (0x41dfffffffc00000 f< xmm4_4 || xmm4_4 < -2147483648.0)
            eax_2 = 0
        else
            eax_2 = int.d(xmm4_4)
    
    result = sub_6a6e10(eax_2, esi + 0x190, esi, eax_2)
    
    if ((*(esi + 0x7c) & 0x600080) != 0)
        uint128_t xmm3_5 = 0x4330000000000000
        uint32_t xmm1_7[0x4] = 10000000000.0 / _mm_cvtepi32_pd(zx.q(*(esi + 0x2dc))) + 0.5
        uint32_t xmm4_6[0x4] = _mm_and_ps(-0x8000000000000000, xmm1_7)
        double xmm2_3 = xmm1_7[0].q
        double xmm3_7 = _mm_or_ps(
            _mm_and_ps(xmm3_5, _mm_cmpeq_sd(xmm1_7[0].q ^ xmm4_6[0].q, xmm3_5, 1)), xmm4_6)
        double xmm2_5 = xmm2_3 + xmm3_7 - xmm3_7
        double xmm2_6 =
            xmm2_5 - _mm_and_ps(_mm_cmpeq_sd(xmm2_5 f- xmm1_7, xmm4_6, 6), 0x3ff0000000000000)
        int32_t eax_3
        
        if (0x41dfffffffc00000 f< xmm2_6 || xmm2_6 < -2147483648.0)
            eax_3 = 0
        else
            eax_3 = int.d(xmm2_6)
        
        sub_6a6e10(eax_3, esi + 0x19c, esi, eax_3)
        int32_t ecx_3 = *(esi + 0x18c)
        int32_t eax_4
        
        if (ecx_3 s<= 0)
            eax_4 = *(esi + 0x2dc)
        else
            eax_4 = sub_6a66a0(ecx_3)
        
        return sub_6a6e10(eax_4, esi + 0x198, esi, eax_4)

return result
