// 函数: sub_40cdc0
// 地址: 0x40cdc0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7278e6
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct dpanalysis::CModel::VTable** var_14 = arg1
int32_t __saved_ebp
int32_t var_1c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct dpanalysis::CModel::VTable** var_14_1 = arg1
*arg1 = &dpanalysis::CModel::`vftable'
arg1[1] = arg2
arg1[2] = 0
arg1[3] = 0
arg1[4] = &dpanalysis::CFuncStackInfo::`vftable'
__builtin_memset(&arg1[5], 0, 0x18)
int32_t var_8_1 = 0
arg1[0xb] = &dpanalysis::CBreakPointList::`vftable'
arg1[0xc] = 0
arg1[0xd] = 0
arg1[0xe] = 0
var_8_1.b = 1
sub_4080d0(&arg1[0xf])
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
