// 函数: sub_4eede0
// 地址: 0x4eede0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c08c8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* var_48
int32_t eax_2 = __security_cookie ^ &var_48
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
void* result = sub_4a9b10(&var_40)
void* result_1 = result

if (var_2c u>= 0x10)
    result = j__free(var_40.d)

int32_t var_2c_1 = 0xf
int32_t var_30_1 = 0
var_40 = 0

if (result_1 != 0)
    int32_t var_28
    int32_t ecx_5 = sub_401f60(&var_28, (**arg2)())
    int32_t var_4 = 0
    uint32_t var_58_4 = zx.d(data_75dd2a)
    int32_t* var_5c_1 = &var_28
    result = sub_4ce1a0(result_1 + 0x10, &var_48, ecx_5)
    int32_t var_14
    
    if (var_14 u>= 0x10)
        result = j__free(var_28)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_48)
return result
