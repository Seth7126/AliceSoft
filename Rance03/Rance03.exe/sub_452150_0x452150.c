// 函数: sub_452150
// 地址: 0x452150
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b7627
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct IDebugFile::debugfile::CDebugFile::VTable** var_10 = arg1
int32_t __saved_esi
int32_t var_18 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
struct IDebugFile::debugfile::CDebugFile::VTable** var_10_1 = arg1
arg1[1] = &IDebugMode::`vftable'
*arg1 = &debugfile::CDebugFile::`vftable'{for `IDebugFile'}
arg1[1] = &debugfile::CDebugFile::`vftable'{for `IDebugMode'}
__builtin_memset(&arg1[2], 0, 0x14)
int32_t var_4 = 0
arg1[5] = sub_42f580()
__builtin_memset(&arg1[7], 0, 0x14)
var_4.b = 2
arg1[0xa] = sub_42f580()
__builtin_memset(&arg1[0xc], 0, 0x14)
var_4.b = 4
arg1[0xf] = sub_42f580()
__builtin_memset(&arg1[0x11], 0, 0x18)
arg1[0x17] = &debugfile::CVarSourceManager::`vftable'
arg1[0x18] = 0
arg1[0x19] = 0
arg1[0x1a] = 0
arg1[0x1b].b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
