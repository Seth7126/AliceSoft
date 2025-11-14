// 函数: sub_695f10
// 地址: 0x695f10
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

HWND hWnd = arg1[2]
*arg1 = &dpsound::CWindow::`vftable'

if (hWnd != 0 && arg1[3].b != 0)
    DestroyWindow(hWnd)
    void* eax = arg1[1]
    arg1[2] = 0
    
    if (UnregisterClassA(*(eax + 0x28), *(eax + 0x14)) != 0)
        arg1[3].b = 0

if (arg1[9] u>= 0x10)
    j__free(arg1[4])

arg1[9] = 0xf
arg1[8] = 0
arg1[4].b = 0
return j__free(arg1[1])
