// 函数: sub_40c050
// 地址: 0x40c050
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp_2
int32_t __saved_ebp_1 = __saved_ebp_2
int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7277bf
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t ebx
int32_t var_a4 = ebx
int32_t esi
int32_t var_a8 = esi
int32_t edi
int32_t var_ac = edi
int32_t var_b0 = eax_2
int32_t* esp_1 = &var_b0
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t result_1 = 0
int32_t result

if (arg4 s<= 0)
label_40c52f:
    result.b = 1
else
    while (true)
        int32_t var_4c_1 = 0xf
        int32_t var_50_1 = 0
        char var_60 = 0
        int32_t var_8_1 = 0
        int32_t var_1c_1 = 0xf
        int32_t var_20_1 = 0
        char var_30 = 0
        int32_t result_2 = 0
        int32_t var_34_1 = 0xf
        int32_t var_38_1 = 0
        char var_48 = 0
        var_8_1.b = 2
        int32_t* ecx = *(arg1 + 0x1c)
        *(esp_1 - 4) = arg3
        int32_t eax_4 = (*(*ecx + 0x10))()
        int32_t* ecx_1 = *(arg1 + 0x1c)
        *(esp_1 - 4) = arg3
        void* esp_4 = esp_1 - 4
        int32_t var_9c_1
        int32_t result_6
        
        if (eax_4 == 3)
            if ((*(*ecx_1 + 0x20))() s<= 0)
                int32_t* ecx_22 = *(arg1 + 0x1c)
                *(esp_4 - 4) = arg3
                var_9c_1 = (*(*ecx_22 + 0x24))()
            else
                var_9c_1 = 0x4f
            
            *(esp_4 - 4) = 1
            *(esp_4 - 8) = arg3
            int32_t var_78
            *(esp_4 - 0xc) = &var_78
            int32_t eax_29 = sub_41fce0(arg1 + 0x14)
            
            if (&var_60 != eax_29)
                if (var_4c_1 u>= 0x10)
                    *(esp_4 - 4) = 1
                    *(esp_4 - 8) = var_4c_1 + 1
                    *(esp_4 - 0xc) = var_60.d
                    sub_403160()
                
                *(esp_4 - 4) = eax_29
                var_4c_1 = 0xf
                int32_t var_50_2 = 0
                var_60 = 0
                sub_4056a0(&var_60)
            
            var_8_1.b = 2
            int32_t var_64
            
            if (var_64 u>= 0x10)
                *(esp_4 - 4) = 1
                *(esp_4 - 8) = var_64 + 1
                *(esp_4 - 0xc) = var_78
                sub_403160()
            
            *(esp_4 - 4) = 4
            *(esp_4 - 8) = "[%d]"
            int32_t var_7c_1 = 0xf
            int32_t var_80_1 = 0
            char var_90 = 0
            sub_403490(&var_90)
            var_8_1.b = 4
            *(esp_4 - 4) = &result_1
            int32_t eax_35 = sub_409350(&result_1, &var_90, &var_78)
            
            if (&var_30 != eax_35)
                if (var_1c_1 u>= 0x10)
                    *(esp_4 - 4) = 1
                    *(esp_4 - 8) = var_1c_1 + 1
                    *(esp_4 - 0xc) = var_30.d
                    sub_403160()
                
                *(esp_4 - 4) = eax_35
                var_1c_1 = 0xf
                int32_t var_20_2 = 0
                var_30 = 0
                sub_4056a0(&var_30)
            
            if (var_64 u>= 0x10)
                *(esp_4 - 4) = 1
                *(esp_4 - 8) = var_64 + 1
                *(esp_4 - 0xc) = var_78
                sub_403160()
            
            var_8_1.b = 2
            var_64 = 0xf
            int32_t var_68_1 = 0
            var_78.b = 0
            
            if (var_7c_1 u>= 0x10)
                *(esp_4 - 4) = 1
                *(esp_4 - 8) = var_7c_1 + 1
                *(esp_4 - 0xc) = var_90.d
                sub_403160()
            
            int32_t* ecx_28 = *(arg1 + 0x1c)
            result_2 = result_1
            *(esp_4 - 4) = arg3
            int32_t* eax_44 = (*(*ecx_28 + 4))()
            esp_1 = esp_4
            
            if (eax_44 != 0 && result_2 s>= 0)
                int32_t eax_46
                int32_t edx_11
                edx_11:eax_46 = sx.q((*(*eax_44 + 0x14))())
                
                if (result_2 s< (eax_46 + (edx_11 & 3)) s>> 2)
                    int32_t eax_50 = (*(*eax_44 + 0x18))()
                    
                    if (eax_50 != 0)
                        result_6 = *(eax_50 + (result_2 << 2))
                        *(esp_1 - 4) = &var_48
                        *(esp_1 - 8) = result_1
                        *(esp_1 - 0xc) = arg3
                        
                        if (sub_422890(arg1 + 0x14) != 0)
                            goto label_40c45f
        else
            int32_t result_3 = result_1
            int32_t eax_6 = *ecx_1
            
            if (eax_4 == 4)
                int32_t eax_16 = (*(eax_6 + 0x18))()
                int32_t* ecx_12 = *(arg1 + 0x20)
                *(esp_4 - 4) = result_3
                *(esp_4 - 8) = eax_16
                int32_t* eax_17 = (*(*ecx_12 + 0x24))()
                esp_1 = esp_4
                
                if (eax_17 != 0)
                    var_9c_1 = (**eax_17)()
                    *(esp_1 - 4) = &var_60
                    *(esp_1 - 8) = result_1
                    *(esp_1 - 0xc) = arg3
                    
                    if (sub_420720(arg1 + 0x14) != 0)
                        int32_t* ecx_15 = *(arg1 + 0x1c)
                        int32_t result_5 = result_1
                        *(esp_1 - 4) = arg3
                        int32_t eax_21 = (*(*ecx_15 + 0x18))()
                        int32_t* ecx_16 = *(arg1 + 0x20)
                        *(esp_1 - 4) = result_5
                        *(esp_1 - 8) = eax_21
                        char* edx_8 = (*(*ecx_16 + 0x28))()
                        
                        if (edx_8 != 0)
                            void* ecx_17
                            
                            if (*edx_8 != 0)
                                char* ecx_18 = edx_8
                                char* eax_22
                                
                                do
                                    eax_22.b = *ecx_18
                                    ecx_18 = &ecx_18[1]
                                while (eax_22.b != 0)
                                ecx_17 = ecx_18 - &ecx_18[1]
                            else
                                ecx_17 = nullptr
                            
                            *(esp_1 - 4) = ecx_17
                            *(esp_1 - 8) = edx_8
                            sub_403490(&var_30)
                            *(esp_1 - 4) = &result_2
                            *(esp_1 - 8) = result_1
                            *(esp_1 - 0xc) = arg3
                            
                            if (sub_420630(arg1 + 0x14) != 0)
                                *(esp_1 - 4) = &var_48
                                *(esp_1 - 8) = result_1
                                *(esp_1 - 0xc) = arg3
                                
                                if (sub_422800(arg1 + 0x14) != 0)
                                    result_6 = result_2
                                label_40c45f:
                                    *(esp_1 - 4) = var_9c_1
                                    sub_6ca100(arg2)
                                    *(esp_1 - 4) = &var_60
                                    sub_6ca1a0(arg2)
                                    *(esp_1 - 4) = &var_30
                                    sub_6ca1a0(arg2)
                                    *(esp_1 - 4) = result_6
                                    sub_6ca100(arg2)
                                    *(esp_1 - 4) = &var_48
                                    sub_6ca1a0(arg2)
                                    
                                    if (var_34_1 u>= 0x10)
                                        *(esp_1 - 4) = 1
                                        *(esp_1 - 8) = var_34_1 + 1
                                        *(esp_1 - 0xc) = var_48.d
                                        sub_403160()
                                    
                                    int32_t var_34_2 = 0xf
                                    int32_t var_38_2 = 0
                                    var_48 = 0
                                    
                                    if (var_1c_1 u>= 0x10)
                                        *(esp_1 - 4) = 1
                                        *(esp_1 - 8) = var_1c_1 + 1
                                        *(esp_1 - 0xc) = var_30.d
                                        sub_403160()
                                    
                                    int32_t var_8_2 = 0xffffffff
                                    int32_t var_1c_2 = 0xf
                                    int32_t var_20_3 = 0
                                    var_30 = 0
                                    
                                    if (var_4c_1 u>= 0x10)
                                        *(esp_1 - 4) = 1
                                        *(esp_1 - 8) = var_4c_1 + 1
                                        *(esp_1 - 0xc) = var_60.d
                                        sub_403160()
                                    
                                    result = result_1 + 1
                                    result_1 = result
                                    
                                    if (result s>= arg4)
                                        goto label_40c52f
                                    
                                    continue
            else
                int32_t eax_7 = (*(eax_6 + 0x14))()
                int32_t* ecx_2 = *(arg1 + 0x20)
                *(esp_4 - 4) = result_3
                *(esp_4 - 8) = eax_7
                int32_t* eax_8 = (*(*ecx_2 + 0xc))()
                esp_1 = esp_4
                
                if (eax_8 != 0)
                    var_9c_1 = (**eax_8)()
                    *(esp_1 - 4) = &var_60
                    *(esp_1 - 8) = result_1
                    *(esp_1 - 0xc) = arg3
                    
                    if (sub_41fc60(arg1 + 0x14) != 0)
                        int32_t* ecx_5 = *(arg1 + 0x1c)
                        int32_t result_4 = result_1
                        *(esp_1 - 4) = arg3
                        int32_t eax_12 = (*(*ecx_5 + 0x14))()
                        int32_t* ecx_6 = *(arg1 + 0x20)
                        *(esp_1 - 4) = result_4
                        *(esp_1 - 8) = eax_12
                        char* edx_4 = (*(*ecx_6 + 0x10))()
                        
                        if (edx_4 != 0)
                            void* ecx_7
                            
                            if (*edx_4 != 0)
                                char* ecx_8 = edx_4
                                char* eax_13
                                
                                do
                                    eax_13.b = *ecx_8
                                    ecx_8 = &ecx_8[1]
                                while (eax_13.b != 0)
                                ecx_7 = ecx_8 - &ecx_8[1]
                            else
                                ecx_7 = nullptr
                            
                            *(esp_1 - 4) = ecx_7
                            *(esp_1 - 8) = edx_4
                            sub_403490(&var_30)
                            *(esp_1 - 4) = &result_2
                            *(esp_1 - 8) = result_1
                            *(esp_1 - 0xc) = arg3
                            
                            if (sub_420630(arg1 + 0x14) != 0)
                                *(esp_1 - 4) = &var_48
                                *(esp_1 - 8) = result_1
                                *(esp_1 - 0xc) = arg3
                                
                                if (sub_422770(arg1 + 0x14) != 0)
                                    result_6 = result_2
                                    goto label_40c45f
        
        if (var_34_1 u>= 0x10)
            *(esp_1 - 4) = 1
            *(esp_1 - 8) = var_34_1 + 1
            *(esp_1 - 0xc) = var_48.d
            sub_403160()
        
        int32_t var_34_3 = 0xf
        int32_t var_38_3 = 0
        var_48 = 0
        
        if (var_1c_1 u>= 0x10)
            *(esp_1 - 4) = 1
            *(esp_1 - 8) = var_1c_1 + 1
            *(esp_1 - 0xc) = var_30.d
            sub_403160()
        
        int32_t var_1c_3 = 0xf
        int32_t var_20_4 = 0
        var_30 = 0
        
        if (var_4c_1 u>= 0x10)
            *(esp_1 - 4) = 1
            *(esp_1 - 8) = var_4c_1 + 1
            *(esp_1 - 0xc) = var_60.d
            sub_403160()
        
        result.b = 0
        break

fsbase->NtTib.ExceptionList = ExceptionList
esp_1[1]
esp_1[2]
esp_1[3]
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
