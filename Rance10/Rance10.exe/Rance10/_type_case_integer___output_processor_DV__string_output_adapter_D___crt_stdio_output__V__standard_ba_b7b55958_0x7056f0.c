// 函数: ?type_case_integer@?$output_processor@DV?$string_output_adapter@D@__crt_stdio_output@@V?$standard_base@DV?$string_output_adapter@D@__crt_stdio_output@@@2@@__crt_stdio_output@@AAE_NI_N@Z
// 地址: 0x7056f0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t eax = __crt_stdio_output::to_integer_size(*(arg1 + 0x2c))
int32_t eax_6

if (eax == 1)
    int32_t eax_10 = *(arg1 + 0x20)
    *(arg1 + 0x14) += 4
    void* eax_12 = *(arg1 + 0x14)
    
    if (((eax_10 u>> 4).b & 1) == 0)
        eax_6 = zx.d(*(eax_12 - 4))
    else
        eax_6 = sx.d(*(eax_12 - 4))
    
    goto label_70579e

if (eax == 2)
    int32_t eax_7 = *(arg1 + 0x20)
    *(arg1 + 0x14) += 4
    void* eax_9 = *(arg1 + 0x14)
    
    if (((eax_7 u>> 4).b & 1) == 0)
        eax_6 = zx.d(*(eax_9 - 4))
    else
        eax_6 = sx.d(*(eax_9 - 4))
    
    goto label_70579e

uint32_t result
uint32_t ecx_6
uint32_t edx_1

if (eax == 4)
    int32_t eax_3 = *(arg1 + 0x20)
    *(arg1 + 0x14) += 4
    void* eax_5 = *(arg1 + 0x14)
    
    if (((eax_3 u>> 4).b & 1) == 0)
        ecx_6 = *(eax_5 - 4)
        edx_1 = 0
        goto label_7057a1
    
    eax_6 = *(eax_5 - 4)
label_70579e:
    uint32_t eax_13
    edx_1:eax_13 = sx.q(eax_6)
    ecx_6 = eax_13
label_7057a1:
    int32_t edi
    int32_t var_10_1 = edi
    int32_t edi_1 = *(arg1 + 0x20)
    
    if (((edi_1 u>> 4).b & 1) != 0 && edx_1 s<= 0 && (edx_1 s< 0 || ecx_6 u< 0))
        uint32_t temp6_1 = ecx_6
        ecx_6 = neg.d(ecx_6)
        edx_1 = neg.d(adc.d(edx_1, 0, temp6_1 != 0))
        *(arg1 + 0x20) = edi_1 | 0x40
    
    if (*(arg1 + 0x28) s>= 0)
        *(arg1 + 0x20) &= 0xfffffff7
        
        if (*(arg1 + 0x28) s> 0x200)
            *(arg1 + 0x28) = 0x200
    else
        *(arg1 + 0x28) = 1
    
    if ((ecx_6 | edx_1) == 0)
        *(arg1 + 0x20) &= 0xffffffdf
    
    if (eax != 8)
        __crt_stdio_output::output_processor<uint32_t,char,class __crt_stdio_output::console_output_adapter<char>,class __crt_stdio_output::format_validation_base<char,class __crt_stdio_output::console_output_adapter<char> > >::type_case_integer_parse_into_buffer<uint32_t>(
            arg1, ecx_6, arg2, arg3)
    else
        __crt_stdio_output::output_processor<uint64_t,char,class __crt_stdio_output::console_output_adapter<char>,class __crt_stdio_output::standard_base<char,class __crt_stdio_output::console_output_adapter<char> > >::type_case_integer_parse_into_buffer<uint64_t>(
            arg1, ecx_6, edx_1, arg2, arg3)
    
    if (((*(arg1 + 0x20) u>> 7).b & 1) != 0 && (*(arg1 + 0x38) == 0 || **(arg1 + 0x34) != 0x30))
        *(arg1 + 0x34) -= 1
        **(arg1 + 0x34) = 0x30
        *(arg1 + 0x38) += 1
    
    result.b = 1
else
    if (eax == 8)
        *(arg1 + 0x14) += 8
        void* eax_2 = *(arg1 + 0x14)
        ecx_6 = *(eax_2 - 8)
        edx_1 = *(eax_2 - 4)
        goto label_7057a1
    
    *__errno() = 0x16
    __invalid_parameter_noinfo()
    result.b = 0
return result
