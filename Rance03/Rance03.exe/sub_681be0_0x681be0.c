// 函数: sub_681be0
// 地址: 0x681be0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6d0de9
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct dpparts::CWindow::VTable** var_8c
int32_t eax_2 = __security_cookie ^ &var_8c
int32_t __saved_edi
int32_t var_a0 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_70 = 0xf
int32_t var_74 = 0
char var_84 = 0
sub_402110(&var_84, "DPPartsDPSpriteWindow", 0x15)
int32_t var_4 = 0

if (*(arg1 + 0xe0) == 0)
    struct dpparts::CWindow::VTable** eax_6 = sub_69adc6(0x78)
    var_8c = eax_6
    var_4.b = 1
    struct dpparts::CWindow::dpparts::CDPSpriteWindow::VTable** ecx_3
    
    if (eax_6 == 0)
        ecx_3 = nullptr
    else
        char* ebx_1 = &var_84
        
        if (var_70 u>= 0x10)
            ebx_1 = var_84.d
        
        int32_t edi_1 = *(*(arg1 + 4) + 0x14)
        HGDIOBJ var_a4_1 = GetStockObject(LTGRAY_BRUSH)
        HCURSOR eax_9 = LoadCursorA(nullptr, 0x7f00)
        HICON eax_10 = LoadIconA(nullptr, 0x7f00)
        HICON eax_11
        int32_t ecx_1
        eax_11, ecx_1 = LoadIconA(nullptr, 0x7f00)
        ecx_3 = sub_66fb10(var_8c, edi_1, ebx_1, ecx_1, eax_11, eax_10, eax_9)
    
    var_4.b = 0
    int32_t eax_13 = *(arg1 + 0x54)
    *(arg1 + 0xe0) = ecx_3
    ecx_3[0x1a] = eax_13
    sub_6704c0()

if (*(*(arg1 + 0xe0) + 8) == 0)
    HINSTANCE ebx_2 = *(*(arg1 + 4) + 0x14)
    WINDOWPLACEMENT lpwndpl
    GetWindowPlacement(*(arg1 + 8), &lpwndpl)
    int32_t edi_3 = lpwndpl.rcNormalPosition.bottom - lpwndpl.rcNormalPosition.top
    WINDOWPLACEMENT lpwndpl_1
    GetWindowPlacement(*(arg1 + 8), &lpwndpl_1)
    char* ecx_4 = &var_84
    
    if (var_70 u>= 0x10)
        ecx_4 = var_84.d
    
    sub_684fb0(*(arg1 + 0xe0), ecx_4, 0x56000000, 0, *(arg1 + 0x2c), 
        lpwndpl_1.rcNormalPosition.right - lpwndpl_1.rcNormalPosition.left, edi_3, arg2, nullptr, 
        ebx_2)

if (var_70 u>= 0x10)
    j__free(var_84.d)

void* result
result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_8c)
return result
