// 函数: sub_466610
// 地址: 0x466610
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b8fc0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_38 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
sub_402110(arg1 + 4, 0x6da1c6, nullptr)
sub_43f340(arg1 + 0x1c)
*(arg1 + 0x24) = **(arg1 + 0x1c)

if (arg1 + 4 != arg2)
    sub_401ff0(arg1 + 4, arg2, 0, 0xffffffff)

int32_t result_1 = 0
int32_t var_24 = 0
int32_t var_20 = 0
int32_t var_4 = 0
struct filesystem::CFile::VTable* const var_1c = &filesystem::CFile::`vftable'
int32_t var_18 = 0xffffffff
int32_t var_14 = 0
int32_t var_10 = 0
var_4.b = 1
var_4.b = 0

if (sub_604a80(arg1 + 4, &result_1) != 0)
    sub_466700(arg1, &result_1)

int32_t result = result_1

if (result != 0)
    result = j__free(result)

fsbase->NtTib.ExceptionList = ExceptionList
return result
