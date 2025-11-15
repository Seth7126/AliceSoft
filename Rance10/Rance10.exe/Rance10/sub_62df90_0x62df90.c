// 函数: sub_62df90
// 地址: 0x62df90
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_726e48
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
char* esi = (**arg3)(eax_2)
int32_t result_1 = 0xf
int32_t var_1c = 0
char var_2c = 0
void* ecx

if (*esi != 0)
    char* ecx_1 = esi
    char* eax_4
    
    do
        eax_4.b = *ecx_1
        ecx_1 = &ecx_1[1]
    while (eax_4.b != 0)
    ecx = ecx_1 - &ecx_1[1]
else
    ecx = nullptr

sub_403490(&var_2c, esi, ecx)
int32_t var_8_1 = 0
int32_t eax_5 = sub_62e070(&var_2c, arg2, 0)

if (eax_5 s>= 0)
    sub_403750(&var_2c, eax_5, sub_62e070(&var_2c, arg4, eax_5))
    char* edx_1 = &var_2c
    
    if (result_1 u>= 0x10)
        edx_1 = var_2c.d
    
    (*(*arg3 + 4))(edx_1)

int32_t result = result_1

if (result u>= 0x10)
    result = sub_403160(var_2c.d, result + 1, 1)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
