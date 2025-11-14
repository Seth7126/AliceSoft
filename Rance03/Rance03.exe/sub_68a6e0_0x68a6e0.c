// 函数: sub_68a6e0
// 地址: 0x68a6e0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6d149b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct dpsound::CSoundData::VTable** var_10 = arg1
int32_t __saved_edi
int32_t var_1c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct dpsound::CSoundData::VTable** var_10_1 = arg1
*arg1 = &dpsound::CSoundData::`vftable'
arg1[1].b = *(arg2 + 4)
arg1[2] = *(arg2 + 8)
arg1[8] = 0xf
arg1[7] = 0
arg1[3].b = 0
sub_401ff0(&arg1[3], arg2 + 0xc, 0, 0xffffffff)
int32_t var_4 = 0
arg1[9] = *(arg2 + 0x24)
sub_453d80(&arg1[0xa], arg2 + 0x28)
arg1[0xd].b = *(arg2 + 0x34)
arg1[0xe] = *(arg2 + 0x38)
arg1[0xf] = *(arg2 + 0x3c)
arg1[0x10] = *(arg2 + 0x40)
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
