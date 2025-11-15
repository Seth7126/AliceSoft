// 函数: sub_41c3c0
// 地址: 0x41c3c0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

LRESULT hWnd = *(arg1 + 0xc)

if (hWnd != 0)
    SendMessageA(hWnd, 0x701, 0, 0)
    *(arg1 + 0xc) = 0

hWnd.b = 1
return hWnd
