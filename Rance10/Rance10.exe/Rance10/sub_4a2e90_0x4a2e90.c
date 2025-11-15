// 函数: sub_4a2e90
// 地址: 0x4a2e90
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

RECT rect
int32_t eax_1 = __security_cookie ^ &rect
BOOL hWnd = **(arg1 + 0x10)

if (hWnd != 0)
    hWnd = IsIconic(hWnd)
    
    if (hWnd == 0)
        hWnd = (*(*(arg1 + 4) + 0x74))()
        
        if (hWnd.b == 0)
            HWND* eax_5 = *(arg1 + 0x10)
            __builtin_memset(&rect, 0, 0x10)
            hWnd = GetWindowRect(*eax_5, &rect)
            
            if (hWnd != 0)
                *(arg1 + 0x8c) = rect.left
                *(arg1 + 0x90) = rect.top
                int32_t ecx_1 = *(arg1 + 0x70)
                hWnd = *(arg1 + 0x6c)
                *(arg1 + 0x94) = hWnd
                *(arg1 + 0x98) = ecx_1

@__security_check_cookie@4(eax_1 ^ &rect)
return hWnd
