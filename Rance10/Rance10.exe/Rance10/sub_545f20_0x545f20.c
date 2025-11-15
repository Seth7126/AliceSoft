// 函数: sub_545f20
// 地址: 0x545f20
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

*(arg1 + 0x34) = &common::CRect::`vftable'
*(arg1 + 0x44) = &common::CSize::`vftable'
*(arg1 + 0x38) = &common::CPoint::`vftable'
void* ecx = *(arg1 + 0x20)

if (ecx != 0)
    sub_403160(ecx, *(arg1 + 0x28) - ecx, 1)
    *(arg1 + 0x20) = 0
    *(arg1 + 0x24) = 0
    *(arg1 + 0x28) = 0

int32_t eax_4 = *(arg1 + 0x1c)

if (eax_4 u>= 0x10)
    eax_4 = sub_403160(*(arg1 + 8), eax_4 + 1, 1)

*(arg1 + 0x1c) = 0xf
bool cond:0 = *(arg1 + 0x1c) u< 0x10
*(arg1 + 0x18) = 0

if (cond:0)
    *(arg1 + 8) = 0
    return eax_4

char* eax_5 = *(arg1 + 8)
*eax_5 = 0
return eax_5
