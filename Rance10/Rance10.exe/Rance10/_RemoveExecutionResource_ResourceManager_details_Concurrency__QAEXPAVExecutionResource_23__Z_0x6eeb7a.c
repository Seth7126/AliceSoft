// 函数: ?RemoveExecutionResource@ResourceManager@details@Concurrency@@QAEXPAVExecutionResource@23@@Z
// 地址: 0x6eeb7a
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp_1 = 8
int32_t (* var_c)(void* arg1) = sub_74ac9f
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = __security_cookie ^ &__saved_ebp
void* const var_2c_1 = &data_6eeb86
int32_t var_8_2 = 0xffffffff
fsbase->NtTib.ExceptionList = &ExceptionList
char var_14 = 0
CRITICAL_SECTION* var_18 = arg1 + 0x2c
sub_6eaa5e(arg1 + 0x2c)
int32_t var_8 = 0
void* edi = arg2[5]
Concurrency::details::ExecutionResource::DecrementUseCounts(arg2)
int32_t eax = Concurrency::details::SchedulerProxy::DesiredHWThreads(edi)

if (*(edi + 0xa0) u< eax && *(arg1 + 8) == 1 && sub_6ec5a8(arg1) == 0)
    var_14 = 1

int32_t var_8_1 = 1
BOOL result = sub_6eabaa(arg1 + 0x2c)

if (var_14 != 0)
    result = SetEvent(*(arg1 + 0x50))

fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_2 = &data_6eebee
return result
