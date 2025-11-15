// 函数: sub_414a00
// 地址: 0x414a00
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72804c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_14 = arg1
int32_t __saved_ebp
int32_t var_1c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14_1 = arg1
*arg1 = 0
void* eax_3 = &arg1[2]
arg1[1] = 0xffffffff
*(eax_3 + 0x14) = 0xf
*(eax_3 + 0x10) = 0

if (*(eax_3 + 0x14) u>= 0x10)
    eax_3 = *eax_3

*eax_3 = 0
arg1[8] = 0
arg1[9] = 0
arg1[0xa] = 0
void* eax_4 = &arg1[0xb]
int32_t var_8_1 = 0
*(eax_4 + 0x14) = 0xf
*(eax_4 + 0x10) = 0

if (*(eax_4 + 0x14) u>= 0x10)
    eax_4 = *eax_4

*eax_4 = 0
void* eax_5 = &arg1[0x15]
arg1[0x11] = 0xffffffff
arg1[0x12] = 0xffffffff
arg1[0x13] = 0
arg1[0x14] = 0
*(eax_5 + 0x14) = 0xf
*(eax_5 + 0x10) = 0

if (*(eax_5 + 0x14) u>= 0x10)
    eax_5 = *eax_5

*eax_5 = 0
arg1[0x1b] = 0
arg1[0x1c] = 0
arg1[0x1d] = 0
var_8_1.b = 3
arg1[0x1e].b = 0
int32_t edi
sub_414e40(arg1, arg1, edi, arg2, arg3)
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
