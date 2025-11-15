// 函数: sub_480280
// 地址: 0x480280
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t eax = *(arg1 + 0x1c)

if (eax u>= 0x10)
    eax = sub_403160(*(arg1 + 8), eax + 1, 1)

*(arg1 + 0x1c) = 0xf
bool cond:0 = *(arg1 + 0x1c) u< 0x10
*(arg1 + 0x18) = 0

if (cond:0)
    *(arg1 + 8) = 0
    return eax

char* eax_2 = *(arg1 + 8)
*eax_2 = 0
return eax_2
