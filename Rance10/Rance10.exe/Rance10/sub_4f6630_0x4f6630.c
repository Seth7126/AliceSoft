// 函数: sub_4f6630
// 地址: 0x4f6630
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* ecx_4 = data_7fcba4
int32_t* eax = *(ecx_4 + 0x100)

if (eax == *(ecx_4 + 0x104))
    return 0

void* esi = *eax
int32_t eax_2
int32_t edx
edx:eax_2 = muls.dp.d(0x2e8ba2e9, *(esi + 0x14) - *(esi + 0x10))
int32_t edx_1 = edx s>> 3

if ((edx_1 u>> 0x1f) + edx_1 s> arg1 && arg1 s>= 0)
    return *(arg1 * 0x2c + *(esi + 0x10) + 8)

return 0
