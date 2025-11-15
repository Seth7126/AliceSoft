// 函数: ?RequestInitialVirtualProcessors@ResourceManager@details@Concurrency@@QAEPAUIExecutionResource@3@PAVSchedulerProxy@23@_N@Z
// 地址: 0x6eebf1
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp_1 = 0xc
int32_t (* var_c)(void* arg1) = sub_74a73a
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
void* const var_30_6 = &data_6eebfd
int32_t var_8_4 = 0xffffffff
fsbase->NtTib.ExceptionList = &ExceptionList
struct Concurrency::IExecutionResource::Concurrency::details::ExecutionResource::VTable** result =
    nullptr
char var_18 = 0
CRITICAL_SECTION* var_1c = arg1 + 0x2c
sub_6eaa5e(arg1 + 0x2c)
int32_t var_8 = 0

if (arg3 != 0)
    struct Concurrency::IExecutionResource::Concurrency::details::ExecutionResource::VTable** 
        result_1 = sub_6f69cb(arg2)
    result = result_1
    
    if (result_1 == 0)
        var_18 = 1

if (arg2[0x21] == arg2[0x20])
    *(arg1 + 0x10) += 1

*(arg1 + 8) += 1
Concurrency::details::List<class Concurrency::details::SchedulerProxy,class Concurrency::details::CollectionTypes::Count>::AddTail(
    arg1 + 0x60, arg2)
struct Concurrency::IExecutionResource::Concurrency::details::ExecutionResource::VTable** 
    result_2 = Concurrency::details::ResourceManager::PerformAllocation(arg1, arg2, 1, var_18)

if (result == 0)
    result = result_2

if (arg2[0x21] == arg2[0x20])
    Concurrency::details::ResourceManager::SendResourceNotifications(arg1, arg2)

if (*(arg1 + 8) == 2)
    char ebx_1 = 0
    *(arg1 + 0x28) = 1
    
    if (*(arg1 + 0x4c) == 0)
        *(arg1 + 0x4c) = 1
        int32_t eax_1 = *(arg1 + 0xc)
        int32_t var_30_3 = 4
        int32_t ecx_7
        ecx_7.b = mulu.dp.d(eax_1, 4) u>> 0x20 != 0
        int32_t var_30_4 = neg.d(ecx_7) | (eax_1 * 4)
        *(arg1 + 0x58) = sub_6e8787()
        int32_t eax_4 = *(arg1 + 0xc)
        int32_t ecx_10
        ecx_10.b = mulu.dp.d(eax_4, 4) u>> 0x20 != 0
        int32_t var_34_1 = neg.d(ecx_10) | (eax_4 * 4)
        *(arg1 + 0x5c) = sub_6e8787()
        ebx_1 = 1
    
    int32_t var_8_2 = 2
    sub_6eabaa(arg1 + 0x2c)
    int32_t var_8_3 = 0xffffffff
    SetEvent(*(arg1 + 0x50))
    
    if (ebx_1 != 0)
        Concurrency::details::ResourceManager::CreateDynamicRMWorker(arg1)
else
    int32_t var_8_1 = 1
    sub_6eabaa(arg1 + 0x2c)

fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_2 = &data_6eed03
return result
