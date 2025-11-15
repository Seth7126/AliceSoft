// 函数: ?type_case_Z@?$output_processor@_WV?$stream_output_adapter@_W@__crt_stdio_output@@V?$standard_base@_WV?$stream_output_adapter@_W@__crt_stdio_output@@@2@@__crt_stdio_output@@AAE_NXZ
// 地址: 0x7054a3
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t edi
int32_t var_c = edi
arg1[5] += 4
int16_t* edi_1 = *(arg1[5] - 4)
int32_t ebx_1

if (edi_1 != 0)
    ebx_1 = *(edi_1 + 4)

uint32_t result

if (edi_1 == 0 || ebx_1 == 0)
    arg1[0xd] = "(null)"
    arg1[0xe] = 6
    arg1[0xf].b = 0
else
    int32_t var_10_1 = arg1[0xb]
    uint32_t var_14_1 = zx.d(*(arg1 + 0x31))
    char eax_1 = __crt_stdio_output::is_wide_character_specifier<char>((*arg1).b, arg1[1])
    arg1[0xd] = ebx_1
    result = zx.d(*edi_1)
    
    if (eax_1 == 0)
        arg1[0xe] = result
        arg1[0xf].b = 0
    else
        arg1[0xe] = result u>> 1
        arg1[0xf].b = 1

result.b = 1
return result
