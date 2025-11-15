// 函数: sub_6ec076
// 地址: 0x6ec076
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp_1 = 8
int32_t (* var_c)(void* arg1) = sub_74a655
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = __security_cookie ^ &__saved_ebp
void* const var_2c_2 = &data_6ec082
int32_t var_8_1 = 0xffffffff
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t esi = *(*arg2 + 8)
j_sub_4033e0()
void var_14
esi(&var_14)
struct Concurrency::ISchedulerProxy::Concurrency::details::SchedulerProxy::VTable** result = nullptr
int32_t var_8 = 0
struct Concurrency::ISchedulerProxy::Concurrency::details::SchedulerProxy::VTable** eax_1 =
    sub_6e810c(0xd0)
struct Concurrency::ISchedulerProxy::Concurrency::details::SchedulerProxy::VTable** var_18 = eax_1
var_8.b = 1

if (eax_1 != 0)
    result = Concurrency::details::SchedulerProxy::SchedulerProxy(eax_1, arg2, arg1, &var_14)

Concurrency::SchedulerPolicy::~SchedulerPolicy(&var_14)
fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_2 = &data_6ec0d4
return result
