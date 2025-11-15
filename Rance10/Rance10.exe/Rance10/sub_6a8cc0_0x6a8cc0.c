// 函数: sub_6a8cc0
// 地址: 0x6a8cc0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ebp
int32_t var_4 = ebp
int32_t ecx = *(arg1 + 0x2dc)
int32_t esi = 0

if (ecx == 0)
    int32_t eax_3 = *(arg1 + 0x18c)
    
    if (eax_3 == 0)
        *(arg1 + 0x2dc) = 0x186a0
        *(arg1 + 0x18c) = 0x186a0
    else
        uint128_t xmm1_4 = 0x4330000000000000
        uint32_t xmm4_6[0x4] = 10000000000.0 / _mm_cvtepi32_pd(zx.q(eax_3)) + 0.5
        uint32_t xmm2_4[0x4] = _mm_and_ps(-0x8000000000000000, xmm4_6)
        double xmm5_5 = xmm4_6[0].q
        double xmm1_6 = _mm_or_ps(
            _mm_and_ps(xmm1_4, _mm_cmpeq_sd(xmm4_6[0].q ^ xmm2_4[0].q, xmm1_4, 1)), xmm2_4)
        double xmm5_7 = xmm5_5 + xmm1_6 - xmm1_6
        double xmm5_8 =
            xmm5_7 - _mm_and_ps(_mm_cmpeq_sd(xmm5_7 f- xmm4_6, xmm2_4, 6), 0x3ff0000000000000)
        
        if (0x41dfffffffc00000 f< xmm5_8 || xmm5_8 < -2147483648.0)
            *(arg1 + 0x2dc) = 0
        else
            *(arg1 + 0x2dc) = int.d(xmm5_8)
else
    int32_t edx_1 = *(arg1 + 0x18c)
    
    if (edx_1 == 0)
        uint128_t xmm1_1 = 0x4330000000000000
        uint32_t xmm4_3[0x4] = 10000000000.0 / _mm_cvtepi32_pd(zx.q(ecx)) + 0.5
        uint32_t xmm2_2[0x4] = _mm_and_ps(-0x8000000000000000, xmm4_3)
        double xmm5_1 = xmm4_3[0].q
        double xmm1_3 = _mm_or_ps(
            _mm_and_ps(xmm1_1, _mm_cmpeq_sd(xmm4_3[0].q ^ xmm2_2[0].q, xmm1_1, 1)), xmm2_2)
        double xmm5_3 = xmm5_1 + xmm1_3 - xmm1_3
        double xmm5_4 =
            xmm5_3 - _mm_and_ps(_mm_cmpeq_sd(xmm5_3 f- xmm4_3, xmm2_2, 6), 0x3ff0000000000000)
        
        if (0x41dfffffffc00000 f< xmm5_4 || xmm5_4 < -2147483648.0)
            *(arg1 + 0x18c) = 0
        else
            *(arg1 + 0x18c) = int.d(xmm5_4)
    else
        esi = sub_6a8a30(ecx, edx_1)

*(arg1 + 0x326) |= 1

if (esi == 0)
    *(arg1 + 0x7c) &= 0xffffdfff
else
    *(arg1 + 0x7c) |= 0x2000

int32_t ecx_1 = *(arg1 + 0x7c)

if ((ecx_1 & 0x40080) == 0x40000)
    *(arg1 + 0x78) &= 0xffffdfff
    *(arg1 + 0x7c) = ecx_1 & 0xfd7ffeff
    *(arg1 + 0x150) = 0

if (*(arg1 + 0x18c) - 0x17318 u<= 0x2710)
    *(arg1 + 0x7c) &= 0xff7fffff
    *(arg1 + 0x78) &= 0xffffdfff

if ((*(arg1 + 0x7c) & 0x600000) != 0)
    sub_6a60e0(arg1)

int32_t eax_9 = *(arg1 + 0x7c)

if ((eax_9 & 0x100) == 0)
    if ((eax_9 & 0x4080) == 0x4080)
        int16_t eax_11 = *(arg1 + 0x16a)
        
        if (eax_11 == *(arg1 + 0x16c) && eax_11 == *(arg1 + 0x16e))
            *(arg1 + 0x170) = eax_11
            *(arg1 + 0x74) |= 0x800
