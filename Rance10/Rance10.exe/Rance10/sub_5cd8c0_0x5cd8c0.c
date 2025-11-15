// 函数: sub_5cd8c0
// 地址: 0x5cd8c0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_740b4c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_18 = 0
int32_t* var_30
int32_t* eax_3 = sub_5cd2e0(arg1, &var_30, arg3)
int32_t* var_20 = nullptr
SRWLOCK var_1c
__builtin_memset(&var_1c, 0, 4)
sub_4323a0(&var_20, eax_3)
int32_t var_8_1 = 0
SRWLOCK var_2c
__seterrormode(&var_2c)
var_8_1.b = 1
int32_t* ecx_1 = var_30

if (ecx_1 != 0)
    var_30 = nullptr
    (*(*ecx_1 + 4))(eax_2)

var_8_1.b = 0
___crtSetUnhandledExceptionFilter(&var_2c)
__Smtx_lock_shared(&var_1c)
int32_t ebx
ebx.b = var_20 != 0
__Smtx_unlock_shared(&var_1c)
int32_t* result

if (ebx.b != 0)
    int32_t* var_38
    int32_t* eax_5 = sub_5cd2e0(arg1, &var_38, arg4)
    int32_t* var_28 = nullptr
    SRWLOCK var_24
    __builtin_memset(&var_24, 0, 4)
    sub_4323a0(&var_28, eax_5)
    SRWLOCK var_34
    __seterrormode(&var_34)
    var_8_1.b = 4
    int32_t* ecx_4 = var_38
    
    if (ecx_4 != 0)
        var_38 = nullptr
        (*(*ecx_4 + 4))(eax_2)
    
    var_8_1.b = 3
    ___crtSetUnhandledExceptionFilter(&var_34)
    __Smtx_lock_shared(&var_24)
    ebx.b = var_28 != 0
    __Smtx_unlock_shared(&var_24)
    SRWLOCK* var_70_13 = &var_24
    
    if (ebx.b != 0)
        __Smtx_lock_shared(var_70_13)
        int32_t* edi_1 = var_28
        __Smtx_unlock_shared(&var_24)
        __Smtx_lock_shared(&var_1c)
        int32_t* esi_1 = var_20
        __Smtx_unlock_shared(&var_1c)
        void var_58
        void var_50
        int32_t var_48
        int32_t var_40
        int32_t* eax_9
        int32_t ebx_1
        
        if (arg5 == 0)
            int32_t* eax_10 = sub_5cf540(arg1, &var_50, esi_1, edi_1)
            var_40 = 0
            int32_t var_3c_1 = 0
            sub_4323a0(&var_40, eax_10)
            eax_9 = &var_40
            ebx_1 = 0x18
        else
            int32_t* eax_8 = sub_5cf7c0(arg1, &var_58, esi_1, edi_1)
            var_48 = 0
            int32_t var_44_1 = 0
            sub_4323a0(&var_48, eax_8)
            eax_9 = &var_48
            ebx_1 = 6
        
        result = arg2
        *result = 0
        result[1] = 0
        sub_4323a0(result, eax_9)
        int32_t ebx_2 = ebx_1 | 1
        
        if ((ebx_2.b & 0x10) != 0)
            ebx_2 &= 0xffffffef
            sub_431b10(&var_40)
        
        if ((ebx_2.b & 8) != 0)
            ebx_2 &= 0xfffffff7
            sub_431b10(&var_50)
        
        if ((ebx_2.b & 4) != 0)
            ebx_2 &= 0xfffffffb
            sub_431b10(&var_48)
        
        int32_t var_8_4 = 3
        
        if ((ebx_2.b & 2) != 0)
            sub_431b10(&var_58)
        
        __seterrormode(&var_24)
        var_8_4.b = 9
        int32_t* ecx_14 = var_28
        
        if (ecx_14 != 0)
            var_28 = nullptr
            (*(*ecx_14 + 4))(eax_2)
        
        ___crtSetUnhandledExceptionFilter(&var_24)
        __seterrormode(&var_1c)
        int32_t var_8_5 = 0xa
    else
        result = arg2
        *result = 0
        result[1] = 0
        __seterrormode(var_70_13)
        var_8_1.b = 5
        int32_t* ecx_5 = var_28
        
        if (ecx_5 != 0)
            var_28 = nullptr
            (*(*ecx_5 + 4))(eax_2)
        
        ___crtSetUnhandledExceptionFilter(&var_24)
        __seterrormode(&var_1c)
        int32_t var_8_3 = 6
else
    result = arg2
    *result = 0
    result[1] = 0
    __seterrormode(&var_1c)
    int32_t var_8_2 = 2

int32_t* ecx_15 = var_20

if (ecx_15 != 0)
    var_20 = nullptr
    (*(*ecx_15 + 4))(eax_2)

___crtSetUnhandledExceptionFilter(&var_1c)
fsbase->NtTib.ExceptionList = ExceptionList
return result
