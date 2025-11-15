// 函数: ??$common_localtime_s@_J@@YAHQAUtm@@QB_J@Z
// 地址: 0x703a97
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (arg1 == 0)
    *__errno() = 0x16
    __invalid_parameter_noinfo()
    return 0x16

int32_t edi
int32_t var_20_1 = edi
__builtin_memset(arg1, 0xffffffff, 0x24)
int32_t result

if (arg2 != 0)
    int32_t temp2_1 = arg2[1]
    int32_t temp3_1
    
    if (temp2_1 s> 0 || (temp2_1 s>= 0 && *arg2 u>= 0))
        temp3_1 = arg2[1]
    
    if ((temp2_1 s> 0 || (temp2_1 s>= 0 && *arg2 u>= 0))
            && (temp3_1 s< 7 || (temp3_1 s<= 7 && *arg2 u<= 0x93406fff)))
        ___tzset()
        int32_t var_c = 0
        int32_t var_10 = 0
        int32_t var_8 = 0
        
        if (__get_fmode(&var_c) != 0)
        label_703d1a:
            int32_t var_38
            __builtin_memset(&var_38, 0, 0x14)
            __invoke_watson()
            noreturn
        
        if (__get_stream_buffer_pointers(&var_10) != 0)
            goto label_703d1a
        
        if (__get_daylight(&var_8) != 0)
            goto label_703d1a
        
        int32_t ebx_1 = arg2[1]
        int32_t ecx_4 = *arg2
        
        if (ebx_1 s< 0)
        label_703bde:
            int32_t* var_28_7 = arg2
            int32_t* var_2c_3 = arg1
            result = sub_70ca76()
            
            if (result == 0)
                int32_t eax_12
                int32_t edx_3
                edx_3:eax_12 = sx.q(*arg1)
                int32_t eax_15
                
                if (var_c == 0)
                    eax_15 = var_8
                else if (__isindst(arg1) == 0)
                    eax_15 = var_8
                else
                    eax_15 = var_8 + var_10
                    arg1[8] = 1
                
                int32_t eax_16
                int32_t edx_4
                edx_4:eax_16 = sx.q(eax_15)
                int32_t edi_5 = eax_12 - eax_16
                uint32_t ebx_4 = sbb.d(edx_3, edx_4, eax_12 u< eax_16)
                uint32_t eax_17 = __allrem(edi_5, ebx_4, 0x3c, 0)
                *arg1 = eax_17
                
                if (eax_17 s< 0)
                    int32_t temp8_1 = edi_5
                    edi_5 -= 0x3c
                    *arg1 = eax_17 + 0x3c
                    ebx_4 = adc.d(ebx_4, 0xffffffff, temp8_1 u>= 0x3c)
                
                uint32_t eax_19
                int32_t edx_5
                eax_19, edx_5 = __alldiv(edi_5, ebx_4, 0x3c, 0)
                int32_t eax_21
                int32_t edx_6
                edx_6:eax_21 = sx.q(arg1[1])
                int32_t edi_7 = eax_19 + eax_21
                uint32_t ebx_6 = adc.d(edx_5, edx_6, eax_19 + eax_21 u< eax_19)
                uint32_t eax_22 = __allrem(edi_7, ebx_6, 0x3c, 0)
                arg1[1] = eax_22
                
                if (eax_22 s< 0)
                    int32_t temp10_1 = edi_7
                    edi_7 -= 0x3c
                    arg1[1] = eax_22 + 0x3c
                    ebx_6 = adc.d(ebx_6, 0xffffffff, temp10_1 u>= 0x3c)
                
                uint32_t eax_24
                int32_t edx_7
                eax_24, edx_7 = __alldiv(edi_7, ebx_6, 0x3c, 0)
                int32_t eax_26
                int32_t edx_8
                edx_8:eax_26 = sx.q(arg1[2])
                int32_t edi_9 = eax_24 + eax_26
                uint32_t ebx_8 = adc.d(edx_7, edx_8, eax_24 + eax_26 u< eax_24)
                uint32_t eax_27 = __allrem(edi_9, ebx_8, 0x18, 0)
                arg1[2] = eax_27
                
                if (eax_27 s< 0)
                    int32_t temp12_1 = edi_9
                    edi_9 -= 0x18
                    arg1[2] = eax_27 + 0x18
                    ebx_8 = adc.d(ebx_8, 0xffffffff, temp12_1 u>= 0x18)
                
                uint32_t eax_29
                int32_t edx_9
                eax_29, edx_9 = __alldiv(edi_9, ebx_8, 0x18, 0)
                
                if (edx_9 s< 0)
                label_703ce3:
                    int32_t eax_35 = arg1[6] + 7
                    arg1[3] += eax_29
                    int32_t eax_38 = arg1[3]
                    arg1[6] = mods.dp.d(sx.q(eax_35 + eax_29), 7)
                    
                    if (eax_38 s> 0)
                        arg1[7] += eax_29
                    else
                        arg1[4] = 0xb
                        arg1[3] = eax_38 + 0x1f
                        arg1[7] += eax_29 + 0x16d
                        arg1[5] -= 1
                else if (edx_9 s> 0 || eax_29 != 0)
                    int32_t eax_32
                    int32_t edx_10
                    edx_10:eax_32 = sx.q(arg1[6] + eax_29)
                    arg1[3] += eax_29
                    arg1[6] = mods.dp.d(edx_10:eax_32, 7)
                    arg1[7] += eax_29
                else if (edx_9 s<= 0 && (edx_9 s< 0 || eax_29 u< 0))
                    goto label_703ce3
                
                result = 0
        else
            if (ebx_1 s> 0)
                if (ebx_1 s> 7 || (ebx_1 s>= 7 && ecx_4 u>= 0x933c7b7f))
                    goto label_703bde
            else if (ecx_4 u<= 0x3f480 || ebx_1 s> 7 || (ebx_1 s>= 7 && ecx_4 u>= 0x933c7b7f))
                goto label_703bde
            
            int32_t eax_7
            int32_t edx_1
            edx_1:eax_7 = sx.q(var_8)
            int32_t var_18
            int32_t* var_28_4 = &var_18
            var_18 = ecx_4 - eax_7
            int32_t* var_2c_1 = arg1
            result = sub_70ca76()
            
            if (result == 0)
                if (var_c == result)
                    result = 0
                else if (__isindst(arg1) == 0)
                    result = 0
                else
                    int32_t eax_10
                    int32_t edx_2
                    edx_2:eax_10 = sx.q(var_10)
                    int32_t temp13_1 = var_18
                    var_18 -= eax_10
                    int32_t* var_28_6 = &var_18
                    int32_t var_14_2 =
                        sbb.d(sbb.d(ebx_1, edx_1, ecx_4 u< eax_7), edx_2, temp13_1 u< eax_10)
                    int32_t* var_2c_2 = arg1
                    result = sub_70ca76()
                    
                    if (result == 0)
                        arg1[8] = 1
                        result = 0
    else
        *__errno() = 0x16
        result = 0x16
else
    *__errno() = 0x16
    __invalid_parameter_noinfo()
    result = 0x16

return result
