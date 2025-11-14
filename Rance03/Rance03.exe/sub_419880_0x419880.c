// 函数: sub_419880
// 地址: 0x419880
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

(*(*(arg1 + 0x14) + 4))()
int32_t ebp_2 = *(arg1 + 0x7c) + *(arg1 + 0x78) + *(arg1 + 0x74)
HWND hWnd = *(arg1 + 0xc)
sub_697220(arg1 + 0x14)

if (hWnd == 0)
    hWnd = GetDesktopWindow()

*(arg1 + 0x1c) = arg2
*(arg1 + 0x20) = ebp_2
*(arg1 + 0x24) = 0x18
*(arg1 + 0x28) = 3
*(arg1 + 0x2c) = ((arg2 + 5) * 3) & 0xfffffff0
int32_t* pbmi_1
sub_448e90(&pbmi_1, 0x28)
*(arg1 + 0x28)
int32_t* pbmi = pbmi_1
pbmi[1] = divs.dp.d(sx.q(*(arg1 + 0x2c)), *(arg1 + 0x28))
*pbmi = 0x28
pbmi[2] = 0xffffffff - ebp_2
pbmi[3] = 0x180001
__builtin_memset(&pbmi[4], 0, 0x18)
HDC eax_8 = GetDC(hWnd)
HBITMAP eax_9 = CreateDIBSection(eax_8, pbmi, DIB_RGB_COLORS, arg1 + 0x34, nullptr, 0)
*(arg1 + 0x30) = eax_9
HDC var_20_1 = eax_8

if (eax_9 != 0)
    HDC hdc = CreateCompatibleDC(var_20_1)
    *(arg1 + 0x38) = hdc
    
    if (hdc != 0)
        *(arg1 + 0x3c) = SelectObject(hdc, *(arg1 + 0x30))
        ReleaseDC(hWnd, eax_8)
        *(arg1 + 0x40) = hWnd
        *(arg1 + 0x18) = 1
        j__free(pbmi)
        int32_t eax_12
        eax_12.b = 1
        return eax_12
    
    var_20_1 = eax_8

ReleaseDC(hWnd, var_20_1)
j__free(pbmi)
int32_t eax_10
eax_10.b = 0
return eax_10
