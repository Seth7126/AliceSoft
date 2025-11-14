// 函数: sub_42b860
// 地址: 0x42b860
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

HGDIOBJ h = *(arg1 + 0xb0)

if (h != 0)
    SelectObject(*(arg1 + 0xc4), h)
    DeleteObject(*(arg1 + 0xb0))
    *(arg1 + 0xb0) = 0

HGDIOBJ ho = *(arg1 + 0x88)

if (ho != 0)
    DeleteObject(ho)
    *(arg1 + 0x88) = 0

*(arg1 + 0xc8) = arg2
*(arg1 + 0x8c) = arg2
HFONT hdc = sub_697f40(arg1 + 0x84)

if (hdc.b != 0)
    hdc = *(arg1 + 0xc4)
    
    if (hdc != 0)
        hdc = SelectObject(hdc, *(arg1 + 0x88))
        *(arg1 + 0xb0) = hdc

return hdc
