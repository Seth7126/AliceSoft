// 函数: sub_650bd0
// 地址: 0x650bd0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

uint32_t eax = zx.d(arg3.w)
uint32_t ebp_1 = arg3 u>> 0x10
uint32_t esi

if (arg1[3] != eax || arg1[4] != ebp_1)
    HWND hWnd = arg2
    sub_697220(&arg1[8])
    
    if (hWnd == 0)
        hWnd = GetDesktopWindow()
    
    arg1[0xa] = eax
    arg1[0xb] = ebp_1
    arg1[0xc] = 0x20
    arg1[0xd] = 4
    arg1[0xe] = ((eax << 2) + 0xf) & 0xfffffff0
    int32_t* pbmi
    sub_448e90(&pbmi, 0x28)
    arg1[0xd]
    int32_t* pbmi_2 = pbmi
    pbmi_2[1] = divs.dp.d(sx.q(arg1[0xe]), arg1[0xd])
    *pbmi_2 = 0x28
    pbmi_2[2] = 0xffffffff - ebp_1
    pbmi_2[3] = 0x200001
    __builtin_memset(&pbmi_2[4], 0, 0x18)
    HDC eax_9 = GetDC(hWnd)
    HBITMAP eax_11 = CreateDIBSection(eax_9, pbmi, DIB_RGB_COLORS, &arg1[0x10], nullptr, 0)
    arg1[0xf] = eax_11
    HDC var_24_2 = eax_9
    
    if (eax_11 == 0)
        goto label_650cc9
    
    HDC hdc = CreateCompatibleDC(var_24_2)
    arg1[0x11] = hdc
    
    if (hdc == 0)
        var_24_2 = eax_9
    label_650cc9:
        ReleaseDC(hWnd, var_24_2)
        j__free(pbmi)
        return 0
    
    arg1[0x12] = SelectObject(hdc, arg1[0xf])
    ReleaseDC(hWnd, eax_9)
    int32_t* pbmi_1 = pbmi
    arg1[0x13] = hWnd
    arg1[9].b = 1
    j__free(pbmi_1)
    esi = eax
    arg1[3] = esi
    arg1[4] = ebp_1
else
    esi = eax

int32_t eax_15
int32_t edx_3
edx_3:eax_15 = sx.q(arg1[5])
sub_650f00(arg1, divs.dp.d(sx.q(ebp_1), arg1[7] + arg1[5]))
sub_651040(arg1, divs.dp.d(sx.q(esi), (eax_15 - edx_3) s>> 1))
(*(*arg1 + 0x3c))()
return 0
