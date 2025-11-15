// 函数: sub_562a60
// 地址: 0x562a60
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73ba56
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct passregister::CPassRegister::VTable** var_14 = arg1
int32_t __saved_ebp
int32_t var_20 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct passregister::CPassRegister::VTable** var_14_1 = arg1
arg1[1] = arg2
void* eax_4 = &arg1[2]
*arg1 = &passregister::CPassRegister::`vftable'
*(eax_4 + 0x14) = 0xf
*(eax_4 + 0x10) = 0

if (*(eax_4 + 0x14) u>= 0x10)
    eax_4 = *eax_4

*eax_4 = 0
int32_t var_8_1 = 0
arg1[8].b = 0
arg2 = &arg1[9]
arg1[9] = 0
arg1[0xa] = 0
arg1[9] = sub_4f2cd0()
var_8_1.b = 1
arg2 = &arg1[0xb]
arg1[0xb] = 0
arg1[0xc] = 0
arg1[0xb] = sub_429890()
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
