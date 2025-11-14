// 函数: sub_63e840
// 地址: 0x63e840
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t* ebx = arg1
void* eax_2 = ebx[0x10]
void* edi = *(eax_2 + 4)
void* eax_3 = *(eax_2 + 0x68)
void* eax_4 = ebx[0x1a]
int32_t ecx = *(edi + 0x1c)
int32_t eax_5 = ebx[9]
int32_t esi_1 = *(edi + 4) << 2
void* var_1c = edi
__alloca_probe_16(esi_1)
int32_t __saved_edi
int32_t* var_68 = &__saved_edi
int32_t eax_7 = sub_6382a0(ebx, esi_1)
int32_t* eax_8 = sub_6382a0(ebx, *(edi + 4) << 2)
int32_t* eax_9 = sub_6382a0(ebx, *(edi + 4) << 2)
float var_48 = *(eax_4 + 4)
__alloca_probe_16(*(edi + 4) << 2)
int32_t edx_5 = ebx[7]
int32_t* var_2c = &__saved_edi
int32_t* esi_2 = *(ecx + (edx_5 << 2) + 0x220)
int32_t eax_15 = neg.d(edx_5)
int32_t* ecx_6 = ((sbb.d(eax_15, eax_15, edx_5 != 0) & 2) + *(eax_4 + 8)) * 0x34 + *(eax_3 + 0x38)
int32_t i = 0
ebx[0xa] = edx_5
int32_t i_4 = 0

