// 函数: sub_5cd2e0
// 地址: 0x5cd2e0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_740a28
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_4c = 0
int32_t* var_34 = nullptr
SRWLOCK var_30 = 0
int32_t var_8_1 = 0
__Smtx_lock_shared(&var_30)
var_8_1.b = 1
void* var_2c
void* ebx
ebx.b = sub_5cf400(arg1, sub_4175e0(__Smtx_unlock_shared(&var_30), arg3, &var_2c, ".qnt"), &var_34)
var_8_1.b = 0
int32_t var_18

if (var_18 u>= 0x10)
    sub_403160(var_2c, var_18 + 1, 1)

SRWLOCK* var_60_3 = &var_30
int32_t* result

if (ebx.b != 0)
    __Smtx_lock_shared(var_60_3)
    ebx.b = var_34 != 0
    __Smtx_unlock_shared(&var_30)
    SRWLOCK* var_60_6 = &var_30
    
    if (ebx.b != 0)
        __Smtx_lock_shared(var_60_6)
        int32_t* eax_9 = var_34
        __Smtx_unlock_shared(&var_30)
        __Smtx_lock_shared(&var_30)
        int32_t* ebx_1 = var_34
        __Smtx_unlock_shared(&var_30)
        __Smtx_lock_shared(arg1 + 0x2c)
        int32_t* edi_2 = *(arg1 + 0x28)
        __Smtx_unlock_shared(arg1 + 0x2c)
        int32_t* var_3c
        int32_t* eax_15 =
            sub_432270(&var_3c, (*(*edi_2 + 8))((*(*ebx_1 + 0x18))((*(*eax_9 + 0x14))(eax_2))))
        *arg2 = 0
        arg2[1] = 0
        sub_4323a0(arg2, eax_15)
        SRWLOCK var_38
        __seterrormode(&var_38)
        var_8_1.b = 4
        int32_t* ecx_9 = var_3c
        
        if (ecx_9 != 0)
            var_3c = nullptr
            (*(*ecx_9 + 4))()
        
        ___crtSetUnhandledExceptionFilter(&var_38)
        __seterrormode(&var_30)
        int32_t var_8_4 = 5
        int32_t* ecx_10 = var_34
        
        if (ecx_10 != 0)
            var_34 = nullptr
            (*(*ecx_10 + 4))()
        
        ___crtSetUnhandledExceptionFilter(&var_30)
        result = arg2
    else
        *arg2 = 0
        arg2[1] = 0
        __seterrormode(var_60_6)
        int32_t var_8_3 = 3
        int32_t* ecx_3 = var_34
        
        if (ecx_3 != 0)
            var_34 = nullptr
            (*(*ecx_3 + 4))(eax_2)
        
        ___crtSetUnhandledExceptionFilter(&var_30)
        result = arg2
else
    *arg2 = 0
    arg2[1] = 0
    __seterrormode(var_60_3)
    int32_t var_8_2 = 2
    int32_t* ecx_2 = var_34
    
    if (ecx_2 != 0)
        var_34 = nullptr
        (*(*ecx_2 + 4))(eax_2)
    
    ___crtSetUnhandledExceptionFilter(&var_30)
    result = arg2

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
