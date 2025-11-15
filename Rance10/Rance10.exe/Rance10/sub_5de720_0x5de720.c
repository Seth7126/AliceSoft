// 函数: sub_5de720
// 地址: 0x5de720
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_734898
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_40 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_1c = 0xf
int32_t var_20 = 0
char var_30 = 0
int32_t var_8_1 = 0
void var_34
char eax_3 = sub_5de3d0(&var_30, &var_34)
int32_t result

if (eax_3 != 0)
    result = sub_407560(&var_30, arg2)

int32_t ebx

if (eax_3 != 0 && result.b != 0)
    ebx.b = 1
else
    ebx.b = 0
    *arg1 = arg1[1]

if (var_1c u>= 0x10)
    sub_403160(var_30.d, var_1c + 1, 1)

result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
