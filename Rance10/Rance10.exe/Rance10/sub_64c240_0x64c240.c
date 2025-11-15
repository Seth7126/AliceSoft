// 函数: sub_64c240
// 地址: 0x64c240
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* edx = *(arg1 + 0x184)

if (*(arg1 + 0x114) s> 1)
    *(edx + 0x14) = 1
    *(edx + 0xc) = 0
    *(edx + 0x10) = 0
    return 

void* eax_2 = *(arg1 + 0x118)

if (*(edx + 8) u>= *(arg1 + 0x110) - 1)
    *(edx + 0x14) = *(eax_2 + 0x4c)
    *(edx + 0xc) = 0
    *(edx + 0x10) = 0
    return 

*(edx + 0x14) = *(eax_2 + 0xc)
*(edx + 0xc) = 0
*(edx + 0x10) = 0
