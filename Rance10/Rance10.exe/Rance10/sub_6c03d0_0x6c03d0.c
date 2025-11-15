// 函数: sub_6c03d0
// 地址: 0x6c03d0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ebx = arg3
int32_t var_48 = ebx
int32_t xmm0[0x4] = 6.28318548f / _mm_cvtepi32_ps(zx.o(arg2))
int80_t x87_r0
float xmm0_1 = ___libm_sse2_cosf(xmm0, x87_r0)
int80_t x87_r1
float xmm0_3 = ___libm_sse2_sinf(xmm0, x87_r1)
int32_t ecx = arg2
int32_t eax_2 = (ebx - 1) s>> 1
int32_t edi_1 = ebx * arg4
int32_t eax_4 = ebx * ecx
int32_t edx_1 = (ecx + 1) s>> 1
int32_t var_4c = edi_1

if (ebx != 1)
    int32_t eax_5 = arg5
    int32_t ebp_1 = 0
    
    if (eax_5 s>= 4)
        void* edx_2 = arg8 + 0xc
        void* ecx_1 = arg10 + 4
        int32_t i_32 = ((eax_5 - 4) u>> 2) + 1
        ebp_1 = i_32 << 2
        int32_t i
        
        do
            ecx_1 += 0x10
            *(ecx_1 - 0x14) = *(edx_2 - 0xc)
            edx_2 += 0x10
            *(ecx_1 - 0x10) = *(arg8 - arg10 + ecx_1 - 0x10)
            *(ecx_1 - 0xc) = *(edx_2 - 0x14)
            *(ecx_1 - 8) = *(edx_2 - 0x10)
            i = i_32
            i_32 -= 1
        while (i != 1)
        eax_5 = arg5
        edi_1 = var_4c
        ecx = arg2
    
    if (ebp_1 s< eax_5)
        int32_t* ecx_2 = arg10 + (ebp_1 << 2)
        int32_t i_27 = eax_5 - ebp_1
        int32_t i_1
        
        do
            int32_t eax_10 = *(ecx_2 + arg8 - arg10)
            ecx_2 = &ecx_2[1]
            ecx_2[-1] = eax_10
            i_1 = i_27
            i_27 -= 1
        while (i_1 != 1)
        ecx = arg2
    
    int32_t eax_11 = 0
    
    if (ecx s> 1)
        int32_t i_28 = ecx - 1
        int32_t i_36 = i_28
        int32_t i_2
        
        do
            int32_t eax_12 = eax_11 + edi_1
            int32_t ecx_3 = eax_12
            int32_t eax_13 = arg4
            int32_t ebp_2 = 0
            
            if (eax_13 s>= 4)
                int32_t j_17 = ((eax_13 - 4) u>> 2) + 1
                ebp_2 = j_17 << 2
                int32_t j
                
                do
                    arg9[ecx_3] = arg7[ecx_3]
                    int32_t ecx_4 = ecx_3 + ebx
                    arg9[ecx_4] = arg7[ecx_4]
                    int32_t ecx_5 = ecx_4 + ebx
                    arg9[ecx_5] = arg7[ecx_5]
                    int32_t ecx_6 = ecx_5 + ebx
                    arg9[ecx_6] = arg7[ecx_6]
                    ecx_3 = ecx_6 + ebx
                    j = j_17
                    j_17 -= 1
                while (j != 1)
                i_28 = i_36
                eax_13 = arg4
            
            if (ebp_2 s< eax_13)
                int32_t* ecx_7 = &arg9[ecx_3]
                int32_t j_18 = eax_13 - ebp_2
                int32_t j_1
                
                do
                    *ecx_7 = *(arg7 - arg9 + ecx_7)
                    ecx_7 = &ecx_7[ebx]
                    j_1 = j_18
                    j_18 -= 1
                while (j_1 != 1)
                i_28 = i_36
            
            eax_11 = eax_12
            i_2 = i_28
            i_28 -= 1
            edi_1 = var_4c
            i_36 = i_28
        while (i_2 != 1)
        ecx = arg2
    
    int32_t esi_9 = 0
    int32_t eax_20 = neg.d(ebx)
    int32_t var_38_1 = eax_20
    int32_t edx_8 = eax_20
    
    if (eax_2 s<= arg4)
        if (ecx s> 1)
            int32_t edi_8 = edx_8 - 1
            float* eax_29 = arg11 + (edx_8 << 2) - 4
            int32_t i_18 = ecx - 1
            int32_t i_3
            
            do
                esi_9 += var_4c
                edx_8 += ebx
                i_3 = i_18
                edi_8 += ebx
                eax_29 = &eax_29[ebx]
                
                if (ebx s> 2)
                    float* ecx_11 = eax_29
                    int32_t edi_9 = arg4
                    int32_t* esi_12 = arg9
                    int32_t* eax_34 = &arg7[edi_8 - edx_8 + esi_9]
                    float* ebx_3 = &esi_12[1 + edi_8 - edx_8 + esi_9]
                    int32_t j_20 = ((ebx - 3) u>> 1) + 1
                    int32_t j_31 = j_20
                    int32_t j_2
                    
                    do
                        eax_34 = &eax_34[2]
                        ecx_11 = &ecx_11[2]
                        ebx_3 = &ebx_3[2]
                        int32_t* var_1c_3 = eax_34
                        
                        if (edi_9 s> 0)
                            float* edx_18 = ebx_3
                            int32_t k_11 = arg4
                            int32_t k
                            
                            do
                                *(eax_34 + esi_12 - arg7) =
                                    *eax_34 * ecx_11[-1] + eax_34[1] f* *ecx_11
                                float xmm0_10 = *eax_34
                                float xmm1_12 = ecx_11[-1] f* eax_34[1]
                                eax_34 = &eax_34[ebx]
                                *edx_18 = xmm1_12 - xmm0_10 * *ecx_11
                                edx_18 = &edx_18[ebx]
                                k = k_11
                                k_11 -= 1
                            while (k != 1)
                            eax_34 = var_1c_3
                            j_20 = j_31
                            esi_12 = arg9
                            edi_9 = arg4
                        
                        j_2 = j_20
                        j_20 -= 1
                        j_31 = j_20
                    while (j_2 != 1)
                    ebx = var_48
                    i_3 = i_18
                
                i_18 = i_3 - 1
            while (i_3 != 1)
            ecx = arg2
    else if (ecx s> 1)
        int32_t ecx_8 = ebx << 2
        float* ebp_4 = arg9 - ecx_8
        int32_t esi_10 = var_4c << 2
        int32_t var_1c_1 = esi_10
        float* eax_25 = arg11 + (edx_8 << 2) - 4
        void* edx_11 = arg7 - ecx_8 - 4
        int32_t i_21 = arg2 - 1
        ebx = var_48
        int32_t i_4
        
        do
            int32_t* edi_6 = arg9
            ebp_4 += esi_10
            edx_11 += esi_10
            float* var_28_1 = ebp_4
            eax_25 += ecx_8
            
            if (arg4 s> 0)
                void* eax_26 = edx_11
                int32_t j_19 = arg4
                int32_t j_29 = j_19
                int32_t j_3
                
                do
                    eax_26 += ecx_8
                    ebp_4 += ecx_8
                    void* var_20_2 = eax_26
                    
                    if (ebx s> 2)
                        float* ecx_9 = eax_25
                        float* esi_11 = ebp_4
                        int32_t k_9 = ((ebx - 3) u>> 1) + 1
                        int32_t k_1
                        
                        do
                            float xmm1_2 = *(eax_26 + 8)
                            eax_26 += 8
                            float xmm1_3 = xmm1_2 * ecx_9[1]
                            ecx_9 = &ecx_9[2]
                            esi_11 = &esi_11[2]
                            *(edi_6 - arg7 + eax_26) = xmm1_3 + *(eax_26 + 4) * *ecx_9
                            *esi_11 = ecx_9[-1] f* *(eax_26 + 4) - *eax_26 * *ecx_9
                            k_1 = k_9
                            k_9 -= 1
                        while (k_1 != 1)
                        eax_26 = var_20_2
                        ecx_8 = ebx << 2
                        j_19 = j_29
                        edi_6 = arg9
                    
                    j_3 = j_19
                    j_19 -= 1
                    j_29 = j_19
                while (j_3 != 1)
                ebp_4 = var_28_1
                esi_10 = var_1c_1
            
            i_4 = i_21
            i_21 -= 1
        while (i_4 != 1)
        ecx = arg2
    
    int32_t eax_35 = 0
    int32_t esi_14 = var_4c * ecx
    
    if (eax_2 s>= arg4)
        if (edx_1 s> 1)
            int32_t ecx_17 = var_4c << 2
            float* edx_25 = arg7
            int32_t var_8_2 = ecx_17
            void* ebp_9 = &arg7[esi_14]
            void* edi_20 = &arg9[-1]
            void* esi_20 = &arg9[esi_14 - 1]
            int32_t i_25 = edx_1 - 1
            int32_t i_37 = i_25
            int32_t i_5
            
            do
                ebx = var_48
                edx_25 += ecx_17
                edi_20 += ecx_17
                ebp_9 -= ecx_17
                esi_20 -= ecx_17
                void* var_c_2 = ebp_9
                void* var_14_2 = esi_20
                
                if (arg4 s> 0)
                    float* ecx_18 = edx_25
                    void* var_2c_2 = ebp_9
                    void* edx_26 = edi_20
                    float* var_24_3 = ecx_18
                    int32_t j_25 = arg4
                    int32_t eax_44 = ebx << 2
                    void* var_28_3 = edx_26
                    void* var_38_2 = esi_20
                    int32_t j_30 = j_25
                    int32_t j_4
                    
                    do
                        if (ebx s> 2)
                            float* eax_45 = edx_26
                            void* edi_21 = ebp_9
                            void* ebp_11 = arg7 - arg9
                            float* esi_21 = ecx_18
                            int32_t* ecx_19 = var_38_2
                            int32_t k_10 = ((ebx - 3) u>> 1) + 1
                            int32_t k_2
                            
                            do
                                float xmm0_20 = ecx_19[2]
                                ecx_19 = &ecx_19[2]
                                float xmm0_21 = xmm0_20 + eax_45[2]
                                eax_45 = &eax_45[2]
                                esi_21 = &esi_21[2]
                                edi_21 += 8
                                *(eax_45 + ebp_11) = xmm0_21
                                *(ecx_19 + ebp_11) = eax_45[1] f- ecx_19[1]
                                *esi_21 = ecx_19[1] f+ eax_45[1]
                                *edi_21 = *ecx_19 - *eax_45
                                k_2 = k_10
                                k_10 -= 1
                            while (k_2 != 1)
                            ecx_18 = var_24_3
                            eax_44 = ebx << 2
                            edx_26 = var_28_3
                            ebp_9 = var_2c_2
                            esi_20 = var_38_2
                            j_25 = j_30
                        
                        ecx_18 += eax_44
                        edx_26 += eax_44
                        ebp_9 += eax_44
                        var_24_3 = ecx_18
                        esi_20 += eax_44
                        var_28_3 = edx_26
                        j_4 = j_25
                        j_25 -= 1
                        var_2c_2 = ebp_9
                        var_38_2 = esi_20
                        j_30 = j_25
                    while (j_4 != 1)
                    ecx_17 = var_8_2
                    ebp_9 = var_c_2
                    esi_20 = var_14_2
                    i_25 = i_37
                
                i_5 = i_25
                i_25 -= 1
                i_37 = i_25
            while (i_5 != 1)
    else if (edx_1 s> 1)
        int32_t ebp_6 = ebx << 2
        float* ecx_15 = arg7 - ebp_6
        float* edi_15 = arg9 - ebp_6 - 4
        int32_t i_22 = edx_1 - 1
        int32_t i_6
        
        do
            eax_35 += var_4c
            ecx_15 = &ecx_15[var_4c]
            edi_15 = &edi_15[var_4c]
            float* var_8_1 = ecx_15
            var_38_1 += var_4c
            esi_14 -= var_4c
            ebx = var_48
            int32_t edx_23 = eax_35
            float* var_c_1 = edi_15
            
            if (ebx s> 2)
                int32_t ebx_5 = var_38_1
                int32_t j_15 = ((ebx - 3) u>> 1) + 1
                int32_t j_32 = j_15
                int32_t j_5
                
                do
                    ebx_5 += 2
                    edx_23 += 2
                    ecx_15 = &ecx_15[2]
                    edi_15 = &edi_15[2]
                    
                    if (arg4 s> 0)
                        float* edx_24 = ecx_15
                        float* ecx_16 = edi_15
                        void* esi_18 = &arg7[ebx_5 + esi_14 - eax_35]
                        int32_t k_7 = arg4
                        float* eax_40 = &arg9[-1 + ebx_5 + esi_14 - eax_35]
                        void* edi_19 = arg7 - arg9
                        int32_t k_3
                        
                        do
                            float xmm0_12 = eax_40[ebx]
                            eax_40 = &eax_40[ebx]
                            float xmm0_13 = xmm0_12 + ecx_16[ebx]
                            ecx_16 = &ecx_16[ebx]
                            edx_24 = &edx_24[ebx]
                            esi_18 += ebp_6
                            k_3 = k_7
                            k_7 -= 1
                            *(ecx_16 + edi_19) = xmm0_13
                            *(eax_40 + edi_19) = ecx_16[1] - eax_40[1]
                            *edx_24 = ecx_16[1] + eax_40[1]
                            *esi_18 = *eax_40 - *ecx_16
                        while (k_3 != 1)
                        j_15 = j_32
                    
                    j_5 = j_15
                    j_15 -= 1
                    j_32 = j_15
                while (j_5 != 1)
                ebx = var_48
                edi_15 = var_c_1
                ecx_15 = var_8_1
            
            i_6 = i_22
            i_22 -= 1
        while (i_6 != 1)

