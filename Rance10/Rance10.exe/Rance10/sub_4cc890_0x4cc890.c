// 函数: sub_4cc890
// 地址: 0x4cc890
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

arg1[7] = &common::CRect::`vftable'
arg1[0xb] = &common::CSize::`vftable'
arg1[8] = &common::CPoint::`vftable'
int32_t eax = arg1[5]

if (eax u>= 0x10)
    eax = sub_403160(*arg1, eax + 1, 1)

arg1[5] = 0xf
bool cond:0 = arg1[5] u< 0x10
arg1[4] = 0

if (cond:0)
    *arg1 = 0
    return eax

char* eax_2 = *arg1
*eax_2 = 0
return eax_2
