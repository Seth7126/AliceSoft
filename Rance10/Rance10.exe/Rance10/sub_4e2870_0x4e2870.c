// 函数: sub_4e2870
// 地址: 0x4e2870
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (arg2 == 0xffffffff)
    sub_6d0927("string too long")
    noreturn

if (arg2 u> 0xfffffffe)
    sub_6d0927("string too long")
    noreturn

if (*(arg1 + 0x14) u>= arg2)
    if (arg2 != 0)
        goto label_4e289f
    
    bool cond:0 = *(arg1 + 0x14) u< 0x10
    *(arg1 + 0x10) = arg2
    
    if (cond:0)
        *arg1 = 0
        return arg1
    
    **arg1 = 0
    return arg1

sub_403830(arg1, arg2, *(arg1 + 0x10))

if (arg2 != 0)
label_4e289f:
    
    if (arg2 != 1)
        char* ecx_2
        
        if (*(arg1 + 0x14) u< 0x10)
            ecx_2 = arg1
        else
            ecx_2 = *arg1
        
        _memset(ecx_2, arg3, arg2)
    else if (*(arg1 + 0x14) u< 0x10)
        *arg1 = arg3
    else
        **arg1 = arg3
    
    bool cond:1_1 = *(arg1 + 0x14) u< 0x10
    *(arg1 + 0x10) = arg2
    
    if (not(cond:1_1))
        *(*arg1 + arg2) = 0
        return arg1
    
    *(arg1 + arg2) = 0

return arg1
