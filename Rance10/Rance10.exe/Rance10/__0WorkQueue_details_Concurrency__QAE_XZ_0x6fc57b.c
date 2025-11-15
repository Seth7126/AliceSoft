// 函数: ??0WorkQueue@details@Concurrency@@QAE@XZ
// 地址: 0x6fc57b
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp_1 = 4
int32_t (* var_c)(void* arg1) = sub_74b0f4
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
void* const var_28_2 = &data_6fc587
int32_t var_8_1 = 0xffffffff
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = arg1
sub_6fc4a2(arg1, &arg1[0x1c])
int32_t var_8 = 0
arg1[0xe] = 0
arg1[0x12] = 0
Concurrency::details::WorkStealingQueue<class Concurrency::details::_UnrealizedChore,class Concurrency::details::_CriticalNonReentrantLock>::WorkStealingQueue<class Concurrency::details::_UnrealizedChore,class Concurrency::details::_CriticalNonReentrantLock>(
    &arg1[0x13], &arg1[0x1c])
arg1[0x1c] = 0
var_8.b = 1
arg1[0xb] = 0
arg1[0xd] = arg1
arg1[0x10] = Concurrency::GetExecutionContextId()
fsbase->NtTib.ExceptionList = ExceptionList
void* const __saved_ebp_2 = &data_6fc5c4
return arg1
