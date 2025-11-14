// 函数: sub_4380b0
// 地址: 0x4380b0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b5e88
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct advengine::CToken::VTable** var_10 = arg1
int32_t __saved_edi
int32_t var_1c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct advengine::CToken::VTable** var_10_1 = arg1
*arg1 = &advengine::CToken::`vftable'
arg1[1] = *(arg2 + 4)
arg1[7] = 0xf
arg1[6] = 0
arg1[2].b = 0
sub_401ff0(&arg1[2], arg2 + 8, 0, 0xffffffff)
arg1[8] = *(arg2 + 0x20)
arg1[9] = *(arg2 + 0x24)
int32_t var_4 = 0
arg1[0xf] = 0xf
arg1[0xe] = 0
arg1[0xa].b = 0
sub_401ff0(&arg1[0xa], arg3, 0, 0xffffffff)
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
