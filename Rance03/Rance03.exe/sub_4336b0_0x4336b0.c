// 函数: sub_4336b0
// 地址: 0x4336b0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b5378
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_2c
int32_t eax_2 = __security_cookie ^ &var_2c
int32_t __saved_edi
int32_t eax_4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t eax_5 = *arg2
char var_29 = 0
char* edx = (*eax_5)(eax_4)
int32_t var_14 = 0xf
int32_t var_18 = 0
char var_28 = 0
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

int32_t* ecx_4 = sub_402110(&var_28, edx, ecx_1)
int32_t var_40_1 = arg5
int32_t var_4 = 0
int32_t ebx
ebx.b = sub_434400(data_75d4bc, &var_29, ecx_4, &var_28, arg4).b == 0

if (var_14 u>= 0x10)
    j__free(var_28.d)

void* result

if (ebx.b == 0)
    result.b = var_29 != 0
    *arg3 = result
    result.b = 1
else
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_2c)
return result
