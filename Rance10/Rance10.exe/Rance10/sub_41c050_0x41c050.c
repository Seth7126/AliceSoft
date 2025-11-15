// 函数: sub_41c050
// 地址: 0x41c050
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

LRESULT hWnd = *(arg1 + 0xc)

if (hWnd != 0)
    SendMessageA(hWnd, 0x503, 0, 0)
    *(arg1 + 0xc) = 0

hWnd.b = 1
return hWnd
