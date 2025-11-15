// 函数: sub_6e338e
// 地址: 0x6e338e
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* var_8 = arg1
void* ecx = arg1[4]

if (ecx u< arg2)
    sub_6321b0()
    noreturn

if (not.d(ecx) u<= arg3)
    sub_631dd0()
    noreturn

void* eax_2 = ecx + arg3

if (arg3 != 0 && std::basic_string<uint16_t,struct std::char_traits<uint16_t>,class std::allocator<uint16_t> >::_Grow(
        arg1, eax_2, 0) != 0)
    int32_t* edx_1
    
    if (arg1[5] u< 8)
        edx_1 = arg1
    else
        edx_1 = *arg1
    
    int32_t* ecx_2
    
    if (arg1[5] u< 8)
        ecx_2 = arg1
    else
        ecx_2 = *arg1
    
    sub_6e3507(ecx_2 + ((arg2 + arg3) << 1), edx_1 + (arg2 << 1), arg1[4] - arg2)
    std::basic_string<uint16_t,struct std::char_traits<uint16_t>,class std::allocator<uint16_t> >::_Chassign(
        arg1, arg2, arg3, arg4)
    bool cond:0_1 = arg1[5] u< 8
    arg1[4] = eax_2
    int32_t* eax_9
    
    if (cond:0_1)
        eax_9 = arg1
    else
        eax_9 = *arg1
    
    *(eax_9 + (eax_2 << 1)) = 0

return arg1
