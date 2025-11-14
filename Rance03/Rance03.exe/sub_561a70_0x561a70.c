// 函数: sub_561a70
// 地址: 0x561a70
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_3 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c5800
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
char var_44
int32_t eax_2 = __security_cookie ^ &var_44
int32_t __saved_edi
int32_t var_50 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList

if (*(arg1 + 0x20) != 0xffffffff)
    int32_t var_30_1 = 0xf
    int32_t var_34_1 = 0
    var_44 = 0
    sub_402110(&var_44, 0x6e48b4, 0x12)
    int32_t var_4 = 0
    sub_563b90(arg2, &var_44, *(arg1 + 0x20))
    int32_t var_4_1 = 0xffffffff
    
    if (var_30_1 u>= 0x10)
        j__free(var_44.d)

if (*(arg1 + 0x24) != 0xffffffff)
    int32_t var_18_1 = 0xf
    int32_t var_1c_1 = 0
    char var_2c = 0
    sub_402110(&var_2c, 0x6e487c, 0x12)
    int32_t var_4_2 = 1
    sub_563b90(arg2, &var_2c, *(arg1 + 0x24))
    
    if (var_18_1 u>= 0x10)
        j__free(var_2c.d)

struct _EXCEPTION_REGISTRATION_RECORD** result
result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_44)
return result
