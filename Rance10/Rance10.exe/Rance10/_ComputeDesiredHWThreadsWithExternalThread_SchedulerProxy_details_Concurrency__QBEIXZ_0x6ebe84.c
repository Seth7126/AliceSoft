// 函数: ?ComputeDesiredHWThreadsWithExternalThread@SchedulerProxy@details@Concurrency@@QBEIXZ
// 地址: 0x6ebe84
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t result = *(arg1 + 0xbc)

if (result u< Concurrency::details::SchedulerProxy::DesiredHWThreads(arg1) + 1)
    return result

return Concurrency::details::SchedulerProxy::DesiredHWThreads(arg1) + 1
