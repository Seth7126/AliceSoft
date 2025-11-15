// 函数: ?SubscribeCurrentThread@ResourceManager@details@Concurrency@@QAEPAVExecutionResource@23@PAVSchedulerProxy@23@@Z
// 地址: 0x6ef5b0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp_1 = 4
int32_t (* var_c)(void* arg1) = sub_74ad9a
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
void* const var_28 = &data_6ef5bc
int32_t var_8_2 = 0xffffffff
fsbase->NtTib.ExceptionList = &ExceptionList
CRITICAL_SECTION* var_14 = arg1 + 0x2c
sub_6eaa5e(arg1 + 0x2c)
int32_t var_8 = 0
struct Concurrency::IExecutionResource::Concurrency::details::ExecutionResource::VTable** 
    result_1 = sub_6f69cb(arg2)
struct Concurrency::IExecutionResource::Concurrency::details::ExecutionResource::VTable** result =
    result_1

if (result == 0)
    result = Concurrency::details::ResourceManager::PerformAllocation(arg1, arg2, result_1.b, 1)

int32_t var_8_1 = 1
sub_6eabaa(arg1 + 0x2c)
fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_2 = &data_6ef601
return result
