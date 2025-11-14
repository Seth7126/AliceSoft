// 函数: sub_10001ae0
// 地址: 0x10001ae0
// 来自: E:\torrent\AliceSoft\ランス01\DLL\DrawMovie3.dll

if (arg2 != 0)
    int32_t edx_1 = *(arg1 + 0x18)
    void* eax_1 = arg1 + 4
    void* ecx
    
    if (edx_1 u< 0x10)
        ecx = eax_1
    else
        ecx = *eax_1
    
    if (arg2 u>= ecx)
        void* ecx_1
        
        if (edx_1 u< 0x10)
            ecx_1 = eax_1
        else
            ecx_1 = *eax_1
        
        if (*(arg1 + 0x14) + ecx_1 u> arg2)
            if (edx_1 u>= 0x10)
                eax_1 = *eax_1
            
            return sub_100012a0(arg1, arg1, arg2 - eax_1, arg3)

if (arg3 u> 0xfffffffe)
    sub_10001c8c()
    noreturn

int32_t eax_3 = *(arg1 + 0x18)
bool cond:0

if (eax_3 u>= arg3)
    cond:0 = arg3 u<= 0
    
    if (arg3 == 0)
        *(arg1 + 0x14) = arg3
        
        if (eax_3 u< 0x10)
            *(arg1 + 4) = 0
            return arg1
        
        **(arg1 + 4) = 0
        return arg1
else
    sub_100018e0(arg1, arg3, *(arg1 + 0x14))
    cond:0 = arg3 u<= 0

if (not(cond:0))
    int32_t ecx_5 = *(arg1 + 0x18)
    char* ebx_1 = arg1 + 4
    char* eax_4
    
    if (ecx_5 u< 0x10)
        eax_4 = ebx_1
    else
        eax_4 = *ebx_1
    
    sub_1000211a(eax_4, ecx_5, arg2, arg3)
    bool cond:1_1 = *(arg1 + 0x18) u< 0x10
    *(arg1 + 0x14) = arg3
    
    if (not(cond:1_1))
        ebx_1 = *ebx_1
    
    *(ebx_1 + arg3) = 0

return arg1
