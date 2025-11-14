// 函数: sub_642520
// 地址: 0x642520
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t* edi
int32_t* var_9c = edi
int32_t ecx = *arg4
int32_t* eax_3 = arg4[1]
int32_t var_5c

if (eax_3[0x7d] == 0)
    var_5c = 0x10
else
    var_5c = eax_3[0x7f]

int32_t eax_5 = *(arg2 + ((*eax_3 * 0xf + arg3) << 2) + 0x84)
int32_t esi_1 = *(arg2 + (arg3 << 2) + 0x138)
int32_t xmm0_1 = _mm_cvtpd_ps(zx.o(*((*(arg2 + (arg3 << 2) + 0xfc) << 3) + &data_6f2c08)))
int32_t edi_1 = arg10 << 2
int32_t var_80 = _mm_cvtpd_ps(zx.o(*((esi_1 << 3) + &data_6f2c08)))
__alloca_probe_16(edi_1)
int32_t* var_44 = &var_9c
__alloca_probe_16(edi_1)
int32_t* var_2c = &var_9c
__alloca_probe_16(edi_1)
int32_t* var_50 = &var_9c
__alloca_probe_16(edi_1)
int32_t* var_40 = &var_9c
__alloca_probe_16(edi_1)
int32_t* var_64 = &var_9c
__alloca_probe_16((*(arg5 + 0x484) + arg10) << 2)
int32_t* var_74 = &var_9c

if (ecx s> 0x3e8)
    var_80 = _mm_cvtpd_ps(zx.o(*((esi_1 << 3) + &data_6f2bc0)))

int32_t esi_4 = (var_5c * arg10) << 2
__alloca_probe_16(esi_4)
*var_44 = &var_9c
__alloca_probe_16(esi_4)
*var_2c = &var_9c
__alloca_probe_16(esi_4)
var_9c = &var_9c
__alloca_probe_16(esi_4)
int32_t*** esi_5 = var_40
int32_t edx = arg10
*esi_5 = &var_9c

if (edx s> 1)
    int32_t edi_3 = var_44 - var_2c
    void* edx_1 = &var_2c[1]
    int32_t i_6 = arg10 - 1
    int32_t var_60_1 = edi_3
    int32_t ecx_10 = var_5c << 2
    int32_t i
    
    do
        edx_1 += 4
        *(edi_3 + edx_1 - 4) = *var_44 + ecx_10
        *(edx_1 - 4) = *var_2c + ecx_10
        *(var_50 - var_2c + edx_1 - 4) = *var_50 + ecx_10
        *(esi_5 - var_2c + edx_1 - 4) = *var_40 + ecx_10
        edi_3 = var_60_1
        ecx_10 += var_5c << 2
        i = i_6
        i_6 -= 1
    while (i != 1)
    edx = arg10

void* edi_39 = arg5
int32_t ecx_11 = 0
int32_t result = *(edi_39 + 0x484) + edx

if (result s> 0)
    do
        var_74[ecx_11] = 0
        ecx_11 += 1
        result = *(edi_39 + 0x484) + edx
    while (ecx_11 s< result)

int32_t result_1 = 0

