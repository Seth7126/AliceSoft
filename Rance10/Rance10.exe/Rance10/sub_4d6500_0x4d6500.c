// 函数: sub_4d6500
// 地址: 0x4d6500
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_729896
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
arg1[1] = 1
*arg1 = &thread::CLockedWorkerThread<class partsengine::CFlatSprite, bool>::`vftable'{for `common::SuicideRefCounter<class IWorkerThread>'}
int32_t* var_18
int32_t* eax_3 = sub_44cfc0(&var_18, arg2)
arg1[2] = 0
arg1[3] = 0
sub_4323a0(&arg1[2], eax_3)
SRWLOCK var_14
__seterrormode(&var_14)
int32_t var_8_1 = 0
int32_t* ecx_2 = var_18

if (ecx_2 != 0)
    var_18 = nullptr
    (*(*ecx_2 + 4))(eax_2)

___crtSetUnhandledExceptionFilter(&var_14)
arg1[4] = sub_4dc110
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
