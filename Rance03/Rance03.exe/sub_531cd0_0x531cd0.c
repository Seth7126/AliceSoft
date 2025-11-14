// 函数: sub_531cd0
// 地址: 0x531cd0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c3b58
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_8c = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
float xmm3 = *(arg1 + 0x1c)
float* arg_4
int32_t* edi = arg_4
int32_t* eax_3 = edi
float xmm4 = *edi
float xmm1 = 1f / (*(arg1 + 0x20) - xmm3)
float xmm5 = *arg2
float xmm2_1 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x2c)))

if (xmm4 > xmm5)
    eax_3 = arg2

int32_t eax_4 = int.d((*eax_3 - xmm3) * xmm2_1 * xmm1)
float* eax_5 = edi

if (xmm5 > xmm4)
    eax_5 = arg2

float xmm3_1 = *(arg1 + 0x24)
int32_t var_24 = int.d((*eax_5 - xmm3) * xmm2_1 * xmm1)
void* eax_7 = &edi[2]
void* var_34 = eax_7

if (edi[2] f> arg2[2])
    eax_7 = &arg2[2]

int32_t ecx_2 = *(arg1 + 0x30)
float xmm1_1 = 1f / (*(arg1 + 0x28) - xmm3_1)
float xmm0_14 = *eax_7 - xmm3_1
float xmm2_3 = _mm_cvtepi32_ps(zx.o(ecx_2))
int32_t edi_1 = int.d(xmm0_14 * xmm2_3 * xmm1_1)
void* eax_9 = var_34
int32_t edx_2 = *(arg1 + 0x2c)

if (arg2[2] f> *eax_9)
    eax_9 = &arg2[2]

float xmm0_21 = (*eax_9 - xmm3_1) * xmm2_3 * xmm1_1
int32_t var_2c = int.d(xmm0_21)
int32_t result

