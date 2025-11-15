// 函数: sub_5db420
// 地址: 0x5db420
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

__Smtx_lock_shared(arg1 + 0x10)
int32_t esi = *(arg1 + 0xc)
__Smtx_unlock_shared(arg1 + 0x10)
int32_t result

if (esi != 0)
    __Smtx_lock_shared(arg1 + 0x10)
    int32_t* esi_1 = *(arg1 + 0xc)
    __Smtx_unlock_shared(arg1 + 0x10)
    result = (*(*esi_1 + 0x18))()
    int32_t result_1 = result
    
    if (result != 0)
        float var_60 = 0f
        int32_t var_5c = 0x3f800000
        int32_t var_58 = 0
        sub_5db320(result, &var_60, &result_1, &data_7e70e0)
        int32_t ecx_2 = 1
        int32_t eax_2 = *(arg1 + 4) - 1
        int32_t var_74 = 1
        float var_54
        
        if (eax_2 s> 1)
            int32_t edi_2 = *(arg1 + 8)
            
            do
                float xmm0_4 =
                    _mm_cvtepi32_ps(zx.o(ecx_2)) / _mm_cvtepi32_ps(zx.o(eax_2)) * 3.14159274f
                int32_t xmm0_5 = ___libm_sse2_cosf(xmm0_4)
                int32_t xmm0_7 = ___libm_sse2_sinf(xmm0_4)
                int16_t top = top + 2
                int32_t var_b4_1 = xmm0_5
                void var_bc
                float var_48
                sub_5615e0(&var_48, xmm0_5, xmm0_7, var_bc, xmm0_7 ^ (data_79aad0).d)
                float var_44
                float var_34
                float xmm1_6 = var_44 * 0f + var_34
                float xmm2_3 = xmm1_6 * xmm1_6
                float xmm0_10 = sub_484cc0(1f - xmm2_3)
                int32_t esi_2 = 0
                
                if (edi_2 s> 0)
                    float var_50_1 = xmm1_6
                    
                    do
                        float xmm0_14 = _mm_cvtepi32_ps(zx.o(esi_2)) * 6.28318548f
                            / _mm_cvtepi32_ps(zx.o(edi_2))
                        int32_t xmm0_15 = ___libm_sse2_cosf(xmm0_14)
                        int32_t xmm0_17 = ___libm_sse2_sinf(xmm0_14)
                        top += 2
                        int32_t var_a0_1 = xmm0_15
                        int32_t var_a8_1 = xmm0_17
                        sub_5616f0(&var_48, xmm0_15, xmm0_17 ^ (data_79aad0).d)
                        float var_28
                        float xmm2_6 = var_28 * xmm0_10 + var_48 * 0f
                        float var_40
                        float var_20
                        float xmm3_4 = var_20 * xmm0_10 + var_40 * 0f
                        var_54 = xmm2_6
                        float var_4c_1 = xmm3_4
                        float xmm0_27 = sub_484cc0(xmm2_6 * xmm2_6 + xmm2_3 + xmm3_4 * xmm3_4)
                        xmm0_27 f- 0
                        int32_t* eax_3
                        eax_3:1.b = (xmm0_27 == 0f ? 1 : 0) << 6
                            | (is_unordered.d(xmm0_27, 0f) ? 1 : 0) << 2 | (xmm0_27 < 0f ? 1 : 0)
                        bool p_2 = unimplemented  {test ah, 0x44}
                        float xmm0_29
                        
                        if (not(p_2))
                            xmm0_29 = xmm1_6
                        else
                            float xmm1_12 = 1f / xmm0_27
                            xmm2_6 = xmm2_6 * xmm1_12
                            xmm0_29 = xmm1_6 * xmm1_12
                            xmm3_4 = xmm3_4 * xmm1_12
                        
                        float var_58_1 = xmm3_4
                        float var_5c_1 = xmm0_29
                        var_60 = xmm2_6
                        sub_5db320(&var_60, &var_54, &result_1, &var_60)
                        edi_2 = *(arg1 + 8)
                        esi_2 += 1
                    while (esi_2 s< edi_2)
                
                ecx_2 = var_74 + 1
                eax_2 = *(arg1 + 4) - 1
                var_74 = ecx_2
            while (ecx_2 s< eax_2)
        
        float xmm0_31 = data_7e70e0 ^ 0x80000000
        var_60 = 0f
        var_54 = xmm0_31
        int32_t var_5c_2 = 0xbf800000
        int32_t var_50_2 = data_7e70e4 ^ 0x80000000
        int32_t var_58_2 = 0
        int32_t var_4c_2 = data_7e70e8 ^ 0x80000000
        sub_5db320(&var_54, &var_60, &result_1, &var_54)
        __Smtx_lock_shared(arg1 + 0x10)
        int32_t* esi_3 = *(arg1 + 0xc)
        __Smtx_unlock_shared(arg1 + 0x10)
        return (*(*esi_3 + 0x1c))() != 0

result.b = 0
return result
