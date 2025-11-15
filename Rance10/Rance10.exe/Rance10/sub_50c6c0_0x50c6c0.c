// 函数: sub_50c6c0
// 地址: 0x50c6c0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_731a90
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_50 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void* eax_4
eax_4.b = *(*(*arg1 + 0x22c) + 0x13c)
*(arg2 + 0x13c) = eax_4.b
void* var_2c
char* eax_5 = sub_4ee1f0(*(*arg1 + 0x22c), &var_2c, 2)
int32_t var_8_1 = 0

if (arg2 + 0x1e8 != eax_5)
    sub_403590(arg2 + 0x1e8, eax_5, 0, 0xffffffff)

int32_t var_8_2 = 0xffffffff
int32_t var_18

if (var_18 u>= 0x10)
    sub_403160(var_2c, var_18 + 1, 1)

void* var_44
void** eax_8 = sub_4ee1f0(*(*arg1 + 0x22c), &var_44, 3)
int32_t var_8_3 = 1

if (arg2 + 0x200 != eax_8)
    sub_403590(arg2 + 0x200, eax_8, 0, 0xffffffff)

int32_t var_30

if (var_30 u>= 0x10)
    sub_403160(var_44, var_30 + 1, 1)

void* eax_12
eax_12.b = *(*(*arg1 + 0x22c) + 0x1a9)
*(arg2 + 0x1a9) = eax_12.b
int32_t result = *(*(*arg1 + 0x22c) + 0x1ac)
*(arg2 + 0x1ac) = result
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
