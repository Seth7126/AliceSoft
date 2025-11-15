// 函数: sub_6c51e0
// 地址: 0x6c51e0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* ecx = arg1[4]

if (ecx u< arg2)
    sub_6d0947("invalid string position")
    noreturn

if (not.d(ecx) u<= arg3)
    sub_6d0927("string too long")
    noreturn

void* edi = ecx + arg3

if (arg3 != 0)
    if (edi u> 0xfffffffe)
        sub_6d0927("string too long")
        noreturn
    
    if (arg1[5] u>= edi)
        if (edi != 0)
            goto label_6c522f
        
        arg1[4] = edi
        
        if (arg1[5] u< 0x10)
            *arg1 = 0
            return arg1
        
        **arg1 = 0
        return arg1
    
    sub_403830(arg1, edi, ecx)
    
    if (edi != 0)
    label_6c522f:
        int32_t eax_2 = arg1[5]
        int32_t* edx_1
        
        if (eax_2 u< 0x10)
            edx_1 = arg1
        else
            edx_1 = *arg1
        
        int32_t* ecx_2
        
        if (eax_2 u< 0x10)
            ecx_2 = arg1
        else
            ecx_2 = *arg1
        
        int32_t eax_6 = arg1[4]
        
        if (eax_6 != arg2)
            sub_6feca0(ecx_2 + arg2 + arg3, edx_1 + arg2, eax_6 - arg2)
        
        sub_405710(arg1, arg2, arg3, arg4)
        bool cond:0_1 = arg1[5] u< 0x10
        arg1[4] = edi
        
        if (not(cond:0_1))
            *(*arg1 + edi) = 0
            return arg1
        
        *(arg1 + edi) = 0

return arg1
