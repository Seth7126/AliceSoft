// 函数: sub_5c3530
// 地址: 0x5c3530
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73ff98
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_34 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** eax_3

if (*(arg1 + 0x78) != 0)
    void* arg_4
    void* ebx_1 = arg_4
    
    if (*(ebx_1 + 0x78) != 0 && *(arg1 + 0x18) == *(ebx_1 + 0x18)
            && *(arg1 + 0x1c) == *(ebx_1 + 0x1c))
        eax_3.b = *(arg1 + 0x20)
        
        if (eax_3.b == *(ebx_1 + 0x20))
            eax_3.b = *(arg1 + 0x21)
            
            if (eax_3.b == *(ebx_1 + 0x21))
                eax_3.b = *(arg1 + 0x22)
                
                if (eax_3.b == *(ebx_1 + 0x22))
                    eax_3.b = *(arg1 + 0x23)
                    
                    if (eax_3.b == *(ebx_1 + 0x23))
                        int32_t* var_1c = nullptr
                        int32_t var_18 = 0
                        int32_t* eax_4
                        int32_t ecx
                        eax_4, ecx = sub_4f2cd0()
                        int32_t* edx = eax_4
                        var_1c = edx
                        int32_t var_8_1 = 0
                        int32_t edi = *(arg1 + 0x34)
                        int32_t esi_1 = *(arg1 + 0x30)
                        int32_t* var_24
                        
                        if (esi_1 != edi)
                            do
                                void* var_38_1 = arg_4
                                int32_t var_3c_1 = esi_1
                                ecx = sub_514cb0(&var_1c, &var_24, ecx)
                                esi_1 += 4
                            while (esi_1 != edi)
                            
                            edx = var_1c
                        
                        int32_t edi_1 = *(ebx_1 + 0x34)
                        int32_t esi_2 = *(ebx_1 + 0x30)
                        
                        if (esi_2 != edi_1)
                            do
                                void* var_38_2 = arg_4
                                int32_t var_3c_2 = esi_2
                                ecx = sub_514cb0(&var_1c, &var_24, ecx)
                                esi_2 += 4
                            while (esi_2 != edi_1)
                            
                            edx = var_1c
                        
                        if (var_18 s> arg2)
                            ebx_1.b = 0
                        else
                            int32_t eax_5
                            eax_5.b = *(arg1 + 0x3c)
                            
                            if (eax_5.b != *(ebx_1 + 0x3c))
                                ebx_1.b = 0
                            else
                                float xmm0_1 = *(arg1 + 0x40)
                                float temp1_1 = *(ebx_1 + 0x40)
                                xmm0_1 - temp1_1
                                eax_5:1.b = (xmm0_1 == temp1_1 ? 1 : 0) << 6
                                    | (is_unordered.d(xmm0_1, temp1_1) ? 1 : 0) << 2
                                    | (xmm0_1 < temp1_1 ? 1 : 0)
                                bool p_2 = unimplemented  {test ah, 0x44}
                                
                                if (p_2)
                                    ebx_1.b = 0
                                else
                                    eax_5.b = *(arg1 + 0x44)
                                    
                                    if (eax_5.b != *(ebx_1 + 0x44))
                                        ebx_1.b = 0
                                    else
                                        float xmm0_2 = *(arg1 + 0x48)
                                        float temp2_1 = *(ebx_1 + 0x48)
                                        xmm0_2 - temp2_1
                                        eax_5:1.b = (xmm0_2 == temp2_1 ? 1 : 0) << 6
                                            | (is_unordered.d(xmm0_2, temp2_1) ? 1 : 0) << 2
                                            | (xmm0_2 < temp2_1 ? 1 : 0)
                                        bool p_4 = unimplemented  {test ah, 0x44}
                                        
                                        if (p_4)
                                            ebx_1.b = 0
                                        else
                                            float xmm0_3 = *(arg1 + 0x4c)
                                            float temp3_1 = *(ebx_1 + 0x4c)
                                            xmm0_3 - temp3_1
                                            eax_5:1.b = (xmm0_3 == temp3_1 ? 1 : 0) << 6
                                                | (is_unordered.d(xmm0_3, temp3_1) ? 1 : 0) << 2
                                                | (xmm0_3 < temp3_1 ? 1 : 0)
                                            bool p_6 = unimplemented  {test ah, 0x44}
                                            
                                            if (p_6)
                                                ebx_1.b = 0
                                            else
                                                float xmm0_4 = *(arg1 + 0x50)
                                                float temp4_1 = *(ebx_1 + 0x50)
                                                xmm0_4 - temp4_1
                                                eax_5:1.b = (xmm0_4 == temp4_1 ? 1 : 0) << 6
                                                    | (is_unordered.d(xmm0_4, temp4_1) ? 1 : 0)
                                                    << 2 | (xmm0_4 < temp4_1 ? 1 : 0)
                                                bool p_8 = unimplemented  {test ah, 0x44}
                                                
                                                if (p_8)
                                                    ebx_1.b = 0
                                                else
                                                    float xmm0_5 = *(arg1 + 0x54)
                                                    float temp5_1 = *(ebx_1 + 0x54)
                                                    xmm0_5 - temp5_1
                                                    eax_5:1.b = (xmm0_5 == temp5_1 ? 1 : 0) << 6
                                                        | (is_unordered.d(xmm0_5, temp5_1) ? 1 : 0)
                                                        << 2 | (xmm0_5 < temp5_1 ? 1 : 0)
                                                    bool p_10 = unimplemented  {test ah, 0x44}
                                                    
                                                    if (p_10)
                                                        ebx_1.b = 0
                                                    else
                                                        float xmm0_6 = *(arg1 + 0x58)
                                                        float temp6_1 = *(ebx_1 + 0x58)
                                                        xmm0_6 - temp6_1
                                                        eax_5:1.b = (xmm0_6 == temp6_1 ? 1 : 0) << 6
                                                            | (is_unordered.d(xmm0_6, temp6_1) ? 1
                                                            : 0) << 2 | (xmm0_6 < temp6_1 ? 1 : 0)
                                                        bool p_12 = unimplemented  {test ah, 0x44}
                                                        
                                                        if (p_12)
                                                            ebx_1.b = 0
                                                        else
                                                            float xmm0_7 = *(arg1 + 0x5c)
                                                            float temp7_1 = *(ebx_1 + 0x5c)
                                                            xmm0_7 - temp7_1
                                                            eax_5:1.b =
                                                                (xmm0_7 == temp7_1 ? 1 : 0) << 6 | (
                                                                is_unordered.d(xmm0_7, temp7_1) ? 1 : 0)
                                                                << 2 | (xmm0_7 < temp7_1 ? 1 : 0)
                                                            bool p_14 =
                                                                unimplemented  {test ah, 0x44}
                                                            
                                                            if (p_14)
                                                                ebx_1.b = 0
                                                            else
                                                                float xmm0_8 = *(arg1 + 0x60)
                                                                float temp8_1 = *(ebx_1 + 0x60)
                                                                xmm0_8 - temp8_1
                                                                eax_5:1.b =
                                                                    (xmm0_8 == temp8_1 ? 1 : 0) << 6 | (
                                                                    is_unordered.d(xmm0_8, temp8_1) ? 1 : 0)
                                                                    << 2 | (xmm0_8 < temp8_1 ? 1 : 0)
                                                                bool p_16 =
                                                                    unimplemented  {test ah, 0x44}
                                                                
                                                                if (p_16)
                                                                    ebx_1.b = 0
                                                                else
                                                                    float xmm0_9 = *(arg1 + 0x64)
                                                                    float temp9_1 = *(ebx_1 + 0x64)
                                                                    xmm0_9 - temp9_1
                                                                    eax_5:1.b =
                                                                        (xmm0_9 == temp9_1 ? 1 : 0) << 6 | (
                                                                        is_unordered.d(xmm0_9, temp9_1) ? 1 : 0)
                                                                        << 2 | (xmm0_9 < temp9_1 ? 1 : 0)
                                                                    bool p_18 =
                                                                        unimplemented  {test ah, 0x44}
                                                                    
                                                                    if (p_18)
                                                                        ebx_1.b = 0
                                                                    else
                                                                        float xmm0_10 = *(arg1 + 0x68)
                                                                        float temp10_1 = *(ebx_1 + 0x68)
                                                                        xmm0_10 - temp10_1
                                                                        eax_5:1.b =
                                                                            (xmm0_10 == temp10_1 ? 1 : 0) << 6 | (
                                                                            is_unordered.d(xmm0_10, temp10_1) ? 1
                                                                            : 0) << 2
                                                                            | (xmm0_10 < temp10_1 ? 1 : 0)
                                                                        bool p_20 =
                                                                            unimplemented  {test ah, 0x44}
                                                                        
                                                                        if (p_20)
                                                                            ebx_1.b = 0
                                                                        else
                                                                            eax_5.b = *(arg1 + 0x6c)
                                                                            
                                                                            if (eax_5.b != *(ebx_1 + 0x6c))
                                                                                ebx_1.b = 0
                                                                            else
                                                                                eax_5.b = *(arg1 + 0x6d)
                                                                                
                                                                                if (eax_5.b != *(ebx_1 + 0x6d)
                                                                                        || *(arg1 + 0x70) != *(ebx_1 + 0x70))
                                                                                    ebx_1.b = 0
                                                                                else
                                                                                    int32_t eax_6
                                                                                    eax_6.b = *(arg1 + 0x74)
                                                                                    
                                                                                    if (eax_6.b != *(ebx_1 + 0x74))
                                                                                        ebx_1.b = 0
                                                                                    else
                                                                                        eax_6.b = *(arg1 + 0x3d)
                                                                                        
                                                                                        if (eax_6.b != *(ebx_1 + 0x3d))
                                                                                            ebx_1.b = 0
                                                                                        else
                                                                                            eax_6.b = *(arg1 + 0x75)
                                                                                            
                                                                                            if (eax_6.b != *(ebx_1 + 0x75))
                                                                                                ebx_1.b = 0
                                                                                            else
                                                                                                eax_6.b = *(arg1 + 0x76)
                                                                                                
                                                                                                if (eax_6.b != *(ebx_1 + 0x76))
                                                                                                    ebx_1.b = 0
                                                                                                else
                                                                                                    eax_6.b = *(arg1 + 0x77)
                                                                                                    
                                                                                                    if (eax_6.b != *(ebx_1 + 0x77))
                                                                                                        ebx_1.b = 0
                                                                                                    else
                                                                                                        ebx_1.b = 1
                        
                        int32_t* var_38_3 = edx
                        sub_513f00(&var_1c, &arg_4, *edx)
                        sub_403160(var_1c, 1, 0x14)
                        int32_t eax_7
                        eax_7.b = ebx_1.b
                        fsbase->NtTib.ExceptionList = ExceptionList
                        return eax_7

eax_3.b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return eax_3
