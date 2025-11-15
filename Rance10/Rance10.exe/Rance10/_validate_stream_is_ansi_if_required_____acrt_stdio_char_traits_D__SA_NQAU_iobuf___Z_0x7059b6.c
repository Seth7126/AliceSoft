// 函数: ?validate_stream_is_ansi_if_required@?$__acrt_stdio_char_traits@D@@SA_NQAU_iobuf@@@Z
// 地址: 0x7059b6
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

uint32_t result

if (((*(arg1 + 0xc) u>> 0xc).b & 1) != 0)
    result.b = 1
else
    int32_t eax_1 = __fileno(arg1)
    void* esi_1 = &data_7e1668
    
    if (eax_1 == 0xffffffff || eax_1 == 0xfffffffe)
        result = &data_7e1668
    else
        result = (eax_1 & 0x3f) * 0x30 + (&data_7fc718)[eax_1 s>> 6]
    
    if (*(result + 0x29) == 0 && eax_1 != 0xffffffff && eax_1 != 0xfffffffe)
        esi_1 = (eax_1 & 0x3f) * 0x30 + (&data_7fc718)[eax_1 s>> 6]
    
    if (*(result + 0x29) == 0 && (*(esi_1 + 0x2d) & 1) == 0)
        result.b = 1
    else
        *__errno() = 0x16
        __invalid_parameter_noinfo()
        result.b = 0

return result
