// 函数: sub_5dc7a0
// 地址: 0x5dc7a0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7415bc
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
arg1[9].b = 0
int32_t eax_5 = (*(*arg4 + 0x58))(eax_2)
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
char result

if (esi_2 != 0)
    int32_t var_20 = 0
    int32_t var_1c_1 = 4
    int32_t var_18_1 = 6
    __Smtx_lock_shared(&arg1[1])
    int32_t* esi_3 = *arg1
    __Smtx_unlock_shared(&arg1[1])
    int32_t ecx_4
    result, ecx_4 = (*(*esi_3 + 8))(4, &var_20, 3, 0)
    
    if (result == 0)
        result = 0
    else
        int32_t var_48_1 = ecx_4
        
        if (sub_5dc9f0(arg1, arg2, arg3, arg5, arg6, 0xffffffff, 0x3f800000, 0x3f800000) == 0)
            result = 0
        else
            result = 1
            arg1[2] = arg2
            arg1[3] = arg3
            arg1[4] = arg5
            arg1[5] = arg6
            arg1[6] = 0xffffffff
            arg1[7] = 0x3f800000
            arg1[8] = 0x3f800000
            arg1[9].b = 1
else
    result = 0

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
