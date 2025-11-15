// 函数: sub_496a00
// 地址: 0x496a00
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72fe39
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct IMainSystem::mainsystem::CMainSystem::VTable** var_14 = arg1
arg1[1] = &IInitMainSystem::`vftable'
*arg1 = &mainsystem::CMainSystem::`vftable'{for `IMainSystem'}
arg1[1] = &mainsystem::CMainSystem::`vftable'{for `IInitMainSystem'}
arg1[2] = &win32only::CDualBoot::`vftable'
arg1[3] = 0
int32_t var_8_1 = 0
arg1[4].b = 0
arg1[5] = 0
sub_6c5880(&arg1[6])
var_8_1.b = 1
sub_454b90(&arg1[0x34])
arg1[0x4a] = 0
arg1[0x4b] = &mainsystem::CTimer::`vftable'{for `ITimer'}
arg1[0x4c] = 0
void* eax_3 = &arg1[0x4e]
arg1[0x4d] = &mainsystem::CSys4xPath::`vftable'{for `ISys4xPath'}
*(eax_3 + 0x14) = 0xf
*(eax_3 + 0x10) = 0

if (*(eax_3 + 0x14) u>= 0x10)
    eax_3 = *eax_3

*eax_3 = 0
void* eax_4 = &arg1[0x54]
*(eax_4 + 0x14) = 0xf
*(eax_4 + 0x10) = 0

if (*(eax_4 + 0x14) u>= 0x10)
    eax_4 = *eax_4

*eax_4 = 0
void* eax_5 = &arg1[0x5a]
*(eax_5 + 0x14) = 0xf
*(eax_5 + 0x10) = 0

if (*(eax_5 + 0x14) u>= 0x10)
    eax_5 = *eax_5

*eax_5 = 0
arg1[0x60] = &mainsystem::CIDEWnd::`vftable'{for `IIDEWnd'}
arg1[0x61] = 0
void* eax_6 = &arg1[0x62]
*(eax_6 + 0x14) = 0xf
*(eax_6 + 0x10) = 0

if (*(eax_6 + 0x14) u>= 0x10)
    eax_6 = *eax_6

*eax_6 = 0
arg1[0x68] = &mainsystem::CLoadDLL::`vftable'
arg1[0x69] = 0
arg1[0x6a] = 0
arg1[0x6b] = 0
void* eax_7 = &arg1[0x6c]
*(eax_7 + 0x14) = 0xf
*(eax_7 + 0x10) = 0

if (*(eax_7 + 0x14) u>= 0x10)
    eax_7 = *eax_7

*eax_7 = 0
arg1[0x72] = &mainsystem::CEXFile::`vftable'
arg1[0x73] = &mainsystem::CComponentManager::`vftable'
arg1[0x74] = 0
arg1[0x75] = 0
arg1[0x76] = &mainsystem::CSetCallback::`vftable'{for `ISetCallback'}
arg1[0x77] = 0
arg1[0x78] = 0
arg1[0x79] = 0
arg1[0x7a] = &mainsystem::CGameVersion::`vftable'{for `IGameVersion'}
arg1[0x7b] = 0x64
var_8_1.b = 0xd
arg1[0x7c].w = 0
void* var_18 = &arg1[0x7d]
arg1[0x7d] = &mainsystem::CSystemVariable::`vftable'{for `ISystemVariable'}
void* var_1c = &arg1[0x7e]
arg1[0x7e] = 0
arg1[0x7f] = 0
arg1[0x7e] = sub_44e4c0()
var_8_1.b = 0xe
void* var_1c_1 = &arg1[0x80]
arg1[0x80] = 0
arg1[0x81] = 0
arg1[0x80] = sub_44e4c0()
arg1[0x82].b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
