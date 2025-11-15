// 函数: sub_6440d0
// 地址: 0x6440d0
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
*arg1 = &viewtrans::CDXTransition::`vftable'{for `common::SuicideRefCounter<class IViewTransition>'}
sub_644860(arg1)
int32_t* ecx = arg1[5]

if (ecx != 0)
    (*(*ecx + 4))(eax_2)
    arg1[5] = 0

int32_t* ecx_1 = arg1[4]

if (ecx_1 != 0)
    (*(*ecx_1 + 4))(eax_2)
    arg1[4] = 0

int32_t* ecx_2 = arg1[0xb]

if (ecx_2 != 0)
    (*(*ecx_2 + 4))(eax_2)
    arg1[0xb] = 0

if ((arg2 & 1) != 0)
    int32_t var_1c_1 = 0x30
    operator new(arg1)

fsbase->NtTib.ExceptionList = ExceptionList
return arg1
