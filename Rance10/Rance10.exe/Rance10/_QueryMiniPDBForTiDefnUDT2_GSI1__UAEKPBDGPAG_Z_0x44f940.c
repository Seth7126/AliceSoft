// 函数: ?QueryMiniPDBForTiDefnUDT2@GSI1@@UAEKPBDGPAG@Z
// 地址: 0x44f940
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72b0b8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList

if (arg2 == 0)
    struct _EXCEPTION_REGISTRATION_RECORD** eax_3
    eax_3.b = 0
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_3

int32_t* var_28
int32_t* eax_5 = sub_432270(&var_28, sub_45e8a0(0x75dd88))
int32_t* var_20 = nullptr
SRWLOCK var_1c
__builtin_memset(&var_1c, 0, 4)
sub_4323a0(&var_20, eax_5)
int32_t var_8_1 = 0
SRWLOCK var_24
__seterrormode(&var_24)
var_8_1.b = 1
int32_t* ecx_4 = var_28

if (ecx_4 != 0)
    var_28 = nullptr
    (*(*ecx_4 + 4))(eax_2)

var_8_1.b = 0
___crtSetUnhandledExceptionFilter(&var_24)
__Smtx_lock_shared(&var_1c)
int32_t ebx
ebx.b = var_20 != 0
__Smtx_unlock_shared(&var_1c)

if (ebx.b != 0)
    __Smtx_lock_shared(&var_1c)
    int32_t* esi_1 = var_20
    __Smtx_unlock_shared(&var_1c)
    int32_t* var_30
    int32_t* eax_9 = sub_432270(&var_30, (*(*esi_1 + 8))(arg2, 0))
    int32_t* var_18 = nullptr
    SRWLOCK var_14
    __builtin_memset(&var_14, 0, 4)
    sub_4323a0(&var_18, eax_9)
    SRWLOCK var_2c
    __seterrormode(&var_2c)
    var_8_1.b = 3
    int32_t* ecx_8 = var_30
    
    if (ecx_8 != 0)
        var_30 = nullptr
        (*(*ecx_8 + 4))(eax_2)
    
    var_8_1.b = 2
    ___crtSetUnhandledExceptionFilter(&var_2c)
    __Smtx_lock_shared(&var_14)
    ebx.b = var_18 != 0
    __Smtx_unlock_shared(&var_14)
    char eax_15
    
    if (ebx.b != 0)
        __Smtx_lock_shared(&var_14)
        int32_t* edi_1 = var_18
        __Smtx_unlock_shared(&var_14)
        __Smtx_lock_shared(&var_14)
        int32_t* esi_2 = var_18
        __Smtx_unlock_shared(&var_14)
        uint8_t* eax_14 = (*(*esi_2 + 0x18))((*(*edi_1 + 0x14))(eax_2))
        eax_15 = sub_67efe0(eax_14, eax_14, arg1)
    
    if (ebx.b == 0 || eax_15 == 0)
        ebx.b = 0
    else
        ebx.b = 1
    
    __seterrormode(&var_14)
    var_8_1.b = 4
    int32_t* ecx_12 = var_18
    
    if (ecx_12 != 0)
        var_18 = nullptr
        (*(*ecx_12 + 4))(eax_2)
    
    ___crtSetUnhandledExceptionFilter(&var_14)

__seterrormode(&var_1c)
int32_t var_8_2 = 5
int32_t* ecx_13 = var_20

if (ecx_13 != 0)
    var_20 = nullptr
    (*(*ecx_13 + 4))(eax_2)

___crtSetUnhandledExceptionFilter(&var_1c)
int32_t eax_17
eax_17.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
return eax_17
