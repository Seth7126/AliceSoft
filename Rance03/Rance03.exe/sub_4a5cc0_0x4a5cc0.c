// 函数: sub_4a5cc0
// 地址: 0x4a5cc0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6bc9f8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* ebp = arg1
void* var_34 = ebp
sub_47dfb0(ebp + 0x10, arg2)
int32_t result_1 = 0
int32_t var_14 = 0
int32_t var_10 = 0
int32_t var_4 = 0
sub_4a6210(ebp, &result_1)
int32_t result_2 = result_1
int32_t eax_5 = (var_14 - result_2) s>> 2
sub_468ec0(arg2, eax_5)
int32_t edi = 0
int32_t var_30 = 0
uint32_t ebx

if (eax_5 s<= 0)
label_4a6013:
    ebx.b = 1
else
    while (true)
        int32_t* eax_6 = result_2 + (edi << 2)
        int32_t edi_1 = *eax_6
        
        if (edi_1 s> 0)
            int32_t esi_2 = edi_1 s/ 0x2710
            void** edx_3 = *(ebp + 0x1c)
            void** ecx_3 = edx_3
            void** eax_8 = edx_3[1]
            
            while (*(eax_8 + 0xd) == 0)
                if (eax_8[4] s>= esi_2)
                    ecx_3 = eax_8
                    eax_8 = *eax_8
                else
                    eax_8 = eax_8[2]
            
            void*** eax_9
            
            if (ecx_3 == edx_3 || esi_2 s< ecx_3[4])
                void** var_24 = edx_3
                eax_9 = &var_24
            else
                void** var_28 = ecx_3
                eax_9 = &var_28
            
            void** eax_10 = *eax_9
            
            if (eax_10 != edx_3)
                void* ecx_4 = eax_10[5]
                
                if (ecx_4 != 0)
                    int32_t edx_4 = *(ecx_4 + 8)
                    
                    if (edi_1 s>= edx_4 && *(ecx_4 + 4) + edx_4 s> edi_1)
                        void* ebp_1 = *(*(ecx_4 + 0xc) + ((edi_1 - edx_4) << 2))
                        
                        if (ebp_1 != 0)
                            int32_t eax_13
                            eax_13.b = *(ebp_1 + 0x78)
                            uint8_t var_35 = eax_13.b
                            int32_t ebx_1
                            ebx_1.b = eax_13.b != 0
                            char var_39 = ebx_1.b
                            int32_t eax_14 = *(arg2 + 8)
                            int32_t ecx_5
                            
                            if (&var_39 u< eax_14)
                                ecx_5 = *(arg2 + 4)
                            
                            if (&var_39 u>= eax_14 || ecx_5 u> &var_39)
                                if (eax_14 == *(arg2 + 0xc))
                                    sub_403590(arg2 + 4, 1)
                                
                                char* eax_16 = *(arg2 + 8)
                                
                                if (eax_16 != 0)
                                    *eax_16 = ebx_1.b
                            else
                                if (eax_14 == *(arg2 + 0xc))
                                    sub_403590(arg2 + 4, 1)
                                
                                char* ecx_7 = *(arg2 + 8)
                                
                                if (ecx_7 != 0)
                                    int32_t eax_15
                                    eax_15.b = *(&var_39 - ecx_5 + *(arg2 + 4))
                                    *ecx_7 = eax_15.b
                            
                            *(arg2 + 8) += 1
                            int32_t ecx_9 = *(arg2 + 8)
                            uint32_t eax_18 = ebx_1 u>> 8
                            char var_38 = eax_18.b
                            int32_t edx_5
                            
                            if (&var_38 u< ecx_9)
                                edx_5 = *(arg2 + 4)
                            
                            char* ecx_12
                            
                            if (&var_38 u>= ecx_9 || edx_5 u> &var_38)
                                if (ecx_9 == *(arg2 + 0xc))
                                    sub_403590(arg2 + 4, 1)
                                
                                ecx_12 = *(arg2 + 8)
                                
                                if (ecx_12 != 0)
                                    *ecx_12 = eax_18.b
                            else
                                if (ecx_9 == *(arg2 + 0xc))
                                    sub_403590(arg2 + 4, 1)
                                
                                ecx_12 = *(arg2 + 8)
                                
                                if (ecx_12 != 0)
                                    eax_18.b = *(&var_38 - edx_5 + *(arg2 + 4))
                                    *ecx_12 = eax_18.b
                            *(arg2 + 8) += 1
                            int32_t ecx_13 = *(arg2 + 8)
                            uint32_t eax_20 = ebx_1 u>> 0x10
                            char var_37 = eax_20.b
                            int32_t edx_6
                            
                            if (&var_37 u< ecx_13)
                                edx_6 = *(arg2 + 4)
                            
                            char* ecx_16
                            
                            if (&var_37 u>= ecx_13 || edx_6 u> &var_37)
                                if (ecx_13 == *(arg2 + 0xc))
                                    sub_403590(arg2 + 4, 1)
                                
                                ecx_16 = *(arg2 + 8)
                                
                                if (ecx_16 != 0)
                                    *ecx_16 = eax_20.b
                            else
                                if (ecx_13 == *(arg2 + 0xc))
                                    sub_403590(arg2 + 4, 1)
                                
                                ecx_16 = *(arg2 + 8)
                                
                                if (ecx_16 != 0)
                                    eax_20.b = *(&var_37 - edx_6 + *(arg2 + 4))
                                    *ecx_16 = eax_20.b
                            *(arg2 + 8) += 1
                            int32_t eax_21 = *(arg2 + 8)
                            ebx = ebx_1 u>> 0x18
                            char var_36 = ebx.b
                            int32_t ecx_17
                            
                            if (&var_36 u< eax_21)
                                ecx_17 = *(arg2 + 4)
                            
                            if (&var_36 u>= eax_21 || ecx_17 u> &var_36)
                                if (eax_21 == *(arg2 + 0xc))
                                    sub_403590(arg2 + 4, 1)
                                
                                char* eax_23 = *(arg2 + 8)
                                
                                if (eax_23 != 0)
                                    *eax_23 = ebx.b
                            else
                                if (eax_21 == *(arg2 + 0xc))
                                    sub_403590(arg2 + 4, 1)
                                
                                char* ecx_19 = *(arg2 + 8)
                                
                                if (ecx_19 != 0)
                                    int32_t eax_22
                                    eax_22.b = *(&var_36 - ecx_17 + *(arg2 + 4))
                                    *ecx_19 = eax_22.b
                            
                            *(arg2 + 8) += 1
                            
                            if (var_35 != 0)
                                int32_t ebx_3 = *eax_6
                                var_35 = ebx_3.b
                                sub_414b60(arg2 + 4, &var_35)
                                var_35 = (ebx_3 u>> 8).b
                                sub_414b60(arg2 + 4, &var_35)
                                var_35 = (ebx_3 u>> 0x10).b
                                sub_414b60(arg2 + 4, &var_35)
                                var_35 = (ebx_3 u>> 0x18).b
                                sub_414b60(arg2 + 4, &var_35)
                                char eax_28 = sub_4b9b80(ebp_1 + 0x6c, arg2)
                                char eax_33
                                
                                if (eax_28 != 0)
                                    sub_468ec0(arg2, (*(**(ebp_1 + 0x5c) + 0xc))(eax_2))
                                    eax_33 = (*(**(ebp_1 + 0x5c) + 0x60))(arg2)
                                
                                if (eax_28 == 0 || eax_33 == 0)
                                    ebx.b = 0
                                    break
                        
                        ebp = var_34
            
            result_2 = result_1
        
        edi = var_30 + 1
        var_30 = edi
        
        if (edi s>= eax_5)
            goto label_4a6013

int32_t result = result_1

if (result != 0)
    j__free(result)

result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
return result
