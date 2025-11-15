// 函数: sub_5218c0
// 地址: 0x5218c0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7270c8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_38 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void* eax_4
eax_4.b = *(*(*arg1 + 0x220) + 0x13c)
*(arg2 + 0x13c) = eax_4.b
void* var_2c
char* eax_5 = sub_4ee1f0(*(*arg1 + 0x220), &var_2c, 2)
int32_t var_8_1 = 0

if (arg2 + 0x1e8 != eax_5)
    sub_403590(arg2 + 0x1e8, eax_5, 0, 0xffffffff)

int32_t var_18

if (var_18 u>= 0x10)
    sub_403160(var_2c, var_18 + 1, 1)

void* eax_9
eax_9.b = *(*(*arg1 + 0x220) + 0x1a9)
*(arg2 + 0x1a9) = eax_9.b
int32_t result = *(*(*arg1 + 0x220) + 0x1ac)
*(arg2 + 0x1ac) = result
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
