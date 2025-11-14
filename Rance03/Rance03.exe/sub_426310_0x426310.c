// 函数: sub_426310
// 地址: 0x426310
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

BOOL hWnd = *(arg1 - 0x28)

if (hWnd != 0)
    DestroyWindow(hWnd)

if (*(arg1 - 0x24) != 0)
    void* lpClassName = arg1 - 0x7c
    
    if (*(arg1 - 0x68) u>= 0x10)
        lpClassName = *lpClassName
    
    UnregisterClassA(lpClassName, *(arg1 - 0x2c))
    *(arg1 - 0x24) = 0

hWnd.b = 1
return hWnd
