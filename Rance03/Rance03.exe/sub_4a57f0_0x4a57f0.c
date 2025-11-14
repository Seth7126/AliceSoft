// 函数: sub_4a57f0
// 地址: 0x4a57f0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6bc9f8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* ebp = arg1
void* var_2c = ebp
sub_47dfb0(ebp + 0x10, arg2)
int32_t result_1 = 0
int32_t var_14 = 0
int32_t var_10 = 0
int32_t var_4 = 0
sub_4a6210(ebp, &result_1)
int32_t esi_2 = (var_14 - result_1) s>> 2
sub_468ec0(arg2, esi_2)
uint32_t ebx = 0
uint32_t var_28 = 0

if (esi_2 s<= 0)
label_4a5c87:
    ebx.b = 1
else
    int32_t result_3 = result_1
    int32_t eax_3 = esi_2
    
    while (true)
        int32_t esi_3 = *(result_3 + (ebx << 2))
        
        if (esi_3 s> 0)
            void** edi_1 = *(ebp + 0x1c)
            void** eax_5 = edi_1[1]
            int32_t ecx_5 = esi_3 s/ 0x2710
            void** edx_3 = edi_1
            
            while (*(eax_5 + 0xd) == 0)
                if (eax_5[4] s>= ecx_5)
                    edx_3 = eax_5
                    eax_5 = *eax_5
                else
                    eax_5 = eax_5[2]
            
            void** eax_6
            
            if (edx_3 == edi_1 || ecx_5 s< edx_3[4])
                void** var_20 = edi_1
                eax_6 = &var_20
            else
                void** var_24 = edx_3
                eax_6 = &var_24
            
            void* eax_7 = *eax_6
            
            if (eax_7 != edi_1)
                void* ecx_6 = *(eax_7 + 0x14)
                
                if (ecx_6 != 0)
                    int32_t edx_4 = *(ecx_6 + 8)
                    
                    if (esi_3 s>= edx_4 && *(ecx_6 + 4) + edx_4 s> esi_3)
                        void* ebp_1 = *(*(ecx_6 + 0xc) + ((esi_3 - edx_4) << 2))
                        
                        if (ebp_1 != 0)
                            char var_39 = 1
                            int32_t eax_11 = *(arg2 + 8)
                            int32_t ecx_7
                            
                            if (&var_39 u< eax_11)
                                ecx_7 = *(arg2 + 4)
                            
                            if (&var_39 u>= eax_11 || ecx_7 u> &var_39)
                                if (eax_11 == *(arg2 + 0xc))
                                    sub_403590(arg2 + 4, 1)
                                
                                char* eax_13 = *(arg2 + 8)
                                
                                if (eax_13 != 0)
                                    *eax_13 = 1
                            else
                                if (eax_11 == *(arg2 + 0xc))
                                    sub_403590(arg2 + 4, 1)
                                
                                char* ecx_9 = *(arg2 + 8)
                                
                                if (ecx_9 != 0)
                                    int32_t eax_12
                                    eax_12.b = *(&var_39 - ecx_7 + *(arg2 + 4))
                                    *ecx_9 = eax_12.b
                            
                            *(arg2 + 8) += 1
                            int32_t eax_14 = *(arg2 + 8)
                            char var_38 = 0
                            int32_t ecx_11
                            
                            if (&var_38 u< eax_14)
                                ecx_11 = *(arg2 + 4)
                            
                            if (&var_38 u>= eax_14 || ecx_11 u> &var_38)
                                if (eax_14 == *(arg2 + 0xc))
                                    sub_403590(arg2 + 4, 1)
                                
                                char* eax_16 = *(arg2 + 8)
                                
                                if (eax_16 != 0)
                                    *eax_16 = 0
                            else
                                if (eax_14 == *(arg2 + 0xc))
                                    sub_403590(arg2 + 4, 1)
                                
                                char* ecx_13 = *(arg2 + 8)
                                
                                if (ecx_13 != 0)
                                    int32_t eax_15
                                    eax_15.b = *(&var_38 - ecx_11 + *(arg2 + 4))
                                    *ecx_13 = eax_15.b
                            
                            *(arg2 + 8) += 1
                            int32_t eax_17 = *(arg2 + 8)
                            char var_37 = 0
                            int32_t ecx_15
                            
                            if (&var_37 u< eax_17)
                                ecx_15 = *(arg2 + 4)
                            
                            if (&var_37 u>= eax_17 || ecx_15 u> &var_37)
                                if (eax_17 == *(arg2 + 0xc))
                                    sub_403590(arg2 + 4, 1)
                                
                                char* eax_19 = *(arg2 + 8)
                                
                                if (eax_19 != 0)
                                    *eax_19 = 0
                            else
                                if (eax_17 == *(arg2 + 0xc))
                                    sub_403590(arg2 + 4, 1)
                                
                                char* ecx_17 = *(arg2 + 8)
                                
                                if (ecx_17 != 0)
                                    int32_t eax_18
                                    eax_18.b = *(&var_37 - ecx_15 + *(arg2 + 4))
                                    *ecx_17 = eax_18.b
                            
                            *(arg2 + 8) += 1
                            int32_t eax_20 = *(arg2 + 8)
                            char var_36 = 0
                            int32_t ecx_19
                            
                            if (&var_36 u< eax_20)
                                ecx_19 = *(arg2 + 4)
                            
                            if (&var_36 u>= eax_20 || ecx_19 u> &var_36)
                                if (eax_20 == *(arg2 + 0xc))
                                    sub_403590(arg2 + 4, 1)
                                
                                char* eax_22 = *(arg2 + 8)
                                
                                if (eax_22 != 0)
                                    *eax_22 = 0
                            else
                                if (eax_20 == *(arg2 + 0xc))
                                    sub_403590(arg2 + 4, 1)
                                
                                char* ecx_21 = *(arg2 + 8)
                                
                                if (ecx_21 != 0)
                                    int32_t eax_21
                                    eax_21.b = *(&var_36 - ecx_19 + *(arg2 + 4))
                                    *ecx_21 = eax_21.b
                            
                            int32_t result_2 = result_1
                            *(arg2 + 8) += 1
                            int32_t ebx_1 = *(result_2 + (ebx << 2))
                            int32_t eax_23 = *(arg2 + 8)
                            char var_35 = ebx_1.b
                            int32_t ecx_23
                            
                            if (&var_35 u< eax_23)
                                ecx_23 = *(arg2 + 4)
                            
                            if (&var_35 u>= eax_23 || ecx_23 u> &var_35)
                                if (eax_23 == *(arg2 + 0xc))
                                    sub_403590(arg2 + 4, 1)
                                
                                char* eax_25 = *(arg2 + 8)
                                
                                if (eax_25 != 0)
                                    *eax_25 = ebx_1.b
                            else
                                if (eax_23 == *(arg2 + 0xc))
                                    sub_403590(arg2 + 4, 1)
                                
                                char* ecx_25 = *(arg2 + 8)
                                
                                if (ecx_25 != 0)
                                    int32_t eax_24
                                    eax_24.b = *(&var_35 - ecx_23 + *(arg2 + 4))
                                    *ecx_25 = eax_24.b
                            
                            *(arg2 + 8) += 1
                            int32_t ecx_27 = *(arg2 + 8)
                            uint32_t eax_27 = ebx_1 u>> 8
                            char var_34 = eax_27.b
                            int32_t edx_5
                            
                            if (&var_34 u< ecx_27)
                                edx_5 = *(arg2 + 4)
                            
                            char* ecx_30
                            
                            if (&var_34 u>= ecx_27 || edx_5 u> &var_34)
                                if (ecx_27 == *(arg2 + 0xc))
                                    sub_403590(arg2 + 4, 1)
                                
                                ecx_30 = *(arg2 + 8)
                                
                                if (ecx_30 != 0)
                                    *ecx_30 = eax_27.b
                            else
                                if (ecx_27 == *(arg2 + 0xc))
                                    sub_403590(arg2 + 4, 1)
                                
                                ecx_30 = *(arg2 + 8)
                                
                                if (ecx_30 != 0)
                                    eax_27.b = *(&var_34 - edx_5 + *(arg2 + 4))
                                    *ecx_30 = eax_27.b
                            *(arg2 + 8) += 1
                            int32_t ecx_31 = *(arg2 + 8)
                            uint32_t eax_29 = ebx_1 u>> 0x10
                            char var_33 = eax_29.b
                            int32_t edx_6
                            
                            if (&var_33 u< ecx_31)
                                edx_6 = *(arg2 + 4)
                            
                            char* ecx_34
                            
                            if (&var_33 u>= ecx_31 || edx_6 u> &var_33)
                                if (ecx_31 == *(arg2 + 0xc))
                                    sub_403590(arg2 + 4, 1)
                                
                                ecx_34 = *(arg2 + 8)
                                
                                if (ecx_34 != 0)
                                    *ecx_34 = eax_29.b
                            else
                                if (ecx_31 == *(arg2 + 0xc))
                                    sub_403590(arg2 + 4, 1)
                                
                                ecx_34 = *(arg2 + 8)
                                
                                if (ecx_34 != 0)
                                    eax_29.b = *(&var_33 - edx_6 + *(arg2 + 4))
                                    *ecx_34 = eax_29.b
                            *(arg2 + 8) += 1
                            int32_t eax_30 = *(arg2 + 8)
                            ebx = ebx_1 u>> 0x18
                            char var_32 = ebx.b
                            int32_t ecx_35
                            
                            if (&var_32 u< eax_30)
                                ecx_35 = *(arg2 + 4)
                            
                            if (&var_32 u>= eax_30 || ecx_35 u> &var_32)
                                if (eax_30 == *(arg2 + 0xc))
                                    sub_403590(arg2 + 4, 1)
                                
                                char* eax_32 = *(arg2 + 8)
                                
                                if (eax_32 != 0)
                                    *eax_32 = ebx.b
                            else
                                if (eax_30 == *(arg2 + 0xc))
                                    sub_403590(arg2 + 4, 1)
                                
                                char* ecx_37 = *(arg2 + 8)
                                
                                if (ecx_37 != 0)
                                    int32_t eax_31
                                    eax_31.b = *(&var_32 - ecx_35 + *(arg2 + 4))
                                    *ecx_37 = eax_31.b
                            
                            *(arg2 + 8) += 1
                            char eax_33 = sub_4b9b80(ebp_1 + 0x6c, arg2)
                            char eax_40
                            
                            if (eax_33 != 0)
                                int32_t eax_35 = (*(**(ebp_1 + 0x5c) + 0xc))(eax_2)
                                uint8_t var_31 = eax_35.b
                                sub_414b60(arg2 + 4, &var_31)
                                var_31 = (eax_35 u>> 8).b
                                sub_414b60(arg2 + 4, &var_31)
                                var_31 = (eax_35 u>> 0x10).b
                                sub_414b60(arg2 + 4, &var_31)
                                var_31 = (eax_35 u>> 0x18).b
                                sub_414b60(arg2 + 4, &var_31)
                                eax_40 = (*(**(ebp_1 + 0x5c) + 0x60))(arg2)
                            
                            if (eax_33 == 0 || eax_40 == 0)
                                ebx.b = 0
                                break
                            
                            ebx = var_28
                        
                        ebp = var_2c
            
            result_3 = result_1
            eax_3 = esi_2
        
        ebx += 1
        var_28 = ebx
        
        if (ebx s>= eax_3)
            goto label_4a5c87

int32_t result = result_1

if (result != 0)
    j__free(result)

result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
return result
