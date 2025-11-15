// 函数: sub_458f60
// 地址: 0x458f60
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72ba06
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct IDebugFileFunction::debugfile::CFunction::VTable** var_14 = arg1
int32_t __saved_ebp
int32_t var_20 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct IDebugFileFunction::debugfile::CFunction::VTable** var_14_1 = arg1
*arg1 = &debugfile::CFunction::`vftable'{for `IDebugFileFunction'}
arg1[6] = 0xf
arg1[5] = 0
char* eax_3

if (arg1[6] u< 0x10)
    eax_3 = &arg1[1]
else
    eax_3 = arg1[1]

*eax_3 = 0
sub_403590(&arg1[1], arg2 + 4, 0, 0xffffffff)
int32_t var_8_1 = 0
arg1[0xc] = 0xf
arg1[0xb] = 0
void* eax_4

if (arg1[0xc] u< 0x10)
    eax_4 = &arg1[7]
else
    eax_4 = arg1[7]

*eax_4 = 0
sub_403590(&arg1[7], arg2 + 0x1c, 0, 0xffffffff)
var_8_1.b = 1
arg1[0x12] = 0xf
arg1[0x11] = 0
arg1[0xd].b = 0
sub_403590(&arg1[0xd], arg2 + 0x34, 0, 0xffffffff)
arg1[0x13] = *(arg2 + 0x4c)
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
