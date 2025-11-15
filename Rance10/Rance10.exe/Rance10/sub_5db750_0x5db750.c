// 函数: sub_5db750
// 地址: 0x5db750
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72a8d6
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t eax_6 = (*(arg1 + 4) - 2) * *(arg1 + 8) * 3
int32_t __saved_ebp
int32_t eax_9 = (*(*arg2 + 0x4c))(__security_cookie ^ &__saved_ebp)
__seterrormode(arg1 + 0x18)
int32_t var_8_1 = 0
int32_t* ecx_1 = *(arg1 + 0x14)

if (ecx_1 != 0)
    *(arg1 + 0x14) = 0
    (*(*ecx_1 + 4))()

int32_t var_8_2 = 0xffffffff
*(arg1 + 0x14) = eax_9
___crtSetUnhandledExceptionFilter(arg1 + 0x18)
__Smtx_lock_shared(arg1 + 0x18)
int32_t esi_1 = *(arg1 + 0x14)
__Smtx_unlock_shared(arg1 + 0x18)

if (esi_1 == 0)
    int32_t eax_11
    eax_11.b = 0
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_11

__Smtx_lock_shared(arg1 + 0x18)
int32_t* edi_1 = *(arg1 + 0x14)
__Smtx_unlock_shared(arg1 + 0x18)
bool eax_14 = (*(*edi_1 + 8))(eax_6 * 2, 0) != 0
fsbase->NtTib.ExceptionList = ExceptionList
return eax_14
