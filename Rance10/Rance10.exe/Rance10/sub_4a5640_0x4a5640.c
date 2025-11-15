// 函数: sub_4a5640
// 地址: 0x4a5640
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_731444
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList

if (arg4 s<= 0 || arg5 s<= 0)
    fsbase->NtTib.ExceptionList = ExceptionList
    return 0

int32_t* ecx_2 = data_7fcbd4
int32_t edx

if (ecx_2 != 0)
    (**ecx_2)(eax_2)
    edx = data_7fcbd4
else
    edx = 0

int32_t* var_24
int32_t* eax_5 = sub_432270(&var_24, edx)
int32_t* var_1c = nullptr
SRWLOCK var_18
__builtin_memset(&var_18, 0, 4)
sub_4323a0(&var_1c, eax_5)
int32_t var_8_1 = 0
SRWLOCK var_20
__seterrormode(&var_20)
var_8_1.b = 1
int32_t* ecx_5 = var_24

if (ecx_5 != 0)
    var_24 = nullptr
    (*(*ecx_5 + 4))(eax_2)

var_8_1.b = 0
___crtSetUnhandledExceptionFilter(&var_20)
__Smtx_lock_shared(&var_18)
int32_t ebx
ebx.b = var_1c != 0
__Smtx_unlock_shared(&var_18)
int32_t* result

if (ebx.b == 0)
    result = nullptr
else
    __Smtx_lock_shared(&var_18)
    int32_t* esi_1 = var_1c
    __Smtx_unlock_shared(&var_18)
    int32_t* eax_8 = (*(*esi_1 + 0xc))(*(arg1 + 0x6c), *(arg1 + 0x70), 0x20)
    
    if (eax_8 == 0)
        result = nullptr
    else if (sub_44ff30(eax_8) != 0)
        int32_t var_38_10 = arg5
        int32_t var_3c_2 = arg4
        int32_t var_40_2 = arg3
        int32_t var_44_1 = arg2
        result = sub_4a57d0(arg1, eax_8)
    else
        (*(*eax_8 + 4))(eax_2)
        result = nullptr

__seterrormode(&var_18)
int32_t var_8_2 = 2
int32_t* ecx_8 = var_1c

if (ecx_8 != 0)
    var_1c = nullptr
    (*(*ecx_8 + 4))(eax_2)

___crtSetUnhandledExceptionFilter(&var_18)
fsbase->NtTib.ExceptionList = ExceptionList
return result
