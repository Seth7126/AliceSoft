// 函数: sub_5ca560
// 地址: 0x5ca560
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_740414
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
__seterrormode(&arg1[1])
int32_t var_8_1 = 0
int32_t* ecx = *arg1

if (ecx != 0)
    *arg1 = 0
    (*(*ecx + 4))(eax_2)

int32_t var_8_2 = 0xffffffff
___crtSetUnhandledExceptionFilter(&arg1[1])
arg1[2] = 0
arg1[3] = 0
arg1[4].b = 0
arg1[5] = 0
arg1[6].b = 0
int32_t eax_5 = (*(*arg7 + 0x50))(eax_2)
__seterrormode(&arg1[1])
int32_t var_8_3 = 1
int32_t* ecx_2 = *arg1

if (ecx_2 != 0)
    *arg1 = 0
    (*(*ecx_2 + 4))()

int32_t var_8_4 = 0xffffffff
*arg1 = eax_5
___crtSetUnhandledExceptionFilter(&arg1[1])
__Smtx_lock_shared(&arg1[1])
int32_t esi_2 = *arg1
__Smtx_unlock_shared(&arg1[1])
int32_t result

if (esi_2 == 0)
    result.b = 0
else
    __Smtx_lock_shared(&arg1[1])
    int32_t* esi_3 = *arg1
    __Smtx_unlock_shared(&arg1[1])
    
    if ((*(*esi_3 + 0x30))(arg2, arg3, 1, arg4, arg5, arg6) != 0)
        arg1[2] = arg2
        arg1[3] = arg3
        arg1[5] = arg5
        result.b = 1
        arg1[4].b = arg6.b
        arg1[6].b = 1
    else
        void* var_2c
        sub_403360(&var_2c, 0x76a5f8)
        int32_t var_8_5 = 2
        sub_5e01e0(&var_2c)
        int32_t var_18
        
        if (var_18 u>= 0x10)
            sub_403160(var_2c, var_18 + 1, 1)
        
        result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
