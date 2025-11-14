// 函数: sub_4a3520
// 地址: 0x4a3520
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t ebx = *(arg1 + 0xdc)
int32_t* result

if (ebx != 0)
    int32_t var_18_1 = ebx
    result = sub_4a55e0(*(arg1 + 0x60))

if (ebx == 0 || result.b == 0)
    float xmm0_1 = *(arg1 + 0x94)
    xmm0_1 - 1f
    result:1.b = (xmm0_1 == 1f ? 1 : 0) << 6 | (is_unordered.d(xmm0_1, 1f) ? 1 : 0) << 2
        | (xmm0_1 < 1f ? 1 : 0)
    bool p_2 = unimplemented  {test ah, 0x44}
    
    if (p_2)
        *(arg1 + 0x94) = 0x3f800000
        *(arg1 + 0x70) = 1
else
    int32_t arg_4
    char arg_8
    int32_t edi_2
    
    if (arg_8 == 0)
        edi_2 = arg_4
    else
        edi_2 = *(arg1 + 0xf8) * arg_4
    
    *(arg1 + 0x60)
    result = sub_4a56a0(ebx)
    
    if (result != 0)
        char eax_2 = (*(*result[0x17] + 0x54))()
        float xmm1_3 = _mm_cvtepi32_ps(zx.o(edi_2)) / _mm_cvtepi32_ps(zx.o(*(arg1 + 0x30)))
        float xmm0_4
        
        xmm0_4 = eax_2 == 0 ? -1f : 1f
        
        int32_t* result_1 = &arg_8
        arg_4 = 0x3f800000
        int32_t var_4 = 0
        float xmm0_6 = xmm0_4 * xmm1_3 f+ *(arg1 + 0x94)
        arg_8.d = xmm0_6
        
        if (1f <= xmm0_6)
            result_1 = &arg_4
        
        result = &var_4
        float xmm0_8 = *(arg1 + 0x94)
        
        if (*result_1 > 0f)
            result = result_1
        
        float xmm1_4 = *result
        xmm0_8 - xmm1_4
        result:1.b = (xmm0_8 == xmm1_4 ? 1 : 0) << 6 | (is_unordered.d(xmm0_8, xmm1_4) ? 1 : 0) << 2
            | (xmm0_8 < xmm1_4 ? 1 : 0)
        bool p_4 = unimplemented  {test ah, 0x44}
        
        if (p_4)
            *(arg1 + 0x94) = xmm1_4
            *(arg1 + 0x70) = 1

return result
