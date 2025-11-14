// 函数: sub_433190
// 地址: 0x433190
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b5458
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_30
int32_t eax_2 = __security_cookie ^ &var_30
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t __saved_edi
char* edx = (**arg2)(__security_cookie ^ &__saved_edi)
int32_t var_18 = 0xf
int32_t var_1c = 0
char var_2c = 0
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

sub_402110(&var_2c, edx, ecx_1)
int32_t var_4 = 0
void* eax_7 = sub_434b80(data_75d4bc + 0xc, &var_2c)
char* ecx_6

if (eax_7 != 0)
    ecx_6 = sub_4376f0(eax_7, arg4)
else
    ecx_6 = &data_74f554

if (*(ecx_6 + 0x14) u>= 0x10)
    ecx_6 = *ecx_6

int32_t result = (*(*arg3 + 4))(ecx_6)

if (var_18 u>= 0x10)
    result = j__free(var_2c.d)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_30)
return result
