// 函数: sub_6f0784
// 地址: 0x6f0784
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* esi = arg1
int32_t result = *arg2

if (*esi != result)
    result = Concurrency::details::QuickBitSet::Reallocate(arg1, result)

int32_t edi = 0
uint32_t edx_2 = (*esi + 0x1f) u>> 5

if (edx_2 != 0)
    do
        result = *(arg2[1] + (edi << 2))
        *(esi[1] + (edi << 2)) = result
        edi += 1
    while (edi u< edx_2)

return result
