// 函数: sub_6ce160
// 地址: 0x6ce160
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

HMENU hmenu = *(arg1 + 4)

if (hmenu == 0)
    int32_t eax
    eax.b = 0
    return eax

int32_t lpmi
_memset(&lpmi, 0, 0x30)
lpmi = 0x30
int32_t var_34 = 0x12
int32_t var_30 = 0
int32_t* ecx

if (arg3[5] u< 0x10)
    ecx = arg3
else
    ecx = *arg3

int32_t var_10 = arg3[4]
uint32_t var_28 = zx.d(arg4)
int32_t* var_14 = ecx
BOOL eax_4
eax_4.b = InsertMenuItemA(hmenu, arg2, 1, &lpmi) != 0
return eax_4
