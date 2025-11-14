// 函数: sub_5e4d40
// 地址: 0x5e4d40
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6cb3f5
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct win32only::CWindowCallback::sys40::CMainWindow::VTable** var_10 = arg1
int32_t __saved_edi
int32_t eax_2 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct win32only::CWindowCallback::sys40::CMainWindow::VTable** var_10_1 = arg1
*arg1 = &sys40::CMainWindow::`vftable'{for `win32only::CWindowCallback'}
arg1[1] = &sys40::CMainWindow::`vftable'{for `IShutdown'}
int32_t var_4 = 0x15
void* ecx = arg1[0x68]

if (ecx != 0)
    sub_46cec0(*(ecx + 4))
    (*(arg1[0x68]->vFunc_0 + 4))(eax_2)
    arg1[0x68] = 0

if (arg1[0x9b] u>= 0x10)
    j__free(arg1[0x96])

arg1[0x9b] = 0xf
arg1[0x9a] = 0
arg1[0x96].b = 0
arg1[0x92] = &sys40::CReset::`vftable'{for `IReset2'}
uint32_t uIDEvent = arg1[0x8f]
arg1[0x8e] = &win32only::CTimer::`vftable'

if (uIDEvent != 0)
    KillTimer(arg1[0x90], uIDEvent)
    arg1[0x8f] = 0

HMENU hMenu = arg1[0x8c]
arg1[0x8b] = &win32only::CMenu::`vftable'

if (hMenu != 0)
    if (arg1[0x8d].b != 0)
        DestroyMenu(hMenu)
    
    arg1[0x8c] = 0

arg1[0x8d].b = 1
arg1[0x88] = &win32only::CAccelerator::`vftable'
var_4.b = 0xf
sub_697bb0(&arg1[0x86])
sub_5e1590(&arg1[0x75])
arg1[0x72] = &sys40::CFullScreen::`vftable'{for `IFullScreen'}
arg1[0x6d] = &sys40::CHideMouseCursorByGameProxy::`vftable'{for `IHideMouseCursorByGame'}
arg1[0x6b] = &sys40::CMouseCursorConfigProxy::`vftable'{for `IMouseCursorConfig'}
arg1[0x69] = &sys40::CMouseCursorPos::`vftable'{for `IMouseCursorPos'}
arg1[0x65] = &sys40::CDisableScreensaver::`vftable'{for `IDisableScreensaver'}
sub_5e2060(&arg1[0x49])
arg1[0x46] = &sys40::CMouseWheel::`vftable'{for `IMouseWheel'}
arg1[0x43] = &sys40::CInputDevice::`vftable'{for `IInputDevice'}
var_4.b = 5
sub_5e9f50(&arg1[0x27])
arg1[0x25] = &sys40::CWindowSettingProxy::`vftable'{for `IWindowSetting'}
arg1[0x16] = &sys40::CWindowSetting::`vftable'

if (arg1[0x24] u>= 0x10)
    j__free(arg1[0x1f])

arg1[0x24] = 0xf
arg1[0x23] = 0
arg1[0x1f].b = 0
arg1[0xd] = &sys40::CWindowActiveState::`vftable'{for `IWindowActiveState'}
arg1[0xa] = &sys40::CWinMsg::`vftable'{for `IWinMsg'}
arg1[5] = &sys40::CMainWindowProxy::`vftable'{for `IMainWindow3'}
int32_t* edi = arg1[3]
arg1[2] = &win32only::CWindow::`vftable'
BOOL hWnd = *edi

if (hWnd != 0)
    hWnd = DestroyWindow(hWnd)
    
    if (hWnd != 0)
        *edi = 0

if (edi[0xb].b != 0)
    hWnd = UnregisterClassA(edi[0xa], edi[0x18])
    
    if (hWnd != 0)
        edi[0xb].b = 0

void* ecx_7 = arg1[3]

if (ecx_7 != 0)
    void* var_20_7 = ecx_7
    hWnd = sub_698ef0(ecx_7)

fsbase->NtTib.ExceptionList = ExceptionList
return hWnd
