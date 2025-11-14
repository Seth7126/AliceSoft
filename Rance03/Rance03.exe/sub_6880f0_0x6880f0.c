// 函数: sub_6880f0
// 地址: 0x6880f0
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
sub_402110(&var_2c, "DPOptionWindow", 0xe)
int32_t var_4 = 0
int32_t* result

if (*(arg1 + 0xcc) == 0)
    struct dpsound::CWindow::VTable** eax_5 = sub_69adc6(0x10c)
    var_4.b = 1
    
    if (eax_5 == 0)
        result = nullptr
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
        result = sub_688840(eax_5, edi_1, ebx_1, ecx_1, eax_10, eax_9, eax_8)
    
    var_4.b = 0
    *(arg1 + 0xcc) = result

void* ecx_3 = *(arg1 + 0xcc)
HWND ebx

if (*(ecx_3 + 8) != 0)
    ebx.b = 0
else
    char* edx_1 = &var_2c
    
    if (var_18 u>= 0x10)
        edx_1 = var_2c.d
    
    sub_696020(ecx_3, edx_1, 0x54300000, 0, 0, *(arg1 + 0xb8), *(arg1 + 0xbc), arg2, nullptr, 
        *(*(arg1 + 4) + 0x14))
    ebx.b = 1

if (var_18 u>= 0x10)
    j__free(var_2c.d)

result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_38)
return result
