// 函数: sub_478960
// 地址: 0x478960
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6b3db8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
char var_34
int32_t eax_2 = __security_cookie ^ &var_34
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t __saved_esi
char* edx = (**arg1)(__security_cookie ^ &__saved_esi)
int32_t var_20 = 0xf
int32_t var_24 = 0
var_34 = 0
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

sub_402110(&var_34, edx, ecx)
int32_t var_c_1 = 0
void* ecx_3 = *(data_75d4e4 + 0x93c)
uint32_t result

if (ecx_3 != 0)
    result = sub_476e80(ecx_3 + 4, &var_34)
else
    result = 0

if (var_20 u>= 0x10)
    j__free(var_34.d)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_34)
return result
