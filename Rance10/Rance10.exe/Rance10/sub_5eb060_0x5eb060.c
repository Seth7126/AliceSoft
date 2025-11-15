// 函数: sub_5eb060
// 地址: 0x5eb060
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_c = arg3
int32_t* ebx = sub_566690(data_7fd4cc, arg2, arg4)
int32_t eax

if (ebx != 0 && arg5 s>= 0)
    int32_t eax_1
    int32_t edx
    edx:eax_1 = muls.dp.d(0x4da637d, ebx[2] - ebx[1])
    int32_t edx_1 = edx s>> 4
    
    if (arg5 s< (edx_1 u>> 0x1f) + edx_1)
        int32_t esi_2 = arg5 * 0x34c
        int32_t* esi_3 = esi_2 + ebx[1]
        int32_t var_20_2
        int32_t var_1c_4
        int32_t* ecx_14
        
        if (esi_2 != neg.d(ebx[1]) && arg3 - 4 u<= 0xae)
            switch (arg3 + &jump_table_5ebbf0[0x4d])
                case &lookup_table_5ebd28
                    esi_3[1] = arg7
                    int32_t eax_4
                    eax_4.b = 1
                    *ebx += 1
                    return eax_4
                case &lookup_table_5ebd28[1]
                    *esi_3 = arg7
                    int32_t eax_5
                    eax_5.b = 1
                    *ebx += 1
                    return eax_5
                case &lookup_table_5ebd28[2]
                    esi_3[0xcc] = arg7
                    int32_t eax_6
                    eax_6.b = 1
                    *ebx += 1
                    return eax_6
                case &lookup_table_5ebd28[4]
                    esi_3[8] = arg7
                    int32_t eax_7
                    eax_7.b = 1
                    *ebx += 1
                    return eax_7
                case &lookup_table_5ebd28[7]
                    esi_3[9] = arg7
                    int32_t eax_8
                    eax_8.b = 1
                    *ebx += 1
                    return eax_8
                case &lookup_table_5ebd28[0xb]
                    esi_3[0xd] = arg7
                    int32_t eax_9
                    eax_9.b = 1
                    *ebx += 1
                    return eax_9
                case &lookup_table_5ebd28[0xc]
                    esi_3[0xe] = arg7
                    int32_t eax_10
                    eax_10.b = 1
                    *ebx += 1
                    return eax_10
                case &lookup_table_5ebd28[0xd]
                    esi_3[0x10] = arg7
                    int32_t eax_11
                    eax_11.b = 1
                    *ebx += 1
                    return eax_11
                case &lookup_table_5ebd28[0x16]
                    eax.b = arg7 != 0
                    esi_3[0x2a].b = eax.b
                    eax.b = 1
                    *ebx += 1
                    return eax
                case &lookup_table_5ebd28[0x17]
                    eax.b = arg7 != 0
                    *(esi_3 + 0xa9) = eax.b
                    eax.b = 1
                    *ebx += 1
                    return eax
                case &lookup_table_5ebd28[0x18]
                    eax.b = arg7 != 0
                    *(esi_3 + 0xaa) = eax.b
                    eax.b = 1
                    *ebx += 1
                    return eax
                case &lookup_table_5ebd28[0x19]
                    eax.b = arg7 != 0
                    *(esi_3 + 0xab) = eax.b
                    eax.b = 1
                    *ebx += 1
                    return eax
                case &lookup_table_5ebd28[0x1d]
                    esi_3[0x34] = arg7
                    int32_t eax_12
                    eax_12.b = 1
                    *ebx += 1
                    return eax_12
                case &lookup_table_5ebd28[0x23]
                    esi_3[0x3a] = arg7
                    int32_t eax_13
                    eax_13.b = 1
                    *ebx += 1
                    return eax_13
                case &lookup_table_5ebd28[0x26]
                    esi_3[0x42] = arg7
                    int32_t eax_14
                    eax_14.b = 1
                    *ebx += 1
                    return eax_14
                case &lookup_table_5ebd28[0x27]
                    esi_3[0x49] = arg7
                    int32_t eax_15
                    eax_15.b = 1
                    *ebx += 1
                    return eax_15
                case &lookup_table_5ebd28[0x30]
                    eax.b = arg7 != 0
                    esi_3[0x5a].b = eax.b
                    eax.b = 1
                    *ebx += 1
                    return eax
                case &lookup_table_5ebd28[0x39]
                    eax.b = arg7 != 0
                    esi_3[0x6f].b = eax.b
                    eax.b = 1
                    *ebx += 1
                    return eax
                case &lookup_table_5ebd28[0x3a]
                    eax.b = arg7 != 0
                    *(esi_3 + 0x1bd) = eax.b
                    eax.b = 1
                    *ebx += 1
                    return eax
                case &lookup_table_5ebd28[0x3b]
                    eax.b = arg7 != 0
                    *(esi_3 + 0x1be) = eax.b
                    eax.b = 1
                    *ebx += 1
                    return eax
                case &lookup_table_5ebd28[0x4a]
                    esi_3[0x82] = arg7
                    int32_t eax_16
                    eax_16.b = 1
                    *ebx += 1
                    return eax_16
                case &lookup_table_5ebd28[0x4b]
                    eax.b = arg7 != 0
                    esi_3[0x83].b = eax.b
                    eax.b = 1
                    *ebx += 1
                    return eax
                case &lookup_table_5ebd28[0x4c]
                    eax.b = arg7 != 0
                    *(esi_3 + 0x20d) = eax.b
                    eax.b = 1
                    *ebx += 1
                    return eax
                case &lookup_table_5ebd28[0x53]
                    if (arg6 s>= 0 && arg6 s< (esi_3[0xa4] - esi_3[0xa3]) s>> 2)
                        *(esi_3[0xa3] + (arg6 << 2)) = arg7
                        int32_t eax_19
                        eax_19.b = 1
                        *ebx += 1
                        return eax_19
                case &lookup_table_5ebd28[0x55]
                    if (arg6 s>= 0 && arg6 s< (esi_3[0xa7] - esi_3[0xa6]) s/ 0x1c)
                        eax = sub_5efde0(&esi_3[0xa6], arg6, arg7)
                    label_5eb3f2:
                        
                        if (eax.b != 0)
                            goto label_5ebb76
                case &lookup_table_5ebd28[0x56]
                    if (arg6 s>= 0 && arg6 s< (esi_3[0xa7] - esi_3[0xa6]) s/ 0x1c)
                        *(esi_3[0xa6] + arg6 * 0x1c + 4) = arg7
                        int32_t eax_26
                        eax_26.b = 1
                        *ebx += 1
                        return eax_26
                case &lookup_table_5ebd28[0x5c]
                    sub_5efeb0(&esi_3[0xa6], arg7)
                    *ebx += 1
                    int32_t* eax_27
                    eax_27.b = 1
                    return eax_27
                case &lookup_table_5ebd28[0x5d]
                    sub_5efe70(&esi_3[0xa6], arg7)
                    *ebx += 1
                    int32_t* eax_28
                    eax_28.b = 1
                    return eax_28
                case &lookup_table_5ebd28[0x61]
                    if (arg6 s>= 0)
                        int32_t eax_29
                        int32_t edx_11
                        edx_11:eax_29 = muls.dp.d(0x2aaaaaab, esi_3[0xaa] - esi_3[0xa9])
                        int32_t edx_12 = edx_11 s>> 1
                        
                        if (arg6 s< (edx_12 u>> 0x1f) + edx_12)
                            var_1c_4 = arg7
                            ecx_14 = &esi_3[0xa9]
                            var_20_2 = arg6
                        label_5eb3ed:
                            eax = sub_5efbb0(ecx_14, var_20_2, var_1c_4)
                            goto label_5eb3f2
                case &lookup_table_5ebd28[0x62]
                    if (arg6 s>= 0)
                        int32_t eax_32
                        int32_t edx_13
                        edx_13:eax_32 = muls.dp.d(0x2aaaaaab, esi_3[0xaa] - esi_3[0xa9])
                        int32_t edx_14 = edx_13 s>> 1
                        
                        if (arg6 s< (edx_14 u>> 0x1f) + edx_14)
                            *(esi_3[0xa9] + arg6 * 0xc + 4) = arg7
                            int32_t eax_35
                            eax_35.b = 1
                            *ebx += 1
                            return eax_35
                case &lookup_table_5ebd28[0x64]
                    sub_5efc70(&esi_3[0xa9], arg7)
                    *ebx += 1
                    int32_t* eax_36
                    eax_36.b = 1
                    return eax_36
                case &lookup_table_5ebd28[0x65]
                    sub_5efc30(&esi_3[0xa9], arg7)
                    *ebx += 1
                    int32_t* eax_37
                    eax_37.b = 1
                    return eax_37
                case &lookup_table_5ebd28[0x67]
                    if (arg6 s>= 0)
                        int32_t eax_38
                        int32_t edx_16
                        edx_16:eax_38 = muls.dp.d(0x2aaaaaab, esi_3[0xad] - esi_3[0xac])
                        int32_t edx_17 = edx_16 s>> 1
                        
                        if (arg6 s< (edx_17 u>> 0x1f) + edx_17)
                            var_1c_4 = arg7
                            ecx_14 = &esi_3[0xac]
                            var_20_2 = arg6
                            goto label_5eb3ed
                case &lookup_table_5ebd28[0x68]
                    if (arg6 s>= 0)
                        int32_t eax_41
                        int32_t edx_18
                        edx_18:eax_41 = muls.dp.d(0x2aaaaaab, esi_3[0xad] - esi_3[0xac])
                        int32_t edx_19 = edx_18 s>> 1
                        
                        if (arg6 s< (edx_19 u>> 0x1f) + edx_19)
                            *(esi_3[0xac] + arg6 * 0xc + 4) = arg7
                            int32_t eax_44
                            eax_44.b = 1
                            *ebx += 1
                            return eax_44
                case &lookup_table_5ebd28[0x6a]
                    sub_5efc70(&esi_3[0xac], arg7)
                    *ebx += 1
                    int32_t* eax_45
                    eax_45.b = 1
                    return eax_45
                case &lookup_table_5ebd28[0x6b]
                    sub_5efc30(&esi_3[0xac], arg7)
                    *ebx += 1
                    int32_t* eax_46
                    eax_46.b = 1
                    return eax_46
                case &lookup_table_5ebd28[0x6d]
                    if (arg6 s>= 0)
                        int32_t eax_47
                        int32_t edx_21
                        edx_21:eax_47 = muls.dp.d(0x2aaaaaab, esi_3[0xb0] - esi_3[0xaf])
                        int32_t edx_22 = edx_21 s>> 1
                        
                        if (arg6 s< (edx_22 u>> 0x1f) + edx_22)
                            var_1c_4 = arg7
                            ecx_14 = &esi_3[0xaf]
                            var_20_2 = arg6
                            goto label_5eb3ed
                case &lookup_table_5ebd28[0x6e]
                    if (arg6 s>= 0)
                        int32_t eax_50
                        int32_t edx_23
                        edx_23:eax_50 = muls.dp.d(0x2aaaaaab, esi_3[0xb0] - esi_3[0xaf])
                        int32_t edx_24 = edx_23 s>> 1
                        
                        if (arg6 s< (edx_24 u>> 0x1f) + edx_24)
                            *(esi_3[0xaf] + arg6 * 0xc + 4) = arg7
                            int32_t eax_53
                            eax_53.b = 1
                            *ebx += 1
                            return eax_53
                case &lookup_table_5ebd28[0x70]
                    sub_5efc70(&esi_3[0xaf], arg7)
                    *ebx += 1
                    int32_t* eax_54
                    eax_54.b = 1
                    return eax_54
                case &lookup_table_5ebd28[0x71]
                    sub_5efc30(&esi_3[0xaf], arg7)
                    *ebx += 1
                    int32_t* eax_55
                    eax_55.b = 1
                    return eax_55
                case &lookup_table_5ebd28[0x73]
                    if (arg6 s>= 0)
                        int32_t eax_56
                        int32_t edx_26
                        edx_26:eax_56 = muls.dp.d(0x2aaaaaab, esi_3[0xb3] - esi_3[0xb2])
                        int32_t edx_27 = edx_26 s>> 1
                        
                        if (arg6 s< (edx_27 u>> 0x1f) + edx_27)
                            var_1c_4 = arg7
                            ecx_14 = &esi_3[0xb2]
                            var_20_2 = arg6
                            goto label_5eb3ed
                case &lookup_table_5ebd28[0x74]
                    if (arg6 s>= 0)
                        int32_t eax_59
                        int32_t edx_28
                        edx_28:eax_59 = muls.dp.d(0x2aaaaaab, esi_3[0xb3] - esi_3[0xb2])
                        int32_t edx_29 = edx_28 s>> 1
                        
                        if (arg6 s< (edx_29 u>> 0x1f) + edx_29)
                            *(esi_3[0xb2] + arg6 * 0xc + 4) = arg7
                            int32_t eax_62
                            eax_62.b = 1
                            *ebx += 1
                            return eax_62
                case &lookup_table_5ebd28[0x76]
                    sub_5efc70(&esi_3[0xb2], arg7)
                    *ebx += 1
                    int32_t* eax_63
                    eax_63.b = 1
                    return eax_63
                case &lookup_table_5ebd28[0x77]
                    sub_5efc30(&esi_3[0xb2], arg7)
                    *ebx += 1
                    int32_t* eax_64
                    eax_64.b = 1
                    return eax_64
                case &lookup_table_5ebd28[0x79]
                    if (arg6 s>= 0)
                        int32_t eax_65
                        int32_t edx_31
                        edx_31:eax_65 = muls.dp.d(0x66666667, esi_3[0xb6] - esi_3[0xb5])
                        int32_t edx_32 = edx_31 s>> 3
                        
                        if (arg6 s< (edx_32 u>> 0x1f) + edx_32)
                            eax = sub_5ef930(&esi_3[0xb5], arg6, arg7)
                            goto label_5eb3f2
                case &lookup_table_5ebd28[0x7a]
                    if (arg6 s>= 0)
                        int32_t eax_68
                        int32_t edx_33
                        edx_33:eax_68 = muls.dp.d(0x66666667, esi_3[0xb6] - esi_3[0xb5])
                        int32_t edx_34 = edx_33 s>> 3
                        
                        if (arg6 s< (edx_34 u>> 0x1f) + edx_34)
                            *(esi_3[0xb5] + arg6 * 0x14 + 4) = arg7
                            int32_t eax_71
                            eax_71.b = 1
                            *ebx += 1
                            return eax_71
                case &lookup_table_5ebd28[0x7e]
                    sub_5ef9f0(&esi_3[0xb5], arg7)
                    *ebx += 1
                    int32_t* eax_72
                    eax_72.b = 1
                    return eax_72
                case &lookup_table_5ebd28[0x7f]
                    sub_5ef9b0(&esi_3[0xb5], arg7)
                    *ebx += 1
                    int32_t* eax_73
                    eax_73.b = 1
                    return eax_73
                case &lookup_table_5ebd28[0x81]
                    if (arg6 s>= 0)
                        int32_t eax_74
                        int32_t edx_36
                        edx_36:eax_74 = muls.dp.d(0x2aaaaaab, esi_3[0xb9] - esi_3[0xb8])
                        int32_t edx_37 = edx_36 s>> 1
                        
                        if (arg6 s< (edx_37 u>> 0x1f) + edx_37)
                            eax = sub_5efbb0(&esi_3[0xb8], arg6, arg7)
                            goto label_5eb3f2
                case &lookup_table_5ebd28[0x82]
                    if (arg6 s>= 0)
                        int32_t eax_77
                        int32_t edx_38
                        edx_38:eax_77 = muls.dp.d(0x2aaaaaab, esi_3[0xb9] - esi_3[0xb8])
                        int32_t edx_39 = edx_38 s>> 1
                        
                        if (arg6 s< (edx_39 u>> 0x1f) + edx_39)
                            *(esi_3[0xb8] + arg6 * 0xc + 4) = arg7
                            int32_t eax_80
                            eax_80.b = 1
                            *ebx += 1
                            return eax_80
                case &lookup_table_5ebd28[0x84]
                    sub_5efc70(&esi_3[0xb8], arg7)
                    *ebx += 1
                    int32_t* eax_81
                    eax_81.b = 1
                    return eax_81
                case &lookup_table_5ebd28[0x85]
                    sub_5efc30(&esi_3[0xb8], arg7)
                    *ebx += 1
                    int32_t* eax_82
                    eax_82.b = 1
                    return eax_82
                case &lookup_table_5ebd28[0x87]
                    if (arg6 s>= 0)
                        int32_t eax_83
                        int32_t edx_41
                        edx_41:eax_83 = muls.dp.d(0x2aaaaaab, esi_3[0xbc] - esi_3[0xbb])
                        int32_t edx_42 = edx_41 s>> 2
                        
                        if (arg6 s< (edx_42 u>> 0x1f) + edx_42)
                            eax = sub_5f0120(&esi_3[0xbb], arg6, arg7)
                            goto label_5eb3f2
                case &lookup_table_5ebd28[0x88]
                    if (arg6 s>= 0)
                        int32_t eax_86
                        int32_t edx_43
                        edx_43:eax_86 = muls.dp.d(0x2aaaaaab, esi_3[0xbc] - esi_3[0xbb])
                        int32_t edx_44 = edx_43 s>> 2
                        
                        if (arg6 s< (edx_44 u>> 0x1f) + edx_44)
                            *(esi_3[0xbb] + arg6 * 0x18 + 4) = arg7
                            int32_t eax_89
                            eax_89.b = 1
                            *ebx += 1
                            return eax_89
                case &lookup_table_5ebd28[0x8c]
                    sub_5f0380(&esi_3[0xbb], arg7)
                    *ebx += 1
                    int32_t* eax_90
                    eax_90.b = 1
                    return eax_90
                case &lookup_table_5ebd28[0x8d]
                    sub_5f01a0(&esi_3[0xbb], arg7)
                    *ebx += 1
                    int32_t* eax_91
                    eax_91.b = 1
                    return eax_91
                case &lookup_table_5ebd28[0x8f]
                    if (arg6 s>= 0)
                        int32_t eax_92
                        int32_t edx_46
                        edx_46:eax_92 = muls.dp.d(0x2aaaaaab, esi_3[0xbf] - esi_3[0xbe])
                        int32_t edx_47 = edx_46 s>> 2
                        
                        if (arg6 s< (edx_47 u>> 0x1f) + edx_47)
                            eax = sub_5f0120(&esi_3[0xbe], arg6, arg7)
                            goto label_5eb3f2
                case &lookup_table_5ebd28[0x90]
                    if (arg6 s>= 0)
                        int32_t eax_95
                        int32_t edx_48
                        edx_48:eax_95 = muls.dp.d(0x2aaaaaab, esi_3[0xbf] - esi_3[0xbe])
                        int32_t edx_49 = edx_48 s>> 2
                        
                        if (arg6 s< (edx_49 u>> 0x1f) + edx_49)
                            *(esi_3[0xbe] + arg6 * 0x18 + 4) = arg7
                            int32_t eax_98
                            eax_98.b = 1
                            *ebx += 1
                            return eax_98
                case &lookup_table_5ebd28[0x94]
                    sub_5f01e0(&esi_3[0xbe], arg7)
                    *ebx += 1
                    int32_t* eax_99
                    eax_99.b = 1
                    return eax_99
                case &lookup_table_5ebd28[0x95]
                    sub_5f01a0(&esi_3[0xbe], arg7)
                    *ebx += 1
                    int32_t* eax_100
                    eax_100.b = 1
                    return eax_100
                case &lookup_table_5ebd28[0x97]
                    if (arg6 s>= 0)
                        int32_t eax_101
                        int32_t edx_51
                        edx_51:eax_101 = muls.dp.d(0x2aaaaaab, esi_3[0xc2] - esi_3[0xc1])
                        int32_t edx_52 = edx_51 s>> 2
                        
                        if (arg6 s< (edx_52 u>> 0x1f) + edx_52)
                            eax = sub_5f0120(&esi_3[0xc1], arg6, arg7)
                            goto label_5eb3f2
                case &lookup_table_5ebd28[0x98]
                    if (arg6 s>= 0)
                        int32_t eax_104
                        int32_t edx_53
                        edx_53:eax_104 = muls.dp.d(0x2aaaaaab, esi_3[0xc2] - esi_3[0xc1])
                        int32_t edx_54 = edx_53 s>> 2
                        
                        if (arg6 s< (edx_54 u>> 0x1f) + edx_54)
                            *(esi_3[0xc1] + arg6 * 0x18 + 4) = arg7
                            int32_t eax_107
                            eax_107.b = 1
                            *ebx += 1
                            return eax_107
                case &lookup_table_5ebd28[0x9c]
                    sub_5f0380(&esi_3[0xc1], arg7)
                    *ebx += 1
                    int32_t* eax_108
                    eax_108.b = 1
                    return eax_108
                case &lookup_table_5ebd28[0x9d]
                    sub_5f01a0(&esi_3[0xc1], arg7)
                    *ebx += 1
                    int32_t* eax_109
                    eax_109.b = 1
                    return eax_109
                case &lookup_table_5ebd28[0x9f]
                    if (arg6 s>= 0)
                        int32_t eax_110
                        int32_t edx_56
                        edx_56:eax_110 = muls.dp.d(0x2aaaaaab, esi_3[0xc5] - esi_3[0xc4])
                        int32_t edx_57 = edx_56 s>> 2
                        
                        if (arg6 s< (edx_57 u>> 0x1f) + edx_57)
                            eax = sub_5f0120(&esi_3[0xc4], arg6, arg7)
                            goto label_5eb3f2
                case &lookup_table_5ebd28[0xa0]
                    if (arg6 s>= 0)
                        int32_t eax_113
                        int32_t edx_58
                        edx_58:eax_113 = muls.dp.d(0x2aaaaaab, esi_3[0xc5] - esi_3[0xc4])
                        int32_t edx_59 = edx_58 s>> 2
                        
                        if (arg6 s< (edx_59 u>> 0x1f) + edx_59)
                            *(esi_3[0xc4] + arg6 * 0x18 + 4) = arg7
                            int32_t eax_116
                            eax_116.b = 1
                            *ebx += 1
                            return eax_116
                case &lookup_table_5ebd28[0xa4]
                    sub_5f01e0(&esi_3[0xc4], arg7)
                    *ebx += 1
                    int32_t* eax_117
                    eax_117.b = 1
                    return eax_117
                case &lookup_table_5ebd28[0xa5]
                    sub_5f01a0(&esi_3[0xc4], arg7)
                    *ebx += 1
                    int32_t* eax_118
                    eax_118.b = 1
                    return eax_118
                case &lookup_table_5ebd28[0xa6]
                    eax.b = arg7 != 0
                    esi_3[0xc7].b = eax.b
                    eax.b = 1
                    *ebx += 1
                    return eax
                case &lookup_table_5ebd28[0xa7]
                    esi_3[0xc8] = arg7
                    int32_t eax_119
                    eax_119.b = 1
                    *ebx += 1
                    return eax_119
                case &lookup_table_5ebd28[0xa8]
                    eax.b = arg7 != 0
                    esi_3[0xc9].b = eax.b
                    eax.b = 1
                    *ebx += 1
                    return eax
                case &lookup_table_5ebd28[0xa9]
                    esi_3[0xca] = arg7
                label_5ebb76:
                    *ebx += 1
                    eax.b = 1
                    return eax
                case &lookup_table_5ebd28[0xaa]
                    eax.b = arg7 != 0
                    esi_3[0xcb].b = eax.b
                    eax.b = 1
                    return eax
                case &lookup_table_5ebd28[0xab]
                    eax.b = arg7 != 0
                    esi_3[0xd2].b = eax.b
                    eax.b = 1
                    return eax
                case &lookup_table_5ebd28[0xac]
                    eax.b = arg7 != 0
                    *(esi_3 + 0x349) = eax.b
                    eax.b = 1
                    return eax
                case &lookup_table_5ebd28[0xad]
                    eax.b = arg7 != 0
                    *(esi_3 + 0x34a) = eax.b
                    eax.b = 1
                    return eax
                case &lookup_table_5ebd28[0xae]
                    eax.b = arg7 != 0
                    *(esi_3 + 0x34b) = eax.b
                    eax.b = 1
                    return eax

eax.b = 0
return eax
