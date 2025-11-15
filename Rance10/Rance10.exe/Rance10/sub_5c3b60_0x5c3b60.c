// 函数: sub_5c3b60
// 地址: 0x5c3b60
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7273dc
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_20 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
sub_58ee80(arg1 + 0x64)
__seterrormode(arg1 + 0x5c)
int32_t var_8_1 = 0
int32_t* ecx_1 = *(arg1 + 0x58)

if (ecx_1 != 0)
    *(arg1 + 0x58) = 0
    int32_t edx_1 = ecx_1[1]
    ecx_1[1] -= 1
    (**ecx_1)(edx_1 - 1)

___crtSetUnhandledExceptionFilter(arg1 + 0x5c)
__seterrormode(arg1 + 0xc)
int32_t var_8_2 = 1
int32_t* ecx_2 = *(arg1 + 8)

if (ecx_2 != 0)
    *(arg1 + 8) = 0
    int32_t ebx_1 = ecx_2[1]
    ecx_2[1] -= 1
    (**ecx_2)(ebx_1 - 1)

int32_t result = ___crtSetUnhandledExceptionFilter(arg1 + 0xc)
fsbase->NtTib.ExceptionList = ExceptionList
return result
