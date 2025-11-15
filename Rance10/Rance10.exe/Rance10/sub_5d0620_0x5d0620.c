// 函数: sub_5d0620
// 地址: 0x5d0620
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73bf64
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_34 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
__Smtx_lock_shared(arg1 + 0x4c)
void* edi = *(arg1 + 0x48)
__Smtx_unlock_shared(arg1 + 0x4c)
int32_t var_38_1 = arg3
char eax_3 = sub_5d4ae0(edi, arg2)

if (eax_3 == 0)
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_3

int32_t* var_24
int32_t* eax_4 = sub_5d1380(arg1 + 0x64, &var_24, arg2)
int32_t* var_1c = nullptr
SRWLOCK var_18
__builtin_memset(&var_18, 0, 4)
sub_5688b0(&var_1c, eax_4)
int32_t var_8_1 = 0
SRWLOCK var_20
__seterrormode(&var_20)
var_8_1.b = 1
int32_t* ecx_5 = var_24

if (ecx_5 != 0)
    var_24 = nullptr
    int32_t edx_1 = ecx_5[1]
    ecx_5[1] -= 1
    (**ecx_5)(edx_1 - 1)

var_8_1.b = 0
___crtSetUnhandledExceptionFilter(&var_20)
__Smtx_lock_shared(&var_18)
void* ebx
ebx.b = var_1c != 0
__Smtx_unlock_shared(&var_18)

if (ebx.b != 0)
    __Smtx_lock_shared(&var_18)
    int32_t* esi_2 = var_1c
    __Smtx_unlock_shared(&var_18)
    sub_5bc5b0(esi_2, sub_5d05c0(arg1, arg2))
    ebx.b = 1

__seterrormode(&var_18)
int32_t var_8_2 = 2
int32_t* ecx_8 = var_1c

if (ecx_8 != 0)
    var_1c = nullptr
    int32_t edi_1 = ecx_8[1]
    ecx_8[1] -= 1
    (**ecx_8)(edi_1 - 1)

___crtSetUnhandledExceptionFilter(&var_18)
int32_t eax_10
eax_10.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
return eax_10
