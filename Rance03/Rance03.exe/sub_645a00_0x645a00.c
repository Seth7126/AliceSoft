// 函数: sub_645a00
// 地址: 0x645a00
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t ebx = arg3
int32_t var_48 = ebx
int32_t xmm0[0x4] = 6.28318548f / _mm_cvtepi32_ps(zx.o(arg2))
int80_t x87_r0
float xmm0_1 = ___libm_sse2_cosf(xmm0, x87_r0)
int80_t x87_r1
float xmm0_3 = ___libm_sse2_sinf(xmm0, x87_r1)
int32_t edi_1 = ebx * arg4
int32_t eax_1 = (ebx - 1) s>> 1
int32_t eax_3 = ebx * arg2
int32_t edx_1 = (arg2 + 1) s>> 1
int32_t var_4c = edi_1

if (ebx != 1)
    int32_t eax_4 = arg5
    int32_t ebp_1 = 0
    
    if (eax_4 s>= 4)
        void* edx_2 = arg8 + 0xc
        int32_t i_32 = ((eax_4 - 4) u>> 2) + 1
        ebp_1 = i_32 << 2
        void* ecx_1 = arg10 + 4
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
        eax_4 = arg5
        edi_1 = var_4c
    
    if (ebp_1 s< eax_4)
        int32_t* ecx_2 = arg10 + (ebp_1 << 2)
        int32_t i_27 = eax_4 - ebp_1
        int32_t i_1
        
        do
            int32_t eax_9 = *(ecx_2 + arg8 - arg10)
            ecx_2 = &ecx_2[1]
            ecx_2[-1] = eax_9
            i_1 = i_27
            i_27 -= 1
        while (i_1 != 1)
    
    int32_t esi_9 = arg2
    int32_t eax_10 = 0
    
    if (esi_9 s> 1)
        int32_t i_28 = esi_9 - 1
        int32_t i_36 = i_28
        int32_t i_2
        
        do
            int32_t eax_11 = eax_10 + edi_1
            int32_t ecx_3 = eax_11
            int32_t eax_12 = arg4
            int32_t ebp_2 = 0
            
            if (eax_12 s>= 4)
                int32_t j_18 = ((eax_12 - 4) u>> 2) + 1
                ebp_2 = j_18 << 2
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
                    j = j_18
                    j_18 -= 1
                while (j != 1)
                i_28 = i_36
                eax_12 = arg4
            
            if (ebp_2 s< eax_12)
                int32_t* ecx_7 = &arg9[ecx_3]
                int32_t j_19 = eax_12 - ebp_2
                int32_t j_1
                
                do
                    *ecx_7 = *(arg7 - arg9 + ecx_7)
                    ecx_7 = &ecx_7[ebx]
                    j_1 = j_19
                    j_19 -= 1
                while (j_1 != 1)
                i_28 = i_36
            
            eax_10 = eax_11
            i_2 = i_28
            i_28 -= 1
            edi_1 = var_4c
            i_36 = i_28
        while (i_2 != 1)
        esi_9 = arg2
    
    int32_t edx_9 = neg.d(ebx)
    int32_t var_3c_1 = edx_9
    
    if (eax_1 s<= arg4)
        if (esi_9 s> 1)
            int32_t esi_12 = var_4c << 2
            int32_t var_38_2 = esi_12
            float* eax_27 = arg11 + (edx_9 << 2) - 4
            void* edx_16 = &arg7[-1]
            int32_t i_19 = arg2 - 1
            float* edi_10 = arg9
            float* ecx_11 = arg9
            int32_t i_3
            
            do
                eax_27 = &eax_27[ebx]
                ecx_11 += esi_12
                edx_16 += esi_12
                
                if (ebx s> 2)
                    int32_t* esi_13 = edx_16
                    int32_t edx_17 = arg4
                    float* ecx_12 = eax_27
                    float* ebx_3 = ecx_11
                    int32_t j_15 = ((ebx - 3) u>> 1) + 1
                    int32_t j_31 = j_15
                    int32_t j_2
                    
                    do
                        esi_13 = &esi_13[2]
                        ecx_12 = &ecx_12[2]
                        ebx_3 = &ebx_3[2]
                        
                        if (edx_17 s> 0)
                            int32_t* eax_30 = esi_13
                            int32_t k_11 = arg4
                            float* edx_18 = ebx_3
                            int32_t k
                            
                            do
                                *(eax_30 + edi_10 - arg7) =
                                    *eax_30 * ecx_12[-1] + *ecx_12 f* eax_30[1]
                                float xmm0_10 = *eax_30
                                float xmm1_12 = ecx_12[-1] f* eax_30[1]
                                eax_30 = &eax_30[ebx]
                                *edx_18 = xmm1_12 - xmm0_10 * *ecx_12
                                edx_18 = &edx_18[ebx]
                                k = k_11
                                k_11 -= 1
                            while (k != 1)
                            j_15 = j_31
                            edi_10 = arg9
                            edx_17 = arg4
                        
                        j_2 = j_15
                        j_15 -= 1
                        j_31 = j_15
                    while (j_2 != 1)
                    ebx = var_48
                    esi_12 = var_38_2
                
                i_3 = i_19
                i_19 -= 1
            while (i_3 != 1)
    else if (esi_9 s> 1)
        int32_t ecx_8 = ebx << 2
        float* ebp_4 = arg9 - ecx_8
        int32_t esi_10 = var_4c << 2
        int32_t var_1c_1 = esi_10
        float* eax_22 = arg11 + (edx_9 << 2) - 4
        void* edx_12 = arg7 - ecx_8 - 4
        int32_t i_21 = arg2 - 1
        ebx = var_48
        int32_t i_4
        
        do
            float* edi_6 = arg9
            ebp_4 += esi_10
            edx_12 += esi_10
            float* var_28_1 = ebp_4
            eax_22 += ecx_8
            
            if (arg4 s> 0)
                void* eax_23 = edx_12
                int32_t j_20 = arg4
                int32_t j_29 = j_20
                int32_t j_3
                
                do
                    eax_23 += ecx_8
                    ebp_4 += ecx_8
                    void* var_20_2 = eax_23
                    
                    if (ebx s> 2)
                        float* ecx_9 = eax_22
                        float* esi_11 = ebp_4
                        int32_t k_9 = ((ebx - 3) u>> 1) + 1
                        int32_t k_1
                        
                        do
                            float xmm1_2 = *(eax_23 + 8)
                            eax_23 += 8
                            float xmm1_3 = xmm1_2 * ecx_9[1]
                            ecx_9 = &ecx_9[2]
                            esi_11 = &esi_11[2]
                            *(edi_6 - arg7 + eax_23) = xmm1_3 + *(eax_23 + 4) * *ecx_9
                            *esi_11 = ecx_9[-1] f* *(eax_23 + 4) - *eax_23 * *ecx_9
                            k_1 = k_9
                            k_9 -= 1
                        while (k_1 != 1)
                        eax_23 = var_20_2
                        ecx_8 = ebx << 2
                        j_20 = j_29
                        edi_6 = arg9
                    
                    j_3 = j_20
                    j_20 -= 1
                    j_29 = j_20
                while (j_3 != 1)
                ebp_4 = var_28_1
                esi_10 = var_1c_1
            
            i_4 = i_21
            i_21 -= 1
        while (i_4 != 1)
    
    int32_t eax_31 = 0
    int32_t esi_15 = var_4c * arg2
    
    if (eax_1 s>= arg4)
        if (edx_1 s> 1)
            int32_t ecx_17 = var_4c << 2
            float* edx_25 = arg7
            int32_t var_8_2 = ecx_17
            void* ebp_9 = &arg7[esi_15]
            void* edi_21 = &arg9[-1]
            void* esi_21 = &arg9[esi_15 - 1]
            int32_t i_25 = edx_1 - 1
            int32_t i_38 = i_25
            int32_t i_5
            
            do
                ebx = var_48
                edx_25 += ecx_17
                edi_21 += ecx_17
                ebp_9 -= ecx_17
                esi_21 -= ecx_17
                void* var_c_2 = ebp_9
                void* var_14_2 = esi_21
                
                if (arg4 s> 0)
                    float* ecx_18 = edx_25
                    void* var_2c_2 = ebp_9
                    void* edx_26 = edi_21
                    float* var_24_3 = ecx_18
                    int32_t j_25 = arg4
                    int32_t eax_40 = ebx << 2
                    void* var_28_3 = edx_26
                    void* var_3c_2 = esi_21
                    int32_t j_30 = j_25
                    int32_t j_4
                    
                    do
                        if (ebx s> 2)
                            float* eax_41 = edx_26
                            void* edi_22 = ebp_9
                            void* ebp_11 = arg7 - arg9
                            float* esi_22 = ecx_18
                            int32_t* ecx_19 = var_3c_2
                            int32_t k_10 = ((ebx - 3) u>> 1) + 1
                            int32_t k_2
                            
                            do
                                float xmm0_20 = ecx_19[2]
                                ecx_19 = &ecx_19[2]
                                float xmm0_21 = xmm0_20 + eax_41[2]
                                eax_41 = &eax_41[2]
                                esi_22 = &esi_22[2]
                                edi_22 += 8
                                *(eax_41 + ebp_11) = xmm0_21
                                *(ecx_19 + ebp_11) = eax_41[1] f- ecx_19[1]
                                *esi_22 = ecx_19[1] f+ eax_41[1]
                                *edi_22 = *ecx_19 - *eax_41
                                k_2 = k_10
                                k_10 -= 1
                            while (k_2 != 1)
                            ecx_18 = var_24_3
                            eax_40 = ebx << 2
                            edx_26 = var_28_3
                            ebp_9 = var_2c_2
                            esi_21 = var_3c_2
                            j_25 = j_30
                        
                        ecx_18 += eax_40
                        edx_26 += eax_40
                        ebp_9 += eax_40
                        var_24_3 = ecx_18
                        esi_21 += eax_40
                        var_28_3 = edx_26
                        j_4 = j_25
                        j_25 -= 1
                        var_2c_2 = ebp_9
                        var_3c_2 = esi_21
                        j_30 = j_25
                    while (j_4 != 1)
                    ecx_17 = var_8_2
                    ebp_9 = var_c_2
                    esi_21 = var_14_2
                    i_25 = i_38
                
                i_5 = i_25
                i_25 -= 1
                i_38 = i_25
            while (i_5 != 1)
    else if (edx_1 s> 1)
        int32_t ebp_6 = ebx << 2
        float* ecx_15 = arg7 - ebp_6
        float* edi_15 = arg9 - ebp_6 - 4
        int32_t i_22 = edx_1 - 1
        int32_t i_6
        
        do
            eax_31 += var_4c
            ecx_15 = &ecx_15[var_4c]
            edi_15 = &edi_15[var_4c]
            float* var_8_1 = ecx_15
            var_3c_1 += var_4c
            esi_15 -= var_4c
            ebx = var_48
            int32_t edx_23 = eax_31
            
            if (ebx s> 2)
                int32_t ebx_6 = var_3c_1
                int32_t j_16 = ((ebx - 3) u>> 1) + 1
                int32_t j_32 = j_16
                float* edi_16 = edi_15
                int32_t j_5
                
                do
                    ebx_6 += 2
                    edx_23 += 2
                    ecx_15 = &ecx_15[2]
                    edi_16 = &edi_16[2]
                    
                    if (arg4 s> 0)
                        float* edx_24 = ecx_15
                        float* ecx_16 = edi_16
                        void* esi_19 = &arg7[ebx_6 + esi_15 - eax_31]
                        int32_t k_7 = arg4
                        float* eax_36 = &arg9[-1 + ebx_6 + esi_15 - eax_31]
                        void* edi_20 = arg7 - arg9
                        int32_t k_3
                        
                        do
                            float xmm0_12 = eax_36[ebx]
                            eax_36 = &eax_36[ebx]
                            float xmm0_13 = xmm0_12 + ecx_16[ebx]
                            ecx_16 = &ecx_16[ebx]
                            edx_24 = &edx_24[ebx]
                            esi_19 += ebp_6
                            k_3 = k_7
                            k_7 -= 1
                            *(ecx_16 + edi_20) = xmm0_13
                            *(eax_36 + edi_20) = ecx_16[1] - eax_36[1]
                            *edx_24 = ecx_16[1] + eax_36[1]
                            *esi_19 = *eax_36 - *ecx_16
                        while (k_3 != 1)
                        j_16 = j_32
                    
                    j_5 = j_16
                    j_16 -= 1
                    j_32 = j_16
                while (j_5 != 1)
                ebx = var_48
                ecx_15 = var_8_1
            
            i_6 = i_22
            i_22 -= 1
        while (i_6 != 1)

