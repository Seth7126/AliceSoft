// 函数: sub_5e2c30
// 地址: 0x5e2c30
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6cadb4
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct IMainSystem::sys40::CMainSystem::VTable** var_10 = arg1
int32_t __saved_esi
int32_t var_18 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
struct IMainSystem::sys40::CMainSystem::VTable** var_10_1 = arg1
arg1[1] = &IInitMainSystem::`vftable'
*arg1 = &sys40::CMainSystem::`vftable'{for `IMainSystem'}
arg1[1] = &sys40::CMainSystem::`vftable'{for `IInitMainSystem'}
arg1[2] = &sys40::CDualBoot::`vftable'
arg1[3] = 0
int32_t var_4 = 0
arg1[4].b = 0
arg1[5] = 0
sub_651230(&arg1[6])
var_4.b = 1
sub_452150(&arg1[0x36])
var_4.b = 2
sub_5e49c0(&arg1[0x52])
arg1[0xee].b = 0
arg1[0xef] = &sys40::LTimer::`vftable'{for `ITimer'}
arg1[0xf0] = 0
arg1[0xf1] = &sys40::LOpenWeb::`vftable'{for `IOpenWeb'}
arg1[0xf2] = &sys40::CSys4xPath::`vftable'{for `ISys4xPath'}
arg1[0xf8] = 0xf
arg1[0xf7] = 0
arg1[0xf3].b = 0
arg1[0xfe] = 0xf
arg1[0xfd] = 0
arg1[0xf9].b = 0
arg1[0x104] = 0xf
arg1[0x103] = 0
arg1[0xff].b = 0
arg1[0x105] = &sys40::CIDEWnd::`vftable'{for `IIDEWnd'}
arg1[0x106] = 0
arg1[0x107] = &sys40::CLoadDLL::`vftable'
arg1[0x108] = 0
arg1[0x109] = 0
arg1[0x10a] = 0
arg1[0x110] = 0xf
arg1[0x10f] = 0
arg1[0x10b].b = 0
arg1[0x111] = &sys40::CEXFile::`vftable'
arg1[0x112] = &sys40::CComponentManager::`vftable'
arg1[0x113] = 0
arg1[0x114] = &sys40::CVM::`vftable'
arg1[0x115] = 0
arg1[0x116] = &sys40::CSetCallback::`vftable'{for `ISetCallback'}
arg1[0x117] = 0
arg1[0x118] = 0
arg1[0x119] = 0
arg1[0x11a] = &sys40::CGameVersion::`vftable'{for `IGameVersion'}
arg1[0x11b] = 0x64
arg1[0x11c] = &sys40::CDebugPlugin::`vftable'
__builtin_memset(&arg1[0x11d], 0, 0x11)
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
