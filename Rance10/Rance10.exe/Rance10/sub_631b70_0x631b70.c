// 函数: sub_631b70
// 地址: 0x631b70
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* ecx = arg1[4]

if (not.d(ecx) u<= arg2)
    sub_6d0927("string too long")
    noreturn

void* edi = ecx + arg2

if (arg2 != 0)
    if (edi u> 0x7ffffffe)
        sub_6d0927("string too long")
        noreturn
    
    if (arg1[5] u>= edi)
        if (edi != 0)
            goto label_631bb3
        
        arg1[4] = edi
        
        if (arg1[5] u< 8)
            *arg1 = 0
            return arg1
        
        **arg1 = 0
        return arg1
    
    sub_631de0(arg1, edi, ecx)
    
    if (edi != 0)
    label_631bb3:
        sub_631f50(arg1, arg1[4], arg2, arg3)
        bool cond:0_1 = arg1[5] u< 8
        arg1[4] = edi
        
        if (not(cond:0_1))
            *(*arg1 + (edi << 1)) = 0
            return arg1
        
        *(arg1 + (edi << 1)) = 0

return arg1
