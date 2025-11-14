// 函数: sub_448580
// 地址: 0x448580
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b6b27
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
uint32_t var_c4
int32_t eax_2 = __security_cookie ^ &var_c4
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* result

if (arg4 != 0 && arg3 != 0)
    int32_t __saved_edi
    int32_t eax_7 = (*(*arg3 + 0x18))(__security_cookie ^ &__saved_edi)
    int32_t eax_8 = (*(*arg3 + 0x14))()
    int32_t eax_9 = (*(*arg3 + 0x18))()
    struct fileimage::CFileImageAnalyser::VTable* const var_c0 =
        &fileimage::CFileImageAnalyser::`vftable'
    int32_t var_bc_1 = eax_9
    int32_t var_b8_1 = eax_7 + eax_8
    int32_t var_4 = 0
    int32_t var_48_1 = 0xf
    int32_t var_4c_1 = 0
    char var_5c = 0
    var_4.b = 1
    int32_t* result_1
    
    if (sub_468c20(&var_c0, &var_5c, 4) == 0)
        result_1 = nullptr
    else if (sub_40c250(&var_5c, "dcf ") == 0)
        result_1 = nullptr
    else if (sub_468b20(&var_c0, &var_c4) == 0)
        result_1 = nullptr
    else
        uint32_t esi_3 = var_c4
        
        if (esi_3 s<= 0)
            result_1 = nullptr
        else
            int32_t* var_a4
            sub_448e90(&var_a4, esi_3)
            var_4.b = 2
            
            if (sub_468dd0(&var_c0, var_a4, esi_3) != 0)
                int32_t var_60_1 = 0xf
                int32_t var_64_1 = 0
                char var_74 = 0
                var_4.b = 3
                char* var_dc_4 = &var_74
                uint32_t var_80
                uint32_t var_7c
                uint32_t var_78
                
                if (sub_448990(&var_a4, &var_78, &var_80, &var_7c, &var_c4) != 0)
                    int32_t var_18_1 = 0xf
                    int32_t var_1c_1 = 0
                    char var_2c = 0
                    var_4.b = 4
                    
                    if (sub_468c20(&var_c0, &var_2c, 4) == 0)
                        result_1 = nullptr
                    else if (sub_40c250(&var_2c, "dfdl") == 0)
                        result_1 = nullptr
                    else if (sub_468b20(&var_c0, &var_c4) == 0)
                        result_1 = nullptr
                    else
                        uint32_t esi_4 = var_c4
                        
                        if (esi_4 s<= 0)
                            result_1 = nullptr
                        else
                            int32_t* var_98
                            sub_448e90(&var_98, esi_4)
                            var_4.b = 5
                            
                            if (sub_468dd0(&var_c0, var_98, esi_4) != 0)
                                int32_t var_b4 = 0
                                int32_t var_b0_1 = 0
                                int32_t var_ac_1 = 0
                                var_4.b = 6
                                int32_t* var_dc_8 = &var_b4
                                
                                if (sub_448b10(arg1, &var_98) != 0)
                                    int32_t var_30_1 = 0xf
                                    int32_t var_34_1 = 0
                                    char var_44 = 0
                                    var_4.b = 7
                                    
                                    if (sub_468c20(&var_c0, &var_44, 4) == 0)
                                        result_1 = nullptr
                                    else if (sub_40c250(&var_44, "dcgd") == 0)
                                        result_1 = nullptr
                                    else if (sub_468b20(&var_c0, &var_c4) == 0)
                                        result_1 = nullptr
                                    else
                                        void* esi_5 = var_c4
                                        
                                        if (esi_5 s<= 0)
                                            result_1 = nullptr
                                        else
                                            int32_t* var_8c
                                            sub_448e90(&var_8c, esi_5)
                                            var_4.b = 8
                                            int32_t* edi_1 = var_8c
                                            
                                            if (sub_468dd0(&var_c0, edi_1, esi_5) == 0)
                                                result_1 = nullptr
                                                sub_403510(&var_8c)
                                            else
                                                result_1 = (*(*arg4 + 8))(edi_1, esi_5)
                                                
                                                if (result_1 == 0)
                                                    result_1 = nullptr
                                                    sub_403510(&var_8c)
                                                else
                                                    char* eax_26 = &var_74
                                                    
                                                    if (var_60_1 u>= 0x10)
                                                        eax_26 = var_74.d
                                                    
                                                    int32_t* eax_27 = sub_449cc0(arg2, eax_26)
                                                    
                                                    if (eax_27 == 0)
                                                        goto label_4488e3
                                                    
                                                    bool cond:1_1 =
                                                        sub_448c60(eax_27, result_1, &var_b4) != 0
                                                    int32_t eax_29 = *eax_27
                                                    
                                                    if (cond:1_1)
                                                        (*(eax_29 + 4))()
                                                        sub_403510(&var_8c)
                                                    else
                                                        (*(eax_29 + 4))()
                                                    label_4488e3:
                                                        (*(*result_1 + 4))()
                                                        result_1 = nullptr
                                                        sub_403510(&var_8c)
                                    
                                    sub_401fb0(&var_44)
                                else
                                    result_1 = nullptr
                                
                                sub_403510(&var_b4)
                                sub_403510(&var_98)
                            else
                                result_1 = nullptr
                                sub_403510(&var_98)
                    
                    sub_401fb0(&var_2c)
                else
                    result_1 = nullptr
                
                sub_401fb0(&var_74)
                sub_403510(&var_a4)
            else
                result_1 = nullptr
                sub_403510(&var_a4)
    
    if (var_48_1 u>= 0x10)
        j__free(var_5c.d)
    
    result = result_1
else
    result = nullptr

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_c4)
return result
