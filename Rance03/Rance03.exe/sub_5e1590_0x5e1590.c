// 函数: sub_5e1590
// 地址: 0x5e1590
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

*arg1 = &sys40::CFullScreenMenu::`vftable'{for `win32only::CWindowCallback'}
uint32_t uIDEvent = arg1[4]
arg1[3] = &win32only::CTimer::`vftable'

if (uIDEvent != 0)
    KillTimer(arg1[5], uIDEvent)
    arg1[4] = 0

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
