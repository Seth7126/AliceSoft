// 函数: sub_64fc80
// 地址: 0x64fc80
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* ebx = arg1 + 0x3c
int32_t edi
int32_t var_2c = edi
(*(*(arg1 + 0x3c) + 4))()
int32_t eax_1
int32_t edx
edx:eax_1 = muls.dp.d(0x38e38e39, *(arg1 + 0x80) - *(arg1 + 0x7c))
void* var_18 = nullptr
int32_t edx_1 = edx s>> 3
BITMAPINFO* psizl

if ((edx_1 u>> 0x1f) + edx_1 s> 0)
    int32_t var_1c_1 = 0
    int32_t i = 0
    int32_t edx_6
    
    do
        HDC eax_6 = GetDC(**(arg1 + 8))
        HGDIOBJ h
        
        if (i != *(arg1 + 0x88))
            h = *(arg1 + 0x94)
        else
            h = *(arg1 + 0xc0)
        
        HGDIOBJ h_1 = SelectObject(eax_6, h)
        void* eax_7 = *(arg1 + 0x7c)
        void** lpString = eax_7 + 4 + var_1c_1
        
        if (lpString[5] u>= 0x10)
            lpString = *lpString
        
        GetTextExtentPoint32A(eax_6, lpString, *(var_1c_1 + eax_7 + 0x14), &psizl)
        SelectObject(eax_6, h_1)
        ReleaseDC(**(arg1 + 8), eax_6)
        i += 1
        *(var_1c_1 + *(arg1 + 0x7c) + 0x1c) = psizl
        var_1c_1 += 0x24
        var_18 += psizl + (*(arg1 + 0x78) << 1)
        int32_t eax_13
        int32_t edx_5
        edx_5:eax_13 = muls.dp.d(0x38e38e39, *(arg1 + 0x80) - *(arg1 + 0x7c))
        edx_6 = edx_5 s>> 3
    while (i s< (edx_6 u>> 0x1f) + edx_6)
    ebx = arg1 + 0x3c

int32_t ebp = *(arg1 + 0x74)
HWND hWnd = **(arg1 + 8)
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
HDC eax_27 = GetDC(hWnd)
HBITMAP eax_28 = CreateDIBSection(eax_27, pbmi, DIB_RGB_COLORS, ebx + 0x20, nullptr, 0)
*(ebx + 0x1c) = eax_28
HDC var_30_6 = eax_27

if (eax_28 != 0)
    HDC hdc = CreateCompatibleDC(var_30_6)
    *(ebx + 0x24) = hdc
    
    if (hdc != 0)
        *(ebx + 0x28) = SelectObject(hdc, *(ebx + 0x1c))
        ReleaseDC(hWnd, eax_27)
        *(ebx + 0x2c) = hWnd
        *(ebx + 4) = 1
        j__free(pbmi)
        SetBkMode(*(arg1 + 0x60), 1)
        int32_t eax_31
        eax_31.b = 1
        return eax_31
    
    var_30_6 = eax_27

ReleaseDC(hWnd, var_30_6)
j__free(pbmi)
int32_t eax_29
eax_29.b = 0
return eax_29
