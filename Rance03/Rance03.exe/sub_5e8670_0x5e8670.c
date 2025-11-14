// 函数: sub_5e8670
// 地址: 0x5e8670
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

RECT rect
int32_t eax_1 = __security_cookie ^ &rect
BOOL hWnd = **(arg1 + 0xc)

if (hWnd != 0)
    hWnd = IsIconic(hWnd)
    
    if (hWnd == 0)
        hWnd = (**(arg1 + 0x1c8))()
        
        if (hWnd.b == 0)
            HWND* eax_5 = *(arg1 + 0xc)
            __builtin_memset(&rect, 0, 0x10)
            hWnd = GetWindowRect(*eax_5, &rect)
            
            if (hWnd != 0)
                *(arg1 + 0x6c) = rect.left
                *(arg1 + 0x70) = rect.top
                int32_t ecx_1 = *(arg1 + 0x54)
                hWnd = *(arg1 + 0x50)
                *(arg1 + 0x74) = hWnd
                *(arg1 + 0x78) = ecx_1

sub_69a5bc(eax_1 ^ &rect)
return hWnd
