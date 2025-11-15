// 函数: sub_5ce240
// 地址: 0x5ce240
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_740ca3
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_18 = 0
char eax_3 = sub_5d0530(*arg1, arg1[1])
void* ecx_1 = *arg1
void** var_6c_1 = arg1[1]
int32_t* var_48
int32_t* var_40
int32_t* var_38
SRWLOCK var_34
int32_t* var_20
SRWLOCK var_1c
int32_t* eax_5
int32_t ebx

if (eax_3 == 0)
    int32_t* eax_6 = sub_5cd2e0(ecx_1, &var_40, var_6c_1)
    var_20 = nullptr
    __builtin_memset(&var_1c, 0, 4)
    sub_4323a0(&var_20, eax_6)
    eax_5 = &var_20
    ebx = 0xc
else
    int32_t* eax_4 = sub_5cd140(ecx_1, &var_48, var_6c_1)
    var_38 = nullptr
    __builtin_memset(&var_34, 0, 4)
    sub_4323a0(&var_38, eax_4)
    eax_5 = &var_38
    ebx = 3

int32_t* var_28 = nullptr
SRWLOCK var_24
__builtin_memset(&var_24, 0, 4)
sub_4323a0(&var_28, eax_5)
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
    SRWLOCK var_3c
    __seterrormode(&var_3c)
    var_8_1.b = 4
    int32_t* ecx_6 = var_40
    
    if (ecx_6 != 0)
        var_40 = nullptr
        (*(*ecx_6 + 4))(eax_2)
    
    ___crtSetUnhandledExceptionFilter(&var_3c)

if ((ebx.b & 2) != 0)
    ebx &= 0xfffffffd
    int32_t var_18_3 = ebx
    __seterrormode(&var_34)
    var_8_1.b = 6
    int32_t* ecx_7 = var_38
    
    if (ecx_7 != 0)
        var_38 = nullptr
        (*(*ecx_7 + 4))(eax_2)
    
    ___crtSetUnhandledExceptionFilter(&var_34)

var_8_1.b = 7

if ((ebx.b & 1) != 0)
    SRWLOCK var_44
    __seterrormode(&var_44)
    var_8_1.b = 8
    int32_t* ecx_8 = var_48
    
    if (ecx_8 != 0)
        var_48 = nullptr
        (*(*ecx_8 + 4))(eax_2)
    
    var_8_1.b = 7
    ___crtSetUnhandledExceptionFilter(&var_44)

__Smtx_lock_shared(&var_24)
ebx.b = var_28 != 0
__Smtx_unlock_shared(&var_24)
SRWLOCK* var_6c_15 = &var_24
int32_t* result

if (ebx.b != 0)
    __Smtx_lock_shared(var_6c_15)
    int32_t* esi = var_28
    __Smtx_unlock_shared(&var_24)
    int32_t* var_50
    int32_t* eax_11 = sub_5cf980(*arg1, &var_50, esi)
    int32_t* var_30 = nullptr
    SRWLOCK var_2c
    __builtin_memset(&var_2c, 0, 4)
    sub_4323a0(&var_30, eax_11)
    SRWLOCK var_4c
    __seterrormode(&var_4c)
    var_8_1.b = 0xb
    int32_t* ecx_11 = var_50
    
    if (ecx_11 != 0)
        var_50 = nullptr
        (*(*ecx_11 + 4))(eax_2)
    
    var_8_1.b = 0xa
    ___crtSetUnhandledExceptionFilter(&var_4c)
    __Smtx_lock_shared(&var_2c)
    ebx.b = var_30 != 0
    __Smtx_unlock_shared(&var_2c)
    
    if (ebx.b != 0)
        SRWLOCK eax_14 = sub_6e810c(0x2c)
        var_1c = eax_14
        var_8_1.b = 0xe
        int32_t* var_58
        int32_t* eax_16 = sub_432270(&var_58, sub_5d44b0(eax_14, &var_30, arg1[2], *arg1 + 0x94))
        result = arg2
        *result = 0
        result[1] = 0
        sub_4323a0(result, eax_16)
        SRWLOCK var_54
        __seterrormode(&var_54)
        var_8_1.b = 0xf
        int32_t* ecx_18 = var_58
        
        if (ecx_18 != 0)
            var_58 = nullptr
            (*(*ecx_18 + 4))(eax_2)
        
        ___crtSetUnhandledExceptionFilter(&var_54)
        __seterrormode(&var_2c)
        var_8_1.b = 0x10
        int32_t* ecx_19 = var_30
        
        if (ecx_19 != 0)
            var_30 = nullptr
            (*(*ecx_19 + 4))(eax_2)
        
        ___crtSetUnhandledExceptionFilter(&var_2c)
        __seterrormode(&var_24)
        int32_t var_8_4 = 0x11
    else
        result = arg2
        *result = 0
        result[1] = 0
        __seterrormode(&var_2c)
        var_8_1.b = 0xc
        int32_t* ecx_12 = var_30
        
        if (ecx_12 != 0)
            var_30 = nullptr
            (*(*ecx_12 + 4))(eax_2)
        
        ___crtSetUnhandledExceptionFilter(&var_2c)
        __seterrormode(&var_24)
        int32_t var_8_3 = 0xd
else
    result = arg2
    *result = 0
    result[1] = 0
    __seterrormode(var_6c_15)
    int32_t var_8_2 = 9

int32_t* ecx_20 = var_28

if (ecx_20 != 0)
    var_28 = nullptr
    (*(*ecx_20 + 4))(eax_2)

___crtSetUnhandledExceptionFilter(&var_24)
fsbase->NtTib.ExceptionList = ExceptionList
return result
