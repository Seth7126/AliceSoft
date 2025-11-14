// 函数: sub_476bb0
// 地址: 0x476bb0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b9ef8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_7c
int32_t eax_2 = __security_cookie ^ &var_7c
int32_t __saved_edi
int32_t eax_4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_14 = 0xf
int32_t var_18 = 0
char var_28 = 0
int32_t var_4 = 0
struct _EXCEPTION_REGISTRATION_RECORD** result
int32_t ebx

if (sub_477070(&var_28).b == 0 || *(arg1 + 8) != 0)
    ebx.b = 0
else if (sub_4734f0(arg1 + 4, &var_28).b == 0)
    ebx.b = 0
else if (sub_473820(arg1 + 4, *(arg1 + 8)).b == 0)
    ebx.b = 0
else
    struct filesystem::CFilePath::VTable* const var_60 = &filesystem::CFilePath::`vftable'
    int32_t var_48_1 = 0xf
    int32_t var_4c_1 = 0
    char var_5c = 0
    var_4.b = 1
    sub_6043a0(&var_60)
    char var_78
    sub_401f60(&var_78, "Sound")
    var_4.b = 2
    sub_604730(&var_60)
    int32_t ecx_7 = sub_403110(&var_5c, &var_78, nullptr, 0xffffffff)
    var_4.b = 1
    int32_t var_64
    
    if (var_64 u>= 0x10)
        ecx_7 = j__free(var_78.d)
    
    bool cond:0_1 = data_75d534 == 0
    int32_t var_64_1 = 0xf
    int32_t var_68_1 = 0
    var_78 = 0
    
    if (not(cond:0_1))
        int32_t var_90_4 = ecx_7
        int32_t* eax_5 = sub_6203f0()
        
        if (eax_5 != 0)
            int32_t* eax_6 = (**eax_5)(0x6dd470)
            
            if (eax_6 != 0 && (**eax_6)(eax_4) != 0)
                sub_470860(arg1 + 0x38, &var_5c, 0xffffffff)
    
    struct filesystem::CFilePath::VTable* const var_44 = &filesystem::CFilePath::`vftable'
    int32_t var_2c_1 = 0xf
    int32_t var_30_1 = 0
    char var_40 = 0
    var_4.b = 3
    sub_6044d0(&var_44)
    sub_401f60(&var_78, "Sound")
    var_4.b = 4
    sub_604730(&var_44)
    int32_t ecx_15
    result, ecx_15 = sub_403110(&var_40, &var_78, nullptr, 0xffffffff)
    var_4.b = 3
    
    if (var_64_1 u>= 0x10)
        result, ecx_15 = j__free(var_78.d)
    
    bool cond:1_1 = data_75d534 == 0
    int32_t var_64_2 = 0xf
    int32_t var_68_2 = 0
    var_78 = 0
    
    if (not(cond:1_1))
        int32_t var_90_6 = ecx_15
        result = sub_6203f0()
        
        if (result != 0)
            result = (*result)->Next(0x6dd470)
            
            if (result != 0 && (*result)->Next(eax_4).b != 0)
                sub_470860(arg1 + 0x1c, &var_40, 0xffffffff)
    
    ebx.b = 1
    var_44 = &filesystem::CFilePath::`vftable'
    
    if (var_2c_1 u>= 0x10)
        j__free(var_40.d)
    
    int32_t var_2c_2 = 0xf
    int32_t var_30_2 = 0
    var_40 = 0
    var_60 = &filesystem::CFilePath::`vftable'
    
    if (var_48_1 u>= 0x10)
        j__free(var_5c.d)
    
    int32_t var_48_2 = 0xf
    int32_t var_4c_2 = 0
    var_5c = 0

if (var_14 u>= 0x10)
    j__free(var_28.d)

result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_7c)
return result
