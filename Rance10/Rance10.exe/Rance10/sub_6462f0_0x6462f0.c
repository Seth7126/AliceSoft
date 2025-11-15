// 函数: sub_6462f0
// 地址: 0x6462f0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* esi = arg1
void* var_30 = esi
int32_t* ecx_1 = *(arg3 + 4)
void* result

if (ecx_1 != 0)
    result = (*(*ecx_1 + 0x18))()
    void* result_1 = result
    
    if (result != 0)
        int32_t eax_1 = int.d(arg2 * 255f)
        int32_t edx_1
        
        if (*(esi + 0x48) == 0)
            edx_1 = 0
        else
            edx_1 = int.d(_mm_cvtepi32_ps(zx.o(*(esi + 0x10))) * arg2)
        
        int32_t var_c_1 = edx_1
        float xmm0_8 = _mm_cvtepi32_ps(zx.o(*(esi + 0xc))) f* *(esi + 0x44)
        float xmm0_10
        
        if (0.5f <= arg2)
            float xmm0_11 = 1f - arg2
            xmm0_10 = xmm0_11 + xmm0_11
        else
            xmm0_10 = arg2 + arg2
        
        int32_t ebx_1 = *(esi + 0x10)
        int32_t eax_2 = 0
        int32_t var_24_1 = 0
        
        if (ebx_1 s> 0)
            float xmm1_2 = arg2 * 25.1327419f
            int32_t ecx_2 = 0
            int32_t edi_1 = 0
            int32_t var_10_1 = 0
            int32_t var_14_1 = 0
            float var_20_1 = xmm1_2
            
            do
                int32_t temp1_1 = mods.dp.d(sx.q(eax_2 + 1 + edx_1 - 1), ebx_1)
                int32_t edx_9
                float xmm0_16
                int16_t top
                
                if (arg4 == 0)
                    xmm0_16 = ___libm_sse2_sinf(
                        _mm_cvtepi32_ps(zx.o(divs.dp.d(sx.q(ecx_2), ebx_1))) * 0.0174532924f
                        + xmm1_2 + 1.57079637f)
                    top += 1
                    edx_9 = eax_1 << 0x18 | 0xffffff
                else
                    xmm0_16 = ___libm_sse2_sinf(
                        _mm_cvtepi32_ps(zx.o(divs.dp.d(sx.q(edi_1), ebx_1))) * 0.0174532924f
                        + xmm1_2)
                    top += 1
                    edx_9 = not.d(eax_1 << 0x18)
                int32_t eax_13 = *(esi + 0xc)
                int32_t edi_2 = int.d(xmm0_16 * xmm0_8 * xmm0_10)
                int32_t ecx_4 = edi_2 - eax_13
                float xmm2_1 = 1f / _mm_cvtepi32_ps(zx.o(ebx_1))
                float xmm1_4 = _mm_cvtepi32_ps(zx.o(temp1_1 + 1))
                float xmm3_1 = _mm_cvtepi32_ps(zx.o(temp1_1))
                float xmm1_6 = _mm_cvtepi32_ps(zx.o(eax_13))
                int32_t eax_14 = eax_13 + ecx_4
                float xmm0_29 = _mm_cvtepi32_ps(zx.o(eax_13))
                int32_t xmm5_2 = _mm_cvtepi32_ps(zx.o(var_24_1))
                int32_t xmm4_2 = _mm_cvtepi32_ps(zx.o(eax_2 + 1))
                int32_t xmm3_3 = _mm_cvtepi32_ps(zx.o(eax_14))
                sub_649080(eax_14, edx_9, &result_1, _mm_cvtepi32_ps(zx.o(ecx_4)), xmm5_2, xmm3_3, 
                    xmm4_2, 0, xmm3_1 * xmm2_1, xmm1_6 / xmm0_29, xmm1_4 * xmm2_1)
                float xmm1_11 = _mm_cvtepi32_ps(zx.o(temp1_1 + 1))
                int32_t eax_15 = *(var_30 + 0xc)
                float xmm2_3 = 1f / _mm_cvtepi32_ps(zx.o(*(var_30 + 0x10)))
                int32_t eax_16 = eax_15 + edi_2
                float xmm1_14 = _mm_cvtepi32_ps(zx.o(eax_15)) / _mm_cvtepi32_ps(zx.o(eax_15))
                float xmm2_4 = xmm2_3 * _mm_cvtepi32_ps(zx.o(temp1_1))
                int32_t xmm0_41 = _mm_cvtepi32_ps(zx.o(eax_2 + 1))
                int32_t xmm3_5 = _mm_cvtepi32_ps(zx.o(eax_16))
                int32_t xmm2_6 = _mm_cvtepi32_ps(zx.o(var_24_1))
                sub_649080(eax_16, edx_9, &result_1, _mm_cvtepi32_ps(zx.o(edi_2)), xmm2_6, xmm3_5, 
                    xmm0_41, 0, xmm2_4, xmm1_14, xmm2_3 * xmm1_11)
                int32_t eax_18 = *(var_30 + 0xc)
                float xmm1_18 = _mm_cvtepi32_ps(zx.o(temp1_1 + 1))
                int32_t ecx_10 = eax_18 + edi_2
                float xmm2_7 = 1f / _mm_cvtepi32_ps(zx.o(*(var_30 + 0x10)))
                int32_t eax_19 = eax_18 + ecx_10
                float xmm1_21 = _mm_cvtepi32_ps(zx.o(eax_18)) / _mm_cvtepi32_ps(zx.o(eax_18))
                float xmm2_8 = xmm2_7 * _mm_cvtepi32_ps(zx.o(temp1_1))
                int32_t xmm0_51 = _mm_cvtepi32_ps(zx.o(eax_2 + 1))
                int32_t xmm3_7 = _mm_cvtepi32_ps(zx.o(eax_19))
                int32_t xmm2_9 = _mm_cvtepi32_ps(zx.o(var_24_1))
                sub_649080(eax_19, edx_9, &result_1, _mm_cvtepi32_ps(zx.o(ecx_10)), xmm2_9, xmm3_7, 
                    xmm0_51, 0, xmm2_8, xmm1_21, xmm2_7 * xmm1_18)
                eax_2 += 1
                esi = var_30
                edi_1 = var_14_1 + 0x2d0
                xmm1_2 = var_20_1
                ecx_2 = var_10_1 + 0x168
                ebx_1 = *(esi + 0x10)
                edx_1 = var_c_1
                var_24_1 = eax_2
                var_14_1 = edi_1
                var_10_1 = ecx_2
            while (eax_2 s< ebx_1)
        
        int32_t* ecx_13 = *(arg3 + 4)
        
        if (ecx_13 != 0 && (*(*ecx_13 + 0x1c))().b != 0)
            result.b = 1
            return result

result.b = 0
return result
