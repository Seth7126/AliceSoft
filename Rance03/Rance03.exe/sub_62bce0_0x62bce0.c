// 函数: sub_62bce0
// 地址: 0x62bce0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t i_8
int32_t i_9 = i_8
int32_t ecx = *(arg1 + 0x2dc)
int32_t edx = 0

if (ecx == 0)
    int32_t ecx_1 = *(arg1 + 0x18c)
    
    if (ecx_1 == 0)
        *(arg1 + 0x2dc) = 0x186a0
        *(arg1 + 0x18c) = 0x186a0
    else
        *(arg1 + 0x2dc) = sub_629830(ecx_1)
else
    int32_t eax_1 = *(arg1 + 0x18c)
    
    if (eax_1 == 0)
        *(arg1 + 0x18c) = sub_629830(ecx)
    else
        uint128_t xmm1_1 = 0x4330000000000000
        uint64_t xmm4_5[0x2] =
            _mm_cvtepi32_pd(zx.q(ecx)) * _mm_cvtepi32_pd(zx.q(eax_1)) * 1.0000000000000001e-05 + 0.5
        uint64_t xmm2_2[0x2] = _mm_and_pd(-0x8000000000000000, xmm4_5)
        int64_t xmm0_4 = _mm_xor_pd(xmm4_5, xmm2_2)
        uint64_t xmm5_1 = xmm4_5[0]
        double xmm1_3 = _mm_or_pd(_mm_and_pd(xmm1_1, _mm_cmpeq_sd(xmm0_4, xmm1_1, 1)), xmm2_2)
        double xmm5_3 = xmm5_1 f+ xmm1_3 - xmm1_3
        double xmm5_4 =
            xmm5_3 - _mm_and_pd(_mm_cmpeq_sd(xmm5_3 f- xmm4_5, xmm2_2, 6), 0x3ff0000000000000)
        
        if (0x41dfffffffc00000 f< xmm5_4 || xmm5_4 < -2147483648.0
                || int.d(xmm5_4) - 0x17318 u> 0x2710)
            edx = 1

*(arg1 + 0x326) |= 1

if (edx == 0)
    *(arg1 + 0x7c) &= 0xffffdfff
else
    *(arg1 + 0x7c) |= 0x2000

int32_t eax_6 = *(arg1 + 0x7c)

if ((eax_6 & 0x40000) != 0 && eax_6.b s>= 0)
    *(arg1 + 0x78) &= 0xffffdfff
    *(arg1 + 0x7c) = eax_6 & 0xfd7ffeff
    *(arg1 + 0x150) = 0

if (*(arg1 + 0x18c) - 0x17318 u<= 0x2710)
    *(arg1 + 0x7c) &= 0xff7fffff
    *(arg1 + 0x78) &= 0xffffdfff

if ((*(arg1 + 0x7c) & 0x600000) != 0)
    sub_629220(arg1)

int32_t eax_10 = *(arg1 + 0x7c)

if ((eax_10 & 0x100) == 0)
    if (eax_10.b s< 0 && (eax_10 & 0x4000) != 0)
        int16_t eax_11 = *(arg1 + 0x16a)
        
        if (eax_11 == *(arg1 + 0x16c) && eax_11 == *(arg1 + 0x16e))
            *(arg1 + 0x170) = eax_11
            *(arg1 + 0x74) |= 0x800
else if ((*(arg1 + 0x157) & 2) == 0)
    *(arg1 + 0x74) |= 0x800

if (*(arg1 + 0x157) != 3)
    sub_62bc10(arg1)
else
    sub_62bad0(arg1)

int32_t ebx = *(arg1 + 0x7c)

if ((ebx & 0x200) != 0 && ebx.b s< 0 && (ebx & 0x100) == 0 && *(arg1 + 0x158) != 0x10)
    *(arg1 + 0x16a) = (((zx.d(*(arg1 + 0x16a)) + 0x81) * 0xff) u>> 0x10).w
    *(arg1 + 0x16c) = (((zx.d(*(arg1 + 0x16c)) + 0x81) * 0xff) u>> 0x10).w
    *(arg1 + 0x16e) = (((zx.d(*(arg1 + 0x16e)) + 0x81) * 0xff) u>> 0x10).w
    *(arg1 + 0x170) = (((zx.d(*(arg1 + 0x170)) + 0x81) * 0xff) u>> 0x10).w

