// 函数: sub_449860
// 地址: 0x449860
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b6d2a
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_b4
int32_t eax_2 = __security_cookie ^ &var_b4
int32_t __saved_edi
int32_t eax_4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* esi = data_75d4c8
int32_t* result
int32_t ecx_1
result, ecx_1 = sub_449c30(esi)

if (data_75d534 == 0)
    result.b = 0
else
    int32_t var_c8_1 = ecx_1
    int32_t* ebx_1 = sub_6203f0()
    
    if (ebx_1 == 0)
        result.b = 0
    else
        int32_t* edi_1 = data_75d540
        int32_t ecx_3
        
        if (edi_1 == 0)
            ecx_3 = 0
        else if (sub_43aa00(0x6db4e0, 0x6f1f40) == 0)
            if (sub_43aa00(0x6db4e0, 0x6f1f30).b == 0)
                ecx_3 = 0
            else
                (**edi_1)(eax_4)
                ecx_3 = data_75d540
        else
            (**edi_1)(eax_4)
            ecx_3 = data_75d540
        
        *(esi + 0x14) = ecx_3
        
        if (ecx_3 == 0)
            result.b = 0
        else
            int32_t* ecx_5 = data_75d538
            
            if (ecx_5 != 0)
                (**ecx_5)(eax_4)
                result = data_75d538
            else
                result = nullptr
            
            *(esi + 0x18) = result
            
            if (result == 0)
                result.b = 0
            else
                int32_t* edi_2 = (**ebx_1)(0x6db4cc)
                
                if (edi_2 == 0)
                    result.b = 0
                else
                    int32_t* ecx_7 = nullptr
                    
                    if (sub_43aa00(0x6db4f0, 0x6db320).b != 0)
                        ecx_7 = data_75d4c0
                    
                    *(esi + 0x10) = ecx_7
                    
                    if (ecx_7 == 0)
                        result.b = 0
                    else
                        (**ecx_7)(eax_4)
                        int32_t* eax_12 = (**ebx_1)(0x6db4bc)
                        
                        if (eax_12 == 0)
                            eax_12.b = 0
                        else
                            eax_12 = (**eax_12)()
                        
                        *(esi + 0xc) = eax_12.b
                        void var_28
                        sub_401f60(&var_28, (*(*edi_2 + 0xc))())
                        int32_t var_4 = 0
                        void var_90
                        char* eax_17 = sub_402a20(&var_90, &var_28)
                        var_4.b = 1
                        int32_t* var_40
                        sub_410a80(eax_17.b, eax_17, &var_40, "CG.afa")
                        sub_401fb0(&var_90)
                        struct filesystem::CFilePath::VTable* var_ac =
                            &filesystem::CFilePath::`vftable'
                        int32_t var_94_1 = 0xf
                        int32_t var_98_1 = 0
                        char var_a8 = 0
                        var_4.b = 4
                        sub_604160(&var_ac)
                        sub_604730(&var_ac)
                        sub_403110(&var_a8, &var_40, nullptr, 0xffffffff)
                        
                        if (sub_605500(&var_a8) != 0)
                            int32_t* edx_3 = &var_40
                            int32_t var_2c
                            
                            if (var_2c u>= 0x10)
                                edx_3 = var_40
                            
                            if ((*(**(esi + 0x10) + 0xc))(2, edx_3) == 0)
                                char* eax_22 = &var_a8
                                
                                if (var_94_1 u>= 0x10)
                                    eax_22 = var_a8.d
                                
                                char* var_c8_4 = eax_22
                                sub_64b530("CGAFA")
                        
                        struct IInterface::cgmanager::CCGCache::VTable** eax_23 = sub_69adc6(0x18)
                        struct IInterface::cgmanager::CCGCache::VTable** var_b0_1 = eax_23
                        var_4.b = 5
                        struct IInterface::cgmanager::CCGCache::VTable** eax_24
                        
                        if (eax_23 == 0)
                            eax_24 = nullptr
                        else
                            eax_24 = sub_449040(eax_23, *(esi + 8))
                        
                        *(esi + 0x1c) = eax_24
                        struct filesystem::CFilePath::VTable* var_78 =
                            &filesystem::CFilePath::`vftable'
                        int32_t var_60_1 = 0xf
                        int32_t var_64_1 = 0
                        char var_74 = 0
                        var_4.b = 6
                        sub_6043a0(&var_78)
                        sub_401f60(&var_90, "CG")
                        var_4.b = 7
                        sub_604730(&var_78)
                        sub_403110(&var_74, &var_90, nullptr, 0xffffffff)
                        var_4.b = 6
                        sub_401fb0(&var_90)
                        
                        if (sub_44a470(esi + 0x20, *(esi + 0xc), &var_74) != 0)
                            struct filesystem::CFilePath::VTable* var_5c =
                                &filesystem::CFilePath::`vftable'
                            int32_t var_44_1 = 0xf
                            int32_t var_48_1 = 0
                            char var_58 = 0
                            var_4.b = 8
                            sub_6044d0(&var_5c)
                            sub_401f60(&var_90, "CG")
                            var_4.b = 9
                            sub_604730(&var_5c)
                            sub_403110(&var_58, &var_90, nullptr, 0xffffffff)
                            var_4.b = 8
                            sub_401fb0(&var_90)
                            ebx_1.b = sub_44a470(esi + 0x30, *(esi + 0xc), &var_58) != 0
                            sub_604130(&var_5c)
                        else
                            ebx_1.b = 0
                        
                        sub_604130(&var_78)
                        sub_604130(&var_ac)
                        sub_401fb0(&var_40)
                        sub_401fb0(&var_28)
                        result.b = ebx_1.b

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_b4)
return result
