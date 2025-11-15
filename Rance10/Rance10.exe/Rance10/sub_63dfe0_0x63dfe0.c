// 函数: sub_63dfe0
// 地址: 0x63dfe0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* esi = arg1 + 0xc
int32_t edi = *(arg1 + 0x48)
int32_t edi_1 = edi * arg3
int32_t ebx_1 = edi * arg2
int32_t eax_1 = (*(*(arg1 + 0xc) + 0x10))()
int32_t eax_3
int32_t ecx_2

if (eax_1 s>= ebx_1)
    eax_3, ecx_2 = (*(*esi + 0x14))()

if (eax_1 s< ebx_1 || eax_3 s< edi_1)
    sub_6ccf90(esi)
    HWND hWnd = GetDesktopWindow()
    *(esi + 0xc) = ebx_1
    *(esi + 0x1c) = (ebx_1 + 0xf) & 0xfffffff0
    *(esi + 0x10) = edi_1
    *(esi + 0x14) = 8
    *(esi + 0x18) = 1
    int32_t* pbmi_1
    sub_431b80(&pbmi_1, 0x428)
    int32_t* pbmi = pbmi_1
    sub_6cd010(esi, pbmi)
    HDC eax_4 = GetDC(hWnd)
    HBITMAP eax_5 = CreateDIBSection(eax_4, pbmi, DIB_RGB_COLORS, esi + 0x24, nullptr, 0)
    *(esi + 0x20) = eax_5
    int32_t eax_6
    
    if (eax_5 == 0)
        ReleaseDC(hWnd, eax_4)
        
        if (pbmi == 0)
            eax_6.b = 0
            return eax_6
        
        int32_t var_4
        sub_403160(pbmi, var_4 - pbmi, 1)
        int32_t eax_9
        eax_9.b = 0
        return eax_9
    
    HDC hdc = CreateCompatibleDC(eax_4)
    *(esi + 0x28) = hdc
    
    if (hdc == 0)
        ReleaseDC(hWnd, eax_4)
        sub_4059a0(&pbmi_1)
        eax_6.b = 0
        return eax_6
    
    *(esi + 0x2c) = SelectObject(hdc, *(esi + 0x20))
    ReleaseDC(hWnd, eax_4)
    *(esi + 0x30) = hWnd
    *(esi + 8) = 1
    ecx_2 = sub_4059a0(&pbmi_1)

int32_t var_24_8 = ecx_2
*(arg1 + 0x40) = ebx_1
*(arg1 + 0x44) = edi_1
sub_63e1f0(esi, ebx_1, edi_1)
int32_t* eax_11
eax_11.b = 1
return eax_11
