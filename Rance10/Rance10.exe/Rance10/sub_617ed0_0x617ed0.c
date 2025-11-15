// 函数: sub_617ed0
// 地址: 0x617ed0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7278a8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* ebx = data_7fcbb8
int32_t var_30 = 0
char* edx = (*(**(ebx + 0x1c) + 8))(eax_2)
int32_t var_18 = 0xf
int32_t var_1c = 0
char var_2c = 0
void* ecx_1

if (*edx != 0)
    char* ecx_2 = edx
    char* eax_4
    
    do
        eax_4.b = *ecx_2
        ecx_2 = &ecx_2[1]
    while (eax_4.b != 0)
    ecx_1 = ecx_2 - &ecx_2[1]
else
    ecx_1 = nullptr

sub_403490(&var_2c, edx, ecx_1)
int32_t var_8_1 = 0
char* eax_6 = (*(**(ebx + 0x20) + 0x18))()
sub_4176f0(eax_6.b, &var_2c, arg1, eax_6)

if (var_18 u>= 0x10)
    sub_403160(var_2c.d, var_18 + 1, 1)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return arg1
