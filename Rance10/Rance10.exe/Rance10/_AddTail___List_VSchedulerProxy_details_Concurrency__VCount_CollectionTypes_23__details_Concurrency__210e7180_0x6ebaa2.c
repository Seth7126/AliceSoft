// 函数: ?AddTail@?$List@VSchedulerProxy@details@Concurrency@@VCount@CollectionTypes@23@@details@Concurrency@@QAEXPAVSchedulerProxy@23@@Z
// 地址: 0x6ebaa2
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* result = arg1[1]

if (result != 0)
    *(arg2 + 0x18) = *(result + 0x18)
    *(arg2 + 0x1c) = arg1[1]
    *(*(arg1[1] + 0x18) + 0x1c) = arg2
    result = arg1[1]
    *(result + 0x18) = arg2
else
    *(arg2 + 0x18) = arg2
    *(arg2 + 0x1c) = arg2

arg1[1] = arg2
*arg1 += 1
return result
