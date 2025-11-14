// 函数: sub_5aa650
// 地址: 0x5aa650
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (arg2 s>= 0)
    void* esi_1 = data_75d508
    
    if (arg2 s< (*(esi_1 + 0x54) - *(esi_1 + 0x50)) s>> 2)
        void* ecx = *(*(esi_1 + 0x50) + (arg2 << 2))
        
        if (ecx != 0 && arg4 s>= 0 && arg4 s< (*(ecx + 0x20) - *(ecx + 0x1c)) s>> 2)
            arg1 = *(*(ecx + 0x1c) + (arg4 << 2))
            
            if (arg1 != 0)
                arg1 = *(arg1 + 0x1d8)
                
                if (arg1 != 0 && arg5 s>= 0)
                    int32_t eax_5
                    int32_t edx_1
                    edx_1:eax_5 = muls.dp.d(0x1a6d01a7, *(arg1 + 0x18) - *(arg1 + 0x14))
                    int32_t edx_2 = edx_1 s>> 6
                    
                    if (arg5 s< (edx_2 u>> 0x1f) + edx_2)
                        int32_t esi_3 = arg5 * 0x26c
                        void* esi_4 = esi_3 + *(arg1 + 0x14)
                        int128_t var_20
                        int32_t eax_93
                        int32_t ecx_5
                        int32_t ecx_40
                        int32_t ecx_41
                        int32_t ecx_42
                        int32_t ecx_43
                        int32_t edx_5
                        int32_t xmm0_10
                        int32_t xmm0_26
                        int64_t xmm1
                        int64_t xmm1_1
                        float xmm2[0x4]
                        float xmm2_2[0x4]
                        
                        if (esi_3 != neg.d(*(arg1 + 0x14)) && arg3 - 0xa u<= 0x5e)
                            switch (arg3 + &jump_table_5aaf98[0x2c]:2)
                                case &lookup_table_5ab054
                                    *(esi_4 + 0x28) = arg7
                                    *(arg1 + 0x10) += 1
                                    int32_t eax_8
                                    eax_8.b = 1
                                    return eax_8
                                case &lookup_table_5ab054[3]
                                    *(esi_4 + 0x38) = arg7
                                    *(arg1 + 0x10) += 1
                                    int32_t eax_9
                                    eax_9.b = 1
                                    return eax_9
                                case &lookup_table_5ab054[4]
                                    *(esi_4 + 0x44) = arg7
                                    *(arg1 + 0x10) += 1
                                    int32_t eax_10
                                    eax_10.b = 1
                                    return eax_10
                                case &lookup_table_5ab054[5]
                                    *(esi_4 + 0x50) = arg7
                                    *(arg1 + 0x10) += 1
                                    int32_t eax_11
                                    eax_11.b = 1
                                    return eax_11
                                case &lookup_table_5ab054[6]
                                    *(esi_4 + 0x5c) = arg7
                                    *(arg1 + 0x10) += 1
                                    int32_t eax_12
                                    eax_12.b = 1
                                    return eax_12
                                case &lookup_table_5ab054[7]
                                    *(esi_4 + 0x68) = arg7
                                    *(arg1 + 0x10) += 1
                                    int32_t eax_13
                                    eax_13.b = 1
                                    return eax_13
                                case &lookup_table_5ab054[8]
                                    *(esi_4 + 0x74) = arg7
                                    *(arg1 + 0x10) += 1
                                    int32_t eax_14
                                    eax_14.b = 1
                                    return eax_14
                                case &lookup_table_5ab054[9]
                                    *(esi_4 + 0x80) = arg7
                                    *(arg1 + 0x10) += 1
                                    int32_t eax_15
                                    eax_15.b = 1
                                    return eax_15
                                case &lookup_table_5ab054[0xa]
                                    *(esi_4 + 0x8c) = arg7
                                    *(arg1 + 0x10) += 1
                                    int32_t eax_16
                                    eax_16.b = 1
                                    return eax_16
                                case &lookup_table_5ab054[0xb]
                                    *(esi_4 + 0x98) = arg7
                                    *(arg1 + 0x10) += 1
                                    int32_t eax_17
                                    eax_17.b = 1
                                    return eax_17
                                case &lookup_table_5ab054[0xd]
                                    xmm2 = arg7
                                    xmm1 = *(esi_4 + 0xa8)
                                label_5aa82d:
                                    xmm0_10 = *(esi_4 + 0xac)
                                    goto label_5aa842
                                case &lookup_table_5ab054[0xe]
                                    xmm2 = *(esi_4 + 0xa4)
                                    xmm1 = arg7
                                    goto label_5aa82d
                                case &lookup_table_5ab054[0xf]
                                    xmm2 = *(esi_4 + 0xa4)
                                    xmm1 = *(esi_4 + 0xa8)
                                    xmm0_10 = arg7
                                label_5aa842:
                                    *(esi_4 + 0xa4) = _mm_unpacklo_ps(xmm2, xmm1)
                                    *(esi_4 + 0xac) = xmm0_10
                                    *(arg1 + 0x10) += 1
                                    int32_t eax_19
                                    eax_19.b = 1
                                    return eax_19
                                case &lookup_table_5ab054[0x10]
                                    *(esi_4 + 0xb0) = arg7
                                    *(arg1 + 0x10) += 1
                                    int32_t eax_20
                                    eax_20.b = 1
                                    return eax_20
                                case &lookup_table_5ab054[0x13]
                                    *(esi_4 + 0xd8) = arg7
                                    *(arg1 + 0x10) += 1
                                    int32_t eax_21
                                    eax_21.b = 1
                                    return eax_21
                                case &lookup_table_5ab054[0x14]
                                    *(esi_4 + 0xe4) = arg7
                                    *(arg1 + 0x10) += 1
                                    int32_t eax_22
                                    eax_22.b = 1
                                    return eax_22
                                case &lookup_table_5ab054[0x15]
                                    *(esi_4 + 0xf0) = arg7
                                    *(arg1 + 0x10) += 1
                                    int32_t eax_23
                                    eax_23.b = 1
                                    return eax_23
                                case &lookup_table_5ab054[0x16]
                                    *(esi_4 + 0xfc) = arg7
                                    *(arg1 + 0x10) += 1
                                    int32_t eax_24
                                    eax_24.b = 1
                                    return eax_24
                                case &lookup_table_5ab054[0x18]
                                    *(esi_4 + 0x108) = arg7
                                    *(arg1 + 0x10) += 1
                                    int32_t eax_25
                                    eax_25.b = 1
                                    return eax_25
                                case &lookup_table_5ab054[0x19]
                                    *(esi_4 + 0x10c) = arg7
                                    *(arg1 + 0x10) += 1
                                    int32_t eax_26
                                    eax_26.b = 1
                                    return eax_26
                                case &lookup_table_5ab054[0x1a]
                                    *(esi_4 + 0x114) = arg7
                                    *(arg1 + 0x10) += 1
                                    int32_t eax_27
                                    eax_27.b = 1
                                    return eax_27
                                case &lookup_table_5ab054[0x1b]
                                    *(esi_4 + 0x120) = arg7
                                    *(arg1 + 0x10) += 1
                                    int32_t eax_28
                                    eax_28.b = 1
                                    return eax_28
                                case &lookup_table_5ab054[0x1c]
                                    *(esi_4 + 0x12c) = arg7
                                    *(arg1 + 0x10) += 1
                                    int32_t eax_29
                                    eax_29.b = 1
                                    return eax_29
                                case &lookup_table_5ab054[0x1d]
                                    *(esi_4 + 0x138) = arg7
                                    *(arg1 + 0x10) += 1
                                    int32_t eax_30
                                    eax_30.b = 1
                                    return eax_30
                                case &lookup_table_5ab054[0x1e]
                                    *(esi_4 + 0x144) = arg7
                                    *(arg1 + 0x10) += 1
                                    int32_t eax_31
                                    eax_31.b = 1
                                    return eax_31
                                case &lookup_table_5ab054[0x1f]
                                    *(esi_4 + 0x150) = arg7
                                    *(arg1 + 0x10) += 1
                                    int32_t eax_32
                                    eax_32.b = 1
                                    return eax_32
                                case &lookup_table_5ab054[0x20]
                                    *(esi_4 + 0x15c) = arg7
                                    *(arg1 + 0x10) += 1
                                    int32_t eax_33
                                    eax_33.b = 1
                                    return eax_33
                                case &lookup_table_5ab054[0x21]
                                    *(esi_4 + 0x168) = arg7
                                    *(arg1 + 0x10) += 1
                                    int32_t eax_34
                                    eax_34.b = 1
                                    return eax_34
                                case &lookup_table_5ab054[0x29]
                                    if (arg6 s>= 0)
                                        int32_t eax_35
                                        int32_t edx_3
                                        edx_3:eax_35 = muls.dp.d(0x38e38e39, 
                                            *(esi_4 + 0x1a0) - *(esi_4 + 0x19c))
                                        int32_t edx_4 = edx_3 s>> 3
                                        
                                        if (arg6 s< (edx_4 u>> 0x1f) + edx_4)
                                            ecx_5 = *(esi_4 + 0x19c)
                                            edx_5 = arg6 * 9
                                            xmm2_2 = arg7
                                            xmm1_1 = *(ecx_5 + (edx_5 << 2) + 0x10)
                                        label_5aaa6d:
                                            xmm0_26 = *(ecx_5 + (edx_5 << 2) + 0x14)
                                            goto label_5aaa80
                                case &lookup_table_5ab054[0x2a]
                                    if (arg6 s>= 0)
                                        int32_t eax_40
                                        int32_t edx_6
                                        edx_6:eax_40 = muls.dp.d(0x38e38e39, 
                                            *(esi_4 + 0x1a0) - *(esi_4 + 0x19c))
                                        int32_t edx_7 = edx_6 s>> 3
                                        
                                        if (arg6 s< (edx_7 u>> 0x1f) + edx_7)
                                            ecx_5 = *(esi_4 + 0x19c)
                                            edx_5 = arg6 * 9
                                            xmm1_1 = arg7
                                            xmm2_2 = *(ecx_5 + (edx_5 << 2) + 0xc)
                                            goto label_5aaa6d
                                case &lookup_table_5ab054[0x2b]
                                    if (arg6 s>= 0)
                                        int32_t eax_43
                                        int32_t edx_8
                                        edx_8:eax_43 = muls.dp.d(0x38e38e39, 
                                            *(esi_4 + 0x1a0) - *(esi_4 + 0x19c))
                                        int32_t edx_9 = edx_8 s>> 3
                                        
                                        if (arg6 s< (edx_9 u>> 0x1f) + edx_9)
                                            ecx_5 = *(esi_4 + 0x19c)
                                            edx_5 = arg6 * 9
                                            xmm0_26 = arg7
                                            xmm2_2 = *(ecx_5 + (edx_5 << 2) + 0xc)
                                            xmm1_1 = *(ecx_5 + (edx_5 << 2) + 0x10)
                                        label_5aaa80:
                                            *(ecx_5 + (edx_5 << 2) + 0xc) =
                                                _mm_unpacklo_ps(xmm2_2, xmm1_1)
                                            *(ecx_5 + (edx_5 << 2) + 0x14) = xmm0_26
                                            *(arg1 + 0x10) += 1
                                            int32_t eax_39
                                            eax_39.b = 1
                                            return eax_39
                                case &lookup_table_5ab054[0x2c]
                                    if (arg6 s>= 0)
                                        int32_t eax_46
                                        int32_t edx_10
                                        edx_10:eax_46 = muls.dp.d(0x38e38e39, 
                                            *(esi_4 + 0x1a0) - *(esi_4 + 0x19c))
                                        int32_t edx_11 = edx_10 s>> 3
                                        
                                        if (arg6 s< (edx_11 u>> 0x1f) + edx_11)
                                            *(*(esi_4 + 0x19c) + arg6 * 0x24 + 0x18) = arg7
                                            *(arg1 + 0x10) += 1
                                            int32_t eax_50
                                            eax_50.b = 1
                                            return eax_50
                                case &lookup_table_5ab054[0x2d]
                                    if (arg6 s>= 0)
                                        int32_t eax_51
                                        int32_t edx_12
                                        edx_12:eax_51 = muls.dp.d(0x38e38e39, 
                                            *(esi_4 + 0x1a0) - *(esi_4 + 0x19c))
                                        int32_t edx_13 = edx_12 s>> 3
                                        
                                        if (arg6 s< (edx_13 u>> 0x1f) + edx_13)
                                            *(*(esi_4 + 0x19c) + arg6 * 0x24 + 0x1c) = arg7
                                            *(arg1 + 0x10) += 1
                                            int32_t eax_55
                                            eax_55.b = 1
                                            return eax_55
                                case &lookup_table_5ab054[0x34]
                                    if (arg6 s>= 0)
                                        int32_t eax_56
                                        int32_t edx_14
                                        edx_14:eax_56 = muls.dp.d(0x66666667, 
                                            *(esi_4 + 0x1ac) - *(esi_4 + 0x1a8))
                                        int32_t edx_15 = edx_14 s>> 3
                                        
                                        if (arg6 s< (edx_15 u>> 0x1f) + edx_15)
                                            *(*(esi_4 + 0x1a8) + arg6 * 0x14 + 0xc) = arg7
                                            *(arg1 + 0x10) += 1
                                            int32_t eax_60
                                            eax_60.b = 1
                                            return eax_60
                                case &lookup_table_5ab054[0x3a]
                                    if (arg6 s>= 0)
                                        int32_t eax_61
                                        int32_t edx_16
                                        edx_16:eax_61 = muls.dp.d(0x66666667, 
                                            *(esi_4 + 0x1b8) - *(esi_4 + 0x1b4))
                                        int32_t edx_17 = edx_16 s>> 3
                                        
                                        if (arg6 s< (edx_17 u>> 0x1f) + edx_17)
                                            *(*(esi_4 + 0x1b4) + arg6 * 0x14 + 0xc) = arg7
                                            *(arg1 + 0x10) += 1
                                            int32_t eax_65
                                            eax_65.b = 1
                                            return eax_65
                                case &lookup_table_5ab054[0x40]
                                    if (arg6 s>= 0)
                                        int32_t eax_66
                                        int32_t edx_18
                                        edx_18:eax_66 = muls.dp.d(0x66666667, 
                                            *(esi_4 + 0x1c4) - *(esi_4 + 0x1c0))
                                        int32_t edx_19 = edx_18 s>> 3
                                        
                                        if (arg6 s< (edx_19 u>> 0x1f) + edx_19)
                                            *(*(esi_4 + 0x1c0) + arg6 * 0x14 + 0xc) = arg7
                                            *(arg1 + 0x10) += 1
                                            int32_t eax_70
                                            eax_70.b = 1
                                            return eax_70
                                case &lookup_table_5ab054[0x46]
                                    if (arg6 s>= 0 && arg6
                                            s< (*(esi_4 + 0x1d0) - *(esi_4 + 0x1cc)) s/ 0x1c)
                                        *(*(esi_4 + 0x1cc) + arg6 * 0x1c + 0xc) = arg7
                                        *(arg1 + 0x10) += 1
                                        int32_t eax_75
                                        eax_75.b = 1
                                        return eax_75
                                case &lookup_table_5ab054[0x47]
                                    if (arg6 s>= 0 && arg6
                                            s< (*(esi_4 + 0x1d0) - *(esi_4 + 0x1cc)) s/ 0x1c)
                                        *(*(esi_4 + 0x1cc) + arg6 * 0x1c + 0x10) = arg7
                                        *(arg1 + 0x10) += 1
                                        int32_t eax_80
                                        eax_80.b = 1
                                        return eax_80
                                case &lookup_table_5ab054[0x48]
                                    if (arg6 s>= 0 && arg6
                                            s< (*(esi_4 + 0x1d0) - *(esi_4 + 0x1cc)) s/ 0x1c)
                                        *(*(esi_4 + 0x1cc) + arg6 * 0x1c + 0x14) = arg7
                                        *(arg1 + 0x10) += 1
                                        int32_t eax_85
                                        eax_85.b = 1
                                        return eax_85
                                case &lookup_table_5ab054[0x4e]
                                    if (arg6 s>= 0)
                                        int32_t eax_86
                                        int32_t edx_29
                                        edx_29:eax_86 = muls.dp.d(0x66666667, 
                                            *(esi_4 + 0x1dc) - *(esi_4 + 0x1d8))
                                        int32_t edx_30 = edx_29 s>> 3
                                        
                                        if (arg6 s< (edx_30 u>> 0x1f) + edx_30)
                                            *(*(esi_4 + 0x1d8) + arg6 * 0x14 + 0xc) = arg7
                                            *(arg1 + 0x10) += 1
                                            int32_t eax_90
                                            eax_90.b = 1
                                            return eax_90
                                case &lookup_table_5ab054[0x54]
                                    ecx_40 = arg6
                                    
                                    if (ecx_40 s>= 0 && ecx_40
                                            s< (*(esi_4 + 0x1e8) - *(esi_4 + 0x1e4)) s>> 5)
                                        eax_93 = *(esi_4 + 0x1e4)
                                    label_5aae59:
                                        ecx_43 = ecx_40 << 5
                                        var_20 = *(ecx_43 + eax_93 + 0xc)
                                        var_20.d = arg7
                                    label_5aaf7b:
                                        *(ecx_43 + eax_93 + 0xc) = var_20
                                        *(arg1 + 0x10) += 1
                                        int32_t eax_104
                                        eax_104.b = 1
                                        return eax_104
                                case &lookup_table_5ab054[0x55]
                                    ecx_41 = arg6
                                    
                                    if (ecx_41 s>= 0 && ecx_41
                                            s< (*(esi_4 + 0x1e8) - *(esi_4 + 0x1e4)) s>> 5)
                                        eax_93 = *(esi_4 + 0x1e4)
                                    label_5aaea0:
                                        ecx_43 = ecx_41 << 5
                                        var_20 = *(ecx_43 + eax_93 + 0xc)
                                        var_20:4.d = arg7
                                        goto label_5aaf7b
                                case &lookup_table_5ab054[0x56]
                                    ecx_42 = arg6
                                    
                                    if (ecx_42 s>= 0 && ecx_42
                                            s< (*(esi_4 + 0x1e8) - *(esi_4 + 0x1e4)) s>> 5)
                                        eax_93 = *(esi_4 + 0x1e4)
                                    label_5aaf5b:
                                        ecx_43 = ecx_42 << 5
                                        var_20 = *(ecx_43 + eax_93 + 0xc)
                                        int32_t var_18_3 = arg7
                                        goto label_5aaf7b
                                case &lookup_table_5ab054[0x5c]
                                    ecx_40 = arg6
                                    
                                    if (ecx_40 s>= 0 && ecx_40
                                            s< (*(esi_4 + 0x1f4) - *(esi_4 + 0x1f0)) s>> 5)
                                        eax_93 = *(esi_4 + 0x1f0)
                                        goto label_5aae59
                                case &lookup_table_5ab054[0x5d]
                                    ecx_41 = arg6
                                    
                                    if (ecx_41 s>= 0 && ecx_41
                                            s< (*(esi_4 + 0x1f4) - *(esi_4 + 0x1f0)) s>> 5)
                                        eax_93 = *(esi_4 + 0x1f0)
                                        goto label_5aaea0
                                case &lookup_table_5ab054[0x5e]
                                    ecx_42 = arg6
                                    
                                    if (ecx_42 s>= 0 && ecx_42
                                            s< (*(esi_4 + 0x1f4) - *(esi_4 + 0x1f0)) s>> 5)
                                        eax_93 = *(esi_4 + 0x1f0)
                                        goto label_5aaf5b

arg1.b = 0
return arg1
