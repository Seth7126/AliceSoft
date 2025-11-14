// 函数: sub_6958c0
// 地址: 0x6958c0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

uint32_t ebx = zx.d(arg3.w)
uint32_t ebp_1 = arg3 u>> 0x10

if (ebx s> 0 && ebp_1 s> 0)
    HWND hWnd = arg2
    sub_697220(arg1 + 0x30)
    
    if (hWnd == 0)
        hWnd = GetDesktopWindow()
    
    *(arg1 + 0x38) = ebx
    *(arg1 + 0x3c) = ebp_1
    *(arg1 + 0x48) = ((ebx << 2) + 0xf) & 0xfffffff0
    *(arg1 + 0x40) = 0x20
    *(arg1 + 0x44) = 4
    int32_t* pbmi_1
    sub_448e90(&pbmi_1, 0x28)
    *(arg1 + 0x44)
    int32_t* pbmi = pbmi_1
    pbmi[1] = divs.dp.d(sx.q(*(arg1 + 0x48)), *(arg1 + 0x44))
    *pbmi = 0x28
    pbmi[2] = 0xffffffff - ebp_1
    pbmi[3] = 0x200001
    __builtin_memset(&pbmi[4], 0, 0x18)
    HDC eax_6 = GetDC(hWnd)
    HBITMAP eax_7 = CreateDIBSection(eax_6, pbmi, DIB_RGB_COLORS, arg1 + 0x50, nullptr, 0)
    *(arg1 + 0x4c) = eax_7
    HDC var_24_2 = eax_6
    
    if (eax_7 == 0)
        goto label_6959ac
    
    HDC hdc = CreateCompatibleDC(var_24_2)
    *(arg1 + 0x54) = hdc
    
    if (hdc == 0)
        var_24_2 = eax_6
    label_6959ac:
        ReleaseDC(hWnd, var_24_2)
        j__free(pbmi)
        *(arg1 + 0x7c) = 1
        return 0
    
    *(arg1 + 0x58) = SelectObject(hdc, *(arg1 + 0x4c))
    ReleaseDC(hWnd, eax_6)
    *(arg1 + 0x5c) = hWnd
    *(arg1 + 0x34) = 1
    j__free(pbmi)

return 0
