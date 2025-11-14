// 函数: sub_5e5fb0
// 地址: 0x5e5fb0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (*(arg1 + 0x3c) == 0)
    HMENU eax_1 = LoadMenuA(*(arg1 + 0x10), 0x65)
    *(arg1 + 0x228) = eax_1
    sub_5e58d0(arg1, eax_1)
    SetMenu(arg2, *(arg1 + 0x228))
    
    if (*(arg1 + 0x3c) == 0)
        HMENU hMenu = GetSystemMenu(arg2, 0)
        InsertMenuA(hMenu, 0, 0xc00, 0, nullptr)
        InsertMenuA(hMenu, 0, MF_BYPOSITION, 0x9cb0, 0x6eb5fc)

return 0
