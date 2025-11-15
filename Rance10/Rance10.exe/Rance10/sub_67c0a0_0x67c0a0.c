// 函数: sub_67c0a0
// 地址: 0x67c0a0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* eax = *(arg1 + 4)

if (eax != 0)
    int32_t* esi_1 = *(*(eax + 0x40) + 0x14)
    
    if (*esi_1 != 0)
        HWND hWnd = *esi_1
        
        if (hWnd != 0 && DestroyWindow(hWnd) != 0)
            *esi_1 = 0
    
    *(arg1 + 4) = 0

return 0
