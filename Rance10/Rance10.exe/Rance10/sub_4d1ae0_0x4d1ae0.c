// 函数: sub_4d1ae0
// 地址: 0x4d1ae0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) =
    __ehhandler$??1?$__crt_win32_buffer@DU__crt_win32_buffer_no_resizing@@@@QAE@XZ
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_18 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
*arg1 = &partsengine::CFlatEmitterView::`vftable'{for `common::SuicideRefCounter<class common::detail::EmptyClass>'}
sub_4d1c50(arg1)
sub_5279d0(&arg1[0x44])
sub_4aa740(&arg1[0x11])
int32_t result = sub_4d4d50(&arg1[0xe])
void* ecx_3 = arg1[0xb]

if (ecx_3 != 0)
    result = sub_403160(ecx_3, (arg1[0xd] - ecx_3) s>> 2, 4)
    arg1[0xb] = 0
    arg1[0xc] = 0
    arg1[0xd] = 0

void* ecx_4 = arg1[6]

if (ecx_4 != 0)
    result = sub_403160(ecx_4, (arg1[8] - ecx_4) s>> 2, 4)
    arg1[6] = 0
    arg1[7] = 0
    arg1[8] = 0

fsbase->NtTib.ExceptionList = ExceptionList
return result
