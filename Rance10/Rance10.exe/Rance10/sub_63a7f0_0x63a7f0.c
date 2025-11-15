// 函数: sub_63a7f0
// 地址: 0x63a7f0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_726e48
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_3c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
bool cond:0 = *arg2 != 0
int32_t var_18 = 0xf
int32_t var_1c = 0
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
void* result = sub_612d80(data_7fcbb8, &var_2c, arg4)
int32_t ebx

if (result == 0)
    ebx.b = 0
else if (*(result + 0x4c) == 0)
    ebx.b = 0
else if (*(result + 0x34) == 0xc)
    if (arg3 != result + 0x58)
        sub_403590(arg3, result + 0x58, 0, 0xffffffff)
    
    ebx.b = 1
else
    ebx.b = 0

if (var_18 u>= 0x10)
    sub_403160(var_2c.d, var_18 + 1, 1)

result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
