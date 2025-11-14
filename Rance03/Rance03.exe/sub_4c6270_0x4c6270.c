// 函数: sub_4c6270
// 地址: 0x4c6270
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b2a68
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_2c
int32_t eax_2 = __security_cookie ^ &var_2c
int32_t __saved_esi
int32_t var_34 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList

if (*(arg1 + 0x140) == 0)
    char var_28
    sub_4e3480(&var_28)
    int32_t var_4 = 0
    int32_t var_18
    
    if (var_18 != 0)
        sub_4c7220(arg1, &var_28)
    
    int32_t var_4_1 = 0xffffffff
    int32_t var_14
    
    if (var_14 u>= 0x10)
        j__free(var_28.d)
    
    int32_t var_14_1 = 0xf
    int32_t var_18_1 = 0
    var_28 = 0

int32_t result = sub_61cef0()
fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_2c)
return result
