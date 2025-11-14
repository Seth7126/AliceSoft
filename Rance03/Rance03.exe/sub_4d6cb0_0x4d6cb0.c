// 函数: sub_4d6cb0
// 地址: 0x4d6cb0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* eax_8 = *(arg1 + 0xc0)

if (eax_8 == *(arg1 + 0xc4))
    return arg1 + 0xd8

void* esi = *eax_8
int32_t eax_1
int32_t edx
edx:eax_1 = muls.dp.d(0x2e8ba2e9, *(esi + 0x14) - *(esi + 0x10))
int32_t edx_1 = edx s>> 3

if ((edx_1 u>> 0x1f) + edx_1 s> arg2 && arg2 s>= 0)
    return *(esi + 0x10) + arg2 * 0x2c + 0x14

return esi + 0x1c
