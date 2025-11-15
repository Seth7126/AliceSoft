// 函数: sub_5d4220
// 地址: 0x5d4220
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_737ed6
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
SRWLOCK var_14 = arg1
int32_t var_1c = 0
int32_t* var_18
int32_t* eax_3 = sub_5cc9c0(arg2, &var_18)
*arg1 = 0
*(arg1 + 4) = 0
sub_5688b0(arg1, eax_3)
__seterrormode(&var_14)
int32_t var_8_1 = 0
int32_t* ecx_2 = var_18

if (ecx_2 != 0)
    var_18 = nullptr
    int32_t esi_1 = ecx_2[1]
    ecx_2[1] -= 1
    (**ecx_2)(esi_1 - 1)

___crtSetUnhandledExceptionFilter(&var_14)
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
