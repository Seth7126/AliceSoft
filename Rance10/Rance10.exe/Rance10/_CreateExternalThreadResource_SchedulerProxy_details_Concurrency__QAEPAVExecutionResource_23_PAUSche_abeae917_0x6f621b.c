// 函数: ?CreateExternalThreadResource@SchedulerProxy@details@Concurrency@@QAEPAVExecutionResource@23@PAUSchedulerNode@23@I@Z
// 地址: 0x6f621b
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp_1 = 4
int32_t (* var_c)(void* arg1) = sub_74acc7
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
void* const var_28_1 = &data_6f6227
int32_t var_8_2 = 0xffffffff
fsbase->NtTib.ExceptionList = &ExceptionList
struct Concurrency::IExecutionResource::Concurrency::details::ExecutionResource::VTable** eax =
    sub_6e810c(0x3c)
struct Concurrency::IExecutionResource::Concurrency::details::ExecutionResource::VTable** var_14 =
    eax
struct Concurrency::IExecutionResource::Concurrency::details::ExecutionResource::VTable** result =
    nullptr
int32_t var_8 = 0

if (eax != 0)
    result = sub_6f52dd(eax, arg1, arg2, arg3)

int32_t var_8_1 = 0xffffffff
Concurrency::details::ExecutionResource::IncrementUseCounts(result)
fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_2 = &data_6f625f
return result
