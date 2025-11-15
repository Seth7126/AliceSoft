// 函数: ?SuspendExecution@ThreadProxy@details@Concurrency@@QAEXXZ
// 地址: 0x6fd538
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

*(arg1 + 0x20)
*(arg1 + 0x20) = 1
WaitForSingleObjectEx(*(arg1 + 0xc), 0xffffffff, 0)
int32_t result = *(arg1 + 0x20)
*(arg1 + 0x20) = 0
return result
