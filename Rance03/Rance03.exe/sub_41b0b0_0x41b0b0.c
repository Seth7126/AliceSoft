// 函数: sub_41b0b0
// 地址: 0x41b0b0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

HDC hdc = *(arg1 + 0x44)

if (hdc != 0)
    HGDIOBJ h = *(arg1 + 0x40)
    
    if (h != 0)
        SelectObject(hdc, h)
        DeleteObject(*(arg1 + 0x40))
        *(arg1 + 0x40) = 0
    
    SelectObject(*(arg1 + 0x44), *(arg1 + 0x4c))
    DeleteObject(*(arg1 + 0x48))
    DeleteDC(*(arg1 + 0x44))
    *(arg1 + 0x44) = 0

HGDIOBJ ho = *(arg1 + 0x18)

if (ho != 0)
    DeleteObject(ho)
    *(arg1 + 0x18) = 0

sub_41c5c0(arg1)
return 0
