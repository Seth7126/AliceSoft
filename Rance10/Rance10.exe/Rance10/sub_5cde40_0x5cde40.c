// 函数: sub_5cde40
// 地址: 0x5cde40
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7409a3
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_18 = 0
char eax_3 = sub_5d0530(*arg1, arg1[1])
void** ecx_1 = *arg1
char eax_5 = *arg1[3]
void** var_60 = arg1[2]
SRWLOCK var_64 = arg1[1]
int32_t* var_40
int32_t* var_38
int32_t* var_30
SRWLOCK var_2c
int32_t* var_20
SRWLOCK var_1c
int32_t* eax_7
int32_t ebx

if (eax_3 == 0)
    int32_t* eax_8 = sub_5cd8c0(ecx_1, &var_38, var_64, var_60, eax_5)
    var_20 = nullptr
    __builtin_memset(&var_1c, 0, 4)
    sub_4323a0(&var_20, eax_8)
    eax_7 = &var_20
    ebx = 0xc
else
    int32_t* eax_6 = sub_5cd540(ecx_1, &var_40, var_64, var_60, eax_5)
    var_30 = nullptr
    __builtin_memset(&var_2c, 0, 4)
    sub_4323a0(&var_30, eax_6)
    eax_7 = &var_30
    ebx = 3

int32_t* var_28 = nullptr
SRWLOCK var_24
__builtin_memset(&var_24, 0, 4)
sub_4323a0(&var_28, eax_7)
int32_t var_8_1 = 2

if ((ebx.b & 8) != 0)
    ebx &= 0xfffffff7
    int32_t var_18_1 = ebx
    __seterrormode(&var_1c)
    var_8_1.b = 3
    int32_t* ecx_5 = var_20
    
    if (ecx_5 != 0)
        var_20 = nullptr
        (*(*ecx_5 + 4))(eax_2)
    
    ___crtSetUnhandledExceptionFilter(&var_1c)

if ((ebx.b & 4) != 0)
    ebx &= 0xfffffffb
    int32_t var_18_2 = ebx
    SRWLOCK var_34
    __seterrormode(&var_34)
    var_8_1.b = 4
    int32_t* ecx_6 = var_38
    
    if (ecx_6 != 0)
        var_38 = nullptr
        (*(*ecx_6 + 4))(eax_2)
    
    ___crtSetUnhandledExceptionFilter(&var_34)

if ((ebx.b & 2) != 0)
    ebx &= 0xfffffffd
    int32_t var_18_3 = ebx
    __seterrormode(&var_2c)
    var_8_1.b = 6
    int32_t* ecx_7 = var_30
    
    if (ecx_7 != 0)
        var_30 = nullptr
        (*(*ecx_7 + 4))(eax_2)
    
    ___crtSetUnhandledExceptionFilter(&var_2c)

var_8_1.b = 7

if ((ebx.b & 1) != 0)
    SRWLOCK var_3c
    __seterrormode(&var_3c)
    var_8_1.b = 8
    int32_t* ecx_8 = var_40
    
    if (ecx_8 != 0)
        var_40 = nullptr
        (*(*ecx_8 + 4))(eax_2)
    
    var_8_1.b = 7
    ___crtSetUnhandledExceptionFilter(&var_3c)

__Smtx_lock_shared(&var_24)
ebx.b = var_28 != 0
__Smtx_unlock_shared(&var_24)
int32_t* result

if (ebx.b != 0)
    struct common::NotifyRefCounter<class ISurface>::sealengine::CResourceSurface::VTable** 
        eax_13 = sub_6e810c(0x2c)
    var_1c = eax_13
    var_8_1.b = 0xa
    int32_t* var_48
    int32_t* eax_15 = sub_432270(&var_48, sub_5d44b0(eax_13, &var_28, arg1[4], *arg1 + 0x94))
    result = arg2
    *result = 0
    result[1] = 0
    sub_4323a0(result, eax_15)
    SRWLOCK var_44
    __seterrormode(&var_44)
    var_8_1.b = 0xb
    int32_t* ecx_14 = var_48
    
    if (ecx_14 != 0)
        var_48 = nullptr
        (*(*ecx_14 + 4))(eax_2)
    
    ___crtSetUnhandledExceptionFilter(&var_44)
    __seterrormode(&var_24)
    int32_t var_8_3 = 0xc
else
    result = arg2
    *result = 0
    result[1] = 0
    __seterrormode(&var_24)
    int32_t var_8_2 = 9

int32_t* ecx_15 = var_28

if (ecx_15 != 0)
    var_28 = nullptr
    (*(*ecx_15 + 4))(eax_2)

___crtSetUnhandledExceptionFilter(&var_24)
fsbase->NtTib.ExceptionList = ExceptionList
return result
