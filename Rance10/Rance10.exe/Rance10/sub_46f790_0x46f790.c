// 函数: sub_46f790
// 地址: 0x46f790
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_726e48
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_3c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
sub_46e7f0(arg1 + 0xc)
bool cond:0 = *arg2 != 0
int32_t var_18 = 0xf
int32_t var_1c = 0
char var_2c = 0
void* ecx_1

if (cond:0)
    char* ecx_2 = arg2
    char i
    
    do
        i = *ecx_2
        ecx_2 = &ecx_2[1]
    while (i != 0)
    ecx_1 = ecx_2 - &ecx_2[1]
else
    ecx_1 = nullptr

sub_403490(&var_2c, arg2, ecx_1)
int32_t var_8_1 = 0
void* ebx
ebx.b = sub_463270(arg1 + 0x18, arg1 + 0xc, &var_2c)

if (var_18 u>= 0x10)
    sub_403160(var_2c.d, var_18 + 1, 1)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return ebx.b
