// 函数: ??$parse_integer@_KV?$input_adapter_character_source@V?$stream_input_adapter@D@__crt_stdio_input@@@__crt_strtox@@@__crt_strtox@@YA_KQAU__crt_locale_pointers@@V?$input_adapter_character_source@V?$stream_input_adapter@D@__crt_stdio_input@@@0@H_N@Z
// 地址: 0x70789f
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t edi
int32_t var_4c = edi
int32_t arg_8[0x4]
int32_t result

if (__crt_strtox::input_adapter_character_source<class __crt_stdio_input::stream_input_adapter<wchar_t> >::validate(
        &arg_8) == 0)
    result = 0
else
    int32_t edi_1 = arg5
    
    if (edi_1 == 0 || (edi_1 s>= 2 && edi_1 s<= 0x24))
        void* var_44
        _LocaleUpdate::_LocaleUpdate(&var_44, arg1)
        int32_t result_3 = 0
        int32_t esi = 0
        int32_t ebx
        ebx.b = __crt_strtox::input_adapter_character_source<class __crt_stdio_input::string_input_adapter<char> >::get(
            &arg_8)
        void var_40
        void* var_54_2 = &var_40
        int32_t var_58_1 = 8
        uint32_t var_5c_1 = zx.d(ebx.b)
        char var_8_1
        int32_t eax_7
        
        while (true)
            var_8_1 = ebx.b
            eax_7 = __ischartype_l(var_5c_1, 8, var_54_2)
            
            if (eax_7 == 0)
                break
            
            ebx.b = __crt_strtox::input_adapter_character_source<class __crt_stdio_input::string_input_adapter<char> >::get(
                &arg_8)
            var_54_2 = &var_40
            int32_t var_58_2 = 8
            var_5c_1 = zx.d(ebx.b)
        
        eax_7.b = arg6 != eax_7.b
        int32_t var_10_1 = eax_7
        
        if (ebx.b == 0x2d)
            var_10_1 = eax_7 | 2
            ebx.b = __crt_strtox::input_adapter_character_source<class __crt_stdio_input::string_input_adapter<char> >::get(
                &arg_8).b
            var_8_1 = ebx.b
        else if (ebx.b == 0x2b)
            ebx.b = __crt_strtox::input_adapter_character_source<class __crt_stdio_input::string_input_adapter<char> >::get(
                &arg_8).b
            var_8_1 = ebx.b
        
        int32_t result_1 = 0xffffffff
        
        if (edi_1 == 0 || edi_1 == 0x10)
            eax_7.b = ebx.b
            eax_7.b -= 0x30
            int32_t eax_10
            
            if (eax_7.b u> 9)
                eax_7.b = ebx.b
                eax_7.b -= 0x61
                
                if (eax_7.b u> 0x19)
                    eax_7.b = ebx.b
                    eax_7.b -= 0x41
                    
                    if (eax_7.b u> 0x19)
                        eax_10 = 0xffffffff
                    else
                        eax_10 = sx.d(ebx.b) - 0x37
                else
                    eax_10 = sx.d(ebx.b) - 0x57
            else
                eax_10 = sx.d(ebx.b) - 0x30
            
            if (eax_10 == 0)
                char eax_13 = __crt_strtox::input_adapter_character_source<class __crt_stdio_input::string_input_adapter<char> >::get(
                    &arg_8)
                
                if (eax_13 == 0x78 || eax_13 == 0x58)
                    if (edi_1 == 0)
                        edi_1 = 0x10
                    
                    var_8_1 = __crt_strtox::input_adapter_character_source<class __crt_stdio_input::string_input_adapter<char> >::get(
                        &arg_8)
                else
                    if (edi_1 == 0)
                        edi_1 = 8
                    
                    __crt_strtox::input_adapter_character_source<class __crt_stdio_input::stream_input_adapter<char> >::unget(
                        &arg_8, eax_13)
            else if (edi_1 == 0)
                edi_1 = 0xa
        
        int32_t eax_16
        uint32_t edx
        edx:eax_16 = sx.q(edi_1)
        uint32_t eax_17
        int32_t ecx_9
        int32_t edx_1
        eax_17, ecx_9, edx_1 = __aulldvrm(0xffffffff, 0xffffffff, eax_16, edx)
        int32_t var_24_1 = ecx_9
        ecx_9.b = var_8_1
        int32_t ebx_1 = var_10_1
        uint32_t var_18_1 = eax_17
        
        while (true)
            eax_17.b = ecx_9.b
            eax_17.b -= 0x30
            int32_t edx_3
            
            if (eax_17.b u> 9)
                eax_17.b = ecx_9.b
                eax_17.b -= 0x61
                
                if (eax_17.b u> 0x19)
                    eax_17.b = ecx_9.b
                    eax_17.b -= 0x41
                    
                    if (eax_17.b u> 0x19)
                        edx_3 = 0xffffffff
                    else
                        edx_3 = sx.d(ecx_9.b) - 0x37
                else
                    edx_3 = sx.d(ecx_9.b) - 0x57
            else
                edx_3 = sx.d(ecx_9.b) - 0x30
            
            if (edx_3 == 0xffffffff)
                break
            
            if (edx_3 u>= edi_1)
                break
            
            ebx_1 |= 8
            
            if (esi u< edx_1 || (esi u<= edx_1 && result_3 u< var_18_1) || (result_3 == var_18_1
                    && esi == edx_1 && (0 u< ebx || (0 u<= ebx && edx_3 u<= var_24_1))))
                int32_t eax_19
                int32_t edx_6
                eax_19, edx_6 = __allmul(eax_16, edx, result_3, esi)
                result_3 = eax_19 + edx_3
                esi = adc.d(edx_6, 0, eax_19 + edx_3 u< eax_19)
            else
                ebx_1 |= 4
            
            eax_17, ecx_9 = __crt_strtox::input_adapter_character_source<class __crt_stdio_input::string_input_adapter<char> >::get(
                &arg_8)
            ecx_9.b = eax_17.b
            var_8_1 = ecx_9.b
        
        __crt_strtox::input_adapter_character_source<class __crt_stdio_input::stream_input_adapter<char> >::unget(
            &arg_8, var_8_1)
        
        if ((ebx_1.b & 8) != 0)
            int32_t result_2 = result_3
            
            if (__crt_strtox::is_overflow_condition<uint64_t>(ebx_1, result_2, esi) == 0)
                if ((ebx_1.b & 2) != 0)
                    result_2 = neg.d(result_2)
                
                result = result_2
            else
                *__errno() = 0x22
                
                if ((ebx_1.b & 1) != 0)
                    if ((ebx_1.b & 2) != 0)
                        result_1 = 0
                    
                    result = result_1
                else
                    result = 0xffffffff
        else
            __crt_strtox::input_adapter_character_source<class __crt_stdio_input::console_input_adapter<wchar_t> >::restore_state(
                &arg_8, arg2, arg3)
            result = 0
        
        char var_38
        
        if (var_38 != 0)
            void* eax_23 = var_44
            *(eax_23 + 0x350) &= 0xfffffffd
    else
        *__errno() = 0x16
        __invalid_parameter_noinfo()
        result = 0

if (arg4 != 0 && (arg2 | arg3) == 0)
    *arg4 = 0

return result
