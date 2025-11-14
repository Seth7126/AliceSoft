// 函数: sub_6729b0
// 地址: 0x6729b0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

MENUITEMINFOA lpmii
lpmii.cbSize = 0x30
lpmii.fMask = 1
GetMenuItemInfoA(GetMenu(*(arg1 + 8)), 0x9ca4, 0, &lpmii)
lpmii.fState = zx.d(not.b(lpmii.fState.b)) & 8
SetMenuItemInfoA(GetMenu(*(arg1 + 8)), 0x9ca4, 0, &lpmii)
uint32_t result = *(arg1 + 0x5c)
void* ecx = *(result + 0xe0)

if (ecx != 0)
    void* ecx_1 = *(ecx + 0x70)
    
    if (ecx_1 != 0)
        result.b = (lpmii.fState u>> 3).b & 1
        *(ecx_1 + 0x12c) = result.b

return result
