// 函数: sub_59e980
// 地址: 0x59e980
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_727838
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_44 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
char* var_18 = 0xf
int32_t var_1c = 0
char var_2c = 0
sub_403490(&var_2c, &(*U"=,,,,,{,==},},======,")[0x11], 1)
int32_t var_8_1 = 0
int32_t var_8_2 = 0xffffffff
int32_t ebx
ebx.b = sub_59f280(arg1, &var_2c) == 0

if (var_18 u>= 0x10)
    sub_403160(var_2c.d, &var_18[1], 1)

int32_t var_18_1 = 0xf
int32_t var_1c_1 = 0
var_2c = 0
char* var_30
char* result

if (ebx.b == 0)
    result = sub_5de8c0(&var_30)

if (ebx.b != 0 || result.b == 0)
    result.b = 0
else
    *(arg2 + 0x40) = var_30
    result.b = 1
    *(arg2 + 0x44) = 0

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
