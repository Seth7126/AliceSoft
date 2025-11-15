// 函数: ?__GetLogicalProcessorInformation@platform@details@Concurrency@@YAPAU_SYSTEM_LOGICAL_PROCESSOR_INFORMATION@@PAK@Z
// 地址: 0x6eb006
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

GetLogicalProcessorInformation(nullptr, arg1)
void* const var_20_2
struct std::exception::Concurrency::scheduler_resource_allocation_error::VTable** eax_2
enum WIN32_ERROR eax_1

if (GetLastError() == ERROR_INSUFFICIENT_BUFFER)
    uint32_t var_20_1 = *arg1
    SYSTEM_LOGICAL_PROCESSOR_INFORMATION* Buffer = sub_705e22()
    
    if (Buffer != 0)
        if (GetLogicalProcessorInformation(Buffer, arg1) != 0)
            return Buffer
        
        eax_1 = GetLastError()
        
        if (eax_1 s<= NO_ERROR)
            goto label_6eb07d
        
        goto label_6eb074
    
    struct std::exception::std::bad_alloc::VTable* var_10
    std::bad_alloc::bad_alloc(&var_10)
    var_20_2 = &data_7db4ec
    eax_2 = &var_10
else
    eax_1 = GetLastError()
    
    if (eax_1 s<= NO_ERROR)
        goto label_6eb07d
    
label_6eb074:
    eax_1 = zx.d(eax_1.w) | 0x80070000
label_6eb07d:
    struct std::exception::Concurrency::scheduler_resource_allocation_error::VTable* var_14
    Concurrency::scheduler_resource_allocation_error::scheduler_resource_allocation_error(&var_14, 
        eax_1)
    var_20_2 = &data_7dd12c
    eax_2 = &var_14
sub_70021b(eax_2, var_20_2)
noreturn
