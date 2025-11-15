// 函数: sub_5d5920
// 地址: 0x5d5920
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_727838
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_44 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void* var_30 = nullptr
bool cond:0 = *arg3 != 0
int32_t result_1 = 0xf
int32_t var_1c = 0
char var_2c = 0
void* ecx

if (cond:0)
    char* ecx_1 = arg3
    char i
    
    do
        i = *ecx_1
        ecx_1 = &ecx_1[1]
    while (i != 0)
    ecx = ecx_1 - &ecx_1[1]
else
    ecx = nullptr

sub_403490(&var_2c, arg3, ecx)
int32_t var_8_1 = 0

if (sub_5d5000(arg1 - 4, &var_30, &var_2c) != 0)
    char* edx_1 = &var_2c
    
    if (result_1 u>= 0x10)
        edx_1 = var_2c.d
    
    (*(*(var_30 + 4) + 0x10))(arg2, edx_1, arg4)
else
    (*(*arg2 + 4))(arg4)

int32_t result = result_1

if (result u>= 0x10)
    result = sub_403160(var_2c.d, result + 1, 1)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