int32_t eax_50 = arg5
int32_t ebp_12 = 0

if (eax_50 s>= 4)
    void* edx_29 = arg10 + 0xc
    void* ecx_20 = arg8 + 4
    int32_t i_33 = ((eax_50 - 4) u>> 2) + 1
    ebp_12 = i_33 << 2
    int32_t i_7
    
    do
        ecx_20 += 0x10
        *(ecx_20 - 0x14) = *(edx_29 - 0xc)
        edx_29 += 0x10
        *(ecx_20 - 0x10) = *(arg10 - arg8 + ecx_20 - 0x10)
        *(ecx_20 - 0xc) = *(edx_29 - 0x14)
        *(ecx_20 - 8) = *(edx_29 - 0x10)
        i_7 = i_33
        i_33 -= 1
    while (i_7 != 1)
    eax_50 = arg5

if (ebp_12 s< eax_50)
    void* ecx_21 = arg8 + (ebp_12 << 2)
    int32_t i_29 = eax_50 - ebp_12
    int32_t i_8
    
    do
        int32_t eax_51 = *(arg10 - arg8 + ecx_21)
        ecx_21 += 4
        *(ecx_21 - 4) = eax_51
        i_8 = i_29
        i_29 -= 1
    while (i_8 != 1)

int32_t edx_32 = 0
int32_t eax_53 = arg2 * arg5
int32_t esi_27 = eax_53

