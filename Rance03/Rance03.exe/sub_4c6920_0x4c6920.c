// 函数: sub_4c6920
// 地址: 0x4c6920
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_3 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6be7c0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_6c
int32_t eax_2 = __security_cookie ^ &var_6c
int32_t __saved_edi
int32_t var_80 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void** result_4 = arg2
void** result_1 = result_4
void* eax_5 = sub_4a3ac0(*(arg1 + 0x94))
int32_t result_3 = sub_4a3b70(*(arg1 + 0x98))
sub_402110(arg1 + 0xb8, 0x6da4c9, nullptr)
sub_402110(arg1 + 0xd0, 0x6da4bb, nullptr)
int32_t eax_7 = sub_4ff540(arg1 + 0x10c)
sub_4c8ce0(arg1 + 0x10c)
int32_t eax_8 = sub_4ff540(arg1 + 0x10c)
int32_t ebx_2 = neg.d(*(result_3 + 0x100))
int32_t eax_9
int32_t edx
edx:eax_9 = sx.q(eax_8)
int32_t result = (eax_9 + (edx & 3)) s>> 2
int32_t result_2 = result

if (result_4[4] u> 0)
    int32_t ecx_8 = eax_7 - *(eax_5 + 0x100) + result
    int32_t var_68_1 = ecx_8
    
    while (true)
        if (arg3 s<= result + ebx_2 && arg4 s<= ecx_8)
            result = result_1
            
            if (arg1 + 0xd0 != result)
                result = sub_401ff0(arg1 + 0xd0, result, 0, 0xffffffff)
            
            break
        
        int32_t* var_48
        sub_4c8a00(&var_48, result_4)
        int32_t var_4 = 0
        int32_t* eax_12 = &var_48
        int32_t edx_2 = 1
        int32_t var_34
        
        if (var_34 u>= 0x10)
            eax_12 = var_48
        
        int32_t var_38
        
        if (var_38 u< 1)
            edx_2 = var_38
        
        int32_t eax_14
        bool cond:3_1
        
        if (edx_2 == 0)
        label_4c6aa8:
            
            if (var_38 u>= 1)
                eax_14.b = var_38 != 1
            else
                eax_14 = 0xffffffff
            
            cond:3_1 = eax_14 == 0
        else
            void* const esi_2 = &data_6e1664
            int32_t i_2 = edx_2 - 4
            
            if (edx_2 u>= 4)
                int32_t i
                
                do
                    if (*eax_12 != *esi_2)
                        goto label_4c6a6b
                    
                    eax_12 = &eax_12[1]
                    esi_2 += 4
                    i = i_2
                    i_2 -= 4
                while (i u>= 4)
            
            if (i_2 == 0xfffffffc)
                eax_14 = 0
            else
            label_4c6a6b:
                int32_t ecx_9
                ecx_9.b = *eax_12
                char temp2_1 = *esi_2
                
                if (ecx_9.b != temp2_1)
                    eax_14 = sbb.d(eax_12, eax_12, ecx_9.b u< temp2_1) | 1
                else if (i_2 == 0xfffffffd)
                    eax_14 = 0
                else
                    ecx_9.b = *(eax_12 + 1)
                    char temp5_1 = *(esi_2 + 1)
                    
                    if (ecx_9.b != temp5_1)
                        eax_14 = sbb.d(eax_12, eax_12, ecx_9.b u< temp5_1) | 1
                    else if (i_2 == 0xfffffffe)
                        eax_14 = 0
                    else
                        ecx_9.b = *(eax_12 + 2)
                        char temp6_1 = *(esi_2 + 2)
                        
                        if (ecx_9.b != temp6_1)
                            eax_14 = sbb.d(eax_12, eax_12, ecx_9.b u< temp6_1) | 1
                        else if (i_2 == 0xffffffff)
                            eax_14 = 0
                        else
                            eax_12.b = *(eax_12 + 3)
                            char temp8_1 = *(esi_2 + 3)
                            
                            if (eax_12.b == temp8_1)
                                eax_14 = 0
                            else
                                eax_14 = sbb.d(eax_12, eax_12, eax_12.b u< temp8_1) | 1
            
            cond:3_1 = eax_14 == 0
            
            if (eax_14 == 0)
                goto label_4c6aa8
        
        eax_14.b = cond:3_1
        struct IString::common::CStringWrapper::VTable* const var_30
        int32_t var_1c
        
        if (eax_14.b != 0 && arg4 s<= var_68_1)
            result = sub_40d1c0(arg4, &var_48, &var_30, result_4)
            
            if (arg1 + 0xd0 != result)
                if (*(arg1 + 0xe4) u>= 0x10)
                    j__free(*(arg1 + 0xd0))
                
                *(arg1 + 0xe4) = 0xf
                *(arg1 + 0xe0) = 0
                *(arg1 + 0xd0) = 0
                result = sub_4030b0(arg1 + 0xd0, result)
            
            if (var_1c u>= 0x10)
                result = j__free(var_30)
            
            if (var_34 u>= 0x10)
                result = j__free(var_48)
            
            break
        
        sub_403110(arg1 + 0xb8, &var_48, nullptr, 0xffffffff)
        int32_t* ecx_11 = &var_48
        int32_t* ebp = var_48
        int32_t edx_3 = 1
        
        if (var_34 u>= 0x10)
            ecx_11 = ebp
        
        if (var_38 u< 1)
            edx_3 = var_38
        
        int32_t eax_18
        bool cond:5_1
        
        if (edx_3 == 0)
        label_4c6b63:
            
            if (var_38 u>= 1)
                eax_18.b = var_38 != 1
            else
                eax_18 = 0xffffffff
            
            cond:5_1 = eax_18 == 0
        else
            void* const esi_3 = &data_6e1668
            int32_t i_3 = edx_3 - 4
            
            if (edx_3 u>= 4)
                int32_t i_1
                
                do
                    if (*ecx_11 != *esi_3)
                        goto label_4c6b26
                    
                    ecx_11 = &ecx_11[1]
                    esi_3 += 4
                    i_1 = i_3
                    i_3 -= 4
                while (i_1 u>= 4)
            
            if (i_3 == 0xfffffffc)
                eax_18 = 0
            else
            label_4c6b26:
                int32_t* eax_16
                eax_16.b = *ecx_11
                char temp9_1 = *esi_3
                
                if (eax_16.b != temp9_1)
                    eax_18 = sbb.d(eax_16, eax_16, eax_16.b u< temp9_1) | 1
                else if (i_3 == 0xfffffffd)
                    eax_18 = 0
                else
                    eax_16.b = *(ecx_11 + 1)
                    char temp12_1 = *(esi_3 + 1)
                    
                    if (eax_16.b != temp12_1)
                        eax_18 = sbb.d(eax_16, eax_16, eax_16.b u< temp12_1) | 1
                    else if (i_3 == 0xfffffffe)
                        eax_18 = 0
                    else
                        eax_16.b = *(ecx_11 + 2)
                        char temp13_1 = *(esi_3 + 2)
                        
                        if (eax_16.b != temp13_1)
                            eax_18 = sbb.d(eax_16, eax_16, eax_16.b u< temp13_1) | 1
                        else if (i_3 == 0xffffffff)
                            eax_18 = 0
                        else
                            eax_16.b = *(ecx_11 + 3)
                            char temp14_1 = *(esi_3 + 3)
                            
                            if (eax_16.b == temp14_1)
                                eax_18 = 0
                            else
                                eax_18 = sbb.d(eax_16, eax_16, eax_16.b u< temp14_1) | 1
            
            cond:5_1 = eax_18 == 0
            
            if (eax_18 == 0)
                goto label_4c6b63
        
        eax_18.b = cond:5_1
        
        if (eax_18.b == 0)
            var_30 = &common::CStringWrapper::`vftable'{for `IString'}
            int32_t var_18_1 = 0xf
            var_1c = 0
            char var_2c = 0
            sub_401ff0(&var_2c, &var_48, 0, 0xffffffff)
            var_4.b = 1
            int32_t var_4c
            result = sub_44cd50(&var_30, &var_4c)
            var_30 = &common::CStringWrapper::`vftable'{for `IString'}
            
            if (var_18_1 u>= 0x10)
                result = j__free(var_2c.d)
            
            ebx_2 += var_4c
            int32_t var_4_2 = 0xffffffff
            
            if (var_34 u< 0x10)
                ecx_8 = var_68_1
            else
                result = j__free(var_48)
                ecx_8 = var_68_1
        else
            result = result_3
            ecx_8 = var_68_1 + eax_7
            var_68_1 = ecx_8
            ebx_2 = neg.d(*(result + 0x100))
            int32_t var_4_1 = 0xffffffff
            
            if (var_34 u>= 0x10)
                result = j__free(ebp)
                ecx_8 = var_68_1
        
        result_4 = result_1
        
        if (result_4[4] u<= 0)
            break
        
        result = result_2

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_6c)
return result
