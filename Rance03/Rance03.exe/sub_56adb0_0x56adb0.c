// 函数: sub_56adb0
// 地址: 0x56adb0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c60e8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_74 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** result

if (*(arg1 + 0x10) == 0)
label_56ae14:
    result.b = 1
else
    void* esi_1 = *(arg2 + 0x1d8)
    
    if (esi_1 != 0)
        result = *(arg1 + 0x30)
        
        if (result == *(arg1 + 0x34))
        label_56ae14_1:
            result.b = 1
        else
            while (true)
                struct _EXCEPTION_REGISTRATION_RECORD* ecx = *result
                
                if (ecx != 0 && ecx->__offset(0xc).d == 2)
                    int32_t xmm0_1 = *(arg2 + 0x12c)
                    int32_t eax_3
                    int32_t edx_2
                    edx_2:eax_3 = muls.dp.d(0x1a6d01a7, *(esi_1 + 0x18) - *(esi_1 + 0x14))
                    int32_t edx_3 = edx_2 s>> 6
                    void* var_40
                    sub_56eda0(&var_40, (edx_3 u>> 0x1f) + edx_3)
                    int32_t var_4 = 0
                    int32_t eax_7
                    int32_t edx_4
                    edx_4:eax_7 = muls.dp.d(0x1a6d01a7, *(esi_1 + 0x18) - *(esi_1 + 0x14))
                    int32_t edx_5 = edx_4 s>> 6
                    void* var_4c
                    sub_56ee40(&var_4c, (edx_5 u>> 0x1f) + edx_5)
                    int32_t ebx_1 = 0
                    void* ebp_1 = var_40
                    int32_t eax_11
                    int32_t edx_6
                    edx_6:eax_11 = muls.dp.d(0x1a6d01a7, *(esi_1 + 0x18) - *(esi_1 + 0x14))
                    int32_t var_54_1 = 0
                    int32_t edx_7 = edx_6 s>> 6
                    void* ebx_5
                    
                    if ((edx_7 u>> 0x1f) + edx_7 s<= 0)
                    label_56af8c:
                        void** esi_2 = *(arg1 + 0x30)
                        ebx_5 = var_4c
                        
                        if (esi_2 == *(arg1 + 0x34))
                        label_56afe0:
                            result = sub_56b070(arg1, xmm0_1)
                            
                            if (result == 0)
                                arg2.b = 1
                            else
                                int32_t ecx_23 = result[1]
                                
                                if (sub_572e40(result, arg2, ecx_23 * 0x18 + 4 + ebp_1, 
                                        (ecx_23 << 4) + ebx_5, arg3).b == 0)
                                    arg2.b = 0
                                else
                                    arg2.b = 1
                        else
                            while (true)
                                void* ecx_21 = *esi_2
                                
                                if (ecx_21 != 0)
                                    int32_t eax_24 = *(ecx_21 + 4)
                                    
                                    if (sub_5718d0(ecx_21, xmm0_1, arg2, eax_24 * 0x18 + ebp_1, 
                                            (eax_24 << 4) + ebx_5).b == 0)
                                        break
                                
                                esi_2 = &esi_2[1]
                                
                                if (esi_2 == *(arg1 + 0x34))
                                    goto label_56afe0
                            
                            arg2.b = 0
                    else
                        void* var_50_1 = var_4c
                        int32_t var_5c_1 = 0
                        struct _EXCEPTION_REGISTRATION_RECORD** var_58_1 = ebp_1 + 0x10
                        
                        while (true)
                            if (ebx_1 s>= 0)
                                int32_t eax_16
                                int32_t edx_8
                                edx_8:eax_16 =
                                    muls.dp.d(0x1a6d01a7, *(esi_1 + 0x18) - *(esi_1 + 0x14))
                                int32_t edx_9 = edx_8 s>> 6
                                
                                if (ebx_1 s< (edx_9 u>> 0x1f) + edx_9)
                                    void* ebx_2 = *(esi_1 + 0x14)
                                    void* ebx_3 = ebx_2 + var_5c_1
                                    
                                    if (ebx_2 != neg.d(var_5c_1))
                                        struct sealengine::CEmitterPos::VTable* var_24
                                        struct sealengine::CEmitterPos::VTable** eax_19 =
                                            sub_537660(&var_24, *(ebx_3 + 0x20))
                                        *(var_58_1 - 0xc) = *(eax_19 + 4)
                                        var_58_1[-1] = eax_19[3]
                                        *var_58_1 = eax_19[4]
                                        var_58_1[1] = eax_19[5]
                                        int128_t var_34
                                        sub_56ef60(ebx_3 + 0x1cc, xmm0_1, &var_34)
                                        int128_t* ecx_17 = var_50_1
                                        var_5c_1 += 0x26c
                                        ebx_1 = var_54_1 + 1
                                        var_58_1 = &var_58_1[6]
                                        *ecx_17 = var_34
                                        var_54_1 = ebx_1
                                        var_50_1 = &ecx_17[1]
                                        int32_t eax_21
                                        int32_t edx_11
                                        edx_11:eax_21 =
                                            muls.dp.d(0x1a6d01a7, *(esi_1 + 0x18) - *(esi_1 + 0x14))
                                        int32_t edx_12 = edx_11 s>> 6
                                        
                                        if (ebx_1 s>= (edx_12 u>> 0x1f) + edx_12)
                                            goto label_56af8c
                                        
                                        continue
                            
                            ebx_5 = var_4c
                            break
                        
                        arg2.b = 0
                    
                    if (ebx_5 != 0)
                        j__free(ebx_5)
                    
                    int32_t var_4_1 = 0xffffffff
                    
                    if (ebp_1 != 0)
                        void* esi_4 = ebp_1
                        int32_t var_3c
                        
                        if (ebp_1 != var_3c)
                            do
                                (**esi_4)(0)
                                esi_4 += 0x18
                            while (esi_4 != var_3c)
                        
                        j__free(ebp_1)
                    
                    result.b = arg2.b
                    break
                
                result = &result[1]
                
                if (result == *(arg1 + 0x34))
                    goto label_56ae14_1
    else
        result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
return result
