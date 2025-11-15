// 函数: sub_40ca30
// 地址: 0x40ca30
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7278a8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_40 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t eax_3 = sub_40cfc0(*(*arg1 + 0x10), arg2)
void* var_2c
sub_40cf70(*(*arg1 + 0x10), &var_2c, eax_3)
int32_t var_8_1 = 0
int32_t var_30

if ((*(**(*(*arg1 + 0x10) + 4) + 4))(eax_3, arg2[6], &var_30) != 0)
    int32_t var_44_3 = arg2[0xe]
    sub_409f40(*(*arg1 + 0x10) + 0x2c, eax_3, &var_2c, arg2[6], var_30.b, zx.d(arg2[7].b), &arg2[8])

int32_t result_1
int32_t result = result_1

if (result u>= 0x10)
    result = sub_403160(var_2c, result + 1, 1)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
