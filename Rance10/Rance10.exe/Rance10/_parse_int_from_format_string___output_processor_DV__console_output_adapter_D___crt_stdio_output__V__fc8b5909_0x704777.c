// 函数: ?parse_int_from_format_string@?$output_processor@DV?$console_output_adapter@D@__crt_stdio_output@@V?$standard_base@DV?$console_output_adapter@D@__crt_stdio_output@@@2@@__crt_stdio_output@@AAE_NQAH@Z
// 地址: 0x704777
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* result_1 = arg1
int32_t edi
int32_t var_14 = edi
int32_t* edi_1 = arg1[3]
int32_t ebx = *edi_1
*edi_1 = 0
int32_t eax = arg1[4]
result_1 = nullptr
int32_t edx
*arg2 = _strtol(eax - 1, edx, &result_1, eax - 1, &result_1, 0xa)
int32_t* result

if (*arg1[3] != 0x22)
    result = result_1

if (*arg1[3] == 0x22 || result u< arg1[4])
    result.b = 0
else
    arg1[4] = result
    result.b = 1

if (*edi_1 == 0 && ebx != 0)
    *edi_1 = ebx

return result
