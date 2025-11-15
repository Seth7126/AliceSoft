// 函数: sub_67de40
// 地址: 0x67de40
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

HWND hWnd = arg2
sub_6ccf90(arg1 + 4)

if (hWnd == 0)
    hWnd = GetDesktopWindow()

*(arg1 + 0x14) = arg4
*(arg1 + 0x10) = arg3
*(arg1 + 0x18) = 0x20
*(arg1 + 0x20) = ((arg3 << 2) + 0xf) & 0xfffffff0
*(arg1 + 0x1c) = 4
int32_t* pbmi_1
sub_431b80(&pbmi_1, 0x28)
int32_t* pbmi = pbmi_1
sub_6cd010(arg1 + 4, pbmi)
HDC eax_2 = GetDC(hWnd)
HBITMAP eax_3 = CreateDIBSection(eax_2, pbmi, DIB_RGB_COLORS, arg1 + 0x28, nullptr, 0)
*(arg1 + 0x24) = eax_3

if (eax_3 != 0)
    HDC hdc = CreateCompatibleDC(eax_2)
    *(arg1 + 0x2c) = hdc
    
    if (hdc != 0)
        *(arg1 + 0x30) = SelectObject(hdc, *(arg1 + 0x24))
        ReleaseDC(hWnd, eax_2)
        *(arg1 + 0x34) = hWnd
        *(arg1 + 0xc) = 1
        sub_4059a0(&pbmi_1)
        int32_t eax_9
        eax_9.b = 1
        return eax_9
    
    ReleaseDC(hWnd, eax_2)
    sub_4059a0(&pbmi_1)
else
    ReleaseDC(hWnd, eax_2)
    
    if (pbmi != 0)
        int32_t var_4
        sub_403160(pbmi, var_4 - pbmi, 1)
        int32_t eax_7
        eax_7.b = 0
        return eax_7

int32_t eax_4
eax_4.b = 0
return eax_4
