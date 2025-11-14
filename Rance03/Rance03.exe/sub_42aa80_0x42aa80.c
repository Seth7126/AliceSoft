// 函数: sub_42aa80
// 地址: 0x42aa80
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* ebp = &arg1[0x2d]
(*(arg1[0x2d] + 4))()
int32_t eax_1
int32_t edx
edx:eax_1 = muls.dp.d(0x38e38e39, arg1[0x3e] - arg1[0x3d])
void* var_18 = nullptr
int32_t edx_1 = edx s>> 3
int32_t* psizl

if (edx_1 u>> 0x1f != neg.d(edx_1))
    int32_t var_1c_1 = 0
    int32_t i = 0
    int32_t edx_6
    
    do
        HDC eax_5 = GetDC(arg1[0x17])
        int32_t eax_6 = arg1[0x40]
        HGDIOBJ h
        
        if (eax_6 s< 0 || i != eax_6)
            h = arg1[0x43]
        else
            h = arg1[0x4e]
        
        HGDIOBJ h_1 = SelectObject(eax_5, h)
        void* eax_7 = arg1[0x3d]
        void** lpString = eax_7 + 4 + var_1c_1
        
        if (lpString[5] u>= 0x10)
            lpString = *lpString
        
        GetTextExtentPoint32A(eax_5, lpString, *(var_1c_1 + eax_7 + 0x14), &psizl)
        SelectObject(eax_5, h_1)
        ReleaseDC(arg1[0x17], eax_5)
        i += 1
        *(var_1c_1 + arg1[0x3d] + 0x1c) = psizl
        var_1c_1 += 0x24
        var_18 += psizl + (arg1[0x3c] << 1)
        int32_t eax_12
        int32_t edx_5
        edx_5:eax_12 = muls.dp.d(0x38e38e39, arg1[0x3e] - arg1[0x3d])
        edx_6 = edx_5 s>> 3
    while (i u< (edx_6 u>> 0x1f) + edx_6)
    ebp = &arg1[0x2d]

int32_t ebx = arg1[0x3b]
HWND hWnd = (**arg1)()
sub_697220(ebp)

if (hWnd == 0)
    hWnd = GetDesktopWindow()

*(ebp + 8) = var_18
*(ebp + 0xc) = ebx
*(ebp + 0x10) = 0x18
*(ebp + 0x14) = 3
*(ebp + 0x18) = (var_18 * 3 + 0xf) & 0xfffffff0
sub_448e90(&psizl, 0x28)
*(ebp + 0x14)
int32_t* pbmi = psizl
pbmi[1] = divs.dp.d(sx.q(*(ebp + 0x18)), *(ebp + 0x14))
*pbmi = 0x28
pbmi[2] = 0xffffffff - ebx
pbmi[3] = 0x180001
__builtin_memset(&pbmi[4], 0, 0x18)
HDC eax_27 = GetDC(hWnd)
HBITMAP eax_28 = CreateDIBSection(eax_27, pbmi, DIB_RGB_COLORS, ebp + 0x20, nullptr, 0)
*(ebp + 0x1c) = eax_28
HDC var_30_6 = eax_27

if (eax_28 != 0)
    HDC hdc = CreateCompatibleDC(var_30_6)
    *(ebp + 0x24) = hdc
    
    if (hdc != 0)
        *(ebp + 0x28) = SelectObject(hdc, *(ebp + 0x1c))
        ReleaseDC(hWnd, eax_27)
        *(ebp + 0x2c) = hWnd
        *(ebp + 4) = 1
        j__free(pbmi)
        SetBkMode(arg1[0x36], 1)
        int32_t eax_31
        eax_31.b = 1
        return eax_31
    
    var_30_6 = eax_27

ReleaseDC(hWnd, var_30_6)
j__free(pbmi)
int32_t eax_29
eax_29.b = 0
return eax_29
