// 函数: sub_672b20
// 地址: 0x672b20
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

MENUITEMINFOA lpmii
lpmii.cbSize = 0x30
lpmii.fMask = 1
GetMenuItemInfoA(GetMenu(*(arg1 + 8)), 0x9ca5, 0, &lpmii)
lpmii.fState = zx.d(not.b(lpmii.fState.b)) & 8
SetMenuItemInfoA(GetMenu(*(arg1 + 8)), 0x9ca5, 0, &lpmii)
uint32_t result = *(arg1 + 0x5c)
void* ecx = *(result + 0xdc)

if (ecx != 0)
    void* ecx_1 = *(ecx + 0x5c)
    
    if (ecx_1 != 0)
        result.b = (lpmii.fState u>> 3).b & 1
        *(ecx_1 + 0x2c0) = result.b

return result
