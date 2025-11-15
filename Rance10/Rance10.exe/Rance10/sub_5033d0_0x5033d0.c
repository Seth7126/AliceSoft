// 函数: sub_5033d0
// 地址: 0x5033d0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* eax_7 = *(arg1 + 4)

if (eax_7 == *(arg1 + 8))
    return 0x75d21b

void* esi = *eax_7
int32_t eax_1
int32_t edx
edx:eax_1 = muls.dp.d(0x2e8ba2e9, *(esi + 0x14) - *(esi + 0x10))
int32_t edx_1 = edx s>> 3

if ((edx_1 u>> 0x1f) + edx_1 s<= arg2 || arg2 s< 0)
    return &data_75d21a

int32_t* result = *(esi + 0x10) + arg2 * 0x2c + 0x14

if (result[5] u< 0x10)
    return result

return *result
