// 函数: sub_49d7d0
// 地址: 0x49d7d0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72a4f6
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* esi = arg1[0x75]
*arg1 = &mainwindow::CMainWindow::`vftable'{for `win32only::CWindowCallback'}
arg1[1] = &mainwindow::CMainWindow::`vftable'{for `common::SuicideRefCounter<class IMainWindow>'}

if (esi != 0)
    int32_t* esi_1 = *(esi + 8)
    sub_47d8c0(esi_1)
    int32_t* ecx_1 = *esi_1
    
    if (ecx_1 != 0)
        (*(*ecx_1 + 8))(ecx_1)
        *esi_1 = 0
    
    (*(arg1[0x75]->vFunc_0 + 4))(eax_2)
    arg1[0x75] = 0

arg1[0xac] = &mainwindow::COpenWeb<class mainwindow::CMainWindow>::`vftable'{for `IOpenWeb'}
sub_49bb10(&arg1[0xa1])
int32_t var_8_1 = 0
arg1[0x9c] = &mainwindow::CDebugPlugin::`vftable'
sub_499a30(&arg1[0x9c])
sub_49a530(&arg1[0x9d])
uint32_t uIDEvent = arg1[0x99]
arg1[0x98] = &win32only::CTimer::`vftable'

if (uIDEvent != 0)
    KillTimer(arg1[0x9a], uIDEvent)
    arg1[0x99] = 0

HMENU hMenu = arg1[0x96]
arg1[0x95] = &win32only::CMenu::`vftable'

if (hMenu != 0)
    if (arg1[0x97].b != 0)
        DestroyMenu(hMenu)
    
    arg1[0x96] = 0

arg1[0x97].b = 1
arg1[0x92] = &win32only::CAccelerator::`vftable'
sub_6cdb70(&arg1[0x90])
arg1[0x7f] = &mainwindow::CFullScreenMenu::`vftable'{for `win32only::CWindowCallback'}
uint32_t uIDEvent_1 = arg1[0x83]
arg1[0x82] = &win32only::CTimer::`vftable'

if (uIDEvent_1 != 0)
    KillTimer(arg1[0x84], uIDEvent_1)
    arg1[0x83] = 0

sub_6cee20(&arg1[0x80])
arg1[0x7a] = &mainwindow::CHideMouseCursorByGameProxy::`vftable'{for `IHideMouseCursorByGame'}
arg1[0x78] = &mainwindow::CMouseCursorConfigProxy::`vftable'{for `IMouseCursorConfig'}
arg1[0x76] =
    &mainwindow::CMouseCursorPos<class mainwindow::CMainWindow>::`vftable'{for `IMouseCursorPos'}
arg1[0x72] = &mainwindow::CDisableScreensaver::`vftable'{for `IDisableScreensaver'}
sub_49cdc0(&arg1[0x56])
arg1[0x53] = &mainwindow::CMouseWheel::`vftable'{for `IMouseWheel'}
arg1[0x50] = &mainwindow::CInputDevice<class mainwindow::CMainWindow>::`vftable'{for `IInputDevice'}
sub_4a4f80(&arg1[0x30])
arg1[0x2e] =
    &mainwindow::CWindowSettingProxy<class mainwindow::CMainWindow>::`vftable'{for `IWindowSetting'}
sub_4a6330(&arg1[0x1d])
arg1[0x1a] = &common::CSize::`vftable'
arg1[0x17] = &common::CSize::`vftable'
arg1[0x14] = &common::CSize::`vftable'
arg1[0x11] = &common::CSize::`vftable'
arg1[0xe] = &mainwindow::CWindowActiveState::`vftable'{for `IWindowActiveState'}
arg1[0xb] = &mainwindow::CWinMsg<class mainwindow::CMainWindow>::`vftable'{for `IWinMsg'}
arg1[8] = &mainwindow::CShutdown<class mainwindow::CMainWindow>::`vftable'{for `IShutdown'}
BOOL result = sub_6cee20(&arg1[3])
fsbase->NtTib.ExceptionList = ExceptionList
return result
