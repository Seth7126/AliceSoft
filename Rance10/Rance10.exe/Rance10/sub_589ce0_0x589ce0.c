// 函数: sub_589ce0
// 地址: 0x589ce0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72fe6c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
__seterrormode(arg1 + 0x18)
int32_t var_8_1 = 0
int32_t* ecx = *(arg1 + 0x14)

if (ecx != 0)
    *(arg1 + 0x14) = 0
    (*(*ecx + 4))(eax_2)

___crtSetUnhandledExceptionFilter(arg1 + 0x18)
__seterrormode(arg1 + 0x10)
int32_t var_8_2 = 1
int32_t* ecx_1 = *(arg1 + 0xc)

if (ecx_1 != 0)
    *(arg1 + 0xc) = 0
    (*(*ecx_1 + 4))(eax_2)

int32_t result = ___crtSetUnhandledExceptionFilter(arg1 + 0x10)
fsbase->NtTib.ExceptionList = ExceptionList
return result
