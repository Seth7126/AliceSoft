// 函数: sub_645250
// 地址: 0x645250
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ebp
int32_t var_4 = ebp
int32_t* var_28 = &var_4
int32_t i_1 = 0
int32_t* ecx = *(arg1 + 0x18)
int32_t eax_5 =
    ((int.d(_mm_cvtepi32_ps(zx.o(*(arg1 + 0xc) + 0xe0)) * arg2) + 0xf) & 0xfffffff0) - 0xe0
void* ebp_4 =
    ((int.d(_mm_cvtepi32_ps(zx.o(*(arg1 + 0x10) + 0xe0)) * arg2) + 0xf) & 0xfffffff0) - 0xe0
void* var_10 = ebp_4
void* result

if (ecx != 0)
    result = (*(*ecx + 0x18))()
    void* result_2 = result
    
    if (result != 0)
        void* i = 0xf
        void* edx_1 = nullptr
        void* var_20_1 = nullptr
        void* result_1 = ebp_4 + 0xf
        void* ecx_3 = eax_5 - ebp_4
        result = result_1
        void* var_c_1 = ecx_3
        
        do
            if (ecx_3 + ebp_4 s>= 0 && ecx_3 + ebp_4 s< *(arg1 + 0xc))
                void* i_3 = i
                
                if (result + var_c_1 s> *(arg1 + 0xc))
                    i_3 = *(arg1 + 0xc) - var_20_1 - eax_5
                
                float xmm0_7 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0xc)))
                int32_t ecx_7 = *(arg1 + 8)
                float xmm1 = 1f / xmm0_7
                float xmm3_2 = _mm_cvtepi32_ps(zx.o(var_20_1 + i_3 + eax_5))
                int32_t eax_15 = *(arg1 + 0x10) + ecx_7
                float xmm4_2 = _mm_cvtepi32_ps(zx.o(var_c_1 + ebp_4))
                sub_649080(eax_15, 0xffffffff, &result_2, xmm4_2, _mm_cvtepi32_ps(zx.o(ecx_7)), 
                    xmm3_2, _mm_cvtepi32_ps(zx.o(eax_15)), xmm4_2 * xmm1, 0, xmm3_2 * xmm1, 
                    0x3f800000)
                i_1 += 6
                
                if (ebp_4 s>= 0)
                    int32_t edx_3 = *(arg1 + 0x10)
                    
                    if (ebp_4 s< edx_3)
                        void* i_2 = i
                        
                        if (result_1 s> edx_3)
                            i_2 = edx_3 - var_20_1 - var_10
                        
                        float xmm0_15 = _mm_cvtepi32_ps(zx.o(edx_3))
                        int32_t ecx_10 = *(arg1 + 4)
                        float xmm1_2 = 1f / xmm0_15
                        int32_t eax_21 = *(arg1 + 0xc) + ecx_10
                        float xmm3_4 = _mm_cvtepi32_ps(zx.o(i_2 + var_20_1 + var_10))
                        float xmm2_4 = _mm_cvtepi32_ps(zx.o(ebp_4))
                        sub_649080(eax_21, 0xffffffff, &result_2, _mm_cvtepi32_ps(zx.o(ecx_10)), 
                            xmm2_4, _mm_cvtepi32_ps(zx.o(eax_21)), xmm3_4, 0, xmm2_4 * xmm1_2, 
                            0x3f800000, xmm3_4 * xmm1_2)
                        i_1 += 6
                
                edx_1 = var_20_1
                result = result_1
            
            ecx_3 = var_c_1
            i -= 1
            result += 0xf
            edx_1 += 0x10
            ebp_4 += 0x10
            result_1 = result
            var_20_1 = edx_1
        while (i s> 0)
        
        int32_t ecx_12 = eax_5
        
        if (ecx_12 s> 0)
            int32_t eax_22 = *(arg1 + 0xc)
            
            if (ecx_12 s> eax_22)
                ecx_12 = eax_22
            
            int32_t ecx_13 = *(arg1 + 8)
            int32_t eax_24 = *(arg1 + 0x10) + ecx_13
            float xmm3_8 = _mm_cvtepi32_ps(zx.o(ecx_12))
            float xmm1_6 = xmm3_8 / _mm_cvtepi32_ps(zx.o(eax_22))
            int32_t xmm0_23 = _mm_cvtepi32_ps(zx.o(eax_24))
            sub_649080(eax_24, 0xffffffff, &result_2, (zx.o(0)).d, _mm_cvtepi32_ps(zx.o(ecx_13)), 
                xmm3_8, xmm0_23, 0, 0, xmm1_6, 0x3f800000)
            i_1 += 6
        
        void* ecx_15 = var_10
        
        if (ecx_15 s> 0)
            void* eax_25 = *(arg1 + 0x10)
            
            if (ecx_15 s> eax_25)
                ecx_15 = eax_25
            
            float xmm0_25 = _mm_cvtepi32_ps(zx.o(eax_25))
            int32_t eax_26 = *(arg1 + 0xc)
            float xmm3_10 = _mm_cvtepi32_ps(zx.o(ecx_15))
            int32_t ecx_16 = *(arg1 + 4)
            int32_t eax_27 = eax_26 + ecx_16
            int32_t xmm3_12 = _mm_cvtepi32_ps(zx.o(eax_27))
            sub_649080(eax_27, 0xffffffff, &result_2, _mm_cvtepi32_ps(zx.o(ecx_16)), (zx.o(0)).d, 
                xmm3_12, xmm3_10, 0, 0, 0x3f800000, xmm3_10 / xmm0_25)
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
        
        int32_t* ecx_18 = *(arg1 + 0x18)
        
        if (ecx_18 != 0 && (*(*ecx_18 + 0x1c))().b != 0)
            result.b = 1
            *var_28
            return result

result.b = 0
*var_28
return result
