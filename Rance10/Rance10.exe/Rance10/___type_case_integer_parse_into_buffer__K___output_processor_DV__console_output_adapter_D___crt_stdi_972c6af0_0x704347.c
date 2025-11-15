// 函数: ??$type_case_integer_parse_into_buffer@_K@?$output_processor@DV?$console_output_adapter@D@__crt_stdio_output@@V?$standard_base@DV?$console_output_adapter@D@__crt_stdio_output@@@2@@__crt_stdio_output@@AAEX_KI_N@Z
// 地址: 0x704347
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_8 = arg1
void* var_c = arg1
int32_t edi
int32_t var_18 = edi
void* edi_1 = *(arg1 + 0x444)

if (edi_1 == 0)
    edi_1 = arg1 + 0x40

uint32_t edx = arg3
uint32_t ebx = arg2
void* edi_2 = edi_1 + __crt_stdio_output::formatting_buffer::count<char>(arg1 + 0x40) - 1
*(arg1 + 0x34) = edi_2

while (true)
    int32_t ecx_1 = *(arg1 + 0x28)
    
    if (ecx_1 s<= 0 && (ebx | edx) == 0)
        int32_t eax_7 = *(arg1 + 0x34)
        *(arg1 + 0x38) = edi_2 - eax_7
        *(arg1 + 0x34) = eax_7 + 1
        return eax_7 + 1
    
    *(arg1 + 0x28) = ecx_1 - 1
    uint32_t eax_5
    char ecx_2
    eax_5, ecx_2, edx = __aulldvrm(ebx, edx, arg4, 0)
    ecx_2 += 0x30
    uint32_t var_8_1 = ebx
    ebx = eax_5
    
    if (ecx_2 s> 0x39)
        eax_5.b = arg5 == 0
        eax_5.b -= 1
        eax_5.b &= 0xe0
        eax_5.b += 0x61
        eax_5.b -= 0x3a
        ecx_2 += eax_5.b
    
    **(arg1 + 0x34) = ecx_2
    *(arg1 + 0x34) -= 1
