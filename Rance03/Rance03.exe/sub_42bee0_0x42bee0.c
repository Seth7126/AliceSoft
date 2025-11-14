// 函数: sub_42bee0
// 地址: 0x42bee0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

HDC hdc = *(arg1 + 0xc4)

if (hdc != 0)
    HGDIOBJ h = *(arg1 + 0xb0)
    
    if (h != 0)
        SelectObject(hdc, h)
        DeleteObject(*(arg1 + 0xb0))
        *(arg1 + 0xb0) = 0
    
    SelectObject(*(arg1 + 0xc4), *(arg1 + 0xb8))
    DeleteObject(*(arg1 + 0xb4))
    DeleteDC(*(arg1 + 0xc4))
    *(arg1 + 0xc4) = 0

HGDIOBJ ho = *(arg1 + 0x88)

if (ho != 0)
    DeleteObject(ho)
    *(arg1 + 0x88) = 0

return 0
