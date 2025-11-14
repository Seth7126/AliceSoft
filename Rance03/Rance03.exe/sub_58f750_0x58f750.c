// 函数: sub_58f750
// 地址: 0x58f750
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c81d0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct filesystem::CFile::VTable* const var_38
int32_t eax_2 = __security_cookie ^ &var_38
int32_t __saved_esi
int32_t var_44 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_28
int32_t* eax_6 = sub_40d1c0(arg2, arg1 + 8, &var_28, arg2)
int32_t var_4 = 0
var_38 = &filesystem::CFile::`vftable'
int32_t var_34 = 0xffffffff
int32_t var_30 = 0
int32_t var_2c = 0
var_4.b = 1
int32_t ebx
ebx.b = sub_604a80(eax_6, arg3)
int32_t var_14

if (var_14 u>= 0x10)
    j__free(var_28)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_38)
return ebx.b
