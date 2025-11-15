// 函数: ?Grow@ReferenceCountedQuickBitSet@details@Concurrency@@QAEXI@Z
// 地址: 0x6f140c
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* var_8 = arg1
int32_t* edi = arg1
int32_t ebx = *edi

if (arg2 == ebx)
    return 

Concurrency::details::QuickBitSet::Grow(arg1, arg2)
int32_t ecx
ecx.b = mulu.dp.d(arg2, 4) u>> 0x20 != 0
int32_t var_18_2 = neg.d(ecx) | (arg2 * 4)
int32_t eax_3 = sub_6e8787()
int32_t ecx_3 = 0

if (ebx != 0)
    do
        *(eax_3 + (ecx_3 << 2)) = *(edi[2] + (ecx_3 << 2))
        ecx_3 += 1
    while (ecx_3 u< ebx)

_memset(eax_3 + (ebx << 2), 0, (arg2 - ebx) << 2)
_free(edi[2])
edi[2] = eax_3
