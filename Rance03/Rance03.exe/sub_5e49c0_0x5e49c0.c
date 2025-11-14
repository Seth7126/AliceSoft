// 函数: sub_5e49c0
// 地址: 0x5e49c0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6cb2a7
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_20 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct win32only::CWindowCallback::sys40::CMainWindow::VTable** var_14 = arg1
arg1[1] = &IShutdown::`vftable'
*arg1 = &sys40::CMainWindow::`vftable'{for `win32only::CWindowCallback'}
arg1[1] = &sys40::CMainWindow::`vftable'{for `IShutdown'}
arg1[2] = &win32only::CWindow::`vftable'
int32_t* eax_3 = sub_69adc6(0x88)
int32_t* eax_4

if (eax_3 == 0)
    eax_4 = nullptr
else
    eax_4 = sub_698990(eax_3)

arg1[3] = eax_4
int32_t var_4 = 0
arg1[4] = 0
arg1[5] = &sys40::CMainWindowProxy::`vftable'{for `IMainWindow3'}
arg1[6] = 0
arg1[7] = 0
arg1[8].b = 1
arg1[9] = 0
arg1[0xa] = &sys40::CWinMsg::`vftable'{for `IWinMsg'}
arg1[0xb] = 0
arg1[0xc].b = 1
arg1[0xd] = &sys40::CWindowActiveState::`vftable'{for `IWindowActiveState'}
arg1[0xe].b = 0
var_4.b = 3
arg1[0xf].w = 0
__builtin_memset(&arg1[0x10], 0, 0x18)
sub_5eb000(&arg1[0x16])
arg1[0x25] = &sys40::CWindowSettingProxy::`vftable'{for `IWindowSetting'}
arg1[0x26] = 0
sub_5e9ec0(&arg1[0x27])
arg1[0x43] = &sys40::CInputDevice::`vftable'{for `IInputDevice'}
arg1[0x44] = 0
arg1[0x45] = 0
arg1[0x46] = &sys40::CMouseWheel::`vftable'{for `IMouseWheel'}
arg1[0x47] = 0
arg1[0x48] = 0
sub_5e1fb0(&arg1[0x49])
sub_5e1080(&arg1[0x65])
var_4.b = 0xa
struct IJoystick::ibis::CJoystick::VTable** eax_5 = sub_69adc6(0xc)
struct IJoystick::ibis::CJoystick::VTable** var_10 = eax_5
var_4.b = 0xb
struct IJoystick::ibis::CJoystick::VTable** eax_6

if (eax_5 == 0)
    eax_6 = nullptr
else
    eax_6 = sub_46cfc0(eax_5)

arg1[0x68] = eax_6
arg1[0x69] = &sys40::CMouseCursorPos::`vftable'{for `IMouseCursorPos'}
arg1[0x6a] = 0
arg1[0x6b] = &sys40::CMouseCursorConfigProxy::`vftable'{for `IMouseCursorConfig'}
arg1[0x6c] = 0
arg1[0x6d] = &sys40::CHideMouseCursorByGameProxy::`vftable'{for `IHideMouseCursorByGame'}
arg1[0x6e] = 0
arg1[0x6f] = 0
arg1[0x70] = 0
arg1[0x71].b = 0
arg1[0x72] = &sys40::CFullScreen::`vftable'{for `IFullScreen'}
arg1[0x73] = 0
arg1[0x74].b = 0
var_4.b = 0xf
sub_5e14f0(&arg1[0x75])
var_4.b = 0x10
arg1[0x83].b = 0
arg1[0x84] = 0
arg1[0x85] = 0
arg1[0x86] = &win32only::CDisplaySetting::`vftable'
char* eax_7 = sub_69adc6(0x18)
char* var_10_1 = eax_7
var_4.b = 0x11
char* eax_8

if (eax_7 == 0)
    eax_8 = nullptr
else
    eax_8 = sub_697a90(eax_7)

arg1[0x87] = eax_8
arg1[0x88] = &win32only::CAccelerator::`vftable'
arg1[0x89] = 0
arg1[0x8a] = 0
arg1[0x8b] = &win32only::CMenu::`vftable'
arg1[0x8c] = 0
arg1[0x8d].b = 1
arg1[0x8e] = &win32only::CTimer::`vftable'
arg1[0x8f] = 0
arg1[0x90] = 0
arg1[0x91] = 0x64
arg1[0x92] = &sys40::CReset::`vftable'{for `IReset2'}
arg1[0x93] = 0
arg1[0x94].b = 0
arg1[0x95] = 0
arg1[0x9b] = 0xf
arg1[0x9a] = 0
arg1[0x96].b = 0
void* eax_9 = arg1[0x68]
arg1[6] = arg1
arg1[0x26] = arg1
arg1[0xb] = arg1
arg1[0x44] = arg1
arg1[0x6a] = arg1
arg1[0x73] = arg1
void* eax_10 = *(eax_9 + 4)
data_75d510 = arg1
*(eax_10 + 0x14) = &arg1[0x65]
arg1[0x85] = 0x12c
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
