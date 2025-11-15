// 函数: ?state_case_type@?$output_processor@DV?$console_output_adapter@D@__crt_stdio_output@@V?$standard_base@DV?$console_output_adapter@D@__crt_stdio_output@@@2@@__crt_stdio_output@@AAE_NXZ
// 地址: 0x704fbe
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* var_8 = arg1
char ebx = 1
int32_t result = sx.d(*(arg1 + 0x31))
int32_t var_18_1
char var_14_1

if (result s<= 0x64)
    if (result == 0x64)
    label_70506f:
        arg1[8] |= 0x10
    label_705073:
        var_14_1 = 0
        var_18_1 = 0xa
    label_705078:
        result = __crt_stdio_output::output_processor<char,class __crt_stdio_output::string_output_adapter<char>,class __crt_stdio_output::standard_base<char,class __crt_stdio_output::string_output_adapter<char> > >::type_case_integer(
            arg1, var_18_1, var_14_1)
        goto label_70500b
    
    if (result s> 0x58)
        if (result == 0x5a)
            result = __crt_stdio_output::output_processor<wchar_t,class __crt_stdio_output::stream_output_adapter<wchar_t>,class __crt_stdio_output::standard_base<wchar_t,class __crt_stdio_output::stream_output_adapter<wchar_t> > >::type_case_Z(
                arg1)
            goto label_70500b
        
        if (result == 0x61)
            goto label_705081
        
        if (result == 0x63)
        label_70502f:
            int32_t var_14_2 = 0
            result = __crt_stdio_output::output_processor<char,class __crt_stdio_output::console_output_adapter<char>,class __crt_stdio_output::standard_base<char,class __crt_stdio_output::console_output_adapter<char> > >::type_case_c_tchar(
                arg1)
            goto label_70500b
        
        result.b = 0
    else
        if (result == 0x58)
            var_14_1 = 1
            var_18_1 = 0x10
            goto label_705078
        
        if (result == 0x41)
            goto label_705081
        
        if (result == 0x43)
            goto label_70502f
        
        if (result s<= 0x44)
            result.b = 0
        else
            if (result s<= 0x47)
                goto label_705081
            
            if (result == 0x53)
                goto label_705006
            
            result.b = 0
else if (result s> 0x70)
    if (result == 0x73)
    label_705006:
        result = __crt_stdio_output::output_processor<char,class __crt_stdio_output::string_output_adapter<char>,class __crt_stdio_output::standard_base<char,class __crt_stdio_output::string_output_adapter<char> > >::type_case_s(
            arg1)
        goto label_70500b
    
    if (result == 0x75)
        goto label_705073
    
    if (result == 0x78)
        var_14_1 = 0
        var_18_1 = 0x10
        goto label_705078
    
    result.b = 0
else if (result == 0x70)
    result = __crt_stdio_output::output_processor<char,class __crt_stdio_output::console_output_adapter<char>,class __crt_stdio_output::standard_base<char,class __crt_stdio_output::console_output_adapter<char> > >::type_case_p(
        arg1)
label_70500b:
    
    if (result.b == 0)
        result.b = 0
    else if (arg1[0xc].b == 0)
        int32_t edx_1 = arg1[8]
        int32_t edi
        int32_t var_14_3 = edi
        var_8.w = 0
        int32_t* edi_1 = nullptr
        var_8:2.b = 0
        
        if ((1 & (edx_1 u>> 4).b) != 0)
            if ((1 & (edx_1 u>> 6).b) != 0)
                var_8.b = 0x2d
                edi_1 = 1
            else if ((1 & edx_1.b) != 0)
                var_8.b = 0x2b
                edi_1 = 1
            else if ((1 & (edx_1 u>> 1).b) != 0)
                var_8.b = 0x20
                edi_1 = 1
        
        char ecx_1 = *(arg1 + 0x31)
        
        if (ecx_1 == 0x78)
            if ((1 & (edx_1 u>> 5).b) == 0)
                ebx = 0
        else if (ecx_1 != 0x58 || (1 & (edx_1 u>> 5).b) == 0)
            ebx = 0
        
        uint8_t eax_7
        
        if (ecx_1 == 0x61 || ecx_1 == 0x41)
            eax_7 = 1
        else
            eax_7 = 0
        
        if (ebx != 0 || eax_7 != 0)
            *(&var_8 + edi_1) = 0x30
            
            if (ecx_1 == 0x58 || ecx_1 == 0x41)
                eax_7 = 1
            else
                eax_7 = 0
            
            *(&var_8:1 + edi_1) = (((eax_7 == 0) - 1) & 0xe0) + 0x78
            edi_1 += 2
        
        void* ebx_3 = arg1[9] - arg1[0xe] - edi_1
        
        if ((edx_1.b & 0xc) == 0)
            __crt_stdio_output::write_multiple_characters<class __crt_stdio_output::string_output_adapter<char>,char>(
                &arg1[0x112], 0x20, ebx_3, &arg1[6])
        
        __crt_stdio_output::stream_output_adapter<char>::write_string(&arg1[0x112], &var_8, edi_1, 
            &arg1[6], arg1[3])
        int32_t ecx_10 = arg1[8]
        
        if (((ecx_10 u>> 3).b & 1) != 0 && ((ecx_10 u>> 2).b & 1) == 0)
            __crt_stdio_output::write_multiple_characters<class __crt_stdio_output::string_output_adapter<char>,char>(
                &arg1[0x112], 0x30, ebx_3, &arg1[6])
        
        int32_t var_18_5 = 0
        __crt_stdio_output::output_processor<char,class __crt_stdio_output::console_output_adapter<char>,class __crt_stdio_output::format_validation_base<char,class __crt_stdio_output::console_output_adapter<char> > >::write_stored_string_tchar(
            arg1)
        
        if (arg1[6] s>= 0 && ((arg1[8] u>> 2).b & 1) != 0)
            __crt_stdio_output::write_multiple_characters<class __crt_stdio_output::string_output_adapter<char>,char>(
                &arg1[0x112], 0x20, ebx_3, &arg1[6])
        
        result.b = 1
    else
        result.b = 1
else
    if (result s<= 0x67)
    label_705081:
        result = __crt_stdio_output::output_processor<char,class __crt_stdio_output::stream_output_adapter<char>,class __crt_stdio_output::format_validation_base<char,class __crt_stdio_output::stream_output_adapter<char> > >::type_case_a(
            arg1)
        goto label_70500b
    
    if (result == 0x69)
        goto label_70506f
    
    if (result == 0x6e)
        result = __crt_stdio_output::output_processor<char,class __crt_stdio_output::console_output_adapter<char>,class __crt_stdio_output::standard_base<char,class __crt_stdio_output::console_output_adapter<char> > >::type_case_n(
            arg1)
        goto label_70500b
    
    if (result == 0x6f)
        result = __crt_stdio_output::output_processor<char,class __crt_stdio_output::stream_output_adapter<char>,class __crt_stdio_output::format_validation_base<char,class __crt_stdio_output::stream_output_adapter<char> > >::type_case_o(
            arg1)
        goto label_70500b
    
    result.b = 0
return result
