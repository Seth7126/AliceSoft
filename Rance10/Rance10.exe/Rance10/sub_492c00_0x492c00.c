// 函数: sub_492c00
// 地址: 0x492c00
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t eax = *(arg1 + 0x18)

if (eax u>= 0x10)
    eax = sub_403160(*(arg1 + 4), eax + 1, 1)

*(arg1 + 0x18) = 0xf
bool cond:0 = *(arg1 + 0x18) u< 0x10
*(arg1 + 0x14) = 0

if (cond:0)
    *(arg1 + 4) = 0
    return eax

char* eax_2 = *(arg1 + 4)
*eax_2 = 0
return eax_2
