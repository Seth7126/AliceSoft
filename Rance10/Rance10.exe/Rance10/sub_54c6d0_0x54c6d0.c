// 函数: sub_54c6d0
// 地址: 0x54c6d0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* esi = arg2
int32_t* edx

if (esi[5] u< 0x10)
    edx = esi
else
    edx = *esi

if (*(arg1 + 0x1c) u< 0x10)
    arg2 = arg1 + 8
else
    arg2 = *(arg1 + 8)

int32_t ebp = esi[4]
int32_t eax_2 = ebp

if (*(arg1 + 0x18) u< ebp)
    eax_2 = *(arg1 + 0x18)

int32_t eax_3 = sub_406ac0(eax_2, edx, arg2, eax_2)
int32_t* result

if (eax_3 == 0)
    result = *(arg1 + 0x18)

if (eax_3 != 0 || result u< ebp || result u> ebp)
    result = sub_54d7d0(arg1 + 0x2c, esi)
    
    if (result.b == 0)
        return result
    
    if (arg1 + 8 != esi)
        sub_403590(arg1 + 8, esi, 0, 0xffffffff)
    
    *(arg1 + 0xb4) = 1

result.b = 1
return result
