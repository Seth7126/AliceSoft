// 函数: ?validate@?$stream_output_adapter@D@__crt_stdio_output@@QBE_NXZ
// 地址: 0x705958
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* eax_2 = *arg1

if (eax_2 != 0)
    return __acrt_stdio_char_traits<char>::validate_stream_is_ansi_if_required(eax_2)

*__errno() = 0x16
__invalid_parameter_noinfo()
int32_t result
result.b = 0
return result
