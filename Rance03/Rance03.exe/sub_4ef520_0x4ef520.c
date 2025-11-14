// 函数: sub_4ef520
// 地址: 0x4ef520
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c0978
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_50
int32_t eax_2 = __security_cookie ^ &var_50
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t __saved_edi
char* edx = (**arg1)(__security_cookie ^ &__saved_edi)
int32_t var_2c = 0xf
int32_t var_30 = 0
char var_40 = 0
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

sub_402110(&var_40, edx, ecx)
void* eax_7 = sub_4a9b10(&var_40)

if (var_2c u>= 0x10)
    j__free(var_40.d)

int32_t var_2c_1 = 0xf
int32_t var_30_1 = 0
var_40 = 0
int32_t result

if (eax_7 != 0)
    void* var_28
    sub_401f60(&var_28, (**arg2)())
    int32_t var_4 = 0
    int32_t* var_4c
    sub_4c9ea0(eax_7, &var_4c, &var_28)
    int32_t var_14
    
    if (var_14 u>= 0x10)
        j__free(var_28)
    
    int32_t* esi_3 = var_4c
    int32_t var_48
    
    if (esi_3 != 0)
        sub_4107c0(esi_3, var_48)
        j__free(esi_3)
    
    result = (var_48 - esi_3) s/ 0x18
else
    result = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_50)
return result
