// 函数: sub_6807b0
// 地址: 0x6807b0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_746c02
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_58 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t result = arg2
int32_t result_1 = result
int32_t* edi = arg1
int32_t* var_3c = edi

if (edi != result)
    int32_t* ebx_1 = &edi[6]
    int32_t* var_34_1 = ebx_1
    
    if (ebx_1 != result)
        do
            int32_t result_2 = 0xf
            char* esi_1 = ebx_1
            int32_t var_20_1 = 0
            char var_30 = 0
            sub_4056a0(&var_30, ebx_1)
            int32_t* var_38_1
            
            if (edi[5] u< 0x10)
                var_38_1 = edi
            else
                var_38_1 = *edi
            
            char* ecx_1 = &var_30
            int32_t eax_4 = edi[4]
            
            if (result_2 u>= 0x10)
                ecx_1 = var_30.d
            
            int32_t ebx_2 = var_20_1
            
            if (ebx_2 u< eax_4)
                eax_4 = ebx_2
            
            int32_t eax_5 = sub_406ac0(eax_4, var_38_1, ecx_1, eax_4)
            
            if (eax_5 == 0)
                int32_t eax_6 = edi[4]
                bool c_1 = eax_6 u< ebx_2
                
                if (eax_6 == ebx_2 || c_1)
                    eax_5 = neg.d(sbb.d(eax_6, eax_6, c_1))
                else
                    eax_5 = 0xffffffff
            
            int32_t* ebx_3
            
            if ((eax_5 u>> 0x1f).b == 0)
                int32_t* edi_1 = var_34_1
                
                while (true)
                    edi_1 -= 0x18
                    int32_t* var_38_2
                    
                    if (edi_1[5] u< 0x10)
                        var_38_2 = edi_1
                    else
                        var_38_2 = *edi_1
                    
                    int32_t* ecx_5 = &var_30
                    int32_t eax_15 = edi_1[4]
                    
                    if (result_2 u>= 0x10)
                        ecx_5 = var_30.d
                    
                    if (ebx_2 u< eax_15)
                        eax_15 = ebx_2
                    
                    int32_t eax_16 = sub_406ac0(eax_15, var_38_2, ecx_5, eax_15)
                    
                    if (eax_16 == 0)
                        int32_t eax_17 = edi_1[4]
                        bool c_2 = eax_17 u< ebx_2
                        
                        if (eax_17 == ebx_2 || c_2)
                            eax_16 = neg.d(sbb.d(eax_17, eax_17, c_2))
                        else
                            eax_16 = 0xffffffff
                    
                    if ((eax_16 u>> 0x1f).b == 0)
                        break
                    
                    if (esi_1 != edi_1)
                        int32_t eax_20 = *(esi_1 + 0x14)
                        
                        if (eax_20 u>= 0x10)
                            sub_403160(*esi_1, eax_20 + 1, 1)
                        
                        *(esi_1 + 0x14) = 0xf
                        bool cond:6_1 = *(esi_1 + 0x14) u< 0x10
                        *(esi_1 + 0x10) = 0
                        char* eax_22
                        
                        if (cond:6_1)
                            eax_22 = esi_1
                        else
                            eax_22 = *esi_1
                        
                        *eax_22 = 0
                        sub_4056a0(esi_1, edi_1)
                        ebx_2 = var_20_1
                    
                    esi_1 = edi_1
                
                if (esi_1 != &var_30)
                    int32_t eax_23 = *(esi_1 + 0x14)
                    
                    if (eax_23 u>= 0x10)
                        sub_403160(*esi_1, eax_23 + 1, 1)
                    
                    *(esi_1 + 0x14) = 0xf
                    bool cond:5_1 = *(esi_1 + 0x14) u< 0x10
                    *(esi_1 + 0x10) = 0
                    char* eax_25
                    
                    if (cond:5_1)
                        eax_25 = esi_1
                    else
                        eax_25 = *esi_1
                    
                    *eax_25 = 0
                    sub_4056a0(esi_1, &var_30)
                
                ebx_3 = var_34_1
                edi = var_3c
            else
                ebx_3 = var_34_1
                int32_t var_5c_3 = 0.d
                sub_4eb870(&ebx_3[6], ebx_3, edi, &ebx_3[6])
                
                if (edi != &var_30)
                    int32_t eax_10 = edi[5]
                    
                    if (eax_10 u>= 0x10)
                        sub_403160(*edi, eax_10 + 1, 1)
                    
                    edi[5] = 0xf
                    bool cond:4_1 = edi[5] u< 0x10
                    edi[4] = 0
                    
                    if (cond:4_1)
                        *edi = 0
                        sub_4056a0(edi, &var_30)
                    else
                        **edi = 0
                        sub_4056a0(edi, &var_30)
            
            result = result_2
            
            if (result u>= 0x10)
                result = sub_403160(var_30.d, result + 1, 1)
            
            ebx_1 = &ebx_3[6]
            var_34_1 = ebx_1
        while (ebx_1 != result_1)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
