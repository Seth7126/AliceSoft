// 函数: sub_5ffa30
// 地址: 0x5ffa30
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* eax = *(arg1 + 4)

if (eax != 0)
    int32_t* esi_1 = *(*(eax + 0x40) + 0x14)
    
    if (*esi_1 != 0)
        HWND hWnd = *esi_1
        
        if (hWnd != 0 && DestroyWindow(hWnd) != 0)
            *esi_1 = 0
    
    *(arg1 + 4) = 0

return 0
