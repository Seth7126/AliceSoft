// 函数: ?process_floating_point_specifier@?$input_processor@DV?$string_input_adapter@D@__crt_stdio_input@@@__crt_stdio_input@@AAE_NXZ
// 地址: 0x70ac8d
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

__crt_stdio_input::input_processor<char,class __crt_stdio_input::string_input_adapter<char> >::process_whitespace(
    arg1)
int32_t result = __crt_stdio_input::format_string_parser<char>::length(arg1 + 0x18)

if (result == 4)
    return __crt_stdio_input::input_processor<float,char,class __crt_stdio_input::string_input_adapter<char> >::process_floating_point_specifier_t<float>(
        arg1) __tailcall

if (result == 8)
    return __crt_stdio_input::input_processor<double,char,class __crt_stdio_input::string_input_adapter<char> >::process_floating_point_specifier_t<double>(
        arg1) __tailcall

result.b = 0
return result
