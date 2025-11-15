// 函数: ??$type_case_integer_parse_into_buffer@I@?$output_processor@DV?$console_output_adapter@D@__crt_stdio_output@@V?$format_validation_base@DV?$console_output_adapter@D@__crt_stdio_output@@@2@@__crt_stdio_output@@AAEXII_N@Z
// 地址: 0x7042d2
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t edi
int32_t var_10 = edi
void* edi_1 = *(arg1 + 0x444)

if (edi_1 == 0)
    edi_1 = arg1 + 0x40

uint32_t ebx = arg2
void* edi_2 = edi_1 + __crt_stdio_output::formatting_buffer::count<char>(arg1 + 0x40) - 1
*(arg1 + 0x34) = edi_2

while (true)
    int32_t ecx_1 = *(arg1 + 0x28)
    
    if (ecx_1 s<= 0 && ebx == 0)
        int32_t eax_5 = *(arg1 + 0x34)
        *(arg1 + 0x38) = edi_2 - eax_5
        *(arg1 + 0x34) = eax_5 + 1
        return eax_5 + 1
    
    int32_t edx_1 = 0
    uint8_t edx_2 = (modu.dp.d(edx_1:ebx, arg3)).b + 0x30
    *(arg1 + 0x28) = ecx_1 - 1
    ebx = divu.dp.d(edx_1:ebx, arg3)
    
    if (edx_2 s> 0x39)
        uint32_t eax_3
        eax_3.b = arg4 == 0
        eax_3.b -= 1
        eax_3.b &= 0xe0
        eax_3.b += 0x61
        eax_3.b -= 0x3a
        edx_2 += eax_3.b
    
    **(arg1 + 0x34) = edx_2
    *(arg1 + 0x34) -= 1
