// 函数: ??0ExternalContextBase@details@Concurrency@@QAE@PAVSchedulerBase@12@_N@Z
// 地址: 0x6fbcd6
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp_1 = 8
int32_t (* var_c)(void* arg1) = sub_74b022
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = __security_cookie ^ &__saved_ebp
void* const var_2c_2 = &data_6fbce2
int32_t var_8_1 = 0xffffffff
fsbase->NtTib.ExceptionList = &ExceptionList
struct Concurrency::details::ContextBase::Concurrency::details::ExternalContextBase::VTable** 
    result = arg1
struct Concurrency::details::ContextBase::Concurrency::details::ExternalContextBase::VTable** 
    result_1 = result
sub_6f31fd(arg1, arg2, 1)
*result =
    &Concurrency::details::ExternalContextBase::`vftable'{for `Concurrency::details::ContextBase'}
int32_t var_8 = 0
result[0x28] = 0
result[0x29] = 0
HANDLE eax = Concurrency::details::platform::__CreateAutoResetEvent(0)
result[7]
result[0x2a] = eax
result[6] = Concurrency::details::SchedulerBase::GetAnonymousScheduleGroupSegment()
int32_t* eax_2 = sub_6e810c(0x1c)
int32_t* var_18 = eax_2

if (eax_2 == 0)
    eax_2 = nullptr
else
    eax_2[2] = 0
    eax_2[3] = 0
    eax_2[4] = 0
    eax_2[5] = 0
    eax_2[6] = 1

void* ecx_3 = result[7] + 0xc8
result[0x27] = eax_2
sub_6faa1a(ecx_3, eax_2)
sub_6fbf72(result, arg3)
fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_2 = &data_6fbd6c
return result
