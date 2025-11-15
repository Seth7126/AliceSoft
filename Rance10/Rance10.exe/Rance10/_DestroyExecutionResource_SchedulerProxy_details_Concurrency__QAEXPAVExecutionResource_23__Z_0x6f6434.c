// 函数: ?DestroyExecutionResource@SchedulerProxy@details@Concurrency@@QAEXPAVExecutionResource@23@@Z
// 地址: 0x6f6434
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp_1 = 4
int32_t (* var_c)(void* arg1) = sub_74a6b9
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
void* const var_28_1 = &data_6f6440
int32_t var_8_1 = 0xffffffff
fsbase->NtTib.ExceptionList = &ExceptionList
void* edx_1 = arg2[9] * 0x34 + *(arg1 + 0x10)
int32_t* ebx_1 = arg2[0xa] * 0x34 + *(edx_1 + 0x30)
ebx_1[9]

if (ebx_1[0xb] == neg.d(ebx_1[9]))
    *(edx_1 + 0x1c) -= 1
    *ebx_1 = 1
    *(arg1 + 0xa0) -= 1
    void* ecx_2 = arg2[0xa] * 0x24 + *(*(*(arg1 + 0xc) + 0x48) + arg2[9] * 0x28 + 0x20)
    *(ecx_2 + 0x10) -= 1

sub_6eaa5e(arg1 + 0x20)
Concurrency::details::List<class Concurrency::details::ExecutionResource,class Concurrency::details::CollectionTypes::Count>::Remove(
    &ebx_1[3], arg2)
int32_t var_8 = 0
sub_6eabaa(arg1 + 0x20)
*arg2 = &Concurrency::details::ExecutionResource::`vftable'{for `Concurrency::IExecutionResource'}
int32_t result = operator new(arg2)
fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_2 = &data_6f64b6
return result
