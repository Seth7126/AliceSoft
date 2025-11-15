// 函数: ?AddTail@?$SafeRWList@VWaitNode@SchedulerBase@details@Concurrency@@VNoCount@CollectionTypes@34@V_ReaderWriterLock@34@@details@Concurrency@@QAEXPAVWaitNode@SchedulerBase@23@@Z
// 地址: 0x6f0192
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp_1 = 0
int32_t (* var_c)(void* arg1) = sub_74afd7
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_20 = __security_cookie ^ &__saved_ebp
void* const var_24_1 = &data_6f019e
int32_t var_8_1 = 0xffffffff
fsbase->NtTib.ExceptionList = &ExceptionList
Concurrency::details::_ReaderWriterLock::_AcquireWrite(&arg1[1])
int32_t** result = Concurrency::details::List<class Concurrency::details::SchedulerBase::WaitNode,class Concurrency::details::CollectionTypes::NoCount>::AddTail(
    arg1, arg2)
int32_t var_8 = 0
Concurrency::details::_ReaderWriterLock::_ReleaseWrite(&arg1[1])
fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_2 = &data_6f01c3
return result
