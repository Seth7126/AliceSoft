// 函数: sub_60d180
// 地址: 0x60d180
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

BOOL hWnd = *(arg1 + 0x24)

if (hWnd != 0)
    hWnd = IsIconic(hWnd)
    
    if (hWnd == 0)
        hWnd.b = *(arg1 + 0x69) != hWnd.b
        return hWnd

hWnd.b = 0
return hWnd
