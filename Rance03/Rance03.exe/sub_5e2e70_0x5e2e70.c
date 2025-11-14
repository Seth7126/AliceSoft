// 函数: sub_5e2e70
// 地址: 0x5e2e70
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6caeb5
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct IMainSystem::sys40::CMainSystem::VTable** var_14 = arg1
*arg1 = &sys40::CMainSystem::`vftable'{for `IMainSystem'}
arg1[1] = &sys40::CMainSystem::`vftable'{for `IInitMainSystem'}
int32_t var_4 = 0xf
int32_t* ecx = arg1[0x113]

if (ecx != 0)
    (*(*ecx + 4))(eax_2)
    arg1[0x113] = 0

arg1[0x11c] = &sys40::CDebugPlugin::`vftable'
void* var_10 = &arg1[0x11c]
var_4.b = 0x10
sub_5e0c70(&arg1[0x11c])
int32_t eax_4 = arg1[0x11d]

if (eax_4 != 0)
    j__free(eax_4)
    arg1[0x11d] = 0
    arg1[0x11e] = 0
    arg1[0x11f] = 0

arg1[0x11a] = &sys40::CGameVersion::`vftable'{for `IGameVersion'}
arg1[0x116] = &sys40::CSetCallback::`vftable'{for `ISetCallback'}
int32_t eax_5 = arg1[0x117]

if (eax_5 != 0)
    j__free(eax_5)
    arg1[0x117] = 0
    arg1[0x118] = 0
    arg1[0x119] = 0

var_4.b = 0xb
int32_t* ecx_2 = arg1[0x115]
arg1[0x114] = &sys40::CVM::`vftable'

if (ecx_2 != 0)
    (*(*ecx_2 + 4))(eax_2)
    arg1[0x115] = 0

int32_t* ecx_3 = data_75d50c

if (ecx_3 != 0)
    (*(*ecx_3 + 4))(eax_2)
    data_75d50c = 0

var_4.b = 0xa
arg1[0x112] = &sys40::CComponentManager::`vftable'
sub_5e0450()
arg1[0x111] = &sys40::CEXFile::`vftable'

if (arg1[0x110] u>= 0x10)
    j__free(arg1[0x10b])

arg1[0x110] = 0xf
arg1[0x10f] = 0
arg1[0x10b].b = 0
sub_5e2560(&arg1[0x107])
arg1[0x105] = &sys40::CIDEWnd::`vftable'{for `IIDEWnd'}
sub_5ea8f0(&arg1[0xf2])
arg1[0xf1] = &sys40::LOpenWeb::`vftable'{for `IOpenWeb'}
arg1[0xef] = &sys40::LTimer::`vftable'{for `ITimer'}
var_4.b = 2
sub_5e4d40(&arg1[0x52])
var_4.b = 1
sub_4522a0(&arg1[0x36])
sub_6513c0(&arg1[6])
BOOL hObject = arg1[3]
arg1[2] = &sys40::CDualBoot::`vftable'

if (hObject != 0)
    hObject = CloseHandle(hObject)
    arg1[3] = 0

fsbase->NtTib.ExceptionList = ExceptionList
return hObject
