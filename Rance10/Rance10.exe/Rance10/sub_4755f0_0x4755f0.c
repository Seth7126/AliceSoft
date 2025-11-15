// 函数: sub_4755f0
// 地址: 0x4755f0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72dfb8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_58 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_8_1 = 0
void* var_48
void* var_30
sub_462db0(&var_30, sub_46d8e0(&var_48, arg2))
int32_t var_34

if (var_34 u>= 0x10)
    sub_403160(var_48, var_34 + 1, 1)

void** esi = sub_432330(arg1 + 0x2c, &var_30)
void** result

if (esi != *(arg1 + 0x2c))
    result = sub_412ca0(&var_30, &esi[4])

if (esi == *(arg1 + 0x2c) || result.b != 0)
    esi = *(arg1 + 0x2c)

int32_t* ebx_1
ebx_1.b = esi != *(arg1 + 0x2c)
int32_t var_1c

if (var_1c u>= 0x10)
    sub_403160(var_30, var_1c + 1, 1)

result.b = ebx_1.b
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
