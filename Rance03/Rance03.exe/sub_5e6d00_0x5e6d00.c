// 函数: sub_5e6d00
// 地址: 0x5e6d00
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (*(arg1 + 0x67) != 0)
    void** lpCaption = *(arg1 + 0xc) + 0x48
    
    if (lpCaption[5] u>= 0x10)
        lpCaption = *lpCaption
    
    enum MESSAGEBOX_RESULT result = MessageBoxA(arg2, 0x6eb680, lpCaption, 0x24)
    
    if (result != IDYES)
        return result

void* esi_1 = *(arg1 + 0x114)

if (esi_1 != 0)
    if (*(esi_1 + 0x3a) != 0)
        if (*(esi_1 + 0x38) == 0 && *(esi_1 + 0x21) == 0 && *(esi_1 + 0x3b) == 0)
            ShowCursor(1)
            *(esi_1 + 0x3b) = 1
        
        sub_46daa0(esi_1)
        *(esi_1 + 0x3a) = 0
    
    void* esi_2 = *(arg1 + 0x114)
    
    if (*(esi_2 + 0x3b) == 0)
        ShowCursor(1)
        *(esi_2 + 0x3b) = 1

return (**(arg1 + 0x248))()
