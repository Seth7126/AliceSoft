// 函数: ?UpdatePendingVersion@SchedulerBase@details@Concurrency@@AAEKXZ
// 地址: 0x6f2ec0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t result_1 = Concurrency::details::SchedulerBase::ComputeSafePointCommitVersion(arg1)

if (result_1 u<= *(arg1 + 0x158))
    return 0

int32_t result

if (*(arg1 + 0x158) != *(arg1 + 0x154))
    result = 0
else
    result = result_1

*(arg1 + 0x158) = result_1
return result
