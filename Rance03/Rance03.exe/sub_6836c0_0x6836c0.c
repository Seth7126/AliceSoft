// 函数: sub_6836c0
// 地址: 0x6836c0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

uint32_t eax = zx.d(arg2.w)
uint32_t esi_1 = arg2 u>> 0x10
HWND hWnd = *(arg1 + 8)
sub_697220(arg1 + 0x6c)

if (hWnd == 0)
    hWnd = GetDesktopWindow()

*(arg1 + 0x74) = eax
*(arg1 + 0x78) = esi_1
*(arg1 + 0x7c) = 0x20
*(arg1 + 0x80) = 4
*(arg1 + 0x84) = ((eax << 2) + 0xf) & 0xfffffff0
int32_t* pbmi
sub_448e90(&pbmi, 0x28)
*(arg1 + 0x80)
int32_t* pbmi_1 = pbmi
pbmi_1[1] = divs.dp.d(sx.q(*(arg1 + 0x84)), *(arg1 + 0x80))
*pbmi_1 = 0x28
pbmi_1[2] = 0xffffffff - esi_1
pbmi_1[3] = 0x200001
__builtin_memset(&pbmi_1[4], 0, 0x18)
HDC eax_7 = GetDC(hWnd)
HBITMAP eax_8 = CreateDIBSection(eax_7, pbmi, DIB_RGB_COLORS, arg1 + 0x8c, nullptr, 0)
*(arg1 + 0x88) = eax_8

if (eax_8 == 0)
    ReleaseDC(hWnd, eax_7)
else
    HDC hdc = CreateCompatibleDC(eax_7)
    *(arg1 + 0x90) = hdc
    
    if (hdc != 0)
        *(arg1 + 0x94) = SelectObject(hdc, *(arg1 + 0x88))
        ReleaseDC(hWnd, eax_7)
        *(arg1 + 0x98) = hWnd
        *(arg1 + 0x70) = 1
    else
        ReleaseDC(hWnd, eax_7)

j__free(pbmi)
int32_t esi_3 = esi_1 - *(arg1 + 0x34) - *(arg1 + 0x2c)
*(arg1 + 0x130) = eax
*(arg1 + 0x114) = esi_3
sub_670600(arg1 + 0x120)
sub_670600(arg1 + 0x104)
return 0
