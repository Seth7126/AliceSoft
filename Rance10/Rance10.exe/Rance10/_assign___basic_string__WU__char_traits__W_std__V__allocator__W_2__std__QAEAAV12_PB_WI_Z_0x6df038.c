// 函数: ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QAEAAV12@PB_WI@Z
// 地址: 0x6df038
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class std::allocator<wchar_t> >::_Inside(
        arg1, arg2) != 0)
    int32_t* eax_1
    
    if (arg1[5] u< 8)
        eax_1 = arg1
    else
        eax_1 = *arg1
    
    return std::basic_string<uint16_t,struct std::char_traits<uint16_t>,class std::allocator<uint16_t> >::assign(
        arg1, arg1, (arg2 - eax_1) s>> 1, arg3)

if (std::basic_string<uint16_t,struct std::char_traits<uint16_t>,class std::allocator<uint16_t> >::_Grow(
        arg1, arg3, 0) != 0)
    char* eax_4
    
    if (arg1[5] u< 8)
        eax_4 = arg1
    else
        eax_4 = *arg1
    
    sub_6df102(eax_4, arg2, arg3)
    arg1[4] = arg3
    int32_t* eax_5
    
    if (arg1[5] u< 8)
        eax_5 = arg1
    else
        eax_5 = *arg1
    
    *(eax_5 + (arg3 << 1)) = 0

return arg1