else if ((*(arg1 + 0x157) & 2) == 0)
    *(arg1 + 0x74) |= 0x800

if (*(arg1 + 0x157) != 3)
    sub_6a8c00(arg1)
else
    sub_6a8af0(arg1)

int32_t edx_5 = *(arg1 + 0x7c)

if ((edx_5 & 0x380) == 0x280 && *(arg1 + 0x158) != 0x10)
    *(arg1 + 0x16a) = (((zx.d(*(arg1 + 0x16a)) + 0x81) * 0xff) u>> 0x10).w
    *(arg1 + 0x16c) = (((zx.d(*(arg1 + 0x16c)) + 0x81) * 0xff) u>> 0x10).w
    *(arg1 + 0x16e) = (((zx.d(*(arg1 + 0x16e)) + 0x81) * 0xff) u>> 0x10).w
    *(arg1 + 0x170) = (((zx.d(*(arg1 + 0x170)) + 0x81) * 0xff) u>> 0x10).w

uint32_t ecx_4
ecx_4.b = (edx_5 & 0x4000400) != 0
uint32_t eax_13
eax_13.b = (edx_5.b & 0x80) != 0

if ((eax_13.b & ecx_4.b) != 0 && (edx_5 & 0x100) == 0 && *(arg1 + 0x158) == 0x10)
    *(arg1 + 0x16a) *= 0x101
    *(arg1 + 0x16c) *= 0x101
    *(arg1 + 0x16e) *= 0x101
    *(arg1 + 0x170) *= 0x101

eax_13.w = *(arg1 + 0x170)
*(arg1 + 0x172) = *(arg1 + 0x168)
*(arg1 + 0x17a) = eax_13.w
uint32_t ecx_14

if ((edx_5 & 0x2000) == 0 && ((edx_5 & 0x600000) == 0
        || (*(arg1 + 0x2dc) - 0x17318 u<= 0x2710 && *(arg1 + 0x18c) - 0x17318 u<= 0x2710)))
    ecx_14 = edx_5 & 0x80