int32_t eax_46 = arg5
int32_t ebp_12 = 0

if (eax_46 s>= 4)
    void* edx_29 = arg10 + 0xc
    void* ecx_20 = arg8 + 4
    int32_t i_33 = ((eax_46 - 4) u>> 2) + 1
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
    eax_46 = arg5

if (ebp_12 s< eax_46)
    void* ecx_21 = arg8 + (ebp_12 << 2)
    int32_t i_29 = eax_46 - ebp_12
    int32_t i_8
    
    do
        int32_t eax_47 = *(arg10 - arg8 + ecx_21)
        ecx_21 += 4
        *(ecx_21 - 4) = eax_47
        i_8 = i_29
        i_29 -= 1
    while (i_8 != 1)

int32_t edx_32 = 0
int32_t eax_49 = arg2 * arg5
int32_t esi_28 = eax_49

if (edx_1 s> 1)
    int32_t ebp_15 = neg.d(ebx)
    float* ebx_8 = arg9 - (ebx << 2)
    int32_t ecx_22 = var_4c << 2
    int32_t var_10_3 = ecx_22
    int32_t i_18 = edx_1 - 1
    int32_t i_9
    
    do
        ebx_8 += ecx_22
        edx_32 += var_4c
        esi_28 -= var_4c
        ebp_15 += var_4c
        i_9 = i_18
        
        if (arg4 s> 0)
            float* ecx_23 = ebx_8
            int32_t* edx_34 = arg7 - arg9
            float* eax_57 = &arg9[ebp_15 - edx_32 + esi_28]
            int32_t j_22 = arg4
            int32_t j_6
            
            do
                float xmm0_28 = ecx_23[ebx]
                ecx_23 = &ecx_23[ebx]
                float xmm0_29 = xmm0_28 + eax_57[ebx]
                eax_57 = &eax_57[ebx]
                *(edx_34 + ecx_23) = xmm0_29
                *(edx_34 + eax_57) = *eax_57 - *ecx_23
                j_6 = j_22
                j_22 -= 1
            while (j_6 != 1)
            i_9 = i_18
            ecx_22 = var_10_3
        
        i_18 = i_9 - 1
    while (i_9 != 1)
    ebx = var_48

