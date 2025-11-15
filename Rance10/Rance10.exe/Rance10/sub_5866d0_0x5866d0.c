// 函数: sub_5866d0
// 地址: 0x5866d0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7273dc
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
__seterrormode(&arg1[1])
int32_t* ecx = *arg1

if (ecx != arg2)
    int32_t var_8_1 = 0
    
    if (ecx != 0)
        *arg1 = 0
        (*(*ecx + 4))(eax_2)
    
    *arg1 = arg2
    int32_t var_8_2 = 1
    
    if (arg2 != 0)
        (**arg2)(eax_2)

int32_t result = ___crtSetUnhandledExceptionFilter(&arg1[1])
fsbase->NtTib.ExceptionList = ExceptionList
return result
