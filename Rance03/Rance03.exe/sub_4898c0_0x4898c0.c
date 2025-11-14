// 函数: sub_4898c0
// 地址: 0x4898c0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_3 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6bacd3
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** result

if (*(arg1 + 0x10) == 0)
label_489f35:
    result.b = 0
else
    result = *(arg1 + 0x14)
    
    if (result == 0)
    label_489f35_1:
        result.b = 0
    else
        int32_t* i_4
        int32_t* i = i_4
        
        if (i == 0)
        label_489f35_2:
            result.b = 0
        else
            int32_t esi_1 = result[0xd]
            int32_t eax_3 = result[0x21]
            struct _EXCEPTION_REGISTRATION_RECORD** result_1
            void* ecx_5
            
            if (eax_3 == 1)
                sub_4894f0(arg1)
                result_1 = nullptr
                int32_t var_14_1 = 0
                int32_t var_10_1 = 0
                int32_t var_4 = 0
                
                do
                    int32_t esi_2 = *i
                    int32_t* i_6 = (*(esi_2 + 8))((*(esi_2 + 0x10))(eax_2))
                    i_4 = i_6
                    
                    if (i_6 == 0)
                        goto label_489f24
                    
                    (**i_6)()
                    sub_4158d0(&result_1, &i_4)
                    i = (*(*i + 0xc))()
                while (i != 0)
                
                ecx_5 = arg1 + 0x40
            else if (eax_3 != 2)
                int32_t eax_15
                int32_t edx_5
                edx_5:eax_15 = muls.dp.d(0x2aaaaaab, *(arg1 + 0x44) - *(arg1 + 0x40))
                int32_t edx_6 = edx_5 s>> 1
                
                if (esi_1 s<= (edx_6 u>> 0x1f) + edx_6)
                    int32_t* ebx_3 = *(arg1 + 0x40)
                    
                    for (int32_t* i_1 = *ebx_3; i_1 != ebx_3[1]; i_1 = &i_1[1])
                        (*(**i_1 + 4))(eax_2)
                    
                    sub_48c0c0(arg1 + 0x40, &i_4, *(arg1 + 0x40))
                
                result_1 = nullptr
                int32_t var_14_3 = 0
                int32_t var_10_3 = 0
                int32_t var_4_2 = 2
                void* eax_20 = *(arg1 + 0x14)
                int32_t ecx_19 = *(eax_20 + 0x88)
                int32_t ebp_1 = *(eax_20 + 0xa0)
                int32_t ebx_4 = *(eax_20 + 0xa4)
                int32_t ecx_20 = *(eax_20 + 0x8c)
                int32_t ecx_21 = *(eax_20 + 0x90)
                int32_t ecx_22 = *(eax_20 + 0x94)
                int32_t ecx_23 = *(eax_20 + 0x98)
                int32_t ecx_24 = *(eax_20 + 0x9c)
                int32_t ecx_25 = *(eax_20 + 0xa8)
                int32_t eax_21 = *(eax_20 + 0xac)
                int32_t var_40_1 = ebp_1
                int32_t var_44_1 = ebx_4
                char var_4c
                
                do
                    int32_t esi_4 = *i
                    void* eax_23 = (*(esi_4 + 8))((*(esi_4 + 0x10))(eax_2))
                    
                    if (eax_23 == 0)
                        goto label_489f24
                    
                    int32_t* edx_7 = sub_69adc6(0x80)
                    int32_t* var_1c_1 = edx_7
                    var_4_2.b = 3
                    struct IInterface::partsengine::CFlatKeyDataGraphic::VTable** i_8
                    
                    if (edx_7 == 0)
                        i_8 = nullptr
                    else
                        if (ecx_21 == 0)
                            i_4 = 0xff
                        else
                            i_4 = *(eax_23 + 0x7c)
                        
                        int32_t* var_64_1
                        
                        if (ebx_4 == 0)
                            var_64_1 = nullptr
                        else
                            var_64_1 = *(eax_23 + 0x74)
                        
                        int32_t var_60_1
                        int32_t var_5c_1
                        int32_t* var_58_1
                        
                        if (ebp_1 == 0)
                            var_60_1 = 0xff
                            var_5c_1 = 0xff
                            var_58_1 = 0xff
                        else
                            var_60_1 = *(eax_23 + 0x64)
                            var_5c_1 = *(eax_23 + 0x60)
                            var_58_1 = *(eax_23 + 0x5c)
                        
                        int32_t var_54_1
                        int32_t* var_50_1
                        int32_t ebp_2
                        
                        if (ecx_24 == 0)
                            ebp_2 = 0
                            var_54_1 = 0
                            var_50_1 = nullptr
                        else
                            ebp_2 = *(eax_23 + 0x70)
                            var_54_1 = *(eax_23 + 0x6c)
                            var_50_1 = *(eax_23 + 0x68)
                        
                        if (eax_21 == 0)
                            var_4c = 0
                        else
                            int32_t* eax_24
                            eax_24.b = *(eax_23 + 0x58)
                            var_4c.d = eax_24
                        
                        if (ecx_25 == 0)
                            ebx_4.b = 0
                        else
                            ebx_4.b = *(eax_23 + 0x59)
                        
                        int32_t eax_28
                        int32_t ecx_28
                        
                        if (ecx_20 == 0)
                            eax_28 = 0
                            ecx_28 = 0
                        else
                            eax_28 = *(eax_23 + 0x50)
                            ecx_28 = *(eax_23 + 0x4c)
                        
                        int32_t xmm4_1
                        int32_t xmm5_1
                        int32_t xmm6_1
                        
                        if (ecx_22 == 0)
                            xmm4_1 = (zx.o(0)).d
                            xmm5_1 = (zx.o(0)).d
                            xmm6_1 = (zx.o(0)).d
                        else
                            xmm4_1 = *(eax_23 + 0x48)
                            xmm5_1 = *(eax_23 + 0x44)
                            xmm6_1 = *(eax_23 + 0x40)
                        
                        int32_t xmm0_1
                        int128_t xmm3_1
                        
                        if (ecx_23 == 0)
                            xmm0_1 = 0x3f800000
                            xmm3_1 = 0x3f800000
                        else
                            xmm0_1 = *(eax_23 + 0x2c)
                            xmm3_1 = *(eax_23 + 0x28)
                        
                        int128_t xmm1_1
                        int128_t xmm2_1
                        
                        if (ecx_19 == 0)
                            xmm2_1 = zx.o(0)
                            xmm1_1 = zx.o(0)
                        else
                            xmm2_1 = *(eax_23 + 0x24)
                            xmm1_1 = *(eax_23 + 0x20)
                        
                        int32_t* i_5 = i_4
                        int32_t var_84_3 = *(eax_23 + 0x78)
                        int32_t* var_88_1 = var_64_1
                        int32_t var_8c_1 = var_60_1
                        int32_t var_90_1 = var_5c_1
                        int32_t* var_94_1 = var_58_1
                        int32_t var_98_1 = ebp_2
                        int32_t var_9c_1 = var_54_1
                        int32_t* var_a0_1 = var_50_1
                        int32_t var_a4_1 = var_4c.d
                        int32_t var_a8_1 = ebx_4
                        int32_t var_ac_1 = ecx_28
                        int32_t var_b0_1 = eax_28
                        int32_t var_b4_1 = ecx_28
                        int32_t var_b8_1 = xmm4_1
                        int32_t var_bc_1 = xmm5_1
                        int32_t var_c0_1 = xmm6_1
                        i_8 = sub_4910d0(edx_7, xmm1_1, xmm2_1, xmm3_1, xmm0_1)
                        ebx_4 = var_44_1
                        ebp_1 = var_40_1
                    
                    var_4_2.b = 2
                    i_4 = i_8
                    sub_4158d0(&result_1, &i_4)
                    i = (*(*i + 0xc))()
                while (i != 0)
                
                int32_t* i_2 = *(arg1 + 0x40)
                
                if (i_2 != *(arg1 + 0x44))
                    struct _EXCEPTION_REGISTRATION_RECORD** result_2 = result_1
                    void* ebx_5 = arg1
                    int32_t ecx_35 = (var_14_3 - result_2) s>> 2
                    int32_t var_1c_2 = ecx_35
                    
                    do
                        int32_t ebp_3 = 0
                        
                        if (ecx_35 s> 0)
                            do
                                void* edx_8 = result_2[ebp_3]
                                void* ecx_37 = *(*i_2 + (ebp_3 << 2))
                                int32_t ebx_7
                                
                                if (ecx_21 == 1)
                                    ebx_7 = *(edx_8 + 0x7c)
                                else
                                    ebx_7 = *(ecx_37 + 0x7c)
                                
                                int32_t ebx_8
                                
                                if (var_44_1 == 1)
                                    ebx_8 = *(edx_8 + 0x74)
                                else
                                    ebx_8 = *(ecx_37 + 0x74)
                                
                                int32_t var_50_2
                                int32_t* i_9
                                
                                if (var_40_1 == 1)
                                    var_50_2 = *(edx_8 + 0x64)
                                    var_4c.d = *(edx_8 + 0x60)
                                    i_9 = *(edx_8 + 0x5c)
                                else
                                    var_50_2 = *(ecx_37 + 0x64)
                                    var_4c.d = *(ecx_37 + 0x60)
                                    i_9 = *(ecx_37 + 0x5c)
                                
                                i_4 = i_9
                                int32_t var_5c_2
                                int32_t var_58_2
                                int32_t ebx_15
                                
                                if (ecx_24 == 1)
                                    var_5c_2 = *(edx_8 + 0x70)
                                    var_58_2 = *(edx_8 + 0x6c)
                                    ebx_15 = *(edx_8 + 0x68)
                                else
                                    var_5c_2 = *(ecx_37 + 0x70)
                                    var_58_2 = *(ecx_37 + 0x6c)
                                    ebx_15 = *(ecx_37 + 0x68)
                                
                                int32_t var_54_2 = ebx_15
                                
                                if (eax_21 == 1)
                                    ebx_15:1.b = *(edx_8 + 0x58)
                                else
                                    ebx_15:1.b = *(ecx_37 + 0x58)
                                
                                if (ecx_25 == 1)
                                    ebx_15.b = *(edx_8 + 0x59)
                                else
                                    ebx_15.b = *(ecx_37 + 0x59)
                                
                                int32_t esi_6
                                int32_t edi_2
                                
                                if (ecx_20 == 1)
                                    esi_6 = *(edx_8 + 0x50)
                                    edi_2 = *(edx_8 + 0x4c)
                                else
                                    esi_6 = *(ecx_37 + 0x50)
                                    edi_2 = *(ecx_37 + 0x4c)
                                
                                int32_t xmm4_2
                                int32_t xmm5_2
                                int32_t xmm6_2
                                
                                if (ecx_22 == 1)
                                    xmm4_2 = *(edx_8 + 0x48)
                                    xmm5_2 = *(edx_8 + 0x44)
                                    xmm6_2 = *(edx_8 + 0x40)
                                else
                                    xmm4_2 = *(ecx_37 + 0x48)
                                    xmm5_2 = *(ecx_37 + 0x44)
                                    xmm6_2 = *(ecx_37 + 0x40)
                                
                                int32_t xmm2_2
                                int32_t xmm3_2
                                
                                if (ecx_23 == 1)
                                    xmm2_2 = *(edx_8 + 0x2c)
                                    xmm3_2 = *(edx_8 + 0x28)
                                else
                                    xmm2_2 = *(ecx_37 + 0x2c)
                                    xmm3_2 = *(ecx_37 + 0x28)
                                
                                int32_t xmm0_2
                                int32_t xmm1_2
                                
                                if (ecx_19 == 1)
                                    xmm0_2 = *(edx_8 + 0x24)
                                    xmm1_2 = *(edx_8 + 0x20)
                                else
                                    xmm0_2 = *(ecx_37 + 0x24)
                                    xmm1_2 = *(ecx_37 + 0x20)
                                
                                ebp_3 += 1
                                *(ecx_37 + 0x5c) = i_4
                                *(ecx_37 + 0x60) = var_4c.d
                                *(ecx_37 + 0x64) = var_50_2
                                *(ecx_37 + 0x68) = var_54_2
                                *(ecx_37 + 0x6c) = var_58_2
                                *(ecx_37 + 0x70) = var_5c_2
                                *(ecx_37 + 0x74) = ebx_8
                                *(ecx_37 + 0x7c) = ebx_7
                                result_2 = result_1
                                *(ecx_37 + 0x20) = xmm1_2
                                *(ecx_37 + 0x24) = xmm0_2
                                *(ecx_37 + 0x28) = xmm3_2
                                *(ecx_37 + 0x2c) = xmm2_2
                                *(ecx_37 + 0x30) = 0
                                *(ecx_37 + 0x34) = 0
                                *(ecx_37 + 0x38) = 0
                                *(ecx_37 + 0x3c) = 0
                                *(ecx_37 + 0x40) = xmm6_2
                                *(ecx_37 + 0x44) = xmm5_2
                                *(ecx_37 + 0x48) = xmm4_2
                                *(ecx_37 + 0x4c) = edi_2
                                *(ecx_37 + 0x50) = esi_6
                                *(ecx_37 + 0x54) = 1
                                *(ecx_37 + 0x58) = ebx_15:1.b
                                *(ecx_37 + 0x59) = ebx_15.b
                                ecx_35 = var_1c_2
                            while (ebp_3 s< ecx_35)
                            
                            ebx_5 = arg1
                        
                        i_2 = &i_2[3]
                    while (i_2 != *(ebx_5 + 0x44))
                
                ecx_5 = arg1 + 0x40
            else
                int32_t eax_7
                int32_t edx_2
                edx_2:eax_7 = muls.dp.d(0x2aaaaaab, *(arg1 + 0x44) - *(arg1 + 0x40))
                int32_t edx_3 = edx_2 s>> 1
                
                if (esi_1 s<= (edx_3 u>> 0x1f) + edx_3)
                    int32_t* ebx_1 = *(arg1 + 0x40)
                    
                    for (int32_t* i_3 = *ebx_1; i_3 != ebx_1[1]; i_3 = &i_3[1])
                        (*(**i_3 + 4))(eax_2)
                    
                    sub_48c0c0(arg1 + 0x40, &i_4, *(arg1 + 0x40))
                
                result_1 = nullptr
                int32_t var_14_2 = 0
                int32_t var_10_2 = 0
                int32_t var_4_1 = 1
                
                do
                    int32_t esi_3 = *i
                    int32_t* i_7 = (*(esi_3 + 8))((*(esi_3 + 0x10))(eax_2))
                    i_4 = i_7
                    
                    if (i_7 == 0)
                    label_489f24:
                        result = result_1
                        
                        if (result != 0)
                            j__free(result)
                        
                        goto label_489f35_2
                    
                    (**i_7)()
                    sub_4158d0(&result_1, &i_4)
                    i = (*(*i + 0xc))()
                while (i != 0)
                
                ecx_5 = arg1 + 0x40
            
            sub_48c000(ecx_5, &result_1)
            result = result_1
            
            if (result != 0)
                j__free(result)
            
            result.b = 1

fsbase->NtTib.ExceptionList = ExceptionList
return result
