// 函数: sub_5d1710
// 地址: 0x5d1710
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73bd06
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_30 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ecx = *(arg1 + 0x24)
int32_t var_18 = 0

if (ecx == 0)
    sub_6d090a()
    noreturn

int32_t* var_20
int32_t* eax_4 = (*(*ecx + 8))(&var_20)
*arg2 = 0
arg2[1] = 0
sub_5688b0(arg2, eax_4)
SRWLOCK var_1c
__seterrormode(&var_1c)
int32_t var_8_1 = 0
int32_t* ecx_2 = var_20

if (ecx_2 != 0)
    var_20 = nullptr
    int32_t esi_1 = ecx_2[1]
    ecx_2[1] -= 1
    (**ecx_2)(esi_1 - 1)

___crtSetUnhandledExceptionFilter(&var_1c)
fsbase->NtTib.ExceptionList = ExceptionList
return arg2
