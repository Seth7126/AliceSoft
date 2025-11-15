// 函数: sub_5cc410
// 地址: 0x5cc410
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72a4f6
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* ecx = arg1[2]

if (ecx != 0)
    sub_403160(ecx, arg1[4] - ecx, 1)
    arg1[2] = 0
    arg1[3] = 0
    arg1[4] = 0

__seterrormode(&arg1[1])
int32_t var_8_1 = 0
int32_t* ecx_1 = *arg1

if (ecx_1 != 0)
    *arg1 = 0
    (*(*ecx_1 + 4))(eax_2)

int32_t result = ___crtSetUnhandledExceptionFilter(&arg1[1])
fsbase->NtTib.ExceptionList = ExceptionList
return result
