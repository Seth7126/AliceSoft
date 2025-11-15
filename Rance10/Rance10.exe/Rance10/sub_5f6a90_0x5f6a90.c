// 函数: sub_5f6a90
// 地址: 0x5f6a90
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_726e48
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
char eax_6 = (*(*arg1 + 0x40))((*(*arg2 + 8))(eax_2))
int32_t result

if (eax_6 != 0)
    int32_t eax_9 = (*(*arg2 + 8))()
    result = sub_5f7820(eax_9, 0, arg1, arg2, 0, eax_9)
else
    int32_t result_1 = 0xf
    int32_t var_1c_1 = 0
    char var_2c = eax_6
    sub_403490(&var_2c, 0x76a8c0, 0x18)
    int32_t var_8_1 = 0
    sub_6c52e0(&var_2c)
    result = result_1
    
    if (result u>= 0x10)
        result = sub_403160(var_2c.d, result + 1, 1)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
