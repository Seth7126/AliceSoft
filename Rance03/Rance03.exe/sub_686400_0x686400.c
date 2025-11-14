// 函数: sub_686400
// 地址: 0x686400
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6d10cb
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct IJaffaDebugPlugin::dpsound::CDPSoundSystem::VTable** var_10 = arg1
int32_t __saved_esi
int32_t var_18 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
struct IJaffaDebugPlugin::dpsound::CDPSoundSystem::VTable** var_10_1 = arg1
*arg1 = &dpsound::CDPSoundSystem::`vftable'{for `IJaffaDebugPlugin'}
__builtin_memcpy(&arg1[1], 
    "\x01\x00\x00\x00\x20\x03\x00\x00\x58\x02\x00\x00\x64\x00\x00\x00\x64\x00\x00\x00", 0x14)
arg1[0xb] = 0xf
arg1[0xa] = 0
arg1[6].b = 0
sub_402110(&arg1[6], 0x703728, 9)
int32_t var_4 = 0
arg1[0x11] = 0xf
arg1[0x10] = 0
arg1[0xc].b = 0
sub_402110(&arg1[0xc], 0x703714, 0x10)
arg1[0x12] = 0
arg1[0x13] = 0
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