if (edx_1 s> 1)
    int32_t ebp_15 = neg.d(ebx)
    float* ebx_7 = arg9 - (ebx << 2)
    int32_t ecx_22 = var_4c << 2
    int32_t var_10_3 = ecx_22
    int32_t i_19 = edx_1 - 1
    int32_t i_9
    
    do
        ebx_7 += ecx_22
        edx_32 += var_4c
        esi_27 -= var_4c
        ebp_15 += var_4c
        i_9 = i_19
        
        if (arg4 s> 0)
            float* ecx_23 = ebx_7
            float* edx_34 = arg7 - arg9
            float* eax_61 = &arg9[ebp_15 - edx_32 + esi_27]
            int32_t j_22 = arg4
            int32_t j_6
            
            do
                float xmm0_28 = eax_61[ebx]
                eax_61 = &eax_61[ebx]
                float xmm0_29 = xmm0_28 + ecx_23[ebx]
                ecx_23 = &ecx_23[ebx]
                *(edx_34 + ecx_23) = xmm0_29
                *(edx_34 + eax_61) = *eax_61 - *ecx_23
                j_6 = j_22
                j_22 -= 1
            while (j_6 != 1)
            i_9 = i_19
            ecx_22 = var_10_3
        
        i_19 = i_9 - 1
    while (i_9 != 1)
    ebx = var_48

