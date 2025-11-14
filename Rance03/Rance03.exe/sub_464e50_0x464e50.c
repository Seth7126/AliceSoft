// 函数: sub_464e50
// 地址: 0x464e50
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b8db6
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct exfile::CReversePolishNotation::VTable** var_10 = arg1
int32_t __saved_esi
int32_t var_18 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
struct exfile::CReversePolishNotation::VTable** var_10_1 = arg1
*arg1 = &exfile::CReversePolishNotation::`vftable'
__builtin_memset(&arg1[1], 0, 0x1d)
int32_t var_4 = 0
var_4.b = 1
sub_464fa0(arg1, arg2)
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
