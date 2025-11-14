// 函数: sub_697220
// 地址: 0x697220
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (*(arg1 + 0x1c) != 0)
    HDC hdc = *(arg1 + 0x24)
    
    if (hdc != 0)
        SelectObject(hdc, *(arg1 + 0x28))
        DeleteDC(*(arg1 + 0x24))
        *(arg1 + 0x24) = 0
        *(arg1 + 0x28) = 0
    
    DeleteObject(*(arg1 + 0x1c))
    *(arg1 + 0x1c) = 0
    *(arg1 + 0x20) = 0
    *(arg1 + 8) = 0
    *(arg1 + 0xc) = 0
    *(arg1 + 0x10) = 0
    *(arg1 + 0x18) = 0

*(arg1 + 4) = 0
*(arg1 + 0x2c) = 0
