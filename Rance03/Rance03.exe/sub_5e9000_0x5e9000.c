// 函数: sub_5e9000
// 地址: 0x5e9000
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6cb6a8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_48
int32_t eax_2 = __security_cookie ^ &var_48
int32_t __saved_edi
int32_t var_58 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct filesystem::CFile::VTable* const var_44 = &filesystem::CFile::`vftable'
HANDLE var_40 = 0xffffffff
int32_t var_3c = 0
int32_t var_38 = 0
int32_t var_4 = 0
int32_t var_2c
int32_t ebx
ebx.b = sub_604970(&var_44, sub_40d1c0(arg1 + 0x1c, arg2, &var_2c, arg1 + 0x1c)).b == 0
int32_t var_18

if (var_18 u>= 0x10)
    j__free(var_2c)

HANDLE esi_1

if (ebx.b != 0)
    esi_1 = var_40
    ebx.b = 0
else
    int32_t var_18_1 = 0xf
    int32_t var_1c_1 = 0
    var_2c.b = ebx.b
    sub_402110(&var_2c, 0x6eb734, 3)
    int32_t var_5c_3 = 1
    ebx.b = sub_605320(&var_44, &var_2c).b == 0
    
    if (var_18_1 u>= 0x10)
        j__free(var_2c)
    
    if (ebx.b != 0)
        esi_1 = var_40
        ebx.b = 0
    else
        esi_1 = var_40
        int32_t buffer = 0
        uint32_t numberOfBytesWritten
        
        if (esi_1 == 0xffffffff)
            ebx.b = 0
        else if (WriteFile(esi_1, &buffer, 4, &numberOfBytesWritten, nullptr) == 0
                || numberOfBytesWritten != 4)
            ebx.b = 0
        else
            int32_t var_3c_1 = var_3c + 4
            int32_t var_5c_5 = 1
            
            if (sub_605320(&var_44, arg1 + 4).b == 0)
                esi_1 = var_40
                ebx.b = 0
            else if (sub_604a50(&var_44).b == 0)
                esi_1 = var_40
                ebx.b = 0
            else
                esi_1 = var_40
                ebx.b = 1

if (esi_1 != 0xffffffff)
    CloseHandle(esi_1)

BOOL result
result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_48)
return result
