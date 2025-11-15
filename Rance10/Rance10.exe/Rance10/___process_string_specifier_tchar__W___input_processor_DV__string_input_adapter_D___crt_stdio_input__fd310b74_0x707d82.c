// 函数: ??$process_string_specifier_tchar@_W@?$input_processor@DV?$string_input_adapter@D@__crt_stdio_input@@@__crt_stdio_input@@AAE_NW4conversion_mode@1@_W@Z
// 地址: 0x707d82
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int16_t** ebx = nullptr
int32_t edi
int32_t var_2c = edi
int16_t** result
int32_t* edi_1

if (*(arg1 + 0x2e) != 0)
label_707dd0:
    edi_1 = 0xffffffff
label_707dd5:
    
    if (edi_1 != 0)
        int32_t eax_9 = arg1[0xc]
        int32_t eax_10 = arg1[0xd]
        int16_t** var_20 = ebx
        void* var_10 = edi_1
        
        if (arg2 != 0 && edi_1 != 0xffffffff)
            var_10 = edi_1 - 1
        
        int32_t edx_1 = 0
        int32_t ecx_2 = 0
        
        while (true)
            if ((eax_9 | eax_10) == 0 || edx_1 != eax_9 || ecx_2 != eax_10)
                int32_t eax_14 = __crt_stdio_input::string_input_adapter<char>::get(&arg1[2])
                
                if (__crt_stdio_input::input_processor<char,class __crt_stdio_input::string_input_adapter<char> >::is_character_allowed_in_string(
                        arg1, arg2, eax_14) == 0)
                    __crt_stdio_input::string_input_adapter<char>::unget(&arg1[2], eax_14)
                else if (*(arg1 + 0x2e) != 0)
                label_707e7d:
                    int32_t temp1_1 = edx_1
                    edx_1 += 1
                    ecx_2 = adc.d(ecx_2, 0, temp1_1 u>= 0xffffffff)
                    continue
                else
                    if (var_10 == 0)
                        break
                    
                    int32_t var_30_2 = eax_14
                    void** var_34_2 = &var_10
                    
                    if (__crt_stdio_input::input_processor<char,class __crt_stdio_input::string_input_adapter<char> >::write_character(
                            arg1, ebx, edi_1, &var_20) != 0)
                        goto label_707e7d
            
            if ((edx_1 | ecx_2) == 0)
                goto label_707db4
            
            if (arg2 == 0 && (edx_1 != eax_9 || ecx_2 != eax_10) && (*arg1 & 4) == 0)
                goto label_707db4
            
            if (*(arg1 + 0x2e) == 0)
                if (arg2 != 0)
                    *var_20 = nullptr
                
                arg1[0x1c] += 1
            
            result.b = 1
            goto label_707eeb
        
        if (edi_1 != 0xffffffff)
            *ebx = nullptr
    else if (((*arg1 & 4) | edi_1) != 0)
        __crt_stdio_input::string_input_adapter<char>::get(&arg1[2])
        *ebx = nullptr
    
    *__errno() = 0xc
else
    arg1[0x1b] += 4
    void* ecx = arg1[0x1b]
    ebx = *(ecx - 4)
    
    if (ebx != 0)
        if ((*arg1 & 1) == 0)
            goto label_707dd0
        
        arg1[0x1b] = ecx + 4
        edi_1 = *ecx
        goto label_707dd5
    
    *__errno() = 0x16
    __invalid_parameter_noinfo()
label_707db4:
result.b = 0
label_707eeb:
return result