float xmm4 = (zx.o(0)).d
int32_t esi_30 = arg5
int32_t edx_35 = edx_1
float xmm6 = 1f
int32_t ebp_18 = (arg2 - 1) * esi_30
int32_t var_28_4 = ebp_18

if (edx_35 s> 1)
    int32_t edi_26 = esi_30 << 2
    int32_t ebx_9 = arg5
    void* esi_31 = arg10
    int32_t var_24_4 = edi_26
    void* edx_36 = arg10 + (eax_49 << 2)
    int32_t i_26 = edx_1 - 1
    int32_t i_37 = i_26
    int32_t i_10
    
    do
        void* esi_32 = esi_31 + edi_26
        float* edx_37 = edx_36 - edi_26
        eax_49 = 0
        void* var_38_4 = esi_32
        float* var_34_1 = edx_37
        float xmm3_3 = xmm6 * xmm0_1 - xmm4 * xmm0_3
        xmm4 = xmm4 * xmm0_1 + xmm6 * xmm0_3
        xmm6 = xmm3_3
        
        if (ebx_9 s> 0)
            float* edi_27 = edi_26 + arg8
            void* ecx_27 = arg8 + (ebp_18 << 2)
            
            do
                float xmm0_34 = *edi_27
                edi_27 = &edi_27[1]
                float xmm0_36 = xmm0_34 * xmm3_3 f+ *(arg8 + (eax_49 << 2))
                ebp_18 = var_28_4
                eax_49 += 1
                *esi_32 = xmm0_36
                esi_32 += 4
                float xmm0_37 = *ecx_27
                ecx_27 += 4
                *edx_37 = xmm0_37 * xmm4
                edx_37 = &edx_37[1]
            while (eax_49 s< ebx_9)
            
            edi_26 = var_24_4
            esi_32 = var_38_4
            edx_37 = var_34_1
            i_26 = i_37
        
        float xmm5_1 = xmm3_3
        float xmm1_15 = xmm4
        
        if (edx_1 s> 2)
            float* ecx_28 = arg8 + (ebp_18 << 2)
            float* ebx_10 = edi_26 + arg8
            int32_t j_21 = edx_1 - 2
            eax_49 = arg5
            int32_t j_7
            
            do
                ecx_28 -= edi_26
                ebx_10 += edi_26
                float xmm2_3 = xmm5_1 * xmm3_3 - xmm1_15 * xmm4
                xmm1_15 = xmm1_15 * xmm3_3 + xmm5_1 * xmm4
                xmm5_1 = xmm2_3
                
                if (eax_49 s> 0)
                    int32_t k_12 = arg5
                    float* eax_60 = edx_37
                    float* edx_38 = ecx_28
                    void* ecx_29 = esi_32
                    float* esi_33 = ebx_10
                    int32_t k_4
                    
                    do
                        float xmm0_41 = *esi_33
                        esi_33 = &esi_33[1]
                        *ecx_29 = xmm0_41 * xmm2_3 f+ *ecx_29
                        ecx_29 += 4
                        float xmm0_44 = *edx_38
                        edx_38 = &edx_38[1]
                        *eax_60 = xmm0_44 * xmm1_15 + *eax_60
                        eax_60 = &eax_60[1]
                        k_4 = k_12
                        k_12 -= 1
                    while (k_4 != 1)
                    edi_26 = var_24_4
                    eax_49 = arg5
                
                esi_32 = var_38_4
                edx_37 = var_34_1
                j_7 = j_21
                j_21 -= 1
            while (j_7 != 1)
            i_26 = i_37
            ebp_18 = var_28_4
            ebx_9 = arg5
        
        esi_31 = var_38_4
        i_10 = i_26
        i_26 -= 1
        edx_36 = var_34_1
        i_37 = i_26
    while (i_10 != 1)
    ebx = var_48
    esi_30 = arg5
    edx_35 = edx_1

