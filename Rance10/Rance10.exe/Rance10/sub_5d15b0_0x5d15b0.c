// 函数: sub_5d15b0
// 地址: 0x5d15b0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_728076
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_20 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
__seterrormode(&arg1[7])
int32_t var_8_1 = 0
int32_t* ecx = arg1[6]

if (ecx != 0)
    arg1[6] = 0
    int32_t edi_1 = ecx[1]
    ecx[1] -= 1
    (**ecx)(edi_1 - 1)

___crtSetUnhandledExceptionFilter(&arg1[7])
int32_t eax_5 = arg1[5]

if (eax_5 u>= 0x10)
    eax_5 = sub_403160(*arg1, eax_5 + 1, 1)

arg1[5] = 0xf
bool cond:0 = arg1[5] u< 0x10
arg1[4] = 0

if (cond:0)
    *arg1 = 0
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_5

char* eax_7 = *arg1
*eax_7 = 0
fsbase->NtTib.ExceptionList = ExceptionList
return eax_7
