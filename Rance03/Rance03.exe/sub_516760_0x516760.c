// 函数: sub_516760
// 地址: 0x516760
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

float xmm7 = arg3
int32_t var_18 = arg1
int32_t eax = *(arg1 + 4)

if (eax != 0)
    float arg_4
    float edx_1 = arg_4
    int32_t xmm2 = (zx.o(0)).d
    *(eax + 0xc8) = 0
    *(eax + 0xcc) = 0
    *(eax + 0xd0) = 0
    *(eax + 0xd4) = 0
    int32_t eax_1 = *(edx_1 i+ 4)
    int32_t ecx = *(edx_1 i+ 8)
    int32_t ebx_1 = *(edx_1 i+ 0xc)
    int32_t ebp_1 = *(edx_1 i+ 0x10)
    void* edx_2 = *(arg1 + 4)
    int32_t eax_2 = eax_1 + ebx_1
    int32_t ecx_1 = ecx + ebp_1
    float xmm5_2 = _mm_cvtepi32_ps(zx.o(eax_1))
    float xmm3_2 = _mm_cvtepi32_ps(zx.o(ecx))
    int32_t xmm4_1
    
    if (edx_2 != 0)
        xmm4_1 = *(edx_2 + 0xc)
    else
        xmm4_1 = (zx.o(0)).d
    
    if (edx_2 != 0)
        xmm2 = *(edx_2 + 0x10)
    
    int32_t edi_1
    
    if (edx_2 != 0)
        edi_1 = *(edx_2 + 0x18)
    else
        edi_1 = 0
    
    float xmm6_3 = _mm_cvtepi32_ps(zx.o(edi_1)) f+ xmm4_1
    int32_t edi_2
    
    if (edx_2 != 0)
        edi_2 = *(edx_2 + 0x1c)
    else
        edi_2 = 0
    
    float xmm0_3 = _mm_cvtepi32_ps(zx.o(edi_2)) f+ xmm2
    bool cond:0_1 = _mm_cvtepi32_ps(zx.o(eax_2)) f<= xmm4_1
    float var_1c = xmm0_3
    int32_t xmm1_3
    
    if (not(cond:0_1))
        xmm1_3 = _mm_cvtepi32_ps(zx.o(ecx_1))
    
    float arg_8
    
    if (cond:0_1 || xmm1_3 f<= xmm2 || xmm6_3 <= xmm5_2 || xmm0_3 <= xmm3_2)
        if (edx_2 != 0)
            *(edx_2 + 0x2c) = 0
        
        return sub_412de0(arg_8, &var_18)
    
    float xmm1_8
    
    if (xmm4_1 f<= xmm5_2 || xmm2 f<= xmm3_2)
    label_516883:
        void** edx_3 = &arg_4
        float xmm0_6 = _mm_cvtepi32_ps(zx.o(eax_2)) f- xmm4_1
        float xmm1_10 = xmm6_3 - xmm5_2
        arg_8 = xmm0_6
        arg_4 = xmm1_10
        
        if (xmm0_6 <= xmm1_10)
            edx_3 = &arg_8
        
        float xmm1_12 = var_1c - xmm3_2
        float* edx_4 = &arg_8
        arg_4 = *edx_3
        float xmm0_9 = _mm_cvtepi32_ps(zx.o(ecx_1))
        arg_8 = xmm1_12
        float xmm0_10 = xmm0_9 f- xmm2
        var_18 = xmm0_10
        
        if (xmm0_10 <= xmm1_12)
            edx_4 = &var_18
        
        float xmm1_13 = *edx_4
        int32_t xmm0_12
        
        if (not(xmm5_2 f<= xmm4_1))
            xmm0_12 = _mm_cvtepi32_ps(zx.o(eax_2))
        
        float xmm6_5
        
        if (xmm5_2 f<= xmm4_1 || xmm6_3 f<= xmm0_12)
            xmm6_5 = arg_4
        else
            xmm6_5 = _mm_cvtepi32_ps(zx.o(ebx_1))
        
        if (not(xmm2 f<= xmm3_2) && not(_mm_cvtepi32_ps(zx.o(ecx_1)) f<= var_1c))
            xmm1_13 = _mm_cvtepi32_ps(zx.o(ebp_1))
        
        arg_8 = 0f
        var_1c = 0f
        void** eax_3 = &arg_4
        struct partsengine::CRect::VTable* const var_14 = &partsengine::CRect::`vftable'
        int32_t edx_5 = int.d(xmm3_2 f- xmm2)
        var_18 = edx_5
        int32_t ecx_2 = int.d(xmm5_2 f- xmm4_1)
        arg_4 = ecx_2
        
        if (ecx_2 s<= 0)
            eax_3 = &arg_8
        
        void* var_10_1 = *eax_3
        float* eax_5 = &var_18
        
        if (edx_5 s<= 0)
            eax_5 = &var_1c
        
        float var_c_1 = *eax_5
        int32_t var_8_1 = int.d(xmm6_5)
        int32_t var_4_1 = int.d(xmm1_13)
        sub_506810(arg1, &var_14)
        xmm1_8 = arg2
    else
        if (_mm_cvtepi32_ps(zx.o(eax_2)) f<= xmm6_3)
            goto label_516883
        
        xmm1_8 = arg2
        
        if (not(_mm_cvtepi32_ps(zx.o(ecx_1)) > xmm0_3))
            goto label_516883
    
    if (not(xmm5_2 f> xmm4_1))
        xmm1_8 = xmm4_1 f- (xmm5_2 - xmm1_8)
    
    if (not(xmm3_2 f> xmm2))
        xmm7 = xmm2 f- (xmm3_2 - xmm7)
    
    eax = *(arg1 + 4)
    
    if (eax != 0)
        *(eax + 0xc) = xmm1_8
        void* eax_9 = *(arg1 + 4)
        *(eax_9 + 0x10) = xmm7
        return eax_9

return eax
