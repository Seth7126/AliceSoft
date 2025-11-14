// 函数: sub_672220
// 地址: 0x672220
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6d019c
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct dpparts::CWindow::dpparts::CMainWindow::VTable** var_10 = arg1
int32_t __saved_edi
int32_t var_1c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
*arg1 = &dpparts::CMainWindow::`vftable'{for `dpparts::CWindow'}
int32_t var_4 = 3
void* edi = arg1[0x16]

if (edi != 0)
    HWND hWnd = *(edi + 8)
    
    if (hWnd != 0 && *(edi + 0xc) != 0)
        DestroyWindow(hWnd)
        void* eax_3 = *(edi + 4)
        *(edi + 8) = 0
        
        if (UnregisterClassA(*(eax_3 + 0x28), *(eax_3 + 0x14)) != 0)
            *(edi + 0xc) = 0
    
    int32_t* ecx = arg1[0x16]
    
    if (ecx != 0)
        (*(*ecx + 4))(1)
    
    arg1[0x16] = 0

void* edi_1 = arg1[0x17]

if (edi_1 != 0)
    HWND hWnd_1 = *(edi_1 + 8)
    
    if (hWnd_1 != 0 && *(edi_1 + 0xc) != 0)
        DestroyWindow(hWnd_1)
        void* eax_6 = *(edi_1 + 4)
        *(edi_1 + 8) = 0
        
        if (UnregisterClassA(*(eax_6 + 0x28), *(eax_6 + 0x14)) != 0)
            *(edi_1 + 0xc) = 0
    
    int32_t* ecx_1 = arg1[0x17]
    
    if (ecx_1 != 0)
        (*(*ecx_1 + 4))(1)
    
    arg1[0x17] = 0

int32_t* ecx_2 = arg1[0x15]

if (ecx_2 != 0)
    (**ecx_2)(1)
    arg1[0x15] = 0

uint32_t uIDEvent = arg1[0x26]

if (uIDEvent != 0)
    KillTimer(arg1[0x27], uIDEvent)
    arg1[0x26] = 0

uint32_t uIDEvent_1 = arg1[0x26]
arg1[0x25] = &win32only::CTimer::`vftable'

if (uIDEvent_1 != 0)
    KillTimer(arg1[0x27], uIDEvent_1)
    arg1[0x26] = 0

arg1[0x1e] = &dpparts::CMouse::`vftable'
arg1[0x18] = &dpparts::CGuiStatusBar::`vftable'
void* ecx_3 = arg1[0x19]

if (ecx_3 != 0)
    struct dpparts::CWindow::dpparts::CMainWindow::VTable** var_20_7 = arg1
    void* var_24_5 = ecx_3
    sub_5b9610(ecx_3, arg1[0x1a])
    j__free(arg1[0x19])
    arg1[0x19] = 0
    arg1[0x1a] = 0
    arg1[0x1b] = 0

int32_t result = sub_684ea0(arg1)
fsbase->NtTib.ExceptionList = ExceptionList
return result
