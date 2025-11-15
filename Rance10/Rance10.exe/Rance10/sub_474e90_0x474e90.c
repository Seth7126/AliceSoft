// 函数: sub_474e90
// 地址: 0x474e90
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72de86
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct IEXTreeReader::exfile::CDefineDataTree::VTable** var_14 = arg1
int32_t __saved_ebp
int32_t var_20 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct IEXTreeReader::exfile::CDefineDataTree::VTable** var_14_1 = arg1
*arg1 = &exfile::CDefineDataTree::`vftable'{for `IEXTreeReader'}
sub_462db0(&arg1[1], arg2)
int32_t var_8_1 = 0
arg1[7] = 0
arg1[8] = 0
arg1[9] = 0
arg1[0xa] = 0
var_8_1.b = 1
arg2 = &arg1[0xb]
arg1[0xb] = nullptr
arg1[0xc] = 0
arg1[0xb] = sub_4321d0()
arg1[0xd] = 0
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
