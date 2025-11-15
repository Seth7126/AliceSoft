// 函数: sub_485050
// 地址: 0x485050
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t eax = *(arg1 + 0x20)

if (eax u>= 0x10)
    eax = sub_403160(*(arg1 + 0xc), eax + 1, 1)

*(arg1 + 0x20) = 0xf
bool cond:0 = *(arg1 + 0x20) u< 0x10
*(arg1 + 0x1c) = 0

if (cond:0)
    *(arg1 + 0xc) = 0
    return eax

char* eax_2 = *(arg1 + 0xc)
*eax_2 = 0
return eax_2
