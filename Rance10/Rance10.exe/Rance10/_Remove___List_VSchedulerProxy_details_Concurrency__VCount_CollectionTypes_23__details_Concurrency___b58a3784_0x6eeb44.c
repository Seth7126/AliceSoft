// 函数: ?Remove@?$List@VSchedulerProxy@details@Concurrency@@VCount@CollectionTypes@23@@details@Concurrency@@QAEXPAVSchedulerProxy@23@@Z
// 地址: 0x6eeb44
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

*arg1 -= 1
*(*(arg2 + 0x18) + 0x1c) = *(arg2 + 0x1c)
*(*(arg2 + 0x1c) + 0x18) = *(arg2 + 0x18)
void* const result = arg1[1]

if (arg2 == result)
    if (result != *(result + 0x18))
        result = *(result + 0x1c)
    else
        result = nullptr
    
    arg1[1] = result

return result
