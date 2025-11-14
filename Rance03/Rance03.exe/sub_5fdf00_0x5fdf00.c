// 函数: sub_5fdf00
// 地址: 0x5fdf00
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6cc520
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_48
int32_t eax_2 = __security_cookie ^ &var_48
int32_t __saved_edi
int32_t eax_4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
float var_3c = arg2
struct viewtrans::CWriteVB::VTable* const var_2c = &viewtrans::CWriteVB::`vftable'
int32_t var_4 = 0

if (*(arg1 + 0x44) == 0)
    var_3c = 1f - arg2

int32_t ecx = 0x48
int32_t eax_6
int32_t edx
edx:eax_6 = sx.q(*(arg1 + 0x3c))
int32_t eax_9
int32_t edx_1
edx_1:eax_9 = sx.q(*(arg1 + 0x40))
int32_t esi_1 = (eax_6 - edx) s>> 1
int32_t eax_10
eax_10.b = *(arg1 + 0x45)
int32_t edi_1 = (eax_9 - edx_1) s>> 1
char var_45 = eax_10.b

if (eax_10.b != 0)
    ecx = 0x3c

int32_t xmm0_5[0x4] = _mm_cvtepi32_ps(zx.o(ecx)) * 3.14159274f * 0.00555555569f
int32_t var_34 = xmm0_5
int80_t x87_r0
float xmm0_7 = ___libm_sse2_tanf(xmm0_5, x87_r0) * _mm_cvtepi32_ps(zx.o(esi_1))
int80_t x87_r1
float xmm0_9 = ___libm_sse2_cosf(var_34, x87_r1)
int16_t top = 2
float xmm1_4 = _mm_cvtepi32_ps(zx.o(edi_1)) / xmm0_9
float xmm0_10 = xmm0_7

if (not(xmm0_10 > xmm1_4))
    xmm0_10 = xmm1_4

int32_t eax_11
eax_11.b = var_45 == 0
float xmm0_12 = xmm0_10 * var_3c * var_3c
float xmm1_7 = var_3c * 360f + 270f
int32_t* var_28
sub_5fe800(&var_28, eax_11 + 6)
var_4.b = 1
int32_t* ecx_2 = *(arg1 + 8)
int32_t* ebx_1 = var_28
int32_t* result

if (ecx_2 == 0)
    result.b = 0
else
    result = (*(*ecx_2 + 0x18))(eax_4)
    
    if (result == 0)
        result.b = 0
    else
        int32_t i = 0
        void* ecx_3
        
        if (*(arg1 + 0x45) == 0)
            int32_t var_1c = 0x3050200
            int32_t var_18_1 = 0x1060500
            int32_t var_14_1 = 0x6010403
            double* eax_16
            
            do
                float xmm0_61 =
                    (_mm_cvtepi32_ps(zx.o(i)) * 72f + xmm1_7) * 3.14159274f * 0.00555555569f
                ebx_1[i * 2] = ___libm_sse2_cosf(xmm0_61) * xmm0_12 + _mm_cvtepi32_ps(zx.o(esi_1))
                float xmm0_66
                eax_16, xmm0_66 = ___libm_sse2_sinf(xmm0_61)
                top += 2
                ebx_1[i * 2 + 1] = xmm0_66 * xmm0_12 + _mm_cvtepi32_ps(zx.o(edi_1))
                i += 1
            while (i s< 5)
            
            float xmm1_34 = ebx_1[2]
            float xmm5_1 = ebx_1[4]
            float xmm7_2 = ebx_1[6] f- xmm1_34
            float xmm3_2 = ebx_1[8] f- xmm5_1
            float xmm2_13 = ebx_1[3]
            float xmm6_1 = ebx_1[5]
            float xmm0_70 = ebx_1[7] f- xmm2_13
            float xmm4_2 = ebx_1[9] f- xmm6_1
            float xmm7_5 = xmm3_2 * xmm0_70 - xmm7_2 * xmm4_2
            xmm7_5 - 0f
            eax_16:1.b = (xmm7_5 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm7_5, 0f) ? 1 : 0) << 2
                | (xmm7_5 < 0f ? 1 : 0)
            bool p_2 = unimplemented  {test ah, 0x44}
            float xmm5_5
            float xmm6_5
            
            if (p_2)
                float xmm6_2 = xmm6_1 - xmm2_13
                float xmm2_15 = xmm5_1 - xmm1_34
                float xmm1_35 = 1f / xmm7_5
                xmm5_5 = (xmm6_2 * xmm7_2 - xmm2_15 * xmm0_70) * xmm1_35
                xmm6_5 = (xmm6_2 * xmm3_2 - xmm2_15 * xmm4_2) * xmm1_35
            
            float eax_17
            float ecx_4
            
            if (not(p_2) || 0 f> xmm5_5 || xmm5_5 > 1f || 0 f> xmm6_5 || xmm6_5 > 1f)
                ecx_4 = ebx_1[5]
                eax_17 = ebx_1[4]
            else
                float xmm0_75 = ebx_1[2]
                float temp3_1 = ebx_1[6]
                xmm0_75 - temp3_1
                eax_16:1.b = (xmm0_75 == temp3_1 ? 1 : 0) << 6
                    | (is_unordered.d(xmm0_75, temp3_1) ? 1 : 0) << 2 | (xmm0_75 < temp3_1 ? 1 : 0)
                bool p_4 = unimplemented  {test ah, 0x44}
                
                if (p_4)
                    float xmm0_76 = ebx_1[3]
                    xmm0_76 f- ebx_1[7]
                    bool p_5 = unimplemented  {test ah, 0x44}
                    eax_17 = xmm3_2 * xmm5_5 f+ ebx_1[4]
                    
                    if (p_5)
                        ecx_4 = xmm4_2 * xmm5_5 f+ ebx_1[5]
                    else
                        ecx_4 = xmm0_76
                else
                    eax_17 = xmm0_75
                    ecx_4 = xmm4_2 * xmm5_5 f+ ebx_1[5]
            
            ebx_1[0xa] = eax_17
            ebx_1[0xb] = ecx_4
            float xmm0_78 = ebx_1[9] f- ebx_1[5]
            float xmm4_8 = ebx_1[6] f- *ebx_1
            float xmm6_6 = ebx_1[4]
            float xmm3_5 = ebx_1[1]
            float xmm2_18 = ebx_1[8] f- xmm6_6
            float xmm5_7 = ebx_1[7] f- xmm3_5
            float xmm1_37 = xmm0_78 * xmm4_8 - xmm2_18 * xmm5_7
            xmm1_37 - 0f
            eax_17:1.b = (xmm1_37 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm1_37, 0f) ? 1 : 0) << 2
                | (xmm1_37 < 0f ? 1 : 0)
            bool p_7 = unimplemented  {test ah, 0x44}
            float xmm2_21
            float xmm3_9
            float xmm6_9
            
            if (p_7)
                float xmm3_6 = xmm3_5 f- ebx_1[5]
                float xmm0_83 = 1f / xmm1_37
                float xmm1_40 = *ebx_1 - xmm6_6
                xmm6_9 = ebx_1[4]
                xmm2_21 = (xmm2_18 * xmm3_6 - xmm0_78 * xmm1_40) * xmm0_83
                xmm3_9 = (xmm3_6 * xmm4_8 - xmm1_40 * xmm5_7) * xmm0_83
            
            float eax_18
            float ecx_5
            
            if (not(p_7) || 0 f> xmm2_21 || xmm2_21 > 1f || 0 f> xmm3_9 || xmm3_9 > 1f)
                ecx_5 = ebx_1[1]
                eax_18 = *ebx_1
            else
                float temp5_1 = ebx_1[8]
                xmm6_9 - temp5_1
                eax_17:1.b = (xmm6_9 == temp5_1 ? 1 : 0) << 6
                    | (is_unordered.d(xmm6_9, temp5_1) ? 1 : 0) << 2 | (xmm6_9 < temp5_1 ? 1 : 0)
                bool p_9 = unimplemented  {test ah, 0x44}
                
                if (p_9)
                    float xmm0_84 = ebx_1[5]
                    float temp6_1 = ebx_1[9]
                    xmm0_84 - temp6_1
                    eax_17:1.b = (xmm0_84 == temp6_1 ? 1 : 0) << 6
                        | (is_unordered.d(xmm0_84, temp6_1) ? 1 : 0) << 2
                        | (xmm0_84 < temp6_1 ? 1 : 0)
                    bool p_11 = unimplemented  {test ah, 0x44}
                    
                    if (p_11)
                        eax_18 = xmm2_21 * xmm4_8 f+ *ebx_1
                        ecx_5 = xmm2_21 * xmm5_7 f+ ebx_1[1]
                    else
                        ecx_5 = xmm0_84
                        eax_18 = xmm2_21 * xmm4_8 f+ *ebx_1
                else
                    eax_18 = xmm6_9
                    ecx_5 = xmm2_21 * xmm5_7 f+ ebx_1[1]
            
            int32_t i_1 = 0
            int32_t* result_1 = result
            ebx_1[0xc] = eax_18
            ebx_1[0xd] = ecx_5
            ecx_3 = arg1
            
            do
                result = zx.d(*(&var_1c + i_1))
                float xmm0_88 = ebx_1[result * 2]
                float xmm1_42 = ebx_1[result * 2 + 1]
                
                if (arg3 != 0)
                    xmm0_88 = xmm0_88 - 0.5f
                    xmm1_42 = xmm1_42 - 0.5f
                
                *result_1 = xmm0_88
                i_1 += 1
                result_1[1] = xmm1_42
                result_1[2] = 0x3f000000
                result_1[3] = 0x3f800000
                result_1[4] = 0xffffffff
                float xmm1_43 = ebx_1[result * 2]
                float xmm2_27 = ebx_1[result * 2 + 1] f/ _mm_cvtepi32_ps(zx.o(*(ecx_3 + 0x40)))
                float xmm0_92 = _mm_cvtepi32_ps(zx.o(*(ecx_3 + 0x3c)))
                result_1[6] = xmm2_27
                result_1[5] = xmm1_43 / xmm0_92
                result_1 = &result_1[7]
            while (i_1 s< 0xc)
        else
            do
                float xmm0_18 =
                    (_mm_cvtepi32_ps(zx.o(i)) * 60f + xmm1_7) * 3.14159274f * 0.00555555569f
                ebx_1[i * 2] = ___libm_sse2_cosf(xmm0_18) * xmm0_12 + _mm_cvtepi32_ps(zx.o(esi_1))
                top += 2
                ebx_1[i * 2 + 1] =
                    ___libm_sse2_sinf(xmm0_18) * xmm0_12 + _mm_cvtepi32_ps(zx.o(edi_1))
                i += 1
            while (i s< 6)
            
            float xmm0_26 = *ebx_1
            float xmm1_12 = ebx_1[1]
            
            if (arg3 != 0)
                xmm0_26 = xmm0_26 - 0.5f
                xmm1_12 = xmm1_12 - 0.5f
            
            ecx_3 = arg1
            *result = xmm0_26
            result[1] = xmm1_12
            result[2] = 0x3f000000
            result[3] = 0x3f800000
            result[4] = 0xffffffff
            float xmm1_13 = *ebx_1
            float xmm2_2 = ebx_1[1] f/ _mm_cvtepi32_ps(zx.o(*(ecx_3 + 0x40)))
            uint128_t xmm0_29 = zx.o(*(ecx_3 + 0x3c))
            result[6] = xmm2_2
            result[5] = xmm1_13 / _mm_cvtepi32_ps(xmm0_29)
            float xmm0_31 = ebx_1[4]
            float xmm1_15 = ebx_1[5]
            
            if (arg3 != 0)
                xmm0_31 = xmm0_31 - 0.5f
                xmm1_15 = xmm1_15 - 0.5f
            
            result[7] = xmm0_31
            result[8] = xmm1_15
            result[9] = 0x3f000000
            result[0xa] = 0x3f800000
            result[0xb] = 0xffffffff
            float xmm1_16 = ebx_1[4]
            float xmm2_4 = ebx_1[5] f/ _mm_cvtepi32_ps(zx.o(*(ecx_3 + 0x40)))
            result[0xc] = xmm1_16 / _mm_cvtepi32_ps(zx.o(*(ecx_3 + 0x3c)))
            result[0xd] = xmm2_4
            float xmm0_36 = ebx_1[8]
            float xmm1_18 = ebx_1[9]
            
            if (arg3 != 0)
                xmm0_36 = xmm0_36 - 0.5f
                xmm1_18 = xmm1_18 - 0.5f
            
            result[0xe] = xmm0_36
            result[0xf] = xmm1_18
            result[0x10] = 0x3f000000
            result[0x11] = 0x3f800000
            result[0x12] = 0xffffffff
            float xmm1_19 = ebx_1[8]
            float xmm2_6 = ebx_1[9] f/ _mm_cvtepi32_ps(zx.o(*(ecx_3 + 0x40)))
            result[0x13] = xmm1_19 / _mm_cvtepi32_ps(zx.o(*(ecx_3 + 0x3c)))
            result[0x14] = xmm2_6
            float xmm0_41 = ebx_1[2]
            float xmm1_21 = ebx_1[3]
            
            if (arg3 != 0)
                xmm0_41 = xmm0_41 - 0.5f
                xmm1_21 = xmm1_21 - 0.5f
            
            result[0x15] = xmm0_41
            result[0x16] = xmm1_21
            result[0x17] = 0x3f000000
            result[0x18] = 0x3f800000
            result[0x19] = 0xffffffff
            float xmm1_22 = ebx_1[2]
            float xmm2_8 = ebx_1[3] f/ _mm_cvtepi32_ps(zx.o(*(ecx_3 + 0x40)))
            result[0x1a] = xmm1_22 / _mm_cvtepi32_ps(zx.o(*(ecx_3 + 0x3c)))
            result[0x1b] = xmm2_8
            float xmm0_46 = ebx_1[6]
            float xmm1_24 = ebx_1[7]
            
            if (arg3 != 0)
                xmm0_46 = xmm0_46 - 0.5f
                xmm1_24 = xmm1_24 - 0.5f
            
            result[0x1c] = xmm0_46
            result[0x1d] = xmm1_24
            result[0x1e] = 0x3f000000
            result[0x1f] = 0x3f800000
            result[0x20] = 0xffffffff
            float xmm1_25 = ebx_1[6]
            float xmm2_10 = ebx_1[7] f/ _mm_cvtepi32_ps(zx.o(*(ecx_3 + 0x40)))
            result[0x21] = xmm1_25 / _mm_cvtepi32_ps(zx.o(*(ecx_3 + 0x3c)))
            result[0x22] = xmm2_10
            float xmm0_51 = ebx_1[0xa]
            float xmm1_27 = ebx_1[0xb]
            
            if (arg3 != 0)
                xmm0_51 = xmm0_51 - 0.5f
                xmm1_27 = xmm1_27 - 0.5f
            
            result[0x23] = xmm0_51
            result[0x24] = xmm1_27
            result[0x25] = 0x3f000000
            result[0x26] = 0x3f800000
            result[0x27] = 0xffffffff
            float xmm1_28 = ebx_1[0xa]
            float xmm2_12 = ebx_1[0xb] f/ _mm_cvtepi32_ps(zx.o(*(ecx_3 + 0x40)))
            result[0x28] = xmm1_28 / _mm_cvtepi32_ps(zx.o(*(ecx_3 + 0x3c)))
            result[0x29] = xmm2_12
        
        int32_t* ecx_7 = *(ecx_3 + 8)
        
        if (ecx_7 == 0)
            result.b = 0
        else if ((*(*ecx_7 + 0x1c))().b == 0)
            result.b = 0
        else
            result.b = 1

char var_45_1 = result.b

if (ebx_1 != 0)
    j__free(ebx_1)
    result.b = var_45_1

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_48)
return result
