// 函数: sub_5ce600
// 地址: 0x5ce600
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_740cda
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_28 = 0

if (arg4 s<= 0)
    *arg2 = 0
    arg2[1] = 0
    fsbase->NtTib.ExceptionList = ExceptionList
    return arg2

int32_t __saved_ebp
int32_t eax_5 = (*(*arg3 + 0x10))(__security_cookie ^ &__saved_ebp)
int32_t eax_6 = (*(*arg3 + 0x14))()
int32_t eax_8 = eax_5 s>> arg4.b

if (eax_8 s< 1)
    eax_8 = 1

int32_t eax_10 = eax_6 s>> arg4.b

if (eax_10 s< 1)
    eax_10 = 1

int32_t* ebx
ebx.b = (*(*arg3 + 0x24))()
char eax_15 = (*(*arg3 + 0x28))()
int32_t* var_30 = nullptr
SRWLOCK var_2c
__builtin_memset(&var_2c, 0, 4)
int32_t var_8_1 = 0
int32_t* esi_2

if (ebx.b == 0 || eax_15 == 0)
    __Smtx_lock_shared(arg1 + 0x20)
    int32_t* edi_2 = *(arg1 + 0x1c)
    __Smtx_unlock_shared(arg1 + 0x20)
    int32_t* eax_19 = (*(*edi_2 + 0xc))(eax_8, eax_10, 0x20)
    __seterrormode(&var_2c)
    var_8_1.b = 1
    int32_t* ecx_12 = var_30
    
    if (ecx_12 != 0)
        var_30 = nullptr
        (*(*ecx_12 + 4))()
    
    var_8_1.b = 0
    var_30 = eax_19
    ___crtSetUnhandledExceptionFilter(&var_2c)
    __Smtx_lock_shared(&var_2c)
    ebx.b = var_30 != 0
    __Smtx_unlock_shared(&var_2c)
    
    if (ebx.b != 0)
        goto label_5ce7f3
    
    esi_2 = arg2
    *esi_2 = 0
    esi_2[1] = 0
    __seterrormode(&var_2c)
    int32_t var_8_2 = 2
    goto label_5ce85b

__Smtx_lock_shared(arg1 + 0x20)
int32_t* edi_1 = *(arg1 + 0x1c)
__Smtx_unlock_shared(arg1 + 0x20)
sub_44cdb0(&var_30, (*(*edi_1 + 8))(eax_8, eax_10, 0x20))
__Smtx_lock_shared(&var_2c)
ebx.b = var_30 != 0
__Smtx_unlock_shared(&var_2c)

if (ebx.b != 0)
label_5ce7f3:
    __Smtx_lock_shared(&var_2c)
    int32_t* esi_5 = var_30
    __Smtx_unlock_shared(&var_2c)
    (*(**(arg1 + 0x24) + 0x40))(esi_5, 0, 0, eax_8, eax_10, arg3, 0, 0, eax_5, eax_6)
    esi_2 = arg2
    *esi_2 = 0
    esi_2[1] = 0
    sub_4323a0(esi_2, &var_30)
    __seterrormode(&var_2c)
    int32_t var_8_3 = 3
label_5ce85b:
    int32_t* ecx_16 = var_30
    
    if (ecx_16 != 0)
        var_30 = nullptr
        (*(*ecx_16 + 4))()
    
    ___crtSetUnhandledExceptionFilter(&var_2c)
else
    esi_2 = arg2
    *esi_2 = 0
    esi_2[1] = 0
    sub_431b10(&var_30)

fsbase->NtTib.ExceptionList = ExceptionList
return esi_2
