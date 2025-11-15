// 函数: sub_5d5470
// 地址: 0x5d5470
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_727838
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_44 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_18 = 0xf
int32_t var_1c = 0
bool cond:0 = *arg3 != 0
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

int32_t ecx_3 = sub_403490(&var_2c, arg3, ecx)
int32_t var_48_1 = 1
int32_t var_8_1 = 0
char var_30 = 0x2e
void* eax_3 = sub_42cb30(&var_2c, &var_30, ecx_3)
int32_t* var_34
char eax_4

if (eax_3 != 0xffffffff)
    var_34 = nullptr
    eax_4 = sub_5d5000(arg1, &var_34, &var_2c)

int32_t ebx

if (eax_3 == 0xffffffff || eax_4 == 0)
    ebx.b = 0
else
    char* edx_1 = &var_2c
    
    if (var_18 u>= 0x10)
        edx_1 = var_2c.d
    
    ebx.b = (*(*var_34 + 0x10))(arg2, edx_1)

if (var_18 u>= 0x10)
    sub_403160(var_2c.d, var_18 + 1, 1)

int32_t result
result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
