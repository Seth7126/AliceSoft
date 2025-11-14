// 函数: sub_697bb0
// 地址: 0x697bb0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6d1aab
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct win32only::CDisplaySetting::VTable** var_10 = arg1
int32_t __saved_edi
int32_t var_1c = __security_cookie ^ &__saved_edi
char result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
struct win32only::CDisplaySetting::VTable** var_10_1 = arg1
*arg1 = &win32only::CDisplaySetting::`vftable'
int32_t var_4 = 0
void* esi = arg1[1]

if (*(esi + 8) != 0)
    int32_t eax_3 = *(esi + 0xc)
    
    if (eax_3 == 0)
        result = sub_697860(esi + 0x10)
        
        if (result != 0)
            *(esi + 8) = 0
    else if (eax_3 == 1)
        result = ChangeDisplaySettingsA(nullptr, 0)
        *(esi + 8) = 0
    else
        result = (eax_3 - 1).b - 1
        
        if (eax_3 == 2)
            *(esi + 8) = 0

int32_t var_4_1 = 0xffffffff
void* esi_1 = arg1[1]

if (esi_1 != 0)
    sub_6977a0(esi_1 + 0x10)
    result = j__free(esi_1)

fsbase->NtTib.ExceptionList = ExceptionList
return result
