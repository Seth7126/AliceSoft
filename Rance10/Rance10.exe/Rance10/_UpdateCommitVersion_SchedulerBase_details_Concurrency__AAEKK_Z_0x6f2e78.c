// 函数: ?UpdateCommitVersion@SchedulerBase@details@Concurrency@@AAEKK@Z
// 地址: 0x6f2e78
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (arg2 != 0xffffffff)
    *(arg1 + 0x154) = arg2
else
    *(arg1 + 0x154) = 0
    *(arg1 + 0x158) = Concurrency::details::SchedulerBase::ComputeSafePointCommitVersion(arg1)

if (*(arg1 + 0x154) == *(arg1 + 0x158))
    return 0

return *(arg1 + 0x158)
