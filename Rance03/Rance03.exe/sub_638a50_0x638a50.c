// 函数: sub_638a50
// 地址: 0x638a50
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* edi = arg1
int32_t* ebp = arg2
int32_t* var_1c = ebp
void* var_28 = edi
void* eax = *(edi + 4)
void* ebx = *(edi + 0x68)
void* var_38 = ebx
int32_t* eax_1 = *(eax + 0x1c)
int32_t esi = eax_1[0x392]

if (ebp != 0)
    int32_t eax_3 = *(edi + 0x18)
    
    if (*(edi + 0x14) s<= eax_3 || eax_3 == 0xffffffff)
        int32_t edx = *(edi + 0x40)
        int32_t ecx = *(edi + 0x44)
        *(edi + 0x24) = *(edi + 0x28)
        *(edi + 0x28) = ebp[7]
        *(edi + 0x2c) = 0xffffffff
        
        if ((edx & ecx) == 0xffffffff || edx + 1 != ebp[0xe]
                || adc.d(ecx, 0, edx u>= 0xffffffff) != ebp[0xf])
            *(edi + 0x38) = 0xffffffff
            *(edi + 0x3c) = 0xffffffff
            *(ebx + 0x80) = 0xffffffff
            *(ebx + 0x84) = 0xffffffff
        
        *(edi + 0x40) = ebp[0xe]
        *(edi + 0x44) = ebp[0xf]
        
        if (*ebp != 0)
            int32_t eax_12 = eax_1[*(edi + 0x28)] s>> (esi.b + 1)
            int32_t j_16 = eax_1[1] s>> (esi.b + 1)
            int32_t eax_15
            int32_t edx_3
            edx_3:eax_15 = sx.q(ebp[0x16])
            int32_t j_10 = *eax_1 s>> (esi.b + 1)
            int32_t temp1_1 = *(edi + 0x48)
            *(edi + 0x48) += eax_15
            int32_t j_15 = j_10
            *(edi + 0x4c) = adc.d(*(edi + 0x4c), edx_3, temp1_1 + eax_15 u< temp1_1)
            int32_t eax_17
            int32_t edx_4
            edx_4:eax_17 = sx.q(ebp[0x17])
            int32_t temp2_1 = *(edi + 0x50)
            *(edi + 0x50) += eax_17
            *(edi + 0x54) = adc.d(*(edi + 0x54), edx_4, temp2_1 + eax_17 u< temp2_1)
            int32_t eax_19
            int32_t edx_5
            edx_5:eax_19 = sx.q(ebp[0x18])
            int32_t temp3_1 = *(edi + 0x58)
            *(edi + 0x58) += eax_19
            *(edi + 0x5c) = adc.d(*(edi + 0x5c), edx_5, temp3_1 + eax_19 u< temp3_1)
            int32_t eax_21
            int32_t edx_6
            edx_6:eax_21 = sx.q(ebp[0x19])
            int32_t temp4_1 = *(edi + 0x60)
            *(edi + 0x60) += eax_21
            *(edi + 0x64) = adc.d(*(edi + 0x64), edx_6, temp4_1 + eax_21 u< temp4_1)
            int32_t j_19 = j_16
            int32_t j_20
            int32_t j_21
            
            if (*(edi + 0x30) == 0)
                j_21 = 0
                j_20 = j_19
            else
                j_21 = j_19
                j_20 = 0
            
            int32_t i = 0
            int32_t i_1 = 0
            
            if (*(eax + 4) s> 0)
                do
                    if (*(edi + 0x24) == 0)
                        int32_t eax_48 = *(ebx + 4) - esi
                        
                        if (*(edi + 0x28) == 0)
                            int32_t ebx_13 = *((eax_48 << 2) + &data_6fa810)
                            int32_t* ecx_20 = *(*(edi + 8) + (i << 2)) + (j_20 << 2)
                            
                            if (j_10 s> 0)
                                int32_t ebp_6 = *(*ebp + (i_1 << 2)) - ebx_13
                                float* edx_24 = ebx_13 + ((j_10 - 1) << 2)
                                void* ebx_14 = ebx_13 - ecx_20
                                int32_t j
                                
                                do
                                    void* eax_73 = ebx_14 + ecx_20
                                    float xmm0_8 = *ecx_20 * *edx_24
                                    edx_24 -= 4
                                    *ecx_20 = *(eax_73 + ebp_6) f* *eax_73 + xmm0_8
                                    ecx_20 = &ecx_20[1]
                                    j = j_10
                                    j_10 -= 1
                                while (j != 1)
                        else
                            int32_t eax_49 = *((eax_48 << 2) + &data_6fa810)
                            int32_t* esi_2 = *(*(edi + 8) + (i << 2)) + (j_20 << 2)
                            int32_t eax_53
                            int32_t edx_15
                            edx_15:eax_53 = sx.q(j_19)
                            int32_t eax_56
                            int32_t edx_16
                            edx_16:eax_56 = sx.q(j_15)
                            int32_t ecx_12 = (eax_53 - edx_15) s>> 1
                            int32_t eax_58 = (eax_56 - edx_16) s>> 1
                            int32_t j_17 = 0
                            int32_t ebx_5 = *(*ebp + (i_1 << 2)) + ((ecx_12 - eax_58) << 2)
                            int32_t var_24_1 = ebx_5
                            
                            if (j_15 s> 0)
                                int32_t* ecx_14 = esi_2
                                j_17 = j_15
                                int32_t ebx_6 = ebx_5 - eax_49
                                int32_t var_14_2 = ebx_6
                                float* edx_19 = eax_49 + ((j_17 - 1) << 2)
                                int32_t j_12 = j_17
                                int32_t j_1
                                
                                do
                                    void* eax_61 = eax_49 - esi_2 + ecx_14
                                    float xmm0_6 = *ecx_14 * *edx_19
                                    edx_19 -= 4
                                    *ecx_14 = *(eax_61 + ebx_6) f* *eax_61 + xmm0_6
                                    ecx_14 = &ecx_14[1]
                                    j_1 = j_12
                                    j_12 -= 1
                                while (j_1 != 1)
                                edi = var_28
                                ebx_5 = var_24_1
                            
                            int32_t esi_4 = eax_58 + ecx_12
                            
                            if (j_17 s< esi_4)
                                if (esi_4 - j_17 s>= 4)
                                    void* edx_21 = ebx_5 + ((j_17 + 3) << 2)
                                    void* ecx_16 = &esi_2[1 + j_17]
                                    int32_t j_9 = ((esi_4 - j_17 - 4) u>> 2) + 1
                                    j_17 += j_9 << 2
                                    int32_t j_2
                                    
                                    do
                                        ecx_16 += 0x10
                                        *(ecx_16 - 0x14) = *(edx_21 - 0xc)
                                        edx_21 += 0x10
                                        *(ecx_16 - 0x10) = *(ebx_5 - esi_2 + ecx_16 - 0x10)
                                        *(ecx_16 - 0xc) = *(edx_21 - 0x14)
                                        *(ecx_16 - 8) = *(edx_21 - 0x10)
                                        j_2 = j_9
                                        j_9 -= 1
                                    while (j_2 != 1)
                                    edi = var_28
                                    ebx_5 = var_24_1
                                
                                if (j_17 s< esi_4)
                                    int32_t j_13 = esi_4 - j_17
                                    int32_t* ecx_18 = &esi_2[j_17]
                                    int32_t j_3
                                    
                                    do
                                        int32_t eax_69 = *(ecx_18 + ebx_5 - esi_2)
                                        ecx_18 = &ecx_18[1]
                                        ecx_18[-1] = eax_69
                                        j_3 = j_13
                                        j_13 -= 1
                                    while (j_3 != 1)
                    else if (*(edi + 0x28) == 0)
                        int32_t ebx_3 = *(((*(ebx + 4) - esi) << 2) + &data_6fa810)
                        int32_t eax_37
                        int32_t edx_10
                        edx_10:eax_37 = sx.q(j_19)
                        int32_t eax_40
                        int32_t edx_11
                        edx_11:eax_40 = sx.q(j_10)
                        int32_t* ecx_9 = *(*(edi + 8) + (i_1 << 2))
                            + ((((eax_37 - edx_10) s>> 1) - ((eax_40 - edx_11) s>> 1) + j_20) << 2)
                        
                        if (j_10 s> 0)
                            int32_t ebp_4 = *(*ebp + (i_1 << 2)) - ebx_3
                            float* edx_14 = ebx_3 + ((j_10 - 1) << 2)
                            void* ebx_4 = ebx_3 - ecx_9
                            int32_t j_4
                            
                            do
                                void* eax_46 = ebx_4 + ecx_9
                                float xmm0_4 = *ecx_9 * *edx_14
                                edx_14 -= 4
                                *ecx_9 = *(eax_46 + ebp_4) f* *eax_46 + xmm0_4
                                ecx_9 = &ecx_9[1]
                                j_4 = j_10
                                j_10 -= 1
                            while (j_4 != 1)
                    else
                        int32_t ebx_1 = *(((*(ebx + 8) - esi) << 2) + &data_6fa810)
                        float* ecx_4 = *(*(edi + 8) + (i << 2)) + (j_20 << 2)
                        
                        if (j_16 s> 0)
                            int32_t ebp_2 = *(*ebp + (i_1 << 2)) - ebx_1
                            int32_t* edx_9 = ebx_1 + ((j_16 - 1) << 2)
                            int32_t j_11 = j_16
                            void* ebx_2 = ebx_1 - ecx_4
                            int32_t j_5
                            
                            do
                                float xmm0_1 = *edx_9
                                int32_t* eax_33 = ebx_2 + ecx_4
                                edx_9 -= 4
                                *ecx_4 = *(eax_33 + ebp_2) f* *eax_33 + xmm0_1 * *ecx_4
                                ecx_4 = &ecx_4[1]
                                j_5 = j_11
                                j_11 -= 1
                            while (j_5 != 1)
                    
                    ebp = var_1c
                    int32_t edx_25 = eax_12
                    void* esi_6 = *(*(edi + 8) + (i_1 << 2)) + (j_21 << 2)
                    int32_t eax_76 = 0
                    void* ebx_17 = *(*ebp + (i_1 << 2)) + (eax_12 << 2)
                    
                    if (edx_25 s>= 4)
                        void* ecx_22 = esi_6 + 4
                        void* edx_26 = ebx_17 + 0xc
                        int32_t j_14 = ((eax_12 - 4) u>> 2) + 1
                        int32_t eax_77 = j_14 << 2
                        int32_t j_6
                        
                        do
                            ecx_22 += 0x10
                            *(ecx_22 - 0x14) = *(edx_26 - 0xc)
                            edx_26 += 0x10
                            *(ecx_22 - 0x10) = *(ecx_22 + ebx_17 - esi_6 - 0x10)
                            *(ecx_22 - 0xc) = *(edx_26 - 0x14)
                            *(ecx_22 - 8) = *(edx_26 - 0x10)
                            j_6 = j_14
                            j_14 -= 1
                        while (j_6 != 1)
                        eax_76 = eax_77
                        ebp = var_1c
                        edx_25 = eax_12
                    
                    if (eax_76 s< edx_25)
                        int32_t j_8 = edx_25 - eax_76
                        int32_t* ecx_24 = esi_6 + (eax_76 << 2)
                        int32_t j_7
                        
                        do
                            int32_t eax_82 = *(ecx_24 + ebx_17 - esi_6)
                            ecx_24 = &ecx_24[1]
                            ecx_24[-1] = eax_82
                            j_7 = j_8
                            j_8 -= 1
                        while (j_7 != 1)
                    
                    i = i_1 + 1
                    j_10 = j_15
                    ebx = var_38
                    j_19 = j_16
                    i_1 = i
                while (i s< *(eax + 4))
            
            int32_t j_18 = j_16
            
            if (*(edi + 0x30) != 0)
                j_18 = 0
            
            bool cond:1_1 = *(edi + 0x18) != 0xffffffff
            *(edi + 0x30) = j_18
            
            if (cond:1_1)
                *(edi + 0x18) = j_20
                int32_t eax_88
                int32_t edx_27
                edx_27:eax_88 = sx.q(eax_1[*(edi + 0x28)])
                int32_t eax_91
                int32_t edx_29
                edx_29:eax_91 = sx.q(eax_1[*(edi + 0x24)])
                *(edi + 0x14) = (((((edx_27 & 3) + eax_88) s>> 2) + ((eax_91 + (edx_29 & 3)) s>> 2))
                    s>> esi.b) + j_20
            else
                *(edi + 0x18) = j_21
                *(edi + 0x14) = j_21
        
        int32_t esi_15 = *(ebx + 0x80)
        int32_t ebx_19 = *(ebx + 0x84)
        
        if ((esi_15 & ebx_19) != 0xffffffff)
            int32_t eax_98
            int32_t edx_31
            edx_31:eax_98 = sx.q(eax_1[*(edi + 0x28)])
            int32_t eax_101
            int32_t edx_34
            edx_34:eax_101 = sx.q(eax_1[*(edi + 0x24)])
            int32_t eax_105
            int32_t edx_36
            edx_36:eax_105 =
                sx.q(((eax_101 + (edx_34 & 3)) s>> 2) + (((edx_31 & 3) + eax_98) s>> 2))
            *(var_38 + 0x80) = eax_105 + esi_15
            *(var_38 + 0x84) = adc.d(edx_36, ebx_19, eax_105 + esi_15 u< eax_105)
        else
            *(var_38 + 0x80) = 0
            *(var_38 + 0x84) = 0
        
        int32_t esi_16 = *(edi + 0x38)
        int32_t ebx_20 = *(edi + 0x3c)
        
        if ((esi_16 & ebx_20) != 0xffffffff)
            int32_t eax_118
            int32_t edx_41
            edx_41:eax_118 = sx.q(eax_1[*(edi + 0x28)])
            int32_t eax_121
            int32_t edx_44
            edx_44:eax_121 = sx.q(eax_1[*(edi + 0x24)])
            int32_t eax_125
            int32_t edx_46
            edx_46:eax_125 =
                sx.q(((eax_121 + (edx_44 & 3)) s>> 2) + (((edx_41 & 3) + eax_118) s>> 2))
            *(edi + 0x38) = eax_125 + esi_16
            *(edi + 0x3c) = adc.d(edx_46, ebx_20, eax_125 + esi_16 u< eax_125)
            int32_t esi_21 = ebp[0xc]
            int32_t edx_48 = ebp[0xd]
            
            if ((esi_21 & edx_48) != 0xffffffff)
                int32_t ecx_39 = *(edi + 0x38)
                int32_t eax_129 = *(edi + 0x3c)
                
                if (ecx_39 != esi_21 || eax_129 != edx_48)
                    if (eax_129 s>= edx_48 && (eax_129 s> edx_48 || ecx_39 u> esi_21))
                        int32_t esi_23 = ecx_39 - ebp[0xc]
                        
                        if (ecx_39 != ebp[0xc] && ebp[0xb] != 0)
                            int32_t edx_49 = *(edi + 0x14)
                            char ecx_40 = esi.b
                            int32_t eax_132 = (edx_49 - *(edi + 0x18)) << ecx_40
                            
                            if (esi_23 s> eax_132)
                                esi_23 = eax_132
                            
                            if (esi_23 s< 0)
                                esi_23 = 0
                            
                            *(edi + 0x14) = edx_49 - (esi_23 s>> ecx_40)
                    
                    *(edi + 0x38) = ebp[0xc]
                    *(edi + 0x3c) = ebp[0xd]
        else
            int32_t ecx_33 = ebp[0xc]
            int32_t edx_38 = ebp[0xd]
            
            if ((ecx_33 & edx_38) != 0xffffffff)
                *(edi + 0x38) = ecx_33
                *(edi + 0x3c) = edx_38
                int32_t temp7_1 = *(var_38 + 0x84)
                
                if (temp7_1 s>= edx_38 && (temp7_1 s> edx_38 || *(var_38 + 0x80) u> *(edi + 0x38)))
                    int32_t esi_17 = *(var_38 + 0x80)
                    int32_t esi_18 = esi_17 - ebp[0xc]
                    char ecx_35 = esi.b
                    
                    if (esi_17 - ebp[0xc] s< 0)
                        esi_18 = 0
                    
                    if (ebp[0xb] == 0)
                        int32_t eax_115 = *(edi + 0x14)
                        *(edi + 0x18) += esi_18 s>> ecx_35
                        
                        if (*(edi + 0x18) s> eax_115)
                            *(edi + 0x18) = eax_115
                    else
                        int32_t edx_39 = *(edi + 0x14)
                        int32_t eax_114 = (edx_39 - *(edi + 0x18)) << ecx_35
                        
                        if (esi_18 s> eax_114)
                            esi_18 = eax_114
                        
                        *(edi + 0x14) = edx_39 - (esi_18 s>> ecx_35)
        
        if (ebp[0xb] != 0)
            *(edi + 0x20) = 1
        
        return 0

return 0xffffff7d
