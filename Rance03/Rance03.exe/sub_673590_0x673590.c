// 函数: sub_673590
// 地址: 0x673590
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
sub_402110(&var_2c, "DPPartsViewWindow", 0x11)
int32_t var_4 = 0

if (*(arg1 + 0x58) == 0)
    struct dpparts::CWindow::VTable** eax_5 = sub_69adc6(0x1bc)
    var_4.b = 1
    struct dpparts::CWindow::dpparts::CViewWindow::VTable** ecx_3
    
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
        ecx_3 = sub_682ae0(eax_5, edi_1, ebx_1, ecx_1, eax_10, eax_9, eax_8)
    
    var_4.b = 0
    *(arg1 + 0x58) = ecx_3
    ecx_3[0x39] = arg1 + 0x50
    sub_684950(*(arg1 + 0x58))

void* ecx_5 = *(arg1 + 0x58)

if (*(ecx_5 + 8) == 0)
    char* edx_1 = &var_2c
    
    if (var_18 u>= 0x10)
        edx_1 = var_2c.d
    
    sub_684fb0(ecx_5, edx_1, 0x54300000, 0, 0, *(arg1 + 0x3c), *(arg1 + 0x40), arg2, nullptr, 
        *(*(arg1 + 4) + 0x14))

if (var_18 u>= 0x10)
    j__free(var_2c.d)

int32_t* result
result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_38)
return result
