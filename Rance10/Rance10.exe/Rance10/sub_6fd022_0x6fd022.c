// 函数: sub_6fd022
// 地址: 0x6fd022
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* const var_38
struct std::exception::Concurrency::invalid_operation::VTable** eax

if (arg2 == 0)
    struct std::exception::VTable* var_10
    std::length_error::length_error(&var_10, "pContext")
    var_38 = &data_7db524
    eax = &var_10
else if (*(arg1 + 0x50) != 0)
    int32_t esi_1 = *(*arg2 + 8)
    j_sub_4033e0()
    int32_t eax_2 = esi_1()
    
    if (*(arg1 + 0x50) == eax_2)
        return sub_6ed500(*(*(arg1 + 0x1c) + 0xc))
    
    struct std::exception::Concurrency::invalid_operation::VTable* var_28
    Concurrency::improper_scheduler_attach::improper_scheduler_attach(&var_28)
    var_38 = &data_7dea00
    eax = &var_28
else
    struct std::exception::Concurrency::invalid_operation::VTable* var_1c
    Concurrency::improper_scheduler_attach::improper_scheduler_attach(&var_1c)
    var_38 = &data_7dea00
    eax = &var_1c

sub_70021b(eax, var_38)
noreturn
