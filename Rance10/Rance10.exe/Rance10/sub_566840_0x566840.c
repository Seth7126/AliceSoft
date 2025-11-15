// 函数: sub_566840
// 地址: 0x566840
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73bf2c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_38 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_24
void* ecx
int32_t* eax_3 = sub_566d60(ecx, &var_24, arg1, arg2, arg3)
int32_t* var_1c = nullptr
SRWLOCK var_18
__builtin_memset(&var_18, 0, 4)
sub_5688b0(&var_1c, eax_3)
SRWLOCK var_20
__seterrormode(&var_20)
int32_t var_8_1 = 0
int32_t* ecx_2 = var_24

if (ecx_2 != 0)
    var_24 = nullptr
    int32_t edx_1 = ecx_2[1]
    ecx_2[1] -= 1
    (**ecx_2)(edx_1 - 1)

___crtSetUnhandledExceptionFilter(&var_20)
__Smtx_lock_shared(&var_18)
int32_t ebx
ebx.b = var_1c != 0
__Smtx_unlock_shared(&var_18)
int32_t result

if (ebx.b != 0)
    __Smtx_lock_shared(&var_18)
    int32_t* esi_1 = var_1c
    __Smtx_unlock_shared(&var_18)
    result = (esi_1[0xf] - esi_1[0xe]) s>> 6
else
    result = 0

__seterrormode(&var_18)
int32_t var_8_2 = 1
int32_t* ecx_3 = var_1c

if (ecx_3 != 0)
    var_1c = nullptr
    int32_t esi_2 = ecx_3[1]
    ecx_3[1] -= 1
    (**ecx_3)(esi_2 - 1)

___crtSetUnhandledExceptionFilter(&var_18)
fsbase->NtTib.ExceptionList = ExceptionList
return result
