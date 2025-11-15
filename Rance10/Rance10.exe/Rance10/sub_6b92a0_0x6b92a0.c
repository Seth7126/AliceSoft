// 函数: sub_6b92a0
// 地址: 0x6b92a0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

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
void* var_20 = edi
__alloca_probe_16(esi_1)
int32_t __saved_edi
int32_t* var_68 = &__saved_edi
int32_t eax_7 = sub_6b3050(ebx, esi_1)
int32_t* eax_8 = sub_6b3050(ebx, *(edi + 4) << 2)
int32_t* eax_9 = sub_6b3050(ebx, *(edi + 4) << 2)
float var_48 = *(eax_4 + 4)
__alloca_probe_16(*(edi + 4) << 2)
int32_t ecx_4 = ebx[7]
int32_t* var_24 = &__saved_edi
uint32_t (* eax_13)[0x4] = *(ecx + (ecx_4 << 2) + 0x220)
int32_t eax_15 = neg.d(ecx_4)
int32_t* eax_20 = ((sbb.d(eax_15, eax_15, ecx_4 != 0) & 2) + *(eax_4 + 8)) * 0x34 + *(eax_3 + 0x38)
ebx[0xa] = ecx_4
int32_t i = 0
int32_t i_4 = 0

if (*(edi + 4) s> 0)
    int32_t eax_22
    int32_t edx_5
    edx_5:eax_22 = sx.q(eax_5)
    float xmm1_1 = 4f / _mm_cvtepi32_ps(zx.o(eax_5))
    void* edx_7 = (((eax_22 - edx_5) s>> 1 << 2) + 7) & 0xfffffff8
    int32_t* esi_4 = &__saved_edi
    void* var_14_1 = edx_7
    void* eax_31 = eax_7 - &__saved_edi
    
    do
        void* eax_33 = *(*ebx + (i << 2))
        
        if (ebx[0x12] + edx_7 s> ebx[0x13])
            if (ebx[0x11] != 0)
                int32_t var_7c_1 = 8
                int32_t* eax_36 = sub_705e22()
                edx_7 = var_14_1
                ebx[0x14] += ebx[0x12]
                eax_36[1] = ebx[0x15]
                *eax_36 = ebx[0x11]
                ebx[0x15] = eax_36
            
            void* var_7c_2 = edx_7
            ebx[0x13] = edx_7
            edx_7 = var_14_1
            ebx[0x11] = sub_705e22()
            ebx[0x12] = 0
        
        void* eax_41 = ebx[0x12]
        void* ecx_7 = ebx[0x11] + eax_41
        ebx[0x12] = eax_41 + edx_7
        *(eax_31 + esi_4 + eax_8 - eax_7) = ecx_7
        edi = var_20
        
        if (ebx[0x12] + edx_7 s> ebx[0x13])
            if (ebx[0x11] != 0)
                int32_t var_7c_3 = 8
                int32_t* eax_47 = sub_705e22()
                edx_7 = var_14_1
                ebx[0x14] += ebx[0x12]
                eax_47[1] = ebx[0x15]
                *eax_47 = ebx[0x11]
                ebx[0x15] = eax_47
            
            void* var_7c_4 = edx_7
            ebx[0x13] = edx_7
            edx_7 = var_14_1
            ebx[0x11] = sub_705e22()
            ebx[0x12] = 0
        
        void* eax_52 = ebx[0x12]
        void* ecx_10 = ebx[0x11] + eax_52
        ebx[0x12] = eax_52 + edx_7
        *(eax_31 + esi_4) = ecx_10
        int32_t eax_56 = xmm1_1 & 0x7fffffff
        void* var_7c_5 = ebx[8]
        int32_t var_80_1 = ebx[7]
        double xmm0_5 = _mm_cvtepi32_pd(zx.q(eax_56))
        uint32_t eax_57 = eax_56 u>> 0x1f
        int32_t var_84_1 = ebx[6]
        float xmm0_12 = _mm_cvtpd_ps(_mm_cvtps_pd(
            _mm_cvtpd_ps(xmm0_5 f+ *((eax_57 << 3) + &data_79aa70)) * 7.1771143e-07f - 764.616211f)
            + 0.34499999999999997)
        sub_6c45c0(eax_57, eax_3 + 4, eax_33, ecx, var_84_1, var_80_1, var_7c_5)
        int32_t eax_59 = ebx[7]
        sub_6bb440(eax_59, eax_33, **(eax_3 + (eax_59 << 2) + 0xc), *(eax_31 + esi_4))
        int32_t eax_61 = ebx[7] * 3
        int32_t ecx_15 = *(eax_3 + (eax_61 << 2) + 0x14)
        
        if (ecx_15 != 1)
            float* edx_11 = *(eax_3 + (eax_61 << 2) + 0x18)
            void* eax_62 = &edx_11[ecx_15]
            sub_6c1460(eax_62, eax_33, ecx_15, edx_11, eax_62, *(eax_3 + (eax_61 << 2) + 0x1c))
            edi = var_20
        
        int32_t j = 1
        int32_t eax_64 = *eax_33 & 0x7fffffff
        int32_t xmm0_23 = _mm_cvtpd_ps(_mm_cvtps_pd(
            _mm_cvtpd_ps(_mm_cvtepi32_pd(zx.q(eax_64)) f+ *((eax_64 u>> 0x1f << 3) + &data_79aa70))
            * 7.1771143e-07f - 764.616211f + xmm0_12) + 0.34499999999999997)
        *eax_33 = xmm0_23
        *esi_4 = xmm0_23
        
        if (eax_5 - 1 s> 1)
            do
                float xmm0_24 = *(eax_33 + (j << 2))
                float xmm1_2 = *(eax_33 + (j << 2) + 4)
                int32_t eax_67 = (xmm1_2 * xmm1_2 + xmm0_24 * xmm0_24) & 0x7fffffff
                *(eax_33 + ((j + 1) s>> 1 << 2)) = (_mm_cvtpd_ps(_mm_cvtepi32_pd(zx.q(eax_67)) f+
                    *((eax_67 u>> 0x1f << 3) + &data_79aa70)) * 7.1771143e-07f - 764.616211f) * 0.5f
                    + xmm0_12 + 0.344999999f
                int32_t var_4c
                
                if (not(var_4c f<= *esi_4))
                    *esi_4 = var_4c
                
                j += 2
            while (j s< eax_5 - 1)
            
            edi = var_20
        
        if (not(*esi_4 f<= 0))
            *esi_4 = 0
        
        float xmm0_38 = __maxss_xmmss_memss(var_48, *esi_4)
        esi_4 = &esi_4[1]
        edx_7 = var_14_1
        i = i_4 + 1
        i_4 = i
        var_48 = xmm0_38
    while (i s< *(edi + 4))

