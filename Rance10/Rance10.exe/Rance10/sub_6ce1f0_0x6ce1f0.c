// 函数: sub_6ce1f0
// 地址: 0x6ce1f0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

HMENU hmenu = *(arg1 + 4)

if (hmenu == 0)
    int32_t eax
    eax.b = 0
    return eax

int32_t lpmi
_memset(&lpmi, 0, 0x30)
lpmi = 0x30
int32_t var_34 = 0x14
int32_t var_30 = 0
int32_t* ecx

if (arg2[5] u< 0x10)
    ecx = arg2
else
    ecx = *arg2

int32_t var_10 = arg2[4]
int32_t var_24 = arg3
int32_t* var_14 = ecx
BOOL eax_4
eax_4.b = InsertMenuItemA(hmenu, 2, 1, &lpmi) != 0
return eax_4
