// 函数: sub_648260
// 地址: 0x648260
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* i = arg1
void* var_34
void* edi = var_34
int32_t* i_2 = i
uint32_t result

while (true)
    if (i[0x16] == 3)
        result = sub_648030(i)
        
        if (result s< 0)
            break
    
    int32_t var_30
    
    if (i[0x16] == 4)
        result = *(*(i[0x12] + 0x1c) + 0xe48)
        char var_44_1 = result.b
        
        while (i != 0xffffff88)
            if (i[0x1e] == 0)
                break
            
            void var_24
            result = sub_63d660(result, &var_24, &i[0x1e], 1)
            
            if (result == 0xffffffff)
                return 0xfffffffd
            
            if (result s<= 0)
                break
            
            void* var_14
            void* ebp_1 = var_14
            result = sub_646c40(&i[0x94], &var_24)
            
            if (result == 0)
                int32_t ecx_3 = i[0x7e]
                
                if (ecx_3 s> 0xffffffff)
                    int32_t eax_2 = i[0x7d]
                    
                    if (ecx_3 s< eax_2 && eax_2 != ecx_3)
                        return 0xffffff7f
                
                sub_638a50(&i[0x78], &i[0x94])
                int32_t ecx_22 = i[0x7e]
                int32_t eax_15
                
                if (ecx_22 s> 0xffffffff)
                    eax_15 = i[0x7d]
                
                int32_t eax_16
                
                if (ecx_22 s<= 0xffffffff || ecx_22 s>= eax_15)
                    eax_16 = 0
                else
                    eax_16 = eax_15 - ecx_22
                
                int32_t var_10
                int32_t edi_1 = var_10
                *(i + 0x70) = _mm_cvtepi32_pd(zx.q(eax_16 << var_44_1)) f+ *(i + 0x70)
                int32_t var_20
                *(i + 0x68) = _mm_cvtepi32_pd(zx.q(var_20 << 3)) f+ *(i + 0x68)
                int32_t var_18
                
                if ((ebp_1 & edi_1) != 0xffffffff && var_18 == 0)
                    int32_t ecx_24 = i[1]
                    int32_t eax_22
                    
                    if (ecx_24 == 0)
                        eax_22 = 0
                    else
                        eax_22 = i[0x18]
                    
                    if (ecx_24 != 0 && eax_22 s> 0)
                        int32_t eax_23 = i[0x11]
                        int32_t ecx_26 = eax_22 << 4
                        void* temp3_1 = ebp_1
                        ebp_1 -= *(ecx_26 + eax_23)
                        edi_1 = sbb.d(edi_1, *(ecx_26 + eax_23 + 4), temp3_1 u< *(ecx_26 + eax_23))
                    
                    if (edi_1 s<= 0 && (edi_1 s< 0 || ebp_1 u< 0))
                        var_34.q = 0
                        edi_1 = var_30
                        ebp_1 = var_34
                    
                    int32_t ecx_27 = i[0x7e]
                    int32_t eax_24
                    
                    if (ecx_27 s> 0xffffffff)
                        eax_24 = i[0x7d]
                    
                    int32_t eax_25
                    
                    if (ecx_27 s<= 0xffffffff || ecx_27 s>= eax_24)
                        eax_25 = 0
                    else
                        eax_25 = eax_24 - ecx_27
                    
                    int32_t var_50_1 = 0
                    int32_t eax_27
                    int32_t edx_16
                    edx_16:eax_27 = sx.q(eax_25 << var_44_1)
                    void* ebp_2 = ebp_1 - eax_27
                    var_34.q = 0
                    int32_t var_3c_1 = 0
                    int32_t edi_2 = sbb.d(edi_1, edx_16, ebp_1 u< eax_27)
                    void* edx_17 = var_34
                    int32_t var_44_2
                    int32_t ecx_31
                    int32_t ebx_6
                    
                    if (eax_22 s< 2)
                        ebx_6 = 0
                        ecx_31 = var_30
                        var_44_2 = 0
                    else
                        int32_t esi = 0
                        void* eax_29 = i[0x11] + 0x18
                        int32_t ebp_3 = 0
                        int32_t j_1 = ((eax_22 - 2) u>> 1) + 1
                        var_50_1 = j_1 * 2
                        ecx_31 = var_30
                        int32_t j
                        
                        do
                            int32_t temp6_1 = ebp_3
                            ebp_3 += *(eax_29 - 0x10)
                            esi = adc.d(esi, *(eax_29 - 0xc), temp6_1 + *(eax_29 - 0x10) u< temp6_1)
                            void* temp8_1 = edx_17
                            edx_17 += *eax_29
                            ecx_31 = adc.d(ecx_31, *(eax_29 + 4), temp8_1 + *eax_29 u< temp8_1)
                            eax_29 += 0x20
                            j = j_1
                            j_1 -= 1
                        while (j != 1)
                        i = i_2
                        ebx_6 = esi
                        var_44_2 = ebp_3
                    
                    if (var_50_1 s< eax_22)
                        int32_t eax_31 = var_50_1 << 4
                        int32_t eax_32 = i[0x11]
                        void* temp14_1 = ebp_2
                        ebp_2 += *(eax_31 + eax_32 + 8)
                        edi_2 = adc.d(edi_2, *(eax_31 + eax_32 + 0xc), 
                            temp14_1 + *(eax_31 + eax_32 + 8) u< temp14_1)
                        i = i_2
                    
                    void* edx_18 = edx_17 + var_44_2
                    i[0x14] = edx_18 + ebp_2
                    i[0x15] = adc.d(adc.d(ecx_31, ebx_6, edx_17 + var_44_2 u< edx_17), edi_2, 
                        edx_18 + ebp_2 u< edx_18)
                
                return 1
    
    if (i[0x16] s>= 2)
        while (true)
            int32_t eax_5
            int32_t edx_4
            eax_5, edx_4 = sub_647050(result, &var_34, i, 0xffffffff, 0xffffffff)
            
            if (edx_4 s< 0)
                return 0xfffffffe
            
            if (edx_4 s<= 0 && eax_5 u< 0)
                return 0xfffffffe
            
            edi = var_34
            bool cond:1_1 = i[0x16] != 4
            *(i + 0x68) = _mm_cvtepi32_pd(zx.q(var_30 << 3)) f+ *(i + 0x68)
            
            if (cond:1_1)
                break
            
            result = zx.d(*(edi + 0xe))
            
            if (i[0x17] == (((zx.d(*(edi + 0x11)) << 8 | zx.d(*(edi + 0x10))) << 8
                    | zx.d(*(edi + 0xf))) << 8 | result))
                goto label_6483c4
            
            if ((*(edi + 5) & 2) != 0)
                sub_638740(&i[0x78])
                sub_638370(&i[0x94])
                bool cond:2_1 = i[1] != 0
                i[0x16] = 2
                
                if (cond:2_1)
                    goto label_6483e6
                
                sub_63d910(i[0x12])
                sub_63d8b0(i[0x13])
                goto label_6483c4
        
        goto label_6483ce
    
