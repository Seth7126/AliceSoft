// 函数: ?CreateDynamicRMWorker@ResourceManager@details@Concurrency@@AAEXXZ
// 地址: 0x6ec00b
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

HANDLE eax = Concurrency::details::LoadLibraryAndCreateThread(nullptr, 0x10000, 
    Concurrency::details::ResourceManager::DynamicRMThreadProc, arg1, 
    THREAD_CREATE_RUN_IMMEDIATELY, nullptr)
*(arg1 + 0x4c) = eax

if (eax != 0)
    return sub_6eb2a7(eax, THREAD_PRIORITY_TIME_CRITICAL)

enum WIN32_ERROR eax_1 = GetLastError()

if (eax_1 s> NO_ERROR)
    eax_1 = zx.d(eax_1.w) | 0x80070000

void var_14
Concurrency::scheduler_resource_allocation_error::scheduler_resource_allocation_error(&var_14, 
    eax_1)
sub_70021b(&var_14, &data_7dd12c)
noreturn
