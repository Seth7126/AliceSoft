// 函数: sub_61aad0
// 地址: 0x61aad0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_729e78
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_34 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t eax_3 = sub_621320(&arg1[0x52])
int32_t result

if (eax_3 s>= 0)
    result = sub_405d30(&arg1[0x7d], eax_3)
else
    int32_t result_1 = 0xf
    int32_t var_1c_1 = 0
    char var_2c = 0
    sub_403490(&var_2c, 0x76d5bc, 0x28)
    int32_t var_8_1 = 0
    sub_612230(arg1, "DG_NEW", &var_2c)
    result = result_1
    
    if (result u>= 0x10)
        result = sub_403160(var_2c.d, result + 1, 1)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
