// 函数: ?AddTail@?$List@VExecutionResource@details@Concurrency@@VCount@CollectionTypes@23@@details@Concurrency@@QAEXPAVExecutionResource@23@@Z
// 地址: 0x6f5f8d
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* result = arg1[1]

if (result != 0)
    *(arg2 + 0x38) = *(result + 0x38)
    *(arg2 + 0x34) = arg1[1]
    *(*(arg1[1] + 0x38) + 0x34) = arg2
    result = arg1[1]
    *(result + 0x38) = arg2
else
    *(arg2 + 0x38) = arg2
    *(arg2 + 0x34) = arg2

arg1[1] = arg2
*arg1 += 1
return result
