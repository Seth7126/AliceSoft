// 函数: sub_6258c0
// 地址: 0x6258c0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

char* esi

if (*(arg1 + 0x14) != 0)
    esi = *(arg1 + 0x10)
else
    esi = nullptr

int32_t ecx = 0
int32_t eax

if (arg3 != 0)
    do
        eax.b = *esi
        
        if (eax.b == 0)
            goto label_62593f
        
        if (eax.b u< 0x81 || eax.b u> 0x9f)
            eax.b += 0x20
            
            eax = eax.b u> 0xf ? 1 : 2
        else
            eax = 2
        
        ecx += 1
        esi = &esi[eax]
    while (ecx u< arg3)

eax.b = *esi

if (eax.b == 0)
label_62593f:
    eax.b = 1
    return eax

if (eax.b u< 0x81 || eax.b u> 0x9f)
    eax.b += 0x20
    
    if (eax.b u> 0xf)
        if (arg2.w u<= 0xff)
            *esi = arg2.b
            int32_t eax_6
            eax_6.b = 1
            return 1
        
        int32_t eax_7
        
        if (*(arg1 + 0x14) != 0)
            eax_7 = *(arg1 + 0x10)
        else
            eax_7 = 0
        
        char eax_10 = sub_405df0(arg1 + 0xc, *(arg1 + 0x14) + 1)
        
        if (eax_10 == 0)
            return eax_10
        
        int32_t eax_11
        
        if (*(arg1 + 0x14) != 0)
            eax_11 = *(arg1 + 0x10)
        else
            eax_11 = 0
        
        void* esi_2 = esi - eax_7 + eax_11
        char* ecx_5 = esi_2 + 1
        
        do
            eax_11.b = *ecx_5
            ecx_5 = &ecx_5[1]
        while (eax_11.b != 0)
        
        sub_6feca0(esi_2 + 2, esi_2 + 1, ecx_5 - &ecx_5[1] + 1)
        *(esi_2 + 1) = arg2.b
        *esi_2 = (arg2 u>> 8).b
        return 1

if (arg2.w u> 0xff)
    *esi = (arg2 u>> 8).b
    esi[1] = arg2.b
    return 1

*esi = arg2.b
char* ecx_2 = &esi[2]
char i

do
    i = *ecx_2
    ecx_2 = &ecx_2[1]
while (i != 0)
sub_6feca0(&esi[1], &esi[2], ecx_2 - &ecx_2[1] + 1)
char* eax_5
eax_5.b = 1
return eax_5
