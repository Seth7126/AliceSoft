// 函数: sub_698070
// 地址: 0x698070
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

HMENU hMenu = *(arg1 + 4)

if (hMenu != 0)
    if (*(arg1 + 8) != 0)
        DestroyMenu(hMenu)
    
    *(arg1 + 4) = 0

*(arg1 + 8) = 1
HMENU result = CreatePopupMenu()
*(arg1 + 4) = result
result.b = result != 0
return result
