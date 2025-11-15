// 函数: ??1InternalContextBase@details@Concurrency@@UAE@XZ
// 地址: 0x6f8c14
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) =
    __ehhandler$??1?$__crt_win32_buffer@DU__crt_win32_buffer_no_resizing@@@@QAE@XZ
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_18 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
*arg1 = &Concurrency::details::InternalContextBase::`vftable'{for `Concurrency::IExecutionContext'}
arg1[1] =
    &Concurrency::details::InternalContextBase::`vftable'{for `Concurrency::details::ContextBase'}
Concurrency::details::InternalContextBase::Cleanup(arg1)
int32_t result = Concurrency::details::ContextBase::~ContextBase(&arg1[1])
fsbase->NtTib.ExceptionList = ExceptionList
return result
