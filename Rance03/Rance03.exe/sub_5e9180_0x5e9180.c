// 函数: sub_5e9180
// 地址: 0x5e9180
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6cb6e0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_5c
int32_t eax_2 = __security_cookie ^ &var_5c
int32_t __saved_esi
int32_t var_68 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
struct filesystem::CFile::VTable* const var_54 = &filesystem::CFile::`vftable'
BOOL hObject = 0xffffffff
int32_t var_4c = 0
int32_t var_48 = 0
int32_t var_4 = 0
int32_t var_2c
int32_t ebx
ebx.b = sub_6049e0(&var_54, sub_40d1c0(arg1 + 0x1c, arg2, &var_2c, arg1 + 0x1c)) == 0
int32_t var_18

if (var_18 u>= 0x10)
    j__free(var_2c)

if (ebx.b == 0)
    int32_t var_30_1 = 0xf
    int32_t var_34_1 = 0
    char var_44 = 0
    var_4.b = 1
    
    if (sub_604f30(&var_54, &var_44) == 0)
        ebx.b = 0
    else if (sub_40c250(&var_44, 0x6eb730) == 0)
        ebx.b = 0
    else
        int32_t var_58 = 0
        
        if (sub_604ee0(&var_54, &var_58) == 0 || var_58 != 0)
            ebx.b = 0
        else if (sub_604f30(&var_54, arg1.b + 4) == 0)
            ebx.b = 0
        else
            ebx.b = 1
    
    if (var_30_1 u>= 0x10)
        j__free(var_44.d)
    
    int32_t var_30_2 = 0xf
    int32_t var_34_2 = 0
    var_44 = 0
else
    ebx.b = 0

if (hObject != 0xffffffff)
    CloseHandle(hObject)

BOOL result
result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_5c)
return result
