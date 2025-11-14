// 函数: sub_48c710
// 地址: 0x48c710
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6bae00
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_78
int32_t eax_2 = __security_cookie ^ &var_78
int32_t __saved_edi
int32_t eax_4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
sub_48c900(arg1)
int32_t* ecx = nullptr

if (sub_43aa00(0x6dfb70, 0x6db320).b != 0)
    ecx = data_75d4c0

*(arg1 + 4) = ecx
int32_t* result

if (ecx == 0)
    result.b = 0
else
    int32_t ecx_1
    result, ecx_1 = (**ecx)(eax_4)
    
    if (data_75d534 == 0)
        result.b = 0
    else
        int32_t var_88_1 = ecx_1
        result = sub_6203f0()
        
        if (result == 0)
            result.b = 0
        else
            int32_t* eax_6 = (**result)(0x6de8d4)
            *(arg1 + 8) = 0
            
            if (eax_6 != 0)
                *(arg1 + 8) = (**eax_6)()
            
            result = (**result)(0x6deb34)
            
            if (result == 0)
                result.b = 0
            else
                int32_t var_40
                sub_401f60(&var_40, (*(*result + 0xc))())
                int32_t var_4 = 0
                int32_t var_28
                char* eax_13 = sub_402a20(&var_28, &var_40)
                var_4.b = 1
                char var_74
                sub_410a80(eax_13.b, eax_13, &var_74, "Flat.afa")
                int32_t var_14
                
                if (var_14 u>= 0x10)
                    j__free(var_28)
                
                struct filesystem::CFilePath::VTable* var_5c = &filesystem::CFilePath::`vftable'
                int32_t var_44_1 = 0xf
                int32_t var_48_1 = 0
                char var_58 = 0
                var_4.b = 4
                sub_401ff0(&var_58, &data_74f9b4, 0, 0xffffffff)
                sub_6047d0(&var_5c)
                sub_604730(&var_5c)
                sub_403110(&var_58, &var_74, nullptr, 0xffffffff)
                int32_t var_60
                
                if (sub_605500(&var_58) != 0)
                    char* edx_4 = &var_74
                    
                    if (var_60 u>= 0x10)
                        edx_4 = var_74.d
                    
                    (*(**(arg1 + 4) + 0xc))(3, edx_4)
                
                sub_604130(&var_5c)
                
                if (var_60 u>= 0x10)
                    j__free(var_74.d)
                
                int32_t var_60_1 = 0xf
                int32_t var_64_1 = 0
                var_74 = 0
                int32_t var_2c
                
                if (var_2c u>= 0x10)
                    j__free(var_40)
                
                result.b = 1

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_78)
return result
