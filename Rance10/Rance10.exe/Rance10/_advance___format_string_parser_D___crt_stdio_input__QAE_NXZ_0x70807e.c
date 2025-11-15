// 函数: ?advance@?$format_string_parser@D@__crt_stdio_input@@QAE_NXZ
// 地址: 0x70807e
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

uint32_t result

if (arg1[3] == 0)
    result = arg1[2]
    arg1[4] = 0
    arg1[5].w = 0
    *(arg1 + 0x16) = 0
    arg1[6] = 0
    arg1[7] = 0
    arg1[8] = 0
    arg1[9].b = 0
    arg1[0xa] = 0
    
    if (*result != 0)
        if (_isspace(zx.d(*result)) == 0)
            char* ecx_2 = arg1[2]
            
            if (*ecx_2 != 0x25 || ecx_2[1] == 0x25)
                arg1[4] = 3
                void* eax_1
                eax_1.b = *ecx_2
                arg1[5].b = eax_1.b
                int32_t var_c_3 = 0
                void* const eax_5
                eax_5.b = *ecx_2 == 0x25
                arg1[2] = eax_5 + &ecx_2[1]
                return __crt_stdio_input::format_string_parser<char>::scan_optional_literal_character_trail_bytes_tchar(
                    arg1)
            
            arg1[4] = 4
            arg1[2] = &ecx_2[1]
            
            if (ecx_2[1] == 0x2a)
                *(arg1 + 0x16) = 1
                arg1[2] = &ecx_2[2]
            
            if (__crt_stdio_input::format_string_parser<char>::scan_optional_field_width(arg1).b
                    == 0)
                result.b = 0
            else
                __crt_stdio_input::format_string_parser<char>::scan_optional_length_modifier(arg1)
                __crt_stdio_input::format_string_parser<char>::scan_optional_wide_modifier(arg1)
                
                if (__crt_stdio_input::format_string_parser<char>::scan_conversion_specifier(arg1).b
                        == 0)
                    result.b = 0
                else if (*(arg1[0xa] * 0xc + arg1[8] + 0x754ce0) != 0)
                    result.b = 1
                else
                    arg1[4] = 0
                    arg1[5].w = 0
                    *(arg1 + 0x16) = 0
                    arg1[6] = 0
                    arg1[7] = 0
                    arg1[8] = 0
                    arg1[9].b = 0
                    arg1[0xa] = 0
                    arg1[3] = 0x16
                    result.b = 0
        else
            arg1[4] = 2
            
            while (_isspace(zx.d(*arg1[2])) != 0)
                arg1[2] += 1
            
            result.b = 1
    else
        arg1[4] = 1
        result.b = 0
else
    result.b = 0

return result
