// 函数: ?ComputeMinHWThreadsWithExternalThread@SchedulerProxy@details@Concurrency@@QBEIXZ
// 地址: 0x6ebea7
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t edi = *(arg1 + 0xb8)
int32_t eax = Concurrency::details::SchedulerProxy::MinVprocHWThreads(arg1)
int32_t result = *(arg1 + 0xbc)

if (result u< eax + 1 + edi)
    return result

return edi + 1 + Concurrency::details::SchedulerProxy::MinVprocHWThreads(arg1)
