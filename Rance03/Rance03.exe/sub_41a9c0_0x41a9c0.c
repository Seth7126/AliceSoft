// 函数: sub_41a9c0
// 地址: 0x41a9c0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

HGDIOBJ h = *(arg1 + 0x40)

if (h != 0)
    SelectObject(*(arg1 + 0x44), h)
    DeleteObject(*(arg1 + 0x40))
    *(arg1 + 0x40) = 0

HGDIOBJ ho = *(arg1 + 0x18)

if (ho != 0)
    DeleteObject(ho)
    *(arg1 + 0x18) = 0

*(arg1 + 0x54) = arg2
*(arg1 + 0x1c) = arg2
HFONT hdc = sub_697f40(arg1 + 0x14)

if (hdc.b != 0)
    hdc = *(arg1 + 0x44)
    
    if (hdc != 0)
        hdc = SelectObject(hdc, *(arg1 + 0x18))
        *(arg1 + 0x40) = hdc

return hdc
