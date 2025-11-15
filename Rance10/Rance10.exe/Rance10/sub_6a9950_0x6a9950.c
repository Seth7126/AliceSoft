// 函数: sub_6a9950
// 地址: 0x6a9950
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ecx = *(arg1 + 0x7c)
int32_t eax

if ((ecx & 0x1000) != 0)
    eax.b = *(arg2 + 0x19)
    
    if (eax.b != 3)
        if (*(arg1 + 0x150) != 0 && (ecx & 0x2000000) != 0)
            eax.b |= 4
            *(arg2 + 0x19) = eax.b
        
        if (arg2[6].b u< 8)
            arg2[6].b = 8
        
        *(arg2 + 0x16) = 0
    else
        arg2[6].b = 8
        eax.b = *(arg1 + 0x150) u> 0
        *(arg2 + 0x19) = (eax << 2).b + 2
        *(arg2 + 0x16) = 0
        
        if (*(arg1 + 0x144) == 0)
            sub_6a7500(arg1, "Palette is NULL in indexed image")
            noreturn

if (ecx.b s< 0)
    eax.w = *(arg1 + 0x170)
    *(arg2 + 0xaa) = *(arg1 + 0x168)
    *(arg2 + 0xb2) = eax.w

bool cond:0 = arg2[6].b != 0x10
arg2[0xa] = *(arg1 + 0x2dc)

if (not(cond:0))
    if ((ecx & 0x4000000) != 0)
        arg2[6].b = 8
    
    if ((ecx & 0x400) != 0)
        arg2[6].b = 8

if ((ecx & 0x4000) != 0)
    *(arg2 + 0x19) |= 2

if ((ecx & 0x600000) != 0)
    *(arg2 + 0x19) &= 0xfd

int32_t eax_2

if ((ecx.b & 0x40) != 0)
    eax_2.b = *(arg2 + 0x19)
    
    if ((eax_2.b == 2 || eax_2.b == 6) && *(arg1 + 0x208) != 0 && arg2[6].b == 8)
        *(arg2 + 0x19) = 3

if ((ecx & 0x200) != 0 && arg2[6].b == 8 && *(arg2 + 0x19) != 3)
    arg2[6].b = 0x10

if ((ecx.b & 4) != 0 && arg2[6].b u< 8)
    arg2[6].b = 8

eax_2.b = *(arg2 + 0x19)

if (eax_2.b == 3 || (eax_2.b & 2) == 0)
    *(arg2 + 0x1d) = 1
else
    *(arg2 + 0x1d) = 3

if ((ecx & 0x40000) != 0)
    eax_2.b &= 0xfb
    *(arg2 + 0x19) = eax_2.b
    *(arg2 + 0x16) = 0

eax_2.b = *(arg2 + 0x19)

if ((eax_2.b & 4) != 0)
    *(arg2 + 0x1d) += 1

if ((ecx & 0x8000) != 0 && (eax_2.b == 2 || eax_2.b == 0))
    *(arg2 + 0x1d) += 1
    
    if ((ecx & 0x1000000) != 0)
        eax_2.b |= 4
        *(arg2 + 0x19) = eax_2.b

if ((ecx & 0x100000) != 0)
    eax_2.b = *(arg1 + 0x70)
    
    if (arg2[6].b u< eax_2.b)
        arg2[6].b = eax_2.b
    
    eax_2.b = *(arg1 + 0x71)
    
    if (*(arg2 + 0x1d) u< eax_2.b)
        *(arg2 + 0x1d) = eax_2.b

char ecx_2 = arg2[6].b * *(arg2 + 0x1d)
*(arg2 + 0x1e) = ecx_2
uint32_t eax_4 = zx.d(ecx_2)

if (ecx_2 u< 8)
    uint32_t eax_9 = (eax_4 * *arg2 + 7) u>> 3
    *(arg1 + 0x138) = eax_9
    arg2[3] = eax_9
    return eax_9

int32_t eax_6 = (eax_4 u>> 3) * *arg2
*(arg1 + 0x138) = eax_6
arg2[3] = eax_6
return eax_6
