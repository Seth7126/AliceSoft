// 函数: sub_4359c0
// 地址: 0x4359c0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b5a36
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct advengine::CValueSyntax::VTable** var_10 = arg1
int32_t __saved_edi
int32_t var_1c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct advengine::CValueSyntax::VTable** var_10_1 = arg1
*arg1 = &advengine::CValueSyntax::`vftable'
arg1[1] = &advengine::CToken::`vftable'
arg1[2] = *(arg2 + 8)
arg1[8] = 0xf
arg1[7] = 0
arg1[3].b = 0
sub_401ff0(&arg1[3], arg2 + 0xc, 0, 0xffffffff)
arg1[9] = *(arg2 + 0x24)
arg1[0xa] = *(arg2 + 0x28)
int32_t var_4 = 0
sub_435af0(&arg1[0xb], arg2 + 0x2c)
var_4.b = 1
arg1[0x13] = 0xf
arg1[0x12] = 0
arg1[0xe].b = 0
sub_401ff0(&arg1[0xe], arg2 + 0x38, 0, 0xffffffff)
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
