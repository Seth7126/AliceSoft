// 函数: sub_6cee20
// 地址: 0x6cee20
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

*arg1 = &win32only::CWindow::`vftable'
int32_t* esi = arg1[1]
BOOL hWnd = *esi

if (hWnd != 0)
    hWnd = DestroyWindow(hWnd)
    
    if (hWnd != 0)
        *esi = 0

if (esi[0xb].b != 0)
    hWnd = UnregisterClassA(esi[0xa], esi[0x18])
    
    if (hWnd != 0)
        esi[0xb].b = 0

void* esi_1 = arg1[1]

if (esi_1 == 0)
    return hWnd

sub_6cf210(esi_1)
int32_t var_c_3 = 0x88
return operator new(esi_1)
