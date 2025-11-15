// 函数: ?Dispatch@InternalContextBase@details@Concurrency@@UAEXPAUDispatchState@3@@Z
// 地址: 0x6f9089
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp_1 = 0x24
int32_t (* var_c)(void* arg1) =
    __ehhandler$?Dispatch@InternalContextBase@details@Concurrency@@UAEXPAUDispatchState@3@@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t ebx
int32_t var_38_2 = ebx
int32_t esi
int32_t var_3c_2 = esi
int32_t edi
int32_t var_40 = edi
int32_t __saved_ebp
int32_t eax_11 = __security_cookie ^ &__saved_ebp
void* const var_48_1 = &data_6f9095
int32_t var_8_2 = 0xffffffff
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_18 = 0
char var_12 = 0
arg1[0x12] = GetCurrentThreadId()
sub_6f407f(&arg1[1])
int32_t esi_1 = *(*arg1[8] + 0xc)
j_sub_4033e0()
int32_t var_8 = 0
int32_t var_18_1 = 1
void var_1c
int32_t eax_3 = sub_6f5021(esi_1(&var_1c, eax_11), 9)
char var_11_1
int32_t eax_4

if (eax_3 == 0)
    eax_4 = j_Concurrency::details::ResourceManager::Version()
    var_11_1 = 1

if (eax_3 != 0 || eax_4 != 6)
    var_11_1 = 0

int32_t var_8_1 = 0xffffffff
Concurrency::SchedulerPolicy::~SchedulerPolicy(&var_1c)

if (var_11_1 != 0)
    var_12 = 1
    sub_6f6dfb(1)

arg1[0x2b] = 0
char var_11_2 = 0

if (sub_6f925b(arg1) == 0)
    goto label_6f913e

while (true)
    char eax_6 = Concurrency::details::InternalContextBase::IsVirtualProcessorRetired(arg1)
label_6f9136:
    var_11_2 = eax_6
    
    while (true)
        if (eax_6 == 0)
        label_6f913e:
            *(arg1 + 0xb3) &= 0xfd
            int32_t var_28 = 0
            int32_t var_20_1 = 0
            
            if (arg1[0x28] == 0)
                int32_t var_34
                Concurrency::details::_Interruption_exception::_Interruption_exception(&var_34)
                sub_70021b(&var_34, 0x7dddd0)
                noreturn
            
            if (*(arg1 + 0xb2) == 0
                    && Concurrency::details::VirtualProcessor::SafePoint(arg1[0x28]) != 0)
                Concurrency::details::SchedulerBase::CommitSafePoints(arg1[8])
            
            if (sub_6f9f48(arg1, &var_28) == 0)
                if (Concurrency::details::InternalContextBase::IsVirtualProcessorRetired(arg1) == 0)
                    sub_6f9e4c(arg1)
                    
                    if (arg1[0x2c].b == 0)
                        eax_6 = var_11_2
                        continue
                    
                    Concurrency::details::InternalContextBase::CleanupDispatchedContextOnCancel(
                        arg1)
                    eax_6 = 1
                    goto label_6f9136
            else
                if (var_28 != 1)
                    Concurrency::details::InternalContextBase::ExecuteChoreInline(arg1, &var_28)
                    break
                
                sub_6f9c54(arg1, var_20_1, 0)
        
        if (var_12 != 0)
            sub_6f6e1c()
        
        BOOL result = Concurrency::details::ContextBase::ClearContextTls()
        fsbase->NtTib.ExceptionList = ExceptionList
        void* const __saved_ebp_2 = &data_6f91fd
        return result
