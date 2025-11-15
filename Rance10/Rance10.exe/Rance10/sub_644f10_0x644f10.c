// 函数: sub_644f10
// 地址: 0x644f10
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ebp
int32_t var_4 = ebp
int32_t* var_20 = &var_4
int32_t i_1 = 0
int32_t* ecx = *(arg1 + 0x18)
void* var_10 =
    ((int.d(_mm_cvtepi32_ps(zx.o(*(arg1 + 0x10) + 0xe0)) * arg2) + 0xf) & 0xfffffff0) - 0xe0
void* result

if (ecx != 0)
    result = (*(*ecx + 0x18))()
    void* result_2 = result
    
    if (result != 0)
        void* edx_1 = var_10
        void* i = 0xf
        result = nullptr
        void* edi_1 = edx_1
        void* result_1 = nullptr
        void* ecx_1 = edx_1 + 0xf
        void* var_18_1 = ecx_1
        
        do
            if (edi_1 s>= 0)
                int32_t ecx_2 = *(arg1 + 0x10)
                
                if (edi_1 s< ecx_2)
                    void* i_2 = i
                    
                    if (var_18_1 s> ecx_2)
                        edx_1 = var_10
                        i_2 = ecx_2 - result_1 - edx_1
                    
                    float xmm0_4 = _mm_cvtepi32_ps(zx.o(ecx_2))
                    int32_t ecx_3 = *(arg1 + 4)
                    float xmm1 = 1f / xmm0_4
                    int32_t eax_11 = *(arg1 + 0xc) + ecx_3
                    float xmm2_2 = _mm_cvtepi32_ps(zx.o(i_2 + result_1 + edx_1))
                    float xmm4_2 = _mm_cvtepi32_ps(zx.o(edi_1))
                    int32_t xmm3_2 = _mm_cvtepi32_ps(zx.o(eax_11))
                    sub_649080(eax_11, 0xffffffff, &result_2, _mm_cvtepi32_ps(zx.o(ecx_3)), xmm4_2, 
                        xmm3_2, xmm2_2, 0, xmm4_2 * xmm1, 0x3f800000, xmm2_2 * xmm1)
                    edx_1 = var_10
                    result = result_1
                    i_1 += 6
                
                ecx_1 = var_18_1
            
            i -= 1
            ecx_1 += 0xf
            result += 0x10
            var_18_1 = ecx_1
            edi_1 += 0x10
            result_1 = result
        while (i s> 0)
        
        if (edx_1 s> 0)
            void* eax_12 = *(arg1 + 0x10)
            int32_t ecx_5 = *(arg1 + 4)
            
            if (edx_1 s> eax_12)
                edx_1 = eax_12
            
            float xmm0_10 = _mm_cvtepi32_ps(zx.o(eax_12))
            int32_t eax_14 = *(arg1 + 0xc) + ecx_5
            float xmm3_4 = _mm_cvtepi32_ps(zx.o(edx_1))
            int32_t xmm3_6 = _mm_cvtepi32_ps(zx.o(eax_14))
            sub_649080(eax_14, 0xffffffff, &result_2, _mm_cvtepi32_ps(zx.o(ecx_5)), (zx.o(0)).d, 
                xmm3_6, xmm3_4, 0, 0, 0x3f800000, xmm3_4 / xmm0_10)
            i_1 += 6
        
        if (i_1 s< *(arg1 + 0x1c))
            result = result_2
            
            do
                *result = 0xc4800000
                i_1 += 1
                *(result + 4) = 0xc4800000
                *(result + 8) = 0x3f000000
                *(result + 0xc) = 0x3f800000
                *(result + 0x10) = 0xffffffff
                *(result + 0x14) = data_7fd504
                *(result + 0x18) = data_7fd508
                result += 0x1c
            while (i_1 s< *(arg1 + 0x1c))
        
        int32_t* ecx_7 = *(arg1 + 0x18)
        
        if (ecx_7 != 0 && (*(*ecx_7 + 0x1c))().b != 0)
            result.b = 1
            *var_20
            return result

result.b = 0
*var_20
return result
