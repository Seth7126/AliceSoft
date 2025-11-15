// 函数: sub_403490
// 地址: 0x403490
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (arg2 != 0)
    int32_t ecx = arg1[5]
    int32_t* eax_1
    
    if (ecx u< 0x10)
        eax_1 = arg1
    else
        eax_1 = *arg1
    
    if (arg2 u>= eax_1)
        int32_t* edx_1
        
        if (ecx u< 0x10)
            edx_1 = arg1
        else
            edx_1 = *arg1
        
        if (arg1[4] + edx_1 u> arg2)
            if (ecx u< 0x10)
                return sub_403590(arg1, arg1, arg2 - arg1, arg3)
            
            return sub_403590(arg1, arg1, arg2 - *arg1, arg3)

if (arg3 u> 0xfffffffe)
    sub_6d0927("string too long")
    noreturn

if (arg1[5] u>= arg3)
    if (arg3 != 0)
        goto label_403515
    
    bool cond:0 = arg1[5] u< 0x10
    arg1[4] = arg3
    
    if (cond:0)
        *arg1 = 0
        return arg1
    
    **arg1 = 0
    return arg1

sub_403830(arg1, arg3, arg1[4])

if (arg3 != 0)
label_403515:
    char* eax_8
    
    if (arg1[5] u< 0x10)
        eax_8 = arg1
    else
        eax_8 = *arg1
    
    if (arg3 != 0)
        sub_700660(eax_8, arg2, arg3)
    
    bool cond:1_1 = arg1[5] u< 0x10
    arg1[4] = arg3
    
    if (not(cond:1_1))
        *(*arg1 + arg3) = 0
        return arg1
    
    *(arg1 + arg3) = 0

return arg1
