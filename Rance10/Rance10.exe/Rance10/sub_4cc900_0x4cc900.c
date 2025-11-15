// 函数: sub_4cc900
// 地址: 0x4cc900
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_733b58
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_64 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** result

if (arg2 == 0 || arg3 s<= 0)
    result.b = 0
else
    sub_4cc350(arg1)
    result = arg2 + arg3
    struct fileimage::CFileImageAnalyser::VTable* const var_3c =
        &fileimage::CFileImageAnalyser::`vftable'
    struct _EXCEPTION_REGISTRATION_RECORD** result_1 = arg2
    struct _EXCEPTION_REGISTRATION_RECORD** result_2 = result
    int32_t var_8_1 = 0
    
    if (arg2 u>= result)
    label_4ccbc7:
        result.b = 1
    else
        while (true)
            int32_t var_18_1 = 0xf
            int32_t var_1c_1 = 0
            char var_2c = 0
            var_8_1.b = 1
            sub_403490(&var_2c, 0x75d041, nullptr)
            int32_t edi_2
            
            if (sub_6c9360(&var_3c, &var_2c, 4).b == 0)
                edi_2 = var_18_1
            else
                struct _EXCEPTION_REGISTRATION_RECORD** result_3 = result_1
                
                if (&result_3[1] u> result_2)
                    edi_2 = var_18_1
                else
                    result_1 = &result_3[1]
                    uint32_t esi_7 = ((zx.d(*(result_3 + 3)) << 8 | zx.d(*(result_3 + 2))) << 8
                        | zx.d(*(result_3 + 1))) << 8 | zx.d(*result_3)
                    result = &result_3[1] + esi_7
                    
                    if (result u> result_2)
                        edi_2 = var_18_1
                    else
                        edi_2 = var_18_1
                        char* ecx_2 = &var_2c
                        int32_t eax_6 = 4
                        
                        if (edi_2 u>= 0x10)
                            ecx_2 = var_2c.d
                        
                        if (var_1c_1 u< 4)
                            eax_6 = var_1c_1
                        
                        if (sub_406ac0(eax_6, "FLAT", ecx_2, eax_6) != 0 || var_1c_1 u< 4
                                || var_1c_1 u> 4 || esi_7 != 0x20)
                            char* ecx_4 = &var_2c
                            int32_t eax_8 = 4
                            
                            if (edi_2 u>= 0x10)
                                ecx_4 = var_2c.d
                            
                            if (var_1c_1 u< 4)
                                eax_8 = var_1c_1
                            
                            if (sub_406ac0(eax_8, "FLAT", ecx_4, eax_8) != 0 || var_1c_1 u< 4
                                    || var_1c_1 u> 4 || esi_7 != 0x40)
                                char* ecx_6 = &var_2c
                                int32_t eax_10 = 4
                                
                                if (edi_2 u>= 0x10)
                                    ecx_6 = var_2c.d
                                
                                if (var_1c_1 u< 4)
                                    eax_10 = var_1c_1
                                
                                if (sub_406ac0(eax_10, "MTLC", ecx_6, eax_10) != 0 || var_1c_1 u< 4
                                        || var_1c_1 u> 4)
                                    if (sub_407560(&var_2c, "LIBL") == 0)
                                        if (sub_407560(&var_2c, "TALT") == 0)
                                            if (sub_407560(&var_2c, "ELNA") != 0)
                                                *(arg1 + 0x34) = 1
                                            
                                            result_1 = result
                                            goto label_4ccba1
                                        
                                        if (sub_4ccf40(arg1, &var_3c).b != 0)
                                        label_4ccb7e:
                                            edi_2 = var_18_1
                                            goto label_4ccba1
                                        
                                        edi_2 = var_18_1
                                    else if (sub_4cce80(arg1, &var_3c).b == 0)
                                        edi_2 = var_18_1
                                    else
                                        edi_2 = var_18_1
                                    label_4ccba1:
                                        var_8_1.b = 0
                                        
                                        if (edi_2 u>= 0x10)
                                            sub_403160(var_2c.d, edi_2 + 1, 1)
                                        
                                        if (result_1 u>= result_2)
                                            goto label_4ccbc7
                                        
                                        continue
                                else
                                    char* var_4c
                                    sub_431b80(&var_4c, esi_7)
                                    var_8_1.b = 2
                                    sub_700660(var_4c, &result_3[1], esi_7)
                                    result_1 = result
                                    int32_t* eax_13 = sub_4cda20(arg1, &var_4c)
                                    *(arg1 + 0x38) = eax_13
                                    char eax_14
                                    
                                    if (eax_13 != 0)
                                        eax_14 = sub_4da1f0(eax_13)
                                    
                                    if (eax_13 != 0 && eax_14 != 0)
                                        char* ecx_10 = var_4c
                                        
                                        if (ecx_10 == 0)
                                            goto label_4ccb7e
                                        
                                        int32_t var_44
                                        sub_403160(ecx_10, var_44 - ecx_10, 1)
                                        edi_2 = var_18_1
                                        var_4c = nullptr
                                        int32_t var_48_1 = 0
                                        var_44 = 0
                                        goto label_4ccba1
                                    
                                    sub_4059a0(&var_4c)
                                    edi_2 = var_18_1
                            else if (sub_4ccd30(arg1, &var_3c).b != 0)
                                goto label_4ccba1
                        else if (sub_4ccc10(arg1, &var_3c).b != 0)
                            goto label_4ccba1
            
            if (edi_2 u< 0x10)
                break
            
            sub_403160(var_2c.d, edi_2 + 1, 1)
            break
        
        result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
