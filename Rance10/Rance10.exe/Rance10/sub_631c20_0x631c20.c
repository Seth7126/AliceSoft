// 函数: sub_631c20
// 地址: 0x631c20
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
            
            return sub_6320a0(arg1, arg1, (arg2 - eax_4) s>> 1, arg3)

void* ecx_2 = arg1[4]

if (not.d(ecx_2) u<= arg3)
    sub_6d0927("string too long")
    noreturn

void* ebx = ecx_2 + arg3

if (arg3 != 0)
    if (ebx u> 0x7ffffffe)
        sub_6d0927("string too long")
        noreturn
    
    if (arg1[5] u>= ebx)
        if (ebx != 0)
            goto label_631cb2
        
        arg1[4] = ebx
        
        if (arg1[5] u< 8)
            *arg1 = 0
            return arg1
        
        **arg1 = 0
        return arg1
    
    sub_631de0(arg1, ebx, ecx_2)
    
    if (ebx != 0)
    label_631cb2:
        int32_t* ecx_4
        
        if (arg1[5] u< 8)
            ecx_4 = arg1
        else
            ecx_4 = *arg1
        
        if (arg3 != 0)
            sub_700660(ecx_4 + (arg1[4] << 1), arg2, arg3 << 1)
        
        sub_631a20(arg1, ebx)

return arg1
