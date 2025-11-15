// 函数: sub_6bcf20
// 地址: 0x6bcf20
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t* edi
int32_t* var_9c = edi
uint32_t (* result_3)[0x4] = *arg4
int32_t* eax_3 = arg4[1]
uint32_t (* var_50)[0x4]

if (eax_3[0x7d] == 0)
    var_50 = 0x10
else
    var_50 = eax_3[0x7f]

int32_t eax_5 = *(arg2 + ((*eax_3 * 0xf + arg3) << 2) + 0x84)
int32_t esi_1 = *(arg2 + (arg3 << 2) + 0x138)
int32_t xmm0_1 = _mm_cvtpd_ps(zx.o(*((*(arg2 + (arg3 << 2) + 0xfc) << 3) + &data_775130)))
int32_t edi_1 = arg10 << 2
int32_t var_7c = _mm_cvtpd_ps(zx.o(*((esi_1 << 3) + &data_775130)))
__alloca_probe_16(edi_1)
int32_t* var_4c = &var_9c
__alloca_probe_16(edi_1)
int32_t* var_14 = &var_9c
__alloca_probe_16(edi_1)
int32_t* var_20 = &var_9c
__alloca_probe_16(edi_1)
int32_t* var_48 = &var_9c
__alloca_probe_16(edi_1)
int32_t* var_64 = &var_9c
__alloca_probe_16(((*arg5)[0x121] + arg10) << 2)
int32_t* var_78 = &var_9c

if (result_3 s> 0x3e8)
    var_7c = _mm_cvtpd_ps(zx.o(*((esi_1 << 3) + &data_77aeb8)))

int32_t esi_4 = (var_50 * arg10) << 2
__alloca_probe_16(esi_4)
*var_4c = &var_9c
__alloca_probe_16(esi_4)
*var_14 = &var_9c
__alloca_probe_16(esi_4)
var_9c = &var_9c
__alloca_probe_16(esi_4)
int32_t*** esi_5 = var_48
int32_t edx = arg10
*esi_5 = &var_9c

if (edx s> 1)
    void* ecx_8 = &var_14[1]
    int32_t edi_3 = var_4c - var_14
    int32_t edx_2 = var_50 << 2
    int32_t i_7 = arg10 - 1
    int32_t var_5c_1 = edi_3
    int32_t i
    
    do
        ecx_8 += 4
        *(edi_3 + ecx_8 - 4) = *var_4c + edx_2
        *(ecx_8 - 4) = *var_14 + edx_2
        *(var_20 - var_14 + ecx_8 - 4) = *var_20 + edx_2
        *(esi_5 - var_14 + ecx_8 - 4) = *var_48 + edx_2
        edi_3 = var_5c_1
        edx_2 += var_50 << 2
        i = i_7
        i_7 -= 1
    while (i != 1)
    edx = arg10

uint32_t (* esi_17)[0x4] = arg5
int32_t i_1 = 0

if ((*esi_17)[0x121] + edx s> 0)
    do
        var_78[i_1] = 0
        i_1 += 1
    while (i_1 s< (*esi_17)[0x121] + edx)

uint32_t (* result)[0x4] = result_3
void* edi_7 = nullptr
void* var_18 = nullptr

