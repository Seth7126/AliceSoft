// 函数: sub_6b3850
// 地址: 0x6b3850
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* edi = arg1
int32_t* ebx = arg2
int32_t* var_40 = ebx
void* var_24 = edi
void* eax = *(edi + 4)
void* ebp = *(edi + 0x68)
int32_t* eax_1 = *(eax + 0x1c)
int32_t esi = eax_1[0x392]

if (ebx != 0)
    int32_t eax_3 = *(edi + 0x18)
    
    if (*(edi + 0x14) s<= eax_3 || eax_3 == 0xffffffff)
        int32_t edx = *(edi + 0x40)
        int32_t ecx = *(edi + 0x44)
        *(edi + 0x24) = *(edi + 0x28)
        *(edi + 0x28) = ebx[7]
        *(edi + 0x2c) = 0xffffffff
        
        if ((edx & ecx) == 0xffffffff || edx + 1 != ebx[0xe]
                || adc.d(ecx, 0, edx u>= 0xffffffff) != ebx[0xf])
            *(edi + 0x38) = 0xffffffff
            *(edi + 0x3c) = 0xffffffff
            *(ebp + 0x80) = 0xffffffff
            *(ebp + 0x84) = 0xffffffff
        
        *(edi + 0x40) = ebx[0xe]
        *(edi + 0x44) = ebx[0xf]
        
        if (*ebx != 0)
            int32_t eax_12 = eax_1[*(edi + 0x28)] s>> (esi.b + 1)
            int32_t j_16 = eax_1[1] s>> (esi.b + 1)
            int32_t eax_15
            int32_t edx_3
            edx_3:eax_15 = sx.q(ebx[0x16])
            int32_t j_10 = *eax_1 s>> (esi.b + 1)
            int32_t temp1_1 = *(edi + 0x48)
            *(edi + 0x48) += eax_15
            int32_t j_15 = j_10
            *(edi + 0x4c) = adc.d(*(edi + 0x4c), edx_3, temp1_1 + eax_15 u< temp1_1)
            int32_t eax_17
            int32_t edx_4
            edx_4:eax_17 = sx.q(ebx[0x17])
            int32_t temp2_1 = *(edi + 0x50)
            *(edi + 0x50) += eax_17
            *(edi + 0x54) = adc.d(*(edi + 0x54), edx_4, temp2_1 + eax_17 u< temp2_1)
            int32_t eax_19
            int32_t edx_5
            edx_5:eax_19 = sx.q(ebx[0x18])
            int32_t temp3_1 = *(edi + 0x58)
            *(edi + 0x58) += eax_19
            *(edi + 0x5c) = adc.d(*(edi + 0x5c), edx_5, temp3_1 + eax_19 u< temp3_1)
            int32_t eax_21
            int32_t edx_6
            edx_6:eax_21 = sx.q(ebx[0x19])
            int32_t temp4_1 = *(edi + 0x60)
            *(edi + 0x60) += eax_21
            *(edi + 0x64) = adc.d(*(edi + 0x64), edx_6, temp4_1 + eax_21 u< temp4_1)
            int32_t j_19 = 0
            int32_t eax_22 = *(edi + 0x30)
            int32_t j_18 = j_16
            int32_t j_20 = j_18
            
            if (eax_22 == 0)
                j_20 = 0
            
            if (eax_22 == 0)
                j_19 = j_18
            
            int32_t i = 0
            int32_t j_21 = j_19
            int32_t i_1 = 0
            
            if (*(eax + 4) s> 0)
                do
                    if (*(edi + 0x24) == 0)
                        int32_t eax_49 = *(ebp + 4) - esi
                        
                        if (*(edi + 0x28) == 0)
                            int32_t ebx_13 = "(.x"[eax_49]
                            float* ecx_16 = *(*(edi + 8) + (i << 2)) + (j_19 << 2)
                            
                            if (j_10 s> 0)
                                int32_t ebp_6 = *(*var_40 + (i << 2)) - ebx_13
                                int32_t* edx_20 = ebx_13 - 4 + (j_10 << 2)
                                void* ebx_14 = ebx_13 - ecx_16
                                int32_t j
                                
                                do
                                    float xmm0_7 = *edx_20
                                    int32_t* eax_75 = ebx_14 + ecx_16
                                    edx_20 -= 4
                                    *ecx_16 = *(eax_75 + ebp_6) f* *eax_75 + xmm0_7 * *ecx_16
                                    ecx_16 = &ecx_16[1]
                                    j = j_10
                                    j_10 -= 1
                                while (j != 1)
                        else
                            int32_t eax_50 = "(.x"[eax_49]
                            float* esi_2 = *(*(edi + 8) + (i << 2)) + (j_19 << 2)
                            int32_t eax_54
                            int32_t edx_13
                            edx_13:eax_54 = sx.q(j_18)
                            int32_t eax_57
                            int32_t edx_14
                            edx_14:eax_57 = sx.q(j_15)
                            int32_t ecx_10 = (eax_54 - edx_13) s>> 1
                            int32_t eax_59 = (eax_57 - edx_14) s>> 1
                            int32_t j_17 = 0
                            int32_t ebx_5 = *(*ebx + (i << 2)) + ((ecx_10 - eax_59) << 2)
                            int32_t var_20_1 = ebx_5
                            
                            if (j_15 s> 0)
                                float* ecx_12 = esi_2
                                j_17 = j_15
                                int32_t* ebx_6 = ebx_5 - eax_50
                                int32_t* var_10_2 = ebx_6
                                int32_t* edx_16 = eax_50 + ((j_17 - 1) << 2)
                                int32_t j_12 = j_17
                                int32_t j_1
                                
                                do
                                    float xmm0_5 = *edx_16
                                    float* eax_62 = ecx_12 + eax_50 - esi_2
                                    edx_16 -= 4
                                    *ecx_12 = *(ebx_6 + eax_62) * *eax_62 + xmm0_5 * *ecx_12
                                    ecx_12 = &ecx_12[1]
                                    j_1 = j_12
                                    j_12 -= 1
                                while (j_1 != 1)
                                edi = var_24
                                ebx_5 = var_20_1
                            
                            int32_t esi_4 = eax_59 + ecx_10
                            
                            if (j_17 s< esi_4)
                                if (esi_4 - j_17 s>= 4)
                                    void* edx_18 = ebx_5 + ((j_17 + 3) << 2)
                                    void* ecx_14 = &esi_2[1 + j_17]
                                    int32_t j_9 = ((esi_4 - j_17 - 4) u>> 2) + 1
                                    j_17 += j_9 << 2
                                    int32_t j_2
                                    
                                    do
                                        ecx_14 += 0x10
                                        *(ecx_14 - 0x14) = *(edx_18 - 0xc)
                                        edx_18 += 0x10
                                        *(ecx_14 - 0x10) = *(ebx_5 - esi_2 + ecx_14 - 0x10)
                                        *(ecx_14 - 0xc) = *(edx_18 - 0x14)
                                        *(ecx_14 - 8) = *(edx_18 - 0x10)
                                        j_2 = j_9
                                        j_9 -= 1
                                    while (j_2 != 1)
                                    edi = var_24
                                    ebx_5 = var_20_1
                                
                                if (j_17 s< esi_4)
                                    int32_t j_13 = esi_4 - j_17
                                    int32_t* ecx_15 = &esi_2[j_17]
                                    int32_t j_3
                                    
                                    do
                                        int32_t eax_70 = *(ecx_15 + ebx_5 - esi_2)
                                        ecx_15 = &ecx_15[1]
                                        ecx_15[-1] = eax_70
                                        j_3 = j_13
                                        j_13 -= 1
                                    while (j_3 != 1)
                    else if (*(edi + 0x28) == 0)
                        int32_t ebx_3 = "(.x"[*(ebp + 4) - esi]
                        int32_t eax_37
                        int32_t edx_9
                        edx_9:eax_37 = sx.q(j_18)
                        int32_t eax_40
                        int32_t edx_10
                        edx_10:eax_40 = sx.q(j_10)
                        float* ecx_8 = *(*(edi + 8) + (i << 2))
                            + ((((eax_37 - edx_9) s>> 1) - ((eax_40 - edx_10) s>> 1) + j_21) << 2)
                        
                        if (j_10 s> 0)
                            int32_t ebp_4 = *(*var_40 + (i << 2)) - ebx_3
                            int32_t* edx_12 = ebx_3 - 4 + (j_10 << 2)
                            void* ebx_4 = ebx_3 - ecx_8
                            int32_t j_4
                            
                            do
                                float xmm0_3 = *edx_12
                                int32_t* eax_47 = ebx_4 + ecx_8
                                edx_12 -= 4
                                *ecx_8 = *(eax_47 + ebp_4) f* *eax_47 + xmm0_3 * *ecx_8
                                ecx_8 = &ecx_8[1]
                                j_4 = j_10
                                j_10 -= 1
                            while (j_4 != 1)
                    else
                        int32_t ebx_1 = "(.x"[*(ebp + 8) - esi]
                        float* ecx_3 = *(*(edi + 8) + (i << 2)) + (j_19 << 2)
                        
                        if (j_18 s> 0)
                            int32_t j_11 = j_16
                            int32_t ebp_2 = *(*var_40 + (i << 2)) - ebx_1
                            int32_t* edx_8 = ebx_1 + ((j_18 - 1) << 2)
                            void* ebx_2 = ebx_1 - ecx_3
                            int32_t j_5
                            
                            do
                                float xmm0_1 = *edx_8
                                int32_t* eax_33 = ebx_2 + ecx_3
                                edx_8 -= 4
                                *ecx_3 = *(eax_33 + ebp_2) f* *eax_33 + xmm0_1 * *ecx_3
                                ecx_3 = &ecx_3[1]
                                j_5 = j_11
                                j_11 -= 1
                            while (j_5 != 1)
                    
                    int32_t i_2 = i_1
                    int32_t edx_21 = eax_12
                    void* esi_6 = *(*(edi + 8) + (i_2 << 2)) + (j_20 << 2)
                    int32_t eax_80 = 0
                    void* ebx_16 = *(*var_40 + (i_2 << 2)) + (eax_12 << 2)
                    
                    if (edx_21 s>= 4)
                        void* ecx_18 = esi_6 + 4
                        void* edx_22 = ebx_16 + 0xc
                        int32_t j_14 = ((eax_12 - 4) u>> 2) + 1
                        int32_t eax_81 = j_14 << 2
                        int32_t j_6
                        
                        do
                            ecx_18 += 0x10
                            *(ecx_18 - 0x14) = *(edx_22 - 0xc)
                            edx_22 += 0x10
                            *(ecx_18 - 0x10) = *(ecx_18 + ebx_16 - esi_6 - 0x10)
                            *(ecx_18 - 0xc) = *(edx_22 - 0x14)
                            *(ecx_18 - 8) = *(edx_22 - 0x10)
                            j_6 = j_14
                            j_14 -= 1
                        while (j_6 != 1)
                        eax_80 = eax_81
                        i_2 = i_1
                        edx_21 = eax_12
                    
                    if (eax_80 s< edx_21)
                        int32_t* ecx_19 = esi_6 + (eax_80 << 2)
                        int32_t j_8 = edx_21 - eax_80
                        int32_t j_7
                        
                        do
                            int32_t eax_86 = *(ecx_19 + ebx_16 - esi_6)
                            ecx_19 = &ecx_19[1]
                            ecx_19[-1] = eax_86
                            j_7 = j_8
                            j_8 -= 1
                        while (j_7 != 1)
                    
                    i = i_2 + 1
                    ebx = var_40
                    j_10 = j_15
                    j_18 = j_16
                    j_19 = j_21
                    i_1 = i
                while (i s< *(eax + 4))
            
            if (*(edi + 0x30) != 0)
                j_18 = 0
            
            bool cond:2_1 = *(edi + 0x18) != 0xffffffff
            *(edi + 0x30) = j_18
            
            if (cond:2_1)
                int32_t eax_89 = *(edi + 0x28)
                *(edi + 0x18) = j_19
                int32_t eax_91
                int32_t edx_23
                edx_23:eax_91 = sx.q(eax_1[eax_89])
                int32_t eax_94
                int32_t edx_25
                edx_25:eax_94 = sx.q(eax_1[*(edi + 0x24)])
                *(edi + 0x14) = (((((edx_23 & 3) + eax_91) s>> 2) + ((eax_94 + (edx_25 & 3)) s>> 2))
                    s>> esi.b) + j_21
            else
                *(edi + 0x18) = j_20
                *(edi + 0x14) = j_20
        
        int32_t esi_15 = *(ebp + 0x80)
        int32_t ebp_9 = *(ebp + 0x84)
        
        if ((esi_15 & ebp_9) != 0xffffffff)
            int32_t eax_101
            int32_t edx_27
            edx_27:eax_101 = sx.q(eax_1[*(edi + 0x28)])
            int32_t eax_104
            int32_t edx_30
            edx_30:eax_104 = sx.q(eax_1[*(edi + 0x24)])
            int32_t eax_108
            int32_t edx_32
            edx_32:eax_108 =
                sx.q(((eax_104 + (edx_30 & 3)) s>> 2) + (((edx_27 & 3) + eax_101) s>> 2))
            *(ebp + 0x80) = eax_108 + esi_15
            *(ebp + 0x84) = adc.d(edx_32, ebp_9, eax_108 + esi_15 u< eax_108)
        else
            *(ebp + 0x80) = 0
            *(ebp + 0x84) = 0
        
        int32_t esi_16 = *(edi + 0x38)
        int32_t ebp_10 = *(edi + 0x3c)
        
        if ((esi_16 & ebp_10) != 0xffffffff)
            int32_t eax_123
            int32_t edx_37
            edx_37:eax_123 = sx.q(eax_1[*(edi + 0x28)])
            int32_t eax_126
            int32_t edx_40
            edx_40:eax_126 = sx.q(eax_1[*(edi + 0x24)])
            int32_t eax_130
            int32_t edx_42
            edx_42:eax_130 =
                sx.q(((eax_126 + (edx_40 & 3)) s>> 2) + (((edx_37 & 3) + eax_123) s>> 2))
            *(edi + 0x38) = eax_130 + esi_16
            *(edi + 0x3c) = adc.d(edx_42, ebp_10, eax_130 + esi_16 u< eax_130)
            int32_t esi_20 = ebx[0xc]
            int32_t edx_44 = ebx[0xd]
            
            if ((esi_20 & edx_44) != 0xffffffff)
                int32_t ecx_33 = *(edi + 0x38)
                int32_t eax_134 = *(edi + 0x3c)
                
                if (ecx_33 != esi_20 || eax_134 != edx_44)
                    if (eax_134 s>= edx_44 && (eax_134 s> edx_44 || ecx_33 u> esi_20))
                        int32_t esi_22 = ecx_33 - ebx[0xc]
                        
                        if (ecx_33 != ebx[0xc] && ebx[0xb] != 0)
                            int32_t edx_45 = *(edi + 0x14)
                            char ecx_34 = esi.b
                            int32_t eax_137 = (edx_45 - *(edi + 0x18)) << ecx_34
                            
                            if (esi_22 s> eax_137)
                                esi_22 = eax_137
                            
                            int32_t eax_138 = 0
                            
                            if (esi_22 s>= 0)
                                eax_138 = esi_22
                            
                            *(edi + 0x14) = edx_45 - (eax_138 s>> ecx_34)
                    
                    *(edi + 0x38) = ebx[0xc]
                    *(edi + 0x3c) = ebx[0xd]
        else
            int32_t ecx_27 = ebx[0xc]
            int32_t edx_34 = ebx[0xd]
            
            if ((ecx_27 & edx_34) != 0xffffffff)
                *(edi + 0x38) = ecx_27
                *(edi + 0x3c) = edx_34
                int32_t temp8_1 = *(ebp + 0x84)
                
                if (temp8_1 s>= edx_34 && (temp8_1 s> edx_34 || *(ebp + 0x80) u> *(edi + 0x38)))
                    int32_t eax_115 = *(ebp + 0x80)
                    int32_t esi_17 = 0
                    char ecx_29 = esi.b
                    
                    if (eax_115 - ebx[0xc] s>= 0)
                        esi_17 = eax_115 - ebx[0xc]
                    
                    if (ebx[0xb] == 0)
                        int32_t eax_120 = *(edi + 0x14)
                        *(edi + 0x18) += esi_17 s>> ecx_29
                        
                        if (*(edi + 0x18) s> eax_120)
                            *(edi + 0x18) = eax_120
                    else
                        int32_t edx_35 = *(edi + 0x14)
                        int32_t eax_119 = (edx_35 - *(edi + 0x18)) << ecx_29
                        
                        if (esi_17 s> eax_119)
                            esi_17 = eax_119
                        
                        *(edi + 0x14) = edx_35 - (esi_17 s>> ecx_29)
        
        if (ebx[0xb] != 0)
            *(edi + 0x20) = 1
        
        return 0

return 0xffffff7d
