// 函数: sub_435de0
// 地址: 0x435de0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b5aeb
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_esi
int32_t var_1c = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
struct advengine::CFunctionSyntax::VTable** var_10 = arg1
*arg1 = &advengine::CFunctionSyntax::`vftable'
sub_438820(&arg1[1])
int32_t var_4 = 0
sub_438820(&arg1[0xb])
__builtin_memset(&arg1[0x15], 0, 0x30)
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