int32_t edi_28 = 0

if (edx_35 s> 1)
    eax_49 = esi_30 << 2
    void* ebx_12 = arg8 + 8
    int32_t var_4_1 = eax_49
    int32_t i_30 = edx_35 - 1
    int32_t i_39 = i_30
    int32_t i_11
    
    do
        edi_28 += esi_30
        ebx_12 += eax_49
        int32_t ecx_30 = 0
        int32_t ebp_21 = edi_28
        
        if (esi_30 s>= 4)
            void* eax_62 = arg10 + 8
            int32_t j_23 = ((esi_30 - 4) u>> 2) + 1
            void* edx_39 = ebx_12
            ecx_30 = j_23 << 2
            ebp_21 = ecx_30 + edi_28
            int32_t j_8
            
            do
                *(eax_62 - 8) = *(edx_39 - 8) f+ *(eax_62 - 8)
                *(eax_62 - 4) = *(edx_39 - 4) f+ *(eax_62 - 4)
                *eax_62 = *eax_62 f+ *edx_39
                float xmm0_53 = *(edx_39 + 4)
                edx_39 += 0x10
                *(eax_62 + 4) = xmm0_53 f+ *(eax_62 + 4)
                eax_62 += 0x10
                j_8 = j_23
                j_23 -= 1
            while (j_8 != 1)
            i_30 = i_39
            esi_30 = arg5
        
        if (ecx_30 s< esi_30)
            void* eax_64 = arg8 + (ebp_21 << 2)
            
            do
                float xmm0_55 = *eax_64
                eax_64 += 4
                *(arg10 + (ecx_30 << 2)) = xmm0_55 f+ *(arg10 + (ecx_30 << 2))
                ecx_30 += 1
            while (ecx_30 s< esi_30)
        
        eax_49 = var_4_1
        i_11 = i_30
        i_30 -= 1
        i_39 = i_30
    while (i_11 != 1)
    ebx = var_48

