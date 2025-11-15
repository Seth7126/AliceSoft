// 函数: sub_67c900
// 地址: 0x67c900
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_728076
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
*arg1 = &crayfish::CLogViewerWindow::`vftable'{for `win32only::CWindowCallback'}
int32_t* esi = arg1[5]

if (*esi != 0)
    HWND hWnd = *esi
    
    if (hWnd != 0 && DestroyWindow(hWnd) != 0)
        *esi = 0

int32_t eax_4 = arg1[0x33]
void* esi_1 = &arg1[0x2e]

if (eax_4 u>= 0x10)
    sub_403160(*esi_1, eax_4 + 1, 1)

*(esi_1 + 0x14) = 0xf
bool cond:0 = *(esi_1 + 0x14) u< 0x10
*(esi_1 + 0x10) = 0

if (not(cond:0))
    esi_1 = *esi_1

*esi_1 = 0
void* esi_2 = &arg1[0x28]
int32_t eax_6 = *(esi_2 + 0x14)

if (eax_6 u>= 0x10)
    sub_403160(*esi_2, eax_6 + 1, 1)

*(esi_2 + 0x14) = 0xf
bool cond:1 = *(esi_2 + 0x14) u< 0x10
*(esi_2 + 0x10) = 0

if (not(cond:1))
    esi_2 = *esi_2

*esi_2 = 0
int32_t var_8_1 = 0
arg1[0xc] = &crayfish::CTextView::`vftable'
HGDIOBJ ho = arg1[0x1b]

if (ho != 0)
    DeleteObject(ho)
    arg1[0x1b] = 0

arg1[0xd]->vFunc_1(eax_2)
sub_6cdfa0(&arg1[0x1a])
arg1[0xd] = &win32only::CDIBSurface::`vftable'{for `common::NotifyRefCounter<class ISurface>'}
sub_6ccf90(&arg1[0xd])
arg1[9] = &crayfish::CWindowVScroll::`vftable'
arg1[6] = &crayfish::CWindowHScroll::`vftable'
sub_6cee20(&arg1[4])
BOOL hMenu = arg1[2]
arg1[1] = &win32only::CMenu::`vftable'

if (hMenu != 0)
    if (arg1[3].b != 0)
        hMenu = DestroyMenu(hMenu)
    
    arg1[2] = 0

arg1[3].b = 1
fsbase->NtTib.ExceptionList = ExceptionList
return hMenu
