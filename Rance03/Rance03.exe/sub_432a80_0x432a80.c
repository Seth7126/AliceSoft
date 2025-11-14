// 函数: sub_432a80
// 地址: 0x432a80
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b5658
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
char var_28
int32_t eax_2 = __security_cookie ^ &var_28
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t __saved_esi
char* edx = (**arg1)(__security_cookie ^ &__saved_esi)
int32_t var_14 = 0xf
int32_t var_18 = 0
var_28 = 0
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
void* result = sub_434b80(data_75d4bc + 0xc, &var_28)
int32_t ebx

if (result != 0)
    ebx.b = sub_4366f0(result).b
else
    ebx.b = 0

if (var_14 u>= 0x10)
    j__free(var_28.d)

result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_28)
return result