int32_t esi_36 = arg4
void* esi_39

if (ebx s>= esi_36)
    eax_49 = 0
    int32_t ecx_44 = 0
    int32_t var_34_3 = 0
    esi_39 = arg6
    arg5 = 0
    
    if (esi_36 s> 0)
        void* var_38_6 = &arg9[2]
        void* var_3c_4 = esi_39 + 8
        int32_t i_23 = arg4
        int32_t i_12
        
        do
            int32_t ebp_37 = 0
            int32_t edx_56 = eax_49
            int32_t edi_37 = ecx_44
            
            if (ebx s>= 4)
                void* ecx_45 = var_3c_4
                void* edx_57 = var_38_6
                int32_t j_26 = ((ebx - 4) u>> 2) + 1
                ebp_37 = j_26 << 2
                int32_t eax_91 = eax_49 + ebp_37
                int32_t j_9
                
                do
                    ecx_45 += 0x10
                    *(ecx_45 - 0x18) = *(edx_57 - 8)
                    edx_57 += 0x10
                    *(ecx_45 - 0x14) = *(edx_57 - 0x14)
                    *(ecx_45 - 0x10) = *(edx_57 - 0x10)
                    *(ecx_45 - 0xc) = *(edx_57 - 0xc)
                    j_9 = j_26
                    j_26 -= 1
                while (j_9 != 1)
                eax_49 = var_34_3
                ecx_44 = arg5
                edx_56 = eax_91
                edi_37 = arg5 + ebp_37
            
            if (ebp_37 s< ebx)
                void* ecx_46 = esi_39 + (edi_37 << 2)
                int32_t j_27 = ebx - ebp_37
                void* edx_58 = &arg9[edx_56]
                int32_t j_10
                
                do
                    int32_t eax_99 = *edx_58
                    edx_58 += 4
                    *ecx_46 = eax_99
                    ecx_46 += 4
                    j_10 = j_27
                    j_27 -= 1
                while (j_10 != 1)
                eax_49 = var_34_3
                ecx_44 = arg5
            
            var_38_6 += ebx << 2
            eax_49 += ebx
            ecx_44 += eax_3
            var_34_3 = eax_49
            arg5 = ecx_44
            var_3c_4 += eax_3 << 2
            i_12 = i_23
            i_23 -= 1
        while (i_12 != 1)
