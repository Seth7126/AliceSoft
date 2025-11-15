// 函数: ??$parse_integer@KV?$c_string_character_source@D@__crt_strtox@@@__crt_strtox@@YAKQAU__crt_locale_pointers@@V?$c_string_character_source@D@0@H_N@Z
// 地址: 0x713d55
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

uint32_t ebx
uint32_t var_30 = ebx
int32_t edi
int32_t var_34 = edi
char* arg_8
uint32_t result

if (__crt_stdio_input::stream_input_adapter<wchar_t>::validate(&arg_8) == 0)
    result = 0
else
    int32_t edi_1 = arg3
    
    if (edi_1 == 0 || (edi_1 s>= 2 && edi_1 s<= 0x24))
        void* var_2c
        _LocaleUpdate::_LocaleUpdate(&var_2c, arg1)
        char* eax_3 = arg_8
        uint32_t result_2 = 0
        char* var_1c_1 = eax_3
        char var_8_1
        int32_t eax_6
        
        while (true)
            ebx.b = *eax_3
            arg_8 = &eax_3[1]
            var_8_1 = ebx.b
            void var_28
            eax_6 = __ischartype_l(zx.d(ebx.b), 8, &var_28)
            
            if (eax_6 == 0)
                break
            
            eax_3 = arg_8
        
        eax_6.b = arg4 != eax_6.b
        int32_t var_c_1 = eax_6
        char* esi_2
        
        if (ebx.b != 0x2d)
            if (ebx.b == 0x2b)
                goto label_713df8
            
            esi_2 = arg_8
        else
            var_c_1 = eax_6 | 2
        label_713df8:
            char* esi_1 = arg_8
            ebx.b = *esi_1
            esi_2 = &esi_1[1]
            var_8_1 = ebx.b
            arg_8 = esi_2
        
        if (edi_1 == 0 || edi_1 == 0x10)
            eax_6.b = ebx.b
            eax_6.b -= 0x30
            int32_t eax_8
            
            if (eax_6.b u> 9)
                eax_6.b = ebx.b
                eax_6.b -= 0x61
                
                if (eax_6.b u> 0x19)
                    eax_6.b = ebx.b
                    eax_6.b -= 0x41
                    
                    if (eax_6.b u> 0x19)
                        eax_8 = 0xffffffff
                    else
                        eax_8 = sx.d(ebx.b) - 0x37
                else
                    eax_8 = sx.d(ebx.b) - 0x57
            else
                eax_8 = sx.d(ebx.b) - 0x30
            
            if (eax_8 == 0)
                eax_8.b = *esi_2
                char var_14 = eax_8.b
                arg_8 = &esi_2[1]
                
                if (eax_8.b == 0x78 || eax_8.b == 0x58)
                    if (edi_1 == 0)
                        edi_1 = 0x10
                    
                    ebx.b = esi_2[1]
                    esi_2 = &esi_2[2]
                    var_8_1 = ebx.b
                    arg_8 = esi_2
                else
                    if (edi_1 == 0)
                        edi_1 = 8
                    
                    __crt_strtox::c_string_character_source<char>::unget(&arg_8, var_14)
                    esi_2 = arg_8
            else if (edi_1 == 0)
                edi_1 = 0xa
        
        int32_t edx_2 = 0
        int32_t eax_11 = 0xffffffff
        uint32_t temp0_1 = divu.dp.d(edx_2:eax_11, edi_1)
        int32_t edx_4 = var_c_1
        
        while (true)
            int32_t ecx_6
            
            if (ebx.b - 0x30 u> 9)
                uint32_t eax_12
                eax_12.b = ebx.b
                eax_12.b -= 0x61
                
                if (eax_12.b u> 0x19)
                    eax_12.b = ebx.b
                    eax_12.b -= 0x41
                    
                    if (eax_12.b u> 0x19)
                        ecx_6 = 0xffffffff
                    else
                        ecx_6 = sx.d(ebx.b) - 0x37
                else
                    ecx_6 = sx.d(ebx.b) - 0x57
            else
                ecx_6 = sx.d(ebx.b) - 0x30
            
            if (ecx_6 == 0xffffffff)
                break
            
            if (ecx_6 u>= edi_1)
                break
            
            edx_4 |= 8
            
            if (result_2 u< temp0_1
                    || (result_2 == temp0_1 && ecx_6 u<= modu.dp.d(edx_2:eax_11, edi_1)))
                result_2 = result_2 * edi_1 + ecx_6
            else
                edx_4 |= 4
            
            ebx.b = *esi_2
            esi_2 = &esi_2[1]
            var_8_1 = ebx.b
            arg_8 = esi_2
        
        __crt_strtox::c_string_character_source<char>::unget(&arg_8, var_8_1)
        
        if ((edx_4.b & 8) != 0)
            uint32_t result_1 = result_2
            
            if (__crt_strtox::is_overflow_condition<unsigned long>(edx_4, result_1) == 0)
                if ((edx_4.b & 2) != 0)
                    result_1 = neg.d(result_1)
                
                result = result_1
            else
                *__errno() = 0x22
                
                if ((edx_4.b & 1) == 0)
                    result = 0xffffffff
                else if ((edx_4.b & 2) == 0)
                    result = 0x7fffffff
                else
                    result = 0x80000000
        else
            result = 0
            arg_8 = var_1c_1
        
        char var_20
        
        if (var_20 != 0)
            void* eax_17 = var_2c
            *(eax_17 + 0x350) &= 0xfffffffd
    else
        *__errno() = 0x16
        __invalid_parameter_noinfo()
        result = 0

if (arg2 != 0)
    *arg2 = arg_8

return result