float xmm4 = (zx.o(0)).d
int32_t esi_29 = arg5
int32_t edx_35 = edx_1
float xmm6 = 1f
int32_t ebp_18 = (arg2 - 1) * esi_29
int32_t var_28_4 = ebp_18

if (edx_35 s> 1)
    int32_t edi_25 = esi_29 << 2
    int32_t ebx_8 = arg5
    void* esi_30 = arg10
    int32_t var_24_4 = edi_25
    void* edx_36 = arg10 + (eax_53 << 2)
    int32_t i_26 = edx_1 - 1
    int32_t i_38 = i_26
    int32_t i_10
    
    do
        void* esi_31 = esi_30 + edi_25
        float* edx_37 = edx_36 - edi_25
        eax_53 = 0
        void* var_3c_3 = esi_31
        float* var_34_2 = edx_37
        float xmm3_3 = xmm6 * xmm0_1 - xmm4 * xmm0_3
        xmm4 = xmm4 * xmm0_1 + xmm6 * xmm0_3
        xmm6 = xmm3_3
        
        if (ebx_8 s> 0)
            void* edi_26 = edi_25 + arg8
            void* ecx_27 = arg8 + (ebp_18 << 2)
            
            do
                float xmm0_34 = *edi_26
                edi_26 += 4
                float xmm0_36 = xmm0_34 * xmm3_3 f+ *(arg8 + (eax_53 << 2))
                ebp_18 = var_28_4
                eax_53 += 1
                *esi_31 = xmm0_36
                esi_31 += 4
                float xmm0_37 = *ecx_27
                ecx_27 += 4
                *edx_37 = xmm0_37 * xmm4
                edx_37 = &edx_37[1]
            while (eax_53 s< ebx_8)
            
            edi_25 = var_24_4
            esi_31 = var_3c_3
            edx_37 = var_34_2
            i_26 = i_38
        
        float xmm5_1 = xmm3_3
        float xmm1_15 = xmm4
        
        if (edx_1 s> 2)
            float* ecx_28 = arg8 + (ebp_18 << 2)
            float* ebx_9 = edi_25 + arg8
            int32_t j_21 = edx_1 - 2
            eax_53 = arg5
            int32_t j_7
            
            do
                ecx_28 -= edi_25
                ebx_9 += edi_25
                float xmm2_3 = xmm5_1 * xmm3_3 - xmm1_15 * xmm4
                xmm1_15 = xmm1_15 * xmm3_3 + xmm5_1 * xmm4
                xmm5_1 = xmm2_3
                
                if (eax_53 s> 0)
                    int32_t k_12 = arg5
                    float* eax_64 = edx_37
                    float* edx_38 = ecx_28
                    void* ecx_29 = esi_31
                    float* esi_32 = ebx_9
                    int32_t k_4
                    
                    do
                        float xmm0_41 = *esi_32
                        esi_32 = &esi_32[1]
                        *ecx_29 = xmm0_41 * xmm2_3 f+ *ecx_29
                        ecx_29 += 4
                        float xmm0_44 = *edx_38
                        edx_38 = &edx_38[1]
                        *eax_64 = xmm0_44 * xmm1_15 + *eax_64
                        eax_64 = &eax_64[1]
                        k_4 = k_12
                        k_12 -= 1
                    while (k_4 != 1)
                    edi_25 = var_24_4
                    eax_53 = arg5
                
                esi_31 = var_3c_3
                edx_37 = var_34_2
                j_7 = j_21
                j_21 -= 1
            while (j_7 != 1)
            i_26 = i_38
            ebp_18 = var_28_4
            ebx_8 = arg5
        
        esi_30 = var_3c_3
        i_10 = i_26
        i_26 -= 1
        edx_36 = var_34_2
        i_38 = i_26
    while (i_10 != 1)
    ebx = var_48
    esi_29 = arg5
    edx_35 = edx_1