else
    int32_t ebp_23 = 0
    int32_t var_24_5 = 0
    
    if (ebx s> 0)
        do
            eax_49 = 0
            arg5 = 0
            int32_t ecx_31 = ebp_23
            int32_t edx_40 = ebp_23
            
            if (esi_36 s>= 4)
                int32_t i_34 = ((esi_36 - 4) u>> 2) + 1
                arg5 = i_34 << 2
                int32_t i_13
                
                do
                    int32_t ecx_32 = ecx_31 + ebx
                    *(arg6 + (edx_40 << 2)) = arg9[ecx_31]
                    int32_t edx_41 = edx_40 + eax_3
                    int32_t ecx_33 = ecx_32 + ebx
                    *(arg6 + (edx_41 << 2)) = arg9[ecx_32]
                    int32_t edx_42 = edx_41 + eax_3
                    int32_t ecx_34 = ecx_33 + ebx
                    *(arg6 + (edx_42 << 2)) = arg9[ecx_33]
                    int32_t edx_43 = edx_42 + eax_3
                    ecx_31 = ecx_34 + ebx
                    *(arg6 + (edx_43 << 2)) = arg9[ecx_34]
                    edx_40 = edx_43 + eax_3
                    i_13 = i_34
                    i_34 -= 1
                while (i_13 != 1)
                ebp_23 = var_24_5
                eax_49 = arg5
                esi_36 = arg4
            
            if (eax_49 s< esi_36)
                int32_t* edx_44 = arg6 + (edx_40 << 2)
                int32_t i_35 = esi_36 - arg5
                int32_t* ecx_35 = &arg9[ecx_31]
                int32_t i_14
                
                do
                    eax_49 = *ecx_35
                    ecx_35 = &ecx_35[ebx]
                    *edx_44 = eax_49
                    edx_44 = &edx_44[eax_3]
                    i_14 = i_35
                    i_35 -= 1
                while (i_14 != 1)
                ebx = var_48
                esi_36 = arg4
            
            ebp_23 += 1
            var_24_5 = ebp_23
        while (ebp_23 s< ebx)
    
    esi_39 = arg6

