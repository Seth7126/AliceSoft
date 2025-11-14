// 函数: sub_5ce170
// 地址: 0x5ce170
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6ca1bb
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_1e0
int32_t eax_2 = __security_cookie ^ &var_1e0
int32_t __saved_edi
int32_t eax_4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* eax_5 = arg1[0x82]
int32_t ebx = *eax_5
arg1[0x82] = &eax_5[1]
int32_t ebp = eax_5[1]
arg1[0x82] = &eax_5[2]
int32_t ecx_1 = arg1[0x34] - arg1[0x33]
int32_t eax_8
int32_t edx
edx:eax_8 = muls.dp.d(0x66666667, ecx_1)
int32_t edx_1 = edx s>> 4
int32_t eax_11 = ecx_1 s/ 0x28
int32_t* result

if (ebx u>= eax_11)
label_5ce4eb:
    int32_t var_1f8_15 = 0x6e9820
    result = sub_5c2400(eax_11, edx_1, ecx_1, arg1, "CALLHLL")
else
    edx_1 = ebx * 5
    eax_11 = arg1[0x33] + (edx_1 << 3)
    
    if (eax_11 == 0)
        goto label_5ce4eb
    
    float eax_13
    int32_t* ecx_3
    int32_t edx_2
    eax_13, ecx_3, edx_2 = sub_5bd9f0(&arg1[0x12], ebx, ebp)
    
    if (eax_13 != 0)
        int32_t ecx_6 = (*(eax_13 i+ 0x24) - *(eax_13 i+ 0x20)) s>> 2
        var_1e0 = ecx_6
        int32_t var_1d4 = 0
        int32_t var_1d0 = 0
        int32_t var_1d8 = 0
        void var_1b0
        int32_t var_148[0x1a]
        int32_t var_e0[0x1a]
        int32_t var_78[0x1a]
        result, edx_1 = sub_5c1f80(arg1, ecx_6, eax_13 i+ 0x20, &var_148, &var_1d4, &var_e0, 
            &var_1d0, &var_78, &var_1d8, &var_1b0)
        
        if (result.b != 0)
            result.b = arg1[0x4ae].b
            
            if (result.b != 0)
                edx_1 = sub_5b34e0(*(arg1[0x4a3] + ebx * 0xc) + ebp * 0x38)
            
            eax_11 = *(eax_11 + 0x24)
            int32_t* result_1
            uint32_t ecx_11
            
            if (eax_11 == 0)
                ecx_1 = *(eax_13 i+ 0x2c)
                
                if (ecx_1 != 0)
                    long double x87_r0
                    result, ecx_11 =
                        sub_5b2120(&var_1b0, var_1e0, ecx_1, x87_r0, &var_1b0, eax_13, eax_4)
                    result_1 = result
                label_5ce32a:
                    ecx_11.b = arg1[0x4ae].b
                    
                    if (ecx_11.b != 0)
                        ecx_11 = sub_5b3590(*(arg1[0x4a3] + ebx * 0xc) + ebp * 0x38)
                        result = result_1
                    
                    int32_t edx_7 = *(eax_13 i+ 0x1c)
                    int32_t var_1f8_14
                    
                    if (edx_7 u> 0x2f)
                        var_1f8_14 = edx_7
                        result = sub_5c24e0(result, edx_7, ecx_11, arg1, 0x6e98e8)
                    else
                        ecx_11 = zx.d(lookup_table_5ce53c[edx_7])
                        
                        switch (ecx_11)
                            case 0
                                goto label_5ce424
                            case 1
                                result = sub_5ddf10(&arg1[0x88], result)
                            label_5ce424:
                                int32_t ebx_1 = var_1d4
                                
                                if (ebx_1 s<= 0)
                                label_5ce44b:
                                    int32_t ebx_2 = var_1d0
                                    int32_t edi_3 = 0
                                    
                                    if (ebx_2 s<= 0)
                                    label_5ce47b:
                                        int32_t ebx_3 = var_1d8
                                        int32_t edi_4 = 0
                                        
                                        if (ebx_3 s> 0)
                                            do
                                                int32_t* ecx_29
                                                int32_t edx_12
                                                result, ecx_29, edx_12 =
                                                    sub_5d5e80(&arg1[0x5b], var_78[edi_4])
                                                
                                                if (result.b == 0)
                                                    result = sub_5c24e0(result, edx_12, ecx_29, 
                                                        arg1, 0x6e9a18)
                                                    break
                                                
                                                edi_4 += 1
                                            while (edi_4 s< ebx_3)
                                    else
                                        while (true)
                                            int32_t* ecx_27
                                            int32_t edx_11
                                            result, ecx_27, edx_11 =
                                                sub_5d5e80(&arg1[0x5b], var_e0[edi_3])
                                            
                                            if (result.b == 0)
                                                result = sub_5c24e0(result, edx_11, ecx_27, arg1, 
                                                    0x6e9988)
                                                break
                                            
                                            edi_3 += 1
                                            
                                            if (edi_3 s>= ebx_2)
                                                goto label_5ce47b
                                else
                                    int32_t edi_2 = 0
                                    
                                    while (true)
                                        int32_t* ecx_25
                                        int32_t edx_10
                                        result, ecx_25, edx_10 =
                                            sub_5d5e80(&arg1[0x5b], var_148[edi_2])
                                        
                                        if (result.b == 0)
                                            result =
                                                sub_5c24e0(result, edx_10, ecx_25, arg1, 0x6e99d0)
                                            break
                                        
                                        edi_2 += 1
                                        
                                        if (edi_2 s>= ebx_1)
                                            goto label_5ce44b
                            case 2
                                int32_t var_1b4_1 = 0xf
                                int32_t var_1b8_1 = 0
                                char var_1c8 = 0
                                int32_t var_4 = 0
                                
                                if (result != 0)
                                    char* eax_24 = (**result)(eax_4)
                                    
                                    if (eax_24 != 0)
                                        sub_402670(&var_1c8, eax_24)
                                
                                int32_t* eax_25
                                int32_t* ecx_20
                                int32_t edx_9
                                eax_25, ecx_20, edx_9 = sub_5d62c0(&arg1[0x5b], &var_1c8, &var_1e0)
                                
                                if (eax_25.b != 0)
                                    sub_5ddf10(&arg1[0x88], var_1e0)
                                    int32_t var_4_1 = 0xffffffff
                                    result = sub_401fb0(&var_1c8)
                                    goto label_5ce424
                                
                                sub_5c24e0(eax_25, edx_9, ecx_20, arg1, 0x6e9920)
                                result = sub_401fb0(&var_1c8)
                            case 3
                                result = sub_5ddf10(&arg1[0x88], zx.d(result.b))
                                goto label_5ce424
                            case 4
                                var_1f8_14 = edx_7
                                result = sub_5c24e0(result, edx_7, ecx_11, arg1, 0x6e98e8)
                else
                    int32_t var_1f8_4 = 0x6e98c4
                    result = sub_5c2400(eax_11, edx_1, ecx_1, arg1, "CALLHLL")
            else
                char eax_18
                int32_t edx_4
                eax_18, edx_4, ecx_11 = eax_11(ebp, &var_1b0, &result_1, eax_4)
                
                if (eax_18 != 0)
                    result = result_1
                    goto label_5ce32a
                
                void* eax_19 = eax_13 i+ 4
                
                if (*(eax_13 i+ 0x18) u>= 0x10)
                    eax_19 = *eax_19
                
                void* var_1f8_3 = eax_19
                int32_t var_1fc_4 = 0x6e9894
                result = sub_5c2400(eax_19, edx_4, ecx_11, arg1, "CALLHLL")
    else
        result = sub_5c24e0(eax_13, edx_2, ecx_3, arg1, 0x6e9850)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_1e0)
return result
