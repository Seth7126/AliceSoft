// 函数: ?DestroyVirtualProcessorRoot@SchedulerProxy@details@Concurrency@@QAEXPAVVirtualProcessorRoot@23@@Z
// 地址: 0x6f64b9
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp_1 = 8
int32_t (* var_c)(void* arg1) = sub_74ac9f
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_8 = __security_cookie ^ &__saved_ebp
void* const var_2c_1 = &data_6f64c5
int32_t var_8_3 = 0xffffffff
fsbase->NtTib.ExceptionList = &ExceptionList
CRITICAL_SECTION* var_18 = arg1 + 0x20
sub_6eaa5e(arg1 + 0x20)
int32_t var_8 = 0
int32_t edi = **arg2
j_sub_4033e0()
int32_t eax_2 = edi(eax_8)
Concurrency::details::List<class Concurrency::details::ExecutionResource,class Concurrency::details::CollectionTypes::Count>::Remove(
    arg2[0xc] * 0x34 + 0xc + *(*(arg1 + 0x10) + eax_2 * 0x34 + 0x30), &arg2[2])

if (*(arg2 + 0x45) == 0)
    *(arg1 + 0x9c) -= 1

int32_t var_8_1 = 1
sub_6eabaa(arg1 + 0x20)
int32_t var_8_2 = 0xffffffff
int32_t esi_1 = *(*arg2 + 0x24)
j_sub_4033e0()
int32_t result = esi_1()
fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_2 = &data_6f653f
return result
