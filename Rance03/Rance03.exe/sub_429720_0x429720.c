// 函数: sub_429720
// 地址: 0x429720
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t nWidth_1
int32_t eax_1 = __security_cookie ^ &nWidth_1
HWND hWnd_1 = *(arg1 + 0x5c)

if (hWnd_1 != 0)
    MoveWindow(hWnd_1, arg2, arg3, arg4, arg5, 0)
    hWnd_1 = *(arg1 + 0x8c)
    
    if (hWnd_1 != 0)
        RECT rect
        __builtin_memset(&rect, 0, 0x10)
        GetWindowRect(hWnd_1, &rect)
        int32_t nWidth_3 = rect.right - rect.left
        int32_t var_18
        int32_t* eax_2 = &var_18
        nWidth_1 = nWidth_3
        
        if (nWidth_3 s>= 4)
            eax_2 = &nWidth_1
        
        var_18 = 4
        int32_t nWidth = *eax_2
        HWND hWnd = *(arg1 + 0x8c)
        nWidth_1 = nWidth
        hWnd_1 = MoveWindow(hWnd, 0, 0, nWidth, arg5, 1)
        HWND hWnd_2 = *(arg1 + 0x90)
        
        if (hWnd_2 != 0)
            int32_t nWidth_2 = nWidth_1
            hWnd_1 = MoveWindow(hWnd_2, nWidth_2 + 2, 0, arg4 - nWidth_2 - 2, arg5, 1)

sub_69a5bc(eax_1 ^ &nWidth_1)
return hWnd_1