if (ecx s> 0)
    int32_t edx_2 = var_5c
    int32_t ecx_12 = ecx
    int32_t eax_41 = neg.d(edx_2)
    int32_t var_6c_1 = ecx_12
    
    do
        int32_t edi_7 = edx_2
        
        if (edx_2 s> ecx_12)
            edi_7 = ecx_12
        
        int32_t esi_9 = 0
        sub_69d850(var_64, arg8, edi_1)
        _memset(*var_40, 0, esi_4)
        
        if (arg10 s> 0)
            int32_t* esi_10 = var_50
            void* edx_4 = var_64 - arg6
            void* eax_46 = arg6 - var_50
            void* ecx_14 = arg7 - var_64
            int32_t* eax_48 = var_44 - var_50
            int32_t* var_18_1 = esi_10
            int32_t* eax_50 = var_2c - var_50
            void* var_70_1 = ecx_14
            int32_t* eax_52 = var_40 - var_50
            void* var_24_1 = edx_4
            int32_t* eax_54 = var_74 - var_50
            int32_t i_5 = arg10
            int32_t i_1
            
            do
                void* eax_58 = eax_46 + esi_10 + edx_4
                int32_t edi_10 = result_1 << 2
                void* edx_7 = *(eax_58 + ecx_14) + edi_10
                int32_t ecx_15 = 0
                void* var_38_1 = edx_7
                
                if (*eax_58 == 0)
                    if (edi_7 s> 0)
                        do
                            *(*esi_10 + (ecx_15 << 2)) = 0x2edbe6ff
                            *(*(eax_48 + esi_10) + (ecx_15 << 2)) = 0
                            *(*(eax_50 + esi_10) + (ecx_15 << 2)) = 0
                            *(*(eax_52 + esi_10) + (ecx_15 << 2)) = 0
                            *(edx_7 + (ecx_15 << 2)) = 0
                            ecx_15 += 1
                        while (ecx_15 s< edi_7)
                    
                    *(eax_54 + esi_10) = 0
                else
                    int32_t eax_59 = edi_7
                    int32_t var_14_1 = 0
                    
                    if (eax_59 s>= 4)
                        void* eax_60 = *esi_10
                        void* edx_8 = edx_7 + 0xc
                        void* esi_12 = var_38_1 - eax_60
                        void* var_54_2 = esi_12
                        void* ecx_16 = eax_60 + 4
                        int32_t var_34_2 = ((edi_7 - 4) u>> 2) + 1
                        int32_t j_3 = ((edi_7 - 4) u>> 2) + 1
                        var_14_1 = (((edi_7 - 4) u>> 2) + 1) << 2
                        int32_t j
                        
                        do
                            int32_t eax_66 = *(edx_8 - 0xc)
                            ecx_16 += 0x10
                            edx_8 += 0x10
                            *(ecx_16 - 0x14) = *((eax_66 << 2) + &data_6f27c0)
                            *(ecx_16 - 0x10) = *((*(ecx_16 + esi_12 - 0x10) << 2) + &data_6f27c0)
                            *(ecx_16 - 0xc) = *((*(edx_8 - 0x14) << 2) + &data_6f27c0)
                            *(ecx_16 - 8) = *((*(edx_8 - 0x10) << 2) + &data_6f27c0)
                            j = j_3
                            j_3 -= 1
                        while (j != 1)
                        esi_10 = var_18_1
                        ecx_15 = var_14_1
                        edx_7 = var_38_1
                        eax_59 = edi_7
                    
                    if (ecx_15 s< eax_59)
                        int32_t eax_74 = *esi_10
                        int32_t j_2 = edi_7 - var_14_1
                        int32_t* ecx_17 = eax_74 + (ecx_15 << 2)
                        int32_t j_1
                        
                        do
                            int32_t eax_75 = *(ecx_17 + edx_7 - eax_74)
                            ecx_17 = &ecx_17[1]
                            ecx_17[-1] = *((eax_75 << 2) + &data_6f27c0)
                            j_1 = j_2
                            j_2 -= 1
                        while (j_1 != 1)
                        esi_10 = var_18_1
                        eax_59 = edi_7
                    
                    sub_642100(eax_46, *(eax_46 + esi_10) + edi_10, eax_5, xmm0_1, var_80, *esi_10, 
                        *(eax_52 + esi_10), result_1, eax_59)
                    int32_t eax_79 = edi_7
                    int32_t ecx_19 = 0
                    
                    if (eax_79 s> 0)
                        int32_t eax_81 = *(eax_46 + esi_10)
                        int32_t edx_14 = *esi_10
                        float* eax_84 = *(eax_48 + esi_10)
                        float* var_14_3 = *(eax_50 + esi_10) - eax_84
                        int32_t esi_14 = eax_81
                        int32_t edi_12 = edi_10
                        
                        do
                            float xmm0_6 = *(edi_12 + esi_14)
                            float xmm0_7 = xmm0_6 * xmm0_6
                            *eax_84 = xmm0_7
                            *(var_14_3 + eax_84) = xmm0_7
                            esi_14 = eax_81
                            
                            if (not(0 f<= *(edi_12 + esi_14)))
                                *eax_84 = *eax_84 * -1f
                            
                            float xmm0_10 = *(edx_14 + (ecx_19 << 2))
                            edi_12 += 4
                            eax_84 = &eax_84[1]
                            *(edx_14 + (ecx_19 << 2)) = xmm0_10 * xmm0_10
                            ecx_19 += 1
                        while (ecx_19 s< edi_7)
                        
                        esi_10 = var_18_1
                        eax_79 = edi_7
                    
                    void* var_a0_3 = var_38_1
                    int32_t var_ac_3 = ecx_19
                    *(eax_54 + esi_10) = sub_642190(eax_48, eax_5, arg4, *(eax_48 + esi_10), 
                        *(eax_50 + esi_10), *esi_10, 0, *(eax_54 + esi_10), result_1, eax_79)
                
                ecx_14 = var_70_1
                esi_10 = &esi_10[1]
                i_1 = i_5
                i_5 -= 1
                edx_4 = var_24_1
                var_18_1 = esi_10
            while (i_1 != 1)
            esi_9 = arg10
        
        int32_t i_4 = 0
        
        if (*(arg5 + 0x484) s> 0)
            void* var_60_3 = &var_74[esi_9]
            void* eax_97 = arg5 + 0x888
            void* var_34_4 = eax_97
            int32_t i_2
            
            do
                int32_t edi_15 = *(eax_97 - 0x400)
                int32_t ecx_22 = *eax_97
                int32_t eax_99 = result_1 << 2
                int32_t edx_17 = *(arg7 + (edi_15 << 2)) + eax_99
                int32_t edx_19 = *(arg7 + (ecx_22 << 2)) + eax_99
                int32_t* esi_17 = var_44[edi_15]
                int32_t eax_101 = var_44[ecx_22]
                int32_t edi_16 = var_2c[edi_15]
                int32_t edx_21 = var_2c[ecx_22]
                int32_t edx_23 = var_50[edi_15]
                int32_t edx_24 = var_50[ecx_22]
                int32_t edx_26 = var_40[edi_15]
                int32_t edi_20 = var_40[ecx_22]
                int32_t edi_22 = edi_7
                
                if (var_64[edi_15] != 0 || var_64[ecx_22] != 0)
                    var_64[ecx_22] = 1
                    var_64[edi_15] = 1
                    int32_t ecx_24 = 0
                    int32_t var_28_2 = 0
                    
                    if (edi_22 s> 0)
                        float* eax_102 = eax_101 - esi_17
                        int32_t* var_38_3 = edx_21 - esi_17
                        int32_t* var_20_2 = edi_16 - esi_17
                        int32_t* var_1c_3 = edi_20 - esi_17
                        int32_t* var_30_3 = edx_26 - esi_17
                        int32_t* var_c_3 = edx_19 - esi_17
                        float* var_58_3 = edx_24 - esi_17
                        int32_t* edi_26 = edx_17 - esi_17
                        float* var_14_4 = eax_102
                        int32_t* var_4c_3 = edx_23 - esi_17
                        int32_t* edi_27 = edi_26
                        
                        do
                            if (ecx_24 s< var_6c_1 + arg9 - ecx)
                                if (*(var_30_3 + esi_17) == 0)
                                    edi_27 = edi_26
                                
                                if (*(var_30_3 + esi_17) != 0 || *(var_1c_3 + esi_17) != 0)
                                    float xmm1_6[0x2] = *(eax_102 + esi_17)
                                    double xmm0_23[0x2] = _mm_cvtps_pd(*esi_17)
                                    double xmm1_7[0x2] = _mm_cvtps_pd(xmm1_6)
                                    double xmm0_24 = __andpd_xmmxuq_memxuq(xmm0_23, data_7094a0.o)
                                    *esi_17 = _mm_cvtpd_ps(
                                        __andpd_xmmxuq_memxuq(xmm1_7, data_7094a0.o) + xmm0_24)
                                    *(var_20_2 + esi_17) =
                                        *(var_38_3 + esi_17) f+ *(var_20_2 + esi_17)
                                    *(var_1c_3 + esi_17) = 1
                                    *(var_30_3 + esi_17) = 1
                                    int32_t eax_109 = *(var_c_3 + esi_17)
                                    int32_t edi_33 = *(edi_27 + esi_17)
                                    int32_t eax_110
                                    int32_t edx_33
                                    edx_33:eax_110 = sx.q(eax_109)
                                    int32_t eax_112
                                    int32_t edx_34
                                    edx_34:eax_112 = sx.q(edi_33)
                                    int32_t* eax_115
                                    int32_t* edi_35
                                    
                                    if ((eax_112 ^ edx_34) - edx_34 s<= (eax_110 ^ edx_33) - edx_33)
                                        int32_t edi_37
                                        
                                        if (eax_109 s<= 0)
                                            edi_37 = eax_109 - edi_33
                                        else
                                            edi_37 = edi_33 - eax_109
                                        
                                        eax_115 = var_c_3
                                        *(eax_115 + esi_17) = edi_37
                                        edi_35 = edi_26
                                        *(edi_35 + esi_17) = eax_109
                                    else if (edi_33 s<= 0)
                                        eax_115 = var_c_3
                                        *(eax_115 + esi_17) = eax_109 - edi_33
                                        edi_35 = edi_26
                                    else
                                        eax_115 = var_c_3
                                        *(eax_115 + esi_17) = edi_33 - eax_109
                                        edi_35 = edi_26
                                    
                                    int32_t ecx_30 = *(eax_115 + esi_17)
                                    int32_t eax_121
                                    int32_t edx_35
                                    edx_35:eax_121 = sx.q(*(edi_35 + esi_17))
                                    
                                    if (ecx_30 s>= ((eax_121 ^ edx_35) - edx_35) * 2)
                                        *(var_c_3 + esi_17) = neg.d(ecx_30)
                                        *(edi_35 + esi_17) = neg.d(*(edi_35 + esi_17))
                                    
                                    eax_102 = var_14_4
                                    ecx_24 = var_28_2
                                else
                                    eax_102 = var_14_4
                                    
                                    if (ecx_24 s>= var_6c_1 + eax_5 - ecx)
                                        float xmm1_2[0x2] = *(eax_102 + esi_17)
                                        float xmm2_2[0x2] = *esi_17
                                        float xmm0_18 = xmm1_2[0] f+ xmm2_2
                                        float xmm0_21[0x4] = _mm_cvtpd_ps(__andpd_xmmxuq_memxuq(
                                            _mm_cvtps_pd(xmm1_2), data_7094a0.o) +
                                            __andpd_xmmxuq_memxuq(_mm_cvtps_pd(xmm2_2), 
                                            data_7094a0.o))
                                        
                                        if (0f <= xmm0_18)
                                            *(var_20_2 + esi_17) = xmm0_21
                                            ecx_24 = var_28_2
                                        else
                                            *(var_20_2 + esi_17) = xmm0_21
                                            xmm0_21 ^= data_7094c0
                                        
                                        *esi_17 = xmm0_21
                                    else
                                        uint32_t xmm0_15[0x4] = *esi_17 f+ *(eax_102 + esi_17)
                                        *esi_17 = xmm0_15
                                        *(var_20_2 + esi_17) =
                                            __andps_xmmxud_memxud(xmm0_15, data_709490.o)
                                    
                                    *(var_38_3 + esi_17) = 0
                                    *(eax_102 + esi_17) = 0
                                    *(var_1c_3 + esi_17) = 1
                                    *(var_c_3 + esi_17) = 0
                            
                            ecx_24 += 1
                            var_28_2 = ecx_24
                            float xmm0_29 = *(var_4c_3 + esi_17) f+ *(var_58_3 + esi_17)
                            *(var_58_3 + esi_17) = xmm0_29
                            edi_27 = edi_26
                            *(var_4c_3 + esi_17) = xmm0_29
                            esi_17 = &esi_17[1]
                        while (ecx_24 s< edi_7)
                        
                        edi_22 = edi_7
                    
                    int32_t var_a0_4 = edx_17
                    int32_t var_ac_5 = ecx_24
                    *var_60_3 = sub_642190(edi_15, eax_5, arg4, var_44[edi_15], var_2c[edi_15], 
                        var_50[edi_15], var_40[edi_15], *var_60_3, result_1, edi_22)
                    var_60_3 += 4
                
                i_2 = i_4 + 1
                eax_97 = var_34_4 + 4
                i_4 = i_2
                var_34_4 = eax_97
            while (i_2 s< *(arg5 + 0x484))
        
        edx_2 = var_5c
        result = result_1 + edx_2
        ecx_12 = var_6c_1 + eax_41
        result_1 = result
        var_6c_1 = ecx_12
    while (result s< ecx)
    
    edi_39 = arg5

int32_t i_3 = 0

if (*(edi_39 + 0x484) s> 0)
    void* ecx_39 = edi_39 + 0x888
    
    do
        int32_t esi_20 = *(ecx_39 - 0x400)
        int32_t* eax_130 = arg8
        
        if (eax_130[esi_20] != 0)
            goto label_642d90
        
        result = *ecx_39
        edi_39 = arg5
        
        if (arg8[result] != 0)
            eax_130 = arg8
        label_642d90:
            eax_130[esi_20] = 1
            result = *ecx_39
            arg8[result] = 1
        
        i_3 += 1
        ecx_39 += 4
    while (i_3 s< *(edi_39 + 0x484))

sub_69a5bc(eax_1 ^ &__saved_ebp)
return result
