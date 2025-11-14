// 函数: sub_58f810
// 地址: 0x58f810
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c8210
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_40
int32_t eax_2 = __security_cookie ^ &var_40
int32_t __saved_esi
int32_t var_48 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_4 = 0
struct filesystem::CFile::VTable* const var_3c = &filesystem::CFile::`vftable'
int32_t var_38 = 0xffffffff
int32_t var_34 = 0
int32_t var_30 = 0
var_4.b = 1
int32_t var_2c
void** result = sub_604b50(sub_40d1c0(arg2, arg1 + 8, &var_2c, arg2))
int32_t var_18

if (var_18 u>= 0x10)
    j__free(var_2c)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_40)
return result