int32_t eax_72
int32_t edx_14
edx_14:eax_72 = sx.q(eax_5)
int32_t eax_74 = (eax_72 - edx_14) s>> 1
void* esi_6 = ((eax_74 << 2) + 7) & 0xfffffff8

if (ebx[0x12] + esi_6 s> ebx[0x13])
    if (ebx[0x11] != 0)
        int32_t var_7c_7 = 8
        int32_t* eax_77 = sub_705e22()
        ebx[0x14] += ebx[0x12]
        eax_77[1] = ebx[0x15]
        *eax_77 = ebx[0x11]
        ebx[0x15] = eax_77
    
    void* var_7c_8 = esi_6
    ebx[0x13] = esi_6
    ebx[0x11] = sub_705e22()
    ebx[0x12] = 0

void* eax_79 = ebx[0x12]
void* ecx_20 = ebx[0x11]
void* edx_15 = ecx_20 + eax_79
void* eax_80 = eax_79 + esi_6
ebx[0x12] = eax_80

if (eax_80 + esi_6 s> ebx[0x13])
    if (ecx_20 != 0)
        int32_t var_7c_9 = 8
        int32_t* eax_82 = sub_705e22()
        ebx[0x14] += ebx[0x12]
        eax_82[1] = ebx[0x15]
        *eax_82 = ebx[0x11]
        ebx[0x15] = eax_82
    
    void* var_7c_10 = esi_6
    ebx[0x13] = esi_6
    ebx[0x11] = sub_705e22()
    ebx[0x12] = 0