int32_t edi_27 = 0

if (edx_35 s> 1)
    eax_53 = esi_29 << 2
    void* ebx_11 = arg8 + 8
    int32_t var_4_1 = eax_53
    int32_t i_30 = edx_35 - 1
    int32_t i_39 = i_30
    int32_t i_11
    
    do
        edi_27 += esi_29
        ebx_11 += eax_53
        int32_t ecx_30 = 0
        int32_t ebp_21 = edi_27
        
        if (esi_29 s>= 4)
            void* eax_66 = arg10 + 8
            int32_t j_23 = ((esi_29 - 4) u>> 2) + 1
            void* edx_39 = ebx_11
            ecx_30 = j_23 << 2
            ebp_21 = ecx_30 + edi_27
            int32_t j_8
            
            do
                *(eax_66 - 8) = *(edx_39 - 8) f+ *(eax_66 - 8)
                *(eax_66 - 4) = *(edx_39 - 4) f+ *(eax_66 - 4)
                *eax_66 = *edx_39 f+ *eax_66
                float xmm0_53 = *(edx_39 + 4)
                edx_39 += 0x10
                *(eax_66 + 4) = xmm0_53 f+ *(eax_66 + 4)
                eax_66 += 0x10
                j_8 = j_23
                j_23 -= 1
            while (j_8 != 1)
            i_30 = i_39
            esi_29 = arg5
        
        if (ecx_30 s< esi_29)
            void* eax_68 = arg8 + (ebp_21 << 2)
            
            do
                float xmm0_55 = *eax_68
                eax_68 += 4
                *(arg10 + (ecx_30 << 2)) = xmm0_55 f+ *(arg10 + (ecx_30 << 2))
                ecx_30 += 1
            while (ecx_30 s< esi_29)
        
        eax_53 = var_4_1
        i_11 = i_30
        i_30 -= 1
        i_39 = i_30
    while (i_11 != 1)
    ebx = var_48

