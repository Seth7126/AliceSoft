// 函数: sub_4eecd0
// 地址: 0x4eecd0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b6f48
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
void* result = sub_4a9b10(&var_44)
void* result_1 = result

if (var_30 u>= 0x10)
    result = j__free(var_44.d)

int32_t var_30_1 = 0xf
int32_t var_34_1 = 0
var_44 = 0

if (result_1 != 0)
    int32_t var_2c
    char* ecx_5 = sub_4c9930(result_1, &var_2c, arg4)
    int32_t var_4 = 0
    
    if (*(ecx_5 + 0x14) u>= 0x10)
        ecx_5 = *ecx_5
    
    result = (*(*arg3 + 4))(ecx_5)
    int32_t var_18
    
    if (var_18 u>= 0x10)
        result = j__free(var_2c)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_48)
return result
