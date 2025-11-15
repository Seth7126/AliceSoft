// 函数: ??1VirtualProcessor@details@Concurrency@@UAE@XZ
// 地址: 0x6f77a8
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) =
    __ehhandler$??1?$__crt_win32_buffer@DU__crt_win32_buffer_no_resizing@@@@QAE@XZ
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_18 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
*arg1 = &Concurrency::details::VirtualProcessor::`vftable'

if (arg1[0x17] != 0)
    sub_6f272b(arg1[0x17])
    arg1[0x17] = 0

_free(arg1[0x2a])
int32_t result = Concurrency::details::StructuredWorkStealingQueue<class Concurrency::details::_UnrealizedChore,class Concurrency::details::_CriticalNonReentrantLock>::~StructuredWorkStealingQueue<class Concurrency::details::_UnrealizedChore,class Concurrency::details::_CriticalNonReentrantLock>(
    &arg1[4])
fsbase->NtTib.ExceptionList = ExceptionList
return result
