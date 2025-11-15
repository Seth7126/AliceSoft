// 函数: sub_6f5f44
// 地址: 0x6f5f44
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp_1 = 0
int32_t (* var_c)(void* arg1) = sub_74afd7
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_20 = __security_cookie ^ &__saved_ebp
void* const var_24_1 = &data_6f5f50
int32_t var_8_1 = 0xffffffff
fsbase->NtTib.ExceptionList = &ExceptionList
sub_6eaa5e(arg1 + 0x20)
Concurrency::details::List<class Concurrency::details::ExecutionResource,class Concurrency::details::CollectionTypes::Count>::AddTail(
    *(arg2 + 0x28) * 0x34 + 0xc + *(*(arg2 + 0x24) * 0x34 + *(arg1 + 0x10) + 0x30), arg2)
int32_t var_8 = 0
int32_t result = sub_6eabaa(arg1 + 0x20)
fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_2 = &data_6f5f8a
return result
