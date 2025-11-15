// 函数: sub_6ccf90
// 地址: 0x6ccf90
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (*(arg1 + 0x20) != 0)
    HDC hdc = *(arg1 + 0x28)
    
    if (hdc != 0)
        SelectObject(hdc, *(arg1 + 0x2c))
        DeleteDC(*(arg1 + 0x28))
        *(arg1 + 0x28) = 0
        *(arg1 + 0x2c) = 0
    
    DeleteObject(*(arg1 + 0x20))
    *(arg1 + 0x20) = 0
    *(arg1 + 0x24) = 0
    *(arg1 + 0xc) = 0
    *(arg1 + 0x10) = 0
    *(arg1 + 0x14) = 0
    *(arg1 + 0x1c) = 0

*(arg1 + 8) = 0
*(arg1 + 0x30) = 0
