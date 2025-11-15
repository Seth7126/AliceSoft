// 函数: sub_4991c0
// 地址: 0x4991c0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_727838
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_44 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t result_1 = 0xf
int32_t var_1c = 0
bool cond:0 = *arg2 != 0
char var_2c = 0
void* ecx

if (cond:0)
    char* ecx_1 = arg2
    char i
    
    do
        i = *ecx_1
        ecx_1 = &ecx_1[1]
    while (i != 0)
    ecx = ecx_1 - &ecx_1[1]
else
    ecx = nullptr

sub_403490(&var_2c, arg2, ecx)
int32_t var_8_1 = 0
void** var_34
sub_4994b0(arg1 + 0xc, &var_34, &var_2c)
void* ecx_4

if (*arg3 != 0)
    char* ecx_5 = arg3
    char i_1
    
    do
        i_1 = *ecx_5
        ecx_5 = &ecx_5[1]
    while (i_1 != 0)
    ecx_4 = ecx_5 - &ecx_5[1]
else
    ecx_4 = nullptr

sub_403490(&var_34[0xa], arg3, ecx_4)
int32_t result = result_1

if (result u>= 0x10)
    result = sub_403160(var_2c.d, result + 1, 1)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
