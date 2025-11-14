// 函数: sub_5b5970
// 地址: 0x5b5970
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6bb33b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct sys43vm::CCallFuncCount::VTable** var_10 = arg1
int32_t __saved_edi
int32_t var_1c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct sys43vm::CCallFuncCount::VTable** var_10_1 = arg1
*arg1 = &sys43vm::CCallFuncCount::`vftable'
arg1[7] = 0xf
arg1[6] = 0
arg1[2].b = 0
sub_401ff0(&arg1[2], arg2 + 8, 0, 0xffffffff)
int32_t var_4 = 0
arg1[8] = *(arg2 + 0x20)
sub_5b5a00(&arg1[9], arg2 + 0x24)
arg1[0xc] = *(arg2 + 0x30)
arg1[0xd] = *(arg2 + 0x34)
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