int32_t esi_35 = arg4
void* esi_38

if (ebx s>= esi_35)
    eax_53 = 0
    int32_t ecx_44 = 0
    int32_t var_34_4 = 0
    esi_38 = arg6
    arg5 = 0
    
    if (esi_35 s> 0)
        void* var_38_4 = &arg9[2]
        void* var_3c_5 = esi_38 + 8
        int32_t i_23 = arg4
        int32_t i_12
        
        do
            int32_t ebp_31 = 0
            int32_t edx_61 = eax_53
            int32_t edi_36 = ecx_44
            
            if (ebx s>= 4)
                void* ecx_45 = var_3c_5
                void* edx_62 = var_38_4
                int32_t j_26 = ((ebx - 4) u>> 2) + 1
                ebp_31 = j_26 << 2
                int32_t eax_95 = eax_53 + ebp_31
                int32_t j_9
                
                do
                    ecx_45 += 0x10
                    *(ecx_45 - 0x18) = *(edx_62 - 8)
                    edx_62 += 0x10
                    *(ecx_45 - 0x14) = *(edx_62 - 0x14)
                    *(ecx_45 - 0x10) = *(edx_62 - 0x10)
                    *(ecx_45 - 0xc) = *(edx_62 - 0xc)
                    j_9 = j_26
                    j_26 -= 1
                while (j_9 != 1)
                eax_53 = var_34_4
                ecx_44 = arg5
                edx_61 = eax_95
                edi_36 = arg5 + ebp_31
            
            if (ebp_31 s< ebx)
                void* ecx_46 = esi_38 + (edi_36 << 2)
                int32_t j_27 = ebx - ebp_31
                void* edx_63 = &arg9[edx_61]
                int32_t j_10
                
                do
                    int32_t eax_103 = *edx_63
                    edx_63 += 4
                    *ecx_46 = eax_103
                    ecx_46 += 4
                    j_10 = j_27
                    j_27 -= 1
                while (j_10 != 1)
                eax_53 = var_34_4
                ecx_44 = arg5
            
            var_38_4 += ebx << 2
            eax_53 += ebx
            ecx_44 += eax_4
            var_34_4 = eax_53
            arg5 = ecx_44
            var_3c_5 += eax_4 << 2
            i_12 = i_23
            i_23 -= 1
        while (i_12 != 1)
else
    int32_t ebp_23 = 0
    int32_t var_24_5 = 0
    
    if (ebx s> 0)
        do
            eax_53 = 0
            arg5 = 0
            int32_t ecx_31 = ebp_23
            int32_t edx_40 = ebp_23
            
            if (esi_35 s>= 4)
                int32_t i_34 = ((esi_35 - 4) u>> 2) + 1
                arg5 = i_34 << 2
                int32_t i_13
                
                do
                    int32_t ecx_32 = ecx_31 + ebx
                    *(arg6 + (edx_40 << 2)) = arg9[ecx_31]
                    int32_t edx_41 = edx_40 + eax_4
                    int32_t ecx_33 = ecx_32 + ebx
                    *(arg6 + (edx_41 << 2)) = arg9[ecx_32]
                    int32_t edx_42 = edx_41 + eax_4
                    int32_t ecx_34 = ecx_33 + ebx
                    *(arg6 + (edx_42 << 2)) = arg9[ecx_33]
                    int32_t edx_43 = edx_42 + eax_4
                    ecx_31 = ecx_34 + ebx
                    *(arg6 + (edx_43 << 2)) = arg9[ecx_34]
                    edx_40 = edx_43 + eax_4
                    i_13 = i_34
                    i_34 -= 1
                while (i_13 != 1)
                ebp_23 = var_24_5
                eax_53 = arg5
                esi_35 = arg4
            
            if (eax_53 s< esi_35)
                int32_t* edx_44 = arg6 + (edx_40 << 2)
                int32_t i_35 = esi_35 - arg5
                int32_t* ecx_35 = &arg9[ecx_31]
                int32_t i_14
                
                do
                    eax_53 = *ecx_35
                    ecx_35 = &ecx_35[ebx]
                    *edx_44 = eax_53
                    edx_44 = &edx_44[eax_4]
                    i_14 = i_35
                    i_35 -= 1
                while (i_14 != 1)
                ebx = var_48
                esi_35 = arg4
            
            ebp_23 += 1
            var_24_5 = ebp_23
        while (ebp_23 s< ebx)
    
    esi_38 = arg6