if ((ebx & 0x4000400) != 0 && ebx.b s< 0 && (ebx & 0x100) == 0 && *(arg1 + 0x158) == 0x10)
    *(arg1 + 0x16a) *= 0x101
    *(arg1 + 0x16c) *= 0x101
    int16_t ecx_4 = 0x101 * *(arg1 + 0x170)
    *(arg1 + 0x16e) *= 0x101
    *(arg1 + 0x170) = ecx_4

uint16_t eax_12 = *(arg1 + 0x170)
*(arg1 + 0x172) = *(arg1 + 0x168)
*(arg1 + 0x17a) = eax_12
int32_t ecx_6

if ((ebx & 0x2000) == 0 && ((ebx & 0x600000) == 0
        || (*(arg1 + 0x2dc) - 0x17318 u<= 0x2710 && *(arg1 + 0x18c) - 0x17318 u<= 0x2710)))
    ecx_6 = ebx & 0x80

if ((ebx & 0x2000) != 0 || ((ebx & 0x600000) != 0
        && (*(arg1 + 0x2dc) - 0x17318 u> 0x2710 || *(arg1 + 0x18c) - 0x17318 u> 0x2710)) || (ecx_6 != 0 &&
        (*(arg1 + 0x2dc) - 0x17318 u> 0x2710 || *(arg1 + 0x18c) - 0x17318 u> 0x2710
        || (*(arg1 + 0x162) == 3 && *(arg1 + 0x164) - 0x17318 u> 0x2710)))
        || ((ebx & 0x800000) != 0 && *(arg1 + 0x18c) - 0x17318 u> 0x2710))
    int32_t ecx_22 = sub_62a340(arg1, zx.d(*(arg1 + 0x158)))
    int32_t ebx_2 = *(arg1 + 0x7c)
    
    if (ebx_2.b s< 0)
        if ((ebx_2 & 0x600000) != 0)
            ecx_22 = sub_62a550(arg1, "libpng does not support gamma+background+rgb_to_gray")
        
        if (*(arg1 + 0x157) != 3)
            uint32_t eax_79 = zx.d(*(arg1 + 0x162))
            int32_t esi_8 = 0x186a0
            
            if (eax_79 == 1)
                i_8 = *(arg1 + 0x18c)
            else if (eax_79 == 2)
                ecx_22 = *(arg1 + 0x2dc)
                i_8 = sub_629830(ecx_22)
                esi_8 = sub_629970(ecx_22, *(arg1 + 0x18c))
            else
                if (eax_79 != 3)
                    sub_62a520(arg1, "invalid background gamma type")
                    noreturn
                
                ecx_22 = *(arg1 + 0x164)
                i_8 = sub_629830(ecx_22)
                esi_8 = sub_629970(ecx_22, *(arg1 + 0x18c))
            
            int32_t ecx_51 = neg.d(sbb.d(ecx_22, ecx_22, 0x2710 u< i_8 - 0x17318))
            int32_t ebx_7 = neg.d(sbb.d(ebx_2, ebx_2, 0x2710 u< esi_8 - 0x17318))
            
            if (ecx_51 != 0)
                uint32_t ecx_52 = zx.d(*(arg1 + 0x170))
                uint16_t eax_90
                
                if (*(arg1 + 0x158) != 8)
                    eax_90 = sub_629ac0(ecx_52, i_8)
                else
                    eax_90 = zx.w(sub_629a10(ecx_52, i_8))
                
                *(arg1 + 0x17a) = eax_90
            
            if (ebx_7 != 0)
                uint32_t ecx_53 = zx.d(*(arg1 + 0x170))
                uint16_t eax_93
                
                if (*(arg1 + 0x158) != 8)
                    eax_93 = sub_629ac0(ecx_53, esi_8)
                else
                    eax_93 = zx.w(sub_629a10(ecx_53, esi_8))
                
                *(arg1 + 0x170) = eax_93
            
            uint32_t ebx_8 = zx.d(*(arg1 + 0x16a))
            int16_t ecx_54
            
            if (ebx_8.w == *(arg1 + 0x16c) && ebx_8.w == *(arg1 + 0x16e))
                ecx_54 = *(arg1 + 0x170)
            
            if (ebx_8.w != *(arg1 + 0x16c) || ebx_8.w != *(arg1 + 0x16e) || ebx_8.w != ecx_54)
                if (ecx_51 != 0)
                    int16_t eax_95
                    eax_95.b = *(arg1 + 0x158)
                    char var_19_3 = eax_95.b
                    uint16_t eax_98
                    
                    if (eax_95.b != 8)
                        eax_98 = sub_629ac0(ebx_8, i_8)
                    else
                        eax_98 = zx.w(sub_629a10(ebx_8, i_8))
                    
                    *(arg1 + 0x174) = eax_98
                    uint32_t eax_100 = zx.d(*(arg1 + 0x16c))
                    uint16_t eax_102
                    
                    if (var_19_3 != 8)
                        eax_102 = sub_629ac0(eax_100, i_8)
                    else
                        eax_102 = zx.w(sub_629a10(eax_100, i_8))
                    
                    uint32_t ecx_57 = zx.d(*(arg1 + 0x16e))
                    *(arg1 + 0x176) = eax_102
                    uint16_t eax_105
                    
                    if (var_19_3 != 8)
                        eax_105 = sub_629ac0(ecx_57, i_8)
                    else
                        eax_105 = zx.w(sub_629a10(ecx_57, i_8))
                    
                    *(arg1 + 0x178) = eax_105
                
                if (ebx_7 == 0)
                    *(arg1 + 0x162) = 1
                else
                    uint32_t ecx_58 = ebx_8
                    ebx_8.b = *(arg1 + 0x158)
                    uint16_t eax_108
                    
                    if (ebx_8.b != 8)
                        eax_108 = sub_629ac0(ecx_58, esi_8)
                    else
                        eax_108 = zx.w(sub_629a10(ecx_58, esi_8))
                    
                    *(arg1 + 0x16a) = eax_108
                    uint32_t eax_110 = zx.d(*(arg1 + 0x16c))
                    uint16_t eax_112
                    
                    if (ebx_8.b != 8)
                        eax_112 = sub_629ac0(eax_110, esi_8)
                    else
                        eax_112 = zx.w(sub_629a10(eax_110, esi_8))
                    
                    uint32_t ecx_60 = zx.d(*(arg1 + 0x16e))
                    *(arg1 + 0x16c) = eax_112
                    
                    if (ebx_8.b != 8)
                        *(arg1 + 0x16e) = sub_629ac0(ecx_60, esi_8)
                        *(arg1 + 0x162) = 1
                    else
                        *(arg1 + 0x16e) = zx.w(sub_629a10(ecx_60, esi_8))
                        *(arg1 + 0x162) = 1
            else
                int16_t eax_96 = *(arg1 + 0x17a)
                *(arg1 + 0x178) = eax_96
                *(arg1 + 0x176) = eax_96
                *(arg1 + 0x174) = eax_96
                *(arg1 + 0x16e) = ecx_54
                *(arg1 + 0x16c) = ecx_54
                *(arg1 + 0x16a) = ecx_54
                *(arg1 + 0x162) = 1
        else
            char eax_49 = *(arg1 + 0x162)
            void* ebx_3 = *(arg1 + 0x144)
            char var_1c_1
            char var_1b_2
            char var_1a_2
            char var_19_2
            char var_18_2
            
            if (eax_49 != 2)
                uint32_t eax_51 = zx.d(eax_49)
                int32_t eax_52
                int32_t esi_4
                
                if (eax_51 == 1)
                    esi_4 = *(arg1 + 0x18c)
                label_62c2f1:
                    eax_52.b = *(arg1 + 0x16a)
                    var_18_2 = eax_52.b
                    eax_52.b = *(arg1 + 0x16c)
                    char var_17_4 = eax_52.b
                    eax_52.b = *(arg1 + 0x16e)
                else
                    int32_t ecx_25
                    
                    if (eax_51 == 2)
                        ecx_25 = *(arg1 + 0x2dc)
                    else
                        if (eax_51 != 3)
                            esi_4 = 0x186a0
                            goto label_62c2f1
                        
                        ecx_25 = *(arg1 + 0x164)
                    
                    esi_4 = sub_629830(ecx_25)
                    i_8 = sub_629970(ecx_25, *(arg1 + 0x18c))
                    
                    if (i_8 s>= 0x17318 && i_8 s<= 0x19a28)
                        goto label_62c2f1
                    
                    var_18_2 = sub_629a10(zx.d(*(arg1 + 0x16a)), i_8)
                    char var_17_3 = sub_629a10(zx.d(*(arg1 + 0x16c)), i_8)
                    eax_52 = sub_629a10(zx.d(*(arg1 + 0x16e)), i_8)
                
                var_1c_1 = eax_52.b
                int32_t eax_57
                
                if (esi_4 - 0x17318 u<= 0x2710)
                    eax_57.b = *(arg1 + 0x16a)
                    var_1b_2 = eax_57.b
                    eax_57.b = *(arg1 + 0x16c)
                    var_1a_2 = eax_57.b
                    eax_57.b = *(arg1 + 0x16e)
                else
                    var_1b_2 = sub_629a10(zx.d(*(arg1 + 0x16a)), esi_4)
                    var_1a_2 = sub_629a10(zx.d(*(arg1 + 0x16c)), esi_4)
                    eax_57 = sub_629a10(zx.d(*(arg1 + 0x16e)), esi_4)
                
                var_19_2 = eax_57.b
            else
                char* edx_5 = *(arg1 + 0x190)
                i_8 = zx.d(*(arg1 + 0x16a))
                uint32_t esi_3 = zx.d(*(arg1 + 0x16c))
                uint32_t ecx_24 = zx.d(*(arg1 + 0x16e))
                var_18_2 = edx_5[i_8]
                ebx_3.b = edx_5[ecx_24]
                char var_17_2 = edx_5[esi_3]
                char* eax_50 = *(arg1 + 0x19c)
                var_1c_1 = ebx_3.b
                ebx_3.b = eax_50[i_8]
                ecx_24.b = eax_50[ecx_24]
                var_1b_2 = ebx_3.b
                ebx_3.b = eax_50[esi_3]
                var_1a_2 = ebx_3.b
                ebx_3 = *(arg1 + 0x144)
                var_19_2 = ecx_24.b
            
            void* i = nullptr
            void* i_5 = nullptr
            
            if (zx.d(*(arg1 + 0x148)) s> 0)
                uint32_t eax_61 = zx.d(*(arg1 + 0x150))
                char* ebx_4 = ebx_3 + 2
                char* var_10_2 = ebx_4
                
                do
                    uint32_t eax_62
                    
                    if (i s< eax_61)
                        eax_62.b = *(i + *(arg1 + 0x1b4))
                    
                    if (i s>= eax_61 || eax_62.b == 0xff)
                        int32_t ecx_49 = *(arg1 + 0x190)
                        uint32_t eax_76
                        eax_76.b = *(zx.d(ebx_4[0xfffffffe]) + ecx_49)
                        ebx_4[0xfffffffe] = eax_76.b
                        uint32_t eax_77
                        eax_77.b = *(zx.d(ebx_4[0xffffffff]) + ecx_49)
                        ebx_4[0xffffffff] = eax_77.b
                        eax_62.b = *(zx.d(*ebx_4) + ecx_49)
                    else if (eax_62.b != 0)
                        i_8 = *(arg1 + 0x19c)
                        uint16_t edx_13 = zx.w(eax_62.b)
                        int32_t ebx_5 = *(arg1 + 0x198)
                        uint32_t eax_63
                        eax_63.b = var_1b_2
                        int32_t edx_14 = *(arg1 + 0x1b4)
                        uint32_t eax_65 = zx.d(zx.w(*(zx.d(ebx_4[0xfffffffe]) + i_8)) * edx_13
                            + (0xff - edx_13) * zx.w(eax_63.b) + 0x80)
                        uint32_t eax_66
                        eax_66.b = *(zx.d((((eax_65 u>> 8) + eax_65) s>> 8).b) + ebx_5)
                        var_10_2[0xfffffffe] = eax_66.b
                        uint16_t edx_15 = zx.w(*(i_5 + edx_14))
                        uint32_t eax_68
                        eax_68.b = var_1a_2
                        int32_t edx_16 = *(arg1 + 0x1b4)
                        uint32_t eax_70 = zx.d(zx.w(*(zx.d(var_10_2[0xffffffff]) + i_8)) * edx_15
                            + (0xff - edx_15) * zx.w(eax_68.b) + 0x80)
                        uint32_t eax_71
                        eax_71.b = *(zx.d((((eax_70 u>> 8) + eax_70) s>> 8).b) + ebx_5)
                        var_10_2[0xffffffff] = eax_71.b
                        uint16_t edx_17 = zx.w(*(i_5 + edx_16))
                        uint32_t eax_73
                        eax_73.b = var_19_2
                        i = i_5
                        uint32_t eax_75 = zx.d(zx.w(*(zx.d(*var_10_2) + i_8)) * edx_17
                            + (0xff - edx_17) * zx.w(eax_73.b) + 0x80)
                        eax_62.b = *(zx.d((((eax_75 u>> 8) + eax_75) s>> 8).b) + ebx_5)
                        ebx_4 = var_10_2
                    else
                        eax_62.w = var_18_2.w
                        *(ebx_4 - 2) = eax_62.w
                        eax_62.b = var_1c_1
                    
                    *ebx_4 = eax_62.b
                    i += 1
                    ebx_4 = &ebx_4[3]
                    i_5 = i
                    eax_61 = zx.d(*(arg1 + 0x150))
                    var_10_2 = ebx_4
                while (i s< zx.d(*(arg1 + 0x148)))
            
            *(arg1 + 0x7c) &= 0xffffdf7f
    else if (*(arg1 + 0x157) == 3 && ((ebx_2 & 0x1000) == 0 || (ebx_2 & 0x600000) == 0))
        uint32_t i_7 = zx.d(*(arg1 + 0x148))
        
        if (i_7 s> 0)
            int32_t edx_28 = *(arg1 + 0x190)
            void* ecx_62 = *(arg1 + 0x144) + 2
            uint32_t i_1
            
            do
                uint32_t eax_118 = zx.d(*(ecx_62 - 2))
                ecx_62 += 3
                eax_118.b = *(eax_118 + edx_28)
                *(ecx_62 - 5) = eax_118.b
                uint32_t eax_119
                eax_119.b = *(zx.d(*(ecx_62 - 4)) + edx_28)
                *(ecx_62 - 4) = eax_119.b
                uint32_t eax_120
                eax_120.b = *(zx.d(*(ecx_62 - 3)) + edx_28)
                *(ecx_62 - 3) = eax_120.b
                i_1 = i_7
                i_7 -= 1
            while (i_1 != 1)
        
        *(arg1 + 0x7c) = ebx_2 & 0xffffdfff
