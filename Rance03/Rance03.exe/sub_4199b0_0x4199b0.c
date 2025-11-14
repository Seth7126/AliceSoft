// 函数: sub_4199b0
// 地址: 0x4199b0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* ebx = arg1 + 0x44
(*(*(arg1 + 0x44) + 4))()
int32_t eax_1
int32_t edx
edx:eax_1 = muls.dp.d(0x38e38e39, *(arg1 + 0x88) - *(arg1 + 0x84))
void* var_18 = nullptr
int32_t edx_1 = edx s>> 3
BITMAPINFO* psizl

if ((edx_1 u>> 0x1f) + edx_1 s> 0)
    int32_t var_1c_1 = 0
    int32_t i = 0
    int32_t edx_6
    
    do
        HDC eax_5 = GetDC(*(arg1 + 0xc))
        HGDIOBJ h
        
        if (i != *(arg1 + 0x90))
            h = *(arg1 + 0x9c)
        else
            h = *(arg1 + 0xc8)
        
        HGDIOBJ h_1 = SelectObject(eax_5, h)
        void* eax_6 = *(arg1 + 0x84)
        void** lpString = eax_6 + 4 + var_1c_1
        
        if (lpString[5] u>= 0x10)
            lpString = *lpString
        
        GetTextExtentPoint32A(eax_5, lpString, *(var_1c_1 + eax_6 + 0x14), &psizl)
        SelectObject(eax_5, h_1)
        ReleaseDC(*(arg1 + 0xc), eax_5)
        i += 1
        *(var_1c_1 + *(arg1 + 0x84) + 0x1c) = psizl
        var_1c_1 += 0x24
        var_18 += psizl + (*(arg1 + 0x80) << 1)
        int32_t eax_11
        int32_t edx_5
        edx_5:eax_11 = muls.dp.d(0x38e38e39, *(arg1 + 0x88) - *(arg1 + 0x84))
        edx_6 = edx_5 s>> 3
    while (i s< (edx_6 u>> 0x1f) + edx_6)
    ebx = arg1 + 0x44

int32_t ebp = *(arg1 + 0x7c)
HWND hWnd = *(arg1 + 0xc)
sub_697220(ebx)

if (hWnd == 0)
    hWnd = GetDesktopWindow()

*(ebx + 8) = var_18
*(ebx + 0xc) = ebp
*(ebx + 0x10) = 0x18
*(ebx + 0x14) = 3
*(ebx + 0x18) = (var_18 * 3 + 0xf) & 0xfffffff0
sub_448e90(&psizl, 0x28)
*(ebx + 0x14)
BITMAPINFO* pbmi = psizl
pbmi->bmiHeader.biWidth = divs.dp.d(sx.q(*(ebx + 0x18)), *(ebx + 0x14))
pbmi->bmiHeader.biSize = 0x28
pbmi->bmiHeader.biHeight = 0xffffffff - ebp
pbmi->bmiHeader.biPlanes = 1
pbmi->bmiHeader.biBitCount = 0x18
__builtin_memset(&pbmi->bmiHeader.biCompression, 0, 0x18)
HDC eax_24 = GetDC(hWnd)
HBITMAP eax_25 = CreateDIBSection(eax_24, pbmi, DIB_RGB_COLORS, ebx + 0x20, nullptr, 0)
*(ebx + 0x1c) = eax_25
HDC var_30_6 = eax_24

if (eax_25 != 0)
    HDC hdc = CreateCompatibleDC(var_30_6)
    *(ebx + 0x24) = hdc
    
    if (hdc != 0)
        *(ebx + 0x28) = SelectObject(hdc, *(ebx + 0x1c))
        ReleaseDC(hWnd, eax_24)
        *(ebx + 0x2c) = hWnd
        *(ebx + 4) = 1
        j__free(pbmi)
        SetBkMode(*(arg1 + 0x68), 1)
        int32_t eax_28
        eax_28.b = 1
        return eax_28
    
    var_30_6 = eax_24

ReleaseDC(hWnd, var_30_6)
j__free(pbmi)
int32_t eax_26
eax_26.b = 0
return eax_26