int32_t edi_31 = var_4c
int32_t edx_45 = ebx * 2
int32_t ebp_25 = edx_1
int32_t ecx_37 = edi_31 * arg2
int32_t var_28_5 = edx_45

if (ebp_25 s> 1)
    int32_t edx_46 = edx_45 << 2
    eax_53 = edi_31 << 2
    int32_t i_31 = ebp_25 - 1
    int32_t* edx_47 = arg9
    int32_t var_14_4 = eax_53
    int32_t i_40 = i_31
    int32_t* edi_30 = &edx_47[ecx_37]
    void* ecx_38 = esi_38
    int32_t esi_39 = edx_46
    int32_t i_15
    
    do
        ebx = var_48
        ecx_38 += esi_39
        edx_47 += eax_53
        void* var_10_4 = ecx_38
        edi_30 -= eax_53
        int32_t* var_c_4 = edx_47
        int32_t* var_8_6 = edi_30
        
        if (arg4 s> 0)
            int32_t j_24 = arg4
            int32_t j_11
            
            do
                int32_t eax_80 = *edx_47
                edx_47 = &edx_47[ebx]
                *(ecx_38 - 4) = eax_80
                int32_t eax_81 = *edi_30
                edi_30 = &edi_30[ebx]
                *ecx_38 = eax_81
                ecx_38 += eax_4 << 2
                j_11 = j_24
                j_24 -= 1
            while (j_11 != 1)
            ebx = var_48
            edi_30 = var_8_6
            edx_47 = var_c_4
            ecx_38 = var_10_4
            eax_53 = var_14_4
            i_31 = i_40
            esi_39 = edx_46
        
        i_15 = i_31
        i_31 -= 1
        i_40 = i_31
    while (i_15 != 1)
    esi_38 = arg6
    edx_45 = ebx * 2
    edi_31 = var_4c
    ebp_25 = edx_1

