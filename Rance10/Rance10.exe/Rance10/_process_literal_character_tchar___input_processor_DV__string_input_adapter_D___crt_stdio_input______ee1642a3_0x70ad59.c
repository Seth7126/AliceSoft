// 函数: ?process_literal_character_tchar@?$input_processor@DV?$string_input_adapter@D@__crt_stdio_input@@@__crt_stdio_input@@AAE_ND@Z
// 地址: 0x70ad59
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t edi
int32_t var_c = edi
int32_t ebx
ebx.b = arg2
int32_t result

if ((*(___pctype_func(arg1) + (zx.d(ebx.b) << 1)) & 0x8000) != 0)
    result = __crt_stdio_input::string_input_adapter<char>::get(&arg1[2])
    
    if (result == zx.d(*(arg1 + 0x2d)))
        result.b = 1
    else
        __crt_stdio_input::string_input_adapter<char>::unget(&arg1[2], result)
        __crt_stdio_input::string_input_adapter<char>::unget(&arg1[2], sx.d(ebx.b))
        result.b = 0
else
    result.b = 1

return result
