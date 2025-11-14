// 函数: sub_64bc00
// 地址: 0x64bc00
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if ((*(*(arg1 + 0xc) + 0x10))() s>= arg2)
    int32_t eax
    eax.b = 1
    return eax

sub_697220(arg1 + 0xc)
HWND hWnd = GetDesktopWindow()
*(arg1 + 0x14) = arg2
*(arg1 + 0x18) = arg2
*(arg1 + 0x1c) = 0x18
*(arg1 + 0x24) = ((arg2 + 5) * 3) & 0xfffffff0
*(arg1 + 0x20) = 3
int32_t* pbmi_1
sub_448e90(&pbmi_1, 0x28)
*(arg1 + 0x20)
int32_t* pbmi = pbmi_1
pbmi[1] = divs.dp.d(sx.q(*(arg1 + 0x24)), *(arg1 + 0x20))
*pbmi = 0x28
pbmi[2] = 0xffffffff - arg2
pbmi[3] = 0x180001
__builtin_memset(&pbmi[4], 0, 0x18)
HDC eax_5 = GetDC(hWnd)
HBITMAP eax_6 = CreateDIBSection(eax_5, pbmi, DIB_RGB_COLORS, arg1 + 0x2c, nullptr, 0)
*(arg1 + 0x28) = eax_6
HDC var_20_1 = eax_5

if (eax_6 != 0)
    HDC hdc = CreateCompatibleDC(var_20_1)
    *(arg1 + 0x30) = hdc
    
    if (hdc != 0)
        *(arg1 + 0x34) = SelectObject(hdc, *(arg1 + 0x28))
        ReleaseDC(hWnd, eax_5)
        *(arg1 + 0x38) = hWnd
        *(arg1 + 0x10) = 1
        j__free(pbmi)
        int32_t eax_9
        eax_9.b = 1
        return eax_9
    
    var_20_1 = eax_5

ReleaseDC(hWnd, var_20_1)
j__free(pbmi)
int32_t eax_7
eax_7.b = 0
return eax_7
