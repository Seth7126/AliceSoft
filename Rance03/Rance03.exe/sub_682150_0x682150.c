// 函数: sub_682150
// 地址: 0x682150
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

uint32_t ebx = zx.d(arg3.w)
HWND hWnd = arg2
uint32_t ebp_1 = arg3 u>> 0x10
sub_697220(arg1 + 0x6c)

if (hWnd == 0)
    hWnd = GetDesktopWindow()

*(arg1 + 0x74) = ebx
*(arg1 + 0x78) = ebp_1
*(arg1 + 0x84) = ((ebx << 2) + 0xf) & 0xfffffff0
*(arg1 + 0x7c) = 0x20
*(arg1 + 0x80) = 4
int32_t* pbmi_1
sub_448e90(&pbmi_1, 0x28)
*(arg1 + 0x80)
int32_t* pbmi = pbmi_1
pbmi[1] = divs.dp.d(sx.q(*(arg1 + 0x84)), *(arg1 + 0x80))
*pbmi = 0x28
pbmi[2] = 0xffffffff - ebp_1
pbmi[3] = 0x200001
__builtin_memset(&pbmi[4], 0, 0x18)
HDC eax_6 = GetDC(hWnd)
HBITMAP eax_7 = CreateDIBSection(eax_6, pbmi, DIB_RGB_COLORS, arg1 + 0x8c, nullptr, 0)
*(arg1 + 0x88) = eax_7

if (eax_7 == 0)
    ReleaseDC(hWnd, eax_6)
else
    HDC hdc = CreateCompatibleDC(eax_6)
    *(arg1 + 0x90) = hdc
    
    if (hdc != 0)
        *(arg1 + 0x94) = SelectObject(hdc, *(arg1 + 0x88))
        ReleaseDC(hWnd, eax_6)
        *(arg1 + 0x98) = hWnd
        *(arg1 + 0x70) = 1
    else
        ReleaseDC(hWnd, eax_6)

j__free(pbmi)
sub_682290(arg1)
InvalidateRect(*(arg1 + 8), nullptr, 0)
UpdateWindow(*(arg1 + 8))
return 0
