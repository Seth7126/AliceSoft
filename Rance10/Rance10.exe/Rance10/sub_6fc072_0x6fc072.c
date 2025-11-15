// 函数: sub_6fc072
// 地址: 0x6fc072
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* const __saved_esi_2
void var_10

if (arg1 == sub_6f09b1())
    Concurrency::invalid_scheduler_policy_key::invalid_scheduler_policy_key(&var_10)
    __saved_esi_2 = &data_7ddd60
else
    int32_t var_20_1 = *(arg1 + 8)
    int32_t esi_1 = *(**(arg1 + 0x1c) + 4)
    j_sub_4033e0()
    Concurrency::details::ContextBase::TraceContextEvent(4, 4, esi_1(var_20_1))
    int32_t result_1 = *(arg1 + 0x2c)
    *(arg1 + 0x2c) -= 1
    
    if (result_1 == 1)
        return SetEvent(*(arg1 + 0xa8))
    
    BOOL result = result_1
    
    if (result u<= 1)
        return result
    
    Concurrency::operation_timed_out::operation_timed_out(&var_10)
    __saved_esi_2 = &data_7ddd28

sub_70021b(&var_10, __saved_esi_2)
noreturn
