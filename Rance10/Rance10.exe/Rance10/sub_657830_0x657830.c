// 函数: sub_657830
// 地址: 0x657830
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* ebx = arg1
int32_t i = 0
void* result = ebx[0x6d]
int32_t esi = 0
int32_t (* edi)(void* arg1, void* arg2, int16_t* arg3, int32_t* arg4, char* arg5) = nullptr
int32_t i_1 = 0

if (ebx[9] s> 0)
    double xmm3_1 = 1.3870398450000001
    int32_t* ebp_1 = ebx[0x31] + 0x28
    double xmm4_1 = 1.3065629649999999
    double xmm5_1 = 1.1758756020000001
    double xmm6_1 = 0.785694958
    double xmm7_1 = 0.54119609999999996
    double xmm2_1 = 0.125
    int32_t* var_4_1 = ebp_1
    void* result_1 = result + 0x2c
    
    do
        int32_t eax_3 = (ebp_1[-1] << 8) + *ebp_1
        
        if (eax_3 s> 0x70e)
            if (eax_3 s> 0xc06)
                if (eax_3 s> 0xe0e)
                    if (eax_3 == 0xf0f)
                        edi = sub_6727a0
                        esi = 0
                    else if (eax_3 == 0x1008)
                        edi = sub_6734e0
                        esi = 0
                    else if (eax_3 == 0x1010)
                        edi = sub_672dd0
                        esi = 0
                    else
                    label_657b18:
                        *(*ebx + 0x14) = 7
                        *(*ebx + 0x18) = ebp_1[-1]
                        *(*ebx + 0x1c) = *ebp_1
                    label_657b34:
                        (**ebx)(ebx)
                        xmm2_1 = 0.125
                        xmm3_1 = 1.3870398450000001
                        xmm4_1 = 1.3065629649999999
                        xmm5_1 = 1.1758756020000001
                        xmm6_1 = 0.785694958
                        xmm7_1 = 0.54119609999999996
                        i = i_1
                else if (eax_3 == 0xe0e)
                    edi = sub_6721a0
                    esi = 0
                else if (eax_3 == 0xc0c)
                    edi = sub_6716a0
                    esi = 0
                else if (eax_3 == 0xd0d)
                    edi = sub_671ba0
                    esi = 0
                else
                    if (eax_3 != 0xe07)
                        goto label_657b18
                    
                    edi = sub_673ad0
                    esi = 0
            else if (eax_3 == 0xc06)
                edi = sub_674970
                esi = 0
            else if (eax_3 s> 0x909)
                if (eax_3 == 0xa05)
                    edi = sub_675350
                    esi = 0
                else if (eax_3 == 0xa0a)
                    edi = sub_670cf0
                    esi = 0
                else
                    if (eax_3 != 0xb0b)
                        goto label_657b18
                    
                    edi = sub_671150
                    esi = 0
            else if (eax_3 == 0x909)
                edi = sub_670910
                esi = 0
            else if (eax_3 == 0x804)
                edi = sub_675be0
                esi = 0
            else if (eax_3 == 0x808)
                int32_t eax_18 = ebx[0x11]
                
                if (eax_18 == 0)
                    edi = sub_66d600
                    esi = 0
                else if (eax_18 == 1)
                    edi = sub_66d1f0
                    esi = 1
                else
                    if (eax_18 != 2)
                        *(*ebx + 0x14) = 0x31
                        goto label_657b34
                    
                    edi = sub_66cd70
                    esi = 2
            else
                if (eax_3 != 0x810)
                    goto label_657b18
                
                edi = sub_6768b0
                esi = 0
        else if (eax_3 == 0x70e)
            edi = sub_676e00
            esi = 0
        else if (eax_3 s> 0x404)
            if (eax_3 s> 0x603)
                if (eax_3 == 0x606)
                    edi = sub_66eed0
                    esi = 0
                else if (eax_3 == 0x60c)
                    edi = sub_6772b0
                    esi = 0
                else
                    if (eax_3 != 0x707)
                        goto label_657b18
                    
                    edi = sub_66dab0
                    esi = 0
            else if (eax_3 == 0x603)
                edi = sub_6761a0
                esi = 0
            else if (eax_3 == 0x408)
                edi = sub_678100
                esi = 0
            else if (eax_3 == 0x505)
                edi = sub_66f9f0
                esi = 0
            else
                if (eax_3 != 0x50a)
                    goto label_657b18
                
                edi = sub_677670
                esi = 0
        else if (eax_3 == 0x404)
            edi = sub_670170
            esi = 0
        else if (eax_3 s> 0x204)
            if (eax_3 == 0x303)
                edi = sub_6705c0
                esi = 0
            else if (eax_3 == 0x306)
                edi = sub_678820
                esi = 0
            else
                if (eax_3 != 0x402)
                    goto label_657b18
                
                edi = sub_676680
                esi = 0
        else if (eax_3 == 0x204)
            edi = sub_678d20
            esi = 0
        else if (eax_3 s> 0x201)
            if (eax_3 != 0x202)
                goto label_657b18
            
            edi = sub_670800
            esi = 0
        else if (eax_3 == 0x201)
            edi = sub_676840
            esi = 0
        else if (eax_3 == 0x101)
            edi = sub_6708c0
            esi = 0
        else
            if (eax_3 != 0x102)
                goto label_657b18
            
            edi = sub_678f10
            esi = 0
        
        int32_t* result_2 = result_1
        result_2[-0xa] = edi
        
        if (ebp_1[3].b != 0 && *result_2 != esi)
            void* edx_1 = ebp_1[0xa]
            
            if (edx_1 != 0)
                *result_2 = esi
                
                if (esi == 0)
                    int32_t ebx_1 = ebp_1[0xb]
                    
                    for (int32_t j = 0; j s< 0x40; j += 1)
                        *(ebx_1 + (j << 2)) = zx.d(*(edx_1 + (j << 1)))
                    
                    ebx = arg1
                else if (esi == 1)
                    void* ebp_2 = ebp_1[0xb]
                    int32_t j_1
                    
                    if (data_7fc25c s>= 2)
                        j_1 = 0
                    
                    if (data_7fc25c s>= 2 && (ebp_2 u> 0x76e236 || ebp_2 + 0xfc u< &data_76e1b8)
                            && (ebp_2 u> edx_1 + 0x7e || ebp_2 + 0xfc u< edx_1))
                        int32_t xmm2_2[0x4] = data_79a8e0
                        uint128_t xmm3_2 = 0xc
                        int32_t eax_53 = neg.d(edx_1)
                        
                        do
                            int16_t xmm0_47[0x4] = *(eax_53 + edx_1 + &data_76e1b8)
                            edx_1 += 0x10
                            int32_t xmm1_2[0x4] = _mm_cvtepi16_epi32(xmm0_47)
                            *(ebp_2 + (j_1 << 2)) = _mm_sra_epi32(
                                _mm_add_epi32(
                                    _mm_mullo_epi32(_mm_cvtepu16_epi32(*(edx_1 - 0x10)), xmm1_2), 
                                    xmm2_2), 
                                xmm3_2)
                            int32_t xmm1_3[0x4] = _mm_cvtepi16_epi32(*(eax_53 + edx_1 + 0x76e1b0))
                            *(ebp_2 + (j_1 << 2) + 0x10) = _mm_sra_epi32(
                                _mm_add_epi32(
                                    _mm_mullo_epi32(_mm_cvtepu16_epi32(*(edx_1 - 8)), xmm1_3), 
                                    xmm2_2), 
                                xmm3_2)
                            j_1 += 8
                        while (j_1 s< 0x40)
                        
                        ebp_1 = var_4_1
                    else
                        for (void* const j_2 = &data_76e1b8; j_2 s< 0x76e238; )
                            uint32_t ecx_4 = zx.d(*(edx_1 - &data_76e1b8 + j_2))
                            ebp_2 += 4
                            int32_t eax_54 = sx.d(*j_2)
                            j_2 += 2
                            *(ebp_2 - 4) = (ecx_4 * eax_54 + 0x800) s>> 0xc
                        
                        ebp_1 = var_4_1
                        ebx = arg1
                else if (esi == 2)
                    void* const j_3 = &data_76e178
                    void* ecx_3 = ebp_1[0xb] + 8
                    void* edx_2 = edx_1 + 4
                    
                    do
                        uint32_t eax_41 = zx.d(*(edx_2 - 4))
                        edx_2 += 0x10
                        double xmm1_1 = *j_3
                        ecx_3 += 0x20
                        j_3 += 8
                        *(ecx_3 - 0x28) =
                            _mm_cvtpd_ps(_mm_cvtepi32_pd(zx.q(eax_41)) * xmm1_1 * xmm2_1)
                        *(ecx_3 - 0x24) = _mm_cvtpd_ps(_mm_cvtepi32_pd(zx.q(*(edx_2 - 0x12)))
                            * xmm1_1 * xmm3_1 * xmm2_1)
                        *(ecx_3 - 0x20) = _mm_cvtpd_ps(_mm_cvtepi32_pd(zx.q(*(edx_2 - 0x10)))
                            * xmm1_1 * xmm4_1 * xmm2_1)
                        *(ecx_3 - 0x1c) = _mm_cvtpd_ps(_mm_cvtepi32_pd(zx.q(*(edx_2 - 0xe)))
                            * xmm1_1 * xmm5_1 * xmm2_1)
                        *(ecx_3 - 0x18) =
                            _mm_cvtpd_ps(_mm_cvtepi32_pd(zx.q(*(edx_2 - 0xc))) * xmm1_1 * xmm2_1)
                        *(ecx_3 - 0x14) = _mm_cvtpd_ps(_mm_cvtepi32_pd(zx.q(*(edx_2 - 0xa)))
                            * xmm1_1 * xmm6_1 * xmm2_1)
                        *(ecx_3 - 0x10) = _mm_cvtpd_ps(_mm_cvtepi32_pd(zx.q(*(edx_2 - 8))) * xmm1_1
                            * xmm7_1 * xmm2_1)
                        *(ecx_3 - 0xc) = _mm_cvtpd_ps(_mm_cvtepi32_pd(zx.q(*(edx_2 - 6))) * xmm1_1
                            * 0.275899379 * xmm2_1)
                    while (j_3 s< &data_76e1b8)
                    
                    ebp_1 = var_4_1
                else
                    *(*ebx + 0x14) = 0x31
                    (**ebx)(ebx)
                
                result_2 = result_1
                i = i_1
        
        xmm2_1 = 0.125
        i += 1
        xmm3_1 = 1.3870398450000001
        result = &result_2[1]
        xmm4_1 = 1.3065629649999999
        ebp_1 = &ebp_1[0x16]
        xmm5_1 = 1.1758756020000001
        xmm6_1 = 0.785694958
        xmm7_1 = 0.54119609999999996
        i_1 = i
        result_1 = result
        var_4_1 = ebp_1
    while (i s< ebx[9])

return result
