// 函数: sub_663240
// 地址: 0x663240
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6cf9c3
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct dpparts::CWindow::dpparts::CDPPartsWindow::VTable** var_10 = arg1
int32_t __saved_edi
int32_t var_1c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct dpparts::CWindow::dpparts::CDPPartsWindow::VTable** var_10_1 = arg1
*arg1 = &dpparts::CDPPartsWindow::`vftable'{for `dpparts::CWindow'}
int32_t var_4 = 1
void* edi = arg1[0x18]

if (edi != 0)
    HWND hWnd = *(edi + 8)
    
    if (hWnd != 0 && *(edi + 0xc) != 0)
        DestroyWindow(hWnd)
        void* eax_3 = *(edi + 4)
        *(edi + 8) = 0
        
        if (UnregisterClassA(*(eax_3 + 0x28), *(eax_3 + 0x14)) != 0)
            *(edi + 0xc) = 0
    
    int32_t* ecx = arg1[0x18]
    
    if (ecx != 0)
        (*(*ecx + 4))(1)
    
    arg1[0x18] = 0

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

int32_t* ecx_2 = arg1[0x16]

if (ecx_2 != 0)
    (**ecx_2)(1)
    arg1[0x16] = 0

arg1[0x19] = &dpparts::CPartsEngineWrapper::`vftable'
int32_t eax_10 = arg1[0x1a]

if (eax_10 != 0)
    j__free(eax_10)
    arg1[0x1a] = 0
    arg1[0x1b] = 0
    arg1[0x1c] = 0

int32_t result = sub_684ea0(arg1)
fsbase->NtTib.ExceptionList = ExceptionList
return result
