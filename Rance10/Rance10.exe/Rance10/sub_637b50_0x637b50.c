// 函数: sub_637b50
// 地址: 0x637b50
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* esi = arg1
int32_t* eax = esi[4]
void* edi = &esi[4]
int32_t ecx = esi[5]

if (eax == ecx)
    if (eax + 1 u> 0x7ffffffe)
        sub_6d0927("string too long")
        noreturn
    
    if (ecx u< eax + 1)
        sub_631de0(esi, eax + 1, *edi)
    else if (eax == 0xffffffff)
        bool cond:0_1 = esi[5] u< 8
        *edi = eax + 1
        
        if (cond:0_1)
            eax = esi
        else
            eax = *esi
        
        *eax = 0

if (esi[5] u>= 8)
    esi = *esi

eax.w = arg2
*(esi + (*edi << 1)) = eax.w
*edi += 1
int32_t result = *edi
*(esi + (result << 1)) = 0
return result
