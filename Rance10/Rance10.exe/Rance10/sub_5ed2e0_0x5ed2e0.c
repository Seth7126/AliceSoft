// 函数: sub_5ed2e0
// 地址: 0x5ed2e0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_10 = arg3
void* ecx = data_7fd4cc
int32_t var_18 = arg2
int32_t ebx = sub_566690(ecx, arg2, arg4)

if (ebx != 0 && arg5 s>= 0)
    int32_t eax_2
    int32_t edx
    edx:eax_2 = muls.dp.d(0x4da637d, *(ebx + 8) - *(ebx + 4))
    int32_t edx_1 = edx s>> 4
    
    if (arg5 s< (edx_1 u>> 0x1f) + edx_1)
        int32_t esi_1 = arg5 * 0x34c
        int32_t* esi_2 = esi_1 + *(ebx + 4)
        int32_t* var_2c_1
        int32_t* eax_10
        int32_t ecx_46
        int32_t edx_12
        
        if (esi_1 != neg.d(*(ebx + 4)) && var_10 - 4 u<= 0xb1)
            switch (var_10 + &jump_table_5edef0[0x46])
                case &lookup_table_5ee00c
                    *arg7 = esi_2[1]
                    int32_t* eax_6
                    eax_6.b = 1
                    return eax_6
                case &lookup_table_5ee00c[1]
                    *arg7 = *esi_2
                    int32_t* eax_7
                    eax_7.b = 1
                    return eax_7
                case &lookup_table_5ee00c[2]
                    *arg7 = esi_2[0xcc]
                    int32_t* eax_8
                    eax_8.b = 1
                    return eax_8
                case &lookup_table_5ee00c[4]
                    *arg7 = esi_2[8]
                    int32_t* eax_9
                    eax_9.b = 1
                    return eax_9
                case &lookup_table_5ee00c[5]
                    var_2c_1 = &var_18
                    eax_10 = &var_10
                label_5ed3ba:
                    sub_578d20(esi_2, eax_10, var_2c_1)
                    *arg7 = var_10
                    int32_t eax_11
                    eax_11.b = 1
                    return eax_11
                case &lookup_table_5ee00c[6]
                    var_2c_1 = &var_10
                    eax_10 = &var_18
                    goto label_5ed3ba
                case &lookup_table_5ee00c[7]
                    *arg7 = esi_2[9]
                    int32_t* eax_12
                    eax_12.b = 1
                    return eax_12
                case &lookup_table_5ee00c[0xb]
                    *arg7 = esi_2[0xd]
                    int32_t* eax_13
                    eax_13.b = 1
                    return eax_13
                case &lookup_table_5ee00c[0xc]
                    *arg7 = esi_2[0xe]
                    int32_t* eax_14
                    eax_14.b = 1
                    return eax_14
                case &lookup_table_5ee00c[0xd]
                    *arg7 = esi_2[0x10]
                    int32_t* eax_15
                    eax_15.b = 1
                    return eax_15
                case &lookup_table_5ee00c[0x16]
                    int32_t ecx_13
                    ecx_13.b = esi_2[0x2a].b != 0
                    *arg7 = ecx_13
                    int32_t* eax_16
                    eax_16.b = 1
                    return eax_16
                case &lookup_table_5ee00c[0x17]
                    int32_t ecx_14
                    ecx_14.b = *(esi_2 + 0xa9) != 0
                    *arg7 = ecx_14
                    int32_t* eax_17
                    eax_17.b = 1
                    return eax_17
                case &lookup_table_5ee00c[0x18]
                    int32_t ecx_15
                    ecx_15.b = *(esi_2 + 0xaa) != 0
                    *arg7 = ecx_15
                    int32_t* eax_18
                    eax_18.b = 1
                    return eax_18
                case &lookup_table_5ee00c[0x19]
                    int32_t ecx_16
                    ecx_16.b = *(esi_2 + 0xab) != 0
                    *arg7 = ecx_16
                    int32_t* eax_19
                    eax_19.b = 1
                    return eax_19
                case &lookup_table_5ee00c[0x1d]
                    *arg7 = esi_2[0x34]
                    int32_t* eax_20
                    eax_20.b = 1
                    return eax_20
                case &lookup_table_5ee00c[0x23]
                    *arg7 = esi_2[0x3a]
                    int32_t* eax_21
                    eax_21.b = 1
                    return eax_21
                case &lookup_table_5ee00c[0x26]
                    *arg7 = esi_2[0x42]
                    int32_t* eax_22
                    eax_22.b = 1
                    return eax_22
                case &lookup_table_5ee00c[0x27]
                    *arg7 = esi_2[0x49]
                    int32_t* eax_23
                    eax_23.b = 1
                    return eax_23
                case &lookup_table_5ee00c[0x30]
                    int32_t ecx_21
                    ecx_21.b = esi_2[0x5a].b != 0
                    *arg7 = ecx_21
                    int32_t* eax_24
                    eax_24.b = 1
                    return eax_24
                case &lookup_table_5ee00c[0x39]
                    int32_t ecx_22
                    ecx_22.b = esi_2[0x6f].b != 0
                    *arg7 = ecx_22
                    int32_t* eax_25
                    eax_25.b = 1
                    return eax_25
                case &lookup_table_5ee00c[0x3a]
                    int32_t ecx_23
                    ecx_23.b = *(esi_2 + 0x1bd) != 0
                    *arg7 = ecx_23
                    int32_t* eax_26
                    eax_26.b = 1
                    return eax_26
                case &lookup_table_5ee00c[0x3b]
                    int32_t ecx_24
                    ecx_24.b = *(esi_2 + 0x1be) != 0
                    *arg7 = ecx_24
                    int32_t* eax_27
                    eax_27.b = 1
                    return eax_27
                case &lookup_table_5ee00c[0x4a]
                    *arg7 = esi_2[0x82]
                    int32_t* eax_28
                    eax_28.b = 1
                    return eax_28
                case &lookup_table_5ee00c[0x4b]
                    int32_t ecx_26
                    ecx_26.b = esi_2[0x83].b != 0
                    *arg7 = ecx_26
                    int32_t* eax_29
                    eax_29.b = 1
                    return eax_29
                case &lookup_table_5ee00c[0x4c]
                    int32_t ecx_27
                    ecx_27.b = *(esi_2 + 0x20d) != 0
                    *arg7 = ecx_27
                    int32_t* eax_30
                    eax_30.b = 1
                    return eax_30
                case &lookup_table_5ee00c[0x53]
                    if (arg6 s>= 0 && arg6 s< (esi_2[0xa4] - esi_2[0xa3]) s>> 2)
                        *arg7 = *(esi_2[0xa3] + (arg6 << 2))
                        int32_t* eax_34
                        eax_34.b = 1
                        return eax_34
                case &lookup_table_5ee00c[0x54]
                    *arg7 = (esi_2[0xa7] - esi_2[0xa6]) s/ 0x1c
                    int32_t* eax_36
                    eax_36.b = 1
                    return eax_36
                case &lookup_table_5ee00c[0x55]
                    if (arg6 s>= 0 && arg6 s< (esi_2[0xa7] - esi_2[0xa6]) s/ 0x1c)
                        *arg7 = *(esi_2[0xa6] + arg6 * 0x1c)
                        int32_t* eax_41
                        eax_41.b = 1
                        return eax_41
                case &lookup_table_5ee00c[0x56]
                    if (arg6 s>= 0 && arg6 s< (esi_2[0xa7] - esi_2[0xa6]) s/ 0x1c)
                        *arg7 = *(esi_2[0xa6] + arg6 * 0x1c + 4)
                        int32_t* eax_46
                        eax_46.b = 1
                        return eax_46
                case &lookup_table_5ee00c[0x60]
                    ecx_46 = esi_2[0xaa] - esi_2[0xa9]
                label_5ed69a:
                    int32_t eax_47
                    int32_t edx_11
                    edx_11:eax_47 = muls.dp.d(0x2aaaaaab, ecx_46)
                    edx_12 = edx_11 s>> 1
                    goto label_5ed6a8
                case &lookup_table_5ee00c[0x61]
                    if (arg6 s>= 0)
                        int32_t eax_49
                        int32_t edx_13
                        edx_13:eax_49 = muls.dp.d(0x2aaaaaab, esi_2[0xaa] - esi_2[0xa9])
                        int32_t edx_14 = edx_13 s>> 1
                        
                        if (arg6 s< (edx_14 u>> 0x1f) + edx_14)
                            *arg7 = *(esi_2[0xa9] + arg6 * 0xc)
                            int32_t* eax_53
                            eax_53.b = 1
                            return eax_53
                case &lookup_table_5ee00c[0x62]
                    if (arg6 s>= 0)
                        int32_t eax_54
                        int32_t edx_15
                        edx_15:eax_54 = muls.dp.d(0x2aaaaaab, esi_2[0xaa] - esi_2[0xa9])
                        int32_t edx_16 = edx_15 s>> 1
                        
                        if (arg6 s< (edx_16 u>> 0x1f) + edx_16)
                            *arg7 = *(esi_2[0xa9] + arg6 * 0xc + 4)
                            int32_t* eax_58
                            eax_58.b = 1
                            return eax_58
                case &lookup_table_5ee00c[0x66]
                    ecx_46 = esi_2[0xad] - esi_2[0xac]
                    goto label_5ed69a
                case &lookup_table_5ee00c[0x67]
                    if (arg6 s>= 0)
                        int32_t eax_59
                        int32_t edx_17
                        edx_17:eax_59 = muls.dp.d(0x2aaaaaab, esi_2[0xad] - esi_2[0xac])
                        int32_t edx_18 = edx_17 s>> 1
                        
                        if (arg6 s< (edx_18 u>> 0x1f) + edx_18)
                            *arg7 = *(esi_2[0xac] + arg6 * 0xc)
                            int32_t* eax_63
                            eax_63.b = 1
                            return eax_63
                case &lookup_table_5ee00c[0x68]
                    if (arg6 s>= 0)
                        int32_t eax_64
                        int32_t edx_19
                        edx_19:eax_64 = muls.dp.d(0x2aaaaaab, esi_2[0xad] - esi_2[0xac])
                        int32_t edx_20 = edx_19 s>> 1
                        
                        if (arg6 s< (edx_20 u>> 0x1f) + edx_20)
                            *arg7 = *(esi_2[0xac] + arg6 * 0xc + 4)
                            int32_t* eax_68
                            eax_68.b = 1
                            return eax_68
                case &lookup_table_5ee00c[0x6c]
                    ecx_46 = esi_2[0xb0] - esi_2[0xaf]
                    goto label_5ed69a
                case &lookup_table_5ee00c[0x6d]
                    if (arg6 s>= 0)
                        int32_t eax_69
                        int32_t edx_21
                        edx_21:eax_69 = muls.dp.d(0x2aaaaaab, esi_2[0xb0] - esi_2[0xaf])
                        int32_t edx_22 = edx_21 s>> 1
                        
                        if (arg6 s< (edx_22 u>> 0x1f) + edx_22)
                            *arg7 = *(esi_2[0xaf] + arg6 * 0xc)
                            int32_t* eax_73
                            eax_73.b = 1
                            return eax_73
                case &lookup_table_5ee00c[0x6e]
                    if (arg6 s>= 0)
                        int32_t eax_74
                        int32_t edx_23
                        edx_23:eax_74 = muls.dp.d(0x2aaaaaab, esi_2[0xb0] - esi_2[0xaf])
                        int32_t edx_24 = edx_23 s>> 1
                        
                        if (arg6 s< (edx_24 u>> 0x1f) + edx_24)
                            *arg7 = *(esi_2[0xaf] + arg6 * 0xc + 4)
                            int32_t* eax_78
                            eax_78.b = 1
                            return eax_78
                case &lookup_table_5ee00c[0x72]
                    ecx_46 = esi_2[0xb3] - esi_2[0xb2]
                    goto label_5ed69a
                case &lookup_table_5ee00c[0x73]
                    if (arg6 s>= 0)
                        int32_t eax_79
                        int32_t edx_25
                        edx_25:eax_79 = muls.dp.d(0x2aaaaaab, esi_2[0xb3] - esi_2[0xb2])
                        int32_t edx_26 = edx_25 s>> 1
                        
                        if (arg6 s< (edx_26 u>> 0x1f) + edx_26)
                            *arg7 = *(esi_2[0xb2] + arg6 * 0xc)
                            int32_t* eax_83
                            eax_83.b = 1
                            return eax_83
                case &lookup_table_5ee00c[0x74]
                    if (arg6 s>= 0)
                        int32_t eax_84
                        int32_t edx_27
                        edx_27:eax_84 = muls.dp.d(0x2aaaaaab, esi_2[0xb3] - esi_2[0xb2])
                        int32_t edx_28 = edx_27 s>> 1
                        
                        if (arg6 s< (edx_28 u>> 0x1f) + edx_28)
                            *arg7 = *(esi_2[0xb2] + arg6 * 0xc + 4)
                            int32_t* eax_88
                            eax_88.b = 1
                            return eax_88
                case &lookup_table_5ee00c[0x78]
                    int32_t eax_89
                    int32_t edx_29
                    edx_29:eax_89 = muls.dp.d(0x66666667, esi_2[0xb6] - esi_2[0xb5])
                    edx_12 = edx_29 s>> 3
                label_5ed6a8:
                    *arg7 = (edx_12 u>> 0x1f) + edx_12
                    int32_t* eax_48
                    eax_48.b = 1
                    return eax_48
                case &lookup_table_5ee00c[0x79]
                    if (arg6 s>= 0)
                        int32_t eax_90
                        int32_t edx_30
                        edx_30:eax_90 = muls.dp.d(0x66666667, esi_2[0xb6] - esi_2[0xb5])
                        int32_t edx_31 = edx_30 s>> 3
                        
                        if (arg6 s< (edx_31 u>> 0x1f) + edx_31)
                            *arg7 = *(esi_2[0xb5] + arg6 * 0x14)
                            int32_t* eax_94
                            eax_94.b = 1
                            return eax_94
                case &lookup_table_5ee00c[0x7a]
                    if (arg6 s>= 0)
                        int32_t eax_95
                        int32_t edx_32
                        edx_32:eax_95 = muls.dp.d(0x66666667, esi_2[0xb6] - esi_2[0xb5])
                        int32_t edx_33 = edx_32 s>> 3
                        
                        if (arg6 s< (edx_33 u>> 0x1f) + edx_33)
                            *arg7 = *(esi_2[0xb5] + arg6 * 0x14 + 4)
                            int32_t* eax_99
                            eax_99.b = 1
                            return eax_99
                case &lookup_table_5ee00c[0x80]
                    ecx_46 = esi_2[0xb9] - esi_2[0xb8]
                    goto label_5ed69a
                case &lookup_table_5ee00c[0x81]
                    if (arg6 s>= 0)
                        int32_t eax_100
                        int32_t edx_34
                        edx_34:eax_100 = muls.dp.d(0x2aaaaaab, esi_2[0xb9] - esi_2[0xb8])
                        int32_t edx_35 = edx_34 s>> 1
                        
                        if (arg6 s< (edx_35 u>> 0x1f) + edx_35)
                            *arg7 = *(esi_2[0xb8] + arg6 * 0xc)
                            int32_t* eax_104
                            eax_104.b = 1
                            return eax_104
                case &lookup_table_5ee00c[0x82]
                    if (arg6 s>= 0)
                        int32_t eax_105
                        int32_t edx_36
                        edx_36:eax_105 = muls.dp.d(0x2aaaaaab, esi_2[0xb9] - esi_2[0xb8])
                        int32_t edx_37 = edx_36 s>> 1
                        
                        if (arg6 s< (edx_37 u>> 0x1f) + edx_37)
                            *arg7 = *(esi_2[0xb8] + arg6 * 0xc + 4)
                            int32_t* eax_109
                            eax_109.b = 1
                            return eax_109
                case &lookup_table_5ee00c[0x86]
                    int32_t eax_110
                    int32_t edx_38
                    edx_38:eax_110 = muls.dp.d(0x2aaaaaab, esi_2[0xbc] - esi_2[0xbb])
                    edx_12 = edx_38 s>> 2
                    goto label_5ed6a8
                case &lookup_table_5ee00c[0x87]
                    if (arg6 s>= 0)
                        int32_t eax_111
                        int32_t edx_39
                        edx_39:eax_111 = muls.dp.d(0x2aaaaaab, esi_2[0xbc] - esi_2[0xbb])
                        int32_t edx_40 = edx_39 s>> 2
                        
                        if (arg6 s< (edx_40 u>> 0x1f) + edx_40)
                            *arg7 = *(esi_2[0xbb] + arg6 * 0x18)
                            int32_t* eax_115
                            eax_115.b = 1
                            return eax_115
                case &lookup_table_5ee00c[0x88]
                    if (arg6 s>= 0)
                        int32_t eax_116
                        int32_t edx_41
                        edx_41:eax_116 = muls.dp.d(0x2aaaaaab, esi_2[0xbc] - esi_2[0xbb])
                        int32_t edx_42 = edx_41 s>> 2
                        
                        if (arg6 s< (edx_42 u>> 0x1f) + edx_42)
                            *arg7 = *(esi_2[0xbb] + arg6 * 0x18 + 4)
                            int32_t* eax_120
                            eax_120.b = 1
                            return eax_120
                case &lookup_table_5ee00c[0x8e]
                    int32_t eax_121
                    int32_t edx_43
                    edx_43:eax_121 = muls.dp.d(0x2aaaaaab, esi_2[0xbf] - esi_2[0xbe])
                    edx_12 = edx_43 s>> 2
                    goto label_5ed6a8
                case &lookup_table_5ee00c[0x8f]
                    if (arg6 s>= 0)
                        int32_t eax_122
                        int32_t edx_44
                        edx_44:eax_122 = muls.dp.d(0x2aaaaaab, esi_2[0xbf] - esi_2[0xbe])
                        int32_t edx_45 = edx_44 s>> 2
                        
                        if (arg6 s< (edx_45 u>> 0x1f) + edx_45)
                            *arg7 = *(esi_2[0xbe] + arg6 * 0x18)
                            int32_t* eax_126
                            eax_126.b = 1
                            return eax_126
                case &lookup_table_5ee00c[0x90]
                    if (arg6 s>= 0)
                        int32_t eax_127
                        int32_t edx_46
                        edx_46:eax_127 = muls.dp.d(0x2aaaaaab, esi_2[0xbf] - esi_2[0xbe])
                        int32_t edx_47 = edx_46 s>> 2
                        
                        if (arg6 s< (edx_47 u>> 0x1f) + edx_47)
                            *arg7 = *(esi_2[0xbe] + arg6 * 0x18 + 4)
                            int32_t* eax_131
                            eax_131.b = 1
                            return eax_131
                case &lookup_table_5ee00c[0x96]
                    int32_t eax_132
                    int32_t edx_48
                    edx_48:eax_132 = muls.dp.d(0x2aaaaaab, esi_2[0xc2] - esi_2[0xc1])
                    edx_12 = edx_48 s>> 2
                    goto label_5ed6a8
                case &lookup_table_5ee00c[0x97]
                    if (arg6 s>= 0)
                        int32_t eax_133
                        int32_t edx_49
                        edx_49:eax_133 = muls.dp.d(0x2aaaaaab, esi_2[0xc2] - esi_2[0xc1])
                        int32_t edx_50 = edx_49 s>> 2
                        
                        if (arg6 s< (edx_50 u>> 0x1f) + edx_50)
                            *arg7 = *(esi_2[0xc1] + arg6 * 0x18)
                            int32_t* eax_137
                            eax_137.b = 1
                            return eax_137
                case &lookup_table_5ee00c[0x98]
                    if (arg6 s>= 0)
                        int32_t eax_138
                        int32_t edx_51
                        edx_51:eax_138 = muls.dp.d(0x2aaaaaab, esi_2[0xc2] - esi_2[0xc1])
                        int32_t edx_52 = edx_51 s>> 2
                        
                        if (arg6 s< (edx_52 u>> 0x1f) + edx_52)
                            *arg7 = *(esi_2[0xc1] + arg6 * 0x18 + 4)
                            int32_t* eax_142
                            eax_142.b = 1
                            return eax_142
                case &lookup_table_5ee00c[0x9e]
                    int32_t eax_143
                    int32_t edx_53
                    edx_53:eax_143 = muls.dp.d(0x2aaaaaab, esi_2[0xc5] - esi_2[0xc4])
                    edx_12 = edx_53 s>> 2
                    goto label_5ed6a8
                case &lookup_table_5ee00c[0x9f]
                    if (arg6 s>= 0)
                        int32_t eax_144
                        int32_t edx_54
                        edx_54:eax_144 = muls.dp.d(0x2aaaaaab, esi_2[0xc5] - esi_2[0xc4])
                        int32_t edx_55 = edx_54 s>> 2
                        
                        if (arg6 s< (edx_55 u>> 0x1f) + edx_55)
                            *arg7 = *(esi_2[0xc4] + arg6 * 0x18)
                            int32_t* eax_148
                            eax_148.b = 1
                            return eax_148
                case &lookup_table_5ee00c[0xa0]
                    if (arg6 s>= 0)
                        int32_t eax_149
                        int32_t edx_56
                        edx_56:eax_149 = muls.dp.d(0x2aaaaaab, esi_2[0xc5] - esi_2[0xc4])
                        int32_t edx_57 = edx_56 s>> 2
                        
                        if (arg6 s< (edx_57 u>> 0x1f) + edx_57)
                            *arg7 = *(esi_2[0xc4] + arg6 * 0x18 + 4)
                            int32_t* eax_153
                            eax_153.b = 1
                            return eax_153
                case &lookup_table_5ee00c[0xa6]
                    int32_t ecx_144
                    ecx_144.b = esi_2[0xc7].b != 0
                    *arg7 = ecx_144
                    int32_t* eax_154
                    eax_154.b = 1
                    return eax_154
                case &lookup_table_5ee00c[0xa7]
                    *arg7 = esi_2[0xc8]
                    int32_t* eax_155
                    eax_155.b = 1
                    return eax_155
                case &lookup_table_5ee00c[0xa8]
                    int32_t ecx_146
                    ecx_146.b = esi_2[0xc9].b != 0
                    *arg7 = ecx_146
                    int32_t* eax_156
                    eax_156.b = 1
                    return eax_156
                case &lookup_table_5ee00c[0xa9]
                    *arg7 = esi_2[0xca]
                    int32_t* eax_157
                    eax_157.b = 1
                    return eax_157
                case &lookup_table_5ee00c[0xaa]
                    int32_t ecx_148
                    ecx_148.b = esi_2[0xcb].b != 0
                    *arg7 = ecx_148
                    int32_t* eax_158
                    eax_158.b = 1
                    return eax_158
                case &lookup_table_5ee00c[0xab]
                    int32_t ecx_149
                    ecx_149.b = esi_2[0xd2].b != 0
                    *arg7 = ecx_149
                    int32_t* eax_159
                    eax_159.b = 1
                    return eax_159
                case &lookup_table_5ee00c[0xac]
                    int32_t ecx_150
                    ecx_150.b = *(esi_2 + 0x349) != 0
                    *arg7 = ecx_150
                    int32_t* eax_160
                    eax_160.b = 1
                    return eax_160
                case &lookup_table_5ee00c[0xad]
                    int32_t ecx_151
                    ecx_151.b = *(esi_2 + 0x34a) != 0
                    *arg7 = ecx_151
                    int32_t* eax_161
                    eax_161.b = 1
                    return eax_161
                case &lookup_table_5ee00c[0xae]
                    int32_t ecx_152
                    ecx_152.b = *(esi_2 + 0x34b) != 0
                    *arg7 = ecx_152
                    int32_t* eax_162
                    eax_162.b = 1
                    return eax_162
                case &lookup_table_5ee00c[0xaf]
                    data_7fd4cc
                    *arg7 = sub_566840(var_18, arg4, arg5)
                    int32_t eax_164
                    eax_164.b = 1
                    return eax_164
                case &lookup_table_5ee00c[0xb1]
                    int32_t* eax_166 = sub_566d60(data_7fd4cc, &var_18, var_18, arg4, arg5)
                    var_10 = 0
                    int32_t var_c = 0
                    sub_5688b0(&var_10, eax_166)
                    sub_568430(&var_18)
                    
                    if (sub_451b90(&var_10) != 0)
                        int32_t** eax_169 = sub_595160(sub_431af0(&var_10) + 0x38, &esi_2[0x91])
                        
                        if (eax_169 != 0)
                            *arg7 = int.d(eax_169[0xd] f- eax_169[0xc])
                            sub_568430(&var_10)
                            int32_t eax_173
                            eax_173.b = 1
                            return eax_173
                    
                    *arg7 = 0
                    sub_568430(&var_10)
                    int32_t eax_171
                    eax_171.b = 1
                    return eax_171

int32_t eax_1
eax_1.b = 0
return eax_1
