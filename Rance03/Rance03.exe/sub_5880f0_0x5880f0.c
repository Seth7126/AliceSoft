// 函数: sub_5880f0
// 地址: 0x5880f0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

float var_7c
int32_t eax_1 = __security_cookie ^ &var_7c
int32_t* var_68 = arg7
int32_t eax_4

if (arg2 s>= 0 && arg2 s< (*(arg1 + 0xc) - *(arg1 + 8)) s>> 2)
    eax_4 = *(*(arg1 + 8) + (arg2 << 2))
    
    if (eax_4 != 0)
        void* edi = *(eax_4 + 0x1d8)
        void* var_58 = edi
        
        if (edi != 0)
            float var_54
            __builtin_memset(&var_54, 0, 0x18)
            float var_48
            
            if (sub_587d30(arg1, arg3, arg4, &var_54, &var_48).b != 0)
                var_7c = var_48 - var_54
                float var_50
                float var_44
                float var_78 = var_44 - var_50
                float var_4c
                float var_40
                float var_74 = var_40 - var_4c
                sub_59f780(&var_7c, &var_48)
                int32_t i = 0
                int32_t eax_8
                int32_t edx_1
                edx_1:eax_8 = muls.dp.d(0x1a6d01a7, *(edi + 0x18) - *(edi + 0x14))
                int32_t i_1 = 0
                int32_t edx_2 = edx_1 s>> 6
                int32_t eax_11 = (edx_2 u>> 0x1f) + edx_2
                int32_t var_70 = eax_11
                
                if (eax_11 s> 0)
                    int32_t var_38_1 = 0
                    
                    while (i s>= 0)
                        int32_t eax_12
                        int32_t edx_3
                        edx_3:eax_12 = muls.dp.d(0x1a6d01a7, *(edi + 0x18) - *(edi + 0x14))
                        int32_t edx_4 = edx_3 s>> 6
                        
                        if (i s>= (edx_4 u>> 0x1f) + edx_4)
                            break
                        
                        void* esi = *(edi + 0x14)
                        eax_11 = var_38_1
                        void* esi_1 = esi + eax_11
                        
                        if (esi == neg.d(eax_11))
                            break
                        
                        if (*(esi_1 + 0x206) != 0)
                            int32_t eax_15
                            int32_t edx_5
                            edx_5:eax_15 =
                                muls.dp.d(0x38e38e39, *(esi_1 + 0x1a0) - *(esi_1 + 0x19c))
                            int32_t edx_6 = edx_5 s>> 3
                            int32_t edi_4 = (edx_6 u>> 0x1f) - 1 + edx_6
                            
                            if ((edx_6 u>> 0x1f) - 1 + edx_6 s>= 0)
                                int32_t eax_17 = int.d(fconvert.t(*(eax_4 + 0x12c)))
                                int32_t* esi_2 = *(esi_1 + 0x19c) + edi_4 * 0x24
                                int32_t eax_19 = eax_17
                                void* edx_7 = &esi_2[5]
                                int32_t temp3_1
                                
                                do
                                    if (*esi_2 == eax_19)
                                        int128_t var_34
                                        void* ecx_10 = &var_34:8
                                        float xmm6_1 = *(edx_7 - 8)
                                        int32_t j = 0
                                        float xmm7_1 = *(edx_7 - 4)
                                        __builtin_memcpy(&var_34, 
                                            "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x"
                                        "40\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00"
                                        "00\x40\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00"
                                        "00\x00\x40\x3f", 
                                            0x30)
                                        
                                        do
                                            float xmm3_2 = var_54 - (*(ecx_10 - 8) + xmm6_1)
                                            float xmm4_2 = var_50 - (*(ecx_10 - 4) + xmm7_1)
                                            float xmm1_4 = var_4c - (*edx_7 f+ *ecx_10)
                                            float xmm2_6 =
                                                var_44 * xmm4_2 + var_48 * xmm3_2 + var_40 * xmm1_4
                                            float xmm4_6 = xmm4_2 * xmm4_2 + xmm3_2 * xmm3_2
                                                + xmm1_4 * xmm1_4 - 0.0625f
                                            
                                            if (xmm4_6 f<= 0 || not(xmm2_6 f> 0))
                                                float xmm0_14 = xmm2_6 * xmm2_6 - xmm4_6
                                                
                                                if (not(0 f> xmm0_14) && 0 f<= (xmm2_6 ^ 0x80000000)
                                                        - _mm_sqrt_ss(xmm0_14, xmm0_14))
                                                    *arg5 = i_1
                                                    *arg6 = edi_4
                                                    *var_68 = j
                                                    j.b = 1
                                                    sub_69a5bc(eax_1 ^ &var_7c)
                                                    return j
                                            
                                            j += 1
                                            ecx_10 += 0xc
                                        while (j s< 4)
                                        
                                        eax_19 = eax_17
                                    
                                    esi_2 -= 0x24
                                    edx_7 -= 0x24
                                    temp3_1 = edi_4
                                    edi_4 -= 1
                                while (temp3_1 - 1 s>= 0)
                            
                            eax_11 = var_38_1
                            edi = var_58
                        
                        i = i_1 + 1
                        var_38_1 = eax_11 + 0x26c
                        i_1 = i
                        
                        if (i s>= var_70)
                            break
                
                eax_11.b = 0
                sub_69a5bc(eax_1 ^ &var_7c)
                return eax_11
        
        eax_4.b = 0
        sub_69a5bc(eax_1 ^ &var_7c)
        return eax_4

eax_4.b = 0
sub_69a5bc(eax_1 ^ &var_7c)
return eax_4
