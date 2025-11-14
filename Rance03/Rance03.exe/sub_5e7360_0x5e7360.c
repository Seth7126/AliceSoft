// 函数: sub_5e7360
// 地址: 0x5e7360
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

enum MESSAGEBOX_RESULT eax_2

if (*(arg1 + 0x68) != 0)
    void** lpCaption = *(arg1 + 0xc) + 0x48
    
    if (lpCaption[5] u>= 0x10)
        lpCaption = *lpCaption
    
    eax_2 = MessageBoxA(arg2, 0x6eb63c, lpCaption, 0x24)

if (*(arg1 + 0x68) == 0 || eax_2 == IDYES)
    (**(arg1 + 4))()

return 0
