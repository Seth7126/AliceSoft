// 函数: sub_470650
// 地址: 0x470650
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b9790
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_44
int32_t eax_2 = __security_cookie ^ &var_44
int32_t __saved_edi
int32_t var_50 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_2c
sub_402d30(&var_2c, arg2)
int32_t var_4 = 0
void** eax_5 = sub_417ed0(arg1 + 4, &var_2c)
char eax_7

if (eax_5 != *(arg1 + 4))
    eax_7 = sub_40c3a0(&var_2c, &eax_5[4])

void** var_40

if (eax_5 == *(arg1 + 4) || eax_7 != 0)
    var_40 = *(arg1 + 4)
else
    var_40 = eax_5

void** result

if (var_40 != *(arg1 + 4))
    struct filesystem::CFile::VTable* const var_3c_1 = &filesystem::CFile::`vftable'
    int32_t var_38_1 = 0xffffffff
    int32_t var_34_1 = 0
    int32_t var_30_1 = 0
    var_4.b = 1
    result = sub_604b50(&var_40[0xa])
else
    result = nullptr

int32_t var_18

if (var_18 u>= 0x10)
    j__free(var_2c)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_44)
return result
