// 函数: sub_64f370
// 地址: 0x64f370
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

*arg1 = &dplogviewer::CTabWindow::`vftable'{for `win32only::CWindowCallback'}
uint32_t uIDEvent = arg1[0x48]
arg1[0x47] = &win32only::CTimer::`vftable'

if (uIDEvent != 0)
    KillTimer(arg1[0x49], uIDEvent)
    arg1[0x48] = 0

HGDIOBJ ho = arg1[0x30]
arg1[0x2f] = &win32only::CFont::`vftable'

if (ho != 0)
    DeleteObject(ho)
    arg1[0x30] = 0

if (arg1[0x37] u>= 0x10)
    j__free(arg1[0x32])

arg1[0x37] = 0xf
arg1[0x36] = 0
arg1[0x32].b = 0
HGDIOBJ ho_1 = arg1[0x25]
arg1[0x24] = &win32only::CFont::`vftable'

if (ho_1 != 0)
    DeleteObject(ho_1)
    arg1[0x25] = 0

if (arg1[0x2c] u>= 0x10)
    j__free(arg1[0x27])

arg1[0x2c] = 0xf
arg1[0x2b] = 0
arg1[0x27].b = 0
void* ecx = arg1[0x1f]

if (ecx != 0)
    struct win32only::CWindowCallback::dplogviewer::CTabWindow::VTable** var_10_6 = arg1
    void* var_14_2 = ecx
    sub_41a5c0(ecx, arg1[0x20])
    j__free(arg1[0x1f])
    arg1[0x1f] = 0
    arg1[0x20] = 0
    arg1[0x21] = 0

arg1[0xf] = &win32only::CDIBSurface::`vftable'{for `ISurface'}
sub_697220(&arg1[0xf])
arg1[3] = &win32only::CDIBSurface::`vftable'{for `ISurface'}
sub_697220(&arg1[3])
int32_t* edi = arg1[2]
arg1[1] = &win32only::CWindow::`vftable'
BOOL hWnd = *edi

if (hWnd != 0)
    hWnd = DestroyWindow(hWnd)
    
    if (hWnd != 0)
        *edi = 0

if (edi[0xb].b != 0)
    hWnd = UnregisterClassA(edi[0xa], edi[0x18])
    
    if (hWnd != 0)
        edi[0xb].b = 0

void* __saved_esi_2 = arg1[2]

if (__saved_esi_2 == 0)
    return hWnd

void* __saved_esi_1 = __saved_esi_2
return sub_698ef0(__saved_esi_2)
