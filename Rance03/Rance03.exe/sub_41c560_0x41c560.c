// 函数: sub_41c560
// 地址: 0x41c560
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

*arg1 = &dpanalysis::CWindow::`vftable'{for `win32only::CWindowCallback'}
int32_t* esi = arg1[2]
arg1[1] = &win32only::CWindow::`vftable'
BOOL hWnd = *esi

if (hWnd != 0)
    hWnd = DestroyWindow(hWnd)
    
    if (hWnd != 0)
        *esi = 0

if (esi[0xb].b != 0)
    hWnd = UnregisterClassA(esi[0xa], esi[0x18])
    
    if (hWnd != 0)
        esi[0xb].b = 0

void* __saved_esi_2 = arg1[2]

if (__saved_esi_2 == 0)
    return hWnd

void* __saved_esi_1 = __saved_esi_2
return sub_698ef0(__saved_esi_2)
