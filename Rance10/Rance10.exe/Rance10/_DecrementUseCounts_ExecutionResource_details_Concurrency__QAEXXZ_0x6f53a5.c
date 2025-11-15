// 函数: ?DecrementUseCounts@ExecutionResource@details@Concurrency@@QAEXXZ
// 地址: 0x6f53a5
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t temp0 = arg1[0xc]
arg1[0xc] -= 1

if (temp0 != 1)
    return 

int32_t ebx
ebx.b = arg1[7] != 0
Concurrency::details::ExecutionResource::ResetCurrent(arg1)

if (arg1[6] != 0)
    Concurrency::details::ExecutionResource::DecrementUseCounts()
    Concurrency::details::SchedulerProxy::RemoveThreadSubscription(arg1[5], arg1)
    return 

Concurrency::details::SchedulerProxy::DecrementFixedCoreCount(arg1[5], arg1[9], arg1[0xa], 
    ebx.b == 0)

if (ebx.b != 0)
    return 

Concurrency::details::HardwareAffinity::ApplyTo(&arg1[2], GetCurrentThread())
Concurrency::details::SchedulerProxy::DecrementCoreSubscription(arg1[5], arg1)
Concurrency::details::SchedulerProxy::DestroyExecutionResource(arg1[5], arg1)
