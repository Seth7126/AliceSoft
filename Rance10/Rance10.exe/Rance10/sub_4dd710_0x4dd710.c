// 函数: sub_4dd710
// 地址: 0x4dd710
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_734898
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t result_1 = 0xf
int32_t var_20 = 0
char var_30 = 0
sub_403590(&var_30, arg2, 0, 0xffffffff)
int32_t var_8_1 = 0
int32_t* eax_4 = sub_4dd5b0(arg1, &var_30)

if (eax_4 != 0)
    *arg3 = (*(*eax_4 + 0x10))(eax_2)
    *arg4 = (*(*eax_4 + 0x14))()

int32_t result = result_1

if (result u>= 0x10)
    result = sub_403160(var_30.d, result + 1, 1)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
