// 函数: ?AddTail@?$List@VWaitNode@SchedulerBase@details@Concurrency@@VNoCount@CollectionTypes@34@@details@Concurrency@@QAEXPAVWaitNode@SchedulerBase@23@@Z
// 地址: 0x6f0165
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t** result = *arg1

if (result != 0)
    *arg2 = *result
    arg2[1] = *arg1
    *(**arg1 + 4) = arg2
    result = *arg1
    *result = arg2
else
    *arg2 = arg2
    arg2[1] = arg2

*arg1 = arg2
return result
