// 函数: sub_466520
// 地址: 0x466520
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b8f86
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct exfile::CTokenList::VTable** var_10 = arg1
int32_t __saved_edi
int32_t var_20 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct exfile::CTokenList::VTable** var_10_1 = arg1
*arg1 = &exfile::CTokenList::`vftable'
int32_t var_4 = 1
sub_402110(&arg1[1], 0x6da1c6, nullptr)
sub_43f340(&arg1[7])
arg1[9] = arg1[7]->vFunc_0
sub_43f340(&arg1[7])
int32_t result = j__free(arg1[7])

if (arg1[6] u>= 0x10)
    result = j__free(arg1[1])

arg1[6] = 0xf
arg1[5] = 0
arg1[1].b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return result
