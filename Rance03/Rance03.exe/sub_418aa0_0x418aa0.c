// 函数: sub_418aa0
// 地址: 0x418aa0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

RECT rect
int32_t eax_1 = __security_cookie ^ &rect
HWND hWnd = *(arg1 + 0x1c)

if (hWnd != 0)
    __builtin_memset(&rect, 0, 0x10)
    GetWindowRect(hWnd, &rect)
    int32_t nWidth = rect.right - rect.left
    
    if (nWidth s< 4)
        nWidth = 4
    
    hWnd = MoveWindow(*(arg1 + 0x1c), 0, 0, nWidth, arg3, 1)
    HWND hWnd_1 = *(arg1 + 0x20)
    
    if (hWnd_1 != 0)
        hWnd = MoveWindow(hWnd_1, nWidth + 2, 0, arg2 - nWidth - 2, arg3, 1)

sub_69a5bc(eax_1 ^ &rect)
return hWnd
