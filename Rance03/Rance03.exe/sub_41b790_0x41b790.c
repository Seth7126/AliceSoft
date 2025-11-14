// 函数: sub_41b790
// 地址: 0x41b790
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void var_16c
int32_t eax_1 = __security_cookie ^ &var_16c
void* var_180 = arg1
sub_41bbb0(arg1 + 0xc)
*(*(arg1 + 0xc) + 0x24) = 1
void* esi = *(arg1 + 0xc)
*(esi + 0x28) = 1
*(esi + 0x30) = 0x9c64
sub_402110(esi + 0x34, 0x6da708, 8)
*(esi + 0x2c) = 0
void* esi_1 = *(arg1 + 0xc)
*(esi_1 + 0x50) = 1
*(esi_1 + 0x58) = 0x9c65
sub_402110(esi_1 + 0x5c, 0x6da700, 4)
*(esi_1 + 0x54) = 1
void* esi_2 = *(arg1 + 0xc)
*(esi_2 + 0x78) = 1
*(esi_2 + 0x80) = 0x9c66
sub_402110(esi_2 + 0x84, 0x6da720, 5)
*(esi_2 + 0x7c) = 2
void* esi_3 = *(arg1 + 0xc)
*(esi_3 + 0xa0) = 1
*(esi_3 + 0xa8) = 0x9c67
sub_402110(esi_3 + 0xac, 0x6da714, 8)
*(esi_3 + 0xa4) = 3
void* esi_4 = *(arg1 + 0xc)
*(esi_4 + 0xc8) = 1
*(esi_4 + 0xd0) = 0x9c69
sub_402110(esi_4 + 0xd4, 0x6da73c, 0x14)
*(esi_4 + 0xcc) = 4
void* esi_5 = *(arg1 + 0xc)
*(esi_5 + 0xf0) = 1
*(esi_5 + 0xf8) = 0x9c6b
sub_402110(esi_5 + 0xfc, 0x6da728, 0x10)
*(esi_5 + 0xf4) = 5
void* esi_6 = *(arg1 + 0xc)
*(esi_6 + 0x118) = 1
*(esi_6 + 0x120) = 0x9c6d
sub_402110(esi_6 + 0x124, 0x6da76c, 0xe)
*(esi_6 + 0x11c) = 6
*(*(arg1 + 0xc) + 0x164) = 1
void* esi_7 = *(arg1 + 0xc)
*(esi_7 + 0x168) = 1
*(esi_7 + 0x170) = 0x9c71
sub_402110(esi_7 + 0x174, 0x6da754, 0x15)
*(esi_7 + 0x16c) = 8
void* esi_8 = *(arg1 + 0xc)
*(esi_8 + 0x190) = 1
*(esi_8 + 0x198) = 0x9c73
sub_402110(esi_8 + 0x19c, 0x6da790, 0x16)
*(esi_8 + 0x194) = 9
var_dc
void* ecx_10 = &var_dc
int32_t eax_6 = *(arg1 + 0xc)
var_e0
void* edx = &var_e0
int32_t iNumButtons_1 = 0
int32_t var_158 = 0
var_e3
void* edi = &var_e3
int32_t i = 0
var_e4
void* ebx_1 = &var_e4
var_e8
void* ebp = &var_e8
struct TBBUTTON buttons
struct TBBUTTON* var_168 = &buttons
int32_t var_118[0xb]
int32_t iNumButtons

do
    int32_t iNumButtons_2 = iNumButtons_1
    
    if (*(i + eax_6 + 0x24) == 0)
        iNumButtons = iNumButtons_1
        
        if (*(i + eax_6) != 0)
            var_168->iBitmap = *(i + eax_6 + 4)
            iNumButtons_2 = iNumButtons_1
            *ebp = *(i + eax_6 + 8)
            *edi = 0
            goto label_41ba17
    else
        var_168->iBitmap = 0
        *ebp = 0
        *edi = 1
    label_41ba17:
        ebp += 0x14
        var_168 = &var_168[1]
        edi += 0x14
        *ebx_1 = 4
        ebx_1 += 0x14
        var_118[iNumButtons_2] = var_158
        iNumButtons = iNumButtons_2 + 1
        *edx = 0
        edx += 0x14
        *ecx_10 = 0
        ecx_10 += 0x14
        iNumButtons_1 = iNumButtons
    
    i += 0x28
    var_158 += 1
while (i s< 0x1b8)

HWND hWnd = CreateToolbarEx(arg2, 0x50000000, 0x7d, 0xb, arg3, 0x7d, &buttons, iNumButtons, 0x10, 
    0xf, 0x10, 0xf, 0x14)
*(arg1 + 4) = hWnd

if (hWnd != 0)
    int32_t dwNewLong = GetWindowLongA(hWnd, 0xfffffff0) | 0x800
    SetWindowLongA(*(arg1 + 4), 0xfffffff0, dwNewLong)
    InvalidateRect(*(arg1 + 4), nullptr, 1)
    hWnd = CreateWindowExA(WS_EX_LEFT, "tooltips_class32", nullptr, WS_ACTIVECAPTION, 0x80000000, 
        0x80000000, 0x80000000, 0x80000000, arg2, nullptr, arg3, nullptr)
    *(arg1 + 8) = hWnd
    
    if (hWnd == 0)
        hWnd.b = 0
    else
        WPARAM wParam = 0
        int32_t var_140_1 = *(arg1 + 4)
        int32_t lParam = 0x30
        HINSTANCE var_128_1 = arg3
        int32_t var_144_1 = 0x10
        
        if (iNumButtons s> 0)
            void* ebp_2 = &var_e8
            
            do
                void lParam_1
                SendMessageA(*(arg1 + 4), 0x41d, wParam, &lParam_1)
                int32_t var_13c_1 = *ebp_2
                void** eax_21 = *(arg1 + 0xc) + var_118[wParam] * 0x28 + 0xc
                
                if (eax_21[5] u>= 0x10)
                    eax_21 = *eax_21
                
                void** var_124_1 = eax_21
                SendMessageA(*(arg1 + 8), 0x404, 0, &lParam)
                wParam += 1
                ebp_2 += 0x14
            while (wParam s< iNumButtons)
        
        SendMessageA(*(arg1 + 4), 0x424, *(arg1 + 8), 0)
        hWnd.b = 1
else
    hWnd.b = 0

sub_69a5bc(eax_1 ^ &var_16c)
return hWnd
