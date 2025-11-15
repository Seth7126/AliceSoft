// 函数: sub_458e70
// 地址: 0x458e70
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72ba46
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct IDebugFileVarSource::debugfile::CVarSource::VTable** var_14 = arg1
int32_t __saved_ebp
int32_t var_20 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct IDebugFileVarSource::debugfile::CVarSource::VTable** var_14_1 = arg1
*arg1 = &debugfile::CVarSource::`vftable'{for `IDebugFileVarSource'}
arg1[1] = *(arg2 + 4)
sub_459210(&arg1[2], arg2 + 8)
int32_t var_8_1 = 0
arg1[0x12] = 0xf
arg1[0x11] = 0
void* eax_5

if (arg1[0x12] u< 0x10)
    eax_5 = &arg1[0xd]
else
    eax_5 = arg1[0xd]

*eax_5 = 0
sub_403590(&arg1[0xd], arg2 + 0x34, 0, 0xffffffff)
var_8_1.b = 1
arg1[0x13] = *(arg2 + 0x4c)
arg1[0x14] = *(arg2 + 0x50)
arg1[0x15] = *(arg2 + 0x54)
arg1[0x16] = *(arg2 + 0x58)
arg1[0x17] = *(arg2 + 0x5c)
arg1[0x18] = *(arg2 + 0x60)
arg1[0x19] = *(arg2 + 0x64)
arg1[0x1a] = *(arg2 + 0x68)
arg1[0x20] = 0xf
arg1[0x1f] = 0
arg1[0x1b].b = 0
sub_403590(&arg1[0x1b], arg2 + 0x6c, 0, 0xffffffff)
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
