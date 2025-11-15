// 函数: sub_45eb40
// 地址: 0x45eb40
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72bdf8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_38 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_8_1 = 0
void* var_30
sub_4055a0(arg1, sub_4175e0(&ExceptionList, arg2, &var_30, U"\n"), 0, 0xffffffff)
int32_t result_1
int32_t result = result_1

if (result u>= 0x10)
    result = sub_403160(var_30, result + 1, 1)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
