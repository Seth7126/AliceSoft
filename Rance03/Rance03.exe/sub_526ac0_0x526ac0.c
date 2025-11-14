// 函数: sub_526ac0
// 地址: 0x526ac0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6c3463
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_7c
int32_t eax_2 = __security_cookie ^ &var_7c
fsbase->NtTib.ExceptionList = &ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** result

if (*(arg1 + 0x14) == 0)
    int32_t __saved_edi
    result = (*(**(arg1 + 0xc) + 8))(__security_cookie ^ &__saved_edi)
    
    if (result == 0)
        result.b = 0
    else
        result = (*result)->Next(0x6e33b4)
        int32_t* ecx_2 = data_75d538
        
        if (ecx_2 == 0)
            result.b = 0
        else
            (**ecx_2)()
            int32_t* esi_1 = data_75d538
            
            if (esi_1 == 0)
                result.b = 0
            else
                int32_t eax_8 = (*(**(arg1 + 0xc) + 0xc))(0x6e33e4)
                
                if (eax_8 != 0)
                    int32_t eax_11 = (*(**(arg1 + 0xc) + 0xc))(0x6e33d4)
                    
                    if (eax_11 == 0)
                        (*(*esi_1 + 4))()
                        result.b = 0
                    else if ((*(**(arg1 + 0xc) + 0xc))(0x6e33f4) == 0)
                        (*(*esi_1 + 4))()
                        result.b = 0
                    else
                        struct filesystem::CFilePath::VTable* var_50 =
                            &filesystem::CFilePath::`vftable'
                        int32_t var_38_1 = 0xf
                        int32_t var_3c_1 = 0
                        char var_4c = 0
                        int32_t var_c_1 = 0
                        sub_604160(&var_50)
                        struct filesystem::CFilePath::VTable* var_6c =
                            &filesystem::CFilePath::`vftable'
                        int32_t var_54_1 = 0xf
                        int32_t var_58_1 = 0
                        char var_68 = 0
                        var_c_1.b = 1
                        sub_6043a0(&var_6c)
                        void var_34
                        sub_401f60(&var_34, "3D")
                        var_c_1.b = 2
                        sub_604730(&var_6c)
                        sub_403110(&var_68, &var_34, nullptr, 0xffffffff)
                        var_c_1.b = 1
                        sub_401fb0(&var_34)
                        struct sealengine::CResourceManager::VTable** eax_14 = sub_69adc6(0xe0)
                        struct sealengine::CResourceManager::VTable** var_70_1 = eax_14
                        var_c_1.b = 3
                        struct sealengine::CResourceManager::VTable** eax_15
                        
                        if (eax_14 == 0)
                            eax_15 = nullptr
                        else
                            eax_15 = sub_58d4c0(eax_14, esi_1, eax_11, eax_8, result)
                        
                        var_c_1.b = 1
                        *(arg1 + 0x14) = eax_15
                        bool cond:0_1 = sub_58d830(eax_15, &var_4c, &var_68) != 0
                        int32_t eax_17 = *esi_1
                        int32_t ebx_1
                        
                        if (cond:0_1)
                            (*(eax_17 + 4))()
                            ebx_1.b = 1
                        else
                            (*(eax_17 + 4))()
                            int32_t* ecx_19 = *(arg1 + 0x14)
                            
                            if (ecx_19 != 0)
                                (**ecx_19)(1)
                            
                            *(arg1 + 0x14) = 0
                            ebx_1.b = 0
                        
                        sub_604130(&var_6c)
                        sub_604130(&var_50)
                        result.b = ebx_1.b
                else
                    (*(*esi_1 + 4))()
                    result.b = 0
else
    result.b = 1

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_7c)
return result
