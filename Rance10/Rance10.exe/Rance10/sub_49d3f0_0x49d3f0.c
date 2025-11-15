// 函数: sub_49d3f0
// 地址: 0x49d3f0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_730b2e
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct win32only::CWindowCallback::mainwindow::CMainWindow::VTable** var_14 = arg1
arg1[2] = 1
arg1[1] = &common::SuicideRefCounter<class IMainWindow>::`vftable'{for `common::NotifyRefCounter<class IMainWindow>'}
*arg1 = &mainwindow::CMainWindow::`vftable'{for `win32only::CWindowCallback'}
arg1[1] = &mainwindow::CMainWindow::`vftable'{for `common::SuicideRefCounter<class IMainWindow>'}
void* var_18 = &arg1[3]
arg1[3] = &win32only::CWindow::`vftable'
int32_t* eax_3 = sub_6e810c(0x88)
int32_t* var_18_1 = eax_3
arg1[4] = sub_6cec70(eax_3)
int32_t var_8_1 = 0
arg1[5] = arg2
arg1[6] = 0
arg1[7] = 0
arg1[8] = &mainwindow::CShutdown<class mainwindow::CMainWindow>::`vftable'{for `IShutdown'}
arg1[9] = arg1
arg1[0xa].b = 1
arg1[0xb] = &mainwindow::CWinMsg<class mainwindow::CMainWindow>::`vftable'{for `IWinMsg'}
arg1[0xc] = arg1
arg1[0xd].b = 1
arg1[0xe] = &mainwindow::CWindowActiveState::`vftable'{for `IWindowActiveState'}
arg1[0xf].b = 0
arg1[0x10].b = 0
arg1[0x11] = &common::CSize::`vftable'
arg1[0x12] = 0
arg1[0x13] = 0
arg1[0x14] = &common::CSize::`vftable'
arg1[0x15] = 0
arg1[0x16] = 0
arg1[0x17] = &common::CSize::`vftable'
arg1[0x18] = 0
arg1[0x19] = 0
arg1[0x1a] = &common::CSize::`vftable'
arg1[0x1b] = 0
arg1[0x1c] = 0
var_8_1.b = 7
void* eax_6 = sub_6e810c(8)
arg2 = eax_6
*eax_6 = 0
*(eax_6 + 4) = 1
*eax_6 = &savedata::CSaveData::`vftable'{for `common::SuicideRefCounter<class ISaveData>'}
sub_4a6290(&arg1[0x1d], eax_6)
arg1[0x2e] =
    &mainwindow::CWindowSettingProxy<class mainwindow::CMainWindow>::`vftable'{for `IWindowSetting'}
arg1[0x2f] = arg1
sub_4a4e70(&arg1[0x30])
arg1[0x50] = &mainwindow::CInputDevice<class mainwindow::CMainWindow>::`vftable'{for `IInputDevice'}
arg1[0x51] = arg1
arg1[0x52] = 0
arg1[0x53] = &mainwindow::CMouseWheel::`vftable'{for `IMouseWheel'}
arg1[0x54] = 0
arg1[0x55] = 0
sub_49cd10(&arg1[0x56])
sub_49c000(&arg1[0x72])
var_8_1.b = 0xe
void* eax_7 = sub_6e810c(0xc)
arg2 = eax_7
var_8_1.b = 0xf
arg1[0x75] = sub_47dad0(eax_7)
arg1[0x76] =
    &mainwindow::CMouseCursorPos<class mainwindow::CMainWindow>::`vftable'{for `IMouseCursorPos'}
arg1[0x77] = arg1
arg1[0x78] = &mainwindow::CMouseCursorConfigProxy::`vftable'{for `IMouseCursorConfig'}
arg1[0x79] = 0
arg1[0x7a] = &mainwindow::CHideMouseCursorByGameProxy::`vftable'{for `IHideMouseCursorByGame'}
arg1[0x7b] = 0
var_8_1.b = 0x12
arg1[0x7c] = 0
arg1[0x7d] = 0
arg1[0x7e].w = 0
sub_49c230(&arg1[0x7f])
var_8_1.b = 0x13
arg1[0x8d].b = 0
arg1[0x8e] = 0
arg1[0x8f] = 0x12c
arg2 = &arg1[0x90]
arg1[0x90] = &win32only::CDisplaySetting::`vftable'
void* eax_9 = sub_6e810c(0x18)
arg2 = eax_9
var_8_1.b = 0x14
arg1[0x91] = sub_6cda40(eax_9)
arg1[0x92] = &win32only::CAccelerator::`vftable'
arg1[0x93] = 0
arg1[0x94] = 0
arg1[0x95] = &win32only::CMenu::`vftable'
arg1[0x96] = 0
arg1[0x97].b = 1
arg1[0x98] = &win32only::CTimer::`vftable'
arg1[0x99] = 0
arg1[0x9a] = 0
arg1[0x9b] = 0x64
arg1[0x9c] = &mainwindow::CDebugPlugin::`vftable'
arg1[0x9d] = 0
arg1[0x9e] = 0
arg1[0x9f] = 0
arg1[0xa0] = 0
var_8_1.b = 0x19
void* eax_11 = sub_6e810c(8)
arg2 = eax_11
arg2 = &arg1[0xa1]
*eax_11 = 0
*(eax_11 + 4) = 1
*eax_11 = &savedata::CSaveData::`vftable'{for `common::SuicideRefCounter<class ISaveData>'}
arg1[0xa1] = &mainwindow::CDebugPluginSetting::`vftable'
arg1[0xa2] = eax_11
arg1[0xa3] = 0
arg1[0xa4] = 0
arg1[0xa5] = 0
var_8_1.b = 0x1a
arg1[0xab] = 0xf
arg1[0xaa] = 0
arg1[0xa6].b = 0
sub_403490(&arg1[0xa6], "ShowDPSetting.sav", 0x11)
arg1[0xac] = &mainwindow::COpenWeb<class mainwindow::CMainWindow>::`vftable'{for `IOpenWeb'}
arg1[0xad] = arg1
void* eax_12 = arg1[0x75]
arg1[0xae] = 0
*(*(eax_12 + 8) + 0x14) = &arg1[0x72]
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