if (*(edi + 4) s> 0)
    int32_t eax_21
    int32_t edx_6
    edx_6:eax_21 = sx.q(eax_5)
    float xmm1_1 = 4f / _mm_cvtepi32_ps(zx.o(eax_5))
    void* edx_8 = (((eax_21 - edx_6) s>> 1 << 2) + 7) & 0xfffffff8
    int32_t* esi_4 = &__saved_edi
    void* eax_30 = eax_7 - &__saved_edi
    void* var_14_1 = edx_8
    
    do
        void* eax_32 = *(*ebx + (i << 2))
        
        if (ebx[0x12] + edx_8 s> ebx[0x13])
            if (ebx[0x11] != 0)
                int32_t* eax_35 = _malloc(8)
                edx_8 = var_14_1
                ebx[0x14] += ebx[0x12]
                eax_35[1] = ebx[0x15]
                *eax_35 = ebx[0x11]
                ebx[0x15] = eax_35
            
            ebx[0x13] = edx_8
            int32_t eax_39 = _malloc(edx_8)
            edx_8 = var_14_1
            ebx[0x11] = eax_39
            ebx[0x12] = 0
        
        void* eax_40 = ebx[0x12]
        void* ecx_9 = ebx[0x11] + eax_40
        ebx[0x12] = eax_40 + edx_8
        *(eax_30 + esi_4 + eax_8 - eax_7) = ecx_9
        edi = var_1c
        
        if (ebx[0x12] + edx_8 s> ebx[0x13])
            if (ebx[0x11] != 0)
                int32_t* eax_46 = _malloc(8)
                edx_8 = var_14_1
                ebx[0x14] += ebx[0x12]
                eax_46[1] = ebx[0x15]
                *eax_46 = ebx[0x11]
                ebx[0x15] = eax_46
            
            ebx[0x13] = edx_8
            int32_t eax_50 = _malloc(edx_8)
            edx_8 = var_14_1
            ebx[0x11] = eax_50
            ebx[0x12] = 0
        
        void* eax_51 = ebx[0x12]
        void* ecx_12 = ebx[0x11] + eax_51
        ebx[0x12] = eax_51 + edx_8
        *(eax_30 + esi_4) = ecx_12
        int32_t eax_55 = xmm1_1 & 0x7fffffff
        void* var_7c_3 = ebx[8]
        int32_t var_80_1 = ebx[7]
        double xmm0_5 = _mm_cvtepi32_pd(zx.q(eax_55))
        uint32_t eax_56 = eax_55 u>> 0x1f
        int32_t var_84_1 = ebx[6]
        float xmm0_12 = _mm_cvtpd_ps(_mm_cvtps_pd(
            _mm_cvtpd_ps(xmm0_5 f+ *((eax_56 << 3) + &data_709480)) * 7.1771143e-07f - 764.616211f)
            + 0.34499999999999997)
        sub_649bf0(eax_56, eax_3 + 4, eax_32, ecx, var_84_1, var_80_1, var_7c_3)
        int32_t eax_58 = ebx[7]
        sub_640cb0(eax_58, eax_32, **(eax_3 + (eax_58 << 2) + 0xc), *(eax_30 + esi_4))
        int32_t eax_60 = ebx[7] * 3
        int32_t ecx_17 = *(eax_3 + (eax_60 << 2) + 0x14)
        
        if (ecx_17 != 1)
            void* edx_12 = *(eax_3 + (eax_60 << 2) + 0x18)
            void* eax_61 = edx_12 + (ecx_17 << 2)
            sub_646a40(eax_61, eax_32, ecx_17, edx_12, eax_61, *(eax_3 + (eax_60 << 2) + 0x1c))
            edi = var_1c
        
        int32_t j = 1
        int32_t eax_63 = *eax_32 & 0x7fffffff
        double xmm5_1 = 0.34499999999999997
        int32_t xmm0_23 = _mm_cvtpd_ps(_mm_cvtps_pd(
            _mm_cvtpd_ps(_mm_cvtepi32_pd(zx.q(eax_63)) f+ *((eax_63 u>> 0x1f << 3) + &data_709480))
            * 7.1771143e-07f - 764.616211f + xmm0_12) + xmm5_1)
        *eax_32 = xmm0_23
        *esi_4 = xmm0_23
        
        if (eax_5 - 1 s> 1)
            do
                float xmm0_24 = *(eax_32 + (j << 2))
                float xmm1_2 = *(eax_32 + (j << 2) + 4)
                int32_t eax_66 = (xmm1_2 * xmm1_2 + xmm0_24 * xmm0_24) & 0x7fffffff
                int32_t xmm0_36 = _mm_cvtpd_ps(_mm_cvtps_pd((_mm_cvtpd_ps(
                    _mm_cvtepi32_pd(zx.q(eax_66)) f+ *((eax_66 u>> 0x1f << 3) + &data_709480))
                    * 7.1771143e-07f - 764.616211f) * 0.5f + xmm0_12) + xmm5_1)
                *(eax_32 + ((j + 1) s>> 1 << 2)) = xmm0_36
                
                if (not(xmm0_36 f<= *esi_4))
                    *esi_4 = xmm0_36
                
                j += 2
            while (j s< eax_5 - 1)
            
            edi = var_1c
        
        if (not(*esi_4 f<= 0))
            *esi_4 = 0
        
        float xmm0_38 = *esi_4
        
        if (not(xmm0_38 <= var_48))
            var_48 = xmm0_38
        
        esi_4 = &esi_4[1]
        edx_8 = var_14_1
        i = i_4 + 1
        i_4 = i
    while (i s< *(edi + 4))

int32_t eax_71
int32_t edx_15
edx_15:eax_71 = sx.q(eax_5)
int32_t eax_73 = (eax_71 - edx_15) s>> 1
void* ecx_20 = ((eax_73 << 2) + 7) & 0xfffffff8
void* var_c_4 = ecx_20

if (ebx[0x12] + ecx_20 s> ebx[0x13])
    if (ebx[0x11] != 0)
        int32_t* eax_76 = _malloc(8)
        ebx[0x14] += ebx[0x12]
        eax_76[1] = ebx[0x15]
        *eax_76 = ebx[0x11]
        ecx_20 = var_c_4
        ebx[0x15] = eax_76
    
    ebx[0x13] = ecx_20
    int32_t eax_77 = _malloc(ecx_20)
    ecx_20 = var_c_4
    ebx[0x11] = eax_77
    ebx[0x12] = 0

void* eax_78 = ebx[0x12]
void* edx_16 = ebx[0x11]
void* esi_5 = edx_16 + eax_78
void* eax_79 = eax_78 + ecx_20
ebx[0x12] = eax_79
int32_t* esi_6 = esi_2

