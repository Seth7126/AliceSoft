// 函数: sub_5490a0
// 地址: 0x5490a0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t eax = *(arg1 + 4)

if (eax != 0)
    float xmm0_1 = *(eax + 0x4c)
    xmm0_1 f- 0
    eax:1.b = (xmm0_1 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_1, 0f) ? 1 : 0) << 2
        | (xmm0_1 < 0f ? 1 : 0)
    bool p_2 = unimplemented  {test ah, 0x44}
    
    if (p_2)
        float xmm2_5 = _mm_cvtepi32_ps(zx.o(arg2)) * xmm0_1 * 0.00100000005f f+ *(arg1 + 0xdc)
        *(arg1 + 0xdc) = xmm2_5
        
        if (not(xmm2_5 < 1f))
            *(arg1 + 0xdc) = xmm2_5 - _mm_cvtepi32_ps(zx.o(int.d(xmm2_5)))
        else if (not(0 f<= xmm2_5))
            *(arg1 + 0xdc) = 1f - (_mm_cvtepi32_ps(zx.o(int.d(xmm2_5))) - xmm2_5)
    
    float xmm0_5 = *(*(arg1 + 4) + 0x50)
    xmm0_5 f- 0
    eax:1.b = (xmm0_5 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_5, 0f) ? 1 : 0) << 2
        | (xmm0_5 < 0f ? 1 : 0)
    bool p_4 = unimplemented  {test ah, 0x44}
    
    if (p_4)
        float xmm1_8 = _mm_cvtepi32_ps(zx.o(arg2)) * xmm0_5 * 0.00100000005f f+ *(arg1 + 0xe0)
        *(arg1 + 0xe0) = xmm1_8
        
        if (not(xmm1_8 < 1f))
            int32_t eax_3 = int.d(xmm1_8)
            *(arg1 + 0xe0) = xmm1_8 - _mm_cvtepi32_ps(zx.o(eax_3))
            return eax_3
        
        if (not(0 f<= xmm1_8))
            eax = int.d(xmm1_8)
            *(arg1 + 0xe0) = 1f - (_mm_cvtepi32_ps(zx.o(eax)) - xmm1_8)

return eax
