// 函数: sub_5c5520
// 地址: 0x5c5520
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72fe6c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
sub_575790(arg1 + 0x54)
__seterrormode(arg1 + 0x3c)
int32_t var_8_1 = 0
int32_t* ecx_1 = *(arg1 + 0x38)

if (ecx_1 != 0)
    *(arg1 + 0x38) = 0
    (*(*ecx_1 + 4))(eax_2)

___crtSetUnhandledExceptionFilter(arg1 + 0x3c)
__seterrormode(arg1 + 0x14)
int32_t var_8_2 = 1
int32_t* ecx_2 = *(arg1 + 0x10)

if (ecx_2 != 0)
    *(arg1 + 0x10) = 0
    (*(*ecx_2 + 4))(eax_2)

int32_t result = ___crtSetUnhandledExceptionFilter(arg1 + 0x14)
fsbase->NtTib.ExceptionList = ExceptionList
return result
