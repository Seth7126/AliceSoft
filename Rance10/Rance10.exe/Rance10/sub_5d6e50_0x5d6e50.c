// 函数: sub_5d6e50
// 地址: 0x5d6e50
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72addc
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
sub_56a620(&arg1[7])
__seterrormode(&arg1[3])
int32_t var_8_1 = 0
int32_t* ecx_1 = arg1[2]

if (ecx_1 != 0)
    arg1[2] = 0
    (*(*ecx_1 + 4))(eax_2)

int32_t var_8_2 = 0xffffffff
___crtSetUnhandledExceptionFilter(&arg1[3])
int32_t eax_5 = (*(**arg1 + 0x50))(eax_2)
__seterrormode(&arg1[3])
int32_t var_8_3 = 1
int32_t* ecx_3 = arg1[2]

if (ecx_3 != 0)
    arg1[2] = 0
    (*(*ecx_3 + 4))()

int32_t var_8_4 = 0xffffffff
arg1[2] = eax_5
___crtSetUnhandledExceptionFilter(&arg1[3])
__Smtx_lock_shared(&arg1[3])
int32_t esi_1 = arg1[2]
__Smtx_unlock_shared(&arg1[3])

if (esi_1 != 0)
    __Smtx_lock_shared(&arg1[3])
    int32_t* edi_2 = arg1[2]
    __Smtx_unlock_shared(&arg1[3])
    
    if ((*(*edi_2 + 0x30))(arg1[4], arg1[5], 1, 3, 0, 1) != 0)
        bool result = sub_56a500(&arg1[7], 3, arg1[4], arg1[5], 5, *arg1, 1, 0) != 0
        fsbase->NtTib.ExceptionList = ExceptionList
        return result

fsbase->NtTib.ExceptionList = ExceptionList
return 0
