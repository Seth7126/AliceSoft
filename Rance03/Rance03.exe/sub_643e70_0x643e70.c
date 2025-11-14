// 函数: sub_643e70
// 地址: 0x643e70
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t i_3 = arg5
int32_t i_5 = 0

if (i_3 s> 0)
    int32_t* ecx_1 = arg3
    int32_t i
    
    do
        if (*(arg4 - arg3 + ecx_1) != 0)
            arg3[i_5] = *ecx_1
            i_5 += 1
        
        ecx_1 = &ecx_1[1]
        i = i_3
        i_3 -= 1
    while (i != 1)
    
    if (i_5 != 0)
        void* ebx_1 = ((i_5 << 2) + 7) & 0xfffffff8
        int32_t* ecx_3 = *arg2
        int32_t ebp = *(arg1 + 0x48)
        int32_t eax_2 = ecx_3[3]
        int32_t edi_2 = ecx_3[2]
        int32_t var_24 = edi_2
        int32_t edx_1 = divs.dp.d(sx.q(ecx_3[1] - *ecx_3), edi_2)
        arg5 = edx_1
        
        if (ebx_1 + ebp s> *(arg1 + 0x4c))
            if (*(arg1 + 0x44) != 0)
                int32_t* eax_7 = _malloc(8)
                int32_t ecx_5 = *(arg1 + 0x54)
                *(arg1 + 0x50) += ebp
                eax_7[1] = ecx_5
                *eax_7 = *(arg1 + 0x44)
                *(arg1 + 0x54) = eax_7
            
            *(arg1 + 0x4c) = ebx_1
            edx_1 = arg5
            *(arg1 + 0x44) = _malloc(ebx_1)
            *(arg1 + 0x48) = 0
        
        double xmm0_1 = _mm_cvtepi32_pd(zx.q(edi_2))
        void* eax_9 = *(arg1 + 0x48)
        void* result = *(arg1 + 0x44) + eax_9
        int32_t ebx_2 = 0
        int32_t i_4 = i_5
        *(arg1 + 0x48) = eax_9 + ebx_1
        float xmm5 = _mm_cvtpd_ps(100.0 / xmm0_1)
        
        if (i_4 s> 0)
            uint32_t edi_5 = ((edx_1 << 2) + 7) & 0xfffffff8
            
            do
                int32_t ebp_1 = *(arg1 + 0x48)
                
                if (edi_5 + ebp_1 s> *(arg1 + 0x4c))
                    if (*(arg1 + 0x44) != 0)
                        int32_t* eax_12 = _malloc(8)
                        int32_t ecx_8 = *(arg1 + 0x54)
                        *(arg1 + 0x50) += ebp_1
                        eax_12[1] = ecx_8
                        *eax_12 = *(arg1 + 0x44)
                        *(arg1 + 0x54) = eax_12
                    
                    *(arg1 + 0x4c) = edi_5
                    edx_1 = arg5
                    *(arg1 + 0x44) = _malloc(edi_5)
                    *(arg1 + 0x48) = 0
                
                int32_t eax_14 = *(arg1 + 0x48)
                char* ecx_11 = *(arg1 + 0x44) + eax_14
                *(arg1 + 0x48) = eax_14 + edi_5
                *(result + (ebx_2 << 2)) = ecx_11
                _memset(ecx_11, 0, edx_1 << 2)
                i_4 = i_5
                ebx_2 += 1
                edx_1 = arg5
            while (ebx_2 s< i_4)
            
            edi_2 = var_24
        
        int32_t edx_2 = 0
        int32_t var_1c = 0
        
        if (arg5 s> 0)
            int32_t* esi_4 = ecx_3
            int32_t ebx_3 = 0
            int32_t var_10_1 = 0
            
            do
                int32_t eax_19 = *esi_4 + ebx_3
                int32_t var_28_1 = eax_19
                
                if (i_4 s> 0)
                    int32_t* esi_5 = arg3
                    int32_t ebp_3 = eax_2 - 1
                    int32_t* edx_4 = result - esi_5
                    int32_t var_8_1 = ebp_3
                    int32_t* var_2c_1 = esi_5
                    int32_t i_2 = i_4
                    int32_t i_1
                    
                    do
                        int32_t ecx_14 = 0
                        int32_t ebx_4 = 0
                        int32_t j = 0
                        
                        if (edi_2 s> 0)
                            if (edi_2 u>= 8 && data_75c958 s>= 2)
                                int32_t esi_6 = *esi_5
                                int32_t eax_21 = edi_2 & 0x80000007
                                
                                if (eax_21 s< 0)
                                    eax_21 = ((eax_21 - 1) | 0xfffffff8) + 1
                                
                                int32_t xmm1_2[0x4] = zx.o(0)
                                int32_t xmm4_1[0x4] = zx.o(0)
                                int32_t xmm2_1[0x4] = zx.o(0)
                                int32_t xmm3_1[0x4] = zx.o(0)
                                void* eax_25 = (var_28_1 << 2) + 0x10
                                
                                do
                                    int32_t xmm0_2[0x4] = *(eax_25 + esi_6 - 0x10)
                                    j += 8
                                    eax_25 += 0x20
                                    int32_t xmm0_3[0x4] = _mm_abs_epi32(xmm0_2)
                                    xmm4_1 = _mm_add_epi32(xmm4_1, xmm0_3)
                                    xmm1_2 = _mm_max_epi32(xmm1_2, xmm0_3)
                                    int32_t xmm0_5[0x4] = _mm_abs_epi32(*(eax_25 + esi_6 - 0x20))
                                    xmm3_1 = _mm_add_epi32(xmm3_1, xmm0_5)
                                    xmm2_1 = _mm_max_epi32(xmm2_1, xmm0_5)
                                while (j s< edi_2 - eax_21)
                                
                                esi_5 = var_2c_1
                                int32_t xmm3_2[0x4] = _mm_add_epi32(xmm3_1, xmm4_1)
                                eax_19 = var_28_1
                                int32_t xmm3_3[0x4] =
                                    _mm_add_epi32(xmm3_2, _mm_bsrli_si128(xmm3_2, 8))
                                int32_t xmm3_4 = _mm_add_epi32(xmm3_3, _mm_bsrli_si128(xmm3_3, 4))
                                int32_t xmm1_3[0x4] = _mm_max_epi32(xmm1_2, xmm2_1)
                                ebx_4 = xmm3_4
                                int32_t xmm1_4[0x4] =
                                    _mm_max_epi32(xmm1_3, _mm_bsrli_si128(xmm1_3, 8))
                                ecx_14 = _mm_max_epi32(xmm1_4, _mm_bsrli_si128(xmm1_4, 4))
                            
                            if (j s< edi_2)
                                int32_t esi_8 = (j + eax_19) << 2
                                int32_t j_2 = edi_2 - j
                                int32_t j_1
                                
                                do
                                    int32_t eax_26 = *(esi_8 + *esi_5)
                                    esi_8 += 4
                                    int32_t eax_27
                                    int32_t edx_5
                                    edx_5:eax_27 = sx.q(eax_26)
                                    int32_t eax_29 = (eax_27 ^ edx_5) - edx_5
                                    
                                    if (eax_29 s> ecx_14)
                                        ecx_14 = eax_29
                                    
                                    ebx_4 += eax_29
                                    j_1 = j_2
                                    j_2 -= 1
                                while (j_1 != 1)
                                ebp_3 = var_8_1
                        
                        int32_t edx_6 = 0
                        int32_t edi_6 = int.d(_mm_cvtepi32_ps(zx.o(ebx_4)) * xmm5)
                        
                        if (ebp_3 s> 0)
                            void* eax_31 = &ecx_3[0x286]
                            
                            do
                                if (ecx_14 s<= *(eax_31 - 0x100))
                                    int32_t esi_9 = *eax_31
                                    
                                    if (esi_9 s< 0)
                                        break
                                    
                                    if (edi_6 s< esi_9)
                                        break
                                
                                edx_6 += 1
                                eax_31 += 4
                            while (edx_6 s< ebp_3)
                        
                        edi_2 = var_24
                        int32_t eax_33 = *(edx_4 + var_2c_1)
                        esi_5 = &var_2c_1[1]
                        i_1 = i_2
                        i_2 -= 1
                        var_2c_1 = esi_5
                        *(eax_33 + (var_1c << 2)) = edx_6
                        eax_19 = var_28_1
                    while (i_1 != 1)
                    i_4 = i_5
                    edx_2 = var_1c
                    esi_4 = ecx_3
                    ebx_3 = var_10_1
                
                edx_2 += 1
                ebx_3 += edi_2
                var_1c = edx_2
                var_10_1 = ebx_3
            while (edx_2 s< arg5)
        
        arg2[0xa] += 1
        return result

return 0
