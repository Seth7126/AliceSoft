// 函数: ?__GetLogicalProcessorInformationEx@platform@details@Concurrency@@YAPAU_SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX@@W4_LOGICAL_PROCESSOR_RELATIONSHIP@@PAK@Z
// 地址: 0x6eb091
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t eax_1 = GetProcAddress(GetModuleHandleW(kernel32.dll"), "GetLogicalProcessorInformationEx")
void* const var_24_3
struct std::exception::Concurrency::scheduler_resource_allocation_error::VTable** eax_4
enum WIN32_ERROR eax_2

if (eax_1 != 0)
    j_sub_4033e0()
    eax_1(arg1, 0, arg2)
    
    if (GetLastError() != ERROR_INSUFFICIENT_BUFFER)
    label_6eb0e0:
        eax_2 = GetLastError()
        
        if (eax_2 s<= NO_ERROR)
            goto label_6eb133
        
        goto label_6eb12a
    
    int32_t var_24_2 = *arg2
    int32_t result = sub_705e22()
    
    if (result != 0)
        j_sub_4033e0()
        
        if (eax_1(arg1, result, arg2) != 0)
            return result
        
        goto label_6eb0e0
    
    struct std::exception::std::bad_alloc::VTable* var_10
    std::bad_alloc::bad_alloc(&var_10)
    var_24_3 = &data_7db4ec
    eax_4 = &var_10
else
    eax_2 = GetLastError()
    
    if (eax_2 s<= NO_ERROR)
        goto label_6eb133
    
label_6eb12a:
    eax_2 = zx.d(eax_2.w) | 0x80070000
label_6eb133:
    struct std::exception::Concurrency::scheduler_resource_allocation_error::VTable* var_14
    Concurrency::scheduler_resource_allocation_error::scheduler_resource_allocation_error(&var_14, 
        eax_2)
    var_24_3 = &data_7dd12c
    eax_4 = &var_14
sub_70021b(eax_4, var_24_3)
noreturn
