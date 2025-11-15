// 函数: sub_6fcf31
// 地址: 0x6fcf31
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* const var_3c
struct std::exception::Concurrency::invalid_operation::VTable** eax

if (arg2 == 0)
    struct std::exception::VTable* var_14
    std::length_error::length_error(&var_14, "pContext")
    var_3c = &data_7db524
    eax = &var_14
else if (*(arg1 + 0x50) != 0)
    int32_t esi_1 = *(*arg2 + 8)
    j_sub_4033e0()
    void* eax_2 = esi_1()
    
    if (*(arg1 + 0x50) == eax_2)
        int32_t eax_3 = *(arg1 + 0x4c)
        *(arg1 + 0x4c) -= 1
        
        if (eax_3 != 1)
            Concurrency::details::VirtualProcessorRoot::AcquireActivatedContext(arg1)
        else
            *(arg1 + 0x54) = *(arg1 + 0x50)
            Concurrency::details::VirtualProcessorRoot::Unsubscribe(arg1)
            Concurrency::details::ThreadProxy::SuspendExecution(eax_2)
        
        int32_t result
        result.b = 1
        return result
    
    struct std::exception::Concurrency::invalid_operation::VTable* var_2c
    Concurrency::improper_scheduler_attach::improper_scheduler_attach(&var_2c)
    var_3c = &data_7dea00
    eax = &var_2c
else
    struct std::exception::Concurrency::invalid_operation::VTable* var_20
    Concurrency::improper_scheduler_attach::improper_scheduler_attach(&var_20)
    var_3c = &data_7dea00
    eax = &var_20

sub_70021b(eax, var_3c)
noreturn
