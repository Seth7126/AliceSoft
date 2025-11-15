// 函数: sub_5d4c20
// 地址: 0x5d4c20
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7412c4
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void** var_18

if (*sub_5d4880(arg1 + 0x24, &var_18, arg2) != *(arg1 + 0x24))
    void*** eax_3
    eax_3.b = 0
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_3

int32_t* var_28
int32_t* eax_5 = sub_432270(&var_28, sub_46d3b0(arg3, arg4))
int32_t* var_20 = nullptr
SRWLOCK var_1c
__builtin_memset(&var_1c, 0, 4)
sub_4323a0(&var_20, eax_5)
int32_t var_8_1 = 0
SRWLOCK var_24
__seterrormode(&var_24)
var_8_1.b = 1
int32_t* ecx_6 = var_28

if (ecx_6 != 0)
    var_28 = nullptr
    (*(*ecx_6 + 4))(eax_2)

var_8_1.b = 0
___crtSetUnhandledExceptionFilter(&var_24)
__Smtx_lock_shared(&var_1c)
int32_t ebx
ebx.b = var_20 != 0
__Smtx_unlock_shared(&var_1c)
ebx.b ^= 1

if (ebx.b == 0)
    sub_5d47f0(arg1 + 0x24, arg2, &var_20)
    ebx.b = 1
else
    ebx.b = 0

__seterrormode(&var_1c)
int32_t var_8_2 = 2
int32_t* ecx_8 = var_20

if (ecx_8 != 0)
    var_20 = nullptr
    (*(*ecx_8 + 4))(eax_2)

___crtSetUnhandledExceptionFilter(&var_1c)
int32_t eax_7
eax_7.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
return eax_7