if (eax_79 + ecx_20 s> ebx[0x13])
    if (edx_16 != 0)
        int32_t* eax_81 = _malloc(8)
        ebx[0x14] += eax_79
        eax_81[1] = ebx[0x15]
        *eax_81 = ebx[0x11]
        ecx_20 = var_c_4
        ebx[0x15] = eax_81
    
    ebx[0x13] = ecx_20
    int32_t eax_82 = _malloc(ecx_20)
    ecx_20 = var_c_4
    ebx[0x11] = eax_82
    ebx[0x12] = 0

void* eax_83 = ebx[0x12]
void* edx_18 = ebx[0x11] + eax_83
int32_t i_1 = 0
ebx[0x12] = eax_83 + ecx_20
int32_t var_34 = edx_18
int32_t i_3 = 0

if (*(edi + 4) s> 0)
    int32_t* edx_19 = eax_9
    void* var_2c_1 = var_2c - edx_19
    int32_t* var_14_2 = edx_19
    
    do
        int32_t eax_88 = esi_6[i_1 + 1]
        void* eax_90 = var_2c_1 + edx_19
        void* eax_91 = *(eax_90 + eax_7 - var_2c)
        edi = var_1c
        float* eax_93 = *(*ebx + (i_1 << 2))
        ebx[0xa] = edx_5
        
        if (ebx[0x12] + 0x40 s> ebx[0x13])
            if (ebx[0x11] != 0)
                int32_t* eax_97 = _malloc(8)
                ebx[0x14] += ebx[0x12]
                eax_97[1] = ebx[0x15]
                *eax_97 = ebx[0x11]
                ebx[0x15] = eax_97
            
            ebx[0x13] = 0x40
            edx_19 = var_14_2
            ebx[0x11] = _malloc(0x40)
            ebx[0x12] = 0
        
        int32_t eax_99 = ebx[0x12]
        char* ecx_31 = ebx[0x11] + eax_99
        ebx[0x12] = eax_99 + 0x40
        *edx_19 = ecx_31
        _memset(ecx_31, 0, 0x3c)
        int32_t ecx_32 = eax_73
        int32_t eax_101 = 0
        double xmm3_1 = 0.34499999999999997
        
        if (ecx_32 s>= 4)
            void* ecx_33 = &eax_93[ecx_32]
            void* ebx_1 = eax_91 + 0xc
            void* edx_21 = ecx_33 + 4
            int32_t j_9 = ((ecx_32 - 4) u>> 2) + 1
            int32_t eax_104 = j_9 << 2
            int32_t j_1
            
            do
                int32_t eax_106 = *(ebx_1 - 0xc) & 0x7fffffff
                *(edx_21 - 4) = _mm_cvtpd_ps(_mm_cvtps_pd(_mm_cvtpd_ps(
                    _mm_cvtepi32_pd(zx.q(eax_106)) f+ *((eax_106 u>> 0x1f << 3) + &data_709480))
                    * 7.1771143e-07f - 764.616211f) + xmm3_1)
                int32_t eax_109 = *(eax_91 - ecx_33 + edx_21) & 0x7fffffff
                *edx_21 = _mm_cvtpd_ps(_mm_cvtps_pd(_mm_cvtpd_ps(_mm_cvtepi32_pd(zx.q(eax_109)) f+
                    *((eax_109 u>> 0x1f << 3) + &data_709480)) * 7.1771143e-07f - 764.616211f) + xmm3_1)
                int32_t eax_112 = *(ebx_1 - 4) & 0x7fffffff
                *(edx_21 + 4) = _mm_cvtpd_ps(_mm_cvtps_pd(_mm_cvtpd_ps(
                    _mm_cvtepi32_pd(zx.q(eax_112)) f+ *((eax_112 u>> 0x1f << 3) + &data_709480))
                    * 7.1771143e-07f - 764.616211f) + xmm3_1)
                int32_t xmm0_69 = *ebx_1
                ebx_1 += 0x10
                int32_t eax_115 = xmm0_69 & 0x7fffffff
                *(edx_21 + 8) = _mm_cvtpd_ps(_mm_cvtps_pd(_mm_cvtpd_ps(
                    _mm_cvtepi32_pd(zx.q(eax_115)) f+ *((eax_115 u>> 0x1f << 3) + &data_709480))
                    * 7.1771143e-07f - 764.616211f) + xmm3_1)
                edx_21 += 0x10
                j_1 = j_9
                j_9 -= 1
            while (j_1 != 1)
            esi_6 = esi_2
            eax_101 = eax_104
            ecx_32 = eax_73
        
        if (eax_101 s< ecx_32)
            void* edx_22 = &eax_93[eax_73]
            int32_t* ecx_37 = edx_22 + (eax_101 << 2)
            int32_t j_10 = eax_73 - eax_101
            int32_t j_2
            
            do
                int32_t eax_118 = *(ecx_37 + eax_91 - edx_22) & 0x7fffffff
                *ecx_37 = _mm_cvtpd_ps(_mm_cvtps_pd(_mm_cvtpd_ps(_mm_cvtepi32_pd(zx.q(eax_118)) f+
                    *((eax_118 u>> 0x1f << 3) + &data_709480)) * 7.1771143e-07f - 764.616211f) + xmm3_1)
                ecx_37 = &ecx_37[1]
                j_2 = j_10
                j_10 -= 1
            while (j_2 != 1)
            edi = var_1c
        
        sub_641a90(eax_93, &eax_93[eax_73], ecx_6, esi_5)
        sub_641e40(eax_90, eax_93, ecx_6, var_48, var_34, *eax_90)
        float* eax_122 = &eax_93[eax_73]
        sub_641fb0(eax_122, esi_5, ecx_6, var_34, 1, eax_93, eax_91, eax_122)
        int32_t eax_124 = esi_6[eax_88 + 0x101]
        
        if (*(ecx + (eax_124 << 2) + 0x320) != 1)
            sub_69a5bc(eax_1 ^ &__saved_ebp)
            return 0xffffffff
        
        float* var_7c_9 = eax_93
        ebx = arg1
        void* var_80_4 = &eax_93[eax_73]
        *(*(eax_3 + 0x30) + (eax_124 << 2))
        int32_t*** edx_32 = var_14_2
        (*edx_32)[7] = sub_63bbb0()
        
        if (sub_637ed0(ebx) != 0 && (*edx_32)[7] != 0)
            int32_t edx_33 = 0
            int32_t ecx_48 = *ecx_6
            float xmm2_2 = *(ecx_6[1] + 0x14)
            
            if (ecx_48 s> 0)
                int32_t ecx_49 = var_34
                void* eax_133 = eax_93 - var_34
                void* var_3c_2 = eax_133
                
                do
                    float xmm0_91 = *(*(ecx_6[3] + 8) + (edx_33 << 2)) f+ *(esi_5 - var_34 + ecx_49)
                    float xmm1_5 = *(ecx_6[1] + 0x6c)
                    
                    if (not(xmm0_91 <= xmm1_5))
                        xmm0_91 = xmm1_5
                    
                    float xmm1_7 = xmm2_2 f+ *ecx_49
                    
                    if (not(xmm0_91 > xmm1_7))
                        xmm0_91 = xmm1_7
                    
                    *(eax_133 + ecx_49) = xmm0_91
                    edx_33 += 1
                    ecx_49 += 4
                while (edx_33 s< ecx_48)
                
                ebx = arg1
                esi_6 = esi_2
            
            float* var_7c_10 = eax_93
            void* var_80_5 = &eax_93[eax_73]
            *(*(eax_3 + 0x30) + (esi_6[eax_88 + 0x101] << 2))
            int32_t edx_37 = 0
            *(*var_14_2 + 0x38) = sub_63bbb0()
            int32_t ecx_55 = *ecx_6
            float xmm2_3 = *(ecx_6[1] + 0xc)
            
            if (ecx_55 s> 0)
                float* ecx_56 = var_34
                void* eax_148 = eax_93 - var_34
                void* var_3c_3 = eax_148
                
                do
                    float xmm0_93 = *(*ecx_6[3] + (edx_37 << 2)) f+ *(ecx_56 + esi_5 - var_34)
                    float xmm1_8 = *(ecx_6[1] + 0x6c)
                    
                    if (not(xmm0_93 <= xmm1_8))
                        xmm0_93 = xmm1_8
                    
                    float xmm1_10 = *ecx_56 + xmm2_3
                    
                    if (not(xmm0_93 > xmm1_10))
                        xmm0_93 = xmm1_10
                    
                    *(ecx_56 + eax_148) = xmm0_93
                    edx_37 += 1
                    ecx_56 = &ecx_56[1]
                while (edx_37 s< ecx_55)
                
                ebx = arg1
                esi_6 = esi_2
            
            float* var_7c_11 = eax_93
            void* var_80_6 = &eax_93[eax_73]
            *(*(eax_3 + 0x30) + (esi_6[eax_88 + 0x101] << 2))
            edx_32 = var_14_2
            int32_t* var_10_5 = 4
            int32_t j_3 = 0x10000
            **edx_32 = sub_63bbb0()
            
            do
                int32_t** ecx_61 = *edx_32
                int32_t var_7c_12 = j_3 s/ 7
                int32_t eax_163 = esi_2[eax_88 + 0x101]
                edx_32 = var_14_2
                j_3 += 0x10000
                int32_t* edi_11 = var_10_5
                var_10_5 = &var_10_5[1]
                *(edi_11 + *edx_32) = sub_63c1c0(eax_163, *(*(eax_3 + 0x30) + (eax_163 << 2)), ebx, 
                    *ecx_61, ecx_61[7])
            while (j_3 s< 0x70000)
            
            int32_t edi_12 = 0x20
            
            for (int32_t j_4 = 0x10000; j_4 s< 0x70000; )
                int32_t** ecx_66 = *edx_32
                int32_t var_7c_13 = j_4 s/ 7
                int32_t eax_170 = esi_2[eax_88 + 0x101]
                edx_32 = var_14_2
                edi_12 += 4
                j_4 += 0x10000
                *(edi_12 + *edx_32 - 4) = sub_63c1c0(eax_170, *(*(eax_3 + 0x30) + (eax_170 << 2)), 
                    ebx, ecx_66[7], ecx_66[0xe])
            
            edi = var_1c
            esi_6 = esi_2
        
        edx_19 = &edx_32[1]
        i_1 = i_3 + 1
        var_14_2 = edx_19
        i_3 = i_1
    while (i_1 s< *(edi + 4))

