// 函数: sub_67e8b0
// 地址: 0x67e8b0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72d800
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_54 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList

if (arg1 != &data_7fd48c)
    sub_403590(arg1 + 4, &data_7fd490, 0, 0xffffffff)

sub_67eb70(arg1)
int32_t var_18 = 0xf
int32_t var_1c = 0
char var_2c = 0
sub_403490(&var_2c, "DebugData", 9)
int32_t var_8_1 = 0
sub_67eaf0(arg1)
sub_4055a0(arg1 + 4, &var_2c, 0, 0xffffffff)
int32_t var_8_2 = 0xffffffff

if (var_18 u>= 0x10)
    sub_403160(var_2c.d, var_18 + 1, 1)

int32_t result_1 = 0xf
int32_t var_34 = 0
char var_44 = 0
sub_403490(&var_44, "02_Last", 7)
int32_t var_8_3 = 1
sub_67eaf0(arg1)
sub_4055a0(arg1 + 4, &var_44, 0, 0xffffffff)
int32_t result = result_1

if (result u>= 0x10)
    result = sub_403160(var_44.d, result + 1, 1)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
