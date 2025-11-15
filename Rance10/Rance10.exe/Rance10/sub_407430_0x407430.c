// 函数: sub_407430
// 地址: 0x407430
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
                return sub_4055a0(arg1, arg1, arg2 - arg1, arg3)
            
            return sub_4055a0(arg1, arg1, arg2 - *arg1, arg3)

void* ecx_3 = arg1[4]

if (not.d(ecx_3) u<= arg3)
    sub_6d0927("string too long")
    noreturn

void* edi = ecx_3 + arg3

if (arg3 != 0)
    if (edi u> 0xfffffffe)
        sub_6d0927("string too long")
        noreturn
    
    if (arg1[5] u>= edi)
        if (edi != 0)
            goto label_4074d2
        
        arg1[4] = edi
        
        if (arg1[5] u< 0x10)
            *arg1 = 0
            return arg1
        
        **arg1 = 0
        return arg1
    
    sub_403830(arg1, edi, ecx_3)
    
    if (edi != 0)
    label_4074d2:
        int32_t* ecx_5
        
        if (arg1[5] u< 0x10)
            ecx_5 = arg1
        else
            ecx_5 = *arg1
        
        if (arg3 != 0)
            sub_700660(arg1[4] + ecx_5, arg2, arg3)
        
        bool cond:0_1 = arg1[5] u< 0x10
        arg1[4] = edi
        
        if (not(cond:0_1))
            *(*arg1 + edi) = 0
            return arg1
        
        *(arg1 + edi) = 0

return arg1
