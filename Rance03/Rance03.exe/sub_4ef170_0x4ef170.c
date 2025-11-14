// 函数: sub_4ef170
// 地址: 0x4ef170
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c0900
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_5c
int32_t eax_2 = __security_cookie ^ &var_5c
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t __saved_edi
char* edx = (**arg3)(__security_cookie ^ &__saved_edi)
int32_t var_44 = 0xf
int32_t var_48 = 0
char var_58 = 0
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

sub_402110(&var_58, edx, ecx)
void* result = sub_4a9b10(&var_58)
void* result_1 = result

if (var_44 u>= 0x10)
    result = j__free(var_58.d)

int32_t var_44_1 = 0xf
int32_t var_48_1 = 0
var_58 = 0

if (result_1 != 0)
    int32_t var_28
    sub_401f60(&var_28, (**arg4)())
    int32_t var_4 = 0
    char var_40
    sub_401f60(&var_40, (**arg2)())
    var_4.b = 1
    void* eax_11 = sub_4ccd20(result_1 + 0x18, &var_40)
    sub_4107c0(*(eax_11 + 4), *(eax_11 + 8))
    *(eax_11 + 8) = *(eax_11 + 4)
    sub_421cd0(eax_11 + 4, &var_28)
    result = arg5
    *(eax_11 + 0x10) = result
    int32_t var_2c
    
    if (var_2c u>= 0x10)
        result = j__free(var_40.d)
    
    int32_t var_2c_1 = 0xf
    int32_t var_30_1 = 0
    var_40 = 0
    int32_t var_14
    
    if (var_14 u>= 0x10)
        result = j__free(var_28)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_5c)
return result
