// 函数: ?Activate@FreeVirtualProcessorRoot@details@Concurrency@@UAEXPAUIExecutionContext@3@@Z
// 地址: 0x6fce07
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* edi = arg2
void* const var_2c_2
struct std::exception::Concurrency::invalid_operation::VTable** eax_6

if (edi == 0)
    struct std::exception::VTable* var_10
    std::length_error::length_error(&var_10, "pContext")
    var_2c_2 = &data_7db524
    eax_6 = &var_10
else
    int32_t esi_1 = *(*edi + 8)
    j_sub_4033e0()
    void* esi_2 = esi_1()
    
    if (esi_2 == 0)
        int32_t esi_3 = *(*arg1[7] + 0x1c)
        j_sub_4033e0()
        edi = arg2
        esi_2 = esi_3(arg2)
    
    int32_t eax_4 = arg1[0x13]
    arg1[0x13] += 1
    
    if (eax_4 == 1)
        int32_t** result = &arg1[1]
        *result
        *result = edi
        return result
    
    Concurrency::details::FreeVirtualProcessorRoot::SpinUntilIdle(arg1)
    
    if (arg1[0x14] == 0 || esi_2 == arg1[0x14])
        arg1[0x15] = 0
        Concurrency::details::VirtualProcessorRoot::Subscribe(arg1)
        Concurrency::details::FreeVirtualProcessorRoot::Affinitize(arg1, esi_2)
        return Concurrency::details::ThreadProxy::ResumeExecution(esi_2)
    
    struct std::exception::Concurrency::invalid_operation::VTable* var_1c
    Concurrency::improper_scheduler_attach::improper_scheduler_attach(&var_1c)
    var_2c_2 = &data_7dea00
    eax_6 = &var_1c

sub_70021b(eax_6, var_2c_2)
noreturn
