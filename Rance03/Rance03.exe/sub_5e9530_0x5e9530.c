// 函数: sub_5e9530
// 地址: 0x5e9530
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6cb758
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct filesystem::CFile::VTable* const var_40
int32_t eax_2 = __security_cookie ^ &var_40
int32_t __saved_esi
int32_t var_4c = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
var_40 = &filesystem::CFile::`vftable'
HANDLE var_3c = 0xffffffff
int32_t var_38 = 0
int32_t var_34 = 0
int32_t var_4 = 0
int32_t var_28
int32_t ebx
ebx.b = sub_604970(&var_40, sub_40d1c0(arg1 + 4, arg2, &var_28, arg1 + 4)).b == 0
int32_t var_14

if (var_14 u>= 0x10)
    j__free(var_28)

HANDLE esi_1

if (ebx.b != 0)
    esi_1 = var_3c
    ebx.b = 0
else
    int32_t var_14_1 = 0xf
    int32_t var_18_1 = 0
    var_28.b = ebx.b
    sub_402110(&var_28, &data_6eb754, 3)
    int32_t var_50_3 = 1
    ebx.b = sub_605320(&var_40, &var_28).b == 0
    
    if (var_14_1 u>= 0x10)
        j__free(var_28)
    
    if (ebx.b != 0)
        esi_1 = var_3c
        ebx.b = 0
    else
        esi_1 = var_3c
        int32_t buffer = 0
        uint32_t numberOfBytesWritten
        
        if (esi_1 == 0xffffffff)
            ebx.b = 0
        else if (WriteFile(esi_1, &buffer, 4, &numberOfBytesWritten, nullptr) == 0
                || numberOfBytesWritten != 4)
            ebx.b = 0
        else
            int32_t var_38_1 = var_38 + 4
            int32_t var_50_5 = 0
            
            if (sub_604e50(&var_40).b == 0)
                esi_1 = var_3c
                ebx.b = 0
            else if (sub_604a50(&var_40).b == 0)
                esi_1 = var_3c
                ebx.b = 0
            else
                esi_1 = var_3c
                ebx.b = 1

if (esi_1 != 0xffffffff)
    CloseHandle(esi_1)

BOOL result
result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_40)
return result
