// 函数: sub_64e070
// 地址: 0x64e070
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6ceac4
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct win32only::CWindowCallback::dplogviewer::COutputLog::VTable** var_10 = arg1
int32_t __saved_edi
int32_t var_1c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct win32only::CWindowCallback::dplogviewer::COutputLog::VTable** var_10_1 = arg1
*arg1 = &dplogviewer::COutputLog::`vftable'{for `win32only::CWindowCallback'}
arg1[1] = &dplogviewer::COutputLog::`vftable'{for `IJaffaDebugPlugin'}
int32_t var_4 = 2
int32_t i = 0

if (((arg1[0x51] - arg1[0x50]) & 0xfffffffc) s> 0)
    do
        int32_t* ecx = *(arg1[0x50] + (i << 2))
        
        if (ecx != 0)
            (*(*ecx + 0x48))(1)
        
        i += 1
    while (i s< (arg1[0x51] - arg1[0x50]) s>> 2)

int32_t eax_10 = arg1[0x50]
arg1[0x51] = eax_10

if (eax_10 != 0)
    j__free(eax_10)
    arg1[0x50] = 0
    arg1[0x51] = 0
    arg1[0x52] = 0

sub_64f370(&arg1[6])
int32_t* edi = arg1[4]
arg1[3] = &win32only::CWindow::`vftable'
BOOL hWnd = *edi

if (hWnd != 0)
    hWnd = DestroyWindow(hWnd)
    
    if (hWnd != 0)
        *edi = 0

if (edi[0xb].b != 0)
    hWnd = UnregisterClassA(edi[0xa], edi[0x18])
    
    if (hWnd != 0)
        edi[0xb].b = 0

void* esi_1 = arg1[4]

if (esi_1 != 0)
    if (*(esi_1 + 0x5c) u>= 0x10)
        j__free(*(esi_1 + 0x48))
    
    *(esi_1 + 0x5c) = 0xf
    *(esi_1 + 0x58) = 0
    *(esi_1 + 0x48) = 0
    
    if (*(esi_1 + 0x44) u>= 0x10)
        j__free(*(esi_1 + 0x30))
    
    *(esi_1 + 0x44) = 0xf
    *(esi_1 + 0x40) = 0
    *(esi_1 + 0x30) = 0
    hWnd = j__free(esi_1)

fsbase->NtTib.ExceptionList = ExceptionList
return hWnd
