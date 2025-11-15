// 函数: sub_57daf0
// 地址: 0x57daf0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73befc
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList

if (arg1[0xd] == 0)
    struct _EXCEPTION_REGISTRATION_RECORD** eax_3
    eax_3.b = 0
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_3

__seterrormode(&arg1[3])
int32_t var_8_1 = 0
int32_t* ecx_2 = arg1[2]

if (ecx_2 != 0)
    arg1[2] = 0
    (*(*ecx_2 + 4))(eax_2)

int32_t var_8_2 = 0xffffffff
___crtSetUnhandledExceptionFilter(&arg1[3])
int32_t eax_5 = arg1[0xc]
int32_t ecx_3 = 0

if (eax_5 + arg1[0xb] s>= 0)
    ecx_3 = eax_5 + arg1[0xb]

if (ecx_3 s<= 0)
    int32_t eax_6
    eax_6.b = 1
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_6

__Smtx_lock_shared(&arg1[1])
int32_t* esi_1 = *arg1
__Smtx_unlock_shared(&arg1[1])
int32_t* var_1c
sub_4323a0(&arg1[2], sub_5ce600(arg1[0xd], &var_1c, esi_1, ecx_3))
SRWLOCK var_18
__seterrormode(&var_18)
int32_t var_8_3 = 1
int32_t* ecx_8 = var_1c

if (ecx_8 != 0)
    var_1c = nullptr
    (*(*ecx_8 + 4))(eax_2)

___crtSetUnhandledExceptionFilter(&var_18)
__Smtx_lock_shared(&arg1[3])
int32_t esi_2 = arg1[2]
__Smtx_unlock_shared(&arg1[3])
int32_t eax_9
eax_9.b = esi_2 != 0
fsbase->NtTib.ExceptionList = ExceptionList
return eax_9
