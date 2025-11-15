// 函数: sub_4d8cc0
// 地址: 0x4d8cc0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void** esi = arg1
void** edi = esi

if (*(esi + 0xd) != 0)
    return 

do
    sub_4d8cc0(edi[2])
    edi = *edi
    esi[5] = &common::CRect::`vftable'
    esi[9] = &common::CSize::`vftable'
    esi[6] = &common::CPoint::`vftable'
    sub_403160(esi, 1, 0x30)
    esi = edi
while (*(edi + 0xd) == 0)
