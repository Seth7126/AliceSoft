// 函数: sub_566980
// 地址: 0x566980
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73bf64
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_34 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_14 = 0
int32_t* var_24
void* ecx
int32_t* eax_3 = sub_566d60(ecx, &var_24, arg2, arg3, arg4)
int32_t* var_1c = nullptr
SRWLOCK var_18
__builtin_memset(&var_18, 0, 4)
sub_5688b0(&var_1c, eax_3)
int32_t var_8_1 = 0
SRWLOCK var_20
__seterrormode(&var_20)
var_8_1.b = 1
int32_t* ecx_2 = var_24

if (ecx_2 != 0)
    var_24 = nullptr
    int32_t edx_1 = ecx_2[1]
    ecx_2[1] -= 1
    (**ecx_2)(edx_1 - 1)

var_8_1.b = 0
___crtSetUnhandledExceptionFilter(&var_20)
__Smtx_lock_shared(&var_18)
int32_t ebx
ebx.b = var_1c != 0
__Smtx_unlock_shared(&var_18)
int32_t* result

if (ebx.b != 0)
    __Smtx_lock_shared(&var_18)
    int32_t* esi = var_1c
    __Smtx_unlock_shared(&var_18)
    
    if (arg5 s< 0)
    label_566b1f:
        result = arg1
        result[4] = 0
        result[5] = 0
        result[5] = 0xf
        bool cond:1_1 = result[5] u< 0x10
        result[4] = 0
        int32_t* result_2
        
        if (cond:1_1)
            result_2 = result
        else
            result_2 = *result
        
        *result_2 = 0
    else
        int32_t edx_4 = esi[0xe]
        
        if (arg5 s>= (esi[0xf] - edx_4) s>> 6)
            goto label_566b1f
        
        int32_t ecx_5 = arg5 << 6
        void** ecx_6 = ecx_5 + edx_4
        
        if (ecx_5 == neg.d(edx_4))
            goto label_566b1f
        
        result = arg1
        result[4] = 0
        result[5] = 0
        result[5] = 0xf
        bool cond:2_1 = result[5] u< 0x10
        result[4] = 0
        
        if (cond:2_1)
            *result = 0
            sub_403590(result, ecx_6, 0, 0xffffffff)
        else
            **result = 0
            sub_403590(result, ecx_6, 0, 0xffffffff)
    
    sub_568430(&var_1c)
else
    result = arg1
    result[5] = 0xf
    result[4] = 0
    char* result_1
    
    if (result[5] u< 0x10)
        result_1 = result
    else
        result_1 = *result
    
    *result_1 = 0
    __seterrormode(&var_18)
    int32_t var_8_2 = 2
    int32_t* ecx_3 = var_1c
    
    if (ecx_3 != 0)
        var_1c = nullptr
        int32_t edi_1 = ecx_3[1]
        ecx_3[1] -= 1
        (**ecx_3)(edi_1 - 1)
    
    ___crtSetUnhandledExceptionFilter(&var_18)

fsbase->NtTib.ExceptionList = ExceptionList
return result
