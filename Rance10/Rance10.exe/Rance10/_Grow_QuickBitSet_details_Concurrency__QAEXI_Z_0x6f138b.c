// 函数: ?Grow@QuickBitSet@details@Concurrency@@QAEXI@Z
// 地址: 0x6f138b
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* var_8 = arg1
int32_t ebx = arg2

if (ebx == *arg1)
    return 

uint32_t edi_2 = (ebx + 0x1f) u>> 5
int32_t ecx
ecx.b = mulu.dp.d(edi_2, 4) u>> 0x20 != 0
int32_t var_18_1 = neg.d(ecx) | (edi_2 * 4)
int32_t eax_3 = sub_6e8787()
int32_t edx_1 = 0
int32_t var_8_1 = eax_3
uint32_t ecx_5 = (*arg1 + 0x1f) u>> 5

if (ecx_5 != 0)
    do
        *(eax_3 + (edx_1 << 2)) = *(arg1[1] + (edx_1 << 2))
        edx_1 += 1
    while (edx_1 u< ecx_5)
    
    ebx = arg2
    eax_3 = var_8_1

_memset(eax_3 + (ecx_5 << 2), 0, (edi_2 - ecx_5) << 2)
_free(arg1[1])
arg1[1] = var_8_1
*arg1 = ebx
