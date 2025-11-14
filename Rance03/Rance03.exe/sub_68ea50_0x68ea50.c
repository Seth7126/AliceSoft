// 函数: sub_68ea50
// 地址: 0x68ea50
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6d1778
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct dpsound::CSoundData::VTable* var_54
int32_t eax_2 = __security_cookie ^ &var_54
int32_t __saved_edi
int32_t var_60 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
sub_68a6e0(&var_54, arg1)
int32_t var_4 = 0
sub_68cf40(arg1, arg2)
char var_50
*(arg2 + 4) = var_50
int32_t var_4c
*(arg2 + 8) = var_4c
void* var_48

if (arg2 + 0xc != &var_48)
    sub_401ff0(arg2 + 0xc, &var_48, 0, 0xffffffff)

int32_t var_30
*(arg2 + 0x24) = var_30
void var_2c
sub_4a6db0(arg2 + 0x28, &var_2c)
char var_20
*(arg2 + 0x34) = var_20
int32_t var_18
*(arg2 + 0x3c) = var_18
int32_t var_1c
*(arg2 + 0x38) = var_1c
int32_t var_14
*(arg2 + 0x40) = var_14
int32_t result = sub_6892a0(&var_54)
fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_54)
return result
