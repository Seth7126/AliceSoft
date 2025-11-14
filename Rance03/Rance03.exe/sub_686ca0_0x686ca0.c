// 函数: sub_686ca0
// 地址: 0x686ca0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

HWND hWnd = arg2
sub_697220(arg1 + 0x18)

if (hWnd == 0)
    hWnd = GetDesktopWindow()

*(arg1 + 0x20) = arg3
*(arg1 + 0x24) = arg4
*(arg1 + 0x28) = 0x20
*(arg1 + 0x2c) = 4
*(arg1 + 0x30) = ((arg3 << 2) + 0xf) & 0xfffffff0
int32_t* pbmi_1
sub_448e90(&pbmi_1, 0x28)
*(arg1 + 0x2c)
int32_t* pbmi = pbmi_1
pbmi[1] = divs.dp.d(sx.q(*(arg1 + 0x30)), *(arg1 + 0x2c))
*pbmi = 0x28
pbmi[2] = 0xffffffff - arg4
pbmi[3] = 0x200001
__builtin_memset(&pbmi[4], 0, 0x18)
HDC eax_9 = GetDC(hWnd)
HBITMAP eax_10 = CreateDIBSection(eax_9, pbmi, DIB_RGB_COLORS, arg1 + 0x38, nullptr, 0)
*(arg1 + 0x34) = eax_10
HDC var_20_1 = eax_9

if (eax_10 != 0)
    HDC hdc = CreateCompatibleDC(var_20_1)
    *(arg1 + 0x3c) = hdc
    
    if (hdc != 0)
        *(arg1 + 0x40) = SelectObject(hdc, *(arg1 + 0x34))
        ReleaseDC(hWnd, eax_9)
        *(arg1 + 0x44) = hWnd
        *(arg1 + 0x1c) = 1
        j__free(pbmi)
        int32_t eax_13
        eax_13.b = 1
        return eax_13
    
    var_20_1 = eax_9

ReleaseDC(hWnd, var_20_1)
j__free(pbmi)
int32_t eax_11
eax_11.b = 0
return eax_11
