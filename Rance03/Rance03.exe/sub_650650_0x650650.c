// 函数: sub_650650
// 地址: 0x650650
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6cec91
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct win32only::CWindowCallback::dplogviewer::CTextChildWnd::VTable** var_10 = arg1
int32_t __saved_edi
int32_t var_24 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct win32only::CWindowCallback::dplogviewer::CTextChildWnd::VTable** var_10_1 = arg1
*arg1 = &dplogviewer::CTextChildWnd::`vftable'{for `win32only::CWindowCallback'}
int32_t var_4 = 2
sub_64b990(&arg1[0x14])
int32_t* esi = arg1[2]
HWND hWnd = *esi

if (hWnd != 0 && DestroyWindow(hWnd) != 0)
    *esi = 0

if (esi[0xb].b != 0 && UnregisterClassA(esi[0xa], esi[0x18]) != 0)
    esi[0xb].b = 0

var_4.b = 1
sub_64b8d0(&arg1[0x14])
arg1[8] = &win32only::CDIBSurface::`vftable'{for `ISurface'}
sub_697220(&arg1[8])
int32_t* esi_1 = arg1[2]
arg1[1] = &win32only::CWindow::`vftable'
BOOL hWnd_1 = *esi_1

if (hWnd_1 != 0)
    hWnd_1 = DestroyWindow(hWnd_1)
    
    if (hWnd_1 != 0)
        *esi_1 = 0

if (esi_1[0xb].b != 0)
    hWnd_1 = UnregisterClassA(esi_1[0xa], esi_1[0x18])
    
    if (hWnd_1 != 0)
        esi_1[0xb].b = 0

void* ecx_3 = arg1[2]

if (ecx_3 != 0)
    void* var_28_5 = ecx_3
    hWnd_1 = sub_698ef0(ecx_3)

fsbase->NtTib.ExceptionList = ExceptionList
return hWnd_1
