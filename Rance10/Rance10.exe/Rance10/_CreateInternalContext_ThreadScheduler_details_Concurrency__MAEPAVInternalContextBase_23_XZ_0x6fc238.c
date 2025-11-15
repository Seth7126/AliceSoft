// 函数: ?CreateInternalContext@ThreadScheduler@details@Concurrency@@MAEPAVInternalContextBase@23@XZ
// 地址: 0x6fc238
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp_1 = 4
int32_t (* var_c)(void* arg1) = sub_74b078
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
void* const var_28_1 = &data_6fc244
int32_t var_8_1 = 0xffffffff
fsbase->NtTib.ExceptionList = &ExceptionList
struct Concurrency::IExecutionContext::VTable** eax = sub_6e810c(0xf0)
struct Concurrency::IExecutionContext::VTable** var_14 = eax
struct 
    Concurrency::details::InternalContextBase::Concurrency::details::ThreadInternalContext::VTable**
     result = nullptr
int32_t var_8 = 0

if (eax != 0)
    int32_t ecx_2 = neg.d(arg1 - 8)
    result = sub_6fc123(eax, sbb.d(ecx_2, ecx_2, arg1 != 8) & arg1)

fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_2 = &data_6fc275
return result
