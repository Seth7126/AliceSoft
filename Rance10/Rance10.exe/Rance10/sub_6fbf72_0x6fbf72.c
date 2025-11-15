// 函数: sub_6fbf72
// 地址: 0x6fbf72
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ebx
ebx.b = arg2
*(arg1 + 0x98) = ebx.b
uint32_t result = GetCurrentThreadId()
*(arg1 + 0x44) = result

if (ebx.b == 0)
    HANDLE hTargetProcessHandle = GetCurrentProcess()
    HANDLE hSourceHandle = GetCurrentThread()
    enum WIN32_ERROR eax_2
    
    if (DuplicateHandle(GetCurrentProcess(), hSourceHandle, hTargetProcessHandle, arg1 + 0xa4, 0, 
            0, DUPLICATE_SAME_ACCESS) == 0)
        eax_2 = GetLastError()
        
        if (eax_2 s<= NO_ERROR)
            goto label_6fc025
        
    label_6fc01c:
        eax_2 = zx.d(eax_2.w) | 0x80070000
    label_6fc025:
        void var_14
        Concurrency::scheduler_resource_allocation_error::scheduler_resource_allocation_error(
            &var_14, eax_2)
        sub_70021b(&var_14, &data_7dd12c)
        noreturn
    
    if (j_Concurrency::details::ResourceManager::Version() s< 3)
        result = sub_6eb210(*(arg1 + 0xa4), 
            Concurrency::details::ExternalContextBase::ImplicitDetachHandlerXP, arg1)
        *(arg1 + 0xac) = result
    else
        result = Concurrency::details::RegisterAsyncWaitAndLoadLibrary(*(arg1 + 0xa4), 
            Concurrency::details::ExternalContextBase::ImplicitDetachHandler, arg1)
        *(arg1 + 0xac) = result
        
        if (result == 0)
            eax_2 = GetLastError()
            
            if (eax_2 s<= NO_ERROR)
                goto label_6fc025
            
            goto label_6fc01c

return result
