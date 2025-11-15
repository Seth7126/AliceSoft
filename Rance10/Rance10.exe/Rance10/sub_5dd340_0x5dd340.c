// 函数: sub_5dd340
// 地址: 0x5dd340
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72deb6
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_14 = arg1
int32_t edi
int32_t var_20 = edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t __saved_ebp
int32_t eax_4 = (*(*arg3 + 0x54))(__security_cookie ^ &__saved_ebp)
__seterrormode(&arg1[1])
int32_t var_8_1 = 0
int32_t* ecx_1 = *arg1

if (ecx_1 != 0)
    *arg1 = 0
    (*(*ecx_1 + 4))()

int32_t var_8_2 = 0xffffffff
*arg1 = eax_4
___crtSetUnhandledExceptionFilter(&arg1[1])
__Smtx_lock_shared(&arg1[1])
int32_t esi_1 = *arg1
__Smtx_unlock_shared(&arg1[1])

if (esi_1 == 0)
    int32_t eax_6
    eax_6.b = 0
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_6

__Smtx_lock_shared(&arg1[1])
int32_t* esi_2 = *arg1
__Smtx_unlock_shared(&arg1[1])
int32_t eax_9 = (*(*esi_2 + 8))(arg2, 1)
fsbase->NtTib.ExceptionList = ExceptionList
return eax_9