void* eax_84 = ebx[0x12]
int32_t* ecx_25 = ebx[0x11] + eax_84
int32_t i_1 = 0
ebx[0x12] = eax_84 + esi_6
int32_t i_3 = 0

if (*(edi + 4) s> 0)
    int32_t* esi_7 = eax_9
    void* edx_17 = eax_7 - var_24
    void* eax_87 = var_24 - esi_7
    int32_t* var_14_2 = esi_7
    void* var_4c_1 = edx_17
    
    do
        edi = var_20
        int32_t eax_89 = (*eax_13)[i_1 + 1]
        void* eax_92 = *(eax_87 + esi_7 + edx_17)
        int32_t* eax_94 = *(*ebx + (i_1 << 2))
        ebx[0xa] = ecx_4
        
        if (ebx[0x12] + 0x40 s> ebx[0x13])
            if (ebx[0x11] != 0)
                int32_t var_7c_11 = 8
                int32_t* eax_98 = sub_705e22()
                ebx[0x14] += ebx[0x12]
                eax_98[1] = ebx[0x15]
                *eax_98 = ebx[0x11]
                ebx[0x15] = eax_98
            
            int32_t var_7c_12 = 0x40
            ebx[0x13] = 0x40
            ebx[0x11] = sub_705e22()
            ebx[0x12] = 0
        
        int32_t eax_100 = ebx[0x12]
        uint32_t (* ecx_30)[0x4] = ebx[0x11] + eax_100
        ebx[0x12] = eax_100 + 0x40
        *esi_7 = ecx_30
        _memset(ecx_30, 0, 0x3c)
        int32_t edx_18 = eax_74
        int32_t eax_102 = 0
        
        if (edx_18 s>= 4)
            void* eax_103 = &eax_94[edx_18]
            void* esi_8 = eax_92 + 0xc
            void* edx_19 = eax_103 + 4
            int32_t j_9 = ((eax_74 - 4) u>> 2) + 1
            int32_t eax_104 = j_9 << 2
            int32_t j_1
            
            do
                int32_t eax_106 = *(esi_8 - 0xc) & 0x7fffffff
                *(edx_19 - 4) = _mm_cvtpd_ps(_mm_cvtepi32_pd(zx.q(eax_106)) f+
                    *((eax_106 u>> 0x1f << 3) + &data_79aa70)) * 7.1771143e-07f - 764.616211f
                    + 0.344999999f
                int32_t eax_109 = *(eax_92 - eax_103 + edx_19) & 0x7fffffff
                *edx_19 = _mm_cvtpd_ps(_mm_cvtepi32_pd(zx.q(eax_109)) f+
                    *((eax_109 u>> 0x1f << 3) + &data_79aa70)) * 7.1771143e-07f - 764.616211f
                    + 0.344999999f
                int32_t eax_112 = *(esi_8 - 4) & 0x7fffffff
                *(edx_19 + 4) = _mm_cvtpd_ps(_mm_cvtepi32_pd(zx.q(eax_112)) f+
                    *((eax_112 u>> 0x1f << 3) + &data_79aa70)) * 7.1771143e-07f - 764.616211f
                    + 0.344999999f
                int32_t xmm0_63 = *esi_8
                esi_8 += 0x10
                int32_t eax_115 = xmm0_63 & 0x7fffffff
                *(edx_19 + 8) = _mm_cvtpd_ps(_mm_cvtepi32_pd(zx.q(eax_115)) f+
                    *((eax_115 u>> 0x1f << 3) + &data_79aa70)) * 7.1771143e-07f - 764.616211f
                    + 0.344999999f
                edx_19 += 0x10
                j_1 = j_9
                j_9 -= 1
            while (j_1 != 1)
            ebx = arg1
            esi_7 = var_14_2
            eax_102 = eax_104
            edx_18 = eax_74
        
        if (eax_102 s< edx_18)
            void* edx_20 = &eax_94[eax_74]
            int32_t* ecx_37 = edx_20 + (eax_102 << 2)
            int32_t j_10 = eax_74 - eax_102
            int32_t j_2
            
            do
                int32_t eax_118 = *(ecx_37 + eax_92 - edx_20) & 0x7fffffff
                *ecx_37 = _mm_cvtpd_ps(_mm_cvtepi32_pd(zx.q(eax_118)) f+
                    *((eax_118 u>> 0x1f << 3) + &data_79aa70)) * 7.1771143e-07f - 764.616211f
                    + 0.344999999f
                ecx_37 = &ecx_37[1]
                j_2 = j_10
                j_10 -= 1
            while (j_2 != 1)
            edi = var_20
        
        sub_6bc1e0(eax_94, &eax_94[eax_74], eax_20, edx_15)
        sub_6bc580(eax_87, eax_94, eax_20, var_48, ecx_25, *(eax_87 + esi_7))
        int32_t* eax_122 = &eax_94[eax_74]
        sub_6bc7a0(eax_122, edx_15, eax_20, ecx_25, 1, eax_94, eax_92, eax_122)
        int32_t eax_124 = (*eax_13)[eax_89 + 0x101]
        
        if (*(ecx + (eax_124 << 2) + 0x320) != 1)
            @__security_check_cookie@4(eax_1 ^ &__saved_ebp)
            return 0xffffffff
        
        int32_t* var_7c_15 = eax_94
        *(*(eax_3 + 0x30) + (eax_124 << 2))
        *(*esi_7 + 0x1c) = sub_6b64d0(&eax_94[eax_74])
        
        if (sub_6b2cd0(ebx) != 0 && *(*esi_7 + 0x1c) != 0)
            int32_t edx_29 = 0
            int32_t ecx_49 = *eax_20
            float xmm2_2 = *(eax_20[1] + 0x14)
            
            if (ecx_49 s> 0)
                int32_t* ecx_50 = ecx_25
                void* eax_136 = eax_94 - ecx_25
                void* var_50_3 = eax_136
                
                do
                    float xmm1_5 = *(*(eax_20[3] + 8) + (edx_29 << 2))
                    edx_29 += 1
                    *(eax_136 + ecx_50) = _mm_max_ss(
                        __minss_xmmss_memss(xmm1_5 f+ *(edx_15 - ecx_25 + ecx_50), 
                            *(eax_20[1] + 0x6c)), 
                        *ecx_50 + xmm2_2)
                    ecx_50 = &ecx_50[1]
                while (edx_29 s< ecx_49)
                
                ebx = arg1
                esi_7 = var_14_2
            
            int32_t* var_7c_16 = eax_94
            *(*(eax_3 + 0x30) + ((*eax_13)[eax_89 + 0x101] << 2))
            int32_t edx_33 = 0
            *(*esi_7 + 0x38) = sub_6b64d0(&eax_94[eax_74])
            int32_t ecx_56 = *eax_20
            float xmm2_3 = *(eax_20[1] + 0xc)
            
            if (ecx_56 s> 0)
                int32_t* ecx_57 = ecx_25
                void* eax_149 = eax_94 - ecx_25
                void* var_3c_4 = eax_149
                
                do
                    float xmm1_9 = *(*eax_20[3] + (edx_33 << 2))
                    edx_33 += 1
                    *(ecx_57 + eax_149) = _mm_max_ss(
                        __minss_xmmss_memss(xmm1_9 f+ *(ecx_57 + edx_15 - ecx_25), 
                            *(eax_20[1] + 0x6c)), 
                        xmm2_3 f+ *ecx_57)
                    ecx_57 = &ecx_57[1]
                while (edx_33 s< ecx_56)
                
                ebx = arg1
            
            int32_t* var_7c_17 = eax_94
            *(*(eax_3 + 0x30) + ((*eax_13)[eax_89 + 0x101] << 2))
            void* var_10_4 = 4
            int32_t j_3 = 0x10000
            **var_14_2 = sub_6b64d0(&eax_94[eax_74])
            
            do
                void** ecx_63 = *var_14_2
                int32_t var_7c_18 = j_3 s/ 7
                int32_t eax_164 = (*eax_13)[eax_89 + 0x101]
                void** edx_42 = var_10_4
                j_3 += 0x10000
                *(edx_42 + *var_14_2) = sub_6b6af0(eax_164, *(*(eax_3 + 0x30) + (eax_164 << 2)), 
                    ebx, *ecx_63, ecx_63[7])
                var_10_4 = &edx_42[1]
            while (j_3 s< 0x70000)
            
            edi = var_20
            int32_t j_4 = 0x10000
            void* var_10_5 = 0x20
            
            do
                void* ecx_68 = *var_14_2
                int32_t var_7c_19 = j_4 s/ 7
                int32_t eax_172 = (*eax_13)[eax_89 + 0x101]
                j_4 += 0x10000
                void** edx_49 = var_10_5
                *(edx_49 + *var_14_2) = sub_6b6af0(eax_172, *(*(eax_3 + 0x30) + (eax_172 << 2)), 
                    ebx, *(ecx_68 + 0x1c), *(ecx_68 + 0x38))
                var_10_5 = &edx_49[1]
            while (j_4 s< 0x70000)
            
            esi_7 = var_14_2
        
        esi_7 = &esi_7[1]
        edx_17 = var_4c_1
        i_1 = i_3 + 1
        i_3 = i_1
        var_14_2 = esi_7
    while (i_1 s< *(edi + 4))

