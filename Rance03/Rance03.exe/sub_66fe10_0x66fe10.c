// 函数: sub_66fe10
// 地址: 0x66fe10
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

sub_6703b0()
void* edi = *(arg1 + 0x74)

if (edi != 0)
    HWND hWnd = *(edi + 8)
    
    if (hWnd != 0 && *(edi + 0xc) != 0)
        DestroyWindow(hWnd)
        void* eax_1 = *(edi + 4)
        *(edi + 8) = 0
        
        if (UnregisterClassA(*(eax_1 + 0x28), *(eax_1 + 0x14)) != 0)
            *(edi + 0xc) = 0
    
    int32_t* ecx = *(arg1 + 0x74)
    
    if (ecx != 0)
        (*(*ecx + 4))(1)
    
    *(arg1 + 0x74) = 0

void* edi_1 = *(arg1 + 0x70)

if (edi_1 != 0)
    HWND hWnd_1 = *(edi_1 + 8)
    
    if (hWnd_1 != 0 && *(edi_1 + 0xc) != 0)
        DestroyWindow(hWnd_1)
        void* eax_4 = *(edi_1 + 4)
        *(edi_1 + 8) = 0
        
        if (UnregisterClassA(*(eax_4 + 0x28), *(eax_4 + 0x14)) != 0)
            *(edi_1 + 0xc) = 0
    
    int32_t* ecx_1 = *(arg1 + 0x70)
    
    if (ecx_1 != 0)
        (*(*ecx_1 + 4))(1)
    
    *(arg1 + 0x70) = 0

int32_t* ecx_2 = *(arg1 + 0x6c)

if (ecx_2 != 0)
    (**ecx_2)(1)
    *(arg1 + 0x6c) = 0

HWND hWnd_2 = *(arg1 + 8)

if (hWnd_2 != 0 && *(arg1 + 0xc) != 0)
    DestroyWindow(hWnd_2)
    void* eax_8 = *(arg1 + 4)
    *(arg1 + 8) = 0
    
    if (UnregisterClassA(*(eax_8 + 0x28), *(eax_8 + 0x14)) != 0)
        *(arg1 + 0xc) = 0

return 0