if ((edx_5 & 0x2000) != 0 || ((edx_5 & 0x600000) != 0
        && (*(arg1 + 0x2dc) - 0x17318 u> 0x2710 || *(arg1 + 0x18c) - 0x17318 u> 0x2710)) || (ecx_14 != 0
        && (*(arg1 + 0x2dc) - 0x17318 u> 0x2710 || *(arg1 + 0x18c) - 0x17318 u> 0x2710
        || (*(arg1 + 0x162) == 3 && *(arg1 + 0x164) - 0x17318 u> 0x2710)))
        || ((edx_5 & 0x800000) != 0 && *(arg1 + 0x18c) - 0x17318 u> 0x2710))
    int32_t ecx_30 = sub_6a7180(arg1, zx.d(*(arg1 + 0x158)))
    int32_t ebx_2 = *(arg1 + 0x7c)
    
    if (ebx_2.b s< 0)
        if ((ebx_2 & 0x600000) != 0)
            ecx_30 = sub_6a7530(arg1, "libpng does not support gamma+background+rgb_to_gray")
        
        if (*(arg1 + 0x157) != 3)
            uint32_t eax_87 = zx.d(*(arg1 + 0x162))
            int32_t esi_15 = 0x186a0
            int32_t edi_6
            
            if (eax_87 == 1)
                edi_6 = *(arg1 + 0x18c)
            else if (eax_87 == 2)
                ecx_30 = *(arg1 + 0x2dc)
                edi_6 = sub_6a66a0(ecx_30)
                esi_15 = sub_6a67d0(ecx_30, *(arg1 + 0x18c))
            else
                if (eax_87 != 3)
                    sub_6a7500(arg1, "invalid background gamma type")
                    noreturn
                
                ecx_30 = *(arg1 + 0x164)
                edi_6 = sub_6a66a0(ecx_30)
                esi_15 = sub_6a67d0(ecx_30, *(arg1 + 0x18c))
            
            int32_t ecx_68 = neg.d(sbb.d(ecx_30, ecx_30, 0x2710 u< edi_6 - 0x17318))
            int32_t ebx_7 = neg.d(sbb.d(ebx_2, ebx_2, 0x2710 u< esi_15 - 0x17318))
            
            if (ecx_68 != 0)
                uint32_t ecx_69 = zx.d(*(arg1 + 0x170))
                uint16_t eax_98
                
                if (*(arg1 + 0x158) != 8)
                    eax_98 = sub_6a6920(ecx_69, edi_6)
                else
                    eax_98 = zx.w(sub_6a6870(ecx_69, edi_6))
                
                *(arg1 + 0x17a) = eax_98
            
            if (ebx_7 != 0)
                uint32_t ecx_70 = zx.d(*(arg1 + 0x170))
                uint16_t eax_101
                
                if (*(arg1 + 0x158) != 8)
                    eax_101 = sub_6a6920(ecx_70, esi_15)
                else
                    eax_101 = zx.w(sub_6a6870(ecx_70, esi_15))
                
                *(arg1 + 0x170) = eax_101
            
            uint32_t ebx_8 = zx.d(*(arg1 + 0x16a))
            int16_t ecx_71
            
            if (ebx_8.w == *(arg1 + 0x16c) && ebx_8.w == *(arg1 + 0x16e))
                ecx_71 = *(arg1 + 0x170)
            
            if (ebx_8.w != *(arg1 + 0x16c) || ebx_8.w != *(arg1 + 0x16e) || ebx_8.w != ecx_71)
                if (ecx_68 != 0)
                    uint16_t eax_106
                    
                    if (*(arg1 + 0x158) != 8)
                        eax_106 = sub_6a6920(ebx_8, edi_6)
                    else
                        eax_106 = zx.w(sub_6a6870(ebx_8, edi_6))
                    
                    *(arg1 + 0x174) = eax_106
                    uint32_t eax_108 = zx.d(*(arg1 + 0x16c))
                    uint16_t eax_110
                    
                    if (*(arg1 + 0x158) != 8)
                        eax_110 = sub_6a6920(eax_108, edi_6)
                    else
                        eax_110 = zx.w(sub_6a6870(eax_108, edi_6))
                    
                    uint32_t ecx_74 = zx.d(*(arg1 + 0x16e))
                    *(arg1 + 0x176) = eax_110
                    uint16_t eax_113
                    
                    if (*(arg1 + 0x158) != 8)
                        eax_113 = sub_6a6920(ecx_74, edi_6)
                    else
                        eax_113 = zx.w(sub_6a6870(ecx_74, edi_6))
                    
                    *(arg1 + 0x178) = eax_113
                
                if (ebx_7 == 0)
                    *(arg1 + 0x162) = 1
                else
                    uint16_t eax_116
                    
                    if (*(arg1 + 0x158) != 8)
                        eax_116 = sub_6a6920(ebx_8, esi_15)
                    else
                        eax_116 = zx.w(sub_6a6870(ebx_8, esi_15))
                    
                    *(arg1 + 0x16a) = eax_116
                    uint32_t eax_118 = zx.d(*(arg1 + 0x16c))
                    uint16_t eax_120
                    
                    if (*(arg1 + 0x158) != 8)
                        eax_120 = sub_6a6920(eax_118, esi_15)
                    else
                        eax_120 = zx.w(sub_6a6870(eax_118, esi_15))
                    
                    uint32_t ecx_77 = zx.d(*(arg1 + 0x16e))
                    *(arg1 + 0x16c) = eax_120
                    
                    if (*(arg1 + 0x158) != 8)
                        *(arg1 + 0x16e) = sub_6a6920(ecx_77, esi_15)
                        *(arg1 + 0x162) = 1
                    else
                        *(arg1 + 0x16e) = zx.w(sub_6a6870(ecx_77, esi_15))
                        *(arg1 + 0x162) = 1
            else
                int16_t eax_104 = *(arg1 + 0x17a)
                *(arg1 + 0x178) = eax_104
                *(arg1 + 0x176) = eax_104
                *(arg1 + 0x174) = eax_104
                *(arg1 + 0x16e) = ecx_71
                *(arg1 + 0x16c) = ecx_71
                *(arg1 + 0x16a) = ecx_71
                *(arg1 + 0x162) = 1
        else
            bool eax_54 = *(arg1 + 0x162)
            void* ebx_3 = *(arg1 + 0x144)
            char var_20_1
            char var_1f_2
            char var_1e_2
            char var_1d_2
            bool var_1c_2
            
            if (eax_54 != 2)
                uint32_t eax_56 = zx.d(eax_54)
                int32_t eax_57
                int32_t esi_8
                
                if (eax_56 == 1)
                    esi_8 = *(arg1 + 0x18c)
                label_6a9367:
                    eax_57.b = *(arg1 + 0x16a)
                    var_1c_2 = eax_57.b
                    eax_57.b = *(arg1 + 0x16c)
                    char var_1b_4 = eax_57.b
                    eax_57.b = *(arg1 + 0x16e)
                else
                    int32_t ecx_33
                    
                    if (eax_56 == 2)
                        ecx_33 = *(arg1 + 0x2dc)
                    else
                        if (eax_56 != 3)
                            esi_8 = 0x186a0
                            goto label_6a9367
                        
                        ecx_33 = *(arg1 + 0x164)
                    
                    esi_8 = sub_6a66a0(ecx_33)
                    eax_57 = sub_6a67d0(ecx_33, *(arg1 + 0x18c))
                    
                    if (eax_57 s>= 0x17318 && eax_57 s<= 0x19a28)
                        goto label_6a9367
                    
                    var_1c_2 = sub_6a6870(zx.d(*(arg1 + 0x16a)), eax_57)
                    char var_1b_3 = sub_6a6870(zx.d(*(arg1 + 0x16c)), eax_57)
                    eax_57 = sub_6a6870(zx.d(*(arg1 + 0x16e)), eax_57)
                
                var_20_1 = eax_57.b
                int32_t eax_62
                
                if (esi_8 - 0x17318 u<= 0x2710)
                    eax_62.b = *(arg1 + 0x16a)
                    var_1f_2 = eax_62.b
                    eax_62.b = *(arg1 + 0x16c)
                    var_1e_2 = eax_62.b
                    eax_62.b = *(arg1 + 0x16e)
                else
                    var_1f_2 = sub_6a6870(zx.d(*(arg1 + 0x16a)), esi_8)
                    var_1e_2 = sub_6a6870(zx.d(*(arg1 + 0x16c)), esi_8)
                    eax_62 = sub_6a6870(zx.d(*(arg1 + 0x16e)), esi_8)
                
                var_1d_2 = eax_62.b
            else
                int32_t edx_8 = *(arg1 + 0x190)
                uint32_t edi_3 = zx.d(*(arg1 + 0x16a))
                uint32_t esi_7 = zx.d(*(arg1 + 0x16c))
                uint32_t ecx_32 = zx.d(*(arg1 + 0x16e))
                var_1c_2 = *(edx_8 + edi_3)
                ebx_3.b = *(edx_8 + ecx_32)
                bool var_1b_2 = *(edx_8 + esi_7)
                int32_t eax_55 = *(arg1 + 0x19c)
                var_20_1 = ebx_3.b
                ebx_3.b = *(eax_55 + edi_3)
                ecx_32.b = *(eax_55 + ecx_32)
                var_1f_2 = ebx_3.b
                ebx_3.b = *(eax_55 + esi_7)
                var_1e_2 = ebx_3.b
                ebx_3 = *(arg1 + 0x144)
                var_1d_2 = ecx_32.b
            
            int32_t i = 0
            int32_t i_5 = 0
            
            if (zx.d(*(arg1 + 0x148)) != 0)
                uint32_t eax_66 = zx.d(*(arg1 + 0x150))
                char* ebx_4 = ebx_3 + 2
                char* var_14_1 = ebx_4
                
                do
                    char* eax_67
                    
                    if (i s< eax_66)
                        eax_67.b = (*(arg1 + 0x1b4))[i]
                    
                    if (i s>= eax_66 || eax_67.b == 0xff)
                        int32_t ecx_66 = *(arg1 + 0x190)
                        uint32_t eax_84
                        eax_84.b = *(zx.d(ebx_4[0xfffffffe]) + ecx_66)
                        ebx_4[0xfffffffe] = eax_84.b
                        uint32_t eax_85
                        eax_85.b = *(zx.d(ebx_4[0xffffffff]) + ecx_66)
                        ebx_4[0xffffffff] = eax_85.b
                        eax_67.b = zx.d(*ebx_4)[ecx_66]
                    else if (eax_67.b != 0)
                        int32_t edi_5 = *(arg1 + 0x19c)
                        uint16_t edx_16 = zx.w(eax_67.b)
                        int32_t ebx_5 = *(arg1 + 0x198)
                        uint16_t eax_69
                        eax_69.b = var_1f_2
                        void* edx_17 = *(arg1 + 0x1b4)
                        uint32_t eax_71 = zx.d(zx.w(*(zx.d(ebx_4[0xfffffffe]) + edi_5)) * edx_16
                            + (0xff - edx_16) * zx.w(eax_69.b) + 0x80)
                        uint32_t eax_72
                        eax_72.b = *(zx.d((((eax_71 u>> 8) + eax_71) u>> 8).b) + ebx_5)
                        var_14_1[0xfffffffe] = eax_72.b
                        uint16_t edx_18 = zx.w(*(edx_17 + i_5))
                        uint16_t eax_75
                        eax_75.b = var_1e_2
                        void* edx_19 = *(arg1 + 0x1b4)
                        uint32_t eax_77 = zx.d(zx.w(*(zx.d(var_14_1[0xffffffff]) + edi_5)) * edx_18
                            + (0xff - edx_18) * zx.w(eax_75.b) + 0x80)
                        uint32_t eax_78
                        eax_78.b = *(zx.d((((eax_77 u>> 8) + eax_77) u>> 8).b) + ebx_5)
                        var_14_1[0xffffffff] = eax_78.b
                        uint16_t edx_20 = zx.w(*(edx_19 + i_5))
                        uint16_t eax_81
                        eax_81.b = var_1d_2
                        i = i_5
                        uint32_t eax_83 = zx.d(zx.w(*(zx.d(*var_14_1) + edi_5)) * edx_20
                            + (0xff - edx_20) * zx.w(eax_81.b) + 0x80)
                        eax_67.b = zx.d((((eax_83 u>> 8) + eax_83) u>> 8).b)[ebx_5]
                        ebx_4 = var_14_1
                    else
                        eax_67.w = var_1c_2.w
                        *(ebx_4 - 2) = eax_67.w
                        eax_67.b = var_20_1
                    
                    *ebx_4 = eax_67.b
                    i += 1
                    ebx_4 = &ebx_4[3]
                    i_5 = i
                    eax_66 = zx.d(*(arg1 + 0x150))
                    var_14_1 = ebx_4
                while (i s< zx.d(*(arg1 + 0x148)))
            
            *(arg1 + 0x7c) &= 0xffffdf7f
    else if (*(arg1 + 0x157) == 3)
        ecx_30.b = (ebx_2 & 0x600000) != 0
        
        if ((test_bit(ebx_2, 0xc) & ecx_30.b) == 0)
            uint32_t i_7 = zx.d(*(arg1 + 0x148))
            
            if (i_7 != 0)
                int32_t edx_31 = *(arg1 + 0x190)
                void* ecx_79 = *(arg1 + 0x144) + 2
                uint32_t i_1
                
                do
                    uint32_t eax_126 = zx.d(*(ecx_79 - 2))
                    ecx_79 += 3
                    eax_126.b = *(eax_126 + edx_31)
                    *(ecx_79 - 5) = eax_126.b
                    uint32_t eax_127
                    eax_127.b = *(zx.d(*(ecx_79 - 4)) + edx_31)
                    *(ecx_79 - 4) = eax_127.b
                    uint32_t eax_128
                    eax_128.b = *(zx.d(*(ecx_79 - 3)) + edx_31)
                    *(ecx_79 - 3) = eax_128.b
                    i_1 = i_7
                    i_7 -= 1
                while (i_1 != 1)
            
            *(arg1 + 0x7c) = ebx_2 & 0xffffdfff
