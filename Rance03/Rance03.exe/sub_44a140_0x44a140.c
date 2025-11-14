// 函数: sub_44a140
// 地址: 0x44a140
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b6df8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_48
int32_t eax_2 = __security_cookie ^ &var_48
int32_t __saved_edi
int32_t var_58 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* edi = data_75d4c8
int32_t result

if (*(edi + 0x14) != 0)
    var_48 = 0
    int32_t var_44_1 = 0
    int32_t var_40_1 = 0
    int32_t var_4 = 0
    int32_t var_2c
    sub_401f60(&var_2c, arg1)
    struct filesystem::CFile::VTable* const var_3c_1 = &filesystem::CFile::`vftable'
    int32_t var_38_1 = 0xffffffff
    int32_t var_34_1 = 0
    int32_t var_30_1 = 0
    var_4.b = 2
    var_4.b = 0
    int32_t ebx
    ebx.b = sub_604a80(&var_2c, &var_48) == 0
    int32_t var_18
    
    if (var_18 u>= 0x10)
        j__free(var_2c)
    
    int32_t esi_1 = var_48
    int32_t result_1
    
    if (ebx.b != 0 || esi_1 == var_44_1)
        result_1 = 0
    else
        result_1 = (*(**(edi + 0x14) + 8))(esi_1, var_44_1 - esi_1)
        
        if (result_1 == 0)
            result_1 = 0
    
    if (esi_1 != 0)
        j__free(esi_1)
    
    result = result_1
else
    result = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_48)
return result
