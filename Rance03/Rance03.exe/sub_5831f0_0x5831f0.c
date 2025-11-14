// 函数: sub_5831f0
// 地址: 0x5831f0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c7418
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_2c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** eax_3

if (*(arg1 + 0x75) != 0)
    void* arg_4
    void* edi_1 = arg_4
    
    if (*(edi_1 + 0x75) != 0 && *(arg1 + 0x1c) == *(edi_1 + 0x1c)
            && *(arg1 + 0x20) == *(edi_1 + 0x20))
        eax_3.b = *(arg1 + 0x24)
        
        if (eax_3.b == *(edi_1 + 0x24))
            eax_3.b = *(arg1 + 0x25)
            
            if (eax_3.b == *(edi_1 + 0x25))
                eax_3.b = *(arg1 + 0x26)
                
                if (eax_3.b == *(edi_1 + 0x26))
                    eax_3.b = *(arg1 + 0x27)
                    
                    if (eax_3.b == *(edi_1 + 0x27))
                        int32_t** var_1c
                        int32_t ecx_3 = sub_4ccd80(&var_1c)
                        int32_t var_4 = 0
                        int32_t** var_14
                        
                        for (int32_t i = *(arg1 + 0x34); i != *(arg1 + 0x38); i += 4)
                            uint32_t var_30_1 = zx.d(data_75dd2a)
                            int32_t i_2 = i
                            ecx_3 = sub_4ce350(&var_1c, &var_14, ecx_3)
                        
                        for (int32_t i_1 = *(edi_1 + 0x34); i_1 != *(edi_1 + 0x38); i_1 += 4)
                            uint32_t var_30_2 = zx.d(data_75dd2a)
                            int32_t i_3 = i_1
                            ecx_3 = sub_4ce350(&var_1c, &var_14, ecx_3)
                        
                        int32_t var_18
                        void* ebx
                        
                        if (var_18 s> arg2)
                            ebx.b = 0
                        else
                            int32_t eax_6
                            eax_6.b = *(arg1 + 0x40)
                            
                            if (eax_6.b != *(edi_1 + 0x40))
                                ebx.b = 0
                            else
                                eax_6.b = *(arg1 + 0x41)
                                
                                if (eax_6.b != *(edi_1 + 0x41))
                                    ebx.b = 0
                                else
                                    float xmm0_1 = *(arg1 + 0x44)
                                    float temp1_1 = *(edi_1 + 0x44)
                                    xmm0_1 - temp1_1
                                    eax_6:1.b = (xmm0_1 == temp1_1 ? 1 : 0) << 6
                                        | (is_unordered.d(xmm0_1, temp1_1) ? 1 : 0) << 2
                                        | (xmm0_1 < temp1_1 ? 1 : 0)
                                    bool p_2 = unimplemented  {test ah, 0x44}
                                    
                                    if (p_2)
                                        ebx.b = 0
                                    else
                                        float xmm0_2 = *(arg1 + 0x48)
                                        float temp2_1 = *(edi_1 + 0x48)
                                        xmm0_2 - temp2_1
                                        eax_6:1.b = (xmm0_2 == temp2_1 ? 1 : 0) << 6
                                            | (is_unordered.d(xmm0_2, temp2_1) ? 1 : 0) << 2
                                            | (xmm0_2 < temp2_1 ? 1 : 0)
                                        bool p_4 = unimplemented  {test ah, 0x44}
                                        
                                        if (p_4)
                                            ebx.b = 0
                                        else
                                            float xmm0_3 = *(arg1 + 0x4c)
                                            float temp3_1 = *(edi_1 + 0x4c)
                                            xmm0_3 - temp3_1
                                            eax_6:1.b = (xmm0_3 == temp3_1 ? 1 : 0) << 6
                                                | (is_unordered.d(xmm0_3, temp3_1) ? 1 : 0) << 2
                                                | (xmm0_3 < temp3_1 ? 1 : 0)
                                            bool p_6 = unimplemented  {test ah, 0x44}
                                            
                                            if (p_6)
                                                ebx.b = 0
                                            else
                                                float xmm0_4 = *(arg1 + 0x50)
                                                float temp4_1 = *(edi_1 + 0x50)
                                                xmm0_4 - temp4_1
                                                eax_6:1.b = (xmm0_4 == temp4_1 ? 1 : 0) << 6
                                                    | (is_unordered.d(xmm0_4, temp4_1) ? 1 : 0)
                                                    << 2 | (xmm0_4 < temp4_1 ? 1 : 0)
                                                bool p_8 = unimplemented  {test ah, 0x44}
                                                
                                                if (p_8)
                                                    ebx.b = 0
                                                else if (sub_59f800(arg1 + 0x54, edi_1 + 0x54) != 0)
                                                    ebx.b = 0
                                                else
                                                    *(arg1 + 0x64) - *(edi_1 + 0x64)
                                                    bool p_10 = unimplemented  {test ah, 0x44}
                                                    
                                                    if (p_10 || *(arg1 + 0x68) != *(edi_1 + 0x68)
                                                            || *(arg1 + 0x69) != *(edi_1 + 0x69)
                                                            || *(arg1 + 0x6c) != *(edi_1 + 0x6c))
                                                        ebx.b = 0
                                                    else
                                                        int32_t eax_9
                                                        eax_9.b = *(arg1 + 0x70)
                                                        
                                                        if (eax_9.b != *(edi_1 + 0x70))
                                                            ebx.b = 0
                                                        else
                                                            eax_9.b = *(arg1 + 0x71)
                                                            
                                                            if (eax_9.b != *(edi_1 + 0x71))
                                                                ebx.b = 0
                                                            else
                                                                eax_9.b = *(arg1 + 0x72)
                                                                
                                                                if (eax_9.b != *(edi_1 + 0x72))
                                                                    ebx.b = 0
                                                                else
                                                                    eax_9.b = *(arg1 + 0x73)
                                                                    
                                                                    if (eax_9.b != *(edi_1 + 0x73))
                                                                        ebx.b = 0
                                                                    else
                                                                        eax_9.b = *(arg1 + 0x74)
                                                                        
                                                                        if (eax_9.b != *(edi_1 + 0x74))
                                                                            ebx.b = 0
                                                                        else
                                                                            ebx.b = 1
                        
                        int32_t** ecx_7 = var_1c
                        sub_4200d0(&var_1c, &arg_4, *ecx_7, ecx_7)
                        j__free(var_1c)
                        int32_t eax_10
                        eax_10.b = ebx.b
                        fsbase->NtTib.ExceptionList = ExceptionList
                        return eax_10

eax_3.b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return eax_3
