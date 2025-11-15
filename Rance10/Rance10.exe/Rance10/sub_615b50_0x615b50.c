// 函数: sub_615b50
// 地址: 0x615b50
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72a190
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_4c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t result_1 = 0xf
int32_t var_34 = 0
char var_44 = 0
int32_t var_8_1 = 0
int32_t var_18 = 0xf
int32_t var_1c = 0
char var_2c = 0
var_8_1.b = 1

if (sub_619a10(arg1, &var_44, "S_LT") != 0 && sub_619a10(arg1, &var_2c, "S_LT") != 0)
    int32_t ecx_2
    ecx_2.b = sub_413c90(&var_2c, &var_44) != 0
    sub_405d30(&arg1[0x7d], ecx_2)

if (var_18 u>= 0x10)
    sub_403160(var_2c.d, var_18 + 1, 1)

int32_t result = result_1
int32_t var_18_1 = 0xf
int32_t var_1c_1 = 0
var_2c = 0

if (result u>= 0x10)
    result = sub_403160(var_44.d, result + 1, 1)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
