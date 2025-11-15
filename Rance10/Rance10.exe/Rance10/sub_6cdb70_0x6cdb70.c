// 函数: sub_6cdb70
// 地址: 0x6cdb70
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72a4f6
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_1c = __security_cookie ^ &__saved_ebp
char result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
*arg1 = &win32only::CDisplaySetting::`vftable'
void* esi = arg1[1]

if (*(esi + 8) != 0)
    int32_t eax_3 = *(esi + 0xc)
    
    if (eax_3 == 0)
        result = sub_6cd7a0(esi + 0x10)
        
        if (result != 0)
            *(esi + 8) = 0
    else if (eax_3 == 1)
        result = ChangeDisplaySettingsA(nullptr, 0)
        *(esi + 8) = 0
    else
        result = (eax_3 - 1).b - 1
        
        if (eax_3 == 2)
            *(esi + 8) = 0

void* esi_1 = arg1[1]

if (esi_1 != 0)
    int32_t var_8_1 = 0
    *(esi_1 + 0x10) = &win32only::CDisplayModeDD::`vftable'
    sub_6cd410(*(esi_1 + 0x14))
    void* ecx_2 = *(esi_1 + 0x14)
    
    if (ecx_2 != 0)
        void* var_20_1 = ecx_2
        sub_6cd830(ecx_2)
    
    int32_t var_20_2 = 0x18
    result = operator new(esi_1)

fsbase->NtTib.ExceptionList = ExceptionList
return result
