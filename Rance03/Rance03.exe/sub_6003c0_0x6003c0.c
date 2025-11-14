// 函数: sub_6003c0
// 地址: 0x6003c0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6cc78c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct win32only::CWindowCallback::crayfish::CLogViewerWindow::VTable** var_10 = arg1
int32_t __saved_edi
int32_t var_1c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct win32only::CWindowCallback::crayfish::CLogViewerWindow::VTable** var_10_1 = arg1
*arg1 = &crayfish::CLogViewerWindow::`vftable'{for `win32only::CWindowCallback'}
int32_t var_4 = 3
int32_t* edi = arg1[5]

if (*edi != 0)
    HWND hWnd = *edi
    
    if (hWnd != 0 && DestroyWindow(hWnd) != 0)
        *edi = 0

if (arg1[0x32] u>= 0x10)
    j__free(arg1[0x2d])

arg1[0x32] = 0xf
arg1[0x31] = 0
arg1[0x2d].b = 0

if (arg1[0x2c] u>= 0x10)
    j__free(arg1[0x27])

arg1[0x2c] = 0xf
arg1[0x2b] = 0
arg1[0x27].b = 0
sub_601af0(&arg1[0xc])
arg1[9] = &crayfish::CWindowVScroll::`vftable'
arg1[6] = &crayfish::CWindowHScroll::`vftable'
int32_t* edi_1 = arg1[5]
arg1[4] = &win32only::CWindow::`vftable'
HWND hWnd_1 = *edi_1

if (hWnd_1 != 0 && DestroyWindow(hWnd_1) != 0)
    *edi_1 = 0

if (edi_1[0xb].b != 0 && UnregisterClassA(edi_1[0xa], edi_1[0x18]) != 0)
    edi_1[0xb].b = 0

void* ecx_1 = arg1[5]

if (ecx_1 != 0)
    void* var_20_6 = ecx_1
    sub_698ef0(ecx_1)

BOOL hMenu = arg1[2]
arg1[1] = &win32only::CMenu::`vftable'

if (hMenu != 0)
    if (arg1[3].b != 0)
        hMenu = DestroyMenu(hMenu)
    
    arg1[2] = 0

arg1[3].b = 1
fsbase->NtTib.ExceptionList = ExceptionList
return hMenu
