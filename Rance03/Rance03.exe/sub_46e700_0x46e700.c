// 函数: sub_46e700
// 地址: 0x46e700
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b9510
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct filesystem::CFilePath::VTable* const var_5c
int32_t eax_2 = __security_cookie ^ &var_5c
int32_t __saved_esi
int32_t eax_4 = __security_cookie ^ &__saved_esi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t result

if (data_75d534 == 0)
    result = 0
else
    int32_t ecx
    int32_t var_68_1 = ecx
    int32_t* eax_5 = sub_6203f0()
    
    if (eax_5 == 0)
        result = 0
    else
        int32_t* eax_6 = (**eax_5)(0x6dd3c0)
        
        if (eax_6 == 0)
            result = 0
        else
            int32_t var_28
            sub_401f60(&var_28, (*(*eax_6 + 8))(eax_4))
            int32_t var_4 = 0
            var_5c = &filesystem::CFilePath::`vftable'
            int32_t var_44_1 = 0xf
            int32_t var_48_1 = 0
            char var_58 = 0
            var_4.b = 1
            sub_604730(&var_5c)
            sub_403110(&var_58, &var_28, nullptr, 0xffffffff)
            char var_40
            sub_604650(&var_5c, &var_40)
            int32_t var_68_4 = 2
            void* eax_9 = sub_4294e0(&var_40, "DL", 0)
            int32_t esi_2 = neg.d(eax_9)
            int32_t var_2c
            
            if (var_2c u>= 0x10)
                j__free(var_40.d)
            
            int32_t var_2c_1 = 0xf
            int32_t var_30_1 = 0
            var_40 = 0
            var_5c = &filesystem::CFilePath::`vftable'
            
            if (var_44_1 u>= 0x10)
                j__free(var_58.d)
            
            int32_t var_44_2 = 0xf
            int32_t var_48_2 = 0
            var_58 = 0
            int32_t var_14
            
            if (var_14 u>= 0x10)
                j__free(var_28)
            
            result = sbb.d(esi_2, esi_2, eax_9 != 0) + 2

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_5c)
return result
