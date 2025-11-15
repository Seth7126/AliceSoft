// 函数: sub_649770
// 地址: 0x649770
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_746658
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
float var_34 = arg2

if (*(arg1 + 0x44) == 0)
    var_34 = 1f - arg2

void* ebx
ebx.b = *(arg1 + 0x45)
int32_t eax_4
int32_t edx
edx:eax_4 = sx.q(*(arg1 + 0xc))
int32_t eax_7
int32_t edx_1
edx_1:eax_7 = sx.q(*(arg1 + 0x10))
int32_t ecx = 0x48
int32_t esi_1 = (eax_4 - edx) s>> 1
int32_t edi_1 = (eax_7 - edx_1) s>> 1

if (ebx.b != 0)
    ecx = 0x3c

float var_3c = _mm_cvtepi32_ps(zx.o(ecx)) * 0.0174532924f
float xmm0_5 = sub_4a78e0()
float xmm1_2 = _mm_cvtepi32_ps(zx.o(esi_1)) * xmm0_5
float xmm0_7 = sub_48ca30()
int32_t eax_9
eax_9.b = ebx.b == 0
float xmm1_8 = __maxss_xmmss_memss(_mm_cvtepi32_ps(zx.o(edi_1)) / xmm0_7, xmm1_2) * var_34 * var_34
float* result_1
sub_649e00(&result_1, eax_9 + 6)
int32_t var_8_1 = 0
int32_t* ecx_2 = *(arg1 + 0x18)

if (ecx_2 == 0)
    ebx.b = 0
