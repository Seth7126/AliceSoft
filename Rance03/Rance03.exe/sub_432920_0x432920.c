// 函数: sub_432920
// 地址: 0x432920
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b5658
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
char var_28
int32_t eax_2 = __security_cookie ^ &var_28
int32_t __saved_esi
int32_t eax_4 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
sub_434990(data_75d4bc + 0xc)
char* edx = (**arg1)(eax_4)
int32_t var_14 = 0xf
int32_t var_18 = 0
var_28 = 0
void* ecx_3

if (*edx != 0)
    char* ecx_4 = edx
    char* eax_6
    
    do
        eax_6.b = *ecx_4
        ecx_4 = &ecx_4[1]
    while (eax_6.b != 0)
    ecx_3 = ecx_4 - &ecx_4[1]
else
    ecx_3 = nullptr

sub_402110(&var_28, edx, ecx_3)
int32_t var_4 = 0
int32_t ebx
ebx.b = sub_433920(&var_28)

if (var_14 u>= 0x10)
    j__free(var_28.d)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_28)
return ebx.b
