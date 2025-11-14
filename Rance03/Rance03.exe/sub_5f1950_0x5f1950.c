// 函数: sub_5f1950
// 地址: 0x5f1950
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* esi = arg1 + 0xc
int32_t edi = arg2
int32_t ecx_2
int32_t ebx

if ((*(*(arg1 + 0xc) + 0x10))() s< edi)
    ebx = arg3
label_5f198b:
    sub_697220(esi)
    HWND hWnd = GetDesktopWindow()
    *(esi + 8) = edi
    *(esi + 0xc) = ebx
    *(esi + 0x18) = (edi + 0xf) & 0xfffffff0
    *(esi + 0x10) = 8
    *(esi + 0x14) = 1
    int32_t* pbmi_1
    sub_448e90(&pbmi_1, 0x428)
    *(esi + 0x14)
    int32_t* pbmi = pbmi_1
    pbmi[1] = divs.dp.d(sx.q(*(esi + 0x18)), *(esi + 0x14))
    *pbmi = 0x28
    pbmi[2] = 0xffffffff - ebx
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
    HDC var_24_2 = eax_9
    
    if (eax_10 == 0)
        goto label_5f1a60
    
    HDC hdc = CreateCompatibleDC(var_24_2)
    *(esi + 0x24) = hdc
    
    if (hdc == 0)
        var_24_2 = eax_9
    label_5f1a60:
        ReleaseDC(hWnd, var_24_2)
        j__free(pbmi)
        int32_t eax_11
        eax_11.b = 0
        return eax_11
    
    *(esi + 0x28) = SelectObject(hdc, *(esi + 0x1c))
    ReleaseDC(hWnd, eax_9)
    *(esi + 0x2c) = hWnd
    *(esi + 4) = 1
    ecx_2 = j__free(pbmi)
    ebx = arg3
    edi = arg2
else
    int32_t eax_3
    eax_3, ecx_2 = (*(*esi + 0x14))()
    ebx = arg3
    
    if (eax_3 s< ebx)
        goto label_5f198b

int32_t var_24_7 = ecx_2
*(arg1 + 0x3c) = edi
*(arg1 + 0x40) = ebx
sub_5ef200(esi, edi, ebx)
int32_t* eax_13
eax_13.b = 1
return eax_13