*(eax_4 + 4) = var_48
int32_t esi_14 = *(edi + 4) << 2
__alloca_probe_16(esi_14)
int32_t* var_2c_3 = &__saved_edi
__alloca_probe_16(esi_14)
int32_t* var_48_1 = &__saved_edi
void* eax_178 = *(ebx[0x10] + 0x68)
int32_t eax_180

if (eax_178 == 0xffffffb0 || *(eax_178 + 0x50) == 0)
    eax_180 = 0
else
    eax_180 = 1

int32_t i_2 = 7

if (eax_180 != 0)
    i_2 = 0

int32_t i_5 = i_2
int32_t eax_213
int32_t eax_214

do
    int32_t* esi_15 = *(eax_4 + (i_2 << 2) + 0xc)
    sub_6b2cf0(esi_15, 0, 1)
    sub_6b2cf0(esi_15, ecx_4, *(eax_3 + 0x2c))
    
    if (ebx[7] != 0)
        sub_6b2cf0(esi_15, ebx[6], 1)
        sub_6b2cf0(esi_15, ebx[8], 1)
    
    int32_t j_7 = 0
    
    if (*(edi + 4) s> 0)
        int32_t* esi_16 = eax_9
        int32_t* ecx_78 = &(*eax_13)[1]
        uint32_t (** eax_185)[0x4] = eax_8 - esi_16
        void* edx_52 = var_68 - esi_16
        int32_t* var_10_6 = ecx_78
        uint32_t (** var_3c_5)[0x4] = eax_185
        int32_t j_5
        
        do
            int32_t eax_189 = *(eax_3 + 0x30)
            int32_t eax_190 = sub_6b6db0(eax_189, ebx, esi_15, 
                *(eax_189 + ((*eax_13)[*ecx_78 + 0x101] << 2)), *(*esi_16 + (i_5 << 2)), 
                *(eax_185 + esi_16))
            esi_16 = &esi_16[1]
            *(edx_52 + esi_16 - 4) = eax_190
            j_5 = j_7 + 1
            ecx_78 = &var_10_6[1]
            j_7 = j_5
            eax_185 = var_3c_5
            var_10_6 = ecx_78
        while (j_5 s< *(edi + 4))
    
    int32_t eax_195 = (ebx[7] + 0x36) * 0xf + i_5
    sub_6bcf20(eax_195, ecx + 0xb34, i_5, eax_20, eax_13, eax_7, eax_8, var_68, 
        *(ecx + 0xb34 + (eax_195 << 2) - 0xb34), *(edi + 4))
    int32_t j_8 = 0
    
    if (*eax_13 s> 0)
        uint32_t* esi_18 = &(*eax_13)[0x111]
        uint32_t* var_10_7 = esi_18
        int32_t j_6
        
        do
            int32_t edx_57 = 0
            uint32_t esi_19 = *esi_18
            int32_t k = 0
            int32_t var_c_5 = 0
            uint32_t var_44_2 = esi_19
            
            if (*(var_20 + 4) s> 0)
                int32_t* edx_58 = eax_8
                void* ebx_7 = var_68 - edx_58
                int32_t* ecx_88 = var_48_1
                uint32_t* esi_21 = &(*eax_13)[1]
                int32_t j_11 = j_8
                void* ebx_9 = var_2c_3 - ecx_88
                
                do
                    if (*esi_21 == j_11)
                        *ecx_88 = 0
                        
                        if (*(edx_58 + ebx_7) != 0)
                            *ecx_88 = 1
                        
                        var_c_5 += 1
                        *(ecx_88 + ebx_9) = *edx_58
                        ecx_88 = &ecx_88[1]
                        j_11 = j_8
                    
                    k += 1
                    esi_21 = &esi_21[1]
                    edx_58 = &edx_58[1]
                while (k s< *(var_20 + 4))
                
                ebx = arg1
                edx_57 = var_c_5
                esi_19 = var_44_2
            
            int32_t eax_203 = (*(*((*(ecx + (esi_19 << 2) + 0x520) << 2) + &data_77b060) + 0x14))(
                ebx, *(*(eax_3 + 0x34) + (esi_19 << 2)), var_2c_3, var_48_1, edx_57)
            int32_t k_1 = 0
            void* eax_204 = var_20
            int32_t edx_59 = 0
            
            if (*(eax_204 + 4) s> 0)
                uint32_t* esi_23 = &(*eax_13)[1]
                
                do
                    if (*esi_23 == j_8)
                        var_2c_3[edx_59] = eax_8[k_1]
                        edx_59 += 1
                        eax_204 = var_20
                    
                    k_1 += 1
                    esi_23 = &esi_23[1]
                while (k_1 s< *(eax_204 + 4))
                
                ebx = arg1
                esi_19 = var_44_2
            
            (*(*((*(ecx + (esi_19 << 2) + 0x520) << 2) + &data_77b060) + 0x18))(esi_15, ebx, 
                *(*(eax_3 + 0x34) + (esi_19 << 2)), var_2c_3, var_48_1, edx_59, eax_203, j_8)
            j_6 = j_8 + 1
            esi_18 = &var_10_7[1]
            j_8 = j_6
            var_10_7 = esi_18
        while (j_6 s< *eax_13)
        edi = var_20
    
    i_2 = i_5 + 1
    i_5 = i_2
    eax_213 = sub_6b2cd0(ebx)
    eax_214 = neg.d(eax_213)
while (i_2 s<= (sbb.d(eax_214, eax_214, eax_213 != 0) & 7) + 7)
@__security_check_cookie@4(eax_1 ^ &__saved_ebp)
return 0
