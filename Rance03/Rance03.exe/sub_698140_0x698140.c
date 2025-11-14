// 函数: sub_698140
// 地址: 0x698140
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

HMENU hmenu = *(arg1 + 4)

if (hmenu == 0)
    int32_t eax
    eax.b = 0
    return eax

int32_t lpmi
_memset(&lpmi, 0, 0x30)
lpmi = 0x30
int32_t var_2c = 0x14
int32_t var_28 = 0
int32_t* ecx

if (arg2[5] u< 0x10)
    ecx = arg2
else
    ecx = *arg2

int32_t var_8 = arg2[4]
int32_t var_1c = arg3
int32_t* var_c = ecx
BOOL eax_4
eax_4.b = InsertMenuItemA(hmenu, 2, 1, &lpmi) != 0
return eax_4
