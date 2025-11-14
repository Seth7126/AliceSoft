// 函数: sub_5f9650
// 地址: 0x5f9650
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* ecx_1 = *(arg3 + 4)
void* result

if (ecx_1 != 0)
    result = (*(*ecx_1 + 0x18))()
    void* result_1 = result
    
    if (result != 0)
        int32_t eax_1 = int.d(arg2 * 255f)
        int32_t eax_2
        
        if (*(arg1 + 0x10) == 0)
            eax_2 = 0
        else
            eax_2 = int.d(_mm_cvtepi32_ps(zx.o(*(arg1 + 8))) * arg2)
        
        int32_t var_4_1 = eax_2
        float xmm0_8 = _mm_cvtepi32_ps(zx.o(*(arg1 + 4))) f* *(arg1 + 0xc)
        float xmm0_9
        
        if (0.5f <= arg2)
            xmm0_9 = 1f - arg2
        else
            xmm0_9 = arg2
        
        float xmm0_10 = xmm0_9 * 2f
        int32_t ecx_2 = *(arg1 + 8)
        float ebx_1 = 0f
        
        if (ecx_2 s> 0)
            float xmm1_2 = arg2 * 1440f
            int32_t esi_1 = 0
            int32_t edi_1 = 0
            float var_14_1 = xmm1_2
            int32_t var_8_1 = 0
            int32_t var_c_1 = 0
            
            do
                float var_24_1 = mods.dp.d(sx.q(eax_2 i+ ebx_1), ecx_2)
                int16_t top
                
                if (arg4 == 0)
                    top += 1
                    int32_t var_38_4 = arg5
                    float xmm0_25 = ___libm_sse2_sinf((
                        _mm_cvtepi32_ps(zx.o(divs.dp.d(sx.q(esi_1), ecx_2))) + xmm1_2 + 90f)
                        * 3.14159274f * 0.00555555569f) * xmm0_8
                    int32_t ecx_9 = *(arg1 + 4)
                    int32_t var_3c_4 = eax_1
                    float esi_3 = int.d(xmm0_25 * xmm0_10)
                    int32_t ecx_11 = sub_5f9420(arg1, &result_1, esi_3 i- ecx_9, ebx_1, ecx_9, 
                        var_24_1, ecx_9, ecx_9.b)
                    int32_t var_38_5 = arg5
                    int32_t var_3c_5 = eax_1
                    sub_5f9420(arg1, &result_1, esi_3, ebx_1, ecx_11, var_24_1, *(arg1 + 4), 
                        ecx_11.b)
                    int32_t eax_18 = *(arg1 + 4)
                    int32_t var_38_6 = arg5
                    int32_t var_3c_6 = eax_1
                    sub_5f9420(arg1, &result_1, eax_18 i+ esi_3, ebx_1, arg5, var_24_1, eax_18, 
                        arg5.b)
                else
                    top += 1
                    float xmm0_17 = ___libm_sse2_sinf((
                        _mm_cvtepi32_ps(zx.o(divs.dp.d(sx.q(edi_1), ecx_2))) + xmm1_2) * 3.14159274f
                        * 0.00555555569f) * xmm0_8
                    int32_t ecx_3 = *(arg1 + 4)
                    int32_t var_38_1 = arg5
                    int32_t var_3c_1 = 0xff - eax_1
                    int32_t edi_2 = int.d(xmm0_17 * xmm0_10)
                    int32_t ecx_5 = sub_5f9420(arg1, &result_1, edi_2 - ecx_3, ebx_1, ecx_3, 
                        var_24_1, ecx_3, ecx_3.b)
                    int32_t var_38_2 = arg5
                    int32_t var_3c_2 = 0xff - eax_1
                    sub_5f9420(arg1, &result_1, edi_2, ebx_1, ecx_5, var_24_1, *(arg1 + 4), ecx_5.b)
                    int32_t eax_11 = *(arg1 + 4)
                    int32_t var_38_3 = arg5
                    int32_t var_3c_3 = 0xff - eax_1
                    sub_5f9420(arg1, &result_1, eax_11 + edi_2, ebx_1, arg5, var_24_1, eax_11, 
                        arg5.b)
                    edi_1 = var_c_1
                ebx_1 += 1
                ecx_2 = *(arg1 + 8)
                edi_1 += 0x2d0
                xmm1_2 = var_14_1
                esi_1 = var_8_1 + 0x168
                eax_2 = var_4_1
                var_c_1 = edi_1
                var_8_1 = esi_1
            while (ebx_1 s< ecx_2)
        
        int32_t* ecx_15 = *(arg3 + 4)
        
        if (ecx_15 != 0 && (*(*ecx_15 + 0x1c))().b != 0)
            result.b = 1
            return result

result.b = 0
return result
