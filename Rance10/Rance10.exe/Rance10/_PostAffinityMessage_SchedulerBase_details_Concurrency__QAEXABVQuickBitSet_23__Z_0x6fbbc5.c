// 函数: ?PostAffinityMessage@SchedulerBase@details@Concurrency@@QAEXABVQuickBitSet@23@@Z
// 地址: 0x6fbbc5
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_c = arg1
char result = sub_6f1a43(arg2, arg1 + 0x48)

if (result != 0)
    Concurrency::details::QuickBitSet::InterlockedSet(arg1 + 0x54, 
        sub_6fba2a(arg2, &var_c, arg1 + 0x48))
    result = _free(arg1)

return result
