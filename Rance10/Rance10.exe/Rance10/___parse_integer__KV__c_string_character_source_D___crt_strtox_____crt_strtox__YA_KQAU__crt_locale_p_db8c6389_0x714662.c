// 函数: ??$parse_integer@_KV?$c_string_character_source@D@__crt_strtox@@@__crt_strtox@@YA_KQAU__crt_locale_pointers@@V?$c_string_character_source@D@0@H_N@Z
// 地址: 0x714662
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t edi
int32_t var_4c = edi
void* arg_8
uint32_t result

if (__crt_stdio_input::stream_input_adapter<wchar_t>::validate(&arg_8) == 0)
    result = 0
else if (arg3 == 0 || (arg3 s>= 2 && arg3 s<= 0x24))
    int32_t ebx
    int32_t var_50_1 = ebx
    void* var_44
    _LocaleUpdate::_LocaleUpdate(&var_44, arg1)
    uint32_t result_1 = 0
    int32_t esi = 0
    char* eax_5 = arg_8
    void* var_34_1 = eax_5
    char var_10_1
    char var_5_1
    int32_t eax_8
    
    while (true)
        ebx.b = *eax_5
        arg_8 = &eax_5[1]
        var_10_1 = ebx.b
        var_5_1 = ebx.b
        void var_40
        eax_8 = __ischartype_l(zx.d(ebx.b), 8, &var_40)
        
        if (eax_8 == 0)
            break
        
        eax_5 = arg_8
    
    eax_8.b = arg4 != eax_8.b
    int32_t var_c_1 = eax_8
    void* edi_3
    
    if (ebx.b != 0x2d)
        if (ebx.b == 0x2b)
            goto label_714710
        
        edi_3 = arg_8
    else
        var_c_1 = eax_8 | 2
    label_714710:
        void* edi_2 = arg_8
        ebx.b = *edi_2
        edi_3 = edi_2 + 1
        var_5_1 = ebx.b
        var_10_1 = ebx.b
        arg_8 = edi_3
    
    int32_t eax_13
    
    if (arg3 == 0 || arg3 == 0x10)
        eax_8.b = ebx.b
        eax_8.b -= 0x30
        int32_t eax_10
        
        if (eax_8.b u> 9)
            eax_8.b = ebx.b
            eax_8.b -= 0x61
            
            if (eax_8.b u> 0x19)
                eax_8.b = ebx.b
                eax_8.b -= 0x41
                
                if (eax_8.b u> 0x19)
                    eax_10 = 0xffffffff
                else
                    eax_10 = sx.d(ebx.b) - 0x37
            else
                eax_10 = sx.d(ebx.b) - 0x57
        else
            eax_10 = sx.d(ebx.b) - 0x30
        
        if (eax_10 == 0)
            eax_10.b = *edi_3
            char var_20 = eax_10.b
            arg_8 = edi_3 + 1
            
            if (eax_10.b == 0x78 || eax_10.b == 0x58)
                if (arg3 == 0)
                    arg3 = 0x10
                
                eax_10.b = *(edi_3 + 1)
                edi_3 += 2
                var_5_1 = eax_10.b
                var_10_1 = eax_10.b
                arg_8 = edi_3
            else
                if (arg3 == 0)
                    arg3 = 8
                
                __crt_strtox::c_string_character_source<char>::unget(&arg_8, var_20)
                edi_3 = arg_8
            
            eax_13 = arg3
        else if (arg3 != 0)
            eax_13 = arg3
        else
            eax_13 = 0xa
            arg3 = 0xa
    else
        eax_13 = arg3
    
    int32_t eax_14
    uint32_t edx_2
    edx_2:eax_14 = sx.q(eax_13)
    uint32_t eax_15
    int32_t ecx_6
    int32_t edx_3
    eax_15, ecx_6, edx_3 = __aulldvrm(0xffffffff, 0xffffffff, eax_14, edx_2)
    int32_t var_28_1 = ecx_6
    ecx_6.b = var_5_1
    uint32_t var_1c_1 = eax_15
    
    while (true)
        eax_15.b = ecx_6.b
        eax_15.b -= 0x30
        int32_t edx_5
        
        if (eax_15.b u> 9)
            eax_15.b = ecx_6.b
            eax_15.b -= 0x61
            
            if (eax_15.b u> 0x19)
                eax_15.b = ecx_6.b
                eax_15.b -= 0x41
                
                if (eax_15.b u> 0x19)
                    edx_5 = 0xffffffff
                else
                    edx_5 = sx.d(ecx_6.b) - 0x37
            else
                edx_5 = sx.d(ecx_6.b) - 0x57
        else
            edx_5 = sx.d(ecx_6.b) - 0x30
        
        if (edx_5 == 0xffffffff)
            break
        
        if (edx_5 u>= arg3)
            break
        
        int32_t ecx_8 = var_c_1 | 8
        var_c_1 = ecx_8
        
        if (esi u< edx_3 || (esi u<= edx_3 && result_1 u< var_1c_1) || (result_1 == var_1c_1
                && esi == edx_3 && (0 u< ebx || (0 u<= ebx && edx_5 u<= var_28_1))))
            int32_t eax_16
            int32_t edx_8
            eax_16, ecx_6, edx_8 = __allmul(eax_14, edx_2, result_1, esi)
            result_1 = eax_16 + edx_5
            esi = adc.d(edx_8, 0, eax_16 + edx_5 u< eax_16)
        else
            var_c_1 = ecx_8 | 4
        
        ecx_6.b = *edi_3
        edi_3 += 1
        var_10_1 = ecx_6.b
        arg_8 = edi_3
    
    __crt_strtox::c_string_character_source<char>::unget(&arg_8, var_10_1)
    
    if ((var_c_1.b & 8) != 0)
        result = result_1
        
        if (__crt_strtox::is_overflow_condition<uint64_t>(var_c_1, result, esi) != 0)
            *__errno() = 0x22
            char eax_21 = var_c_1.b
            
            if ((eax_21 & 1) != 0)
                uint32_t result_2
                
                if ((eax_21 & 2) == 0)
                    result_2 = 0xffffffff
                else
                    result_2 = 0
                
                result = result_2
            else
                result = 0xffffffff
        else if ((var_c_1.b & 2) != 0)
            result = neg.d(result)
    else
        arg_8 = var_34_1
        result = 0
    
    char var_38
    
    if (var_38 != 0)
        void* eax_22 = var_44
        *(eax_22 + 0x350) &= 0xfffffffd
else
    *__errno() = 0x16
    __invalid_parameter_noinfo()
    result = 0

if (arg2 != 0)
    *arg2 = arg_8

return result
