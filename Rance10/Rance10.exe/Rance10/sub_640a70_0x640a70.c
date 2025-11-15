// 函数: sub_640a70
// 地址: 0x640a70
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* esi = arg1 + 0xc
int32_t ebx = arg2
int32_t ecx_2
int32_t edi

if ((*(*(arg1 + 0xc) + 0x10))() s< ebx)
    edi = arg3
label_640aab:
    sub_6ccf90(esi)
    HWND hWnd = GetDesktopWindow()
    *(esi + 0xc) = ebx
    *(esi + 0x10) = edi
    *(esi + 0x1c) = (ebx + 0xf) & 0xfffffff0
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
    ebx = arg2
else
    int32_t eax_3
    eax_3, ecx_2 = (*(*esi + 0x14))()
    edi = arg3
    
    if (eax_3 s< edi)
        goto label_640aab
int32_t var_24_7 = ecx_2
*(arg1 + 0x40) = ebx
*(arg1 + 0x44) = arg3
sub_63e1f0(esi, ebx, arg3)
int32_t* eax_12
eax_12.b = 1
return eax_12
