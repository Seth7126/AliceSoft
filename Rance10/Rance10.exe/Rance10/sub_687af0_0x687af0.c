// 函数: sub_687af0
// 地址: 0x687af0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

BOOL hWnd = *(arg1 + 0x24)

if (hWnd != 0)
    hWnd = IsIconic(hWnd)
    
    if (hWnd == 0)
        hWnd.b = *(arg1 + 0x79) != hWnd.b
        return hWnd

hWnd.b = 0
return hWnd