label_6483c4:
    
    if (i[0x16] != 4)
    label_6483ce:
        
        if (i[0x16] s< 3)
            if (i[1] == 0)
                result = sub_6475e0(&var_34, i[0x12], i, i[0x13], nullptr, nullptr, &var_34)
                
                if (result != 0)
                    break
                
                int32_t eax_14 = i[0x72]
                i[0x18] += 1
                edi = var_34
                i[0x17] = eax_14
            else
            label_6483e6:
                int32_t ebx_3 = i[0xd]
                uint32_t i_1 = ((zx.d(*(edi + 0x11)) << 8 | zx.d(*(edi + 0x10))) << 8
                    | zx.d(*(edi + 0xf))) << 8 | zx.d(*(edi + 0xe))
                result = 0
                
                if (ebx_3 s> 0)
                    int32_t* ecx_16 = i[0x10]
                    
                    while (*ecx_16 != i_1)
                        result += 1
                        ecx_16 = &ecx_16[1]
                        
                        if (result s>= ebx_3)
                            break
                
                if (result == ebx_3)
                    continue
                else
                    i[0x17] = i_1
                    i[0x18] = result
                    sub_63d640(&i[0x1e], i_1)
                    i[0x16] = 3
                    result = sub_63d2a0(&i[0x1e], &var_34)
                    continue
    
    result = sub_63d2a0(&i[0x1e], &var_34)

return result
