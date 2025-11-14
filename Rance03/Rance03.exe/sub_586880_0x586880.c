// 函数: sub_586880
// 地址: 0x586880
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c76db
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct sealengine::CPRPValue::VTable** var_10 = arg1
int32_t __saved_edi
int32_t var_1c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct sealengine::CPRPValue::VTable** var_10_1 = arg1
*arg1 = &sealengine::CPRPValue::`vftable'
arg1[1] = *(arg2 + 4)
arg1[2] = *(arg2 + 8)
arg1[3] = *(arg2 + 0xc)
arg1[9] = 0xf
arg1[8] = 0
arg1[4].b = 0
sub_401ff0(&arg1[4], arg2 + 0x10, 0, 0xffffffff)
int32_t var_4 = 0
arg1[0xf] = 0xf
arg1[0xe] = 0
arg1[0xa].b = 0
sub_401ff0(&arg1[0xa], arg2 + 0x28, 0, 0xffffffff)
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
