// 函数: sub_45b940
// 地址: 0x45b940
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
*(arg3 + 4) = 4
char result

if (sub_45ba10(arg1, arg2, arg3 + 0x30) == 0)
    result = 0
else if (sub_45c030(arg1, arg2, arg3 + 0x2c) == 0)
    result = 0
else if (sub_457170(arg3 + 0x2c, *(arg1 + 4)) != 0)
    result = 1
else
    int32_t var_28
    sub_401f60(&var_28, 0x6dbe00)
    int32_t var_4 = 0
    sub_456a00(*(arg1 + 4), &var_28)
    int32_t var_14
    
    if (var_14 u>= 0x10)
        j__free(var_28)
    
    result = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_2c)
return result
