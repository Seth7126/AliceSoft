// 函数: ?write_integer@?$input_processor@DV?$string_input_adapter@D@__crt_stdio_input@@@__crt_stdio_input@@AAE_N_K_N@Z
// 地址: 0x70b53a
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

*(arg1 + 0x6c) += 4
int32_t* esi = *(*(arg1 + 0x6c) - 4)
int32_t result

if (esi != 0)
    if (arg4 != 0)
        *(arg1 + 0x70) += 1
    
    int32_t eax_2 = __crt_stdio_input::format_string_parser<char>::length(arg1 + 0x18)
    
    if (eax_2 == 1)
        result.b = arg2
        *esi = result.b
        result.b = 1
    else if (eax_2 == 2)
        result.w = arg2.w
        *esi = result.w
        result.b = 1
    else if (eax_2 == 4)
        *esi = arg2.d
        result.b = 1
    else if (eax_2 != 8)
        result.b = 0
    else
        *esi = arg2.d
        esi[1] = arg3
        result.b = 1
else
    *__errno() = 0x16
    __invalid_parameter_noinfo()
    result.b = 0

return result