else if (ecx_6 != 0 && *(arg1 + 0x157) == 3)
    ecx_6.b = *(arg1 + 0x16a)
    i_8 = 0
    uint32_t eax_40 = zx.d(*(arg1 + 0x150))
    char var_1a_1 = ecx_6.b
    char var_18_1 = ecx_6.b
    ecx_6.b = *(arg1 + 0x16c)
    char var_1b_1 = ecx_6.b
    char var_17_1 = ecx_6.b
    ecx_6.b = *(arg1 + 0x16e)
    uint32_t var_10_1 = eax_40
    char var_19_1 = ecx_6.b
    
    if (eax_40 s> 0)
        int32_t ebx_1 = *(arg1 + 0x1b4)
        char* esi_2 = *(arg1 + 0x144) + 2
        
        do
            eax_40.b = *(i_8 + ebx_1)
            
            if (eax_40.b == 0)
                eax_40.w = var_18_1.w
                *(esi_2 - 2) = eax_40.w
                *esi_2 = ecx_6.b
            else if (eax_40.b != 0xff)
                uint16_t ecx_7 = zx.w(eax_40.b)
                eax_40.b = var_1a_1
                uint32_t eax_43 =
                    zx.d((0xff - ecx_7) * zx.w(eax_40.b) + zx.w(esi_2[0xfffffffe]) * ecx_7 + 0x80)
                uint32_t ecx_10 = (eax_43 u>> 8) + eax_43
                eax_43.b = var_1b_1
                esi_2[0xfffffffe] = (ecx_10 s>> 8).b
                uint16_t ecx_12 = zx.w(*(i_8 + ebx_1))
                uint32_t eax_46 =
                    zx.d((0xff - ecx_12) * zx.w(eax_43.b) + zx.w(esi_2[0xffffffff]) * ecx_12 + 0x80)
                uint32_t ecx_15 = (eax_46 u>> 8) + eax_46
                eax_46.b = var_19_1
                esi_2[0xffffffff] = (ecx_15 s>> 8).b
                uint16_t ecx_17 = zx.w(*(i_8 + ebx_1))
                eax_40 = zx.d((0xff - ecx_17) * zx.w(eax_46.b) + zx.w(*esi_2) * ecx_17 + 0x80)
                *esi_2 = (((eax_40 u>> 8) + eax_40) s>> 8).b
                ecx_6.b = var_19_1
            
            i_8 += 1
            esi_2 = &esi_2[3]
        while (i_8 s< var_10_1)
    
    *(arg1 + 0x7c) = ebx & 0xffffff7f

