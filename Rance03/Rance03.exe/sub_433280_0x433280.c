// 函数: sub_433280
// 地址: 0x433280
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b5378
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_2c
int32_t eax_2 = __security_cookie ^ &var_2c
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t __saved_edi
char* esi = (**arg1)(__security_cookie ^ &__saved_edi)
int32_t var_14 = 0xf
int32_t var_18 = 0
char var_28 = 0
void* ecx

if (*esi != 0)
    char* ecx_1 = esi
    char* eax_6
    
    do
        eax_6.b = *ecx_1
        ecx_1 = &ecx_1[1]
    while (eax_6.b != 0)
    ecx = ecx_1 - &ecx_1[1]
else
    ecx = nullptr

sub_402110(&var_28, esi, ecx)
int32_t var_4 = 0
void* ecx_3 = data_75d4bc
int32_t* esi_1 = *(ecx_3 + 0x34)
int32_t result = sub_434b80(ecx_3 + 0xc, &var_28)
int32_t ebx

if (result != 0)
    ebx.b = sub_437740(result, arg2, esi_1).b
else
    ebx.b = 0

if (var_14 u>= 0x10)
    j__free(var_28.d)

result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_2c)
return result
