// 函数: sub_100012a0
// 地址: 0x100012a0
// 来自: E:\torrent\AliceSoft\ランス01\DLL\DrawMovie3.dll

if (*(arg2 + 0x14) u< arg3)
    sub_10001cc4()
    noreturn

void* edi_1 = *(arg2 + 0x14) - arg3

if (arg4 u< edi_1)
    edi_1 = arg4

if (arg1 == arg2)
    sub_10001450(arg1, edi_1 + arg3, 0xffffffff)
    sub_10001450(arg1, nullptr, arg3)
    return arg1

if (edi_1 u> 0xfffffffe)
    sub_10001c8c()
    noreturn

int32_t eax_2 = *(arg1 + 0x18)
bool cond:0

if (eax_2 u>= edi_1)
    cond:0 = edi_1 u<= 0
    
    if (edi_1 == 0)
        *(arg1 + 0x14) = edi_1
        
        if (eax_2 u< 0x10)
            *(arg1 + 4) = 0
            return arg1
        
        **(arg1 + 4) = 0
        return arg1
else
    sub_100018e0(arg1, edi_1, *(arg1 + 0x14))
    cond:0 = edi_1 u<= 0

if (not(cond:0))
    void* edx_1
    
    if (*(arg2 + 0x18) u< 0x10)
        edx_1 = arg2 + 4
    else
        edx_1 = *(arg2 + 4)
    
    int32_t ecx_3 = *(arg1 + 0x18)
    char* ebx_1 = arg1 + 4
    char* eax_8
    
    if (ecx_3 u< 0x10)
        eax_8 = ebx_1
    else
        eax_8 = *ebx_1
    
    sub_1000211a(eax_8, ecx_3, edx_1 + arg3, edi_1)
    bool cond:1_1 = *(arg1 + 0x18) u< 0x10
    *(arg1 + 0x14) = edi_1
    
    if (not(cond:1_1))
        ebx_1 = *ebx_1
    
    *(ebx_1 + edi_1) = 0

return arg1