else if (ecx_14 != 0 && *(arg1 + 0x157) == 3)
    ecx_14.b = *(arg1 + 0x16a)
    char* ebx_1 = nullptr
    uint32_t eax_41 = zx.d(*(arg1 + 0x150))
    char var_1e_1 = ecx_14.b
    char var_1c_1 = ecx_14.b
    ecx_14.b = *(arg1 + 0x16c)
    char var_1f_1 = ecx_14.b
    char var_1b_1 = ecx_14.b
    ecx_14.b = *(arg1 + 0x16e)
    char var_1d_1 = ecx_14.b
    
    if (eax_41 != 0)
        char* edi_2 = *(arg1 + 0x144) + 2
        uint32_t ebp_2 = *(arg1 + 0x1b4)
        
        do
            uint32_t eax_42
            eax_42.b = ebx_1[ebp_2]
            
            if (eax_42.b == 0)
                eax_42.w = var_1c_1.w
                *(edi_2 - 2) = eax_42.w
                *edi_2 = ecx_14.b
            else if (eax_42.b != 0xff)
                uint16_t edx_2 = zx.w(eax_42.b)
                eax_42.b = var_1e_1
                uint32_t eax_46 =
                    zx.d((0xff - edx_2) * zx.w(eax_42.b) + zx.w(edi_2[0xfffffffe]) * edx_2 + 0x80)
                uint32_t ecx_18 = (eax_46 u>> 8) + eax_46
                eax_46.b = var_1f_1
                edi_2[0xfffffffe] = (ecx_18 u>> 8).b
                uint16_t edx_3 = zx.w(ebx_1[ebp_2])
                uint32_t eax_50 =
                    zx.d((0xff - edx_3) * zx.w(eax_46.b) + zx.w(edi_2[0xffffffff]) * edx_3 + 0x80)
                uint32_t ecx_23 = (eax_50 u>> 8) + eax_50
                eax_50.b = var_1d_1
                edi_2[0xffffffff] = (ecx_23 u>> 8).b
                uint16_t edx_4 = zx.w(ebx_1[ebp_2])
                eax_42 = zx.d((0xff - edx_4) * zx.w(eax_50.b) + zx.w(*edi_2) * edx_4 + 0x80)
                *edi_2 = (((eax_42 u>> 8) + eax_42) u>> 8).b
                ecx_14.b = var_1d_1
            
            ebx_1 = &ebx_1[1]
            edi_2 = &edi_2[3]
        while (ebx_1 s< eax_41)
    
    *(arg1 + 0x7c) = edx_5 & 0xffffff7f

