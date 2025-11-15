// 函数: sub_5807e0
// 地址: 0x5807e0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* const __return_addr_1 = __return_addr
int32_t var_14 = 0xffffffff
int32_t (* var_18)(void* arg1) = sub_73d2c8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebx
int32_t* var_20 = &__saved_ebx
int32_t __saved_ebp
int32_t var_74 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_58 = 0
int32_t var_48
int32_t var_44
int32_t var_40
int32_t var_3c
int32_t* result

if (sub_5806c0(arg1, &var_44, &var_40, &var_3c, &var_48, arg3) != 0)
    int32_t* var_60 = nullptr
    int32_t var_5c_1 = 0
    var_60 = sub_4f2cd0()
    int32_t var_14_1 = 0
    int32_t edi_1 = var_3c
    int32_t var_38_1 = edi_1
    float var_54
    
    if (edi_1 s<= var_48)
        int32_t eax_7 = var_44
        
        do
            int32_t ecx = eax_7
            
            if (eax_7 s<= var_40)
                void* edx_1 = arg1
                float xmm5_2 = _mm_cvtepi32_ps(zx.o(edi_1))
                float xmm6_2 = _mm_cvtepi32_ps(zx.o(edi_1 + 1))
                float var_50_1 = xmm5_2
                var_54 = xmm6_2
                
                do
                    int32_t eax_9 = *(edx_1 + 0x28)
                    float xmm3_1 = *(edx_1 + 0x18)
                    float xmm2_2 = *(edx_1 + 0x1c) - xmm3_1
                    int32_t esi_3 = eax_9 * edi_1 + ecx
                    float xmm1_1 = 1f / _mm_cvtepi32_ps(zx.o(eax_9))
                    float xmm0_7 = _mm_cvtepi32_ps(zx.o(ecx + 1)) * xmm2_2 * xmm1_1 + xmm3_1
                    float xmm4_5 = _mm_cvtepi32_ps(zx.o(ecx)) * xmm2_2 * xmm1_1 + xmm3_1
                    float xmm3_2 = *(edx_1 + 0x20)
                    float xmm2_4 = *(edx_1 + 0x24) - xmm3_2
                    float xmm1_2 = 1f / _mm_cvtepi32_ps(zx.o(*(edx_1 + 0x2c)))
                    float xmm0_10 = *(arg3 + 4)
                    float xmm6_5 = xmm6_2 * xmm2_4 * xmm1_2 + xmm3_2
                    float xmm2_5 = *(arg3 + 0xc)
                    float xmm5_5 = xmm5_2 * xmm2_4 * xmm1_2 + xmm3_2
                    var_3c = xmm6_5
                    float xmm7_2 = xmm6_5 - xmm5_5
                    float xmm5_7 = *(arg3 + 0x10) - xmm0_10
                    float xmm3_4 = xmm7_2 * xmm5_7
                    xmm3_4 f- 0
                    eax_9:1.b = (xmm3_4 == 0f ? 1 : 0) << 6
                        | (is_unordered.d(xmm3_4, 0f) ? 1 : 0) << 2 | (xmm3_4 < 0f ? 1 : 0)
                    bool p_2 = unimplemented  {test ah, 0x44}
                    float xmm2_8
                    int32_t xmm4_8
                    
                    if (p_2)
                        float xmm0_11 = xmm0_10 - xmm4_5
                        xmm4_8 = (xmm7_2 * xmm0_11) ^ (data_79aad0).d
                        xmm2_8 = (xmm2_5 - xmm5_5) * xmm5_7 - xmm0_11 * (*(arg3 + 0x18) - xmm2_5)
                    
                    if (not(p_2) || ((xmm3_4 <= 0f || xmm4_8 f< 0 || not(xmm3_4 f>= xmm4_8))
                            && (0 f<= xmm3_4 || xmm4_8 f< xmm3_4 || 0 f< xmm4_8)) || ((xmm3_4 f<= 0
                            || xmm2_8 f< 0 || not(xmm3_4 >= xmm2_8))
                            && (0 f<= xmm3_4 || xmm2_8 < xmm3_4 || 0 f< xmm2_8)))
                        edx_1:1.b = 0
                    else
                        edx_1:1.b = 1
                    
                    float xmm4_10 = xmm0_7 - xmm4_5
                    float xmm3_5 = *(arg3 + 0xc)
                    float xmm6_9 = *(arg3 + 0x18) - xmm3_5
                    float xmm2_11 = (xmm4_10 * xmm6_9) ^ (data_79aad0).d
                    xmm2_11 f- 0
                    eax_9:1.b = (xmm2_11 == 0f ? 1 : 0) << 6
                        | (is_unordered.d(xmm2_11, 0f) ? 1 : 0) << 2 | (xmm2_11 < 0f ? 1 : 0)
                    bool p_4 = unimplemented  {test ah, 0x44}
                    void* ecx_2
                    
                    if (not(p_4))
                        ecx_2:1.b = 0
                    else
                        float xmm3_6 = xmm3_5 - xmm5_5
                        float xmm5_9 = xmm4_10 * xmm3_6
                        float xmm3_8 = xmm3_6 * (*(arg3 + 0x10) f- *(arg3 + 4))
                            - (*(arg3 + 4) - xmm4_5) * xmm6_9
                        
                        if (((xmm2_11 <= 0f || xmm5_9 f< 0 || not(xmm2_11 >= xmm5_9))
                                && (0 f<= xmm2_11 || xmm5_9 < xmm2_11 || 0 f< xmm5_9)) || ((xmm2_11 f<= 0
                                || xmm3_8 f< 0 || not(xmm2_11 >= xmm3_8))
                                && (0 f<= xmm2_11 || xmm3_8 < xmm2_11 || 0 f< xmm3_8)))
                            xmm3_5 = xmm2_5
                            ecx_2:1.b = 0
                        else
                            xmm3_5 = xmm2_5
                            ecx_2:1.b = 1
                    
                    float xmm5_11 = *(arg3 + 0x18) - xmm3_5
                    float xmm6_10 = *(arg3 + 4)
                    float xmm2_14 = (xmm4_10 * xmm5_11) ^ (data_79aad0).d
                    xmm2_14 f- 0
                    void* eax_10
                    eax_10:1.b = (xmm2_14 == 0f ? 1 : 0) << 6
                        | (is_unordered.d(xmm2_14, 0f) ? 1 : 0) << 2 | (xmm2_14 < 0f ? 1 : 0)
                    bool p_6 = unimplemented  {test ah, 0x44}
                    
                    if (not(p_6))
                        edx_1.b = 0
                    else
                        float xmm3_9 = xmm3_5 f- var_3c
                        float xmm4_11 = xmm4_10 * xmm3_9
                        float xmm3_11 =
                            xmm3_9 * (*(arg3 + 0x10) - xmm6_10) - (xmm6_10 - xmm4_5) * xmm5_11
                        
                        if (((xmm2_14 <= 0f || xmm4_11 f< 0 || not(xmm2_14 >= xmm4_11))
                                && (0 f<= xmm2_14 || xmm4_11 < xmm2_14 || 0 f< xmm4_11)) || ((xmm2_14 f<= 0
                                || xmm3_11 f< 0 || not(xmm2_14 >= xmm3_11))
                                && (0 f<= xmm2_14 || xmm3_11 < xmm2_14 || 0 f< xmm3_11)))
                            xmm3_5 = xmm2_5
                            edx_1.b = 0
                        else
                            xmm3_5 = xmm2_5
                            edx_1.b = 1
                    
                    float xmm4_13 = *(arg3 + 0x10) - xmm6_10
                    float xmm2_16 = xmm7_2 * xmm4_13
                    xmm2_16 f- 0
                    void* eax_11
                    eax_11:1.b = (xmm2_16 == 0f ? 1 : 0) << 6
                        | (is_unordered.d(xmm2_16, 0f) ? 1 : 0) << 2 | (xmm2_16 < 0f ? 1 : 0)
                    bool p_8 = unimplemented  {test ah, 0x44}
                    
                    if (not(p_8))
                        ecx_2.b = 0
                    else
                        float xmm0_24 = xmm6_10 - xmm0_7
                        int32_t xmm7_4 = (xmm7_2 * xmm0_24) ^ (data_79aad0).d
                        float xmm3_14 =
                            (xmm3_5 - xmm5_5) * xmm4_13 - xmm0_24 * (*(arg3 + 0x18) - xmm3_5)
                        
                        if (((xmm2_16 <= 0f || xmm7_4 f< 0 || not(xmm2_16 f>= xmm7_4))
                                && (0 f<= xmm2_16 || xmm7_4 f< xmm2_16 || 0 f< xmm7_4)) || ((xmm2_16 f<= 0
                                || xmm3_14 f< 0 || not(xmm2_16 >= xmm3_14))
                                && (0 f<= xmm2_16 || xmm3_14 < xmm2_16 || 0 f< xmm3_14)))
                            xmm3_5 = xmm2_5
                            ecx_2.b = 0
                        else
                            xmm3_5 = xmm2_5
                            ecx_2.b = 1
                    
                    if (xmm6_10 < xmm4_5 || xmm0_7 <= xmm6_10 || xmm3_5 < xmm5_5)
                        eax_11.b = 0
                    else
                        int32_t xmm5_14 = var_3c
                        
                        if (xmm5_14 f<= xmm3_5)
                            eax_11.b = 0
                        else
                            int32_t xmm2_17 = *(arg3 + 0x10)
                            
                            if (xmm2_17 f< xmm4_5 || xmm0_7 f<= xmm2_17)
                                eax_11.b = 0
                            else
                                int32_t xmm0_27 = *(arg3 + 0x18)
                                
                                if (xmm0_27 f< xmm5_5 || xmm5_14 f<= xmm0_27)
                                    eax_11.b = 0
                                else
                                    eax_11.b = 1
                    
                    if (edx_1:1.b != 0 || ecx_2:1.b != 0 || edx_1.b != 0 || ecx_2.b != 0
                            || eax_11.b != 0)
                        edx_1 = arg1
                        int32_t eax_12 = esi_3 * 3
                        int32_t esi_4 = *(edx_1 + 0xc)
                        int32_t edi_2 = *(esi_4 + (eax_12 << 2) + 4)
                        int32_t esi_5 = *(esi_4 + (eax_12 << 2))
                        
                        if (esi_5 == edi_2)
                            edi_1 = var_38_1
                        else
                            do
                                float var_78_1 = var_54
                                int32_t var_7c_1 = esi_5
                                int32_t* var_68
                                ecx_2 = sub_4f2d40(&var_60, &var_68, ecx_2)
                                esi_5 += 4
                            while (esi_5 != edi_2)
                            
                            edi_1 = var_38_1
                            edx_1 = arg1
                    else
                        edx_1 = arg1
                    
                    ecx += 1
                    xmm5_2 = var_50_1
                    xmm6_2 = var_54
                while (ecx s<= var_40)
                
                eax_7 = var_44
            
            edi_1 += 1
            var_38_1 = edi_1
        while (edi_1 s<= var_48)
    
    result = arg2
    *result = 0
    result[1] = 0
    int32_t** eax_13 = sub_4f2cd0()
    *result = var_60
    int32_t edx_2 = result[1]
    var_60 = eax_13
    result[1] = var_5c_1
    int32_t var_5c_2 = edx_2
    sub_4f27c0(&var_60, &var_54, *eax_13, eax_13)
    sub_403160(var_60, 1, 0x14)
else
    result = arg2
    *result = 0
    result[1] = 0
    *result = sub_4f2cd0()

fsbase->NtTib.ExceptionList = ExceptionList
return result
