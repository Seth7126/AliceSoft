// 函数: sub_460690
// 地址: 0x460690
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b2a68
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_2c
int32_t eax_2 = __security_cookie ^ &var_2c
int32_t __saved_esi
int32_t var_34 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
*arg1 = &exfile::CDefineData::`vftable'
arg1[1] = 0
arg1[2].b = 0
__builtin_strncpy(&arg1[3], "eeee", 4)
arg1[4] = sub_4591e0((zx.o(0)).d)
int32_t var_14 = 0xf
int32_t var_18 = 0
char var_28 = 0
sub_402110(&var_28, 0x6da1b5, nullptr)
int32_t var_4 = 0
sub_459160(&arg1[5], &var_28)

if (var_14 u>= 0x10)
    j__free(var_28.d)

arg1[0xb] = &exfile::CDefineDataTable::`vftable'
arg1[0xc] = &exfile::CFormatDataList::`vftable'
__builtin_memset(&arg1[0xd], 0, 0x18)
arg1[0x13] = &exfile::CDefineDataArray::`vftable'
arg1[0x14] = 0
arg1[0x15] = 0
arg1[0x16] = 0
arg1[0x17] = 0
fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_2c)
return arg1
