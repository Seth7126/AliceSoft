// 函数: sub_432ed0
// 地址: 0x432ed0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b5710
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
char var_44
int32_t eax_2 = __security_cookie ^ &var_44
int32_t __saved_edi
int32_t eax_4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_30 = 0xf
int32_t var_34 = 0
var_44 = 0
int32_t var_4 = 0
char* edx = (**arg2)(eax_4)
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
var_4.b = 1
void* eax_7 = sub_434b80(data_75d4bc + 0xc, &var_2c)

if (eax_7 != 0)
    sub_437570(eax_7, &var_44, arg4)

var_4.b = 0

if (var_18 u>= 0x10)
    j__free(var_2c.d)

char* edx_1 = &var_44

if (var_30 u>= 0x10)
    edx_1 = var_44.d

int32_t result = (*(*arg3 + 4))(edx_1)

if (var_30 u>= 0x10)
    result = j__free(var_44.d)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_44)
return result
