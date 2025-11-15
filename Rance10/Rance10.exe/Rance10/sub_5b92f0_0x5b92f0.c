// 函数: sub_5b92f0
// 地址: 0x5b92f0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73f6a8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_4c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int128_t var_3c = data_79a7b0
int32_t var_40 = 0x3cd013a9
int128_t var_2c
__builtin_memset(&var_2c, 0, 0x1c)
int32_t var_8_1 = 0
int32_t ebx

if (sub_5b2310(&var_40, arg2, arg3) == 0)
    ebx.b = 0
else if (sub_5b96a0(arg1, &var_40) == 0)
    ebx.b = 0
else if (sub_5b97e0(arg1, &var_40) == 0)
    ebx.b = 0
else if (sub_5b9860(arg1, &var_40) == 0)
    ebx.b = 0
else
    int32_t var_14
    *(arg1 + 0xe0) = sub_484cc0(var_14)
    ebx.b = 1

sub_5b93d0(&var_40)
int32_t result
result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
return result
