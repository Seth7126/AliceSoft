// 函数: sub_459210
// 地址: 0x459210
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72b3eb
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct IDebugFileObjType::debugfile::CObjectType::VTable** var_14 = arg1
int32_t __saved_ebp
int32_t var_20 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct IDebugFileObjType::debugfile::CObjectType::VTable** var_14_1 = arg1
*arg1 = &debugfile::CObjectType::`vftable'{for `IDebugFileObjType'}
arg1[1] = *(arg2 + 4)
arg1[7] = 0xf
arg1[6] = 0
char* eax_4

if (arg1[7] u< 0x10)
    eax_4 = &arg1[2]
else
    eax_4 = arg1[2]

*eax_4 = 0
sub_403590(&arg1[2], arg2 + 8, 0, 0xffffffff)
int32_t var_8_1 = 0
sub_4593d0(&arg1[8], arg2 + 0x20)
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
