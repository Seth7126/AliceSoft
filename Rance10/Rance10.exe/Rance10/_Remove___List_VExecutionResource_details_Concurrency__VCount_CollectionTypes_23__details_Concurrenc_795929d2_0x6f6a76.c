// 函数: ?Remove@?$List@VExecutionResource@details@Concurrency@@VCount@CollectionTypes@23@@details@Concurrency@@QAEXPAVExecutionResource@23@@Z
// 地址: 0x6f6a76
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

*arg1 -= 1
*(*(arg2 + 0x38) + 0x34) = *(arg2 + 0x34)
*(*(arg2 + 0x34) + 0x38) = *(arg2 + 0x38)
void* const result = arg1[1]

if (arg2 == result)
    if (result != *(result + 0x38))
        result = *(result + 0x34)
    else
        result = nullptr
    
    arg1[1] = result

return result
