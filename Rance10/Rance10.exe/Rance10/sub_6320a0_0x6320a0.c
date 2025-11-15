// 函数: sub_6320a0
// 地址: 0x6320a0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t edx = arg3
void** ebx = arg2
int32_t eax = ebx[4]

if (eax u< edx)
    sub_6d0947("invalid string position")
    noreturn

void* ecx = arg1[4]
int32_t eax_1 = eax - edx
int32_t ebp = arg4

if (ebp u> eax_1)
    ebp = eax_1

if (not.d(ecx) u<= ebp)
    sub_6d0927("string too long")
    noreturn

void* edi = ecx + ebp

if (ebp != 0)
    if (edi u> 0x7ffffffe)
        sub_6d0927("string too long")
        noreturn
    
    if (arg1[5] u>= edi)
        if (edi != 0)
            goto label_632108
        
        arg1[4] = edi
        
        if (arg1[5] u< 8)
            *arg1 = 0
            return arg1
        
        **arg1 = 0
        return arg1
    
    sub_631de0(arg1, edi, ecx)
    edx = arg3
    
    if (edi != 0)
    label_632108:
        
        if (ebx[5] u>= 8)
            ebx = *ebx
        
        int32_t* ecx_2
        
        if (arg1[5] u< 8)
            ecx_2 = arg1
        else
            ecx_2 = *arg1
        
        if (ebp != 0)
            sub_700660(ecx_2 + (arg1[4] << 1), ebx + (edx << 1), ebp << 1)
        
        bool cond:0_1 = arg1[5] u< 8
        arg1[4] = edi
        
        if (not(cond:0_1))
            *(*arg1 + (edi << 1)) = 0
            return arg1
        
        *(arg1 + (edi << 1)) = 0

return arg1
