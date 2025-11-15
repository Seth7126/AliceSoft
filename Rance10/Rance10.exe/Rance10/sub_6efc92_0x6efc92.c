// 函数: sub_6efc92
// 地址: 0x6efc92
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_726f50
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_1c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
*arg1 = &Concurrency::details::SchedulerBase::`vftable'{for `Concurrency::Scheduler'}
Concurrency::details::SchedulerBase::Cleanup(arg1)
sub_6f3000(&arg1[0x5a])
_free(arg1[0x5c])
sub_6f3000(&arg1[0x57])
_free(arg1[0x59])
sub_6ea7d7(&arg1[0x46])
Concurrency::details::ListArray<class Concurrency::details::ExternalStatistics>::~ListArray<class Concurrency::details::ExternalStatistics>(
    &arg1[0x32])
sub_6efbd5(&arg1[0x18])
_free(arg1[0x16])
Concurrency::details::ReferenceCountedQuickBitSet::~ReferenceCountedQuickBitSet(&arg1[0x12])
Concurrency::details::ReferenceCountedQuickBitSet::~ReferenceCountedQuickBitSet(&arg1[0xf])
Concurrency::details::ReferenceCountedQuickBitSet::~ReferenceCountedQuickBitSet(&arg1[0xc])
int32_t result = Concurrency::SchedulerPolicy::~SchedulerPolicy(&arg1[1])
*arg1 = &Concurrency::Scheduler::`vftable'
fsbase->NtTib.ExceptionList = ExceptionList
return result
