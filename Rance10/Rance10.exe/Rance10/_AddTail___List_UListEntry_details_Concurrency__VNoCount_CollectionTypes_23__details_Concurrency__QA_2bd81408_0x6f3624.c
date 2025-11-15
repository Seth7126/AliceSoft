// 函数: ?AddTail@?$List@UListEntry@details@Concurrency@@VNoCount@CollectionTypes@23@@details@Concurrency@@QAEXPAUListEntry@23@@Z
// 地址: 0x6f3624
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* result = *arg1

if (result != 0)
    arg2[1] = *(result + 4)
    *arg2 = *arg1
    **(*arg1 + 4) = arg2
    result = *arg1
    *(result + 4) = arg2
else
    arg2[1] = arg2
    *arg2 = arg2

*arg1 = arg2
return result
