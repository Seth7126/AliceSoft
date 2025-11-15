// 函数: ?StealForeignLocalRunnable@WorkSearchContext@details@Concurrency@@AAE_NPAVWorkItem@23@PAVSchedulingNode@23@@Z
// 地址: 0x6feb06
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = arg1
var_8 = 0
int32_t var_10 = 0xffffffff

while (true)
    int32_t* result =
        Concurrency::details::SchedulerBase::GetNextSchedulingNode(*(arg1 + 4), &var_8, var_10)
    
    if (result == 0)
        result.b = 0
        return result
    
    if (result != arg3
            && Concurrency::details::WorkSearchContext::StealLocalRunnable(arg1, arg2, result, 0).b
            != 0)
        result.b = 1
        return result
    
    var_10 = 0
