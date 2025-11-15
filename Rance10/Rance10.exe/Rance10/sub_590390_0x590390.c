// 函数: sub_590390
// 地址: 0x590390
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73dd48
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_38 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
sub_590450(arg1)
int128_t xmm0 = data_79a7b0
int32_t var_2c = 0x3cd013a9
int128_t var_28 = xmm0
int32_t var_18 = 0
int32_t var_8_1 = 0
char eax_3 = sub_58f250(&var_2c, arg2, arg3)
char eax_4

if (eax_3 != 0)
    eax_4 = sub_590580(arg1, &var_2c)

int32_t ebx

if (eax_3 == 0 || eax_4 == 0)
    ebx.b = 0
else
    sub_591010(arg1)
    sub_591140(arg1, arg4)
    ebx.b = 1

sub_58f820(&var_28:8)
int32_t result
result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
return result
