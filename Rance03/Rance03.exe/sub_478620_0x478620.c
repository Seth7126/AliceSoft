// 函数: sub_478620
// 地址: 0x478620
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6b2eb8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
char var_34
int32_t eax_2 = __security_cookie ^ &var_34
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t __saved_edi
char* edx = (**arg2)(__security_cookie ^ &__saved_edi)
int32_t var_20 = 0xf
int32_t var_24 = 0
var_34 = 0
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

sub_402110(&var_34, edx, ecx_1)
int32_t var_c_1 = 0
void** ecx_4 = *(data_75d4e4 + 0x93c)
int32_t ebx

if (ecx_4 != 0)
    ebx.b = sub_4761a0(ecx_4, arg1, &var_34).b
else
    ebx.b = 0

if (var_20 u>= 0x10)
    j__free(var_34.d)

void* result
result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_34)
return result
