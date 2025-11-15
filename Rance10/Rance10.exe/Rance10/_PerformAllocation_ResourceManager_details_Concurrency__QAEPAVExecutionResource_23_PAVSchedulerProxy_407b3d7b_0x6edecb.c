// 函数: ?PerformAllocation@ResourceManager@details@Concurrency@@QAEPAVExecutionResource@23@PAVSchedulerProxy@23@_N1@Z
// 地址: 0x6edecb
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (arg3 != 0)
    arg2[4] = Concurrency::details::ResourceManager::CreateAllocatedNodeData(arg1)

int32_t eax_2 = arg2[0x28]
int32_t ebx = 0
int32_t var_14
int32_t var_10
int32_t var_c
int32_t ecx_2

if (arg4 == 0)
    int32_t eax_11 = Concurrency::details::SchedulerProxy::MinVprocHWThreads(arg2) + arg2[0x2e]
    var_14 = eax_11
    var_10 = eax_11
    int32_t eax_12 = Concurrency::details::SchedulerProxy::DesiredHWThreads(arg2)
    ecx_2 = eax_12
    var_c = eax_12
else
    var_14 = Concurrency::details::SchedulerProxy::ComputeMinHWThreadsWithExternalThread(arg2)
    ecx_2 = Concurrency::details::SchedulerProxy::ComputeDesiredHWThreadsWithExternalThread(arg2)
    var_c = ecx_2
    int32_t eax_5
    
    if (arg3 == 0)
        int32_t eax_6
        int32_t ecx_4
        eax_6, ecx_4 = Concurrency::details::SchedulerProxy::MinVprocHWThreads(arg2)
        ecx_2 = neg.d(sbb.d(ecx_4, ecx_4, eax_6 + arg2[0x2e] u< *(arg1 + 0x1c)))
        var_c = ecx_2
        eax_5 = neg.d(sbb.d(var_14, var_14, eax_2 u< var_14))
    else
        eax_5 = var_14
    
    var_10 = eax_5

char var_5 = 0

if (ecx_2 != 0)
    Concurrency::details::ResourceManager::SetupStaticAllocationData(arg1, arg2, arg4)
    Concurrency::details::ResourceManager::PreProcessStaticAllocationData(arg1)
    ebx = sub_6eed3c(arg1, arg2, var_c, 0)
    
    if (ebx u< var_c && (arg3 != 0 || var_10 u> 0))
        var_5 = 1
        ebx += Concurrency::details::ResourceManager::ReleaseCoresOnExistingSchedulers(arg1, arg2, 
            var_c - ebx, 0xfffffffe)
        
        if (ebx u< var_c)
            int32_t eax_20
            int80_t st0_1
            st0_1, eax_20 = Concurrency::details::ResourceManager::RedistributeCoresAmongAll(arg1, 
                arg2, ebx + eax_2, var_14, var_c + eax_2)
            ebx += eax_20
            
            if (ebx u< var_10)
                ebx += Concurrency::details::ResourceManager::ReleaseCoresOnExistingSchedulers(
                    arg1, arg2, var_10 - ebx, 0xffffffff)
                
                if (ebx u< var_10)
                    ebx += Concurrency::details::ResourceManager::ReserveAtHigherUseCounts(arg2, 
                        var_10 - ebx)
    
    Concurrency::details::ResourceManager::ResetGlobalAllocationData(arg1)

int32_t var_28_4 = arg4.d
struct Concurrency::IExecutionResource::Concurrency::details::ExecutionResource::VTable** result =
    Concurrency::details::SchedulerProxy::GrantAllocation(arg2, arg2, ebx, arg3)

if (var_5 != 0)
    Concurrency::details::ResourceManager::CommitStolenCores(arg1, arg2)

return result
