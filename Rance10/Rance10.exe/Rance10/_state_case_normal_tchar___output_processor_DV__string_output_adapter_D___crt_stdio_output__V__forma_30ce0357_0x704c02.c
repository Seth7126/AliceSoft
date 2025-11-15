// 函数: ?state_case_normal_tchar@?$output_processor@DV?$string_output_adapter@D@__crt_stdio_output@@V?$format_validation_base@DV?$string_output_adapter@D@__crt_stdio_output@@@2@@__crt_stdio_output@@AAE_ND@Z
// 地址: 0x704c02
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* esi = arg1
int32_t edi
int32_t var_8 = edi
int32_t* eax = *(esi + 8)
arg1.b = *(esi + 0x31)
*(esi + 0x3c) = 0
bool cond:0_1

if ((*(**eax + (zx.d(arg1.b) << 1)) & 0x8000) != 0)
    __crt_stdio_output::stream_output_adapter<char>::write_character(esi + 0x448, arg1.b, 
        esi + 0x18)
    char* ecx_1 = *(esi + 0x10)
    *(esi + 0x31) = *ecx_1
    cond:0_1 = *(esi + 0x31) != 0
    *(esi + 0x10) = &ecx_1[1]

void* result

if ((*(**eax + (zx.d(arg1.b) << 1)) & 0x8000) == 0 || cond:0_1)
    result.b = 1
else
    *__errno() = 0x16
    __invalid_parameter_noinfo()
    result.b = 0

return result
