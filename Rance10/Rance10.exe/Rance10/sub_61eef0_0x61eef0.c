// 函数: sub_61eef0
// 地址: 0x61eef0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72a7d8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_34 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
char* var_14 = arg1
int32_t var_18 = 0
char* var_24
sub_431b80(&var_24, arg2[1] - *arg2)
int32_t var_8_1 = 0
int32_t eax_5 = 0
int32_t edx = arg2[1]
char* esi = var_24
int32_t edx_1 = edx - *arg2

if (edx != *arg2)
    do
        char* ecx_1
        ecx_1.b = (*arg2)[eax_5]
        ecx_1.b -= eax_5.b
        ecx_1.b -= 0x60
        esi[eax_5] = ecx_1.b
        eax_5 += 1
    while (eax_5 u< edx_1)

*(arg1 + 0x14) = 0xf
*(arg1 + 0x10) = 0
*arg1 = 0
int32_t var_20

if (esi != var_20)
    sub_403490(arg1, esi, var_20 - esi)

int32_t var_1c

if (esi != 0)
    sub_403160(esi, var_1c - esi, 1)
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
