// 函数: sub_41cca0
// 地址: 0x41cca0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* esi = *(arg1 + 0x14)
LRESULT hWnd

if (esi != 0)
    hWnd = *(esi + 0xc)
    
    if (hWnd != 0)
        SendMessageA(hWnd, 0x801, 0, 0)
        *(esi + 0xc) = 0

hWnd.b = 1
return hWnd
