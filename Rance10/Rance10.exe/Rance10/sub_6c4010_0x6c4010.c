// 函数: sub_6c4010
// 地址: 0x6c4010
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_48 = 0
int32_t eax
int80_t result
result, eax = sub_6c3860(arg1, arg2, arg3)

if (eax s>= 0)
    int32_t eax_1 = sub_6c2a40(arg1)
    
    if (eax_1 == 0)
        void* ebx_1 = &arg1[0x1e]
        
        while (true)
            int32_t esi_2
            
            if (ebx_1 == 0 || *ebx_1 == 0)
            label_6c41b6:
                void* var_38
                int32_t eax_14
                int32_t edx_9
                eax_14, edx_9 = sub_6c1ab0(eax_1, &var_38, arg1, 0xffffffff, 0xffffffff)
                
                if (edx_9 s>= 0 && (edx_9 s> 0 || eax_14 u>= 0))
                    void* esi_6 = var_38
                    
                    if ((*(esi_6 + 5) & 2) != 0)
                        sub_6b3540(&arg1[0x78])
                        sub_6b3120(&arg1[0x94])
                        arg1[0x16] = 2
                    
                    if (arg1[0x16] s< 3)
                        int32_t ecx_18 = arg1[0xd]
                        uint32_t i = ((zx.d(*(esi_6 + 0x11)) << 8 | zx.d(*(esi_6 + 0x10))) << 8
                            | zx.d(*(esi_6 + 0xf))) << 8 | zx.d(*(esi_6 + 0xe))
                        eax_1 = 0
                        
                        if (ecx_18 s> 0)
                            int32_t* ecx_19 = arg1[0x10]
                            
                            while (*ecx_19 != i)
                                eax_1 += 1
                                ecx_19 = &ecx_19[1]
                                
                                if (eax_1 s>= arg1[0xd])
                                    break
                            
                            ecx_18 = arg1[0xd]
                        
                        if (eax_1 == ecx_18)
                            continue
                        else
                            arg1[0x18] = eax_1
                            arg1[0x16] = 3
                            arg1[0x17] = ((zx.d(*(esi_6 + 0x11)) << 8 | zx.d(*(esi_6 + 0x10))) << 8
                                | zx.d(*(esi_6 + 0xf))) << 8 | zx.d(*(esi_6 + 0xe))
                            
                            if (ebx_1 != 0 && *ebx_1 != 0)
                                sub_6b80e0(ebx_1)
                                *(ebx_1 + 0x150) = i
                            
                            int32_t eax_21 = sub_6c2a40(arg1)
                            
                            if (eax_21 != 0)
                                break
                            
                            var_48 = eax_21
                    
                    eax_1 = sub_6b7dc0(ebx_1, &var_38)
                    continue
                
                esi_2 = arg2
            else
                void var_28
                eax_1 = sub_6b8190(eax_1, &var_28, ebx_1, 0)
                
                if (eax_1 s<= 0)
                    if (eax_1 s>= 0 || eax_1 == 0xfffffffd)
                        goto label_6c41b6
                    
                    esi_2 = arg2
                else
                    void* esi_1 = arg1[0x12]
                    eax_1 = sub_6c1950((arg1[0x18] << 5) + esi_1, &var_28)
                    int32_t var_44_1 = eax_1
                    
                    if (eax_1 s< 0)
                        if (ebx_1 != 0)
                            if (*ebx_1 == 0)
                                continue
                            else
                                eax_1 = sub_6b8190(eax_1, nullptr, ebx_1, 1)
                                continue
                        
                        goto label_6c41b6
                    
                    if (var_48 != 0)
                        int32_t eax_5
                        int32_t edx_3
                        edx_3:eax_5 = sx.q((var_48 + eax_1) s>> 2)
                        int32_t temp5_1 = arg1[0x14]
                        arg1[0x14] += eax_5
                        arg1[0x15] = adc.d(arg1[0x15], edx_3, temp5_1 + eax_5 u< temp5_1)
                    
                    void* eax_6 = *(esi_1 + 0x1c)
                    int32_t eax_7
                    
                    if (eax_6 == 0)
                        eax_7 = 0xffffffff
                    else
                        eax_7 = *(eax_6 + 4)
                    
                    int32_t eax_10
                    int32_t edx_4
                    edx_4:eax_10 = sx.q((eax_7 + eax_1) s>> 2)
                    int32_t eax_11 = eax_10 + arg1[0x14]
                    int32_t edx_5 = adc.d(edx_4, arg1[0x15], eax_10 + arg1[0x14] u< eax_10)
                    
                    if (edx_5 s> arg3)
                        esi_2 = arg2
                    else
                        if (edx_5 s>= arg3)
                            esi_2 = arg2
                        
                        if (edx_5 s< arg3 || eax_11 u< esi_2)
                            if (ebx_1 != 0 && *ebx_1 != 0)
                                sub_6b8190(eax_11, nullptr, ebx_1, 1)
                            
                            sub_6c1850(&arg1[0x94], &var_28)
                            eax_1 = sub_6b3850(&arg1[0x78], &arg1[0x94])
                            int32_t var_18
                            int32_t var_14
                            
                            if (var_14 s>= 0xffffffff
                                    && (var_14 s> 0xffffffff || var_18 u> 0xffffffff))
                                int32_t i_2 = arg1[0x18]
                                int32_t ebx_2 = arg1[0x11]
                                eax_1 = i_2 << 4
                                int32_t ecx_12 = var_18 - *(eax_1 + ebx_2)
                                int32_t esi_4 =
                                    sbb.d(var_14, *(eax_1 + ebx_2 + 4), var_18 u< *(eax_1 + ebx_2))
                                ebx_1 = &arg1[0x1e]
                                arg1[0x14] = ecx_12
                                arg1[0x15] = esi_4
                                
                                if (esi_4 s<= 0 && (esi_4 s< 0 || ecx_12 u< 0))
                                    arg1[0x14] = 0
                                    arg1[0x15] = 0
                                
                                if (i_2 s> 0)
                                    int32_t* ecx_14 = arg1[0x11] + 8
                                    int32_t i_1
                                    
                                    do
                                        int32_t eax_13 = *ecx_14
                                        ecx_14 = &ecx_14[4]
                                        int32_t temp16_1 = arg1[0x14]
                                        arg1[0x14] += eax_13
                                        eax_1 = ecx_14[-3]
                                        arg1[0x15] =
                                            adc.d(arg1[0x15], eax_1, temp16_1 + eax_13 u< temp16_1)
                                        i_1 = i_2
                                        i_2 -= 1
                                    while (i_1 != 1)
                            
                            var_48 = var_44_1
                            continue
            
            void* eax_22 = arg1[0x12]
            *(arg1 + 0x68) = zx.o(0)
            int32_t ebx_3 = *(*(eax_22 + 0x1c) + 0xe48)
            int32_t var_48_1 = ebx_3
            int32_t eax_25
            int32_t edx_18
            eax_25, edx_18 = __allshr(esi_2, arg3, ebx_3.b)
            int32_t eax_26
            int32_t edx_19
            eax_26, edx_19 = __allshl(eax_25, edx_18, ebx_3.b)
            int32_t temp2_1 = arg1[0x15]
            
            if (temp2_1 s<= edx_19 && (temp2_1 s< edx_19 || arg1[0x14] u< eax_26))
                while (true)
                    int32_t eax_29
                    int32_t edx_22
                    eax_29, edx_22 = __allshr(esi_2 - arg1[0x14], 
                        sbb.d(arg3, arg1[0x15], esi_2 u< arg1[0x14]), ebx_3.b)
                    int32_t ecx_34 = arg1[0x7e]
                    int32_t esi_7
                    
                    if (ecx_34 s> 0xffffffff)
                        esi_7 = arg1[0x7d]
                    
                    int32_t esi_8
                    
                    if (ecx_34 s<= 0xffffffff || ecx_34 s>= esi_7)
                        esi_8 = 0
                    else
                        esi_8 = esi_7 - ecx_34
                    
                    int32_t eax_31
                    int32_t edx_23
                    edx_23:eax_31 = sx.q(esi_8)
                    
                    if (edx_23 s>= edx_22 && (edx_23 s> edx_22 || eax_31 u> eax_29))
                        esi_8 = eax_29
                    
                    if (esi_8 == 0 || esi_8 + ecx_34 s<= arg1[0x7d])
                        arg1[0x7e] += esi_8
                    
                    int32_t eax_35
                    int32_t edx_24
                    edx_24:eax_35 = sx.q(esi_8 << var_48_1.b)
                    int32_t temp10_1 = arg1[0x14]
                    arg1[0x14] += eax_35
                    arg1[0x15] = adc.d(arg1[0x15], edx_24, temp10_1 + eax_35 u< temp10_1)
                    int32_t eax_37
                    int32_t edx_25
                    edx_25:eax_37 = sx.q(esi_8)
                    
                    if (edx_25 s<= edx_22 && (edx_25 s< edx_22 || eax_37 u< eax_29)
                            && sub_6c2c70(arg1) s<= 0)
                        int32_t eax_39
                        int32_t edx_26
                        eax_39, edx_26 = sub_6c3350(arg1, 0xffffffff)
                        arg1[0x14] = eax_39
                        arg1[0x15] = edx_26
                    
                    ebx_3 = var_48_1
                    esi_2 = arg2
                    int32_t temp12_1 = arg1[0x15]
                    
                    if (temp12_1 s>= edx_19)
                        if (temp12_1 s> edx_19)
                            break
                        
                        if (arg1[0x14] u>= eax_26)
                            break
            
            break

return result
