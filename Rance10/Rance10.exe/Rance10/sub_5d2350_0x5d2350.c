// 函数: sub_5d2350
// 地址: 0x5d2350
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72deb6
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_14 = arg1
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
*arg1 = 0
arg1[1] = 0
__seterrormode(&arg1[1])
int32_t var_8_1 = 0
int32_t* ecx = *arg1

if (ecx != 0)
    *arg1 = 0
    int32_t edi_1 = ecx[1]
    ecx[1] -= 1
    (**ecx)(edi_1 - 1)

*arg1 = arg2
___crtSetUnhandledExceptionFilter(&arg1[1])
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
