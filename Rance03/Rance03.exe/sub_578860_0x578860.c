// 函数: sub_578860
// 地址: 0x578860
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* result = arg1

for (void* i = *result; i != result[1]; i += 0x18)
    void* ebx_1 = i + 0xc
    int64_t* edi_1 = *ebx_1
    int32_t eax
    int32_t edx_1
    edx_1:eax = muls.dp.d(0x2aaaaaab, *(i + 0x10) - edi_1)
    int32_t edx_2 = edx_1 s>> 1
    int32_t ebp_3 = (edx_2 u>> 0x1f) + edx_2
    
    if (ebp_3 s> 4)
        if (ebp_3 - 1 s> 0)
            int32_t j_4 = 1
            int32_t ebx_2 = 0
            int32_t j_7 = 1
            
            do
                int32_t j = j_4
                
                if (j_4 s< ebp_3)
                    int32_t ebp_4 = ebx_2 + 0xc
                    int32_t edx_5
                    
                    do
                        if (not(*(edi_1 + ebp_4 + 8) f<= *(edi_1 + ebx_2 + 8)))
                            int64_t xmm1_1 = *(edi_1 + ebx_2)
                            int32_t ecx_3 = *(edi_1 + ebx_2 + 8)
                            *(edi_1 + ebx_2) = *(edi_1 + ebp_4)
                            *(edi_1 + ebx_2 + 8) = *(edi_1 + ebp_4 + 8)
                            int64_t* eax_3 = *(i + 0xc)
                            *(eax_3 + ebx_2) = xmm1_1
                            *(eax_3 + ebx_2 + 8) = ecx_3
                        
                        edi_1 = *(i + 0xc)
                        int32_t eax_4
                        int32_t edx_4
                        edx_4:eax_4 = muls.dp.d(0x2aaaaaab, *(i + 0x10) - edi_1)
                        ebp_4 += 0xc
                        edx_5 = edx_4 s>> 1
                        j += 1
                    while (j s< (edx_5 u>> 0x1f) + edx_5)
                    j_4 = j_7
                
                edi_1 = *(i + 0xc)
                ebx_2 += 0xc
                j_7 = j_4 + 1
                int32_t eax_9
                int32_t edx_6
                edx_6:eax_9 = muls.dp.d(0x2aaaaaab, *(i + 0x10) - edi_1)
                int32_t edx_7 = edx_6 s>> 1
                ebp_3 = (edx_7 u>> 0x1f) + edx_7
                j_4 = j_7
            while (j_7 - 1 s< ebp_3 - 1)
            
            ebx_1 = i + 0xc
        
        sub_578af0(ebx_1, 4)
        int32_t edi_2 = *ebx_1
        int32_t xmm1_2 = (zx.o(0)).d
        int32_t eax_12
        int32_t edx_8
        edx_8:eax_12 = muls.dp.d(0x2aaaaaab, *(i + 0x10) - edi_2)
        int32_t edx_9 = edx_8 s>> 1
        int32_t ebp_9 = (edx_9 u>> 0x1f) + edx_9
        int32_t j_1 = 0
        
        if (ebp_9 s> 0)
            if (ebp_9 u>= 8)
                int32_t eax_14 = ebp_9 & 0x80000007
                
                if (eax_14 s< 0)
                    eax_14 = ((eax_14 - 1) | 0xfffffff8) + 1
                
                float xmm4_1[0x4] = zx.o(0)
                float xmm5_1[0x4] = zx.o(0)
                int32_t eax_17 = 0
                
                do
                    int64_t xmm2_1 = *(eax_17 + edi_2 + 0x2c)
                    j_1 += 8
                    float xmm1_3[0x4] = *(eax_17 + edi_2 + 0x14)
                    float xmm3_2[0x4] =
                        _mm_unpacklo_ps(*(eax_17 + edi_2 + 8), *(eax_17 + edi_2 + 0x20))
                    int64_t xmm0_4 = *(eax_17 + edi_2 + 0x50)
                    int64_t xmm1_4 = _mm_unpacklo_ps(xmm1_3, xmm2_1)
                    int64_t xmm2_2 = *(eax_17 + edi_2 + 0x5c)
                    float xmm3_3[0x4] = _mm_unpacklo_ps(xmm3_2, xmm1_4)
                    float xmm1_5[0x4] = *(eax_17 + edi_2 + 0x44)
                    xmm4_1 = _mm_add_ps(xmm4_1, xmm3_3)
                    float xmm3_4[0x4] = *(eax_17 + edi_2 + 0x38)
                    eax_17 += 0x60
                    xmm5_1 = _mm_add_ps(xmm5_1, 
                        _mm_unpacklo_ps(_mm_unpacklo_ps(xmm3_4, xmm0_4), 
                            _mm_unpacklo_ps(xmm1_5, xmm2_2)))
                while (j_1 s< ebp_9 - eax_14)
                
                float xmm4_2[0x4] = _mm_add_ps(xmm4_1, xmm5_1)
                float xmm1_8[0x4] = _mm_add_ps(xmm4_2 u>> 0x40, xmm4_2)
                xmm1_2 = xmm1_8 f+ _mm_shuffle_ps(xmm1_8, xmm1_8, 0xf5)
            
            if (j_1 s< ebp_9)
                if (ebp_9 - j_1 s>= 4)
                    int32_t eax_21 = j_1 * 0xc
                    int32_t j_5 = ((ebp_9 - j_1 - 4) u>> 2) + 1
                    j_1 += j_5 << 2
                    int32_t j_2
                    
                    do
                        xmm1_2 = xmm1_2 f+ *(eax_21 + edi_2 + 8) f+ *(eax_21 + edi_2 + 0x14) f+
                            *(eax_21 + edi_2 + 0x20) f+ *(eax_21 + edi_2 + 0x2c)
                        eax_21 += 0x30
                        j_2 = j_5
                        j_5 -= 1
                    while (j_2 != 1)
                
                if (j_1 s< ebp_9)
                    int32_t eax_23 = j_1 * 0xc
                    int32_t j_6 = ebp_9 - j_1
                    int32_t j_3
                    
                    do
                        xmm1_2 = xmm1_2 f+ *(eax_23 + edi_2 + 8)
                        eax_23 += 0xc
                        j_3 = j_6
                        j_6 -= 1
                    while (j_3 != 1)
        
        int32_t eax_24 = 0
        
        if (ebp_9 s> 0)
            int32_t ebp_10 = 0
            bool cond:1_1
            
            do
                ebp_10 += 0xc
                *(edi_2 + ebp_10 - 4) = 1f f/ xmm1_2 f* *(edi_2 + ebp_10 - 4)
                edi_2 = *ebx_1
                int32_t eax_26
                int32_t edx_10
                edx_10:eax_26 = muls.dp.d(0x2aaaaaab, *(i + 0x10) - edi_2)
                int32_t edx_11 = edx_10 s>> 1
                cond:1_1 = eax_24 + 1 s< (edx_11 u>> 0x1f) + edx_11
                eax_24 += 1
            while (cond:1_1)
    
    result = arg1

return result
