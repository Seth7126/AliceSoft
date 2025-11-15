// 函数: ?process_integer_specifier@?$input_processor@DV?$string_input_adapter@D@__crt_stdio_input@@@__crt_stdio_input@@AAE_NI_N@Z
// 地址: 0x70acbd
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_8 = arg1
void* var_c = arg1
__crt_stdio_input::input_processor<char,class __crt_stdio_input::string_input_adapter<char> >::process_whitespace(
    arg1)
int32_t var_14 = arg3
var_8:3.b = 0
int32_t var_18 = arg2
void var_38
__crt_strtox::make_input_adapter_character_source<class __crt_stdio_input::console_input_adapter<char> >(
    &var_38, arg1 + 8, *(arg1 + 0x30), *(arg1 + 0x34), &var_8:3)
char eax_1
int32_t edx
eax_1, edx = __crt_strtox::parse_integer<uint64_t,class __crt_strtox::input_adapter_character_source<class __crt_stdio_input::stream_input_adapter<char> > >(
    *(arg1 + 0x68))

if (var_8:3.b == 0)
    return 0

if (*(arg1 + 0x2e) == 0)
    return __crt_stdio_input::input_processor<char,class __crt_stdio_input::string_input_adapter<char> >::write_integer(
        arg1, eax_1, edx, 1)

return 1
