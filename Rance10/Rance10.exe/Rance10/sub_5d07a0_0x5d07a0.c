// 函数: sub_5d07a0
// 地址: 0x5d07a0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_740fcc
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_70 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
__Smtx_lock_shared(arg1 + 0x4c)
void* edi_1 = *(arg1 + 0x48)
__Smtx_unlock_shared(arg1 + 0x4c)
int32_t var_74_1 = arg4
int32_t result = sub_5d4ae0(edi_1, arg2)

if (result.b != 0)
    char var_44
    int32_t* eax_5 = sub_4175e0(result, arg2, &var_44, U"/")
    int32_t var_8_1 = 0
    int32_t* var_58
    char var_2c
    int32_t* eax_7 = sub_5d1380(arg1 + 0x7c, &var_58, sub_417750(eax_5, eax_5, &var_2c, arg3))
    int32_t* var_4c = nullptr
    SRWLOCK var_48
    __builtin_memset(&var_48, 0, 4)
    sub_5688b0(&var_4c, eax_7)
    SRWLOCK var_54
    __seterrormode(&var_54)
    var_8_1.b = 2
    int32_t* ebx_2 = var_58
    
    if (ebx_2 != 0)
        var_58 = nullptr
        int32_t ecx_5 = ebx_2[1]
        ebx_2[1] -= 1
        (**ebx_2)(ecx_5 - 1)
    
    ___crtSetUnhandledExceptionFilter(&var_54)
    int32_t var_18
    
    if (var_18 u>= 0x10)
        sub_403160(var_2c.d, var_18 + 1, 1)
    
    int32_t var_18_1 = 0xf
    int32_t var_1c_1 = 0
    var_2c = 0
    var_8_1.b = 3
    int32_t var_30
    
    if (var_30 u>= 0x10)
        sub_403160(var_44.d, var_30 + 1, 1)
    
    int32_t var_30_1 = 0xf
    int32_t var_34_1 = 0
    var_44 = 0
    __Smtx_lock_shared(&var_48)
    ebx_2.b = var_4c != 0
    __Smtx_unlock_shared(&var_48)
    
    if (ebx_2.b != 0)
        __Smtx_lock_shared(&var_48)
        int32_t* esi_1 = var_4c
        __Smtx_unlock_shared(&var_48)
        sub_592150(esi_1, sub_5d05c0(arg1, arg2))
        ebx_2.b = 1
    
    __seterrormode(&var_48)
    int32_t var_8_2 = 4
    int32_t* ecx_9 = var_4c
    
    if (ecx_9 != 0)
        var_4c = nullptr
        int32_t esi_2 = ecx_9[1]
        ecx_9[1] -= 1
        (**ecx_9)(esi_2 - 1)
    
    ___crtSetUnhandledExceptionFilter(&var_48)
    result.b = ebx_2.b

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
