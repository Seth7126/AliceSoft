// 函数: sub_71cf97
// 地址: 0x71cf97
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t edi
int32_t var_94 = edi
void* eax_2 = sub_714cce()
int32_t ecx = *(eax_2 + 0x64)
int32_t ecx_1 = neg.d(ecx)
void var_88
int32_t eax_3 = ___acrt_GetLocaleInfoEx@16(arg1, 
    (sbb.d(ecx_1, ecx_1, ecx != 0) & 0xfffff005) + 0x1002, &var_88, 0x40)
int32_t result

if (eax_3 != 0)
    int32_t var_8c_1 = 0
    
    if (__wcsicmp(*(eax_2 + 0x54), &var_88) != 0)
    label_71d0f4:
        
        if ((*(eax_2 + 0x58) & 0x300) == 0x300)
            result = not.d(*(eax_2 + 0x58) u>> 2) & 1
        else
            int32_t ecx_11 = *(eax_2 + 0x60)
            int32_t ecx_12 = neg.d(ecx_11)
            
            if (___acrt_GetLocaleInfoEx@16(arg1, 
                    (sbb.d(ecx_12, ecx_12, ecx_11 != 0) & 0xfffff002) + 0x1001, &var_88, 0x40) != 0)
                if (__wcsicmp(*(eax_2 + 0x50), &var_88) != 0)
                    result = not.d(*(eax_2 + 0x58) u>> 2) & 1
                else
                    *(eax_2 + 0x58) |= 0x200
                    int32_t edx_2 = *(eax_2 + 0x58)
                    uint32_t eax_20
                    int16_t* ecx_17
                    void* edx_4
                    void* ebx_1
                    
                    if (*(eax_2 + 0x60) == 0)
                        int16_t* ecx_20
                        void* ebx_2
                        
                        if (*(eax_2 + 0x5c) != 0)
                            ecx_20 = *(eax_2 + 0x50)
                            ebx_2 = &ecx_20[1]
                            
                            do
                                eax_20.w = *ecx_20
                                ecx_20 = &ecx_20[1]
                            while (eax_20.w != 0)
                        
                        if (*(eax_2 + 0x5c) == 0 || (ecx_20 - ebx_2) s>> 1 != *(eax_2 + 0x5c))
                            *(eax_2 + 0x58) = edx_2 | 0x100
                            edx_4 = eax_2 + 0x2a0
                            
                            if (*edx_4 == 0)
                                ecx_17 = arg1
                                ebx_1 = &ecx_17[1]
                                
                                do
                                    eax_20.w = *ecx_17
                                    ecx_17 = &ecx_17[1]
                                while (eax_20.w != 0)
                                
                                goto label_71d189
                            
                            result = not.d(*(eax_2 + 0x58) u>> 2) & 1
                        else if (_TestDefaultCountry(arg1) != 0)
                        label_71d1fc:
                            *(eax_2 + 0x58) |= 0x100
                            edx_4 = eax_2 + 0x2a0
                            
                            if (*edx_4 == 0)
                                ecx_17 = arg1
                                ebx_1 = &ecx_17[1]
                                int16_t i
                                
                                do
                                    i = *ecx_17
                                    ecx_17 = &ecx_17[1]
                                while (i != 0)
                                goto label_71d189
                            
                            result = not.d(*(eax_2 + 0x58) u>> 2) & 1
                        else
                            int16_t* ebx_3 = *(eax_2 + 0x50)
                            int32_t eax_23
                            
                            do
                                eax_23.w = *ebx_3
                                ebx_3 = &ebx_3[1]
                            while (eax_23.w != 0)
                            
                            if (_GetPrimaryLen(*(eax_2 + 0x50)) != (ebx_3 - &ebx_3[1]) s>> 1)
                                goto label_71d1fc
                            
                            result = not.d(*(eax_2 + 0x58) u>> 2) & 1
                    else
                        *(eax_2 + 0x58) = edx_2 | 0x100
                        edx_4 = eax_2 + 0x2a0
                        
                        if (*edx_4 != 0)
                            result = not.d(*(eax_2 + 0x58) u>> 2) & 1
                        else
                            ecx_17 = arg1
                            ebx_1 = &ecx_17[1]
                            
                            do
                                eax_20.w = *ecx_17
                                ecx_17 = &ecx_17[1]
                            while (eax_20.w != 0)
                            
                        label_71d189:
                            int32_t var_9c_7 = ((ecx_17 - ebx_1) s>> 1) + 1
                            int16_t* var_a0_8 = arg1
                            int32_t var_a4_5 = 0x55
                            void* var_a8_4 = edx_4
                            
                            if (sub_713d17() != 0)
                                int32_t var_ac
                                __builtin_memset(&var_ac, 0, 0x14)
                                __invoke_watson()
                                noreturn
                            
                            result = not.d(*(eax_2 + 0x58) u>> 2) & 1
            else
                *(eax_2 + 0x58) = 0
                result = 1
    else
        int32_t eax_5 = *(eax_2 + 0x60)
        int32_t eax_6 = neg.d(eax_5)
        
        if (___acrt_GetLocaleInfoEx@16(arg1, 
                (sbb.d(eax_6, eax_6, eax_5 != 0) & 0xfffff002) + 0x1001, &var_88, 0x40) != 0)
            int16_t* ecx_7
            void* edx_1
            
            if (__wcsicmp(*(eax_2 + 0x50), &var_88) == 0)
                *(eax_2 + 0x58) |= 0x304
                ecx_7 = arg1
                edx_1 = &ecx_7[1]
                uint32_t eax_11
                
                do
                    eax_11.w = *ecx_7
                    ecx_7 = &ecx_7[1]
                while (eax_11.w != 0)
            label_71d06a:
                int32_t var_9c_3 = ((ecx_7 - edx_1) s>> 1) + 1
                int16_t* var_a0_4 = arg1
                int32_t var_a4_2 = 0x55
                void* var_a8_2 = eax_2 + 0x2a0
                
                if (sub_713d17() == 0)
                    goto label_71d0f4
                
                int32_t var_ac_1
                __builtin_memset(&var_ac_1, 0, 0x14)
                __invoke_watson()
                noreturn
            
            if ((*(eax_2 + 0x58) & 2) != 0)
                goto label_71d0f4
            
            uint32_t eax_15
            
            if (*(eax_2 + 0x5c) != 0)
                eax_15 = __wcsnicmp(*(eax_2 + 0x50), &var_88, *(eax_2 + 0x5c))
            
            if (*(eax_2 + 0x5c) != 0 && eax_15 == 0)
                *(eax_2 + 0x58) |= 2
                ecx_7 = arg1
                edx_1 = &ecx_7[1]
                
                do
                    eax_15.w = *ecx_7
                    ecx_7 = &ecx_7[1]
                while (eax_15.w != 0)
                
                goto label_71d06a
            
            if ((*(eax_2 + 0x58) & 1) != 0)
                goto label_71d0f4
            
            if (_TestDefaultCountry(arg1) == 0)
                goto label_71d0f4
            
            *(eax_2 + 0x58) |= 1
            ecx_7 = arg1
            edx_1 = &ecx_7[1]
            int32_t eax_16
            
            do
                eax_16.w = *ecx_7
                ecx_7 = &ecx_7[1]
            while (eax_16.w != 0)
            goto label_71d06a
        
        *(eax_2 + 0x58) = 0
        result = 1
else
    *(eax_2 + 0x58) &= eax_3
    result = eax_3 + 1

@__security_check_cookie@4(eax_1 ^ &__saved_ebp)
return result
