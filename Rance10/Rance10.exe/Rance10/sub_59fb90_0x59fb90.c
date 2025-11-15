// 函数: sub_59fb90
// 地址: 0x59fb90
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73e6a8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_30 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** eax_3

if (arg2 s>= 0)
    int32_t eax_4
    int32_t edx_3
    edx_3:eax_4 = muls.dp.d(0x4da637d, arg1[2] - arg1[1])
    int32_t edx_4 = edx_3 s>> 4
    
    if (arg2 s< (edx_4 u>> 0x1f) + edx_4)
        void* edx_6 = arg2 * 0x34c + arg1[1]
        
        if (*(edx_6 + 4) == 6)
            eax_3 = arg3[1]
            int32_t* ecx_1 = *arg3
            
            if (ecx_1 == eax_3)
            label_59fc1b:
                int32_t eax_7 = *edx_6
                int32_t var_20 = 0
                int32_t var_1c = 0
                int32_t var_18 = 0
                int32_t i = 0
                int32_t var_8_1 = 0
                
                if (arg2 s>= 0)
                    int32_t esi_1 = 0
                    
                    do
                        int32_t eax_8 = arg3[1]
                        int32_t* ecx_3 = *arg3
                        
                        if (ecx_3 == eax_8)
                            sub_5a4220(&var_20, arg1[1] + esi_1)
                        else
                            while (*ecx_3 != i)
                                ecx_3 = &ecx_3[1]
                                
                                if (ecx_3 == eax_8)
                                    break
                            
                            if (ecx_3 == eax_8)
                                sub_5a4220(&var_20, arg1[1] + esi_1)
                        
                        i += 1
                        esi_1 += 0x34c
                    while (i s<= arg2)
                
                int32_t* esi_2 = *arg3
                int32_t edi_1 = arg3[1]
                
                if (esi_2 == edi_1)
                label_59fcfe:
                    int32_t eax_23
                    int32_t edx_10
                    edx_10:eax_23 = muls.dp.d(0x4da637d, arg1[2] - arg1[1])
                    int32_t edx_11 = edx_10 s>> 4
                    
                    if (i s< (edx_11 u>> 0x1f) + edx_11)
                        int32_t edi_2 = i * 0x34c
                        int32_t edx_13
                        
                        do
                            int32_t eax_27 = arg3[1]
                            int32_t* ecx_14 = *arg3
                            
                            if (ecx_14 == eax_27)
                                sub_5a4220(&var_20, arg1[1] + edi_2)
                            else
                                while (*ecx_14 != i)
                                    ecx_14 = &ecx_14[1]
                                    
                                    if (ecx_14 == eax_27)
                                        break
                                
                                if (ecx_14 == eax_27)
                                    sub_5a4220(&var_20, arg1[1] + edi_2)
                            
                            i += 1
                            int32_t eax_30
                            int32_t edx_12
                            edx_12:eax_30 = muls.dp.d(0x4da637d, arg1[2] - arg1[1])
                            edi_2 += 0x34c
                            edx_13 = edx_12 s>> 4
                        while (i s< (edx_13 u>> 0x1f) + edx_13)
                    
                    sub_5a42e0(&arg1[1], &var_20)
                    i.b = 1
                    *arg1 += 1
                else
                    while (true)
                        if (*esi_2 s>= 0)
                            int32_t eax_15
                            int32_t edx_7
                            edx_7:eax_15 = muls.dp.d(0x4da637d, arg1[2] - arg1[1])
                            int32_t ecx_7 = *esi_2
                            int32_t edx_8 = edx_7 s>> 4
                            
                            if (ecx_7 s< (edx_8 u>> 0x1f) + edx_8)
                                *(ecx_7 * 0x34c + arg1[1] + 0x330) = eax_7
                                sub_5a4220(&var_20, *esi_2 * 0x34c + arg1[1])
                                esi_2 = &esi_2[1]
                                
                                if (esi_2 == edi_1)
                                    goto label_59fcfe
                                
                                continue
                        
                        i.b = 0
                        break
                
                sub_5a4960(&var_20)
                int32_t eax_35
                eax_35.b = i.b
                fsbase->NtTib.ExceptionList = ExceptionList
                return eax_35
            
            while (*ecx_1 != arg2)
                ecx_1 = &ecx_1[1]
                
                if (ecx_1 == eax_3)
                    break
            
            if (ecx_1 == eax_3)
                goto label_59fc1b

eax_3.b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return eax_3
