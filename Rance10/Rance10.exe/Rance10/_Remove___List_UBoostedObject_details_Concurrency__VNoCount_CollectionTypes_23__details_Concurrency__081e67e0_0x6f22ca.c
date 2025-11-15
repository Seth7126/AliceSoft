// 函数: ?Remove@?$List@UBoostedObject@details@Concurrency@@VNoCount@CollectionTypes@23@@details@Concurrency@@QAEXPAUBoostedObject@23@@Z
// 地址: 0x6f22ca
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

*(*(arg2 + 4) + 8) = *(arg2 + 8)
*(*(arg2 + 8) + 4) = *(arg2 + 4)
void* const result = *arg1

if (arg2 == result)
    if (result != *(result + 4))
        result = *(result + 8)
    else
        result = nullptr
    
    *arg1 = result

return result
