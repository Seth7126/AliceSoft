// 函数: sub_578d20
// 地址: 0x578d20
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ecx

if ((*(arg1 + 0x29c) - *(arg1 + 0x298)) s/ 0x1c s> 0)
    ecx = **(arg1 + 0x298)
else
    ecx = 0

*arg2 = ecx
int32_t ecx_1 = *(arg1 + 0x34)

if (ecx_1 s<= 0)
    int32_t eax_6 = sub_578cb0(arg1)
    
    if ((*(arg1 + 0x29c) - *(arg1 + 0x298)) s/ 0x1c s> 0)
        int32_t ecx_6 = **(arg1 + 0x298)
        
        if (ecx_6 s< eax_6)
            ecx_6 = eax_6
        
        *arg3 = ecx_6
        return arg3
    
    int32_t ecx_5 = 0
    
    if (0 s< eax_6)
        ecx_5 = eax_6
    
    *arg3 = ecx_5
    return arg3

if (ecx_1 != 1)
    int32_t eax_26 = sub_578cb0(arg1)
    int32_t eax_28
    int32_t edx_10
    edx_10:eax_28 = sx.q(*(arg1 + 0x44))
    int32_t eax_30 = (eax_28 - edx_10) s>> 1
    *arg3 = eax_26 + eax_30 + *(arg1 + 0x40)
    return eax_30

int32_t eax_14 = sub_578cb0(arg1)
int32_t ecx_10

if ((*(arg1 + 0x29c) - *(arg1 + 0x298)) s/ 0x1c s> 0)
    ecx_10 = **(arg1 + 0x298)
else
    ecx_10 = 0

int32_t eax_21
int32_t edx_9
edx_9:eax_21 = sx.q(*(arg1 + 0x44))
int32_t eax_25 = ((eax_21 - edx_9) s>> 1) + *(arg1 + 0x40) + ecx_10

if (eax_25 s< eax_14)
    eax_25 = eax_14

*arg3 = eax_25
return eax_25
