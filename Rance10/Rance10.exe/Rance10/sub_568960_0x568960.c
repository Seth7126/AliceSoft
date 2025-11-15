// 函数: sub_568960
// 地址: 0x568960
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_729896
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

for (int32_t* i = arg1; i != arg2; i = &i[2])
    __seterrormode(&i[1])
    int32_t var_8_1 = 0
    int32_t* ecx = *i
    
    if (ecx != 0)
        *i = 0
        (*(*ecx + 4))(eax_2)
    
    int32_t var_8_2 = 0xffffffff
    result = ___crtSetUnhandledExceptionFilter(&i[1])

fsbase->NtTib.ExceptionList = ExceptionList
return result
