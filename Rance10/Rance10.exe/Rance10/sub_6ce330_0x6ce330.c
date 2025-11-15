// 函数: sub_6ce330
// 地址: 0x6ce330
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

HMENU hmenu = *(arg1 + 4)

if (hmenu == 0)
    int32_t eax
    eax.b = 0
    return eax

int32_t lpmii
_memset(&lpmii, 0, 0x30)
lpmii = 0x30
int32_t eax_1 = 0
int32_t var_34 = 0x101
int32_t var_30 = 0x200

if (arg3 != 0)
    eax_1 = 8

int32_t var_2c = eax_1
BOOL eax_2
eax_2.b = SetMenuItemInfoA(hmenu, arg2, 0, &lpmii) != 0
return eax_2
