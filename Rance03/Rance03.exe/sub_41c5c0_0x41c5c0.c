// 函数: sub_41c5c0
// 地址: 0x41c5c0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (**(arg1 + 8) == 0)
    HWND hWnd = *(arg1 + 0xc)
    
    if (hWnd != 0 && IsWindow(hWnd) != 0)
        DestroyWindow(*(arg1 + 0xc))
        *(arg1 + 0xc) = 0

int32_t* esi_1 = *(arg1 + 8)
BOOL hWnd_1 = *esi_1

if (hWnd_1 != 0)
    hWnd_1 = DestroyWindow(hWnd_1)
    
    if (hWnd_1 != 0)
        *esi_1 = 0

if (esi_1[0xb].b != 0)
    hWnd_1 = UnregisterClassA(esi_1[0xa], esi_1[0x18])
    
    if (hWnd_1 != 0)
        esi_1[0xb].b = 0

return hWnd_1
