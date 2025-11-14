// 函数: sub_681340
// 地址: 0x681340
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_4 = arg1
**(arg1 + 0x54) = arg1
void** eax
eax.b = *(arg1 + 0x3c)
*(arg1 + 0x3d) = eax.b
*(arg1 + 0x3c) = 1
int32_t eax_1 = sub_671480(arg1 + 0x5c, 0, *(arg1 + 0x40), *(arg1 + 0x44))
*(arg1 + 0x58) = eax_1

if (eax_1 != 0)
    if (eax_1 == 1)
        void* edi_3 = *(arg1 + 0xe0)
        HWND hWnd_2 = *(edi_3 + 8)
        
        if (hWnd_2 != 0)
            SetWindowPos(hWnd_2, nullptr, 0, 0, 0, 0, 0x47)
            *(edi_3 + 0x28) = 1
        
        void* edi_4 = *(arg1 + 0xdc)
        HWND hWnd_3 = *(edi_4 + 8)
        
        if (hWnd_3 != 0)
            SetWindowPos(hWnd_3, nullptr, 0, 0, 0, 0, 0x87)
            *(edi_4 + 0x28) = 0
        
        *(*(arg1 + 0xe0) + 0x64) = 1
    
    return 0

void* edi_1 = *(arg1 + 0xdc)
HWND hWnd = *(edi_1 + 8)

if (hWnd != 0)
    SetWindowPos(hWnd, nullptr, 0, 0, 0, 0, 0x47)
    *(edi_1 + 0x28) = 1

void* edi_2 = *(arg1 + 0xe0)
HWND hWnd_1 = *(edi_2 + 8)

if (hWnd_1 != 0)
    SetWindowPos(hWnd_1, nullptr, 0, 0, 0, 0, 0x87)
    *(edi_2 + 0x28) = 0

void* eax_2 = *(arg1 + 0xdc)
*(eax_2 + 0x74) = 1
*(eax_2 + 0x6c) = *(eax_2 + 0x68)
sub_4a6210(data_75d4fc + 0x178, eax_2 + 0x68)
return 0