int32_t esi_16 = *(arg1 + 0x7c)
void* result = esi_16 & 0x1008

if (result == 8 && *(arg1 + 0x157) == 3)
    uint32_t i_6 = zx.d(*(arg1 + 0x148))
    int32_t ecx_80 = 8 - zx.d(*(arg1 + 0x1a8))
    int32_t var_c_2 = ecx_80
    *(arg1 + 0x7c) = esi_16 & 0xfffffff7
    
    if (ecx_80 - 1 u<= 6 && i_6 != 0)
        void* eax_132 = *(arg1 + 0x144)
        uint32_t i_8 = i_6
        char ebx_10 = ecx_80.b
        uint32_t i_2
        
        do
            ecx_80.b = ebx_10
            eax_132 += 3
            *(eax_132 - 3) u>>= ecx_80.b
            i_2 = i_8
            i_8 -= 1
        while (i_2 != 1)
    
    int32_t ecx_81 = 8 - zx.d(*(arg1 + 0x1a9))
    int32_t var_c_3 = ecx_81
    
    if (ecx_81 - 1 u<= 6 && i_6 != 0)
        uint32_t i_9 = i_6
        void* eax_136 = *(arg1 + 0x144) + 1
        char ebx_11 = ecx_81.b
        uint32_t i_3
        
        do
            ecx_81.b = ebx_11
            eax_136 += 3
            *(eax_136 - 3) u>>= ecx_81.b
            i_3 = i_9
            i_9 -= 1
        while (i_3 != 1)
    
    void* ebx_12 = 8 - zx.d(*(arg1 + 0x1aa))
    result = ebx_12 - 1
    
    if (result u<= 6 && i_6 != 0)
        result = *(arg1 + 0x144) + 2
        uint32_t i_4
        
        do
            ecx_81.b = ebx_12.b
            result += 3
            *(result - 3) u>>= ecx_81.b
            i_4 = i_6
            i_6 -= 1
        while (i_4 != 1)

var_4
return result
