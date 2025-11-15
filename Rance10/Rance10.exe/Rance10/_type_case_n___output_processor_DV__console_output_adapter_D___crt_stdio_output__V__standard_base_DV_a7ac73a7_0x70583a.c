// 函数: ?type_case_n@?$output_processor@DV?$console_output_adapter@D@__crt_stdio_output@@V?$standard_base@DV?$console_output_adapter@D@__crt_stdio_output@@@2@@__crt_stdio_output@@AAE_NXZ
// 地址: 0x70583a
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t edi
int32_t var_8 = edi
*(arg1 + 0x14) += 4
int32_t* edi_1 = *(*(arg1 + 0x14) - 4)
int32_t result

if (__get_printf_count_output() != 0)
    int32_t eax_3 = __crt_stdio_output::to_integer_size(*(arg1 + 0x2c))
    
    if (eax_3 == 1)
        result.b = *(arg1 + 0x18)
        *edi_1 = result.b
        *(arg1 + 0x30) = 1
        result.b = 1
    else if (eax_3 == 2)
        result.w = *(arg1 + 0x18)
        *edi_1 = result.w
        *(arg1 + 0x30) = 1
        result.b = 1
    else if (eax_3 == 4)
        *edi_1 = *(arg1 + 0x18)
        *(arg1 + 0x30) = 1
        result.b = 1
    else
        if (eax_3 != 8)
            goto label_705858
        
        int32_t edx_1
        edx_1:result = sx.q(*(arg1 + 0x18))
        *edi_1 = result
        edi_1[1] = edx_1
        *(arg1 + 0x30) = 1
        result.b = 1
else
label_705858:
    *__errno() = 0x16
    __invalid_parameter_noinfo()
    result.b = 0

return result
