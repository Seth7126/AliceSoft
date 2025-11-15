// 函数: sub_42f400
// 地址: 0x42f400
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72a090
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t ebx
int32_t var_4c = ebx
int32_t var_58 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_18 = 0xf
int32_t var_1c = 0
char var_2c = 0
void* ecx

if (*arg2 != 0)
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
struct _EXCEPTION_REGISTRATION_RECORD*** var_5c_1 = &arg1[5]

if (sub_4324c0(&arg1[5], arg1[6], arg1[5], &var_2c) != arg1[6])
    ebx.b = 1
else
    void* var_44
    sub_403360(&var_44, arg2)
    var_8_1.b = 1
    var_8_1.b = 0
    ebx.b = sub_42fbe0(arg1, &var_44) == 0
    int32_t** var_30
    
    if (var_30 u>= 0x10)
        sub_403160(var_44, var_30 + 1, 1)
    
    if (ebx.b == 0)
        sub_424db0(&arg1[5], &var_2c)
        ebx.b = 1
    else
        ebx.b = 0

if (var_18 u>= 0x10)
    sub_403160(var_2c.d, var_18 + 1, 1)

int32_t** result
result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
