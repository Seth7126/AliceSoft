// 函数: sub_58fde0
// 地址: 0x58fde0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72a8d6
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
sub_58fee0(arg1)

if (arg3[4] != 0)
    int32_t* var_18
    sub_5688b0(arg1, sub_5cc4b0(arg1[8], &var_18, arg2, arg3))
    SRWLOCK var_14
    __seterrormode(&var_14)
    int32_t var_8_1 = 0
    int32_t* ecx_2 = var_18
    
    if (ecx_2 != 0)
        var_18 = nullptr
        int32_t edx_1 = ecx_2[1]
        ecx_2[1] -= 1
        (**ecx_2)(edx_1 - 1)
    
    int32_t var_8_2 = 0xffffffff
    ___crtSetUnhandledExceptionFilter(&var_14)
    __Smtx_lock_shared(&arg1[1])
    int32_t esi_1 = *arg1
    __Smtx_unlock_shared(&arg1[1])
    
    if (esi_1 == 0)
        int32_t eax_7
        eax_7.b = 0
        fsbase->NtTib.ExceptionList = ExceptionList
        return eax_7
    
    if (&arg1[2] != arg3)
        sub_403590(&arg1[2], arg3, 0, 0xffffffff)

int32_t* eax_3
eax_3.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
return eax_3
