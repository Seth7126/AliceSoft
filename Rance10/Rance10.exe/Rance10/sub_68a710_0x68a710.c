// 函数: sub_68a710
// 地址: 0x68a710
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72a556
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_14 = arg1
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
__seterrormode(&arg2[1])
__seterrormode(&arg1[1])
int32_t* eax_3 = arg1
int32_t* ecx = *eax_3

if (ecx != *arg2)
    int32_t var_8_1 = 0
    
    if (ecx != 0)
        *eax_3 = 0
        (*(*ecx + 8))(ecx)
    
    *arg1 = *arg2
    *arg2 = 0

___crtSetUnhandledExceptionFilter(&arg1[1])
int32_t result = ___crtSetUnhandledExceptionFilter(&arg2[1])
fsbase->NtTib.ExceptionList = ExceptionList
return result
