// 函数: sub_69b98b
// 地址: 0x69b98b
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

char* edi = arg1
int32_t var_c = 0
int32_t var_10 = 0
int32_t var_8 = 0

if (edi != 0)
    _memset(edi, 0xff, 0x24)

if (edi == 0 || arg2 == 0)
    *__errno() = 0x16
    __invalid_parameter_noinfo()
else
    int32_t temp2_1 = arg2[1]
    
    if (temp2_1 s> 0)
    label_69b9ef:
        int32_t temp3_1 = arg2[1]
        
        if (temp3_1 s< 7)
        label_69b9fe:
            ___tzset()
            
            if (sub_6a3218(&var_c) == 0 && sub_6a3242(&var_10) == 0 && sub_6a326c(&var_8) == 0)
                int32_t ebx_1 = arg2[1]
                int32_t ecx_4 = *arg2
                int32_t result
                
                if (ebx_1 s< 0 || (ebx_1 s<= 0 && ecx_4 u<= 0x3f480))
                    result = sub_69c846(edi, arg2)
                    
                    if (result != 0)
                        return result
                    
                    int32_t ebx_4
                    char* esi_3
                    
                    if (var_c == result)
                    label_69baf5:
                        int32_t eax_17
                        int32_t edx_6
                        edx_6:eax_17 = sx.q(*edi)
                        int32_t eax_19
                        int32_t edx_7
                        edx_7:eax_19 = sx.q(var_8)
                        ebx_4 = eax_17 - eax_19
                        esi_3 = sbb.d(edx_6, edx_7, eax_17 u< eax_19)
                    else
                        if (__isindst(edi) == 0)
                            goto label_69baf5
                        
                        int32_t eax_13
                        int32_t edx_3
                        edx_3:eax_13 = sx.q(var_10 + var_8)
                        *(edi + 0x20) = 1
                        int32_t eax_15
                        int32_t edx_4
                        edx_4:eax_15 = sx.q(*edi)
                        ebx_4 = eax_15 - eax_13
                        char* edx_5 = sbb.d(edx_4, edx_3, eax_15 u< eax_13)
                        arg1 = edx_5
                        esi_3 = edx_5
                    
                    uint32_t eax_20 = __allrem(ebx_4, esi_3, 0x3c, 0)
                    *edi = eax_20
                    
                    if (eax_20 s< 0)
                        int32_t temp9_1 = ebx_4
                        ebx_4 -= 0x3c
                        *edi = eax_20 + 0x3c
                        esi_3 = adc.d(esi_3, 0xffffffff, temp9_1 u>= 0x3c)
                    
                    uint32_t eax_22
                    int32_t edx_8
                    eax_22, edx_8 = __alldiv(ebx_4, esi_3, 0x3c, 0)
                    int32_t eax_24
                    int32_t edx_9
                    edx_9:eax_24 = sx.q(*(edi + 4))
                    int32_t esi_6 = eax_22 + eax_24
                    uint32_t ebx_7 = adc.d(edx_8, edx_9, eax_22 + eax_24 u< eax_22)
                    uint32_t eax_25 = __allrem(esi_6, ebx_7, 0x3c, 0)
                    *(edi + 4) = eax_25
                    
                    if (eax_25 s< 0)
                        int32_t temp12_1 = esi_6
                        esi_6 -= 0x3c
                        *(edi + 4) = eax_25 + 0x3c
                        ebx_7 = adc.d(ebx_7, 0xffffffff, temp12_1 u>= 0x3c)
                    
                    uint32_t eax_27
                    int32_t edx_10
                    eax_27, edx_10 = __alldiv(esi_6, ebx_7, 0x3c, 0)
                    int32_t eax_29
                    int32_t edx_11
                    edx_11:eax_29 = sx.q(*(edi + 8))
                    int32_t esi_8 = eax_27 + eax_29
                    uint32_t ebx_9 = adc.d(edx_10, edx_11, eax_27 + eax_29 u< eax_27)
                    uint32_t eax_30 = __allrem(esi_8, ebx_9, 0x18, 0)
                    *(edi + 8) = eax_30
                    
                    if (eax_30 s< 0)
                        int32_t temp14_1 = esi_8
                        esi_8 -= 0x18
                        *(edi + 8) = eax_30 + 0x18
                        ebx_9 = adc.d(ebx_9, 0xffffffff, temp14_1 u>= 0x18)
                    
                    uint32_t eax_32
                    int32_t edx_12
                    eax_32, edx_12 = __alldiv(esi_8, ebx_9, 0x18, 0)
                    
                    if (edx_12 s< 0)
                    label_69bbc7:
                        int32_t eax_38 = *(edi + 0x18) + 7
                        *(edi + 0xc) += eax_32
                        int32_t eax_41 = *(edi + 0xc)
                        *(edi + 0x18) = mods.dp.d(sx.q(eax_38 + eax_32), 7)
                        
                        if (eax_41 s> 0)
                            *(edi + 0x1c) += eax_32
                        else
                            *(edi + 0x10) = 0xb
                            *(edi + 0xc) = eax_41 + 0x1f
                            *(edi + 0x1c) += eax_32 + 0x16d
                            *(edi + 0x14) -= 1
                    else if (edx_12 s> 0 || eax_32 != 0)
                        int32_t eax_35
                        int32_t edx_13
                        edx_13:eax_35 = sx.q(*(edi + 0x18) + eax_32)
                        *(edi + 0xc) += eax_32
                        *(edi + 0x18) = mods.dp.d(edx_13:eax_35, 7)
                        *(edi + 0x1c) += eax_32
                    else if (edx_12 s<= 0 && (edx_12 s< 0 || eax_32 u< 0))
                        goto label_69bbc7
                else
                    int32_t eax_6
                    int32_t edx_1
                    edx_1:eax_6 = sx.q(var_8)
                    int32_t var_18 = ecx_4 - eax_6
                    result = sub_69c846(edi, &var_18)
                    
                    if (result != 0)
                        return result
                    
                    if (var_c != result && __isindst(edi) != 0)
                        int32_t eax_9
                        int32_t edx_2
                        edx_2:eax_9 = sx.q(var_10)
                        int32_t temp10_1 = var_18
                        var_18 -= eax_9
                        int32_t var_14_2 =
                            sbb.d(sbb.d(ebx_1, edx_1, ecx_4 u< eax_6), edx_2, temp10_1 u< eax_9)
                        result = sub_69c846(edi, &var_18)
                        
                        if (result != 0)
                            return result
                        
                        *(edi + 0x20) = 1
                return 0
            
            int32_t var_38
            __builtin_memset(&var_38, 0, 0x14)
            __invoke_watson()
            noreturn
        
        if (temp3_1 s<= 7 && *arg2 u<= 0x93406fff)
            goto label_69b9fe
    else if (temp2_1 s>= 0 && *arg2 u>= 0)
        goto label_69b9ef
    
    *__errno() = 0x16

return 0x16
