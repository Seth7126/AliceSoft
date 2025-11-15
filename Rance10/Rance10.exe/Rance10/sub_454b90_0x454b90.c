// 函数: sub_454b90
// 地址: 0x454b90
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72b62d
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_24 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct IDebugFile::debugfile::CDebugFile::VTable** var_14 = arg1
arg1[1] = &IDebugMode::`vftable'
*arg1 = &debugfile::CDebugFile::`vftable'{for `IDebugFile'}
arg1[1] = &debugfile::CDebugFile::`vftable'{for `IDebugMode'}
arg1[2] = 0
arg1[3] = 0
arg1[4] = 0
int32_t var_8_1 = 0
void* var_18 = &arg1[5]
arg1[5] = 0
arg1[6] = 0
arg1[5] = sub_4321d0()
__builtin_memset(&arg1[7], 0, 0x20)
var_8_1.b = 3
void* var_18_1 = &arg1[0xd]
arg1[0xd] = sub_4321d0()
var_8_1.b = 4
void* var_18_2 = &arg1[0xf]
arg1[0xf] = 0
arg1[0x10] = 0
arg1[0xf] = sub_4321d0()
var_8_1.b = 5
void* var_18_3 = &arg1[0x11]
arg1[0x11] = 0
arg1[0x12] = 0
arg1[0x11] = sub_44e4c0()
var_8_1.b = 6
void* var_18_4 = &arg1[0x13]
arg1[0x13] = 0
arg1[0x14] = 0
arg1[0x13] = sub_4321d0()
arg1[0x15].b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
