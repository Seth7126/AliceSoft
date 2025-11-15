// 函数: ?InterlockedClear@ReferenceCountedQuickBitSet@details@Concurrency@@QAEII@Z
// 地址: 0x6f7ce8
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t eax = *(arg1 + 8)
int32_t esi = *(eax + (arg2 << 2))
*(eax + (arg2 << 2)) -= 1

if (esi == 1)
    sub_6f81b8(arg1, arg2)
    int32_t* ecx_3 = *(arg1 + 4) + (arg2 u>> 5 << 2)
    *ecx_3 &= not.d(1 << (arg2.b & 0x1f))

return esi - 1
