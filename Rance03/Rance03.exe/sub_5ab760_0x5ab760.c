// 函数: sub_5ab760
// 地址: 0x5ab760
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* esi = sub_527050(arg2, arg4, arg5)
int32_t* var_8
void var_4
int32_t** eax_3
int32_t ecx_26

if (esi != 0 && arg3 - 4 u<= 0x6b)
    switch (arg3 + &jump_table_5abe88[0x29])
        case &lookup_table_5abf30
            *arg7 = esi[1]
            int32_t* eax_1
            eax_1.b = 1
            return eax_1
        case &lookup_table_5abf30[2]
            *arg7 = esi[8]
            int32_t* eax_2
            eax_2.b = 1
            return eax_2
        case &lookup_table_5abf30[3]
            void* var_14_1 = &var_4
            eax_3 = &var_8
        label_5ab7c7:
            sub_536ec0(esi, eax_3)
            *arg7 = var_8
            int32_t* eax_4
            eax_4.b = 1
            return eax_4
        case &lookup_table_5abf30[4]
            int32_t** var_14_2 = &var_8
            eax_3 = &var_4
            goto label_5ab7c7
        case &lookup_table_5abf30[5]
            *arg7 = esi[9]
            int32_t* eax_5
            eax_5.b = 1
            return eax_5
        case &lookup_table_5abf30[7]
            *arg7 = esi[0xb]
            int32_t* eax_6
            eax_6.b = 1
            return eax_6
        case &lookup_table_5abf30[8]
            *arg7 = esi[0xc]
            int32_t* eax_7
            eax_7.b = 1
            return eax_7
        case &lookup_table_5abf30[0x12]
            *arg7 = esi[0x28]
            int32_t* eax_8
            eax_8.b = 1
            return eax_8
        case &lookup_table_5abf30[0x17]
            *arg7 = esi[0x2d]
            int32_t* eax_9
            eax_9.b = 1
            return eax_9
        case &lookup_table_5abf30[0x18]
            *arg7 = esi[0x34]
            int32_t* eax_10
            eax_10.b = 1
            return eax_10
        case &lookup_table_5abf30[0x1d]
            int32_t ecx_10
            ecx_10.b = esi[0x41].b != 0
            *arg7 = ecx_10
            int32_t* eax_11
            eax_11.b = 1
            return eax_11
        case &lookup_table_5abf30[0x28]
            *arg7 = esi[0x5c]
            int32_t* eax_12
            eax_12.b = 1
            return eax_12
        case &lookup_table_5abf30[0x2c]
            int32_t eax_13
            int32_t edx
            edx:eax_13 = muls.dp.d(0x38e38e39, esi[0x68] - esi[0x67])
            int32_t edx_1 = edx s>> 3
            *arg7 = (edx_1 u>> 0x1f) + edx_1
            int32_t* eax_14
            eax_14.b = 1
            return eax_14
        case &lookup_table_5abf30[0x2d]
            if (arg6 s>= 0)
                int32_t eax_15
                int32_t edx_2
                edx_2:eax_15 = muls.dp.d(0x38e38e39, esi[0x68] - esi[0x67])
                int32_t edx_3 = edx_2 s>> 3
                
                if (arg6 s< (edx_3 u>> 0x1f) + edx_3)
                    *arg7 = *(esi[0x67] + arg6 * 0x24)
                    int32_t* eax_19
                    eax_19.b = 1
                    return eax_19
        case &lookup_table_5abf30[0x2e]
            if (arg6 s>= 0)
                int32_t eax_20
                int32_t edx_4
                edx_4:eax_20 = muls.dp.d(0x38e38e39, esi[0x68] - esi[0x67])
                int32_t edx_5 = edx_4 s>> 3
                
                if (arg6 s< (edx_5 u>> 0x1f) + edx_5)
                    *arg7 = *(esi[0x67] + arg6 * 0x24 + 4)
                    int32_t* eax_24
                    eax_24.b = 1
                    return eax_24
        case &lookup_table_5abf30[0x37]
            ecx_26 = esi[0x6b] - esi[0x6a]
        label_5ab958:
            *arg7 = ecx_26 s/ 0x14
            int32_t* eax_26
            eax_26.b = 1
            return eax_26
        case &lookup_table_5abf30[0x38]
            if (arg6 s>= 0)
                int32_t eax_27
                int32_t edx_8
                edx_8:eax_27 = muls.dp.d(0x66666667, esi[0x6b] - esi[0x6a])
                int32_t edx_9 = edx_8 s>> 3
                
                if (arg6 s< (edx_9 u>> 0x1f) + edx_9)
                    *arg7 = *(esi[0x6a] + arg6 * 0x14)
                    int32_t* eax_31
                    eax_31.b = 1
                    return eax_31
        case &lookup_table_5abf30[0x39]
            if (arg6 s>= 0)
                int32_t eax_32
                int32_t edx_10
                edx_10:eax_32 = muls.dp.d(0x66666667, esi[0x6b] - esi[0x6a])
                int32_t edx_11 = edx_10 s>> 3
                
                if (arg6 s< (edx_11 u>> 0x1f) + edx_11)
                    *arg7 = *(esi[0x6a] + arg6 * 0x14 + 4)
                    int32_t* eax_36
                    eax_36.b = 1
                    return eax_36
        case &lookup_table_5abf30[0x3d]
            ecx_26 = esi[0x6e] - esi[0x6d]
            goto label_5ab958
        case &lookup_table_5abf30[0x3e]
            if (arg6 s>= 0)
                int32_t eax_37
                int32_t edx_12
                edx_12:eax_37 = muls.dp.d(0x66666667, esi[0x6e] - esi[0x6d])
                int32_t edx_13 = edx_12 s>> 3
                
                if (arg6 s< (edx_13 u>> 0x1f) + edx_13)
                    *arg7 = *(esi[0x6d] + arg6 * 0x14)
                    int32_t* eax_41
                    eax_41.b = 1
                    return eax_41
        case &lookup_table_5abf30[0x3f]
            if (arg6 s>= 0)
                int32_t eax_42
                int32_t edx_14
                edx_14:eax_42 = muls.dp.d(0x66666667, esi[0x6e] - esi[0x6d])
                int32_t edx_15 = edx_14 s>> 3
                
                if (arg6 s< (edx_15 u>> 0x1f) + edx_15)
                    *arg7 = *(esi[0x6d] + arg6 * 0x14 + 4)
                    int32_t* eax_46
                    eax_46.b = 1
                    return eax_46
        case &lookup_table_5abf30[0x43]
            ecx_26 = esi[0x71] - esi[0x70]
            goto label_5ab958
        case &lookup_table_5abf30[0x44]
            if (arg6 s>= 0)
                int32_t eax_47
                int32_t edx_16
                edx_16:eax_47 = muls.dp.d(0x66666667, esi[0x71] - esi[0x70])
                int32_t edx_17 = edx_16 s>> 3
                
                if (arg6 s< (edx_17 u>> 0x1f) + edx_17)
                    *arg7 = *(esi[0x70] + arg6 * 0x14)
                    int32_t* eax_51
                    eax_51.b = 1
                    return eax_51
        case &lookup_table_5abf30[0x45]
            if (arg6 s>= 0)
                int32_t eax_52
                int32_t edx_18
                edx_18:eax_52 = muls.dp.d(0x66666667, esi[0x71] - esi[0x70])
                int32_t edx_19 = edx_18 s>> 3
                
                if (arg6 s< (edx_19 u>> 0x1f) + edx_19)
                    *arg7 = *(esi[0x70] + arg6 * 0x14 + 4)
                    int32_t* eax_56
                    eax_56.b = 1
                    return eax_56
        case &lookup_table_5abf30[0x49]
            *arg7 = (esi[0x74] - esi[0x73]) s/ 0x1c
            int32_t* eax_58
            eax_58.b = 1
            return eax_58
        case &lookup_table_5abf30[0x4a]
            if (arg6 s>= 0 && arg6 s< (esi[0x74] - esi[0x73]) s/ 0x1c)
                *arg7 = *(esi[0x73] + arg6 * 0x1c)
                int32_t* eax_63
                eax_63.b = 1
                return eax_63
        case &lookup_table_5abf30[0x4b]
            if (arg6 s>= 0 && arg6 s< (esi[0x74] - esi[0x73]) s/ 0x1c)
                *arg7 = *(esi[0x73] + arg6 * 0x1c + 4)
                int32_t* eax_68
                eax_68.b = 1
                return eax_68
        case &lookup_table_5abf30[0x51]
            ecx_26 = esi[0x77] - esi[0x76]
            goto label_5ab958
        case &lookup_table_5abf30[0x52]
            if (arg6 s>= 0)
                int32_t eax_69
                int32_t edx_29
                edx_29:eax_69 = muls.dp.d(0x66666667, esi[0x77] - esi[0x76])
                int32_t edx_30 = edx_29 s>> 3
                
                if (arg6 s< (edx_30 u>> 0x1f) + edx_30)
                    *arg7 = *(esi[0x76] + arg6 * 0x14)
                    int32_t* eax_73
                    eax_73.b = 1
                    return eax_73
        case &lookup_table_5abf30[0x53]
            if (arg6 s>= 0)
                int32_t eax_74
                int32_t edx_31
                edx_31:eax_74 = muls.dp.d(0x66666667, esi[0x77] - esi[0x76])
                int32_t edx_32 = edx_31 s>> 3
                
                if (arg6 s< (edx_32 u>> 0x1f) + edx_32)
                    *arg7 = *(esi[0x76] + arg6 * 0x14 + 4)
                    int32_t* eax_78
                    eax_78.b = 1
                    return eax_78
        case &lookup_table_5abf30[0x57]
            *arg7 = (esi[0x7a] - esi[0x79]) s>> 5
            int32_t* eax_79
            eax_79.b = 1
            return eax_79
        case &lookup_table_5abf30[0x58]
            if (arg6 s>= 0 && arg6 s< (esi[0x7a] - esi[0x79]) s>> 5)
                *arg7 = *((arg6 << 5) + esi[0x79])
                int32_t* eax_83
                eax_83.b = 1
                return eax_83
        case &lookup_table_5abf30[0x59]
            if (arg6 s>= 0 && arg6 s< (esi[0x7a] - esi[0x79]) s>> 5)
                *arg7 = *((arg6 << 5) + esi[0x79] + 4)
                int32_t* eax_87
                eax_87.b = 1
                return eax_87
        case &lookup_table_5abf30[0x5f]
            *arg7 = (esi[0x7d] - esi[0x7c]) s>> 5
            int32_t* eax_88
            eax_88.b = 1
            return eax_88
        case &lookup_table_5abf30[0x60]
            if (arg6 s>= 0 && arg6 s< (esi[0x7d] - esi[0x7c]) s>> 5)
                *arg7 = *((arg6 << 5) + esi[0x7c])
                int32_t* eax_92
                eax_92.b = 1
                return eax_92
        case &lookup_table_5abf30[0x61]
            if (arg6 s>= 0 && arg6 s< (esi[0x7d] - esi[0x7c]) s>> 5)
                *arg7 = *((arg6 << 5) + esi[0x7c] + 4)
                int32_t* eax_96
                eax_96.b = 1
                return eax_96
        case &lookup_table_5abf30[0x67]
            int32_t ecx_98
            ecx_98.b = esi[0x7f].b != 0
            *arg7 = ecx_98
            int32_t* eax_97
            eax_97.b = 1
            return eax_97
        case &lookup_table_5abf30[0x68]
            *arg7 = esi[0x80]
            int32_t* eax_98
            eax_98.b = 1
            return eax_98
        case &lookup_table_5abf30[0x69]
            int32_t ecx_100
            ecx_100.b = esi[0x81].b != 0
            *arg7 = ecx_100
            int32_t* eax_99
            eax_99.b = 1
            return eax_99
        case &lookup_table_5abf30[0x6a]
            int32_t ecx_101
            ecx_101.b = *(esi + 0x205) != 0
            *arg7 = ecx_101
            int32_t* eax_100
            eax_100.b = 1
            return eax_100
        case &lookup_table_5abf30[0x6b]
            int32_t ecx_102
            ecx_102.b = *(esi + 0x206) != 0
            *arg7 = ecx_102
            int32_t* eax_101
            eax_101.b = 1
            return eax_101
uint32_t eax
eax.b = 0
return eax
