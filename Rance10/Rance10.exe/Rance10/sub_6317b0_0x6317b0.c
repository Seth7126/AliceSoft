// 函数: sub_6317b0
// 地址: 0x6317b0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (arg2 != 0)
    int32_t ecx = arg1[5]
    int32_t* eax_1
    
    if (ecx u< 8)
        eax_1 = arg1
    else
        eax_1 = *arg1
    
    if (arg2 u>= eax_1)
        int32_t* edx_1
        
        if (ecx u< 8)
            edx_1 = arg1
        else
            edx_1 = *arg1
        
        if (edx_1 + (arg1[4] << 1) u> arg2)
            int32_t* eax_4
            
            if (ecx u< 8)
                eax_4 = arg1
            else
                eax_4 = *arg1
            
            return sub_631a50(arg1, arg1, (arg2 - eax_4) s>> 1, arg3)

if (arg3 u> 0x7ffffffe)
    sub_6d0927("string too long")
    noreturn

if (arg1[5] u>= arg3)
    if (arg3 != 0)
        goto label_63182d
    
    bool cond:0 = arg1[5] u< 8
    arg1[4] = arg3
    
    if (cond:0)
        *arg1 = 0
        return arg1
    
    **arg1 = 0
    return arg1

sub_631de0(arg1, arg3, arg1[4])

if (arg3 != 0)
label_63182d:
    char* ecx_3
    
    if (arg1[5] u< 8)
        ecx_3 = arg1
    else
        ecx_3 = *arg1
    
    if (arg3 != 0)
        sub_700660(ecx_3, arg2, arg3 * 2)
    
    bool cond:1_1 = arg1[5] u< 8
    arg1[4] = arg3
    
    if (not(cond:1_1))
        *(*arg1 + (arg3 << 1)) = 0
        return arg1
    
    *(arg1 + (arg3 << 1)) = 0

return arg1
