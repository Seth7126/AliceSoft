// 函数: sub_610c30
// 地址: 0x610c30
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6badb8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_48
int32_t eax_2 = __security_cookie ^ &var_48
int32_t __saved_esi
int32_t var_54 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
sub_610e00(arg1)
char result

if (sub_60a720(arg1 + 0x98, 0x11f0, *(*(arg1 + 4) + 0x34)) != 0)
    if (sub_60a720(arg1 + 0xa0, 0xc0, *(*(arg1 + 4) + 0x34)) == 0)
        result = 0
    else if (sub_60a720(arg1 + 0xa8, 0x1040, *(*(arg1 + 4) + 0x34)) == 0)
        result = 0
    else if (sub_60a720(arg1 + 0xb0, 0x10, *(*(arg1 + 4) + 0x34)) == 0)
        result = 0
    else if (sub_60a720(arg1 + 0xb8, 0x10, *(*(arg1 + 4) + 0x34)) == 0)
        result = 0
    else if (sub_60a720(arg1 + 0xc0, 0x200, *(*(arg1 + 4) + 0x34)) == 0)
        result = 0
    else
        struct filesystem::CFilePath::VTable* var_44 = &filesystem::CFilePath::`vftable'
        int32_t var_2c_1 = 0xf
        int32_t var_30_1 = 0
        char var_40 = 0
        int32_t var_4 = 0
        sub_604160(&var_44)
        void var_28
        sub_401f60(&var_28, "Data")
        var_4.b = 1
        sub_604730(&var_44)
        sub_403110(&var_40, &var_28, nullptr, 0xffffffff)
        var_4.b = 0
        sub_401fb0(&var_28)
        sub_401f60(&var_28, "Shader.slk")
        var_4.b = 2
        sub_604730(&var_44)
        sub_403110(&var_40, &var_28, nullptr, 0xffffffff)
        var_4.b = 0
        sub_401fb0(&var_28)
        uint8_t eax_11 = sub_605500(&var_40)
        char eax_12
        
        if (eax_11 != 0)
            eax_12 = sub_608140(arg1 + 0x10, &var_40)
        
        int32_t ebx
        
        if (eax_11 == 0 || eax_12 != 0)
            ebx.b = 1
        else
            ebx.b = 0
        
        sub_604130(&var_44)
        result = ebx.b
else
    result = 0

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_48)
return result
