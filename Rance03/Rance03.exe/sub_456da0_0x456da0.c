// 函数: sub_456da0
// 地址: 0x456da0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b7c26
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct exfile::CDefineDataTable::VTable** var_10 = arg1
int32_t __saved_esi
int32_t var_18 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
struct exfile::CDefineDataTable::VTable** var_10_1 = arg1
*arg1 = &exfile::CDefineDataTable::`vftable'
int32_t var_4 = 1
sub_456ed0(arg1)
int32_t eax_3 = arg1[5]

if (eax_3 != 0)
    j__free(eax_3)
    arg1[5] = 0
    arg1[6] = 0
    arg1[7] = 0

int32_t var_4_1 = 0xffffffff
sub_45eab0(&arg1[1])

if ((arg2 & 1) != 0)
    j__free(arg1)

fsbase->NtTib.ExceptionList = ExceptionList
return arg1
