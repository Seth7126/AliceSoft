// 函数: sub_6be200
// 地址: 0x6be200
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* edi = *arg2
int32_t* var_2c = edi
int32_t eax_1 = edi[3]
int32_t ebp = edi[2]
int32_t temp0 = divs.dp.d(sx.q(edi[1] - *edi), ebp)
int32_t result = sub_6b3050(arg3, arg5 << 2)
int32_t ebx = 0
float xmm5 = _mm_cvtpd_ps(100.0 / _mm_cvtepi32_pd(zx.q(ebp)))

if (arg5 s> 0)
    void* edi_2 = ((temp0 << 2) + 7) & 0xfffffff8
    
    do
        if (*(arg3 + 0x48) + edi_2 s> *(arg3 + 0x4c))
            if (*(arg3 + 0x44) != 0)
                int32_t var_40_1 = 8
                int32_t* eax_10 = sub_705e22()
                *(arg3 + 0x50) += *(arg3 + 0x48)
                eax_10[1] = *(arg3 + 0x54)
                *eax_10 = *(arg3 + 0x44)
                *(arg3 + 0x54) = eax_10
            
            void* var_40_2 = edi_2
            *(arg3 + 0x4c) = edi_2
            *(arg3 + 0x44) = sub_705e22()
            *(arg3 + 0x48) = 0
        
        void* eax_12 = *(arg3 + 0x48)
        uint32_t (* ecx_4)[0x4] = *(arg3 + 0x44) + eax_12
        *(arg3 + 0x48) = eax_12 + edi_2
        *(result + (ebx << 2)) = ecx_4
        _memset(ecx_4, 0, temp0 << 2)
        ebx += 1
    while (ebx s< arg5)
    
    edi = var_2c

int32_t ecx_5 = 0
int32_t var_28 = 0

if (temp0 s> 0)
    int32_t* esi_1 = arg4
    int32_t edx_3 = 0
    int32_t i_2 = arg5
    int32_t var_10_1 = 0
    
    do
        int32_t eax_16 = *edi + edx_3
        
        if (i_2 s> 0)
            int32_t* edi_3 = esi_1
            int32_t* var_18_1 = edi_3
            int32_t i_1 = i_2
            int32_t i
            
            do
                int32_t esi_4 = 0
                int32_t ebx_1 = 0
                int32_t j = 0
                
                if (ebp s> 0)
                    if (ebp u>= 8 && data_7fc25c s>= 2)
                        int32_t eax_20 = ebp & 0x80000007
                        
                        if (eax_20 s< 0)
                            eax_20 = ((eax_20 - 1) | 0xfffffff8) + 1
                        
                        int32_t xmm1_2[0x4] = zx.o(0)
                        int32_t xmm4_1[0x4] = zx.o(0)
                        int32_t xmm2_1[0x4] = zx.o(0)
                        int32_t xmm3_1[0x4] = zx.o(0)
                        void* eax_25 = *edi_3 + ((eax_16 + 4) << 2)
                        
                        do
                            int32_t xmm0_2[0x4] = *(eax_25 - 0x10)
                            j += 8
                            eax_25 += 0x20
                            int32_t xmm0_3[0x4] = _mm_abs_epi32(xmm0_2)
                            xmm4_1 = _mm_add_epi32(xmm4_1, xmm0_3)
                            xmm1_2 = _mm_max_epi32(xmm1_2, xmm0_3)
                            int32_t xmm0_5[0x4] = _mm_abs_epi32(*(eax_25 - 0x20))
                            xmm3_1 = _mm_add_epi32(xmm3_1, xmm0_5)
                            xmm2_1 = _mm_max_epi32(xmm2_1, xmm0_5)
                        while (j s< ebp - eax_20)
                        
                        int32_t xmm3_2[0x4] = _mm_add_epi32(xmm3_1, xmm4_1)
                        int32_t xmm3_3[0x4] = _mm_add_epi32(xmm3_2, _mm_bsrli_si128(xmm3_2, 8))
                        int32_t xmm3_4 = _mm_add_epi32(xmm3_3, _mm_bsrli_si128(xmm3_3, 4))
                        int32_t xmm1_3[0x4] = _mm_max_epi32(xmm1_2, xmm2_1)
                        ebx_1 = xmm3_4
                        int32_t xmm1_4[0x4] = _mm_max_epi32(xmm1_3, _mm_bsrli_si128(xmm1_3, 8))
                        esi_4 = _mm_max_epi32(xmm1_4, _mm_bsrli_si128(xmm1_4, 4))
                    
                    if (j s< ebp)
                        int32_t j_3 = ebp - j
                        int32_t* ecx_8 = *edi_3 + ((eax_16 + j) << 2)
                        int32_t j_1
                        
                        do
                            int32_t eax_28 = *ecx_8
                            ecx_8 = &ecx_8[1]
                            int32_t eax_29
                            int32_t edx_4
                            edx_4:eax_29 = sx.q(eax_28)
                            int32_t eax_31 = (eax_29 ^ edx_4) - edx_4
                            
                            if (eax_31 s> esi_4)
                                esi_4 = eax_31
                            
                            ebx_1 += eax_31
                            j_1 = j_3
                            j_3 -= 1
                        while (j_1 != 1)
                
                int32_t j_2 = 0
                int32_t edi_5 = int.d(_mm_cvtepi32_ps(zx.o(ebx_1)) * xmm5)
                
                if (eax_1 - 1 s> 0)
                    void* eax_33 = &var_2c[0x286]
                    
                    do
                        if (esi_4 s<= *(eax_33 - 0x100))
                            int32_t edx_5 = *eax_33
                            
                            if (edx_5 s< 0)
                                break
                            
                            if (edi_5 s< edx_5)
                                break
                        
                        j_2 += 1
                        eax_33 += 4
                    while (j_2 s< eax_1 - 1)
                
                int32_t eax_35 = *(result - esi_1 + var_18_1)
                edi_3 = &var_18_1[1]
                i = i_1
                i_1 -= 1
                var_18_1 = edi_3
                *(eax_35 + (var_28 << 2)) = j_2
            while (i != 1)
            edi = var_2c
            ecx_5 = var_28
            edx_3 = var_10_1
            i_2 = arg5
            esi_1 = arg4
        
        ecx_5 += 1
        edx_3 += ebp
        var_28 = ecx_5
        var_10_1 = edx_3
    while (ecx_5 s< temp0)

arg2[0xa] += 1
return result
