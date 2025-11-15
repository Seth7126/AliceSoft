// 函数: sub_625700
// 地址: 0x625700
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_727ed8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_54 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t result_2 = 0xf
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
int32_t result = result_2
int32_t ebx
ebx.b = sub_625800(arg1 - 0x20, &var_2c) == 0

if (result u>= 0x10)
    result = sub_403160(var_2c.d, result + 1, 1)

if (ebx.b != 0)
    int32_t result_1 = 0xf
    int32_t var_34_1 = 0
    char var_44 = 0
    sub_403490(&var_44, "CStringPage::Set()\nallocMemory", 0x24)
    int32_t var_8_1 = 0
    sub_6c52e0(&var_44)
    result = result_1
    
    if (result u>= 0x10)
        result = sub_403160(var_44.d, result + 1, 1)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
