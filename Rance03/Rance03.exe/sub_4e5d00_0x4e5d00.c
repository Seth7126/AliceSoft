// 函数: sub_4e5d00
// 地址: 0x4e5d00
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
int32_t* ecx = *(arg1 + 0x34)

if (ecx != 0)
    (*(*ecx + 4))(eax_4)
    *(arg1 + 0x34) = 0

int32_t* ecx_1 = nullptr

if (sub_43aa00(0x6e1f70, 0x6db320).b != 0)
    ecx_1 = data_75d4c0

*(arg1 + 0x34) = ecx_1
int32_t* result

if (ecx_1 == 0)
    result.b = 0
else
    int32_t ecx_2
    result, ecx_2 = (**ecx_1)(eax_4)
    
    if (data_75d534 == 0)
        result.b = 0
    else
        int32_t var_88_1 = ecx_2
        result = sub_6203f0()
        
        if (result == 0)
            result.b = 0
        else
            int32_t* eax_7 = (**result)(0x6e1f4c)
            *(arg1 + 0x38) = 0
            
            if (eax_7 != 0)
                *(arg1 + 0x38) = (**eax_7)()
            
            result = (**result)(0x6e1f5c)
            
            if (result == 0)
                result.b = 0
            else
                int32_t var_40
                sub_401f60(&var_40, (*(*result + 0xc))())
                int32_t var_4 = 0
                int32_t var_28
                char* eax_14 = sub_402a20(&var_28, &var_40)
                var_4.b = 1
                char var_74
                sub_410ad0(eax_14, eax_14, &var_74, arg1 + 4)
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
                    
                    (*(**(arg1 + 0x34) + 0xc))(4, edx_4)
                
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
