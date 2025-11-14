// 函数: sub_53c710
// 地址: 0x53c710
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c42d8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_84 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
float xmm6 = *(arg1 + 0x20)
float xmm0_1 = *(arg1 + 0x24) - xmm6
float esi = *(arg1 + 0x30)
float xmm3 = *(arg1 + 0x28)
float var_40 = esi
int32_t edx = *(arg1 + 0x34)
float xmm4 = 1f / xmm0_1
float* arg_4
int32_t* esi_1 = arg_4
float xmm5_1 = _mm_cvtepi32_ps(zx.o(esi))
float xmm0_3 = *esi_1 - xmm6
float xmm2_1 = _mm_cvtepi32_ps(zx.o(edx))
int32_t ecx = int.d(xmm0_3 * xmm5_1 * xmm4)
float xmm1 = 1f / (*(arg1 + 0x2c) - xmm3)
int32_t eax_4 = int.d((esi_1[2] f- xmm3) * xmm2_1 * xmm1)
int32_t edi = int.d((*arg2 - xmm6) * xmm5_1 * xmm4)
int32_t esi_3 = edi

if (ecx s< edi)
    esi_3 = ecx

if (ecx s> edi)
    edi = ecx

int32_t var_24 = edi
int32_t esi_4 = int.d((arg2[2] f- xmm3) * xmm2_1 * xmm1)
bool cond:3 = eax_4 s< esi_4
int32_t ecx_1 = esi_4

if (eax_4 s> esi_4)
    esi_4 = eax_4

if (cond:3)
    ecx_1 = eax_4

int32_t eax_5 = esi_3
int32_t var_14 = esi_4
float esi_5 = var_40

if (eax_5 s>= esi_5 || edi s< 0 || ecx_1 s>= edx || var_14 s< 0)
    eax_5.b = 0
    fsbase->NtTib.ExceptionList = ExceptionList
    return eax_5

var_40 = 0f

if (eax_5 s< 0)
    eax_5 = var_40

int32_t esi_6

if (edi s< esi_5)
    esi_6 = edi
else
    esi_6 = esi_5 i- 1
    var_24 = esi_6

if (ecx_1 s< 0)
    ecx_1 = 0

int32_t var_2c = ecx_1

if (var_14 s>= edx)
    var_14 = edx - 1

int32_t* var_60 = nullptr
int32_t var_5c = 0
int32_t* edi_1 = sub_4a6eb0()
var_60 = edi_1
int32_t ecx_4 = var_2c
int32_t var_4 = 0
int64_t var_6c

