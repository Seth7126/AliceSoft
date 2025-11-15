// 函数: sub_6f208b
// 地址: 0x6f208b
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* const var_20_1
struct std::exception::Concurrency::scheduler_resource_allocation_error::VTable** eax_5

if (arg2 == 0 || arg2 == 0xffffffff)
    struct std::exception::VTable* var_14
    std::length_error::length_error(&var_14, "eventObject")
    var_20_1 = &data_7db524
    eax_5 = &var_14
else
    HANDLE targetHandle = nullptr
    HANDLE hTargetProcessHandle = GetCurrentProcess()
    
    if (DuplicateHandle(GetCurrentProcess(), arg2, hTargetProcessHandle, &targetHandle, 0, 0, 
            DUPLICATE_SAME_ACCESS) != 0)
        int32_t* eax_3 = sub_6e810c(0xc)
        eax_3[2] = targetHandle
        return Concurrency::details::SafeRWList<class Concurrency::details::SchedulerBase::WaitNode,class Concurrency::details::CollectionTypes::NoCount,class Concurrency::details::_ReaderWriterLock>::AddTail(
            arg1 + 0xb8, eax_3)
    
    enum WIN32_ERROR eax_2 = GetLastError()
    
    if (eax_2 s> NO_ERROR)
        eax_2 = zx.d(eax_2.w) | 0x80070000
    
    struct std::exception::Concurrency::scheduler_resource_allocation_error::VTable* var_18
    Concurrency::scheduler_resource_allocation_error::scheduler_resource_allocation_error(&var_18, 
        eax_2)
    var_20_1 = &data_7dd12c
    eax_5 = &var_18

sub_70021b(eax_5, var_20_1)
noreturn