if (result s> 0)
    uint32_t (* edx_3)[0x4] = var_50
    arg9 -= result
    int32_t ecx_10 = neg.d(edx_3)
    uint32_t (* result_4)[0x4] = result
    void* eax_42 = eax_5 - result_4
    uint32_t (* result_5)[0x4] = result_4
    
    do
        uint32_t (* eax_43)[0x4] = edx_3
        
        if (edx_3 s> result_4)
            eax_43 = result_4
        
        int32_t esi_8 = 0
        sub_700660(var_64, arg8, edi_1)
        result = _memset(*var_48, 0, esi_4)
        
        if (arg10 s> 0)
            int32_t* esi_9 = var_20
            void* ecx_12 = var_64 - arg6
            void* eax_46 = arg6 - esi_9
            void* edi_9 = arg7 - var_64
            int32_t* edx_5 = var_4c - esi_9
            void* eax_48 = var_14 - esi_9
            int32_t* var_24_1 = esi_9
            int32_t* eax_50 = var_48 - esi_9
            void* var_60_2 = ecx_12
            void* result_2 = var_78 - esi_9
            int32_t* var_2c_1 = edx_5
            void* edi_11 = edi_9
            int32_t i_6 = arg10
            int32_t i_2
            
            do
                void* eax_55 = eax_46 + esi_9 + ecx_12
                void* edi_13 = *(eax_55 + edi_11) + (var_18 << 2)
                int32_t ecx_15 = 0
                void* var_54_1 = edi_13
                
                if (*eax_55 == 0)
                    if (eax_43 s> 0)
                        do
                            *(*esi_9 + (ecx_15 << 2)) = 0x2edbe6ff
                            *(*(edx_5 + esi_9) + (ecx_15 << 2)) = 0
                            *(*(eax_48 + esi_9) + (ecx_15 << 2)) = 0
                            *(*(eax_50 + esi_9) + (ecx_15 << 2)) = 0
                            *(edi_13 + (ecx_15 << 2)) = 0
                            ecx_15 += 1
                        while (ecx_15 s< eax_43)
                    
                    result = result_2
                    *(result + esi_9) = 0
                else
                    uint32_t (* edx_6)[0x4] = eax_43
                    int32_t var_30_1 = 0
                    
                    if (edx_6 s>= 4)
                        void* eax_56 = *esi_9
                        void* edx_7 = edi_13 + 0xc
                        void* ecx_16 = eax_56 + 4
                        int32_t j_4 = (&(*eax_43)[-1] u>> 2) + 1
                        var_30_1 = j_4 << 2
                        int32_t j
                        
                        do
                            int32_t eax_58 = *(edx_7 - 0xc)
                            ecx_16 += 0x10
                            edx_7 += 0x10
                            *(ecx_16 - 0x14) = *((eax_58 << 2) + &data_775178)
                            *(ecx_16 - 0x10) =
                                *((*(ecx_16 + edi_13 - eax_56 - 0x10) << 2) + &data_775178)
                            *(ecx_16 - 0xc) = *((*(edx_7 - 0x14) << 2) + &data_775178)
                            *(ecx_16 - 8) = *((*(edx_7 - 0x10) << 2) + &data_775178)
                            j = j_4
                            j_4 -= 1
                        while (j != 1)
                        esi_9 = var_24_1
                        ecx_15 = var_30_1
                        edi_13 = var_54_1
                        edx_6 = eax_43
                    
                    if (ecx_15 s< edx_6)
                        int32_t eax_66 = *esi_9
                        void* j_3 = edx_6 - var_30_1
                        int32_t* ecx_17 = eax_66 + (ecx_15 << 2)
                        void* j_1
                        
                        do
                            int32_t eax_67 = *(ecx_17 + edi_13 - eax_66)
                            ecx_17 = &ecx_17[1]
                            ecx_17[-1] = *((eax_67 << 2) + &data_775178)
                            j_1 = j_3
                            j_3 -= 1
                        while (j_1 != 1)
                        edx_6 = eax_43
                    
                    int32_t eax_70 = var_18 << 2
                    float* ecx_20 = sub_6bc8e0(eax_70, *(eax_46 + esi_9) + eax_70, eax_5, xmm0_1, 
                        var_7c, *esi_9, *(eax_50 + esi_9), var_18, edx_6)
                    uint32_t (* eax_71)[0x4] = eax_43
                    
                    if (eax_71 s> 0)
                        ecx_20 = *(var_2c_1 + esi_9)
                        void* edi_22 = *(eax_48 + esi_9) - ecx_20
                        int32_t* edx_11 = *esi_9 - ecx_20
                        uint32_t (* j_5)[0x4] = eax_43
                        int32_t* eax_73 = *(eax_46 + esi_9) + (var_18 << 2)
                        uint32_t (* j_2)[0x4]
                        
                        do
                            float xmm0_6 = *eax_73
                            float xmm0_7 = xmm0_6 * xmm0_6
                            *ecx_20 = xmm0_7
                            *(ecx_20 + edi_22) = xmm0_7
                            
                            if (not(0 f<= *eax_73))
                                *ecx_20 ^= (data_79aad0).d
                            
                            float xmm0_10 = *(edx_11 + ecx_20)
                            eax_73 = &eax_73[1]
                            *(edx_11 + ecx_20) = xmm0_10 * xmm0_10
                            ecx_20 = &ecx_20[1]
                            j_2 = j_5
                            j_5 -= 1
                        while (j_2 != 1)
                        esi_9 = var_24_1
                        eax_71 = eax_43
                    
                    void* var_a0_3 = var_54_1
                    float* var_ac_3 = ecx_20
                    int32_t xmm0_13
                    result, xmm0_13 = sub_6bcba0(var_2c_1, eax_5, arg4, *(var_2c_1 + esi_9), 
                        *(eax_48 + esi_9), *esi_9, 0, *(result_2 + esi_9), var_18, eax_71)
                    edx_5 = var_2c_1
                    *(result_2 + esi_9) = xmm0_13
                
                edi_11 = edi_9
                esi_9 = &esi_9[1]
                i_2 = i_6
                i_6 -= 1
                ecx_12 = var_60_2
                var_24_1 = esi_9
            while (i_2 != 1)
            esi_8 = arg10
            edi_7 = var_18
        
        int32_t i_5 = 0
        
        if ((*arg5)[0x121] s<= 0)
            esi_17 = arg5
        else
            void* var_5c_3 = &var_78[esi_8]
            result = &(*arg5)[0x222]
            uint32_t (* result_1)[0x4] = result
            int32_t i_3
            
            do
                uint32_t edi_24 = result[-0x40][0]
                uint32_t ecx_24 = *result
                int32_t eax_85 = var_18 << 2
                int32_t edx_14 = *(arg7 + (edi_24 << 2)) + eax_85
                int32_t edx_16 = *(arg7 + (ecx_24 << 2)) + eax_85
                int32_t* esi_14 = var_4c[edi_24]
                int32_t eax_87 = var_4c[ecx_24]
                int32_t edi_25 = var_14[edi_24]
                int32_t edx_18 = var_14[ecx_24]
                int32_t edi_27 = var_20[edi_24]
                int32_t edi_28 = var_20[ecx_24]
                int32_t edx_22 = var_48[edi_24]
                int32_t edx_23 = var_48[ecx_24]
                
                if (var_64[edi_24] != 0 || var_64[ecx_24] != 0)
                    var_64[ecx_24] = 1
                    var_64[edi_24] = 1
                    int32_t ecx_26 = 0
                    int32_t var_3c_2 = 0
                    
                    if (eax_43 s> 0)
                        float* eax_88 = eax_87 - esi_14
                        int32_t* edx_28 = edx_16 - esi_14
                        int32_t* var_24_3 = edx_18 - esi_14
                        int32_t* edi_32 = edx_14 - esi_14
                        int32_t* var_44_2 = edi_25 - esi_14
                        int32_t* var_38_2 = edx_23 - esi_14
                        int32_t* var_28_3 = edx_22 - esi_14
                        int32_t* var_30_3 = edi_28 - esi_14
                        float* var_58_3 = edi_27 - esi_14
                        ecx_26 = 0
                        float* var_2c_2 = eax_88
                        int32_t* var_10_2 = edx_28
                        
                        do
                            if (ecx_26 s< result_5 + arg9)
                                if (*(var_28_3 + esi_14) == 0)
                                    edx_28 = var_10_2
                                
                                if (*(var_28_3 + esi_14) != 0 || *(var_38_2 + esi_14) != 0)
                                    float xmm1_6[0x2] = *(eax_88 + esi_14)
                                    double xmm0_23[0x2] = _mm_cvtps_pd(*esi_14)
                                    double xmm1_7[0x2] = _mm_cvtps_pd(xmm1_6)
                                    double xmm0_24 = __andps_xmmxud_memxud(xmm0_23, data_79aab0.o)
                                    *esi_14 = _mm_cvtpd_ps(
                                        __andps_xmmxud_memxud(xmm1_7, data_79aab0.o) + xmm0_24)
                                    *(var_44_2 + esi_14) =
                                        *(var_24_3 + esi_14) f+ *(var_44_2 + esi_14)
                                    *(var_38_2 + esi_14) = 1
                                    *(var_28_3 + esi_14) = 1
                                    int32_t eax_95 = *(edx_28 + esi_14)
                                    int32_t edi_37 = *(edi_32 + esi_14)
                                    int32_t eax_96
                                    int32_t edx_33
                                    edx_33:eax_96 = sx.q(eax_95)
                                    int32_t eax_98
                                    int32_t edx_34
                                    edx_34:eax_98 = sx.q(edi_37)
                                    int32_t* eax_101
                                    int32_t* edi_39
                                    
                                    if ((eax_98 ^ edx_34) - edx_34 s<= (eax_96 ^ edx_33) - edx_33)
                                        int32_t edi_41
                                        
                                        if (eax_95 s<= 0)
                                            edi_41 = eax_95 - edi_37
                                        else
                                            edi_41 = edi_37 - eax_95
                                        
                                        eax_101 = var_10_2
                                        *(eax_101 + esi_14) = edi_41
                                        edi_39 = edi_32
                                        *(edi_39 + esi_14) = eax_95
                                    else if (edi_37 s<= 0)
                                        eax_101 = var_10_2
                                        *(eax_101 + esi_14) = eax_95 - edi_37
                                        edi_39 = edi_32
                                    else
                                        eax_101 = var_10_2
                                        *(eax_101 + esi_14) = edi_37 - eax_95
                                        edi_39 = edi_32
                                    
                                    int32_t ecx_34 = *(eax_101 + esi_14)
                                    int32_t eax_107
                                    int32_t edx_35
                                    edx_35:eax_107 = sx.q(*(edi_39 + esi_14))
                                    
                                    if (ecx_34 s>= ((eax_107 ^ edx_35) - edx_35) * 2)
                                        *(var_10_2 + esi_14) = neg.d(ecx_34)
                                        *(edi_39 + esi_14) = neg.d(*(edi_39 + esi_14))
                                    
                                    eax_88 = var_2c_2
                                    ecx_26 = var_3c_2
                                else
                                    eax_88 = var_2c_2
                                    
                                    if (ecx_26 s>= result_5 + eax_42)
                                        float xmm1_2[0x2] = *(eax_88 + esi_14)
                                        float xmm2_2[0x2] = *esi_14
                                        float xmm0_18 = xmm1_2[0] f+ xmm2_2
                                        float xmm0_21[0x4] = _mm_cvtpd_ps(__andps_xmmxud_memxud(
                                            _mm_cvtps_pd(xmm1_2), data_79aab0.o) +
                                            __andps_xmmxud_memxud(_mm_cvtps_pd(xmm2_2), 
                                            data_79aab0.o))
                                        
                                        if (0f <= xmm0_18)
                                            *(var_44_2 + esi_14) = xmm0_21
                                            ecx_26 = var_3c_2
                                        else
                                            *(var_44_2 + esi_14) = xmm0_21
                                            xmm0_21 ^= data_79aad0
                                        
                                        *esi_14 = xmm0_21
                                    else
                                        uint32_t xmm0_15[0x4] = *esi_14 f+ *(eax_88 + esi_14)
                                        *esi_14 = xmm0_15
                                        *(var_44_2 + esi_14) =
                                            __andps_xmmxud_memxud(xmm0_15, data_79aaa0)
                                    
                                    *(var_24_3 + esi_14) = 0
                                    *(eax_88 + esi_14) = 0
                                    *(var_38_2 + esi_14) = 1
                                    *(var_10_2 + esi_14) = 0
                            
                            ecx_26 += 1
                            var_3c_2 = ecx_26
                            float xmm0_29 = *(var_30_3 + esi_14) f+ *(var_58_3 + esi_14)
                            *(var_30_3 + esi_14) = xmm0_29
                            *(var_58_3 + esi_14) = xmm0_29
                            esi_14 = &esi_14[1]
                            edx_28 = var_10_2
                        while (ecx_26 s< eax_43)
                    
                    int32_t var_a0_4 = edx_14
                    int32_t var_ac_5 = ecx_26
                    *var_5c_3 = sub_6bcba0(edi_24, eax_5, arg4, var_4c[edi_24], var_14[edi_24], 
                        var_20[edi_24], var_48[edi_24], *var_5c_3, var_18, eax_43)
                    var_5c_3 += 4
                
                esi_17 = arg5
                i_3 = i_5 + 1
                result = &(*result_1)[1]
                i_5 = i_3
                result_1 = result
            while (i_3 s< (*esi_17)[0x121])
            edi_7 = var_18
        
        edx_3 = var_50
        edi_7 += edx_3
        result_4 = result_5 + ecx_10
        var_18 = edi_7
        result_5 = result_4
    while (edi_7 s< result_3)

int32_t i_4 = 0

if ((*esi_17)[0x121] s> 0)
    void* ecx_43 = &(*esi_17)[0x222]
    
    do
        int32_t esi_18 = *(ecx_43 - 0x400)
        
        if (*(arg8 + (esi_18 << 2)) != 0 || *(arg8 + (*ecx_43 << 2)) != 0)
            *(arg8 + (esi_18 << 2)) = 1
            *(arg8 + (*ecx_43 << 2)) = 1
        
        result = arg5
        i_4 += 1
        ecx_43 += 4
    while (i_4 s< (*result)[0x121])

@__security_check_cookie@4(eax_1 ^ &__saved_ebp)
return result
