// 函数: ?do_tolower@?$ctype@_W@std@@MBEPB_WPA_WPB_W@Z
// 地址: 0x6e3025
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = arg1
int16_t* result = arg3
int32_t ebx = 0
int32_t var_14 = arg2
int32_t edi_2 = not.d(sbb.d(arg2, arg2, arg4 u< result)) & (arg4 - result + 1) u>> 1

if (edi_2 != 0)
    int32_t eax_4 = arg1 + 8
    int32_t var_8_1 = eax_4
    
    do
        int32_t var_18_1 = eax_4
        uint32_t eax_5 = zx.d(*result)
        int16_t eax_6
        int32_t edx
        eax_6, edx = __Towupper(eax_5, edx, arg1, eax_5)
        *result = eax_6
        result = &result[1]
        eax_4 = var_8_1
        ebx += 1
        arg1 = var_18_1
    while (ebx != edi_2)

return result
