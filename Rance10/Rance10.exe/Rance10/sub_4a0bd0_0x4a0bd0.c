// 函数: sub_4a0bd0
// 地址: 0x4a0bd0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_730e84
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_20
int32_t* eax_4 = sub_432270(&var_20, sub_4a5640(arg1 + 0xc0, arg4, arg5, arg6, arg7))
int32_t* var_18 = nullptr
SRWLOCK var_14
__builtin_memset(&var_14, 0, 4)
sub_4323a0(&var_18, eax_4)
int32_t var_8_1 = 0
SRWLOCK var_1c
__seterrormode(&var_1c)
var_8_1.b = 1
int32_t* ecx_3 = var_20

if (ecx_3 != 0)
    var_20 = nullptr
    (*(*ecx_3 + 4))(eax_2)

var_8_1.b = 0
___crtSetUnhandledExceptionFilter(&var_1c)
__Smtx_lock_shared(&var_14)
int32_t ebx
ebx.b = var_18 != 0
__Smtx_unlock_shared(&var_14)

if (ebx.b == 0)
    ebx.b = 0
else
    char eax_9
    
    if (arg3 == 0)
        __Smtx_lock_shared(&var_14)
        int32_t* esi_2 = var_18
        __Smtx_unlock_shared(&var_14)
        eax_9 = sub_4a0d40(arg2, esi_2)
    label_4a0ce5:
        
        if (eax_9 == 0)
            ebx.b = 0
        else
            ebx.b = 1
    else
        if (arg3 == 1)
            __Smtx_lock_shared(&var_14)
            int32_t* esi_1 = var_18
            __Smtx_unlock_shared(&var_14)
            eax_9 = sub_4a1000(arg2, esi_1)
            goto label_4a0ce5
        
        ebx.b = 0

__seterrormode(&var_14)
int32_t var_8_2 = 2
int32_t* ecx_6 = var_18

if (ecx_6 != 0)
    var_18 = nullptr
    (*(*ecx_6 + 4))(eax_2)

___crtSetUnhandledExceptionFilter(&var_14)
int32_t result
result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
return result