int32_t edi_32 = var_4c
int32_t ebp_25 = ebx * 2
int32_t edx_45 = edx_1
int32_t ecx_37 = edi_32 * arg2
int32_t var_28_5 = ebp_25

if (edx_45 s> 1)
    int32_t edx_46 = ebp_25 << 2
    eax_49 = edi_32 << 2
    int32_t* edx_47 = arg9
    int32_t i_31 = edx_1 - 1
    int32_t var_14_4 = eax_49
    int32_t i_40 = i_31
    int32_t* edi_31 = &edx_47[ecx_37]
    void* ecx_38 = esi_39
    int32_t esi_40 = edx_46
    int32_t i_15
    
    do
        ebx = var_48
        ecx_38 += esi_40
        edx_47 += eax_49
        void* var_10_4 = ecx_38
        edi_31 -= eax_49
        int32_t* var_c_4 = edx_47
        int32_t* var_8_6 = edi_31
        
        if (arg4 s> 0)
            int32_t j_24 = arg4
            int32_t j_11
            
            do
                int32_t eax_76 = *edx_47
                edx_47 = &edx_47[ebx]
                *(ecx_38 - 4) = eax_76
                int32_t eax_77 = *edi_31
                edi_31 = &edi_31[ebx]
                *ecx_38 = eax_77
                ecx_38 += eax_3 << 2
                j_11 = j_24
                j_24 -= 1
            while (j_11 != 1)
            ebx = var_48
            edi_31 = var_8_6
            edx_47 = var_c_4
            ecx_38 = var_10_4
            eax_49 = var_14_4
            i_31 = i_40
            esi_40 = edx_46
        
        i_15 = i_31
        i_31 -= 1
        i_40 = i_31
    while (i_15 != 1)
    esi_39 = arg6
    ebp_25 = ebx * 2
    edi_32 = var_4c
    edx_45 = edx_1

