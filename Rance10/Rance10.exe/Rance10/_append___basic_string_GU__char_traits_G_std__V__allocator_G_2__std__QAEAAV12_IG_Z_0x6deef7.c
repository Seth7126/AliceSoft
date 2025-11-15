// 函数: ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QAEAAV12@IG@Z
// 地址: 0x6deef7
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* ecx = arg1[4]

if (not.d(ecx) u<= arg2)
    sub_631dd0()
    noreturn

void* ebx = ecx + arg2

if (arg2 != 0 && std::basic_string<uint16_t,struct std::char_traits<uint16_t>,class std::allocator<uint16_t> >::_Grow(
        arg1, ebx, 0) != 0)
    std::basic_string<uint16_t,struct std::char_traits<uint16_t>,class std::allocator<uint16_t> >::_Chassign(
        arg1, arg1[4], arg2, arg3)
    bool cond:0_1 = arg1[5] u< 8
    arg1[4] = ebx
    int32_t* eax_3
    
    if (cond:0_1)
        eax_3 = arg1
    else
        eax_3 = *arg1
    
    *(eax_3 + (ebx << 1)) = 0

return arg1
