// 函数: sub_417950
// 地址: 0x417950
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

HGDIOBJ ho = *(arg1 + 0x8c)

if (ho != 0)
    DeleteObject(ho)
    *(arg1 + 0x8c) = 0

for (int32_t* i = *(arg1 + 0xa4); i != *(arg1 + 0xa8); i = &i[1])
    int32_t* ecx = *i
    
    if (ecx != 0)
        (**ecx)(1)

*(arg1 + 0xa8) = *(arg1 + 0xa4)
HDC hdc = *(arg1 + 0x44)

if (hdc != 0)
    HGDIOBJ h = *(arg1 + 0x40)
    
    if (h != 0)
        SelectObject(hdc, h)
        DeleteObject(*(arg1 + 0x40))
        *(arg1 + 0x40) = 0
    
    SelectObject(*(arg1 + 0x44), *(arg1 + 0x4c))
    DeleteObject(*(arg1 + 0x48))
    DeleteDC(*(arg1 + 0x44))
    *(arg1 + 0x44) = 0

HGDIOBJ ho_1 = *(arg1 + 0x18)

if (ho_1 != 0)
    DeleteObject(ho_1)
    *(arg1 + 0x18) = 0

if (**(arg1 + 8) == 0)
    HWND hWnd = *(arg1 + 0xc)
    
    if (hWnd != 0 && IsWindow(hWnd) != 0)
        DestroyWindow(*(arg1 + 0xc))
        *(arg1 + 0xc) = 0

int32_t* esi = *(arg1 + 8)
HWND hWnd_1 = *esi

if (hWnd_1 != 0 && DestroyWindow(hWnd_1) != 0)
    *esi = 0

if (esi[0xb].b != 0 && UnregisterClassA(esi[0xa], esi[0x18]) != 0)
    esi[0xb].b = 0

return 0
