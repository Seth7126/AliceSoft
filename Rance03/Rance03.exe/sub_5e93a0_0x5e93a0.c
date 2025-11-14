// 函数: sub_5e93a0
// 地址: 0x5e93a0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6cb720
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_58
int32_t eax_2 = __security_cookie ^ &var_58
int32_t __saved_esi
int32_t var_64 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
struct filesystem::CFile::VTable* const var_50 = &filesystem::CFile::`vftable'
BOOL hObject = 0xffffffff
int32_t var_48 = 0
int32_t var_44 = 0
int32_t var_4 = 0
int32_t var_28
int32_t ebx
ebx.b = sub_6049e0(&var_50, sub_40d1c0(arg1 + 4, arg2, &var_28, arg1 + 4)) == 0
int32_t var_14

if (var_14 u>= 0x10)
    j__free(var_28)

if (ebx.b == 0)
    int32_t var_2c_1 = 0xf
    int32_t var_30_1 = 0
    char var_40 = 0
    var_4.b = 1
    
    if (sub_604f30(&var_50, &var_40) == 0)
        ebx.b = 0
    else if (sub_40c250(&var_40, &data_6eb758) == 0)
        ebx.b = 0
    else
        var_58 = 0
        
        if (sub_604ee0(&var_50, &var_58) == 0 || var_58 != 0)
            ebx.b = 0
        else
            int32_t var_54 = 0
            
            if (sub_604ee0(&var_50, &var_54) == 0)
                ebx.b = 0
            else if (sub_604a50(&var_50) == 0 || var_54 != 0)
                ebx.b = 0
            else
                *arg3 = 0
                ebx.b = 1
    
    if (var_2c_1 u>= 0x10)
        j__free(var_40.d)
    
    int32_t var_2c_2 = 0xf
    int32_t var_30_2 = 0
    var_40 = 0
else
    ebx.b = 0

if (hObject != 0xffffffff)
    CloseHandle(hObject)

BOOL result
result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_58)
return result
