// 函数: sub_42a930
// 地址: 0x42a930
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

(*(arg1[0x21] + 4))()
int32_t ebp_2 = arg1[0x3b] + arg1[0x3a] + arg1[0x39]
HWND hWnd = (**arg1)()
sub_697220(&arg1[0x21])

if (hWnd == 0)
    hWnd = GetDesktopWindow()

arg1[0x23] = arg2
arg1[0x24] = ebp_2
arg1[0x25] = 0x18
arg1[0x26] = 3
arg1[0x27] = (arg2 * 3 + 0xf) & 0xfffffff0
int32_t* pbmi_1
sub_448e90(&pbmi_1, 0x28)
arg1[0x26]
int32_t* pbmi = pbmi_1
pbmi[1] = divs.dp.d(sx.q(arg1[0x27]), arg1[0x26])
*pbmi = 0x28
pbmi[2] = 0xffffffff - ebp_2
pbmi[3] = 0x180001
__builtin_memset(&pbmi[4], 0, 0x18)
HDC eax_12 = GetDC(hWnd)
HBITMAP eax_13 = CreateDIBSection(eax_12, pbmi, DIB_RGB_COLORS, &arg1[0x29], nullptr, 0)
arg1[0x28] = eax_13
HDC var_20_1 = eax_12

if (eax_13 != 0)
    HDC hdc = CreateCompatibleDC(var_20_1)
    arg1[0x2a] = hdc
    
    if (hdc != 0)
        arg1[0x2b] = SelectObject(hdc, arg1[0x28])
        ReleaseDC(hWnd, eax_12)
        arg1[0x2c] = hWnd
        arg1[0x22].b = 1
        j__free(pbmi)
        int32_t eax_16
        eax_16.b = 1
        return eax_16
    
    var_20_1 = eax_12

ReleaseDC(hWnd, var_20_1)
j__free(pbmi)
int32_t eax_14
eax_14.b = 0
return eax_14
