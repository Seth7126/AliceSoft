// 函数: sub_6ce270
// 地址: 0x6ce270
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

HMENU hmenu = *(arg1 + 4)

if (hmenu == 0)
    int32_t eax
    eax.b = 0
    return eax

int32_t lpmi
_memset(&lpmi, 0, 0x30)
lpmi = 0x30
int32_t var_34 = 0x10
int32_t var_30 = 0x800
BOOL eax_1
eax_1.b = InsertMenuItemA(hmenu, arg2, 1, &lpmi) != 0
return eax_1
