// 函数: sub_4051f0
// 地址: 0x4051f0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b2ddc
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct dpanalysis::CBreakPoint::VTable** var_10 = arg1
int32_t __saved_esi
int32_t var_18 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
struct dpanalysis::CBreakPoint::VTable** var_10_1 = arg1
arg1[1] = arg2
arg1[2] = arg3
*arg1 = &dpanalysis::CBreakPoint::`vftable'
arg1[3] = arg4
arg1[4].b = 1
arg1[5] = 0
arg1[0xb] = 0xf
arg1[0xa] = 0
arg1[6].b = 0
int32_t var_4 = 0
arg1[0x11] = 0xf
arg1[0x10] = 0
arg1[0xc].b = 0
arg1[0x12] = &dpanalysis::CTokenAnalyser::`vftable'
arg1[0x13] = 0
arg1[0x14].b = 0
arg1[0x1a] = 0xf
arg1[0x19] = 0
arg1[0x15].b = 0
var_4.b = 3
sub_4053a0(arg1)
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
