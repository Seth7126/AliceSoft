// 函数: sub_5a9d00
// 地址: 0x5a9d00
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = arg3

if (arg2 s>= 0)
    void* esi_1 = data_75d508
    
    if (arg2 s< (*(esi_1 + 0x54) - *(esi_1 + 0x50)) s>> 2)
        void* ecx = *(*(esi_1 + 0x50) + (arg2 << 2))
        
        if (ecx != 0 && arg4 s>= 0 && arg4 s< (*(ecx + 0x20) - *(ecx + 0x1c)) s>> 2)
            arg1 = *(*(ecx + 0x1c) + (arg4 << 2))
            
            if (arg1 != 0)
                void* ebx_1 = *(arg1 + 0x1d8)
                
                if (ebx_1 != 0 && arg5 s>= 0)
                    int32_t eax_5
                    int32_t edx_1
                    edx_1:eax_5 = muls.dp.d(0x1a6d01a7, *(ebx_1 + 0x18) - *(ebx_1 + 0x14))
                    int32_t edx_2 = edx_1 s>> 6
                    
                    if (arg5 s< (edx_2 u>> 0x1f) + edx_2)
                        int32_t esi_3 = arg5 * 0x26c
                        void* esi_4 = esi_3 + *(ebx_1 + 0x14)
                        int32_t var_20_2
                        int32_t var_1c_4
                        void* ecx_16
                        
                        if (esi_3 != neg.d(*(ebx_1 + 0x14)) && arg3 - 4 u<= 0x6b)
                            switch (arg3 + &jump_table_5aa518[0x30])
                                case &lookup_table_5aa5dc
                                    *(esi_4 + 4) = arg7
                                    int32_t eax_8
                                    eax_8.b = 1
                                    *(ebx_1 + 0x10) += 1
                                    return eax_8
                                case &lookup_table_5aa5dc[2]
                                    *(esi_4 + 0x20) = arg7
                                    int32_t eax_9
                                    eax_9.b = 1
                                    *(ebx_1 + 0x10) += 1
                                    return eax_9
                                case &lookup_table_5aa5dc[5]
                                    *(esi_4 + 0x24) = arg7
                                    int32_t eax_10
                                    eax_10.b = 1
                                    *(ebx_1 + 0x10) += 1
                                    return eax_10
                                case &lookup_table_5aa5dc[7]
                                    *(esi_4 + 0x2c) = arg7
                                    int32_t eax_11
                                    eax_11.b = 1
                                    *(ebx_1 + 0x10) += 1
                                    return eax_11
                                case &lookup_table_5aa5dc[8]
                                    *(esi_4 + 0x30) = arg7
                                    int32_t eax_12
                                    eax_12.b = 1
                                    *(ebx_1 + 0x10) += 1
                                    return eax_12
                                case &lookup_table_5aa5dc[0x12]
                                    *(esi_4 + 0xa0) = arg7
                                    int32_t eax_13
                                    eax_13.b = 1
                                    *(ebx_1 + 0x10) += 1
                                    return eax_13
                                case &lookup_table_5aa5dc[0x17]
                                    *(esi_4 + 0xb4) = arg7
                                    int32_t eax_14
                                    eax_14.b = 1
                                    *(ebx_1 + 0x10) += 1
                                    return eax_14
                                case &lookup_table_5aa5dc[0x18]
                                    *(esi_4 + 0xd0) = arg7
                                    int32_t eax_15
                                    eax_15.b = 1
                                    *(ebx_1 + 0x10) += 1
                                    return eax_15
                                case &lookup_table_5aa5dc[0x1d]
                                    arg1.b = arg7 != 0
                                    *(esi_4 + 0x104) = arg1.b
                                    arg1.b = 1
                                    *(ebx_1 + 0x10) += 1
                                    return arg1
                                case &lookup_table_5aa5dc[0x28]
                                    *(esi_4 + 0x170) = arg7
                                    int32_t eax_16
                                    eax_16.b = 1
                                    *(ebx_1 + 0x10) += 1
                                    return eax_16
                                case &lookup_table_5aa5dc[0x2d]
                                    if (arg6 s>= 0)
                                        int32_t eax_17
                                        int32_t edx_3
                                        edx_3:eax_17 = muls.dp.d(0x38e38e39, 
                                            *(esi_4 + 0x1a0) - *(esi_4 + 0x19c))
                                        int32_t edx_4 = edx_3 s>> 3
                                        
                                        if (arg6 s< (edx_4 u>> 0x1f) + edx_4)
                                            arg1 = sub_5ad600(esi_4 + 0x19c, arg6, arg7)
                                        label_5a9fc7:
                                            
                                            if (arg1.b != 0)
                                                goto label_5aa4ca
                                case &lookup_table_5aa5dc[0x2e]
                                    if (arg6 s>= 0)
                                        int32_t eax_20
                                        int32_t edx_5
                                        edx_5:eax_20 = muls.dp.d(0x38e38e39, 
                                            *(esi_4 + 0x1a0) - *(esi_4 + 0x19c))
                                        int32_t edx_6 = edx_5 s>> 3
                                        
                                        if (arg6 s< (edx_6 u>> 0x1f) + edx_6)
                                            *(*(esi_4 + 0x19c) + arg6 * 0x24 + 4) = arg7
                                            int32_t eax_23
                                            eax_23.b = 1
                                            *(ebx_1 + 0x10) += 1
                                            return eax_23
                                case &lookup_table_5aa5dc[0x34]
                                    int32_t var_1c_2 = arg7
                                    sub_5ad320(esi_4 + 0x19c)
                                    *(ebx_1 + 0x10) += 1
                                    int32_t* eax_24
                                    eax_24.b = 1
                                    return eax_24
                                case &lookup_table_5aa5dc[0x35]
                                    sub_5ad5a0(esi_4 + 0x19c, arg7)
                                    *(ebx_1 + 0x10) += 1
                                    int32_t* eax_25
                                    eax_25.b = 1
                                    return eax_25
                                case &lookup_table_5aa5dc[0x36]
                                    if (arg6 s>= 0)
                                        int32_t eax_26
                                        int32_t edx_8
                                        edx_8:eax_26 = muls.dp.d(0x38e38e39, 
                                            *(esi_4 + 0x1a0) - *(esi_4 + 0x19c))
                                        int32_t edx_9 = edx_8 s>> 3
                                        
                                        if (arg6 s< (edx_9 u>> 0x1f) + edx_9)
                                            *(*(esi_4 + 0x19c) + arg6 * 0x24 + 0x20) = arg7
                                            int32_t eax_29
                                            eax_29.b = 1
                                            return eax_29
                                case &lookup_table_5aa5dc[0x38]
                                    if (arg6 s>= 0)
                                        int32_t eax_30
                                        int32_t edx_11
                                        edx_11:eax_30 = muls.dp.d(0x66666667, 
                                            *(esi_4 + 0x1ac) - *(esi_4 + 0x1a8))
                                        int32_t edx_12 = edx_11 s>> 3
                                        
                                        if (arg6 s< (edx_12 u>> 0x1f) + edx_12)
                                            var_1c_4 = arg7
                                            ecx_16 = esi_4 + 0x1a8
                                            var_20_2 = arg6
                                        label_5a9fc2:
                                            arg1 = sub_5ad920(ecx_16, var_20_2, var_1c_4)
                                            goto label_5a9fc7
                                case &lookup_table_5aa5dc[0x39]
                                    if (arg6 s>= 0)
                                        int32_t eax_33
                                        int32_t edx_13
                                        edx_13:eax_33 = muls.dp.d(0x66666667, 
                                            *(esi_4 + 0x1ac) - *(esi_4 + 0x1a8))
                                        int32_t edx_14 = edx_13 s>> 3
                                        
                                        if (arg6 s< (edx_14 u>> 0x1f) + edx_14)
                                            *(*(esi_4 + 0x1a8) + arg6 * 0x14 + 4) = arg7
                                            int32_t eax_36
                                            eax_36.b = 1
                                            *(ebx_1 + 0x10) += 1
                                            return eax_36
                                case &lookup_table_5aa5dc[0x3b]
                                    int32_t var_1c_5 = arg7
                                    sub_5ad670(esi_4 + 0x1a8)
                                    *(ebx_1 + 0x10) += 1
                                    int32_t* eax_37
                                    eax_37.b = 1
                                    return eax_37
                                case &lookup_table_5aa5dc[0x3c]
                                    sub_5ad8c0(esi_4 + 0x1a8, arg7)
                                    *(ebx_1 + 0x10) += 1
                                    int32_t* eax_38
                                    eax_38.b = 1
                                    return eax_38
                                case &lookup_table_5aa5dc[0x3e]
                                    if (arg6 s>= 0)
                                        int32_t eax_39
                                        int32_t edx_16
                                        edx_16:eax_39 = muls.dp.d(0x66666667, 
                                            *(esi_4 + 0x1b8) - *(esi_4 + 0x1b4))
                                        int32_t edx_17 = edx_16 s>> 3
                                        
                                        if (arg6 s< (edx_17 u>> 0x1f) + edx_17)
                                            var_1c_4 = arg7
                                            ecx_16 = esi_4 + 0x1b4
                                            var_20_2 = arg6
                                            goto label_5a9fc2
                                case &lookup_table_5aa5dc[0x3f]
                                    if (arg6 s>= 0)
                                        int32_t eax_42
                                        int32_t edx_18
                                        edx_18:eax_42 = muls.dp.d(0x66666667, 
                                            *(esi_4 + 0x1b8) - *(esi_4 + 0x1b4))
                                        int32_t edx_19 = edx_18 s>> 3
                                        
                                        if (arg6 s< (edx_19 u>> 0x1f) + edx_19)
                                            *(*(esi_4 + 0x1b4) + arg6 * 0x14 + 4) = arg7
                                            int32_t eax_45
                                            eax_45.b = 1
                                            *(ebx_1 + 0x10) += 1
                                            return eax_45
                                case &lookup_table_5aa5dc[0x41]
                                    int32_t var_1c_7 = arg7
                                    sub_5ad670(esi_4 + 0x1b4)
                                    *(ebx_1 + 0x10) += 1
                                    int32_t* eax_46
                                    eax_46.b = 1
                                    return eax_46
                                case &lookup_table_5aa5dc[0x42]
                                    sub_5ad8c0(esi_4 + 0x1b4, arg7)
                                    *(ebx_1 + 0x10) += 1
                                    int32_t* eax_47
                                    eax_47.b = 1
                                    return eax_47
                                case &lookup_table_5aa5dc[0x44]
                                    if (arg6 s>= 0)
                                        int32_t eax_48
                                        int32_t edx_21
                                        edx_21:eax_48 = muls.dp.d(0x66666667, 
                                            *(esi_4 + 0x1c4) - *(esi_4 + 0x1c0))
                                        int32_t edx_22 = edx_21 s>> 3
                                        
                                        if (arg6 s< (edx_22 u>> 0x1f) + edx_22)
                                            var_1c_4 = arg7
                                            ecx_16 = esi_4 + 0x1c0
                                            var_20_2 = arg6
                                            goto label_5a9fc2
                                case &lookup_table_5aa5dc[0x45]
                                    if (arg6 s>= 0)
                                        int32_t eax_51
                                        int32_t edx_23
                                        edx_23:eax_51 = muls.dp.d(0x66666667, 
                                            *(esi_4 + 0x1c4) - *(esi_4 + 0x1c0))
                                        int32_t edx_24 = edx_23 s>> 3
                                        
                                        if (arg6 s< (edx_24 u>> 0x1f) + edx_24)
                                            *(*(esi_4 + 0x1c0) + arg6 * 0x14 + 4) = arg7
                                            int32_t eax_54
                                            eax_54.b = 1
                                            *(ebx_1 + 0x10) += 1
                                            return eax_54
                                case &lookup_table_5aa5dc[0x47]
                                    int32_t var_1c_9 = arg7
                                    sub_5ad670(esi_4 + 0x1c0)
                                    *(ebx_1 + 0x10) += 1
                                    int32_t* eax_55
                                    eax_55.b = 1
                                    return eax_55
                                case &lookup_table_5aa5dc[0x48]
                                    sub_5ad8c0(esi_4 + 0x1c0, arg7)
                                    *(ebx_1 + 0x10) += 1
                                    int32_t* eax_56
                                    eax_56.b = 1
                                    return eax_56
                                case &lookup_table_5aa5dc[0x4a]
                                    if (arg6 s>= 0 && arg6
                                            s< (*(esi_4 + 0x1d0) - *(esi_4 + 0x1cc)) s/ 0x1c)
                                        arg1 = sub_5adc80(esi_4 + 0x1cc, arg6, arg7)
                                        goto label_5a9fc7
                                case &lookup_table_5aa5dc[0x4b]
                                    if (arg6 s>= 0 && arg6
                                            s< (*(esi_4 + 0x1d0) - *(esi_4 + 0x1cc)) s/ 0x1c)
                                        *(*(esi_4 + 0x1cc) + arg6 * 0x1c + 4) = arg7
                                        int32_t eax_63
                                        eax_63.b = 1
                                        *(ebx_1 + 0x10) += 1
                                        return eax_63
                                case &lookup_table_5aa5dc[0x4f]
                                    int32_t var_1c_12 = arg7
                                    sub_5ad990(esi_4 + 0x1cc)
                                    *(ebx_1 + 0x10) += 1
                                    int32_t* eax_64
                                    eax_64.b = 1
                                    return eax_64
                                case &lookup_table_5aa5dc[0x50]
                                    sub_5adc20(esi_4 + 0x1cc, arg7)
                                    *(ebx_1 + 0x10) += 1
                                    int32_t* eax_65
                                    eax_65.b = 1
                                    return eax_65
                                case &lookup_table_5aa5dc[0x52]
                                    if (arg6 s>= 0)
                                        int32_t eax_66
                                        int32_t edx_34
                                        edx_34:eax_66 = muls.dp.d(0x66666667, 
                                            *(esi_4 + 0x1dc) - *(esi_4 + 0x1d8))
                                        int32_t edx_35 = edx_34 s>> 3
                                        
                                        if (arg6 s< (edx_35 u>> 0x1f) + edx_35)
                                            arg1 = sub_5adfc0(esi_4 + 0x1d8, arg6, arg7)
                                            goto label_5a9fc7
                                case &lookup_table_5aa5dc[0x53]
                                    if (arg6 s>= 0)
                                        int32_t eax_69
                                        int32_t edx_36
                                        edx_36:eax_69 = muls.dp.d(0x66666667, 
                                            *(esi_4 + 0x1dc) - *(esi_4 + 0x1d8))
                                        int32_t edx_37 = edx_36 s>> 3
                                        
                                        if (arg6 s< (edx_37 u>> 0x1f) + edx_37)
                                            *(*(esi_4 + 0x1d8) + arg6 * 0x14 + 4) = arg7
                                            int32_t eax_72
                                            eax_72.b = 1
                                            *(ebx_1 + 0x10) += 1
                                            return eax_72
                                case &lookup_table_5aa5dc[0x55]
                                    int32_t var_1c_15 = arg7
                                    sub_5add10(esi_4 + 0x1d8)
                                    *(ebx_1 + 0x10) += 1
                                    int32_t* eax_73
                                    eax_73.b = 1
                                    return eax_73
                                case &lookup_table_5aa5dc[0x56]
                                    sub_5adf60(esi_4 + 0x1d8, arg7)
                                    *(ebx_1 + 0x10) += 1
                                    int32_t* eax_74
                                    eax_74.b = 1
                                    return eax_74
                                case &lookup_table_5aa5dc[0x58]
                                    if (arg6 s>= 0
                                            && arg6 s< (*(esi_4 + 0x1e8) - *(esi_4 + 0x1e4)) s>> 5)
                                        arg1 = sub_5ae2e0(esi_4 + 0x1e4, arg6, arg7)
                                        goto label_5a9fc7
                                case &lookup_table_5aa5dc[0x59]
                                    if (arg6 s>= 0
                                            && arg6 s< (*(esi_4 + 0x1e8) - *(esi_4 + 0x1e4)) s>> 5)
                                        *((arg6 << 5) + *(esi_4 + 0x1e4) + 4) = arg7
                                        int32_t eax_79
                                        eax_79.b = 1
                                        *(ebx_1 + 0x10) += 1
                                        return eax_79
                                case &lookup_table_5aa5dc[0x5d]
                                    int32_t var_1c_18 = arg7
                                    sub_5ae030(esi_4 + 0x1e4)
                                    *(ebx_1 + 0x10) += 1
                                    int32_t* eax_80
                                    eax_80.b = 1
                                    return eax_80
                                case &lookup_table_5aa5dc[0x5e]
                                    sub_5ae280(esi_4 + 0x1e4, arg7)
                                    *(ebx_1 + 0x10) += 1
                                    int32_t* eax_81
                                    eax_81.b = 1
                                    return eax_81
                                case &lookup_table_5aa5dc[0x60]
                                    if (arg6 s>= 0
                                            && arg6 s< (*(esi_4 + 0x1f4) - *(esi_4 + 0x1f0)) s>> 5)
                                        arg1 = sub_5ae610(esi_4 + 0x1f0, arg6, arg7)
                                        goto label_5a9fc7
                                case &lookup_table_5aa5dc[0x61]
                                    if (arg6 s>= 0
                                            && arg6 s< (*(esi_4 + 0x1f4) - *(esi_4 + 0x1f0)) s>> 5)
                                        *((arg6 << 5) + *(esi_4 + 0x1f0) + 4) = arg7
                                        int32_t eax_86
                                        eax_86.b = 1
                                        *(ebx_1 + 0x10) += 1
                                        return eax_86
                                case &lookup_table_5aa5dc[0x65]
                                    int32_t var_1c_21 = arg7
                                    sub_5ae330(esi_4 + 0x1f0)
                                    *(ebx_1 + 0x10) += 1
                                    int32_t* eax_87
                                    eax_87.b = 1
                                    return eax_87
                                case &lookup_table_5aa5dc[0x66]
                                    sub_5ae5b0(esi_4 + 0x1f0, arg7)
                                    *(ebx_1 + 0x10) += 1
                                    int32_t* eax_88
                                    eax_88.b = 1
                                    return eax_88
                                case &lookup_table_5aa5dc[0x67]
                                    arg1.b = arg7 != 0
                                    *(esi_4 + 0x1fc) = arg1.b
                                    arg1.b = 1
                                    *(ebx_1 + 0x10) += 1
                                    return arg1
                                case &lookup_table_5aa5dc[0x68]
                                    *(esi_4 + 0x200) = arg7
                                label_5aa4ca:
                                    *(ebx_1 + 0x10) += 1
                                    arg1.b = 1
                                    return arg1
                                case &lookup_table_5aa5dc[0x69]
                                    arg1.b = arg7 != 0
                                    *(esi_4 + 0x204) = arg1.b
                                    arg1.b = 1
                                    return arg1
                                case &lookup_table_5aa5dc[0x6a]
                                    arg1.b = arg7 != 0
                                    *(esi_4 + 0x205) = arg1.b
                                    arg1.b = 1
                                    return arg1
                                case &lookup_table_5aa5dc[0x6b]
                                    arg1.b = arg7 != 0
                                    *(esi_4 + 0x206) = arg1.b
                                    arg1.b = 1
                                    return arg1

arg1.b = 0
return arg1
