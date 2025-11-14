// 函数: sub_4ee200
// 地址: 0x4ee200
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b56d0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_44
int32_t eax_2 = __security_cookie ^ &var_44
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t __saved_edi
char* edx = (**arg2)(__security_cookie ^ &__saved_edi)
int32_t var_14 = 0xf
int32_t var_18 = 0
char var_28 = 0
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

sub_402110(&var_28, edx, ecx_1)
int32_t var_4 = 0
char* edx_1 = (**arg1)()
int32_t var_2c = 0xf
int32_t var_30 = 0
char var_40 = 0
void* ecx_5

if (*edx_1 != 0)
    char* ecx_6 = edx_1
    char* eax_8
    
    do
        eax_8.b = *ecx_6
        ecx_6 = &ecx_6[1]
    while (eax_8.b != 0)
    ecx_5 = ecx_6 - &ecx_6[1]
else
    ecx_5 = nullptr

sub_402110(&var_40, edx_1, ecx_5)
var_4.b = 1
void* ecx_9 = data_75d4fc + 0x74
void* var_58_2 = ecx_9
int32_t ebx
ebx.b = sub_4cfd90(ecx_9 + 0xf0, &var_40, &var_28)

if (var_2c u>= 0x10)
    j__free(var_40.d)

int32_t var_2c_1 = 0xf
int32_t var_30_1 = 0
var_40 = 0

if (var_14 u>= 0x10)
    j__free(var_28.d)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_44)
return ebx.b