if (ebx != 1)
    if (eax_1 s>= arg4)
        eax_49 = neg.d(ebx)
        
        if (edx_45 s> 1)
            int32_t edx_61 = ebp_25 << 2
            int32_t edi_41 = edi_32 << 2
            int32_t ebp_39 = esi_39 + 8
            int32_t var_18_4 = edi_41
            void* esi_45 = esi_39 + ((eax_49 + ebx) << 2) - 8
            void* ecx_48 = &arg9[ecx_37 + 2]
            void* edx_63 = &arg9[2]
            int32_t i_20 = edx_1 - 1
            eax_49 = edx_61
            int32_t i_16
            
            do
                esi_45 += eax_49
                ebp_39 += eax_49
                void* var_14_6 = esi_45
                edx_63 += edi_41
                ecx_48 -= edi_41
                void* var_c_6 = ecx_48
                
                if (arg4 s> 0)
                    void* var_20_5 = esi_45
                    void* ebp_40 = edx_63
                    int32_t edx_64 = ebp_39
                    arg5 = edx_64
                    void* var_24_7 = ecx_48
                    int32_t edi_42 = eax_3 << 2
                    int32_t j_14 = arg4
                    int32_t eax_106 = var_48 << 2
                    int32_t var_8_9 = edi_42
                    int32_t j_12
                    
                    do
                        if (var_48 s> 2)
                            void* eax_107 = ebp_40
                            int32_t k_13 = ((var_48 - 3) u>> 1) + 1
                            int32_t k_5
                            
                            do
                                *(edx_64 - 4) = *(ecx_48 - 4) f+ *(eax_107 - 4)
                                *(esi_45 - 4) = *(eax_107 - 4) f- *(ecx_48 - 4)
                                *edx_64 = *ecx_48 f+ *eax_107
                                edx_64 += 8
                                float xmm0_71 = *ecx_48
                                ecx_48 += 8
                                float xmm0_72 = xmm0_71 f- *eax_107
                                eax_107 += 8
                                *esi_45 = xmm0_72
                                esi_45 -= 8
                                k_5 = k_13
                                k_13 -= 1
                            while (k_5 != 1)
                            esi_45 = var_20_5
                            eax_106 = var_48 << 2
                            edx_64 = arg5
                            ecx_48 = var_24_7
                            edi_42 = var_8_9
                        
                        edx_64 += edi_42
                        esi_45 += edi_42
                        ecx_48 += eax_106
                        arg5 = edx_64
                        ebp_40 += eax_106
                        var_20_5 = esi_45
                        j_12 = j_14
                        j_14 -= 1
                        var_24_7 = ecx_48
                    while (j_12 != 1)
                    ecx_48 = var_c_6
                    esi_45 = var_14_6
                    edi_41 = var_18_4
                    eax_49 = edx_61
                
                i_16 = i_20
                i_20 -= 1
            while (i_16 != 1)
    else
        eax_49 = neg.d(ebx)
        int32_t edx_48 = 0
        
        if (edx_1 s> 1)
            int32_t ebp_29 = edi_32 << 2
            int32_t ebp_33 = ebx - 2 + eax_49
            void* edi_34 = &arg9[2]
            int32_t ecx_42 = 4 - eax_49 - ebx
            void* esi_41 = esi_39 + (ebp_33 << 2)
            int32_t i_24 = edx_1 - 1
            void* eax_82 = &arg9[ecx_37 + 2]
            int32_t i_17
            
            do
                ebp_33 += var_28_5
                esi_41 += ebx * 8
                ecx_42 += neg.d(ebp_25)
                edx_48 += var_28_5
                edi_34 += ebp_29
                eax_82 -= ebp_29
                int32_t var_c_5 = ecx_42
                
                if (ebx s> 2)
                    int32_t esi_42 = ebp_33
                    void* var_34_2 = edi_34
                    void* edi_35 = esi_41
                    void* ebp_34 = eax_82
                    int32_t var_3c_3 = ecx_42
                    int32_t j_17 = ((ebx - 3) u>> 1) + 1
                    arg5 = esi_42
                    void* var_38_5 = ebp_34
                    void* var_30_1 = edi_35
                    int32_t j_28 = j_17
                    int32_t j_13
                    
                    do
                        void* edx_49 = var_34_2
                        
                        if (arg4 s> 0)
                            void* ecx_43 = edx_49
                            void* esi_43 = var_30_1
                            void* edx_50 = var_38_5
                            int32_t edi_36 = eax_3 << 2
                            int32_t k_8 = arg4
                            int32_t ebp_36 = ebx << 2
                            void* eax_90 = ((var_3c_3 + arg5 + edx_48) << 2) + arg6
                            int32_t k_6
                            
                            do
                                *(eax_90 - 4) = *(ecx_43 - 4) f+ *(edx_50 - 4)
                                *(esi_43 - 4) = *(ecx_43 - 4) f- *(edx_50 - 4)
                                *eax_90 = *edx_50 f+ *ecx_43
                                eax_90 += edi_36
                                float xmm0_63 = *edx_50
                                edx_50 += ebp_36
                                float xmm0_64 = xmm0_63 f- *ecx_43
                                ecx_43 += ebp_36
                                *esi_43 = xmm0_64
                                esi_43 += edi_36
                                k_6 = k_8
                                k_8 -= 1
                            while (k_6 != 1)
                            j_17 = j_28
                            ecx_42 = var_3c_3
                            edx_49 = var_34_2
                            esi_42 = arg5
                            ebp_34 = var_38_5
                            edi_35 = var_30_1
                        
                        esi_42 -= 2
                        edi_35 -= 8
                        arg5 = esi_42
                        ebp_34 += 8
                        var_30_1 = edi_35
                        ecx_42 += 4
                        var_34_2 = edx_49 + 8
                        j_13 = j_17
                        j_17 -= 1
                        var_38_5 = ebp_34
                        var_3c_3 = ecx_42
                        j_28 = j_17
                    while (j_13 != 1)
                    ecx_42 = var_c_5
                
                i_17 = i_24
                i_24 -= 1
            while (i_17 != 1)
            return eax_82

return eax_49
