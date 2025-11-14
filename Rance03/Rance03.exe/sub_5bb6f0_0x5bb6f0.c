// 函数: sub_5bb6f0
// 地址: 0x5bb6f0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c9548
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_40 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* ebx = arg3
int32_t result

if (arg2 u>= (*(ebx + 0xc) - *(ebx + 8)) s>> 2)
    result = 0xffffffff
else
    void* esi_1 = *(*(ebx + 8) + (arg2 << 2))
    
    if (esi_1 == 0)
        result = 0xffffffff
    else
        int32_t ecx = *(esi_1 + 0x24)
        void* edx_1 = *(*(esi_1 + 0x1c) + 4)
        
        if (ecx u>= (*(edx_1 + 0xf4) - *(edx_1 + 0xf0)) s>> 4)
            result = 0xffffffff
        else
            int32_t ecx_1 = ecx << 4
            
            if (ecx_1 == neg.d(*(edx_1 + 0xf0)))
                result = 0xffffffff
            else
                void* edi_1 = *(ecx_1 + *(edx_1 + 0xf0) + 4)
                
                if (edi_1 == 0)
                    result = 0xffffffff
                else
                    int32_t var_1c = 0
                    int32_t var_18_1 = 0
                    int32_t var_14_1 = 0
                    int32_t var_4 = 0
                    int32_t eax_11
                    int32_t edx_2
                    edx_2:eax_11 = muls.dp.d(0x66666667, *(edi_1 + 0x24) - *(edi_1 + 0x20))
                    void* var_20 = edi_1
                    int32_t edx_3 = edx_2 s>> 4
                    sub_42f470(&var_1c, (edx_3 u>> 0x1f) + edx_3)
                    int32_t ebp_1 = 0
                    int32_t eax_15
                    int32_t edx_4
                    edx_4:eax_15 = muls.dp.d(0x66666667, *(edi_1 + 0x24) - *(edi_1 + 0x20))
                    int32_t edx_5 = edx_4 s>> 4
                    int32_t result_1
                    
                    if ((edx_5 u>> 0x1f) + edx_5 s<= 0)
                    label_5bb868:
                        result_1 = (*(arg1 + 8) - *(arg1 + 4)) s>> 4
                        sub_5bb930(arg1 + 4, &var_20)
                    else
                        int32_t edx_6 = 0
                        arg2 = 0
                        
                        while (true)
                            int32_t ecx_8
                            
                            if (*(esi_1 + 0xc) != 0)
                                ecx_8 = *(esi_1 + 8)
                            else
                                ecx_8 = 0
                            
                            void var_24
                            char eax_20 = sub_5bb240(*(*(edi_1 + 0x20) + edx_6 + 0x18), 
                                *(ecx_8 + (ebp_1 << 2)), &var_24, ebx)
                            ebx = arg3
                            
                            if (eax_20 == 0)
                                result_1 = 0xffffffff
                                break
                            
                            *(var_1c + (ebp_1 << 2)) = (*(arg1 + 0x38) - *(arg1 + 0x34)) s>> 2
                            sub_4158d0(arg1 + 0x34, &var_24)
                            ebp_1 += 1
                            arg2 += 0x28
                            int32_t eax_24
                            int32_t edx_8
                            edx_8:eax_24 = muls.dp.d(0x66666667, *(edi_1 + 0x24) - *(edi_1 + 0x20))
                            int32_t edx_9 = edx_8 s>> 4
                            edx_6 = arg2
                            
                            if (ebp_1 s>= (edx_9 u>> 0x1f) + edx_9)
                                goto label_5bb868
                    
                    int32_t eax_28 = var_1c
                    
                    if (eax_28 != 0)
                        j__free(eax_28)
                    
                    result = result_1

fsbase->NtTib.ExceptionList = ExceptionList
return result
