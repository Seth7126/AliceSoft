// 函数: sub_652490
// 地址: 0x652490
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6cee28
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_28 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct filesystem::CFile::VTable* const var_1c = &filesystem::CFile::`vftable'
int32_t var_18 = 0xffffffff
int32_t var_14 = 0
int32_t var_10 = 0
int32_t var_4 = 0

if (sub_604a80(arg2, arg1 + 4) == 0)
    fsbase->NtTib.ExceptionList = ExceptionList
    return false

int32_t result = *(arg1 + 4)

if (result != *(arg1 + 8))
    *(arg1 + 0x10) = result
    *(arg1 + 0x14) = *(arg1 + 8)
else
    *(arg1 + 0x10) = 0
    *(arg1 + 0x14) = 0

result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
return result
