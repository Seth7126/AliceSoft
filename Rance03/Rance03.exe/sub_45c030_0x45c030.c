// 函数: sub_45c030
// 地址: 0x45c030
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_11 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b834b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_60
int32_t eax_2 = __security_cookie ^ &var_60
int32_t __saved_edi
int32_t var_74 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* result
int32_t var_78_10
char var_40
int32_t var_2c

if (*(arg2 + 0x20) == 0 || *(arg2 + 0x24) == *(arg2 + 0x1c))
label_45c4ae:
    var_2c = 0xf
    int32_t var_30_3 = 0
    var_40 = 0
    sub_402110(&var_40, 0x6dc1d8, 0x24)
    int32_t var_4_10 = 0
    sub_456a00(*(arg1 + 4), &var_40)
label_45c4e2:
    
    if (var_2c u>= 0x10)
        var_78_10 = var_40.d
    label_45c4e8:
        j__free(var_78_10)
    
label_45c4f0:
    result.b = 0
else
    void* eax_7 = **(arg2 + 0x24)
    *(arg2 + 0x24) = eax_7
    
    if (*(arg2 + 0x20) == 0 || eax_7 == *(arg2 + 0x1c) || eax_7 == 0xfffffff8)
        goto label_45c4ae
    
    if (*(eax_7 + 0x24) == 7)
        int32_t edx_1 = 0
        int32_t var_4c_1
        int32_t var_44_1
        int32_t ecx
        
        while (true)
            ecx = 0
            var_44_1 = edx_1
            var_4c_1 = 0
            
            if (((*(arg3 + 0xc) - *(arg3 + 8)) & 0xfffffffc) s> 0)
                break
            
        label_45c352:
            edx_1 += 1
        
        while (true)
            void* ebp_2
            
            if (*(arg2 + 0x20) == 0 || *(arg2 + 0x24) == *(arg2 + 0x1c))
                ebp_2 = nullptr
            else
                void* eax_12 = **(arg2 + 0x24)
                *(arg2 + 0x24) = eax_12
                
                if (*(arg2 + 0x20) == 0 || eax_12 == *(arg2 + 0x1c))
                    ebp_2 = nullptr
                else
                    ebp_2 = eax_12 + 8
            
            if (ebp_2 == 0)
                var_2c = 0xf
                int32_t var_30_2 = 0
                var_40 = 0
                sub_402110(&var_40, 0x6dc1b0, 0x24)
                int32_t var_4_9 = 1
                sub_456ab0(*(arg1 + 4), &var_40, nullptr)
                break
            
            if (*(ebp_2 + 0x1c) == 8)
                if (*(arg3 + 0x14) != *(arg3 + 0x18))
                    goto label_45c0b0
                
                var_2c = 0xf
                int32_t var_30_1 = 0
                var_40 = 0
                sub_402110(&var_40, 0x6dc0dc, 0x24)
                int32_t var_4_8 = 2
            else
                void* const var_50_1
                
                if (ecx s< 0)
                    var_50_1 = nullptr
                else if ((*(arg3 + 0xc) - *(arg3 + 8)) s>> 2 s> ecx)
                    var_50_1 = *(*(arg3 + 8) + (ecx << 2))
                else
                    var_50_1 = nullptr
                
                void* eax_21
                
                if ((*(arg3 + 0x18) - *(arg3 + 0x14)) s>> 2 s> edx_1)
                    eax_21 = sub_457030(arg3, edx_1)
                else
                    eax_21 = sub_456fd0(arg3)
                
                struct exfile::CDefineData::VTable** eax_22 = sub_69adc6(0x60)
                struct exfile::CDefineData::VTable** var_58_1 = eax_22
                int32_t var_4 = 3
                struct exfile::CDefineData::VTable** eax_23
                
                if (eax_22 == 0)
                    eax_23 = nullptr
                else
                    eax_23 = sub_460690(eax_22)
                
                int32_t var_4_1 = 0xffffffff
                int32_t ecx_3 = *(eax_21 + 8)
                struct exfile::CDefineData::VTable** var_58_2 = eax_23
                struct exfile::CDefineData::VTable** var_48 = eax_23
                int32_t edx_2
                
                if (&var_48 u< ecx_3)
                    edx_2 = *(eax_21 + 4)
                    eax_23 = var_58_2
                
                struct exfile::CDefineData::VTable*** ecx_6
                
                if (&var_48 u>= ecx_3 || edx_2 u> &var_48)
                    if (ecx_3 == *(eax_21 + 0xc))
                        int32_t var_78_3 = ecx_3
                        sub_412f20(eax_21 + 4)
                        eax_23 = var_58_2
                    
                    ecx_6 = *(eax_21 + 8)
                    
                    if (ecx_6 != 0)
                        *ecx_6 = eax_23
                else
                    if (ecx_3 == *(eax_21 + 0xc))
                        int32_t var_78_2 = ecx_3
                        sub_412f20(eax_21 + 4)
                    
                    ecx_6 = *(eax_21 + 8)
                    
                    if (ecx_6 != 0)
                        *ecx_6 = *(*(eax_21 + 4) + ((&var_48 - edx_2) s>> 2 << 2))
                *(eax_21 + 8) += 4
                char var_59_1 = 0
                void* edx_4 = *(*(eax_21 + 4) + ((*(eax_21 + 8) - *(eax_21 + 4)) s>> 2 << 2) - 4)
                int32_t eax_27 = *(ebp_2 + 0x1c)
                
                if (eax_27 == 4 || eax_27 == 3)
                label_45c281:
                    int32_t edx_5 = *(ebp_2 + 0x1c)
                    int32_t edi_3
                    
                    if (edx_5 == 4)
                        edi_3 = var_4c_1 + 1
                    
                    if (edx_5 != 4 || edi_3 s>= (*(arg3 + 0xc) - *(arg3 + 8)) s>> 2)
                        if (edx_5 == 3)
                            edi_3 = var_4c_1 + 1
                        
                        if (edx_5 != 3 || edi_3 != (*(arg3 + 0xc) - *(arg3 + 8)) s>> 2)
                            int32_t var_14_1 = 0xf
                            int32_t var_18_1 = 0
                            char var_28 = 0
                            sub_402110(&var_28, 0x6dc2f4, 0x22)
                            int32_t var_4_7 = 8
                            sub_456ab0(*(arg1 + 4), &var_28, ebp_2)
                            
                            if (var_14_1 u< 0x10)
                                goto label_45c4f0
                            
                            var_78_10 = var_28.d
                            goto label_45c4e8
                    
                    if (var_59_1 != 0)
                    label_45c33a:
                        ecx = edi_3
                        edx_1 = var_44_1
                        var_4c_1 = edi_3
                        
                        if (ecx s>= (*(arg3 + 0xc) - *(arg3 + 8)) s>> 2)
                            goto label_45c352
                        
                        continue
                    else
                        int32_t eax_33
                        eax_33.b = *(var_50_1 + 4)
                        
                        if (eax_33.b != 0)
                            *(edx_4 + 4) = *(var_50_1 + 8)
                            *(edx_4 + 0xc) = *(var_50_1 + 0x24)
                            *(edx_4 + 0x10) = sub_4591e0(sub_4591e0(*(var_50_1 + 0x28)))
                            int32_t var_4_2 = 7
                            sub_4608f0(edx_4, sub_464940(var_50_1, &var_40))
                            int32_t var_4_3 = 0xffffffff
                            
                            if (var_2c u>= 0x10)
                                j__free(var_40.d)
                            
                            goto label_45c33a
                        
                        sub_401f60(&var_40, 0x6dc104)
                        int32_t var_4_6 = 6
                else
                    var_59_1 = 1
                    
                    if (eax_27 != 0x11 || *(var_50_1 + 8) == 3)
                        if (sub_45e120(arg1, edx_4, arg2, *(var_50_1 + 8)).b == 0)
                            goto label_45c4f0
                        
                        if (*(arg2 + 0x20) == 0 || *(arg2 + 0x24) == *(arg2 + 0x1c))
                            ebp_2 = nullptr
                        else
                            void* eax_30 = **(arg2 + 0x24)
                            *(arg2 + 0x24) = eax_30
                            
                            if (*(arg2 + 0x20) == 0 || eax_30 == *(arg2 + 0x1c))
                                ebp_2 = nullptr
                            else
                                ebp_2 = eax_30 + 8
                        
                        if (ebp_2 != 0)
                            goto label_45c281
                        
                        sub_401f60(&var_40, 0x6dc12c)
                        int32_t var_4_5 = 5
                        sub_456ab0(*(arg1 + 4), &var_40, nullptr)
                        sub_401fb0(&var_40)
                        goto label_45c4f0
                    
                    sub_401f60(&var_40, "string")
                    int32_t var_4_4 = 4
            
            sub_456ab0(*(arg1 + 4), &var_40, ebp_2)
            break
        
        goto label_45c4e2
    
label_45c0b0:
    result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_60)
return result
