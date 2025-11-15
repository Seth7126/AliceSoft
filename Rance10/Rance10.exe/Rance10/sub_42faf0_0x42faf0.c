// 函数: sub_42faf0
// 地址: 0x42faf0
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
int32_t* edx_1 = sub_4175e0(&ExceptionList, arg1, &var_44, U"\n")
int32_t var_8_1 = 0

if (edx_1[5] u>= 0x10)
    edx_1 = *edx_1

int32_t var_18 = 0xf
int32_t var_1c = 0
char var_2c = 0
void* ecx_1

if (*edx_1 != 0)
    char* ecx_2 = edx_1
    int32_t* eax_4
    
    do
        eax_4.b = *ecx_2
        ecx_2 = &ecx_2[1]
    while (eax_4.b != 0)
    ecx_1 = ecx_2 - &ecx_2[1]
else
    ecx_1 = nullptr

sub_403490(&var_2c, edx_1, ecx_1)
var_8_1.b = 1
sub_45aae0(&var_2c)

if (var_18 u>= 0x10)
    sub_403160(var_2c.d, var_18 + 1, 1)

int32_t result_1
int32_t result = result_1
int32_t var_18_1 = 0xf
int32_t var_1c_1 = 0
var_2c = 0

if (result u>= 0x10)
    result = sub_403160(var_44, result + 1, 1)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
