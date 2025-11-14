// 函数: sub_4755e0
// 地址: 0x4755e0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b5378
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_2c
int32_t eax_2 = __security_cookie ^ &var_2c
int32_t __saved_edi
int32_t var_3c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void** esi = arg2
void** edi = arg4
char eax_6

if (*(arg1 + 4) != 0)
    eax_6 = sub_475580(arg1, esi, arg3, edi)

int32_t result

if (*(arg1 + 4) == 0 || eax_6 == 0)
    result = *arg5
else
    if (esi[5] u>= 0x10)
        esi = *esi
    
    int32_t* var_28
    sub_401f60(&var_28, esi)
    int32_t var_4 = 0
    
    if (edi[5] u>= 0x10)
        edi = *edi
    
    int32_t* edx_1 = &var_28
    int32_t var_14
    
    if (var_14 u>= 0x10)
        edx_1 = var_28
    
    int32_t result_1 = (*(**(arg1 + 4) + 0x74))(edx_1, arg3, edi)
    
    if (var_14 u>= 0x10)
        j__free(var_28)
    
    result = result_1

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_2c)
return result
