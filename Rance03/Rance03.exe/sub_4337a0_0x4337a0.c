// 函数: sub_4337a0
// 地址: 0x4337a0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b5750
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_44
int32_t eax_2 = __security_cookie ^ &var_44
int32_t __saved_edi
int32_t eax_4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_2c = 0xf
int32_t var_30 = 0
char var_40 = 0
int32_t var_4 = 0
char* edx = (**arg2)(eax_4)
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
int32_t var_58_1 = arg5
var_4.b = 1
var_4.b = 0
int32_t ebx
ebx.b = sub_4344e0(data_75d4bc, &var_40, ecx_4, &var_28, arg4) == 0

if (var_14 u>= 0x10)
    j__free(var_28.d)

if (ebx.b == 0)
    char* edx_1 = &var_40
    
    if (var_2c u>= 0x10)
        edx_1 = var_40.d
    
    (*(*arg3 + 4))(edx_1)
    ebx.b = 1
else
    ebx.b = 0

if (var_2c u>= 0x10)
    j__free(var_40.d)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_44)
return ebx.b
