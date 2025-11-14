// 函数: sub_404e00
// 地址: 0x404e00
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

LPARAM lParam

if (arg2 == 0)
    HMENU hMenu_10 = *(*(arg1 + 8) + 0x80)
    
    if (hMenu_10 != 0)
        EnableMenuItem(hMenu_10, 0x9c64, MF_BYCOMMAND)
    
    SendMessageA(*(arg1 + 0x368), 0x401, 0x9c64, 1)
    HMENU hMenu_11 = *(*(arg1 + 8) + 0x80)
    
    if (hMenu_11 != 0)
        EnableMenuItem(hMenu_11, 0x9c65, 0x3)
    
    SendMessageA(*(arg1 + 0x368), 0x401, 0x9c65, 0)
    HMENU hMenu_12 = *(*(arg1 + 8) + 0x80)
    
    if (hMenu_12 != 0)
        EnableMenuItem(hMenu_12, 0x9c66, 0x3)
    
    SendMessageA(*(arg1 + 0x368), 0x401, 0x9c66, 0)
    HMENU hMenu_13 = *(*(arg1 + 8) + 0x80)
    
    if (hMenu_13 != 0)
        EnableMenuItem(hMenu_13, 0x9c67, 0x3)
    
    SendMessageA(*(arg1 + 0x368), 0x401, 0x9c67, 0)
    HMENU hMenu_14 = *(*(arg1 + 8) + 0x80)
    
    if (hMenu_14 != 0)
        EnableMenuItem(hMenu_14, 0x9c69, 0x3)
    
    SendMessageA(*(arg1 + 0x368), 0x401, 0x9c69, 0)
    HMENU hMenu_15 = *(*(arg1 + 8) + 0x80)
    
    if (hMenu_15 != 0)
        EnableMenuItem(hMenu_15, 0x9c6b, 0x3)
    
    SendMessageA(*(arg1 + 0x368), 0x401, 0x9c6b, 0)
    HMENU hMenu_16 = *(*(arg1 + 8) + 0x80)
    
    if (hMenu_16 != 0)
        EnableMenuItem(hMenu_16, 0x9c6d, 0x3)
    
    SendMessageA(*(arg1 + 0x368), 0x401, 0x9c6d, 0)
    HMENU hMenu_17 = *(*(arg1 + 8) + 0x80)
    
    if (hMenu_17 != 0)
        EnableMenuItem(hMenu_17, 0x9c6f, 0x3)
    
    SendMessageA(*(arg1 + 0x368), 0x401, 0x9c6f, 0)
    HMENU hMenu_18 = *(*(arg1 + 8) + 0x80)
    
    if (hMenu_18 != 0)
        EnableMenuItem(hMenu_18, 0x9c71, 0x3)
    
    SendMessageA(*(arg1 + 0x368), 0x401, 0x9c71, 0)
    HMENU hMenu_19 = *(*(arg1 + 8) + 0x80)
    
    if (hMenu_19 != 0)
        EnableMenuItem(hMenu_19, 0x9c73, 0x3)
    
    lParam = 0
else
    if (arg2 != 1)
        return arg2 - 1
    
    HMENU hMenu = *(*(arg1 + 8) + 0x80)
    
    if (hMenu != 0)
        EnableMenuItem(hMenu, 0x9c64, 0x3)
    
    SendMessageA(*(arg1 + 0x368), 0x401, 0x9c64, 0)
    HMENU hMenu_1 = *(*(arg1 + 8) + 0x80)
    
    if (hMenu_1 != 0)
        EnableMenuItem(hMenu_1, 0x9c65, MF_BYCOMMAND)
    
    SendMessageA(*(arg1 + 0x368), 0x401, 0x9c65, 1)
    HMENU hMenu_2 = *(*(arg1 + 8) + 0x80)
    
    if (hMenu_2 != 0)
        EnableMenuItem(hMenu_2, 0x9c66, MF_BYCOMMAND)
    
    SendMessageA(*(arg1 + 0x368), 0x401, 0x9c66, 1)
    HMENU hMenu_3 = *(*(arg1 + 8) + 0x80)
    
    if (hMenu_3 != 0)
        EnableMenuItem(hMenu_3, 0x9c67, MF_BYCOMMAND)
    
    SendMessageA(*(arg1 + 0x368), 0x401, 0x9c67, 1)
    HMENU hMenu_4 = *(*(arg1 + 8) + 0x80)
    
    if (hMenu_4 != 0)
        EnableMenuItem(hMenu_4, 0x9c69, MF_BYCOMMAND)
    
    SendMessageA(*(arg1 + 0x368), 0x401, 0x9c69, 1)
    HMENU hMenu_5 = *(*(arg1 + 8) + 0x80)
    
    if (hMenu_5 != 0)
        EnableMenuItem(hMenu_5, 0x9c6b, MF_BYCOMMAND)
    
    SendMessageA(*(arg1 + 0x368), 0x401, 0x9c6b, 1)
    HMENU hMenu_6 = *(*(arg1 + 8) + 0x80)
    
    if (hMenu_6 != 0)
        EnableMenuItem(hMenu_6, 0x9c6d, MF_BYCOMMAND)
    
    SendMessageA(*(arg1 + 0x368), 0x401, 0x9c6d, 1)
    HMENU hMenu_7 = *(*(arg1 + 8) + 0x80)
    
    if (hMenu_7 != 0)
        EnableMenuItem(hMenu_7, 0x9c6f, MF_BYCOMMAND)
    
    SendMessageA(*(arg1 + 0x368), 0x401, 0x9c6f, 1)
    HMENU hMenu_8 = *(*(arg1 + 8) + 0x80)
    
    if (hMenu_8 != 0)
        EnableMenuItem(hMenu_8, 0x9c71, MF_BYCOMMAND)
    
    SendMessageA(*(arg1 + 0x368), 0x401, 0x9c71, 1)
    HMENU hMenu_9 = *(*(arg1 + 8) + 0x80)
    
    if (hMenu_9 != 0)
        EnableMenuItem(hMenu_9, 0x9c73, MF_BYCOMMAND)
    
    lParam = 1

return SendMessageA(*(arg1 + 0x368), 0x401, 0x9c73, lParam)
