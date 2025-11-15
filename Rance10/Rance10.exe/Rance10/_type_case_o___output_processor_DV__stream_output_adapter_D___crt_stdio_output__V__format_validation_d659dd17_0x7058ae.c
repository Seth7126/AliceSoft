// 函数: ?type_case_o@?$output_processor@DV?$stream_output_adapter@D@__crt_stdio_output@@V?$format_validation_base@DV?$stream_output_adapter@D@__crt_stdio_output@@@2@@__crt_stdio_output@@AAE_NXZ
// 地址: 0x7058ae
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t edx_1 = *(arg1 + 0x20)

if (((edx_1 u>> 5).b & 1) != 0)
    *(arg1 + 0x20) = edx_1 | 0x80

return __crt_stdio_output::output_processor<char,class __crt_stdio_output::string_output_adapter<char>,class __crt_stdio_output::standard_base<char,class __crt_stdio_output::string_output_adapter<char> > >::type_case_integer(
    arg1, 8, 0)
