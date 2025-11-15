// 函数: sub_6ce3b0
// 地址: 0x6ce3b0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

HMENU hmenu = *(arg1 + 4)

if (hmenu != 0)
    int32_t lpmii
    _memset(&lpmii, 0, 0x30)
    lpmii = 0x30
    int32_t var_2c_1 = 0x101
    int32_t var_28_1 = 0x200
    
    if (GetMenuItemInfoA(hmenu, arg2, 0, &lpmii) != 0)
        int32_t var_24
        int32_t eax_1
        eax_1.b = var_24 == 8
        return eax_1

BOOL eax
eax.b = 0
return eax
