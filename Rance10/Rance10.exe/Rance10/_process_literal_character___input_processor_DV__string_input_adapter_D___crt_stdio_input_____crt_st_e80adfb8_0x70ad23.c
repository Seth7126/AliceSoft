// 函数: ?process_literal_character@?$input_processor@DV?$string_input_adapter@D@__crt_stdio_input@@@__crt_stdio_input@@AAE_NXZ
// 地址: 0x70ad23
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t edi
int32_t var_8 = edi
int32_t result = __crt_stdio_input::string_input_adapter<char>::get(&arg1[2])

if (result != 0xffffffff)
    if (result == zx.d(arg1[0xb].b))
        return __crt_stdio_input::input_processor<char,class __crt_stdio_input::string_input_adapter<char> >::process_literal_character_tchar(
            arg1, result.b)
    
    __crt_stdio_input::string_input_adapter<char>::unget(&arg1[2], result)

result.b = 0
return result
