// 函数: ?type_case_s@?$output_processor@DV?$string_output_adapter@D@__crt_stdio_output@@V?$standard_base@DV?$string_output_adapter@D@__crt_stdio_output@@@2@@__crt_stdio_output@@AAE_NXZ
// 地址: 0x7058e5
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t edi
int32_t var_c = edi
arg1[5] += 4
uint32_t edi_1 = arg1[0xa]
int32_t ebx = *(arg1[5] - 4)
arg1[0xd] = ebx

if (edi_1 == 0xffffffff)
    edi_1 = 0x7fffffff

int32_t var_10 = arg1[0xb]
uint32_t var_14 = zx.d(*(arg1 + 0x31))
int32_t result
void invalid

if (__crt_stdio_output::is_wide_character_specifier<char>((*arg1).b, arg1[1]) == 0)
    if (ebx == 0)
        arg1[0xd] = "(null)"
    
    result = _strnlen(invalid, arg1[0xd], edi_1)
else
    if (ebx == 0)
        arg1[0xd] = u"(null)"
    
    arg1[0xf].b = 1
    result = _wcsnlen(invalid, arg1[0xd], edi_1)
arg1[0xe] = result
result.b = 1
return result
