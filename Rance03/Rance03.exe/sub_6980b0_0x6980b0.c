// 函数: sub_6980b0
// 地址: 0x6980b0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

HMENU hmenu = *(arg1 + 4)

if (hmenu == 0)
    int32_t eax
    eax.b = 0
    return eax

int32_t lpmi
_memset(&lpmi, 0, 0x30)
lpmi = 0x30
int32_t var_2c = 0x12
int32_t var_28 = 0
int32_t* ecx

if (arg3[5] u< 0x10)
    ecx = arg3
else
    ecx = *arg3

int32_t var_8 = arg3[4]
uint32_t var_20 = zx.d(arg4)
int32_t* var_c = ecx
BOOL eax_5
eax_5.b = InsertMenuItemA(hmenu, arg2, 1, &lpmi) != 0
return eax_5