if (ecx_4 s<= var_14)
    int32_t eax_8 = eax_5
    
    do
        int32_t edx_1 = eax_8
        
        if (eax_8 s<= esi_6)
            void* esi_7 = arg1
            float xmm5_3 = _mm_cvtepi32_ps(zx.o(ecx_4))
            float xmm7_2 = _mm_cvtepi32_ps(zx.o(ecx_4 + 1))
            float var_54_1 = xmm5_3
            float var_58_1 = xmm7_2
            
            do
                int32_t eax_10 = *(esi_7 + 0x30)
                float xmm3_1 = *(esi_7 + 0x20)
                float xmm2_3 = *(esi_7 + 0x24) - xmm3_1
                float xmm0_21 = _mm_cvtepi32_ps(zx.o(eax_10))
                float* eax_11 = arg_4
                float xmm1_1 = 1f / xmm0_21
                edi_1 = eax_10 * ecx_4 + edx_1
                float xmm6_2 = _mm_cvtepi32_ps(zx.o(edx_1))
                int32_t var_4c_1 = edx_1 + 1
                float xmm0_24 = _mm_cvtepi32_ps(zx.o(edx_1 + 1)) * xmm2_3
                float xmm6_5 = xmm6_2 * xmm2_3 * xmm1_1 + xmm3_1
                float xmm4_1 = eax_11[2]
                float xmm3_2 = *(esi_7 + 0x28)
                float xmm2_5 = *(esi_7 + 0x2c) - xmm3_2
                float var_18_1 = xmm6_5
                var_40 = xmm0_24 * xmm1_1 + xmm3_1
                float xmm1_2 = 1f / _mm_cvtepi32_ps(zx.o(*(esi_7 + 0x34)))
                float xmm7_3 = *eax_11
                float xmm1_3 = arg2[2]
                float xmm5_6 = xmm5_3 * xmm2_5 * xmm1_2 + xmm3_2
                float xmm1_4 = xmm1_3 - xmm4_1
                float xmm0_32 = xmm7_2 * xmm2_5 * xmm1_2 + xmm3_2
                float xmm0_33 = *arg2
                float xmm2_7 = xmm0_32 - xmm5_6
                float xmm0_34 = xmm0_33 - xmm7_3
                float xmm5_9 = xmm2_7 * xmm0_34 - 0f * xmm1_4
                xmm5_9 f- 0
                int32_t* eax_12
                eax_12:1.b = (xmm5_9 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm5_9, 0f) ? 1 : 0) << 2
                    | (xmm5_9 < 0f ? 1 : 0)
                bool p_2 = unimplemented  {test ah, 0x44}
                
                if (not(p_2))
                    ecx_4:1.b = 0
                else
                    float xmm3_4 = xmm4_1 - xmm5_6
                    float xmm1_6 = xmm7_3 - xmm6_5
                    float xmm6_8 = xmm3_4 * 0f - xmm1_6 * xmm2_7
                    float xmm3_6 = xmm3_4 * xmm0_34 - xmm1_6 * xmm1_4
                    
                    if (((xmm5_9 <= 0f || xmm6_8 f< 0 || not(xmm5_9 >= xmm6_8))
                            && (0 f<= xmm5_9 || xmm6_8 < xmm5_9 || 0 f< xmm6_8)) || ((xmm5_9 f<= 0
                            || xmm3_6 f< 0 || not(xmm5_9 >= xmm3_6))
                            && (0 f<= xmm5_9 || xmm3_6 < xmm5_9 || 0 f< xmm3_6)))
                        xmm6_5 = var_18_1
                        ecx_4:1.b = 0
                    else
                        xmm6_5 = var_18_1
                        ecx_4:1.b = 1
                
                float xmm1_9 = var_40 - xmm6_5
                float xmm0_39 = xmm0_33 - xmm7_3
                float xmm1_11 = xmm1_3 - xmm4_1
                float xmm3_8 = 0f * xmm0_39 - xmm1_9 * xmm1_11
                xmm3_8 f- 0
                eax_12:1.b = (xmm3_8 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm3_8, 0f) ? 1 : 0) << 2
                    | (xmm3_8 < 0f ? 1 : 0)
                bool p_4 = unimplemented  {test ah, 0x44}
                int32_t edx_2
                
                if (not(p_4))
                    edx_2.b = 0
                else
                    float xmm5_11 = xmm4_1 - xmm5_6
                    float xmm1_13 = xmm7_3 - xmm6_5
                    float xmm5_13 = xmm5_11 * xmm0_39 - xmm1_13 * xmm1_11
                    float xmm6_11 = xmm5_11 * xmm1_9 - xmm1_13 * 0f
                    
                    if (((xmm3_8 <= 0f || xmm6_11 f< 0 || not(xmm3_8 >= xmm6_11))
                            && (0 f<= xmm3_8 || xmm6_11 < xmm3_8 || 0 f< xmm6_11)) || ((xmm3_8 f<= 0
                            || xmm5_13 f< 0 || not(xmm3_8 >= xmm5_13))
                            && (0 f<= xmm3_8 || xmm5_13 < xmm3_8 || 0 f< xmm5_13)))
                        xmm6_5 = var_18_1
                        edx_2.b = 0
                    else
                        xmm6_5 = var_18_1
                        edx_2.b = 1
                
                float xmm0_45 = xmm0_33 - xmm7_3
                float xmm1_16 = xmm1_3 - xmm4_1
                float xmm3_10 = 0f * xmm0_45 - xmm1_9 * xmm1_16
                xmm3_10 f- 0
                eax_12:1.b = (xmm3_10 == 0f ? 1 : 0) << 6
                    | (is_unordered.d(xmm3_10, 0f) ? 1 : 0) << 2 | (xmm3_10 < 0f ? 1 : 0)
                bool p_6 = unimplemented  {test ah, 0x44}
                float xmm5_17
                float xmm6_14
                
                if (p_6)
                    float xmm5_15 = xmm4_1 - xmm0_32
                    float xmm1_18 = xmm7_3 - xmm6_5
                    xmm5_17 = xmm5_15 * xmm0_45 - xmm1_18 * xmm1_16
                    xmm6_14 = xmm5_15 * xmm1_9 - xmm1_18 * 0f
                
                if (not(p_6) || ((xmm3_10 <= 0f || xmm6_14 f< 0 || not(xmm3_10 >= xmm6_14))
                        && (0 f<= xmm3_10 || xmm6_14 < xmm3_10 || 0 f< xmm6_14)) || ((xmm3_10 f<= 0
                        || xmm5_17 f< 0 || not(xmm3_10 >= xmm5_17))
                        && (0 f<= xmm3_10 || xmm5_17 < xmm3_10 || 0 f< xmm5_17)))
                    ecx_4.b = 0
                else
                    ecx_4.b = 1
                
                float xmm3_12 = xmm1_3 - xmm4_1
                float xmm6_16 = xmm0_33 - xmm7_3
                float xmm1_22 = xmm2_7 * xmm6_16 - 0f * xmm3_12
                xmm1_22 f- 0
                eax_12:1.b = (xmm1_22 == 0f ? 1 : 0) << 6
                    | (is_unordered.d(xmm1_22, 0f) ? 1 : 0) << 2 | (xmm1_22 < 0f ? 1 : 0)
                bool p_8 = unimplemented  {test ah, 0x44}
                float xmm3_15
                float xmm4_4
                
                if (p_8)
                    float xmm4_2 = xmm4_1 - xmm5_6
                    float xmm7_4 = xmm7_3 - var_40
                    xmm4_4 = xmm4_2 * xmm6_16 - xmm7_4 * xmm3_12
                    xmm3_15 = xmm4_2 * 0f - xmm7_4 * xmm2_7
                
                if (not(p_8) || ((xmm1_22 <= 0f || xmm3_15 f< 0 || not(xmm1_22 >= xmm3_15))
                        && (0 f<= xmm1_22 || xmm3_15 < xmm1_22 || 0 f< xmm3_15)) || ((xmm1_22 f<= 0
                        || xmm4_4 f< 0 || not(xmm1_22 >= xmm4_4))
                        && (0 f<= xmm1_22 || xmm4_4 < xmm1_22 || 0 f< xmm4_4)))
                    eax_12.b = 0
                else
                    eax_12.b = 1
                
                if (ecx_4:1.b != 0 || edx_2.b != 0 || ecx_4.b != 0 || eax_12.b != 0)
                    int32_t eax_13 = *(esi_7 + 0x14)
                    edi_1 *= 3
                    int32_t i = *(eax_13 + (edi_1 << 2))
                    
                    if (i != *(eax_13 + (edi_1 << 2) + 4))
                        do
                            uint32_t var_88_1 = zx.d(data_75dd2f)
                            int32_t i_1 = i
                            ecx_4 = sub_4a6ee0(&var_60, &var_6c:4, ecx_4)
                            i += 4
                        while (i != *(*(arg1 + 0x14) + (edi_1 << 2) + 4))
                    
                    esi_7 = arg1
                
                edx_1 = var_4c_1
                xmm5_3 = var_54_1
                xmm7_2 = var_58_1
                ecx_4 = var_2c
            while (edx_1 s<= var_24)
            
            esi_6 = var_24
            eax_8 = eax_5
        
        ecx_4 += 1
        var_2c = ecx_4
    while (ecx_4 s<= var_14)
    
    edi_1 = var_60

