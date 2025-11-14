// 函数: sub_696150
// 地址: 0x696150
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

HWND hWnd = *(arg1 + 8)

if (hWnd != 0 && *(arg1 + 0xc) != 0)
    DestroyWindow(hWnd)
    void* eax = *(arg1 + 4)
    *(arg1 + 8) = 0
    hWnd = UnregisterClassA(*(eax + 0x28), *(eax + 0x14))
    
    if (hWnd != 0)
        *(arg1 + 0xc) = 0

return hWnd
