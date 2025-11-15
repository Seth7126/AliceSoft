// 函数: ?GetExternalContext@SchedulerBase@details@Concurrency@@AAEPAVExternalContextBase@23@_N@Z
// 地址: 0x6f0f85
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp_1 = 4
int32_t (* var_c)(void* arg1) = sub_74a8f9
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
void* const var_28_3 = &data_6f0f91
int32_t var_8 = 0xffffffff
fsbase->NtTib.ExceptionList = &ExceptionList
SLIST_ENTRY* eax_1 = InterlockedPopEntrySList(arg1 + 0x1f0)
int32_t esi_1 = neg.d(eax_1)
void* result = sbb.d(esi_1, esi_1, eax_1 != 0) & &eax_1[-1]

if (result != 0)
    sub_6fbf72(result, arg2)
else
    struct Concurrency::Context::Concurrency::details::ContextBase::VTable** eax_3 =
        sub_6e810c(0xb0)
    struct Concurrency::Context::Concurrency::details::ContextBase::VTable** var_14_1 = eax_3
    void* result_1 = result
    
    if (eax_3 != 0)
        result = Concurrency::details::ExternalContextBase::ExternalContextBase(eax_3, arg1, arg2)

fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_2 = &data_6f0fe2
return result