float eax_17 = *edi_1
float var_34_2 = 3.40282347e+38f
var_40 = eax_17

if (eax_17 == edi_1)
    arg2:3.b = 0
else
    float esi_8 = arg3
    
    do
        float ecx_6 = *(eax_17 i+ 0x10)
        float* edx_3 = arg_4
        float xmm7_6 = *(ecx_6 i+ 0x18)
        float xmm2_9 = *arg2 - *edx_3
        float xmm3_17 = arg2[1] f- edx_3[1]
        float xmm5_19 = *(ecx_6 i+ 0x1c)
        float xmm4_6 = arg2[2] f- edx_3[2]
        float xmm1_23 = *(ecx_6 i+ 0x20)
        float xmm6_20 = xmm5_19 * xmm3_17 + xmm7_6 * xmm2_9 + xmm1_23 * xmm4_6
        xmm6_20 f- 0
        int32_t* eax_18
        eax_18:1.b = (xmm6_20 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm6_20, 0f) ? 1 : 0) << 2
            | (xmm6_20 < 0f ? 1 : 0)
        bool p_10 = unimplemented  {test ah, 0x44}
        
        if (p_10)
            float xmm1_27 = ((*(ecx_6 i+ 0x24) ^ (data_7094c0).d)
                - (xmm5_19 * edx_3[1] + xmm7_6 * *edx_3 + xmm1_23 * edx_3[2])) / xmm6_20
            
            if (not(0 f> xmm1_27) && not(xmm1_27 > 1f))
                float xmm4_8 = xmm4_6 * xmm1_27 + edx_3[2]
                float xmm2_11[0x4] = xmm2_9 * xmm1_27 + *edx_3
                int64_t xmm3_19 = xmm3_17 * xmm1_27 + edx_3[1]
                float var_64_1 = xmm4_8
                float var_58_2 = xmm2_11
                int64_t xmm0_58 = _mm_unpacklo_ps(xmm2_11, xmm3_19)
                arg3 = xmm3_19
                var_6c = xmm0_58
                
                if (sub_53cfa0(ecx_6, &var_6c) != 0)
                    float xmm1_32 = *(esi_8 i+ 0x18) * arg3 + *(esi_8 i+ 8) * var_58_2
                        + *(esi_8 i+ 0x28) * xmm4_8 f+ *(esi_8 i+ 0x38)
                    float xmm2_16 = *(esi_8 i+ 0x1c) * arg3 + *(esi_8 i+ 0xc) * var_58_2
                        + *(esi_8 i+ 0x2c) * xmm4_8 f+ *(esi_8 i+ 0x3c)
                    xmm2_16 - 1f
                    bool p_12 = unimplemented  {test ah, 0x44}
                    
                    if (p_12)
                        xmm2_16 - 0f
                        bool p_14 = unimplemented  {test ah, 0x44}
                        
                        if (p_14)
                            xmm1_32 = 1f / xmm2_16 * xmm1_32
                    
                    if (not(var_34_2 <= xmm1_32))
                        var_34_2 = xmm1_32
                        *arg4 = xmm0_58
                        arg4[1].d = xmm4_8
        
        sub_418380(&var_40)
        eax_17 = var_40
    while (eax_17 != edi_1)
    
    var_34_2 - 3.40282347e+38f
    arg2:3.b = 1
    eax_17:1.b = (var_34_2 == 3.40282347e+38f ? 1 : 0) << 6
        | (is_unordered.d(var_34_2, 3.40282347e+38f) ? 1 : 0) << 2
        | (var_34_2 < 3.40282347e+38f ? 1 : 0)
    bool p_16 = unimplemented  {test ah, 0x44}
    
    if (not(p_16))
        arg2:3.b = 0

sub_4200d0(&var_60, &arg_4, *edi_1, edi_1)
j__free(var_60)
int32_t eax_22
eax_22.b = arg2:3.b
fsbase->NtTib.ExceptionList = ExceptionList
return eax_22
