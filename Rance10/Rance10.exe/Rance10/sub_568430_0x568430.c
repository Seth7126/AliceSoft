// 函数: sub_568430
// 地址: 0x568430
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72a4f6
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_1c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
__seterrormode(&arg1[1])
int32_t var_8_1 = 0
int32_t* ecx = *arg1

if (ecx != 0)
    *arg1 = 0
    int32_t edi_1 = ecx[1]
    ecx[1] -= 1
    (**ecx)(edi_1 - 1)

int32_t result = ___crtSetUnhandledExceptionFilter(&arg1[1])
fsbase->NtTib.ExceptionList = ExceptionList
return result
