// 函数: sub_4abfc0
// 地址: 0x4abfc0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72a190
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_4c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void* var_44
int32_t* eax_4 = sub_4079d0(arg2, *arg1, &var_44, arg2)
int32_t var_8_1 = 0
char var_2c[0x10]
char* eax_5 = sub_4176f0(eax_4.b, eax_4, &var_2c, "\r\n")
var_8_1.b = 1
sub_4055a0(arg1[1], eax_5, 0, 0xffffffff)
int32_t var_18

if (var_18 u>= 0x10)
    sub_403160(var_2c[0].d, var_18 + 1, 1)

int32_t result_1
int32_t result = result_1
int32_t var_18_1 = 0xf
int32_t var_1c = 0
var_2c[0] = 0

if (result u>= 0x10)
    result = sub_403160(var_44, result + 1, 1)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
