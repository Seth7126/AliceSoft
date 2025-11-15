// 函数: ?process@?$input_processor@DV?$string_input_adapter@D@__crt_stdio_input@@@__crt_stdio_input@@QAEHXZ
// 地址: 0x70ab7a
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (sub_70b4a7(&arg1[2]) == 0)
    return 0xffffffff

int32_t edi
int32_t var_c_1 = edi
int32_t result

if (__crt_stdio_input::format_string_parser<char>::validate(&arg1[6]) != 0)
    char i
    
    do
        if (__crt_stdio_input::format_string_parser<char>::advance(&arg1[6]) == 0)
            break
        
        i = __crt_stdio_input::input_processor<wchar_t,class __crt_stdio_input::string_input_adapter<wchar_t> >::process_state(
            arg1)
    while (i != 0)
    int32_t result_1 = arg1[0x1c]
    
    if (arg1[0x1d] == 0)
        int32_t eax_3 = __crt_stdio_input::string_input_adapter<char>::get(&arg1[2])
        
        if (eax_3 == 0xffffffff)
            result_1 |= eax_3
        
        __crt_stdio_input::string_input_adapter<char>::unget(&arg1[2], eax_3)
    
    if ((*arg1 & 1) != 0)
        int32_t esi_1 = arg1[9]
        
        if (esi_1 != 0)
            *__errno() = esi_1
            __invalid_parameter_noinfo()
    
    result = result_1
else
    result = 0xffffffff

return result
