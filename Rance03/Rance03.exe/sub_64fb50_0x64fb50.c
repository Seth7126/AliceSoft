// 函数: sub_64fb50
// 地址: 0x64fb50
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

(*(*(arg1 + 0xc) + 4))()
int32_t ebp_2 = *(arg1 + 0x74) + *(arg1 + 0x70) + *(arg1 + 0x6c)
HWND hWnd = **(arg1 + 8)
sub_697220(arg1 + 0xc)

if (hWnd == 0)
    hWnd = GetDesktopWindow()

*(arg1 + 0x14) = arg2
*(arg1 + 0x18) = ebp_2
*(arg1 + 0x1c) = 0x18
*(arg1 + 0x20) = 3
*(arg1 + 0x24) = ((arg2 + 5) * 3) & 0xfffffff0
int32_t* pbmi_1
sub_448e90(&pbmi_1, 0x28)
*(arg1 + 0x20)
int32_t* pbmi = pbmi_1
pbmi[1] = divs.dp.d(sx.q(*(arg1 + 0x24)), *(arg1 + 0x20))
*pbmi = 0x28
pbmi[2] = 0xffffffff - ebp_2
pbmi[3] = 0x180001
__builtin_memset(&pbmi[4], 0, 0x18)
HDC eax_9 = GetDC(hWnd)
HBITMAP eax_10 = CreateDIBSection(eax_9, pbmi, DIB_RGB_COLORS, arg1 + 0x2c, nullptr, 0)
*(arg1 + 0x28) = eax_10
HDC var_20_1 = eax_9

if (eax_10 != 0)
    HDC hdc = CreateCompatibleDC(var_20_1)
    *(arg1 + 0x30) = hdc
    
    if (hdc != 0)
        *(arg1 + 0x34) = SelectObject(hdc, *(arg1 + 0x28))
        ReleaseDC(hWnd, eax_9)
        *(arg1 + 0x38) = hWnd
        *(arg1 + 0x10) = 1
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
