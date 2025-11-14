// 函数: sub_5d51e0
// 地址: 0x5d51e0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

uint32_t edx = *(arg1 + 0xc) u>> 2

if (edx s< 3)
    int32_t eax
    eax.b = 0
    return eax

int32_t ecx

if (*(arg1 + 0xc) != 0)
    ecx = *(arg1 + 8)
else
    ecx = 0

int32_t eax_1 = 0

if (edx s> 0)
    do
        if (*(ecx + (eax_1 << 2)) == arg2 && *(ecx + (eax_1 << 2) + 4) == arg3)
            eax_1.b = 1
            return eax_1
        
        eax_1 += 3
    while (eax_1 s< edx)

eax_1.b = 0
return eax_1
