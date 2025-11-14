// 函数: sub_436af0
// 地址: 0x436af0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_4 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b5d05
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD*** var_108
int32_t eax_2 = __security_cookie ^ &var_108
int32_t __saved_edi
int32_t var_11c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD*** edi = arg2
int32_t result = *(arg3 + 0x2c)
var_108 = edi

if (result == *(arg3 + 0x34))
label_436d27:
    result.b = 1
else
    while (true)
        void* ebx_1 = *(arg3 + 0x2c)
        void* var_f4_1 = ebx_1
        
        if (ebx_1 != *(arg3 + 0x34))
            *(arg3 + 0x2c) = ebx_1 + 0x28
        else
            ebx_1 = arg3 + 4
            var_f4_1 = ebx_1
        
        int32_t eax_7 = *(ebx_1 + 4)
        void* ebp_1 = ebx_1 + 8
        
        if (eax_7 == 1)
            int32_t ebx_2 = *(ebp_1 + 0x10)
            int32_t* edx_1
            
            if (*(ebp_1 + 0x14) u< 0x10)
                edx_1 = ebp_1
            else
                edx_1 = *ebp_1
            
            int32_t ecx = 3
            
            if (ebx_2 u< 3)
                ecx = ebx_2
            
            int32_t eax_9
            bool cond:1_1
            
            if (ecx == 0)
            label_436c05:
                
                if (ebx_2 u>= 3)
                    eax_9.b = ebx_2 != 3
                else
                    eax_9 = 0xffffffff
                
                cond:1_1 = eax_9 == 0
            else
                void* const edi_1 = &data_6db2b4
                int32_t i_1 = ecx - 4
                
                if (ecx u>= 4)
                    int32_t i
                    
                    do
                        if (*edx_1 != *edi_1)
                            goto label_436bc8
                        
                        edx_1 = &edx_1[1]
                        edi_1 += 4
                        i = i_1
                        i_1 -= 4
                    while (i u>= 4)
                
                if (i_1 == 0xfffffffc)
                    eax_9 = 0
                else
                label_436bc8:
                    eax_7.b = *edx_1
                    char temp2_1 = *edi_1
                    
                    if (eax_7.b != temp2_1)
                        eax_9 = sbb.d(eax_7, eax_7, eax_7.b u< temp2_1) | 1
                    else if (i_1 == 0xfffffffd)
                        eax_9 = 0
                    else
                        eax_7.b = *(edx_1 + 1)
                        char temp5_1 = *(edi_1 + 1)
                        
                        if (eax_7.b != temp5_1)
                            eax_9 = sbb.d(eax_7, eax_7, eax_7.b u< temp5_1) | 1
                        else if (i_1 == 0xfffffffe)
                            eax_9 = 0
                        else
                            eax_7.b = *(edx_1 + 2)
                            char temp6_1 = *(edi_1 + 2)
                            
                            if (eax_7.b != temp6_1)
                                eax_9 = sbb.d(eax_7, eax_7, eax_7.b u< temp6_1) | 1
                            else if (i_1 == 0xffffffff)
                                eax_9 = 0
                            else
                                eax_7.b = *(edx_1 + 3)
                                char temp8_1 = *(edi_1 + 3)
                                
                                if (eax_7.b == temp8_1)
                                    eax_9 = 0
                                else
                                    eax_9 = sbb.d(eax_7, eax_7, eax_7.b u< temp8_1) | 1
                
                cond:1_1 = eax_9 == 0
                
                if (eax_9 == 0)
                    goto label_436c05
            
            eax_9.b = cond:1_1
            char var_d0
            
            if (eax_9.b != 0)
            label_436cce:
                int32_t var_bc_1 = 0xf
                int32_t var_c0_1 = 0
                var_d0 = 0
                int32_t var_4 = 0
                sub_437130(arg3, &var_d0)
                int32_t var_4_1 = 0xffffffff
                
                if (var_bc_1 u>= 0x10)
                    j__free(var_d0.d)
                
                edi = var_108
            else
                int32_t edi_2 = *(ebp_1 + 0x14)
                void* ecx_1
                
                if (edi_2 u< 0x10)
                    ecx_1 = ebp_1
                else
                    ecx_1 = *ebp_1
                
                int32_t eax_10 = 5
                
                if (ebx_2 u< 5)
                    eax_10 = ebx_2
                
                int32_t eax_11 = sub_405190(eax_10, "while", ecx_1, eax_10)
                bool cond:2_1 = eax_11 == 0
                
                if (eax_11 == 0)
                    if (ebx_2 u>= 5)
                        eax_11.b = ebx_2 != 5
                    else
                        eax_11 = 0xffffffff
                    
                    cond:2_1 = eax_11 == 0
                
                eax_11.b = cond:2_1
                
                if (eax_11.b != 0)
                    goto label_436cce
                
                void* ecx_2
                
                if (edi_2 u< 0x10)
                    ecx_2 = ebp_1
                else
                    ecx_2 = *ebp_1
                
                int32_t eax_12 = 5
                
                if (ebx_2 u< 5)
                    eax_12 = ebx_2
                
                int32_t eax_13 = sub_405190(eax_12, "break", ecx_2, eax_12)
                bool cond:3_1 = eax_13 == 0
                
                if (eax_13 == 0)
                    if (ebx_2 u>= 5)
                        eax_13.b = ebx_2 != 5
                    else
                        eax_13 = 0xffffffff
                    
                    cond:3_1 = eax_13 == 0
                
                eax_13.b = cond:3_1
                
                if (eax_13.b != 0)
                    goto label_436cce
                
                if (sub_40c250(ebp_1, "continue") != 0)
                    goto label_436cce
                
                if (sub_40c250(ebp_1, "return") != 0)
                    goto label_436cce
                
                ebx_1 = var_f4_1
                edi = var_108
            label_436d6b:
                char eax_16
                
                if (*(ebx_1 + 4) == 1)
                    eax_16 = sub_40c250(ebp_1, 0x6db294)
                
                if (*(ebx_1 + 4) == 1 && eax_16 != 0)
                    int32_t var_bc_2 = 0xf
                    int32_t var_c0_2 = 0
                    var_d0 = 0
                    int32_t var_4_2 = 1
                    sub_437130(arg3, &var_d0)
                    
                    if (*(arg3 + 0x2c) == *(arg3 + 0x34))
                        ebx_1.b = 1
                    label_437118:
                        
                        if (var_bc_2 u>= 0x10)
                            j__free(var_d0.d)
                        
                        result.b = ebx_1.b
                        break
                    
                    ebx_1.b = sub_436a50(arg1 + 0x78, arg4, ebx_1, arg1 + 0x78)
                    struct _EXCEPTION_REGISTRATION_RECORD** var_100 = nullptr
                    char var_d8_1 = ebx_1.b
                    int32_t var_fc_1 = 0
                    int32_t var_f8_1 = 0
                    var_4_2.b = 2
                    
                    if (sub_437f40(arg3, &var_100) == 0)
                        goto label_4370af
                    
                    if (ebx_1.b == 0)
                        void* ecx_21 = *(arg3 + 0x2c)
                        
                        if (ecx_21 != *(arg3 + 0x34))
                            *(arg3 + 0x2c) = ecx_21 + 0x28
                        else
                            ecx_21 = arg3 + 4
                        
                        char eax_39
                        
                        if (*(ecx_21 + 4) == 1)
                            eax_39 = sub_40c250(ecx_21 + 8, "else")
                        
                        if (*(ecx_21 + 4) != 1 || eax_39 == 0)
                            int32_t eax_50 = *(arg3 + 0x2c)
                            
                            if (eax_50 != *(arg3 + 0x30))
                                *(arg3 + 0x2c) = eax_50 - 0x28
                        else
                            void* eax_40 = sub_439a50(arg3)
                            char eax_41
                            
                            if (*(eax_40 + 4) == 1)
                                eax_41 = sub_40c250(eax_40 + 8, 0x6db294)
                            
                            if (*(eax_40 + 4) != 1 || eax_41 == 0)
                                struct _EXCEPTION_REGISTRATION_RECORD** var_f0 = nullptr
                                int32_t var_ec_1 = 0
                                int32_t var_e8_1 = 0
                                var_4_2.b = 6
                                
                                if (sub_437f40(arg3, &var_f0) == 0)
                                    var_4_2.b = 2
                                    ebx_1.b = 0
                                    sub_435c20(&var_f0)
                                    var_4_2.b = 1
                                    sub_435c20(&var_100)
                                    goto label_437118
                                
                                struct _EXCEPTION_REGISTRATION_RECORD** edi_4 = var_f0
                                struct advengine::CTokenList::VTable* var_58
                                sub_439990(&var_58, edi_4, &edi_4[(var_ec_1 - edi_4) s/ 0x28 * 0xa])
                                edi = var_108
                                var_4_2.b = 7
                                struct advengine::CTokenList::VTable** ecx_31 = &var_58
                                
                                if (sub_436af0(edi, &var_58, arg4, 1) == 0)
                                    ebx_1.b = 0
                                    sub_4399f0(ecx_31)
                                    var_4_2.b = 2
                                    sub_435c20(&var_f0)
                                    var_4_2.b = 1
                                    sub_435c20(&var_100)
                                    goto label_437118
                                
                                sub_4399f0(ecx_31)
                                var_4_2.b = 2
                                sub_435c20(&var_f0)
                    else
                        struct _EXCEPTION_REGISTRATION_RECORD** edi_3 = var_100
                        struct advengine::CTokenList::VTable* var_a0
                        sub_439990(&var_a0, edi_3, &edi_3[(var_fc_1 - edi_3) s/ 0x28 * 0xa])
                        edi = var_108
                        var_4_2.b = 3
                        
                        if (sub_436af0(edi, &var_a0, arg4, var_d8_1.d) == 0)
                        label_4370a6:
                            sub_4399f0(&var_a0)
                        label_4370af:
                            var_4_2.b = 1
                            ebx_1.b = 0
                            sub_435c20(&var_100)
                            goto label_437118
                        
                        if (*(arg3 + 0x2c) != *(arg3 + 0x34))
                            while (true)
                                if (sub_436ad0(sub_439a50(arg3)) == 0)
                                    goto label_436f40
                                
                                int32_t eax_30 = *(arg3 + 0x2c)
                                
                                if (eax_30 != *(arg3 + 0x34))
                                    *(arg3 + 0x2c) = eax_30 + 0x28
                                
                                if (sub_436ab0(sub_439a50(arg3)) != 0)
                                    int32_t eax_34 = *(arg3 + 0x2c)
                                    
                                    if (eax_34 != *(arg3 + 0x34))
                                        *(arg3 + 0x2c) = eax_34 + 0x28
                                    
                                    int32_t var_a4_1 = 0xf
                                    int32_t var_a8_1 = 0
                                    char var_b8 = 0
                                    var_4_2.b = 4
                                    sub_437130(arg3, &var_b8)
                                    sub_401fb0(&var_b8)
                                
                                struct _EXCEPTION_REGISTRATION_RECORD** var_e4 = nullptr
                                int32_t var_e0_1 = 0
                                int32_t var_dc_1 = 0
                                var_4_2.b = 5
                                var_4_2.b = 3
                                struct _EXCEPTION_REGISTRATION_RECORD*** ecx_19 = &var_e4
                                
                                if (sub_437f40(arg3, &var_e4) == 0)
                                    sub_435c20(ecx_19)
                                    break
                                
                                sub_435c20(ecx_19)
                                
                                if (*(arg3 + 0x2c) == *(arg3 + 0x34))
                                    goto label_436f40
                            
                            goto label_4370a6
                        
                    label_436f40:
                        sub_4399f0(&var_a0)
                    
                    var_4_2.b = 1
                    sub_435c20(&var_100)
                    int32_t var_4_3 = 0xffffffff
                    sub_401fb0(&var_d0)
                else if (arg5 != 0)
                    sub_437860(edi, ebx_1)
        else if (eax_7 != 0xf && eax_7 != 0x10)
            goto label_436d6b
        
        if (*(arg3 + 0x2c) == *(arg3 + 0x34))
            goto label_436d27

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_108)
return result
