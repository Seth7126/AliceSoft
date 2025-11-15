// 函数: ?process_state@?$input_processor@_WV?$string_input_adapter@_W@__crt_stdio_input@@@__crt_stdio_input@@AAE_NXZ
// 地址: 0x70adaf
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t eax_1 = arg1[0xa] - 1

if (eax_1 == 1)
    return __crt_stdio_input::input_processor<char,class __crt_stdio_input::string_input_adapter<char> >::process_whitespace(
        arg1) __tailcall

if (eax_1 == 2)
    return __crt_stdio_input::input_processor<char,class __crt_stdio_input::string_input_adapter<char> >::process_literal_character(
        arg1) __tailcall

if (eax_1 != 3)
    return 0

char result = sub_70ac19(arg1)

if (result == 0)
    return result

arg1[0x1d] += 1
return result
