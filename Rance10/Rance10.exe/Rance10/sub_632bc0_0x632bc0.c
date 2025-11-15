// 函数: sub_632bc0
// 地址: 0x632bc0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (arg2 == 0xffffffff)
    sub_6d0927("string too long")
    noreturn

if (arg2 u> 0x7ffffffe)
    sub_6d0927("string too long")
    noreturn

if (arg1[5] u>= arg2)
    if (arg2 != 0)
        goto label_632bf0
    
    bool cond:1 = arg1[5] u< 8
    arg1[4] = arg2
    
    if (cond:1)
        *arg1 = 0
        return arg1
    
    **arg1 = 0
    return arg1

sub_631de0(arg1, arg2, arg1[4])

if (arg2 != 0)
label_632bf0:
    sub_631f50(arg1, 0, arg2, arg3)
    bool cond:0_1 = arg1[5] u< 8
    arg1[4] = arg2
    
    if (not(cond:0_1))
        *(*arg1 + (arg2 << 1)) = 0
        return arg1
    
    *(arg1 + (arg2 << 1)) = 0

return arg1
