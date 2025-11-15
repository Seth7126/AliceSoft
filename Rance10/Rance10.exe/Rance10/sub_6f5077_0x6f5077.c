// 函数: sub_6f5077
// 地址: 0x6f5077
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp_1 = 0x34
int32_t (* var_c)(void* arg1) = sub_74abc6
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_54 = __security_cookie ^ &__saved_ebp
int32_t* var_14 = &var_54
void* const var_58_7 = &data_6f5083
int32_t var_8_1 = 0xffffffff
fsbase->NtTib.ExceptionList = &ExceptionList
char* eax = sub_6e810c(0x28)
int32_t esi = 0
char* var_20 = eax
*arg1 = eax
int32_t var_8 = 0
sub_700660(eax, 0x7e1378, 0x28)
void* const var_58_2
struct std::exception::VTable** eax_5

while (true)
    if (esi u>= arg2)
        void* eax_9 = *arg1
        
        if (Concurrency::SchedulerPolicy::_AreConcurrencyLimitsValid(*(eax_9 + 8), *(eax_9 + 4))
                != 0)
            void* result = Concurrency::SchedulerPolicy::_ResolvePolicyValues(arg1)
            fsbase->NtTib.ExceptionList = ExceptionList
            void* const __saved_ebp_2 = &data_6f514d
            return result
        
        struct std::exception::Concurrency::invalid_scheduler_policy_thread_specification::VTable* 
            var_44
        Concurrency::details::_MallocaArrayHolder<class Concurrency::event*>::_MallocaArrayHolder<class Concurrency::event*>(
            &var_44)
        var_58_2 = &data_7dd9d8
        eax_5 = &var_44
        break
    
    *arg3 += 4
    void* eax_1 = *arg3
    int32_t edi_1 = *(eax_1 - 4)
    *arg3 = eax_1 + 4
    int32_t eax_3 = *eax_1
    
    if (edi_1 u> 9)
        struct std::exception::VTable* var_2c
        Concurrency::invalid_multiple_scheduling::invalid_multiple_scheduling(&var_2c, 
            Concurrency::SchedulerPolicy::_StringFromPolicyKey(edi_1))
        var_58_2 = &data_7dd968
        eax_5 = &var_2c
        break
    
    if (Concurrency::SchedulerPolicy::_ValidPolicyValue(edi_1, eax_3) == 0)
        struct std::exception::VTable* var_38
        Concurrency::missing_wait::missing_wait(&var_38, 
            Concurrency::SchedulerPolicy::_StringFromPolicyKey(edi_1))
        var_58_2 = &data_7dd9a0
        eax_5 = &var_38
        break
    
    esi += 1
    *(eax + (edi_1 << 2)) = eax_3

sub_70021b(eax_5, var_58_2)
noreturn