int32_t result = *(arg1 + 0x7c)

if ((result.b & 8) != 0 && (result & 0x1000) == 0 && *(arg1 + 0x157) == 3)
    uint32_t i_6 = zx.d(*(arg1 + 0x148))
    int32_t ecx_63 = 8 - zx.d(*(arg1 + 0x1a8))
    int32_t var_10_4 = ecx_63
    *(arg1 + 0x7c) = result & 0xfffffff7
    
    if (ecx_63 - 1 u<= 6 && i_6 s> 0)
        int32_t esi_9 = *(arg1 + 0x144)
        int32_t eax_125 = 0
        i_8 = i_6
        char ebx_10 = ecx_63.b
        int32_t i_2
        
        do
            ecx_63.b = ebx_10
            eax_125 += 3
            *(eax_125 + esi_9 - 3) u>>= ecx_63.b
            i_2 = i_8
            i_8 -= 1
        while (i_2 != 1)
    
    int32_t ecx_64 = 8 - zx.d(*(arg1 + 0x1a9))
    int32_t var_c_3 = ecx_64
    
    if (ecx_64 - 1 u<= 6 && i_6 s> 0)
        int32_t esi_10 = *(arg1 + 0x144)
        int32_t eax_128 = 0
        i_8 = i_6
        char ebx_11 = ecx_64.b
        int32_t i_3
        
        do
            ecx_64.b = ebx_11
            eax_128 += 3
            *(eax_128 + esi_10 - 2) u>>= ecx_64.b
            i_3 = i_8
            i_8 -= 1
        while (i_3 != 1)
    
    int32_t ebx_12 = 8 - zx.d(*(arg1 + 0x1aa))
    result = ebx_12 - 1
    
    if (result u<= 6 && i_6 s> 0)
        int32_t esi_11 = *(arg1 + 0x144)
        result = 0
        uint32_t i_4
        
        do
            ecx_64.b = ebx_12.b
            result += 3
            *(esi_11 + result - 1) u>>= ecx_64.b
            i_4 = i_6
            i_6 -= 1
        while (i_4 != 1)

var_4
return result
