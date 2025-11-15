// 函数: sub_452480
// 地址: 0x452480
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) =
    __ehhandler$??1?$__crt_win32_buffer@DU__crt_win32_buffer_internal_dynamic_resizing@@@@QAE@XZ
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_8_1 = 0
int32_t* ecx = arg1[3]
*arg1 = &
    chipmunk::CTexture::`vftable'{for `common::SuicideRefCounter<class common::detail::EmptyClass>'}

if (ecx != 0)
    (*(*ecx + 4))(eax_2)
    arg1[3] = 0

int32_t* ecx_1 = arg1[2]

if (ecx_1 != 0)
    (*(*ecx_1 + 4))(eax_2)
    arg1[2] = 0

arg1[4].b = 0

if ((arg2 & 1) != 0)
    int32_t var_1c_1 = 0x14
    operator new(arg1)

fsbase->NtTib.ExceptionList = ExceptionList
return arg1