*(eax_4 + 4) = var_48
int32_t esi_12 = *(edi + 4) << 2
__alloca_probe_16(esi_12)
int32_t* var_30_3 = &__saved_edi
__alloca_probe_16(esi_12)
int32_t* var_48_1 = &__saved_edi
void* eax_176 = *(ebx[0x10] + 0x68)
int32_t eax_178

if (eax_176 == 0xffffffb0 || *(eax_176 + 0x50) == 0)
    eax_178 = 0
else
    eax_178 = 1

int32_t i_2 = 7

if (eax_178 != 0)
    i_2 = 0

int32_t i_5 = i_2
int32_t eax_180 = sub_637ed0(ebx)
int32_t eax_181 = neg.d(eax_180)

if (i_2 s<= (sbb.d(eax_181, eax_181, eax_180 != 0) & 7) + 7)
    int32_t eax_216
    int32_t eax_217
    
    do
        int32_t* esi_13 = *(eax_4 + (i_2 << 2) + 0xc)
        sub_637ef0(esi_13, 0, 1)
        sub_637ef0(esi_13, edx_5, *(eax_3 + 0x2c))
        
        if (ebx[7] != 0)
            sub_637ef0(esi_13, ebx[6], 1)
            sub_637ef0(esi_13, ebx[8], 1)
        
        int32_t j_7 = 0
        
        if (*(edi + 4) s> 0)
            int32_t* esi_14 = eax_9
            int32_t* ecx_76 = &esi_2[1]
            int32_t* eax_188 = eax_8 - esi_14
            void* edx_52 = var_68 - esi_14
            int32_t* var_10_6 = ecx_76
            int32_t* var_4c_4 = eax_188
            int32_t j_5
            
            do
                int32_t eax_192 = *(eax_3 + 0x30)
                int32_t eax_193 = sub_63c260(eax_192, ebx, esi_13, 
                    *(eax_192 + (esi_2[*ecx_76 + 0x101] << 2)), *(*esi_14 + (i_5 << 2)), 
                    *(eax_188 + esi_14))
                esi_14 = &esi_14[1]
                *(edx_52 + esi_14 - 4) = eax_193
                j_5 = j_7 + 1
                ecx_76 = &var_10_6[1]
                j_7 = j_5
                eax_188 = var_4c_4
                var_10_6 = ecx_76
            while (j_5 s< *(edi + 4))
        
        int32_t eax_198 = (ebx[7] + 0x36) * 0xf + i_5
        sub_642520(eax_198, ecx + 0xb34, i_5, ecx_6, esi_2, eax_7, eax_8, var_68, 
            *(ecx + 0xb34 + (eax_198 << 2) - 0xb34), *(edi + 4))
        int32_t j_8 = 0
        
        if (*esi_2 s> 0)
            void* esi_16 = &esi_2[0x111]
            void* var_10_7 = esi_16
            int32_t j_6
            
            do
                int32_t edx_57 = 0
                int32_t esi_17 = *esi_16
                int32_t k = 0
                int32_t var_c_6 = 0
                int32_t var_44_2 = esi_17
                
                if (*(var_1c + 4) s> 0)
                    int32_t* edx_58 = eax_8
                    void* ebx_8 = var_68 - edx_58
                    int32_t* ecx_86 = var_48_1
                    void* esi_19 = &esi_2[1]
                    int32_t j_11 = j_8
                    int32_t* ebx_10 = var_30_3 - ecx_86
                    
                    do
                        if (*esi_19 == j_11)
                            *ecx_86 = 0
                            
                            if (*(ebx_8 + edx_58) != 0)
                                *ecx_86 = 1
                            
                            var_c_6 += 1
                            *(ebx_10 + ecx_86) = *edx_58
                            ecx_86 = &ecx_86[1]
                            j_11 = j_8
                        
                        k += 1
                        esi_19 += 4
                        edx_58 = &edx_58[1]
                    while (k s< *(var_1c + 4))
                    
                    ebx = arg1
                    edx_57 = var_c_6
                    esi_17 = var_44_2
                
                int32_t eax_206 = (
                    *(*((*(ecx + (esi_17 << 2) + 0x520) << 2) + &data_6f86f0) + 0x14))(ebx, 
                    *(*(eax_3 + 0x34) + (esi_17 << 2)), var_30_3, var_48_1, edx_57)
                int32_t k_1 = 0
                void* eax_207 = var_1c
                int32_t edx_59 = 0
                
                if (*(eax_207 + 4) s> 0)
                    void* esi_21 = &esi_2[1]
                    
                    do
                        if (*esi_21 == j_8)
                            var_30_3[edx_59] = eax_8[k_1]
                            edx_59 += 1
                            eax_207 = var_1c
                        
                        k_1 += 1
                        esi_21 += 4
                    while (k_1 s< *(eax_207 + 4))
                    
                    ebx = arg1
                    esi_17 = var_44_2
                
                (*(*((*(ecx + (esi_17 << 2) + 0x520) << 2) + &data_6f86f0) + 0x18))(esi_13, ebx, 
                    *(*(eax_3 + 0x34) + (esi_17 << 2)), var_30_3, var_48_1, edx_59, eax_206, j_8)
                j_6 = j_8 + 1
                esi_16 = var_10_7 + 4
                j_8 = j_6
                var_10_7 = esi_16
            while (j_6 s< *esi_2)
            edi = var_1c
        
        i_2 = i_5 + 1
        i_5 = i_2
        eax_216 = sub_637ed0(ebx)
        eax_217 = neg.d(eax_216)
    while (i_2 s<= (sbb.d(eax_217, eax_217, eax_216 != 0) & 7) + 7)

sub_69a5bc(eax_1 ^ &__saved_ebp)
return 0
