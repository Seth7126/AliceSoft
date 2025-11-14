// 函数: sub_5eefc0
// 地址: 0x5eefc0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t edi = *(arg1 + 0x44)
void* esi = arg1 + 0xc
int32_t ebx_1 = edi * arg2
int32_t edi_1 = edi * arg3
int32_t eax_1 = (*(*(arg1 + 0xc) + 0x10))()
int32_t eax_3
int32_t ecx_2

if (eax_1 s>= ebx_1)
    eax_3, ecx_2 = (*(*esi + 0x14))()

if (eax_1 s< ebx_1 || eax_3 s< edi_1)
    sub_697220(esi)
    HWND hWnd = GetDesktopWindow()
    *(esi + 8) = ebx_1
    *(esi + 0xc) = edi_1
    *(esi + 0x18) = (ebx_1 + 0xf) & 0xfffffff0
    *(esi + 0x10) = 8
    *(esi + 0x14) = 1
    int32_t* pbmi_1
    sub_448e90(&pbmi_1, 0x428)
    *(esi + 0x14)
    int32_t* pbmi = pbmi_1
    pbmi[1] = divs.dp.d(sx.q(*(esi + 0x18)), *(esi + 0x14))
    *pbmi = 0x28
    pbmi[2] = 0xffffffff - edi_1
    int32_t i = 0
    pbmi[3] = 0x80001
    void* eax_8 = pbmi + 0x29
    __builtin_memset(&pbmi[4], 0, 0x18)
    
    do
        *(eax_8 + 1) = i.b
        eax_8 += 4
        *(eax_8 - 4) = i.b
        *(eax_8 - 5) = i.b
        i += 1
        *(eax_8 - 2) = 0
    while (i s< 0x100)
    
    HDC eax_9 = GetDC(hWnd)
    HBITMAP eax_10 = CreateDIBSection(eax_9, pbmi, DIB_RGB_COLORS, esi + 0x20, nullptr, 0)
    *(esi + 0x1c) = eax_10
    HDC var_28_2 = eax_9
    
    if (eax_10 == 0)
        goto label_5ef0df
    
    HDC hdc = CreateCompatibleDC(var_28_2)
    *(esi + 0x24) = hdc
    
    if (hdc == 0)
        var_28_2 = eax_9
    label_5ef0df:
        ReleaseDC(hWnd, var_28_2)
        j__free(pbmi)
        int32_t eax_11
        eax_11.b = 0
        return eax_11
    
    *(esi + 0x28) = SelectObject(hdc, *(esi + 0x1c))
    ReleaseDC(hWnd, eax_9)
    *(esi + 0x2c) = hWnd
    *(esi + 4) = 1
    ecx_2 = j__free(pbmi)

int32_t var_28_7 = ecx_2
*(arg1 + 0x3c) = ebx_1
*(arg1 + 0x40) = edi_1
sub_5ef200(esi, ebx_1, edi_1)
int32_t* eax_13
eax_13.b = 1
return eax_13
