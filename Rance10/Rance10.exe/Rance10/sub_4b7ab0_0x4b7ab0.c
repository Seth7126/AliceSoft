// 函数: sub_4b7ab0
// 地址: 0x4b7ab0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_732460
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_50 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_48 = *(arg1 + 0x108)
int32_t var_18 = 0xf
int32_t var_1c = 0
char var_2c = 0
sub_403490(&var_2c, "%.*f", 4)
int32_t var_8_1 = 0
*(arg1 + 0xf4)
void* var_44
sub_4b84d0(&var_48, &var_2c, &var_44, &var_48)
var_8_1.b = 2

if (var_18 u>= 0x10)
    sub_403160(var_2c.d, var_18 + 1, 1)

void* esi_1 = *(arg1 + 0xa0)
int32_t var_18_1 = 0xf
int32_t var_1c_1 = 0
var_2c = 0
sub_4eec50(esi_1, 4, 1)
sub_51b980(*(esi_1 + 0x74) + 0x10c, &var_44)
int32_t result_1
int32_t result = result_1

if (result u>= 0x10)
    result = sub_403160(var_44, result + 1, 1)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
