// 函数: sub_573930
// 地址: 0x573930
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73c8e9
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_4c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_8_1 = 0
int32_t var_2c = 0
*arg2 = 0
arg2[1] = 0
*arg2 = sub_4f2cd0()
int32_t var_8_2 = 0
int32_t ecx = arg5
int32_t var_2c_1 = 1

if (ecx s> arg6)
    fsbase->NtTib.ExceptionList = ExceptionList
    return arg2

int32_t edx = arg4
int32_t esi_1 = arg3

do
    int32_t edi_1 = esi_1
    
    if (esi_1 s<= edx)
        float xmm5_2 = _mm_cvtepi32_ps(zx.o(ecx))
        float xmm6_2 = _mm_cvtepi32_ps(zx.o(ecx + 1))
        float var_34_1 = xmm5_2
        float var_38_1 = xmm6_2
        
        do
            float xmm4_2 = _mm_cvtepi32_ps(zx.o(edi_1))
            int32_t esi_2 = *(arg1 + 0x28)
            float xmm3_1 = *(arg1 + 0x18)
            float xmm2_2 = *(arg1 + 0x1c) - xmm3_1
            float xmm1_1 = 1f / _mm_cvtepi32_ps(zx.o(esi_2))
            float xmm4_5 = xmm4_2 * xmm2_2 * xmm1_1 + xmm3_1
            float xmm0_7 = _mm_cvtepi32_ps(zx.o(edi_1 + 1)) * xmm2_2 * xmm1_1 + xmm3_1
            float xmm3_2 = *(arg1 + 0x20)
            float xmm2_4 = *(arg1 + 0x24) - xmm3_2
            float xmm1_2 = 1f / _mm_cvtepi32_ps(zx.o(*(arg1 + 0x2c)))
            float xmm0_10 = *(arg7 + 4)
            float xmm6_5 = xmm6_2 * xmm2_4 * xmm1_2 + xmm3_2
            float xmm2_5 = *(arg7 + 0xc)
            float xmm5_5 = xmm5_2 * xmm2_4 * xmm1_2 + xmm3_2
            float xmm7_2 = xmm6_5 - xmm5_5
            float xmm5_7 = *(arg7 + 0x10) - xmm0_10
            float xmm3_4 = xmm7_2 * xmm5_7
            xmm3_4 f- 0
            void* eax_5
            eax_5:1.b = (xmm3_4 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm3_4, 0f) ? 1 : 0) << 2
                | (xmm3_4 < 0f ? 1 : 0)
            bool p_2 = unimplemented  {test ah, 0x44}
            
            if (p_2)
                float xmm0_11 = xmm0_10 - xmm4_5
                int32_t xmm4_8 = (xmm7_2 * xmm0_11) ^ (data_79aad0).d
                float xmm2_8 = (xmm2_5 - xmm5_5) * xmm5_7 - xmm0_11 * (*(arg7 + 0x18) - xmm2_5)
                
                if (((xmm3_4 <= 0f || xmm4_8 f< 0 || not(xmm3_4 f>= xmm4_8))
                        && (0 f<= xmm3_4 || xmm4_8 f< xmm3_4 || 0 f< xmm4_8)) || ((xmm3_4 f<= 0
                        || xmm2_8 f< 0 || not(xmm3_4 >= xmm2_8))
                        && (0 f<= xmm3_4 || xmm2_8 < xmm3_4 || 0 f< xmm2_8)))
                    edx:1.b = 0
                else
                    edx:1.b = 1
            else
                edx:1.b = 1
            
            float xmm4_10 = xmm0_7 - xmm4_5
            float xmm3_5 = *(arg7 + 0xc)
            float xmm6_9 = *(arg7 + 0x18) - xmm3_5
            float xmm2_11 = (xmm4_10 * xmm6_9) ^ (data_79aad0).d
            xmm2_11 f- 0
            eax_5:1.b = (xmm2_11 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm2_11, 0f) ? 1 : 0) << 2
                | (xmm2_11 < 0f ? 1 : 0)
            bool p_4 = unimplemented  {test ah, 0x44}
            void* ecx_2
            
            if (p_4)
                float xmm3_6 = xmm3_5 - xmm5_5
                float xmm5_9 = xmm4_10 * xmm3_6
                float xmm3_8 =
                    xmm3_6 * (*(arg7 + 0x10) f- *(arg7 + 4)) - (*(arg7 + 4) - xmm4_5) * xmm6_9
                
                if (((xmm2_11 <= 0f || xmm5_9 f< 0 || not(xmm2_11 >= xmm5_9))
                        && (0 f<= xmm2_11 || xmm5_9 < xmm2_11 || 0 f< xmm5_9)) || ((xmm2_11 f<= 0
                        || xmm3_8 f< 0 || not(xmm2_11 >= xmm3_8))
                        && (0 f<= xmm2_11 || xmm3_8 < xmm2_11 || 0 f< xmm3_8)))
                    ecx_2:1.b = 0
                else
                    ecx_2:1.b = 1
                
                xmm3_5 = xmm2_5
            else
                ecx_2:1.b = 1
            
            float xmm5_11 = *(arg7 + 0x18) - xmm3_5
            float xmm6_10 = *(arg7 + 4)
            float xmm2_14 = (xmm4_10 * xmm5_11) ^ (data_79aad0).d
            xmm2_14 f- 0
            void* eax_6
            eax_6:1.b = (xmm2_14 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm2_14, 0f) ? 1 : 0) << 2
                | (xmm2_14 < 0f ? 1 : 0)
            bool p_6 = unimplemented  {test ah, 0x44}
            
            if (p_6)
                float xmm3_9 = xmm3_5 - xmm6_5
                float xmm4_11 = xmm4_10 * xmm3_9
                float xmm3_11 = xmm3_9 * (*(arg7 + 0x10) - xmm6_10) - (xmm6_10 - xmm4_5) * xmm5_11
                
                if (((xmm2_14 <= 0f || xmm4_11 f< 0 || not(xmm2_14 >= xmm4_11))
                        && (0 f<= xmm2_14 || xmm4_11 < xmm2_14 || 0 f< xmm4_11)) || ((xmm2_14 f<= 0
                        || xmm3_11 f< 0 || not(xmm2_14 >= xmm3_11))
                        && (0 f<= xmm2_14 || xmm3_11 < xmm2_14 || 0 f< xmm3_11)))
                    edx.b = 0
                else
                    edx.b = 1
                
                xmm3_5 = xmm2_5
            else
                edx.b = 1
            
            float xmm4_13 = *(arg7 + 0x10) - xmm6_10
            float xmm2_16 = xmm7_2 * xmm4_13
            xmm2_16 f- 0
            void* eax_7
            eax_7:1.b = (xmm2_16 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm2_16, 0f) ? 1 : 0) << 2
                | (xmm2_16 < 0f ? 1 : 0)
            bool p_8 = unimplemented  {test ah, 0x44}
            
            if (p_8)
                float xmm0_24 = xmm6_10 - xmm0_7
                int32_t xmm7_4 = (xmm7_2 * xmm0_24) ^ (data_79aad0).d
                float xmm3_14 = (xmm3_5 - xmm5_5) * xmm4_13 - xmm0_24 * (*(arg7 + 0x18) - xmm3_5)
                
                if (((xmm2_16 <= 0f || xmm7_4 f< 0 || not(xmm2_16 f>= xmm7_4))
                        && (0 f<= xmm2_16 || xmm7_4 f< xmm2_16 || 0 f< xmm7_4)) || ((xmm2_16 f<= 0
                        || xmm3_14 f< 0 || not(xmm2_16 >= xmm3_14))
                        && (0 f<= xmm2_16 || xmm3_14 < xmm2_16 || 0 f< xmm3_14)))
                    ecx_2.b = 0
                else
                    ecx_2.b = 1
                
                xmm3_5 = xmm2_5
            else
                ecx_2.b = 1
            
            if (xmm6_10 < xmm4_5 || xmm0_7 <= xmm6_10 || xmm3_5 < xmm5_5 || xmm6_5 <= xmm3_5)
                eax_7.b = 0
            else
                int32_t xmm2_17 = *(arg7 + 0x10)
                
                if (xmm2_17 f< xmm4_5 || xmm0_7 f<= xmm2_17)
                    eax_7.b = 0
                else
                    int32_t xmm0_27 = *(arg7 + 0x18)
                    
                    if (xmm0_27 f< xmm5_5 || xmm6_5 f<= xmm0_27)
                        eax_7.b = 0
                    else
                        eax_7.b = 1
            
            if (edx:1.b != 0 || ecx_2:1.b != 0 || edx.b != 0 || ecx_2.b != 0 || eax_7.b != 0)
                ecx = arg5
                int32_t eax_8 = (esi_2 * ecx + edi_1) * 3
                int32_t esi_6 = *(arg1 + 0xc)
                int32_t edi_2 = *(esi_6 + (eax_8 << 2) + 4)
                int32_t esi_7 = *(esi_6 + (eax_8 << 2))
                
                if (esi_7 != edi_2)
                    do
                        int32_t var_50_1 = arg5
                        int32_t var_54_1 = esi_7
                        int32_t* var_40
                        ecx = sub_4f2d40(arg2, &var_40, ecx)
                        esi_7 += 4
                    while (esi_7 != edi_2)
                    
                    ecx = arg5
            else
                ecx = arg5
            
            edi_1 += 1
            edx = arg4
            xmm5_2 = var_34_1
            xmm6_2 = var_38_1
        while (edi_1 s<= edx)
        
        esi_1 = arg3
    
    ecx += 1
    arg5 = ecx
while (ecx s<= arg6)

fsbase->NtTib.ExceptionList = ExceptionList
return arg2
