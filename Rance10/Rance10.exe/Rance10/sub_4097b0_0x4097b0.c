// 函数: sub_4097b0
// 地址: 0x4097b0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* var_4_1 = arg1
char* ebp = arg4

if (ebp != 0)
    int32_t ecx = arg1[5]
    int32_t* eax_1
    
    if (ecx u< 0x10)
        eax_1 = arg1
    else
        eax_1 = *arg1
    
    if (ebp u>= eax_1)
        int32_t* edx_1
        
        if (ecx u< 0x10)
            edx_1 = arg1
        else
            edx_1 = *arg1
        
        if (arg1[4] + edx_1 u> ebp)
            int32_t* eax_4
            
            if (ecx u< 0x10)
                eax_4 = arg1
            else
                eax_4 = *arg1
            
            return sub_4099b0(arg1, arg2, arg3, arg1, ebp - eax_4, arg5)

int32_t ecx_3 = arg1[4]

if (ecx_3 u< arg2)
    sub_6d0947("invalid string position")
    noreturn

void* edx_2 = arg5
int32_t* ebx = arg3
void* edi_1 = ecx_3 - arg2

if (ebx u> edi_1)
    ebx = edi_1

if (not.d(edx_2) u<= ecx_3 - ebx)
    sub_6d0927("string too long")
    noreturn

void* edi_2 = edi_1 - ebx

if (edx_2 u< ebx)
    int32_t eax_9 = arg1[5]
    
    if (eax_9 u< 0x10)
        arg3 = arg1
    else
        arg3 = *arg1
    
    if (eax_9 u< 0x10)
        arg4 = arg1
    else
        arg4 = *arg1
    
    if (edi_2 != 0)
        sub_6feca0(arg4 + arg2 + edx_2, arg3 + arg2 + ebx, edi_2)
        edx_2 = arg5

void* eax_17 = arg1[4]
void* edi_5 = eax_17 - ebx + edx_2

if (edx_2 != 0 || ebx != 0)
    if (edi_5 u> 0xfffffffe)
        sub_6d0927("string too long")
        noreturn
    
    if (arg1[5] u>= edi_5)
        if (edi_5 != 0)
            goto label_4098cb
        
        arg1[4] = edi_5
        
        if (arg1[5] u< 0x10)
            *arg1 = 0
            return arg1
        
        **arg1 = 0
        return arg1
    
    sub_403830(arg1, edi_5, eax_17)
    edx_2 = arg5
    
    if (edi_5 != 0)
    label_4098cb:
        
        if (ebx u< edx_2)
            int32_t eax_18 = arg1[5]
            
            if (eax_18 u< 0x10)
                arg3 = arg1
            else
                arg3 = *arg1
            
            if (eax_18 u< 0x10)
                arg4 = arg1
            else
                arg4 = *arg1
            
            if (edi_2 != 0)
                sub_6feca0(arg4 + arg2 + edx_2, arg3 + arg2 + ebx, edi_2)
                edx_2 = arg5
        
        int32_t* eax_29
        
        if (arg1[5] u< 0x10)
            eax_29 = arg1
        else
            eax_29 = *arg1
        
        if (edx_2 != 0)
            sub_700660(eax_29 + arg2, ebp, edx_2)
        
        bool cond:1_1 = arg1[5] u< 0x10
        arg1[4] = edi_5
        
        if (not(cond:1_1))
            *(*arg1 + edi_5) = 0
            return arg1
        
        *(arg1 + edi_5) = 0

return arg1
