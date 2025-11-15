// 函数: sub_4b2200
// 地址: 0x4b2200
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t eax = *(arg1 + 0x54)
void* edi = arg1 + 0x40

if (eax u>= 0x10)
    sub_403160(*edi, eax + 1, 1)

*(edi + 0x14) = 0xf
bool cond:0 = *(edi + 0x14) u< 0x10
*(edi + 0x10) = 0

if (not(cond:0))
    edi = *edi

*edi = 0
int32_t eax_2 = *(arg1 + 0x3c)

if (eax_2 u>= 0x10)
    eax_2 = sub_403160(*(arg1 + 0x28), eax_2 + 1, 1)

*(arg1 + 0x3c) = 0xf
bool cond:1 = *(arg1 + 0x3c) u< 0x10
*(arg1 + 0x38) = 0

if (cond:1)
    *(arg1 + 0x28) = 0
    return eax_2

char* eax_4 = *(arg1 + 0x28)
*eax_4 = 0
return eax_4
