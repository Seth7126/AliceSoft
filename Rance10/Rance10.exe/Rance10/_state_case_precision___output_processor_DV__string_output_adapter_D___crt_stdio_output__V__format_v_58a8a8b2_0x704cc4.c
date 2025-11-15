// 函数: ?state_case_precision@?$output_processor@DV?$string_output_adapter@D@__crt_stdio_output@@V?$format_validation_base@DV?$string_output_adapter@D@__crt_stdio_output@@@2@@__crt_stdio_output@@AAE_NXZ
// 地址: 0x704cc4
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (*(arg1 + 0x31) != 0x2a)
    return __crt_stdio_output::output_processor<char,class __crt_stdio_output::console_output_adapter<char>,class __crt_stdio_output::standard_base<char,class __crt_stdio_output::console_output_adapter<char> > >::parse_int_from_format_string(
        arg1, &arg1[0xa])

arg1[5] += 4
int32_t result = *(arg1[5] - 4)
arg1[0xa] = result

if (result s< 0)
    arg1[0xa] = 0xffffffff

result.b = 1
return result
