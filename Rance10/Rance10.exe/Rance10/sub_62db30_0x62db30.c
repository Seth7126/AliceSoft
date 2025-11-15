// 函数: sub_62db30
// 地址: 0x62db30
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72b358
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
char* edx = (**arg1)(eax_2)
int32_t var_18 = 0xf
int32_t var_1c = 0
char var_2c = 0
void* ecx

if (*edx != 0)
    char* ecx_1 = edx
    char* eax_4
    
    do
        eax_4.b = *ecx_1
        ecx_1 = &ecx_1[1]
    while (eax_4.b != 0)
    ecx = ecx_1 - &ecx_1[1]
else
    ecx = nullptr

sub_403490(&var_2c, edx, ecx)
int32_t var_8_1 = 0
int32_t* var_44
sub_62d4f0(&var_44, &var_2c)

if (var_18 u>= 0x10)
    sub_403160(var_2c.d, var_18 + 1, 1)

int32_t result_1
int32_t* var_54_1 = &result_1
int32_t* eax_7 = &var_44
result_1 = 0
int32_t var_30

if (var_30 u>= 0x10)
    eax_7 = var_44

sub_6ca310(eax_7, 0x7942e0)
int32_t result = result_1

if (var_30 u>= 0x10)
    sub_403160(var_44, var_30 + 1, 1)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