if (eax_4 s< edx_2 && var_24 s>= 0 && edi_1 s< ecx_2 && var_2c s>= 0)
    int32_t esi_1 = eax_4
    float var_48 = 0f
    
    if (esi_1 s< 0)
        esi_1 = var_48
    
    void* esi_2 = arg1
    
    if (var_24 s>= edx_2)
        var_24 = edx_2 - 1
    
    if (edi_1 s< 0)
        edi_1 = 0
    
    int32_t var_28_1 = edi_1
    
    if (int.d(xmm0_21) s>= ecx_2)
        var_2c = ecx_2 - 1
    
    int32_t* var_68 = nullptr
    int32_t var_64_1 = 0
    int32_t* edi_2 = sub_4a6eb0()
    var_68 = edi_2
    int32_t ecx_3 = var_28_1
    int32_t var_4 = 0
    int64_t var_74
    
    if (ecx_3 s<= var_2c)
        int32_t eax_14 = var_24
        int32_t edi_3 = esi_1
        
        do
            int32_t edx_3 = edi_3
            
            if (edi_3 s<= eax_14)
                float xmm5_2 = _mm_cvtepi32_ps(zx.o(ecx_3))
                float xmm7_2 = _mm_cvtepi32_ps(zx.o(ecx_3 + 1))
                float var_5c_1 = xmm5_2
                float var_60_1 = xmm7_2
                
                do
                    int32_t eax_16 = *(esi_2 + 0x2c)
                    float xmm3_2 = *(esi_2 + 0x1c)
                    float xmm2_5 = *(esi_2 + 0x20) - xmm3_2
                    float xmm0_23 = _mm_cvtepi32_ps(zx.o(eax_16))
                    float* eax_17 = arg_4
                    float xmm1_2 = 1f / xmm0_23
                    int32_t edi_6 = eax_16 * ecx_3 + edx_3
                    float xmm6_2 = _mm_cvtepi32_ps(zx.o(edx_3))
                    int32_t var_54_1 = edx_3 + 1
                    float xmm0_26 = _mm_cvtepi32_ps(zx.o(edx_3 + 1)) * xmm2_5
                    float xmm6_5 = xmm6_2 * xmm2_5 * xmm1_2 + xmm3_2
                    float xmm3_3 = *(esi_2 + 0x24)
                    float xmm2_7 = *(esi_2 + 0x28) - xmm3_3
                    float var_18_1 = xmm6_5
                    var_48 = xmm0_26 * xmm1_2 + xmm3_2
                    float xmm1_3 = 1f / _mm_cvtepi32_ps(zx.o(*(esi_2 + 0x30)))
                    float xmm7_3 = *eax_17
                    float xmm4_1 = *var_34
                    float xmm5_5 = xmm5_2 * xmm2_7 * xmm1_3 + xmm3_3
                    float xmm0_34 = xmm7_2 * xmm2_7 * xmm1_3 + xmm3_3
                    float xmm0_35 = *arg2
                    float xmm2_9 = xmm0_34 - xmm5_5
                    float xmm0_36 = xmm0_35 - xmm7_3
                    float xmm1_4 = arg2[2]
                    float xmm1_5 = xmm1_4 - xmm4_1
                    float xmm5_8 = xmm2_9 * xmm0_36 - 0f * xmm1_5
                    xmm5_8 f- 0
                    void* eax_20
                    eax_20:1.b = (xmm5_8 == 0f ? 1 : 0) << 6
                        | (is_unordered.d(xmm5_8, 0f) ? 1 : 0) << 2 | (xmm5_8 < 0f ? 1 : 0)
                    bool p_2 = unimplemented  {test ah, 0x44}
                    
                    if (not(p_2))
                        ecx_3:1.b = 0
                    else
                        float xmm3_5 = xmm4_1 - xmm5_5
                        float xmm1_7 = xmm7_3 - xmm6_5
                        float xmm6_8 = xmm3_5 * 0f - xmm1_7 * xmm2_9
                        float xmm3_7 = xmm3_5 * xmm0_36 - xmm1_7 * xmm1_5
                        
                        if (((xmm5_8 <= 0f || xmm6_8 f< 0 || not(xmm5_8 >= xmm6_8))
                                && (0 f<= xmm5_8 || xmm6_8 < xmm5_8 || 0 f< xmm6_8)) || ((xmm5_8 f<= 0
                                || xmm3_7 f< 0 || not(xmm5_8 >= xmm3_7))
                                && (0 f<= xmm5_8 || xmm3_7 < xmm5_8 || 0 f< xmm3_7)))
                            xmm6_5 = var_18_1
                            ecx_3:1.b = 0
                        else
                            xmm6_5 = var_18_1
                            ecx_3:1.b = 1
                    
                    float xmm1_10 = var_48 - xmm6_5
                    float xmm0_41 = xmm0_35 - xmm7_3
                    float xmm1_12 = xmm1_4 - xmm4_1
                    float xmm3_9 = 0f * xmm0_41 - xmm1_10 * xmm1_12
                    xmm3_9 f- 0
                    eax_20:1.b = (xmm3_9 == 0f ? 1 : 0) << 6
                        | (is_unordered.d(xmm3_9, 0f) ? 1 : 0) << 2 | (xmm3_9 < 0f ? 1 : 0)
                    bool p_4 = unimplemented  {test ah, 0x44}
                    int32_t edx_4
                    
                    if (not(p_4))
                        edx_4.b = 0
                    else
                        float xmm5_10 = xmm4_1 - xmm5_5
                        float xmm1_14 = xmm7_3 - xmm6_5
                        float xmm5_12 = xmm5_10 * xmm0_41 - xmm1_14 * xmm1_12
                        float xmm6_11 = xmm5_10 * xmm1_10 - xmm1_14 * 0f
                        
                        if (((xmm3_9 <= 0f || xmm6_11 f< 0 || not(xmm3_9 >= xmm6_11))
                                && (0 f<= xmm3_9 || xmm6_11 < xmm3_9 || 0 f< xmm6_11)) || ((xmm3_9 f<= 0
                                || xmm5_12 f< 0 || not(xmm3_9 >= xmm5_12))
                                && (0 f<= xmm3_9 || xmm5_12 < xmm3_9 || 0 f< xmm5_12)))
                            xmm6_5 = var_18_1
                            edx_4.b = 0
                        else
                            xmm6_5 = var_18_1
                            edx_4.b = 1
                    
                    float xmm0_47 = xmm0_35 - xmm7_3
                    float xmm1_17 = xmm1_4 - xmm4_1
                    float xmm3_11 = 0f * xmm0_47 - xmm1_10 * xmm1_17
                    xmm3_11 f- 0
                    eax_20:1.b = (xmm3_11 == 0f ? 1 : 0) << 6
                        | (is_unordered.d(xmm3_11, 0f) ? 1 : 0) << 2 | (xmm3_11 < 0f ? 1 : 0)
                    bool p_6 = unimplemented  {test ah, 0x44}
                    float xmm5_16
                    float xmm6_14
                    
                    if (p_6)
                        float xmm5_14 = xmm4_1 - xmm0_34
                        float xmm1_19 = xmm7_3 - xmm6_5
                        xmm5_16 = xmm5_14 * xmm0_47 - xmm1_19 * xmm1_17
                        xmm6_14 = xmm5_14 * xmm1_10 - xmm1_19 * 0f
                    
                    if (not(p_6) || ((xmm3_11 <= 0f || xmm6_14 f< 0 || not(xmm3_11 >= xmm6_14))
                            && (0 f<= xmm3_11 || xmm6_14 < xmm3_11 || 0 f< xmm6_14)) || ((xmm3_11 f<= 0
                            || xmm5_16 f< 0 || not(xmm3_11 >= xmm5_16))
                            && (0 f<= xmm3_11 || xmm5_16 < xmm3_11 || 0 f< xmm5_16)))
                        ecx_3.b = 0
                    else
                        ecx_3.b = 1
                    
                    float xmm3_13 = xmm1_4 - xmm4_1
                    float xmm6_16 = xmm0_35 - xmm7_3
                    float xmm1_23 = xmm2_9 * xmm6_16 - 0f * xmm3_13
                    xmm1_23 f- 0
                    eax_20:1.b = (xmm1_23 == 0f ? 1 : 0) << 6
                        | (is_unordered.d(xmm1_23, 0f) ? 1 : 0) << 2 | (xmm1_23 < 0f ? 1 : 0)
                    bool p_8 = unimplemented  {test ah, 0x44}
                    float xmm3_16
                    float xmm4_4
                    
                    if (p_8)
                        float xmm4_2 = xmm4_1 - xmm5_5
                        float xmm7_4 = xmm7_3 - var_48
                        xmm4_4 = xmm4_2 * xmm6_16 - xmm7_4 * xmm3_13
                        xmm3_16 = xmm4_2 * 0f - xmm7_4 * xmm2_9
                    
                    if (not(p_8) || ((xmm1_23 <= 0f || xmm3_16 f< 0 || not(xmm1_23 >= xmm3_16))
                            && (0 f<= xmm1_23 || xmm3_16 < xmm1_23 || 0 f< xmm3_16)) || ((xmm1_23 f<= 0
                            || xmm4_4 f< 0 || not(xmm1_23 >= xmm4_4))
                            && (0 f<= xmm1_23 || xmm4_4 < xmm1_23 || 0 f< xmm4_4)))
                        eax_20.b = 0
                    else
                        eax_20.b = 1
                    
                    if (ecx_3:1.b != 0 || edx_4.b != 0 || ecx_3.b != 0 || eax_20.b != 0)
                        int32_t eax_21 = *(esi_2 + 0x10)
                        int32_t edi_7 = edi_6 * 3
                        int32_t i = *(eax_21 + (edi_7 << 2))
                        
                        if (i != *(eax_21 + (edi_7 << 2) + 4))
                            do
                                uint32_t var_90_1 = zx.d(data_75dd2d)
                                int32_t i_1 = i
                                ecx_3 = sub_4a6ee0(&var_68, &var_74:4, ecx_3)
                                i += 4
                            while (i != *(*(arg1 + 0x10) + (edi_7 << 2) + 4))
                        
                        esi_2 = arg1
                    
                    edx_3 = var_54_1
                    eax_14 = var_24
                    xmm5_2 = var_5c_1
                    xmm7_2 = var_60_1
                    ecx_3 = var_28_1
                while (edx_3 s<= eax_14)
                
                edi_3 = esi_1
            
            ecx_3 += 1
            var_28_1 = ecx_3
        while (ecx_3 s<= var_2c)
        
        edi_2 = var_68
    
    float eax_25 = *edi_2
    float var_3c_2 = 3.40282347e+38f
    var_48 = eax_25
    
    if (eax_25 == edi_2)
        arg2:3.b = 0
    else
        float esi_3 = arg3
        
        do
            void* ecx_5 = *(eax_25 i+ 0x10)
            float* edx_5 = arg_4
            float xmm7_6 = *(ecx_5 + 0x58)
            float xmm2_11 = *arg2 - *edx_5
            float xmm3_18 = arg2[1] f- edx_5[1]
            float xmm5_18 = *(ecx_5 + 0x5c)
            float xmm1_24 = *(ecx_5 + 0x60)
            float xmm4_6 = arg2[2] f- edx_5[2]
            float xmm6_20 = xmm5_18 * xmm3_18 + xmm7_6 * xmm2_11 + xmm1_24 * xmm4_6
            xmm6_20 f- 0
            void* eax_27
            eax_27:1.b = (xmm6_20 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm6_20, 0f) ? 1 : 0) << 2
                | (xmm6_20 < 0f ? 1 : 0)
            bool p_10 = unimplemented  {test ah, 0x44}
            
            if (p_10)
                float xmm1_28 = ((*(ecx_5 + 0x64) ^ (data_7094c0).d)
                    - (xmm5_18 * edx_5[1] + xmm7_6 * *edx_5 + xmm1_24 * edx_5[2])) / xmm6_20
                
                if (not(0 f> xmm1_28) && not(xmm1_28 > 1f))
                    float xmm2_13[0x4] = xmm2_11 * xmm1_28 + *edx_5
                    int64_t xmm3_20 = xmm3_18 * xmm1_28 + edx_5[1]
                    float xmm4_8 = xmm4_6 * xmm1_28 + edx_5[2]
                    float var_60_2 = xmm2_13
                    int64_t xmm0_60 = _mm_unpacklo_ps(xmm2_13, xmm3_20)
                    arg3 = xmm3_20
                    var_74 = xmm0_60
                    float var_6c_1 = xmm4_8
                    
                    if (sub_52fec0(ecx_5, &var_74) != 0)
                        float xmm1_33 = *(esi_3 i+ 0x18) * arg3 + *(esi_3 i+ 8) * var_60_2
                            + *(esi_3 i+ 0x28) * xmm4_8 f+ *(esi_3 i+ 0x38)
                        float xmm2_18 = *(esi_3 i+ 0x1c) * arg3 + *(esi_3 i+ 0xc) * var_60_2
                            + *(esi_3 i+ 0x2c) * xmm4_8 f+ *(esi_3 i+ 0x3c)
                        xmm2_18 - 1f
                        bool p_12 = unimplemented  {test ah, 0x44}
                        
                        if (p_12)
                            xmm2_18 - 0f
                            bool p_14 = unimplemented  {test ah, 0x44}
                            
                            if (p_14)
                                xmm1_33 = 1f / xmm2_18 * xmm1_33
                        
                        if (not(var_3c_2 <= xmm1_33))
                            var_3c_2 = xmm1_33
                            *arg4 = xmm0_60
                            arg4[1].d = xmm4_8
            
            sub_418380(&var_48)
            eax_25 = var_48
        while (eax_25 != edi_2)
        
        var_3c_2 - 3.40282347e+38f
        arg2:3.b = 1
        eax_25:1.b = (var_3c_2 == 3.40282347e+38f ? 1 : 0) << 6
            | (is_unordered.d(var_3c_2, 3.40282347e+38f) ? 1 : 0) << 2
            | (var_3c_2 < 3.40282347e+38f ? 1 : 0)
        bool p_16 = unimplemented  {test ah, 0x44}
        
        if (not(p_16))
            arg2:3.b = 0
    
    sub_4200d0(&var_68, &arg_4, *edi_2, edi_2)
    j__free(var_68)
    result.b = arg2:3.b
else
    result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
return result
