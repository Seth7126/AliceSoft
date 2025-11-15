// 函数: sub_6f9d8d
// 地址: 0x6f9d8d
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t esi_1 = neg.d(arg1 - 4)
void* const var_30_1
struct std::exception::Concurrency::context_unblock_unbalanced::VTable** eax_9

if ((sbb.d(esi_1, esi_1, arg1 != 4) & arg1) == sub_6f09b1())
    struct std::exception::Concurrency::context_self_unblock::VTable* var_20
    Concurrency::invalid_scheduler_policy_key::invalid_scheduler_policy_key(&var_20)
    var_30_1 = &data_7ddd60
    eax_9 = &var_20
else
    int32_t result = *(arg1 + 0x2c)
    *(arg1 + 0x2c) -= 1
    int32_t var_30 = *(arg1 + 8)
    int32_t esi_4 = *(**(arg1 + 0x1c) + 4)
    j_sub_4033e0()
    int32_t eax_3 = esi_4(var_30)
    char var_38_1 = 4
    int32_t var_3c = 4
    Concurrency::details::ContextBase::TraceContextEvent(var_3c.b, var_38_1, eax_3)
    
    if (result == 2)
        *(arg1 + 0x2c) = 0
        Concurrency::details::InternalContextBase::SpinUntilBlocked(arg1 - 4)
        Concurrency::location::_Assign(&var_3c, *(arg1 + 0x18) + 0xc)
        int32_t esi_5 = *(*(arg1 - 4) + 0x14)
        j_sub_4033e0()
        return esi_5()
    
    if (result u<= 1)
        return result
    
    struct std::exception::Concurrency::context_unblock_unbalanced::VTable* var_14
    Concurrency::operation_timed_out::operation_timed_out(&var_14)
    var_30_1 = &data_7ddd28
    eax_9 = &var_14

sub_70021b(eax_9, var_30_1)
noreturn
