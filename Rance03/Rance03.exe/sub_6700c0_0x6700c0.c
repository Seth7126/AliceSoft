// 函数: sub_6700c0
// 地址: 0x6700c0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6cfc63
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_38
int32_t eax_2 = __security_cookie ^ &var_38
int32_t __saved_edi
int32_t var_48 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_18 = 0xf
int32_t var_1c = 0
char var_2c = 0
sub_402110(&var_2c, "DPSpriteListWindow", 0x12)
int32_t var_4 = 0

if (*(arg1 + 0x70) == 0)
    struct dpparts::CWindow::VTable** eax_5 = sub_69adc6(0x2c0)
    var_4.b = 1
    struct dpparts::CWindow::dpparts::CDPSpriteListWindow::VTable** ecx_3
    
    if (eax_5 == 0)
        ecx_3 = nullptr
    else
        char* ebx_1 = &var_2c
        
        if (var_18 u>= 0x10)
            ebx_1 = var_2c.d
        
        int32_t edi_1 = *(*(arg1 + 4) + 0x14)
        HGDIOBJ var_4c_1 = GetStockObject(LTGRAY_BRUSH)
        HCURSOR eax_8 = LoadCursorA(nullptr, 0x7f00)
        HICON eax_9 = LoadIconA(nullptr, 0x7f00)
        HICON eax_10
        int32_t ecx_1
        eax_10, ecx_1 = LoadIconA(nullptr, 0x7f00)
        ecx_3 = sub_666940(eax_5, edi_1, ebx_1, ecx_1, eax_10, eax_9, eax_8)
    
    var_4.b = 0
    *(arg1 + 0x70) = ecx_3
    ecx_3[0x4d] = arg1 + 0x54
    *(*(arg1 + 0x70) + 0x130) = *(arg1 + 0x68)
    sub_6681b0(*(arg1 + 0x70))

void* ecx_6 = *(arg1 + 0x70)

if (*(ecx_6 + 8) == 0)
    char* edx_1 = &var_2c
    
    if (var_18 u>= 0x10)
        edx_1 = var_2c.d
    
    sub_684fb0(ecx_6, edx_1, 0x54300000, 0, 0, *(arg1 + 0x3c), *(arg1 + 0x40), arg2, nullptr, 
        *(*(arg1 + 4) + 0x14))

if (var_18 u>= 0x10)
    j__free(var_2c.d)

int32_t* result
result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_38)
return result
