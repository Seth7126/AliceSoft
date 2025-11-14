// 函数: sub_47a2e0
// 地址: 0x47a2e0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6ba147
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_b4
int32_t eax_2 = __security_cookie ^ &var_b4
int32_t __saved_edi
int32_t eax_4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* result = (**arg1)(0x6ddb04)

if (result != 0)
    int32_t* eax_7 = (**arg1)(0x6ddaf4)
    char var_b0_1 = 0
    
    if (eax_7 != 0)
        var_b0_1 = (**eax_7)(eax_4)
    
    int32_t var_40
    sub_401f60(&var_40, (*(*result + 0xc))(eax_4))
    int32_t var_4 = 0
    struct filesystem::CFilePath::VTable* const var_94 = &filesystem::CFilePath::`vftable'
    int32_t var_7c_1 = 0xf
    int32_t var_80_1 = 0
    char var_90 = 0
    var_4.b = 1
    sub_401ff0(&var_90, &data_74f9b4, 0, 0xffffffff)
    sub_6047d0(&var_94)
    int32_t var_28
    char* eax_13 = sub_402a20(&var_28, &var_40)
    var_4.b = 2
    char var_ac
    char* eax_14 = sub_410a80(eax_13.b, eax_13, &var_ac, &data_6dda74)
    var_4.b = 3
    sub_604730(&var_94)
    sub_403110(&var_90, eax_14, nullptr, 0xffffffff)
    int32_t var_98
    
    if (var_98 u>= 0x10)
        j__free(var_ac.d)
    
    int32_t var_98_1 = 0xf
    int32_t var_9c_1 = 0
    var_ac = 0
    int32_t var_14
    
    if (var_14 u>= 0x10)
        j__free(var_28)
    
    struct filesystem::CFilePath::VTable* const var_78 = &filesystem::CFilePath::`vftable'
    int32_t var_60_1 = 0xf
    int32_t var_64_1 = 0
    char var_74 = 0
    var_4.b = 4
    sub_6043a0(&var_78)
    int32_t var_98_2 = 0xf
    int32_t var_9c_2 = 0
    var_ac = 0
    sub_402110(&var_ac, 0x6dda1c, 2)
    var_4.b = 5
    sub_604730(&var_78)
    sub_403110(&var_74, &var_ac, nullptr, 0xffffffff)
    
    if (var_98_2 u>= 0x10)
        j__free(var_ac.d)
    
    struct filesystem::CFilePath::VTable* const var_5c = &filesystem::CFilePath::`vftable'
    int32_t var_44_1 = 0xf
    int32_t var_48_1 = 0
    char var_58 = 0
    var_4.b = 6
    sub_6044d0(&var_5c)
    int32_t var_98_3 = 0xf
    int32_t var_9c_3 = 0
    var_ac = 0
    sub_402110(&var_ac, 0x6dd9c4, 2)
    var_4.b = 7
    sub_604730(&var_5c)
    sub_403110(&var_58, &var_ac, nullptr, 0xffffffff)
    var_4.b = 6
    
    if (var_98_3 u>= 0x10)
        j__free(var_ac.d)
    
    char* eax_15 = &var_90
    
    if (var_7c_1 u>= 0x10)
        eax_15 = var_90.d
    
    sub_401f60(&var_ac, eax_15)
    var_4.b = 8
    int32_t ebx
    ebx.b = (*(*data_75d4e8 + 0xa8))(var_b0_1.d, &var_ac, &var_74, &var_58).b
    
    if (var_98_3 u>= 0x10)
        j__free(var_ac.d)
    
    int32_t var_98_4 = 0xf
    int32_t var_9c_4 = 0
    var_ac = 0
    var_5c = &filesystem::CFilePath::`vftable'
    
    if (var_44_1 u>= 0x10)
        j__free(var_58.d)
    
    int32_t var_44_2 = 0xf
    int32_t var_48_2 = 0
    var_58 = 0
    var_78 = &filesystem::CFilePath::`vftable'
    
    if (var_60_1 u>= 0x10)
        j__free(var_74.d)
    
    int32_t var_60_2 = 0xf
    int32_t var_64_2 = 0
    var_74 = 0
    var_94 = &filesystem::CFilePath::`vftable'
    
    if (var_7c_1 u>= 0x10)
        j__free(var_90.d)
    
    int32_t var_7c_2 = 0xf
    int32_t var_80_2 = 0
    var_90 = 0
    int32_t var_2c
    
    if (var_2c u>= 0x10)
        j__free(var_40)
    
    result.b = ebx.b
else
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_b4)
return result
