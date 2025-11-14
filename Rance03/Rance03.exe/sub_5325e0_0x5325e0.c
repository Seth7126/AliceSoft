// 函数: sub_5325e0
// 地址: 0x5325e0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* ebx = arg1
void* var_4 = ebx
int32_t result
void* ecx
result, ecx = sub_532590(arg1)
int32_t* i = *(ebx + 0x10)
int32_t* i_1 = i

while (i != *(ebx + 0x14))
    int32_t j_4 = 0
    int32_t edx_1 = *i
    int32_t edi_3 = (i[1] - edx_1) s>> 2
    int32_t j_3 = 0
    result = edi_3 - 1
    
    if (result s> 0)
        do
            ecx = *(edx_1 + (j_4 << 2))
            int32_t j_2 = j_4 + 1
            int32_t j = j_2
            int32_t j_1 = j
            
            if (j_2 s< edi_3)
                do
                    if (j_4 != j)
                        int32_t edi_4 = *(edx_1 + (j << 2))
                        int32_t* eax = ecx + 0x28
                        int32_t k = 0
                        int32_t* var_28_1 = eax
                        int32_t* edx_2 = ecx + 4
                        int32_t k_1 = 0
                        int32_t* var_24_1 = edx_2
                        
                        do
                            if (*eax == 0)
                                int32_t* ebp_1 = edi_4 + 0x28
                                void* esi = edi_4 + 0xc
                                int32_t ebx_1 = mods.dp.d(sx.q(k + 1), 3) * 3
                                
                                for (int32_t edx_5 = 0; edx_5 s< 3; )
                                    float xmm7_1 = *(esi - 4)
                                    int32_t eax_6 = mods.dp.d(sx.q(edx_5 + 1), 3) * 3
                                    float xmm3_1 = var_24_1[1]
                                    float xmm4_1 = *var_24_1
                                    float xmm5_1 = var_24_1[2]
                                    float xmm2_2 = xmm3_1 - xmm7_1
                                    float xmm1_2 = xmm4_1 f- *(esi - 8)
                                    float xmm0_2 = xmm5_1 f- *esi
                                    float xmm0_5
                                    float xmm1_5
                                    float xmm2_7
                                    
                                    if (not(0.00100000005f
                                            < xmm2_2 * xmm2_2 + xmm1_2 * xmm1_2 + xmm0_2 * xmm0_2))
                                        xmm2_7 =
                                            *(ecx + (ebx_1 << 2) + 4) f- *(edi_4 + (eax_6 << 2) + 4)
                                        xmm1_5 =
                                            *(ecx + (ebx_1 << 2) + 8) f- *(edi_4 + (eax_6 << 2) + 8)
                                        xmm0_5 = *(ecx + (ebx_1 << 2) + 0xc) f-
                                            *(edi_4 + (eax_6 << 2) + 0xc)
                                    
                                    float xmm0_8
                                    float xmm1_8
                                    float xmm2_12
                                    float xmm3_2
                                    float xmm4_2
                                    float xmm5_2
                                    
                                    if (0.00100000005f
                                            < xmm2_2 * xmm2_2 + xmm1_2 * xmm1_2 + xmm0_2 * xmm0_2 || not(
                                            0.00100000005f >= xmm2_7 * xmm2_7 + xmm1_5 * xmm1_5
                                            + xmm0_5 * xmm0_5))
                                        xmm3_2 = xmm3_1 f- *(edi_4 + (eax_6 << 2) + 8)
                                        xmm4_2 = xmm4_1 f- *(edi_4 + (eax_6 << 2) + 4)
                                        xmm5_2 = xmm5_1 f- *(edi_4 + (eax_6 << 2) + 0xc)
                                        
                                        if (not(0.00100000005f < xmm3_2 * xmm3_2 + xmm4_2 * xmm4_2
                                                + xmm5_2 * xmm5_2))
                                            xmm2_12 = *(ecx + (ebx_1 << 2) + 8) - xmm7_1
                                            xmm0_8 = *(ecx + (ebx_1 << 2) + 4) f- *(esi - 8)
                                            xmm1_8 = *(ecx + (ebx_1 << 2) + 0xc) f- *esi
                                    
                                    if ((0.00100000005f
                                            < xmm2_2 * xmm2_2 + xmm1_2 * xmm1_2 + xmm0_2 * xmm0_2 || not(
                                            0.00100000005f >= xmm2_7 * xmm2_7 + xmm1_5 * xmm1_5
                                            + xmm0_5 * xmm0_5)) && (0.00100000005f
                                            < xmm3_2 * xmm3_2 + xmm4_2 * xmm4_2 + xmm5_2 * xmm5_2
                                            || 0.00100000005f < xmm2_12 * xmm2_12 + xmm0_8 * xmm0_8
                                            + xmm1_8 * xmm1_8))
                                        eax = var_28_1
                                    else
                                        eax = var_28_1
                                        *eax = edi_4
                                        *ebp_1 = ecx
                                    
                                    edx_5 += 1
                                    ebp_1 = &ebp_1[1]
                                    esi += 0xc
                                
                                edx_2 = var_24_1
                                k = k_1
                            
                            k += 1
                            eax = &eax[1]
                            edx_2 = &edx_2[3]
                            k_1 = k
                            var_28_1 = eax
                            var_24_1 = edx_2
                        while (k s< 3)
                        
                        i = i_1
                        j = j_1
                        j_4 = j_3
                    
                    j += 1
                    edx_1 = *i
                    j_1 = j
                while (j s< (i[1] - edx_1) s>> 2)
            
            j_4 = j_2
            edx_1 = *i
            edi_3 = (i[1] - edx_1) s>> 2
            j_3 = j_2
            result = edi_3 - 1
        while (j_4 s< result)
        
        ebx = var_4
    
    i = &i[3]
    i_1 = i

return result
