// 函数: sub_5c3c20
// 地址: 0x5c3c20
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_737ed6
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
sub_5c3e80(arg1)
__Smtx_lock_shared(&arg2[1])
void* edi_1 = *arg2
__Smtx_unlock_shared(&arg2[1])
int32_t* var_30_2 = arg3
int32_t var_34 = 0
int32_t* var_1c
sub_5688b0(arg1 + 0x58, sub_5cc810(*(arg1 + 0x234), &var_1c, edi_1))
SRWLOCK var_18
__seterrormode(&var_18)
int32_t var_8_1 = 0
int32_t* ecx_2 = var_1c

if (ecx_2 != 0)
    var_1c = nullptr
    int32_t edx_1 = ecx_2[1]
    ecx_2[1] -= 1
    (**ecx_2)(edx_1 - 1)

int32_t var_8_2 = 0xffffffff
___crtSetUnhandledExceptionFilter(&var_18)
__Smtx_lock_shared(arg1 + 0x5c)
int32_t edi_3 = *(arg1 + 0x58)
__Smtx_unlock_shared(arg1 + 0x5c)

if (edi_3 != 0)
    __Smtx_lock_shared(arg1 + 0x5c)
    char* ebx_3 = *(arg1 + 0x58)
    __Smtx_unlock_shared(arg1 + 0x5c)
    __Smtx_lock_shared(&arg2[1])
    void* edi_6 = *arg2
    __Smtx_unlock_shared(&arg2[1])
    
    if (sub_58e310(arg1 + 0x60, edi_6, arg1 + 0x10, ebx_3) != 0)
        __Smtx_lock_shared(&arg2[1])
        void* edi_7 = *arg2
        __Smtx_unlock_shared(&arg2[1])
        sub_58e540(arg1 + 0x60, edi_7)
        __Smtx_lock_shared(&arg2[1])
        void* edi_8 = *arg2
        __Smtx_unlock_shared(&arg2[1])
        sub_5b7350(arg1 + 0x70, *(edi_8 + 0x30))
        __Smtx_lock_shared(&arg2[1])
        void* edi_10 = *arg2
        __Smtx_unlock_shared(&arg2[1])
        sub_5b73c0(arg1 + 0x70, edi_10 + 0x24)
        __seterrormode(&arg2[1])
        sub_589d80(arg1 + 8, *arg2)
        ___crtSetUnhandledExceptionFilter(&arg2[1])
        int32_t result
        result.b = 1
        fsbase->NtTib.ExceptionList = ExceptionList
        return result

fsbase->NtTib.ExceptionList = ExceptionList
return 0
