// 函数: ?state_case_size@?$output_processor@DV?$stream_output_adapter@D@__crt_stdio_output@@V?$positional_parameter_base@DV?$stream_output_adapter@D@__crt_stdio_output@@@2@@__crt_stdio_output@@AAE_NXZ
// 地址: 0x704cec
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

char eax = *(arg1 + 0x31)
int32_t eax_3

if (eax != 0x46)
    if (eax != 0x4e)
        if (arg1[0xb] != 0)
            goto label_704d29
        
        eax_3 = sx.d(eax)
        
        if (eax_3 == 0x6c)
            eax_3 = arg1[4]
            
            if (*eax_3 != 0x6c)
                arg1[0xb] = 3
            else
                arg1[0xb] = 4
                arg1[4] = eax_3 + 1
        else if (eax_3 == 0x74)
            arg1[0xb] = 7
        else if (eax_3 == 0x77)
            arg1[0xb] = 0xc
        else if (eax_3 == 0x7a)
            arg1[0xb] = 6
        
        if (eax_3 == 0x6a)
            arg1[0xb] = 5
        else if (eax_3 == 0x49)
            char* edx_2 = arg1[4]
            eax_3.b = *edx_2
            
            if (eax_3.b == 0x33 && edx_2[1] == 0x32)
                arg1[0xb] = 0xa
                arg1[4] = &edx_2[2]
            else if (eax_3.b == 0x36 && edx_2[1] == 0x34)
                arg1[0xb] = 0xb
                arg1[4] = &edx_2[2]
            else if (eax_3.b == 0x64 || eax_3.b == 0x69 || eax_3.b == 0x6f || eax_3.b == 0x75
                    || eax_3.b == 0x78 || eax_3.b == 0x58)
                arg1[0xb] = 9
        else if (eax_3 == 0x4c)
            arg1[0xb] = 8
        else if (eax_3 == 0x54)
            arg1[0xb] = 0xd
        else if (eax_3 == 0x68)
            eax_3 = arg1[4]
            
            if (*eax_3 != 0x68)
                arg1[0xb] = 2
            else
                arg1[0xb] = 1
                arg1[4] = eax_3 + 1
    else if ((*arg1 & 8) == 0)
        arg1[7] = 8
    label_704d29:
        *__errno() = 0x16
        __invalid_parameter_noinfo()
        int32_t eax_8
        eax_8.b = 0
        return eax_8
else if ((*arg1 & 8) == 0)
    arg1[7] = 7
    return __crt_stdio_output::output_processor<char,class __crt_stdio_output::console_output_adapter<char>,class __crt_stdio_output::standard_base<char,class __crt_stdio_output::console_output_adapter<char> > >::state_case_type(
        arg1) __tailcall

eax_3.b = 1
return eax_3
