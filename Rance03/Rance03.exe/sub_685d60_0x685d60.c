// 函数: sub_685d60
// 地址: 0x685d60
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6d109b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_3c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* esi = *(arg1 + 0x18)

if (esi != 0)
    HWND hWnd = *(esi + 8)
    
    if (hWnd != 0 && *(esi + 0xc) != 0)
        DestroyWindow(hWnd)
        void* eax_3 = *(esi + 4)
        *(esi + 8) = 0
        
        if (UnregisterClassA(*(eax_3 + 0x28), *(eax_3 + 0x14)) != 0)
            *(esi + 0xc) = 0
    
    int32_t* ecx = *(arg1 + 0x18)
    
    if (ecx != 0)
        (*(*ecx + 4))(1)

struct dpparts::CWindow::VTable** eax_6 = sub_69adc6(0xa0)
struct dpparts::CWindow::VTable** var_1c = eax_6
int32_t var_c_1 = 0
struct dpparts::CWindow::dpparts::CMainWindow::VTable** esi_1

if (eax_6 == 0)
    esi_1 = nullptr
else
    void* ebx_1 = arg1 + 0x34
    
    if (*(arg1 + 0x48) u>= 0x10)
        ebx_1 = *ebx_1
    
    HCURSOR var_50_1 = LoadCursorA(nullptr, 0x7f00)
    HICON eax_8 = LoadIconA(*(arg1 + 0x4c), 0x83)
    HICON eax_9
    int32_t ecx_1
    eax_9, ecx_1 = LoadIconA(*(arg1 + 0x4c), 0x83)
    esi_1 = sub_6720e0(eax_6, *(arg1 + 0x4c), ebx_1, ecx_1, eax_9, eax_8)

int32_t var_c_2 = 0xffffffff
*(arg1 + 0x18) = esi_1
HWND hWnd_1 = esi_1[2]

if (hWnd_1 == 0)
    int32_t var_24 = *(arg1 + 8)
    int32_t var_28 = *(arg1 + 0xc)
    var_1c = *(arg1 + 0x10)
    int32_t var_20 = *(arg1 + 0x14)
    sub_673120(&var_1c, &var_20, &var_24, &var_28)
    void* esi_2 = arg1 + 0x34
    
    if (*(arg1 + 0x48) u>= 0x10)
        esi_2 = *esi_2
    
    HINSTANCE hInstance = *(arg1 + 0x4c)
    HMENU eax_15 = LoadMenuA(hInstance, 0x82)
    sub_684fb0(*(arg1 + 0x18), esi_2, 0x12cf0000, var_1c, var_20, var_24, var_28, nullptr, eax_15, 
        hInstance)
else
    SetWindowPos(hWnd_1, nullptr, 0, 0, 0, 0, 0x47)
    esi_1[0xa].b = 1

BOOL result
result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
var_4
return result
