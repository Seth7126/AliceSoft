// 函数: sub_5d2fb0
// 地址: 0x5d2fb0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72deb6
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_28 = arg2
int32_t var_14 = 0
int32_t* var_1c
SRWLOCK eax_3 = sub_5d3980(&var_1c)
*arg2 = 0
arg2[1] = 0
sub_4323a0(arg2, eax_3)
SRWLOCK var_18
__seterrormode(&var_18)
int32_t var_8_1 = 0
int32_t* ecx_2 = var_1c

if (ecx_2 != 0)
    var_1c = nullptr
    (*(*ecx_2 + 4))(eax_2)

___crtSetUnhandledExceptionFilter(&var_18)
fsbase->NtTib.ExceptionList = ExceptionList
return arg2
