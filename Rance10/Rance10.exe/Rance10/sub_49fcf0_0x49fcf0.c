// 函数: sub_49fcf0
// 地址: 0x49fcf0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

enum MESSAGEBOX_RESULT eax

if (*(arg1 + 0x87) != 0)
    void** lpCaption = *(arg1 + 0x10) + 0x48
    
    if (lpCaption[5] u>= 0x10)
        lpCaption = *lpCaption
    
    eax = MessageBoxA(arg2, 0x761098, lpCaption, 0x24)

if (*(arg1 + 0x87) != 0 && eax != IDYES)
    return 

void* esi_1 = *(arg1 + 0x148)

if (esi_1 != 0)
    if (*(esi_1 + 0x3e) != 0)
        if (*(esi_1 + 0x3c) == 0 && *(esi_1 + 0x25) == 0 && *(esi_1 + 0x3f) == 0)
            ShowCursor(1)
            *(esi_1 + 0x3f) = 1
        
        sub_47e590(esi_1)
        *(esi_1 + 0x3e) = 0
    
    void* esi_2 = *(arg1 + 0x148)
    
    if (*(esi_2 + 0x3f) == 0)
        ShowCursor(1)
        *(esi_2 + 0x3f) = 1

int32_t* ecx_1 = *(arg1 + 0x2b8)

if (ecx_1 != 0)
    (*(*ecx_1 + 0xc))()
