// 函数: sub_6864e0
// 地址: 0x6864e0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b2e16
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct IJaffaDebugPlugin::dpsound::CDPSoundSystem::VTable** var_10 = arg1
int32_t __saved_esi
int32_t var_18 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
struct IJaffaDebugPlugin::dpsound::CDPSoundSystem::VTable** var_10_1 = arg1
*arg1 = &dpsound::CDPSoundSystem::`vftable'{for `IJaffaDebugPlugin'}
int32_t var_4 = 1
HWND result = sub_6866e0(arg1)

if (arg1[0x11] u>= 0x10)
    result = j__free(arg1[0xc])

arg1[0x11] = 0xf
arg1[0x10] = 0
arg1[0xc].b = 0

if (arg1[0xb] u>= 0x10)
    result = j__free(arg1[6])

arg1[0xb] = 0xf
arg1[0xa] = 0
arg1[6].b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return result