else
    void* eax_13 = (*(*ecx_2 + 0x18))(eax_2)
    
    if (eax_13 == 0)
        ebx.b = 0
    else
        float xmm1_10 = (var_34 * 360f + 270f) * 0.0174532924f
        float var_34_2 = xmm1_10
        void* edx_2
        int32_t var_20
        int32_t var_1c
        
        if (*(arg1 + 0x45) == 0)
            int32_t var_24 = 0x3050200
            int32_t i = 0
            var_20 = 0x1060500
            var_1c = 0x6010403
            double* eax_22
            float* result_3
            
            do
                float var_30_3 = _mm_cvtepi32_ps(zx.o(i)) * 1.2566371f + xmm1_10
                result_1[i * 2] = sub_48ca30() * xmm1_8 + _mm_cvtepi32_ps(zx.o(esi_1))
                float xmm0_34
                eax_22, xmm0_34 = sub_484cb0()
                result_3 = result_1
                xmm1_10 = var_34_2
                result_3[i * 2 + 1] = xmm0_34 * xmm1_8 + _mm_cvtepi32_ps(zx.o(edi_1))
                i += 1
            while (i s< 5)
            
            float xmm7_2 = result_3[8] - result_3[4]
            float xmm6_1 = result_3[3]
            float xmm0_38 = result_3[7] - xmm6_1
            float xmm4_3 = result_3[2]
            float xmm5_2 = result_3[6] - xmm4_3
            float xmm3_3 = result_3[9] - result_3[5]
            float xmm2_5 = xmm7_2 * xmm0_38 - xmm5_2 * xmm3_3
            xmm2_5 f- 0
            eax_22:1.b = (xmm2_5 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm2_5, 0f) ? 1 : 0) << 2
                | (xmm2_5 < 0f ? 1 : 0)
            bool p_2 = unimplemented  {test ah, 0x44}
            float xmm5_7
            float xmm7_10
            
            if (p_2)
                float xmm0_48 = result_3[5] - xmm6_1
                float xmm2_10 = result_3[4] - xmm4_3
                float xmm1_22 = 1f / xmm2_5
                xmm5_7 = (xmm5_2 * xmm0_48 - xmm0_38 * xmm2_10) * xmm1_22
                xmm7_10 = (xmm7_2 * xmm0_48 - xmm3_3 * xmm2_10) * xmm1_22
            
            float xmm3_4
            
            if (not(p_2) || 0f > xmm5_7 || xmm5_7 > 1f || 0 f> xmm7_10 || xmm7_10 > 1f)
                xmm3_4 = result_3[5]
                xmm4_3 = result_3[4]
            else
                float temp0_1 = result_3[6]
                xmm4_3 - temp0_1
                eax_22:1.b = (xmm4_3 == temp0_1 ? 1 : 0) << 6
                    | (is_unordered.d(xmm4_3, temp0_1) ? 1 : 0) << 2 | (xmm4_3 < temp0_1 ? 1 : 0)
                bool p_6 = unimplemented  {test ah, 0x44}
                float xmm0_51
                bool p_8
                
                if (p_6)
                    xmm0_51 = result_3[3]
                    float temp1_1 = result_3[7]
                    xmm0_51 - temp1_1
                    eax_22:1.b = (xmm0_51 == temp1_1 ? 1 : 0) << 6
                        | (is_unordered.d(xmm0_51, temp1_1) ? 1 : 0) << 2
                        | (xmm0_51 < temp1_1 ? 1 : 0)
                    xmm4_3 = xmm7_2 * xmm5_7 + result_3[4]
                    p_8 = unimplemented  {test ah, 0x44}
                
                if (not(p_6) || p_8)
                    xmm3_4 = xmm3_3 * xmm5_7 + result_3[5]
                else
                    xmm3_4 = xmm0_51
            
            result_3[0xa] = xmm4_3
            result_3[0xb] = xmm3_4
            float xmm0_42 = result_3[9] - result_3[5]
            float xmm5_4 = result_3[6] - *result_3
            float xmm3_5 = result_3[4]
            float xmm4_4 = result_3[1]
            float xmm2_7 = result_3[8] - xmm3_5
            float xmm7_4 = result_3[7] - xmm4_4
            float xmm1_21 = xmm0_42 * xmm5_4 - xmm2_7 * xmm7_4
            xmm1_21 f- 0
            eax_22:1.b = (xmm1_21 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm1_21, 0f) ? 1 : 0) << 2
                | (xmm1_21 < 0f ? 1 : 0)
            bool p_4 = unimplemented  {test ah, 0x44}
            float xmm2_8
            float xmm3_9
            
            if (p_4)
                float xmm4_7 = xmm4_4 - result_3[5]
                float xmm0_52 = 1f / xmm1_21
                float xmm1_24 = *result_3 - xmm3_5
                xmm3_9 = xmm3_5
                float xmm2_13 = (xmm2_7 * xmm4_7 - xmm0_42 * xmm1_24) * xmm0_52
                float xmm4_10 = (xmm4_7 * xmm5_4 - xmm1_24 * xmm7_4) * xmm0_52
                
                if (0 f> xmm2_13 || xmm2_13 > 1f || 0 f> xmm4_10 || xmm4_10 > 1f)
                    xmm2_8 = result_3[1]
                    xmm3_9 = *result_3
                else
                    float temp2_1 = result_3[8]
                    xmm3_9 - temp2_1
                    eax_22:1.b = (xmm3_9 == temp2_1 ? 1 : 0) << 6
                        | (is_unordered.d(xmm3_9, temp2_1) ? 1 : 0) << 2
                        | (xmm3_9 < temp2_1 ? 1 : 0)
                    bool p_10 = unimplemented  {test ah, 0x44}
                    float xmm0_53
                    bool p_12
                    
                    if (p_10)
                        xmm0_53 = result_3[5]
                        float temp3_1 = result_3[9]
                        xmm0_53 - temp3_1
                        eax_22:1.b = (xmm0_53 == temp3_1 ? 1 : 0) << 6
                            | (is_unordered.d(xmm0_53, temp3_1) ? 1 : 0) << 2
                            | (xmm0_53 < temp3_1 ? 1 : 0)
                        xmm3_9 = xmm2_13 * xmm5_4 + *result_3
                        p_12 = unimplemented  {test ah, 0x44}
                    
                    if (not(p_10) || p_12)
                        xmm2_8 = xmm2_13 * xmm7_4 + result_3[1]
                    else
                        xmm2_8 = xmm0_53
            else
                xmm2_8 = xmm4_4
                xmm3_9 = *result_3
            
            ebx = eax_13
            int32_t* esi_3 = &var_24
            result_3[0xc] = xmm3_9
            result_3[0xd] = xmm2_8
            int32_t i_1 = 0
            edx_2 = arg1
            void var_18
            
            do
                esi_3 += 1
                uint32_t eax_26 = zx.d(*(esi_3 - 1))
                i_1 += 1
                float xmm0_55 = _mm_cvtepi32_ps(zx.o(*(edx_2 + 0xc)))
                float xmm3_12 = result_3[eax_26 * 2]
                float xmm1_26 = result_3[eax_26 * 2 + 1]
                float xmm0_57 = _mm_cvtepi32_ps(zx.o(*(edx_2 + 0x10)))
                *(ebx + 8) = 0x3f000000
                *(ebx + 0xc) = 0x3f800000
                *ebx = xmm3_12
                *(ebx + 4) = xmm1_26
                *(ebx + 0x10) = 0xffffffff
                *(ebx + 0x14) = xmm3_12 / xmm0_55
                *(ebx + 0x18) = xmm1_26 / xmm0_57
                ebx += 0x1c
            while (i_1 != (sbb.d(&var_18, &var_18, &var_18 u< &var_24) & 0xfffffff4) + 0xc)
        else
            float* result_4 = result_1
            int32_t i_2 = 0
            var_20 = 0x1040200
            var_1c.w = 0x503
            int32_t i_4 = 0
            
            do
                float var_30_1 = _mm_cvtepi32_ps(zx.o(i_2)) * 1.04719758f + xmm1_10
                result_4[i_4 * 2] = sub_48ca30() * xmm1_8 + _mm_cvtepi32_ps(zx.o(esi_1))
                xmm1_10 = var_34_2
                result_4[i_4 * 2 + 1] = sub_484cb0() * xmm1_8 + _mm_cvtepi32_ps(zx.o(edi_1))
                i_2 = i_4 + 1
                i_4 = i_2
            while (i_2 s< 6)
            
            ebx = eax_13
            int32_t* esi_2 = &var_20
            edx_2 = arg1
            int32_t i_3 = 0
            float* result_2 = result_1
            
            do
                esi_2 += 1
                uint32_t eax_20 = zx.d(*(esi_2 - 1))
                i_3 += 1
                float xmm0_23 = _mm_cvtepi32_ps(zx.o(*(edx_2 + 0xc)))
                float xmm3_1 = result_2[eax_20 * 2]
                float xmm1_15 = result_2[eax_20 * 2 + 1]
                float xmm0_25 = _mm_cvtepi32_ps(zx.o(*(edx_2 + 0x10)))
                *(ebx + 8) = 0x3f000000
                *(ebx + 0xc) = 0x3f800000
                *ebx = xmm3_1
                *(ebx + 4) = xmm1_15
                *(ebx + 0x10) = 0xffffffff
                *(ebx + 0x14) = xmm3_1 / xmm0_23
                *(ebx + 0x18) = xmm1_15 / xmm0_25
                ebx += 0x1c
            while (i_3 != (sbb.d(&var_1c:2, &var_1c:2, &var_1c:2 u< &var_20) & 0xfffffffa) + 6)
        int32_t* ecx_3 = *(edx_2 + 0x18)
        
        if (ecx_3 == 0)
            ebx.b = 0
        else if ((*(*ecx_3 + 0x1c))() == 0)
            ebx.b = 0
        else
            ebx.b = 1

float* result = result_1
int32_t var_40

if (result != 0)
    sub_403160(result, (var_40 - result) s>> 3, 8)
result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
