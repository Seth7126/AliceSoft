// 函数: sub_698b20
// 地址: 0x698b20
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* edi = arg1[1]
*arg1 = &win32only::CWindow::`vftable'
HWND hWnd = *edi

if (hWnd != 0 && DestroyWindow(hWnd) != 0)
    *edi = 0

if (edi[0xb].b != 0 && UnregisterClassA(edi[0xa], edi[0x18]) != 0)
    edi[0xb].b = 0

void* ecx = arg1[1]

if (ecx != 0)
    void* var_c_3 = ecx
    sub_698ef0(ecx)

if ((arg2 & 1) != 0)
    j__free(arg1)

return arg1
