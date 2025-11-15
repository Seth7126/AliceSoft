// 函数: sub_4deb10
// 地址: 0x4deb10
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) =
    __ehhandler$??1?$__crt_win32_buffer@DU__crt_win32_buffer_internal_dynamic_resizing@@@@QAE@XZ
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_18 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_8_1 = 0
*arg1 = &partsengine::CFlatView::`vftable'{for `common::SuicideRefCounter<class common::detail::EmptyClass>'}
sub_4deba0(arg1)
___dyn_tls_init@12(&arg1[0x1c])
int32_t var_1c = 0x40
int32_t var_20 = arg1[5]
arg1[4] = &partsengine::CProjection::`vftable'
operator new(var_20)
int32_t var_24 = 0x40
operator new(arg1[6])

if ((arg2 & 1) != 0)
    int32_t var_1c_1 = 0x148
    operator new(arg1)

fsbase->NtTib.ExceptionList = ExceptionList
return arg1
