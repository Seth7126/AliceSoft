// 函数: sub_413e20
// 地址: 0x413e20
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b3d61
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct dpanalysis::CBreakPoint::VTable** var_10 = arg1
int32_t __saved_edi
int32_t var_1c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct dpanalysis::CBreakPoint::VTable** var_10_1 = arg1
*arg1 = &dpanalysis::CBreakPoint::`vftable'
arg1[1] = *(arg2 + 4)
arg1[2] = *(arg2 + 8)
arg1[3] = *(arg2 + 0xc)
arg1[4].b = *(arg2 + 0x10)
arg1[5] = *(arg2 + 0x14)
arg1[0xb] = 0xf
arg1[0xa] = 0
arg1[6].b = 0
sub_401ff0(&arg1[6], arg2 + 0x18, 0, 0xffffffff)
int32_t var_4 = 0
arg1[0x11] = 0xf
arg1[0x10] = 0
arg1[0xc].b = 0
sub_401ff0(&arg1[0xc], arg2 + 0x30, 0, 0xffffffff)
arg1[0x12] = &dpanalysis::CTokenAnalyser::`vftable'
arg1[0x13] = *(arg2 + 0x4c)
var_4.b = 2
arg1[0x14].b = *(arg2 + 0x50)
arg1[0x1a] = 0xf
arg1[0x19] = 0
arg1[0x15].b = 0
sub_401ff0(&arg1[0x15], arg2 + 0x54, 0, 0xffffffff)
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
