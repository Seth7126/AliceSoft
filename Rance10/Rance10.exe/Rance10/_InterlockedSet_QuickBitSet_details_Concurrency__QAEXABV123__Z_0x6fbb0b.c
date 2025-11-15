// 函数: ?InterlockedSet@QuickBitSet@details@Concurrency@@QAEXABV123@@Z
// 地址: 0x6fbb0b
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t edi = 0
uint32_t esi_2 = (*arg1 + 0x1f) u>> 5

if (esi_2 == 0)
    return 

do
    int32_t* eax = arg1[1] + (edi << 2)
    *eax |= (*(arg2 + 4))[edi]
    edi += 1
while (edi u< esi_2)
