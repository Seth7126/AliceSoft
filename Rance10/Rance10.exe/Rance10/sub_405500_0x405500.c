// 函数: sub_405500
// 地址: 0x405500
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* ecx = arg1[4]

if (not.d(ecx) u<= arg2)
    sub_6d0927("string too long")
    noreturn

void* edi = ecx + arg2

if (arg2 != 0)
    if (edi u> 0xfffffffe)
        sub_6d0927("string too long")
        noreturn
    
    if (arg1[5] u>= edi)
        if (edi != 0)
            goto label_40553c
        
        arg1[4] = edi
        
        if (arg1[5] u< 0x10)
            *arg1 = 0
            return arg1
        
        **arg1 = 0
        return arg1
    
    sub_403830(arg1, edi, ecx)
    
    if (edi != 0)
    label_40553c:
        sub_405710(arg1, arg1[4], arg2, arg3)
        bool cond:0_1 = arg1[5] u< 0x10
        arg1[4] = edi
        
        if (not(cond:0_1))
            *(*arg1 + edi) = 0
            return arg1
        
        *(arg1 + edi) = 0

return arg1
