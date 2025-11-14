// 函数: sub_4ef2e0
// 地址: 0x4ef2e0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c0940
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_60
int32_t eax_2 = __security_cookie ^ &var_60
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t __saved_edi
char* edx = (**arg3)(__security_cookie ^ &__saved_edi)
int32_t var_48 = 0xf
int32_t var_4c = 0
char var_5c = 0
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

sub_402110(&var_5c, edx, ecx)
void* result = sub_4a9b10(&var_5c)
void* result_1 = result

if (var_48 u>= 0x10)
    result = j__free(var_5c.d)

int32_t var_48_1 = 0xf
int32_t var_4c_1 = 0
var_5c = 0

if (result_1 != 0)
    int32_t var_2c
    sub_401f60(&var_2c, (**arg4)())
    int32_t var_4 = 0
    char var_44
    sub_401f60(&var_44, (**arg2)())
    var_4.b = 1
    result = sub_421cd0(sub_4ccd20(result_1 + 0x18, &var_44) + 4, &var_2c)
    int32_t var_30
    
    if (var_30 u>= 0x10)
        result = j__free(var_44.d)
    
    int32_t var_30_1 = 0xf
    int32_t var_34_1 = 0
    var_44 = 0
    int32_t var_18
    
    if (var_18 u>= 0x10)
        result = j__free(var_2c)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_60)
return result
