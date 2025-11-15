// 函数: ?AddHead@?$List@UBoostedObject@details@Concurrency@@VNoCount@CollectionTypes@23@@details@Concurrency@@QAEXPAUBoostedObject@23@@Z
// 地址: 0x6f012c
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* eax = *arg1
void* result

if (eax != 0)
    *(arg2 + 4) = *(eax + 4)
    *(arg2 + 8) = *arg1
    *(*(*arg1 + 4) + 8) = arg2
    result = *arg1
    *(result + 4) = arg2
else
    *arg1 = arg2
    *(arg2 + 8) = arg2
    result = *arg1
    *(result + 4) = result

return result
