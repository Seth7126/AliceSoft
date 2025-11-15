// 函数: sub_50f360
// 地址: 0x50f360
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_737dce
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_54 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
char var_2c
sub_4c2610(&var_2c)
int32_t var_8_1 = 0
void* var_44
int32_t* eax_3 = sub_50f100(&var_44, &var_2c)
int32_t result_1

if (&var_2c != eax_3)
    if (result_1 u>= 0x10)
        sub_403160(var_2c.d, result_1 + 1, 1)
    
    result_1 = 0xf
    int32_t var_1c_1 = 0
    var_2c = 0
    sub_4056a0(&var_2c, eax_3)

var_8_1.b = 0
int32_t var_30

if (var_30 u>= 0x10)
    sub_403160(var_44, var_30 + 1, 1)

sub_50e1e0(arg1, &var_2c)
int32_t result = result_1

if (result u>= 0x10)
    result = sub_403160(var_2c.d, result + 1, 1)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
