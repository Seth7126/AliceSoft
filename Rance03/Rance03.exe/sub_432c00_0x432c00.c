// 函数: sub_432c00
// 地址: 0x432c00
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b5690
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_48
int32_t eax_2 = __security_cookie ^ &var_48
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t __saved_edi
char* edx = (**arg2)(__security_cookie ^ &__saved_edi)
int32_t var_30 = 0xf
int32_t var_34 = 0
char var_44 = 0
void* ecx_1

if (*edx != 0)
    char* ecx_2 = edx
    char* eax_6
    
    do
        eax_6.b = *ecx_2
        ecx_2 = &ecx_2[1]
    while (eax_6.b != 0)
    ecx_1 = ecx_2 - &ecx_2[1]
else
    ecx_1 = nullptr

sub_402110(&var_44, edx, ecx_1)
int32_t var_4 = 0
char var_2c
char* ecx_4 = sub_433d20(&var_2c, &var_44, arg4)
var_4.b = 1

if (*(ecx_4 + 0x14) u>= 0x10)
    ecx_4 = *ecx_4

int32_t result = (*(*arg3 + 4))(ecx_4)
int32_t var_18

if (var_18 u>= 0x10)
    result = j__free(var_2c.d)

int32_t var_18_1 = 0xf
int32_t var_1c = 0
var_2c = 0

if (var_30 u>= 0x10)
    result = j__free(var_44.d)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_48)
return result
