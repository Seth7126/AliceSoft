// 函数: sub_4733e0
// 地址: 0x4733e0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72dcf3
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_e0 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void*** var_c8 = arg4
char* result

if (*(arg1 + 0x20) == 0 || *(arg1 + 0x24) == *(arg1 + 0x1c))
labelid_1:
    result.b = 0
else
    result = **(arg1 + 0x24)
    *(arg1 + 0x24) = result
    
    if (*(arg1 + 0x20) == 0 || result == *(arg1 + 0x1c))
    labelid_1:
        result.b = 0
    else
        char* esi_2 = &result[8]
        void* var_bc_1 = esi_2
        
        if (result == 0xfffffff8)
        labelid_1:
            result.b = 0
        else
            void var_30
            
            if (*(esi_2 + 0x30) != 0x12)
                void* var_e4_1
                
                if (sub_407560(arg3, "string") == 0)
                    if (sub_407560(arg3, "#define") == 0)
                        sub_467620(arg2, arg3)
                    
                    int32_t var_e4_4 = sub_403360(&var_30, U"(%%")
                    int32_t var_8_3 = 2
                    var_8_3.b = 3
                    void var_80
                    sub_473c10(arg2, sub_471d90(&var_80, &var_30, 6))
                    sub_408940(&var_80)
                    int32_t var_8_4 = 0xffffffff
                    sub_403320(&var_30)
                    int32_t eax_9 = *(esi_2 + 0x30)
                    
                    if (eax_9 == 0xf || eax_9 == 0x10)
                        sub_467620(arg2, esi_2)
                        
                        if (*(arg1 + 0x20) == 0 || *(arg1 + 0x24) == *(arg1 + 0x1c))
                        labelid_1:
                            result.b = 0
                        else
                            result = **(arg1 + 0x24)
                            *(arg1 + 0x24) = result
                            
                            if (*(arg1 + 0x20) == 0 || result == *(arg1 + 0x1c))
                            labelid_1:
                                result.b = 0
                            else
                                esi_2 = &result[8]
                                var_bc_1 = esi_2
                                
                                if (result != 0xfffffff8)
                                    goto label_4735b8
                                
                            labelid_1:
                                result.b = 0
                    else
                    label_4735b8:
                        
                        if (*(esi_2 + 0x30) != 2)
                        label_473608:
                            result = *(esi_2 + 0x30)
                            
                            if (result != 0x11)
                                if (result == 0x13)
                                    void** eax_12 = sub_432330(var_c8, esi_2)
                                    void** edi_2 = *var_c8
                                    void** esi_5 = eax_12
                                    char eax_14
                                    
                                    if (esi_5 != edi_2)
                                        eax_14 = sub_412ca0(var_bc_1, &esi_5[4])
                                    
                                    if (esi_5 == edi_2 || eax_14 != 0)
                                        esi_5 = edi_2
                                    
                                    if (esi_5 != edi_2)
                                        int32_t var_e4_11 = 0
                                        sub_4746e0(arg2, arg2[1], esi_5[0xa], esi_5[0xb])
                                        goto label_4737a5
                                    
                                    sub_403360(&var_30, 0x75fb48)
                                    var_e4_1 = var_bc_1
                                    int32_t var_8_5 = 4
                                    goto label_47349d
                                
                                if (result == 6)
                                    sub_467620(arg2, esi_2)
                                    int32_t i = 1
                                    int32_t i_1 = 1
                                    
                                    do
                                        if (*(arg1 + 0x20) == 0)
                                            goto label_4734aa_2
                                        
                                        if (*(arg1 + 0x24) == *(arg1 + 0x1c))
                                            goto label_4734aa_2
                                        
                                        result = **(arg1 + 0x24)
                                        *(arg1 + 0x24) = result
                                        
                                        if (*(arg1 + 0x20) == 0)
                                            goto label_4734aa_2
                                        
                                        char* result_1 = result
                                        
                                        if (result == *(arg1 + 0x1c))
                                            goto label_4734aa_2
                                        
                                        if (result == 0xfffffff8)
                                            goto label_4734aa_2
                                        
                                        if (*(result + 0x38) != 0x13)
                                            sub_467620(arg2, &result[8])
                                            result = *(result + 0x38)
                                            
                                            if (result == 6)
                                                i += 1
                                                i_1 = i
                                            else if (result == 7)
                                                i -= 1
                                                i_1 = i
                                        else
                                            char** edi_3 = var_c8
                                            result = sub_432330(edi_3, &result[8])
                                            char* result_3 = *edi_3
                                            char* result_2 = result
                                            
                                            if (result_2 != result_3)
                                                result = sub_412ca0(&result_1[8], &result_2[0x10])
                                            
                                            if (result_2 == result_3 || result.b != 0)
                                                result_2 = result_3
                                            
                                            if (result_2 != result_3)
                                                int32_t var_e4_15 = 0.d
                                                sub_4746e0(arg2, arg2[1], *(result_2 + 0x28), 
                                                    *(result_2 + 0x2c))
                                                result.b = 1
                                            else
                                                result.b = 0
                                            
                                            if (result.b == 0)
                                                sub_403360(&var_30, 0x75fae8)
                                                int32_t var_8_7 = 5
                                                var_e4_1 = &result_1[8]
                                                goto label_47349d
                                            
                                            i = i_1
                                    while (i s> 0)
                                    
                                    goto label_4737a5
                                
                            labelid_1:
                                result.b = 0
                            else
                                sub_467620(arg2, esi_2)
                            label_4737a5:
                                void var_48
                                int32_t var_e4_16 = sub_403360(&var_48, &(*U"+()1)")[4])
                                int32_t var_8_6 = 6
                                var_8_6.b = 7
                                void var_b8
                                sub_473c10(arg2, sub_471d90(&var_b8, &var_48, 7))
                                sub_408940(&var_b8)
                                sub_403320(&var_48)
                                result.b = 1
                        else
                            sub_467620(arg2, esi_2)
                            
                            if (*(arg1 + 0x20) == 0 || *(arg1 + 0x24) == *(arg1 + 0x1c))
                            labelid_1:
                                result.b = 0
                            else
                                result = **(arg1 + 0x24)
                                *(arg1 + 0x24) = result
                                
                                if (*(arg1 + 0x20) == 0 || result == *(arg1 + 0x1c))
                                label_4734aa:
                                    result.b = 0
                                else
                                    esi_2 = &result[8]
                                    var_bc_1 = esi_2
                                    
                                    if (result != 0xfffffff8)
                                        goto label_473608
                                    
                                label_4734aa_1:
                                    result.b = 0
                else
                    sub_403360(&var_30, "const string")
                    int32_t var_8_2 = 1
                label_473495:
                    var_e4_1 = esi_2
                label_47349d:
                    sub_45ebd0(*(arg1 + 0x28), &var_30, var_e4_1)
                    sub_403320(&var_30)
                label_4734aa_2:
                    result.b = 0
            else
                char eax_4 = sub_407560(arg3, "#define")
                char eax_5
                
                if (eax_4 == 0)
                    eax_5 = sub_407560(arg3, "string")
                
                if (eax_4 == 0 && eax_5 == 0)
                    sub_403360(&var_30, "#define/const string")
                    int32_t var_8_1 = 0
                    goto label_473495
                
                sub_467620(arg2, esi_2)
                result.b = 1

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
