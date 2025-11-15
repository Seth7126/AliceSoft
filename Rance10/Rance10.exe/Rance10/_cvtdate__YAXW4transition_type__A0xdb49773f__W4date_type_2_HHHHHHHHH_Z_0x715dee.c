// 函数: ?cvtdate@@YAXW4transition_type@?A0xdb49773f@@W4date_type@2@HHHHHHHHH@Z
// 地址: 0x715dee
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = arg3
int32_t var_c = arg3
var_c = 0
int32_t edi
int32_t var_14 = edi
int32_t esi_2

if (arg5 != 1)
    int32_t esi_3
    
    if (__crt_time_is_leap_year<int32_t>(arg6) == 0)
        esi_3 = *((arg7 << 2) + &data_75671c:8)
    else
        esi_3 = *((arg7 << 2) + &data_756758)
    
    esi_2 = esi_3 + arg10
else
    char eax = __crt_time_is_leap_year<int32_t>(arg6)
    int32_t ebx_2 = arg7 << 2
    var_8:3.b = eax
    int32_t esi
    
    if (eax == 0)
        esi = *(ebx_2 + &data_75671c:8)
    else
        esi = *(ebx_2 + &data_756758)
    
    int32_t temp1_1 = mods.dp.d(
        sx.q(__crt_time_elapsed_leap_years<long>(arg6) + esi + 1 + arg6 * 0x16d - 0x63ca), 7)
    int32_t eax_6 = arg8 * 7 - temp1_1
    
    if (temp1_1 s<= arg9)
        eax_6 -= 7
    
    esi_2 = esi + 1 + eax_6 + arg9
    int32_t eax_8
    
    if (var_8:3.b == 0)
        eax_8 = *(ebx_2 + &data_756728)
    else
        eax_8 = *(ebx_2 + &data_75675c)
    
    if (arg8 == 5 && esi_2 s> eax_8)
        esi_2 -= 7

int32_t result = ((arg11 * 0x3c + arg12) * 0x3c + arg13) * 0x3e8 + arg14

if (arg4 != 0)
    data_7e1734 = result
    data_7e1730 = esi_2
    
    if (__get_stream_buffer_pointers(&var_c) != 0)
        int32_t var_28
        __builtin_memset(&var_28, 0, 0x14)
        __invoke_watson()
        noreturn
    
    result = var_c * 0x3e8
    int32_t ecx_6 = data_7e1734
    int32_t ecx_7 = ecx_6 + result
    data_7e1734 = ecx_7
    
    if (ecx_6 + result s>= 0)
        result = 0x5265c00
        
        if (ecx_7 s>= 0x5265c00)
            data_7e1730 += 1
            data_7e1734 = ecx_7 - 0x5265c00
    else
        data_7e1730 -= 1
        data_7e1734 = ecx_7 + 0x5265c00
    
    data_7e172c = arg6
else
    data_7e1724 = esi_2
    data_7e1728 = result
    data_7e1720 = arg6

return result
