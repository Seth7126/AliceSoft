// 函数: sub_58f120
// 地址: 0x58f120
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_729896
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t __saved_ebp
int32_t eax_4 = (*(*arg2 + 0x4c))(__security_cookie ^ &__saved_ebp)
__seterrormode(arg1 + 0xc)
int32_t var_8_1 = 0
int32_t* ecx_1 = *(arg1 + 8)

if (ecx_1 != 0)
    *(arg1 + 8) = 0
    (*(*ecx_1 + 4))()

*(arg1 + 8) = eax_4
___crtSetUnhandledExceptionFilter(arg1 + 0xc)
__Smtx_lock_shared(arg1 + 0xc)
int32_t esi_1 = *(arg1 + 8)
__Smtx_unlock_shared(arg1 + 0xc)
int32_t result
result.b = esi_1 != 0
fsbase->NtTib.ExceptionList = ExceptionList
return result
