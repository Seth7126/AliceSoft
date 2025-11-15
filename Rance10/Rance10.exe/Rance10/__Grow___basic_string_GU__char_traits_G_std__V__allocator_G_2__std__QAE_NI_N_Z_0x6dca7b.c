// 函数: ?_Grow@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QAE_NI_N@Z
// 地址: 0x6dca7b
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (arg2 u> 0x7ffffffe)
    sub_631dd0()
    noreturn

bool cond:0_1

if (arg1[5] u< arg2)
    sub_6d7cad(arg1, arg2, arg1[4])
    cond:0_1 = arg2 != 0
else if (arg3 == 0 || arg2 u>= 8)
    cond:0_1 = arg2 != 0
    
    if (arg2 == 0)
        arg1[4] &= arg2
        
        if (arg1[5] u>= 8)
            arg1 = *arg1
        
        *arg1 = 0
        cond:0_1 = arg2 != 0
else
    void* eax = arg1[4]
    
    if (arg2 u< eax)
        eax = arg2
    
    std::basic_string<wchar_t,struct std::char_traits<wchar_t>,class std::allocator<wchar_t> >::_Tidy(
        arg1, 1, eax)
    cond:0_1 = arg2 != 0

int32_t result
result.b = cond:0_1
return result
