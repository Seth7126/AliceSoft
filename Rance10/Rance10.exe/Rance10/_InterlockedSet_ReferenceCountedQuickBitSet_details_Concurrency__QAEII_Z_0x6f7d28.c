// 函数: ?InterlockedSet@ReferenceCountedQuickBitSet@details@Concurrency@@QAEII@Z
// 地址: 0x6f7d28
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_8 = arg1
int32_t eax = *(arg1 + 8)
int32_t esi = *(eax + (arg2 << 2))
*(eax + (arg2 << 2)) += 1

if (esi == 0)
    sub_6f816e(arg1, arg2)
    int32_t* ecx_4 = *(arg1 + 4) + (arg2 u>> 5 << 2)
    *ecx_4 |= 1 << (arg2.b & 0x1f)

return esi + 1
