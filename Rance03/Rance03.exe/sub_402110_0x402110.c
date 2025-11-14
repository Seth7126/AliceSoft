// 函数: sub_402110
// 地址: 0x402110
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

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
                return sub_401ff0(arg1, arg1, arg2 - arg1, arg3)
            
            return sub_401ff0(arg1, arg1, arg2 - *arg1, arg3)

if (arg3 u> 0xfffffffe)
    sub_69a551("string too long")
    noreturn

int32_t eax_8 = arg1[5]

if (eax_8 u>= arg3)
    if (arg3 != 0)
        goto label_402197
    
    arg1[4] = arg3
    
    if (eax_8 u< 0x10)
        *arg1 = 0
        return arg1
    
    **arg1 = 0
    return arg1

sub_4023a0(arg1, arg3, arg1[4])

if (arg3 != 0)
label_402197:
    int32_t* eax_9
    
    if (arg1[5] u< 0x10)
        eax_9 = arg1
    else
        eax_9 = *arg1
    
    if (arg3 != 0)
        sub_69d850(eax_9, arg2, arg3)
    
    bool cond:0_1 = arg1[5] u< 0x10
    arg1[4] = arg3
    
    if (not(cond:0_1))
        *(*arg1 + arg3) = 0
        return arg1
    
    *(arg1 + arg3) = 0

return arg1