if (ebx != 1)
    if (eax_2 s>= arg4)
        eax_53 = neg.d(ebx)
        
        if (ebp_25 s> 1)
            int32_t edx_66 = edx_45 << 2
            int32_t ebp_33 = esi_38 + 8
            int32_t edi_40 = edi_31 << 2
            int32_t var_18_4 = edi_40
            void* ecx_48 = &arg9[ecx_37 + 2]
            void* esi_44 = esi_38 + ((eax_53 + ebx) << 2) - 8
            void* edx_68 = &arg9[2]
            int32_t i_20 = edx_1 - 1
            eax_53 = edx_66
            int32_t i_16
            
            do
                esi_44 += eax_53
                ebp_33 += eax_53
                void* var_14_6 = esi_44
                edx_68 += edi_40
                ecx_48 -= edi_40
                void* var_c_6 = ecx_48
                
                if (arg4 s> 0)
                    void* var_20_5 = esi_44
                    void* ebp_34 = edx_68
                    int32_t edx_69 = ebp_33
                    arg5 = edx_69
                    void* var_24_7 = ecx_48
                    int32_t edi_41 = eax_4 << 2
                    int32_t j_14 = arg4
                    int32_t eax_110 = var_48 << 2
                    int32_t var_8_9 = edi_41
                    int32_t j_12
                    
                    do
                        if (var_48 s> 2)
                            void* eax_111 = ebp_34
                            int32_t k_13 = ((var_48 - 3) u>> 1) + 1
                            int32_t k_5
                            
                            do
                                *(edx_69 - 4) = *(eax_111 - 4) f+ *(ecx_48 - 4)
                                *(esi_44 - 4) = *(eax_111 - 4) f- *(ecx_48 - 4)
                                *edx_69 = *ecx_48 f+ *eax_111
                                edx_69 += 8
                                float xmm0_71 = *ecx_48
                                ecx_48 += 8
                                float xmm0_72 = xmm0_71 f- *eax_111
                                eax_111 += 8
                                *esi_44 = xmm0_72
                                esi_44 -= 8
                                k_5 = k_13
                                k_13 -= 1
                            while (k_5 != 1)
                            esi_44 = var_20_5
                            eax_110 = var_48 << 2
                            edx_69 = arg5
                            ecx_48 = var_24_7
                            edi_41 = var_8_9
                        
                        edx_69 += edi_41
                        esi_44 += edi_41
                        ecx_48 += eax_110
                        arg5 = edx_69
                        ebp_34 += eax_110
                        var_20_5 = esi_44
                        j_12 = j_14
                        j_14 -= 1
                        var_24_7 = ecx_48
                    while (j_12 != 1)
                    ecx_48 = var_c_6
                    esi_44 = var_14_6
                    edi_40 = var_18_4
                    eax_53 = edx_66
                
                i_16 = i_20
                i_20 -= 1
            while (i_16 != 1)
    else
        eax_53 = neg.d(ebx)
        int32_t ebp_27 = 0
        
        if (edx_1 s> 1)
            int32_t edx_49 = edi_31 << 2
            int32_t edi_33 = ebx - 2 + eax_53
            void* esi_40 = esi_38 + (edi_33 << 2)
            void* edx_53 = &arg9[2]
            int32_t ecx_42 = 4 - eax_53 - ebx
            int32_t i_24 = edx_1 - 1
            void* eax_86 = &arg9[ecx_37 + 2]
            int32_t i_17
            
            do
                edi_33 += var_28_5
                esi_40 += ebx * 8
                ecx_42 += neg.d(edx_45)
                ebp_27 += var_28_5
                edx_53 += edx_49
                eax_86 -= edx_49
                int32_t var_c_5 = ecx_42
                
                if (ebx s> 2)
                    void* ebp_28 = eax_86
                    int32_t var_3c_4 = ecx_42
                    void* var_34_3 = edx_53
                    int32_t esi_41 = edi_33
                    void* edi_34 = esi_40
                    int32_t j_16 = ((ebx - 3) u>> 1) + 1
                    arg5 = esi_41
                    void* var_38_3 = ebp_28
                    void* var_30_1 = edi_34
                    int32_t j_28 = j_16
                    int32_t j_13
                    
                    do
                        void* edx_54 = var_34_3
                        
                        if (arg4 s> 0)
                            void* ecx_43 = edx_54
                            void* esi_42 = var_30_1
                            void* edx_55 = var_38_3
                            int32_t edi_35 = eax_4 << 2
                            int32_t k_8 = arg4
                            int32_t ebp_30 = ebx << 2
                            void* eax_94 = ((var_3c_4 + arg5 + ebp_27) << 2) + arg6
                            int32_t k_6
                            
                            do
                                *(eax_94 - 4) = *(edx_55 - 4) f+ *(ecx_43 - 4)
                                *(esi_42 - 4) = *(ecx_43 - 4) f- *(edx_55 - 4)
                                *eax_94 = *edx_55 f+ *ecx_43
                                eax_94 += edi_35
                                float xmm0_63 = *edx_55
                                edx_55 += ebp_30
                                float xmm0_64 = xmm0_63 f- *ecx_43
                                ecx_43 += ebp_30
                                *esi_42 = xmm0_64
                                esi_42 += edi_35
                                k_6 = k_8
                                k_8 -= 1
                            while (k_6 != 1)
                            j_16 = j_28
                            ecx_42 = var_3c_4
                            edx_54 = var_34_3
                            esi_41 = arg5
                            ebp_28 = var_38_3
                            edi_34 = var_30_1
                        
                        esi_41 -= 2
                        edi_34 -= 8
                        arg5 = esi_41
                        ebp_28 += 8
                        var_30_1 = edi_34
                        ecx_42 += 4
                        var_34_3 = edx_54 + 8
                        j_13 = j_16
                        j_16 -= 1
                        var_38_3 = ebp_28
                        var_3c_4 = ecx_42
                        j_28 = j_16
                    while (j_13 != 1)
                    ecx_42 = var_c_5
                
                i_17 = i_24
                i_24 -= 1
            while (i_17 != 1)
            return eax_86

return eax_53
