// 函数: sub_6fbd6f
// 地址: 0x6fbd6f
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) =
    __ehhandler$??1?$__crt_win32_buffer@DU__crt_win32_buffer_no_resizing@@@@QAE@XZ
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_18 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct Concurrency::details::ContextBase::Concurrency::details::ExternalContextBase::VTable** esi =
    arg1
*esi =
    &Concurrency::details::ExternalContextBase::`vftable'{for `Concurrency::details::ContextBase'}
Concurrency::details::ExternalContextBase::Cleanup(arg1)
int32_t result = Concurrency::details::ContextBase::~ContextBase(esi)
fsbase->NtTib.ExceptionList = ExceptionList
return result
