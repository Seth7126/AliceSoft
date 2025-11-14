// 函数: sub_5ff310
// 地址: 0x5ff310
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c5a18
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_30
int32_t eax_2 = __security_cookie ^ &var_30
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t __saved_esi
char* edx = (**arg1)(__security_cookie ^ &__saved_esi)
int32_t var_14 = 0xf
int32_t var_18 = 0
char var_28 = 0
void* ecx

if (*edx != 0)
    char* ecx_1 = edx
    char* eax_6
    
    do
        eax_6.b = *ecx_1
        ecx_1 = &ecx_1[1]
    while (eax_6.b != 0)
    ecx = ecx_1 - &ecx_1[1]
else
    ecx = nullptr

sub_402110(&var_28, edx, ecx)
int32_t var_4 = 0
void* esi_2 = data_75d524
int32_t ebx

if (*(esi_2 + 0x18) != 0)
    int32_t* ecx_4 = *(esi_2 + 4) + 4
    char var_2c = 3
    sub_414b60(ecx_4, &var_2c)
    sub_468f70(*(esi_2 + 4), &var_28)
    ebx.b = 1
else
    ebx.b = 0

if (var_14 u>= 0x10)
    j__free(var_28.d)

int32_t* result
result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_30)
return result
