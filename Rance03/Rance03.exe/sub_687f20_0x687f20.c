// 函数: sub_687f20
// 地址: 0x687f20
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6d1213
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_40
int32_t eax_2 = __security_cookie ^ &var_40
int32_t __saved_edi
int32_t var_50 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
HWND ebx = arg2
HWND var_3c = ebx
int32_t var_18 = 0xf
int32_t var_1c = 0
char var_2c = 0
sub_402110(&var_2c, "DPSoundListWindow", 0x11)
int32_t var_4 = 0
struct dpsound::CWindow::VTable** var_38

if (*(arg1 + 0xc8) == 0)
    struct dpsound::CWindow::VTable** eax_5
    int32_t ecx_1
    eax_5, ecx_1 = sub_69adc6(0x3b0)
    var_38 = eax_5
    var_4.b = 1
    struct dpsound::CWindow::dpsound::CSoundListWindow::VTable** eax_12
    
    if (eax_5 == 0)
        eax_12 = nullptr
    else
        char* ebx_1 = &var_2c
        
        if (var_18 u>= 0x10)
            ebx_1 = var_2c.d
        
        int32_t edi_1 = *(*(arg1 + 4) + 0x14)
        void* var_54_1 = arg1 + 0x30
        int32_t var_58_1 = ecx_1
        HGDIOBJ var_5c_1 = GetStockObject(LTGRAY_BRUSH)
        HCURSOR eax_9 = LoadCursorA(nullptr, 0x7f00)
        HICON eax_10 = LoadIconA(nullptr, 0x7f00)
        HICON eax_11
        int32_t ecx_2
        eax_11, ecx_2 = LoadIconA(nullptr, 0x7f00)
        void** var_68
        eax_12 = sub_68a890(var_38, edi_1, ebx_1, ecx_2, eax_11, eax_10, eax_9, var_68)
        ebx = var_3c
    
    var_4.b = 0
    *(arg1 + 0xc8) = eax_12
    sub_68bc60(eax_12)

void* ecx_5 = *(arg1 + 0xc8)

if (*(ecx_5 + 8) != 0)
    ebx.b = 0
else
    int32_t var_30 = *(arg1 + 0xb8)
    int32_t var_34 = *(arg1 + 0xbc)
    var_38 = nullptr
    var_3c = nullptr
    sub_68bea0(ecx_5, &var_38, &var_3c, &var_30, &var_34)
    char* ecx_6 = &var_2c
    
    if (var_18 u>= 0x10)
        ecx_6 = var_2c.d
    
    sub_696020(*(arg1 + 0xc8), ecx_6, 0x54300000, var_38, var_3c, var_30, var_34, ebx, nullptr, 
        *(*(arg1 + 4) + 0x14))
    ebx.b = 1

if (var_18 u>= 0x10)
    j__free(var_2c.d)

int32_t* result
result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_40)
return result
