// 函数: sub_6aafb2
// 地址: 0x6aafb2
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
uint32_t eax_2 = zx.d(arg1[5])
int32_t i_1 = 0
int32_t eax_3 = eax_2 & 0x8000
int32_t var_14 = *(arg1 + 6)
int32_t var_10 = *(arg1 + 2)
uint32_t eax_7 = zx.d(*arg1) << 0x10
int32_t var_24 = (eax_2 & 0x7fff) - 0x3fff
uint32_t var_c = eax_7
int32_t esi

if ((eax_2 & 0x7fff) != 0)
    int32_t var_20_1 = var_14
    void var_1c
    void* edi_4 = &var_1c
    int32_t* esi_1 = &var_10
    int32_t eax_10 = data_74b11c - 1
    int32_t var_30_1 = 0
    *edi_4 = *esi_1
    int32_t eax_12
    int32_t edx_3
    edx_3:eax_12 = sx.q(eax_10 + 1)
    *(edi_4 + 4) = esi_1[1]
    int32_t edx_6 = ((edx_3 & 0x1f) + eax_12) s>> 5
    int32_t var_40_1 = edx_6
    int32_t ecx_2 = (eax_10 + 1) & 0x8000001f
    
    if (ecx_2 s< 0)
        ecx_2 = ((ecx_2 - 1) | 0xffffffe0) + 1
    
    char ecx_5 = 0x1f - ecx_2.b
    
    if (((&var_14)[edx_6] & 1 << ecx_5) != 0)
        bool cond:0_1 = ((&var_14)[edx_6] & not.d(0xffffffff << ecx_5)) != 0
        
        while (true)
            if (cond:0_1)
                int32_t eax_17
                int32_t edx_7
                edx_7:eax_17 = sx.q(eax_10)
                int32_t edx_10 = ((edx_7 & 0x1f) + eax_17) s>> 5
                int32_t eax_19 = eax_10 & 0x8000001f
                
                if (eax_19 s< 0)
                    eax_19 = ((eax_19 - 1) | 0xffffffe0) + 1
                
                var_30_1 = 0
                int32_t eax_22 = 1 << (0x1f - eax_19.b)
                int32_t eax_23 = (&var_14)[edx_10]
                int32_t ecx_8 = eax_22 + eax_23
                int32_t i = 0
                
                if (ecx_8 u< eax_23 || ecx_8 u< eax_22)
                    i = 1
                    var_30_1 = 1
                
                (&var_14)[edx_10] = ecx_8
                int32_t edx_11 = edx_10 - 1
                
                if (edx_10 - 1 s>= 0)
                    while (i != 0)
                        int32_t eax_25 = (&var_14)[edx_11]
                        i = 0
                        var_30_1 = 0
                        int32_t var_2c_2 = eax_25 + 1
                        
                        if (eax_25 + 1 u< eax_25 || eax_25 + 1 u< 1)
                            i = 1
                            var_30_1 = 1
                        
                        (&var_14)[edx_11] = eax_25 + 1
                        int32_t temp2_1 = edx_11
                        edx_11 -= 1
                        
                        if (temp2_1 - 1 s< 0)
                            break
                
                ecx_5 = 0x1f - ecx_2.b
                break
            
            edx_6 += 1
            
            if (edx_6 s>= 3)
                break
            
            cond:0_1 = (&var_14)[edx_6] != 0
        
        edx_6 = var_40_1
    
    (&var_14)[edx_6] &= 0xffffffff << ecx_5
    
    if (edx_6 + 1 s< 3)
        __builtin_memset(&(&var_14)[edx_6 + 1], 0, (3 - (edx_6 + 1)) << 2)
    
    int32_t ecx_10 = var_24
    
    if (var_30_1 != 0)
        ecx_10 += 1
    
    int32_t edx_12 = data_74b118
    
    if (ecx_10 s< edx_12 - data_74b11c)
        var_14 = 0
        int32_t* edi_8 = &var_10
        *edi_8 = 0
        edi_8[1] = 0
        esi = 0
        i_1 = 2
    else if (ecx_10 s<= edx_12)
        int32_t edx_13 = edx_12 - ((eax_2 & 0x7fff) - 0x3fff)
        var_14 = var_20_1
        int32_t* edi_11 = &var_10
        void* esi_5 = &var_1c
        int32_t eax_32
        int32_t edx_14
        edx_14:eax_32 = sx.q(edx_13)
        int32_t eax_34 = (eax_32 + (edx_14 & 0x1f)) s>> 5
        *edi_11 = *esi_5
        edi_11[1] = *(esi_5 + 4)
        int32_t eax_36 = edx_13 & 0x8000001f
        
        if (eax_36 s< 0)
            eax_36 = ((eax_36 - 1) | 0xffffffe0) + 1
        
        char var_34_3 = eax_36.b
        var_24 = 0
        
        do
            int32_t edx_16 = (&var_14)[i_1]
            (&var_14)[i_1] = edx_16 u>> var_34_3 | var_24
            i_1 += 1
            var_24 = (edx_16 & not.d(0xffffffff << var_34_3)) << (0x20 - var_34_3)
        while (i_1 s< 3)
        
        void* edx_19 = &var_c - (eax_34 << 2)
        int32_t eax_47 = eax_34
        int32_t ecx_14 = 2
        int32_t temp4_1
        
        do
            if (ecx_14 s< eax_47)
                (&var_14)[ecx_14] = 0
            else
                (&var_14)[ecx_14] = *edx_19
                eax_47 = eax_34
            
            edx_19 -= 4
            temp4_1 = ecx_14
            ecx_14 -= 1
        while (temp4_1 - 1 s>= 0)
        int32_t eax_50
        int32_t edx_20
        edx_20:eax_50 = sx.q(eax_10 + 1)
        int32_t edx_23 = ((edx_20 & 0x1f) + eax_50) s>> 5
        int32_t var_30_2 = edx_23
        int32_t ecx_17 = (eax_10 + 1) & 0x8000001f
        
        if (ecx_17 s< 0)
            ecx_17 = ((ecx_17 - 1) | 0xffffffe0) + 1
        
        char ecx_20 = 0x1f - ecx_17.b
        
        if (((&var_14)[edx_23] & 1 << ecx_20) != 0)
            bool cond:3_1 = ((&var_14)[edx_23] & not.d(0xffffffff << ecx_20)) != 0
            
            while (true)
                if (cond:3_1)
                    int32_t eax_56
                    int32_t edx_24
                    edx_24:eax_56 = sx.q(eax_10)
                    int32_t edx_27 = ((edx_24 & 0x1f) + eax_56) s>> 5
                    int32_t edi_15 = eax_10 & 0x8000001f
                    
                    if (edi_15 s< 0)
                        edi_15 = ((edi_15 - 1) | 0xffffffe0) + 1
                    
                    int32_t eax_57 = (&var_14)[edx_27]
                    int32_t edi_18 = 1 << (0x1f - edi_15.b)
                    int32_t i_2 = 0
                    int32_t edi_19 = edi_18 + eax_57
                    var_24 = edi_19
                    int32_t eax_58 = var_24
                    
                    if (edi_19 u< eax_57 || eax_58 u< edi_18)
                        i_2 = 1
                    
                    (&var_14)[edx_27] = eax_58
                    int32_t edx_28 = edx_27 - 1
                    
                    if (edx_27 - 1 s>= 0)
                        while (i_2 != 0)
                            int32_t eax_59 = (&var_14)[edx_28]
                            i_2 = 0
                            var_24 = eax_59 + 1
                            
                            if (eax_59 + 1 u< eax_59 || eax_59 + 1 u< 1)
                                i_2 = 1
                            
                            (&var_14)[edx_28] = eax_59 + 1
                            int32_t temp8_1 = edx_28
                            edx_28 -= 1
                            
                            if (temp8_1 - 1 s< 0)
                                break
                    
                    ecx_20 = 0x1f - ecx_17.b
                    break
                
                edx_23 += 1
                
                if (edx_23 s>= 3)
                    break
                
                cond:3_1 = (&var_14)[edx_23] != 0
            
            edx_23 = var_30_2
        
        (&var_14)[edx_23] &= 0xffffffff << ecx_20
        
        if (edx_23 + 1 s< 3)
            __builtin_memset(&(&var_14)[edx_23 + 1], 0, (3 - (edx_23 + 1)) << 2)
        
        int32_t ecx_24 = data_74b120 + 1
        int32_t eax_63
        int32_t edx_30
        edx_30:eax_63 = sx.q(ecx_24)
        int32_t eax_65 = (eax_63 + (edx_30 & 0x1f)) s>> 5
        int32_t ecx_25 = ecx_24 & 0x8000001f
        
        if (ecx_25 s< 0)
            ecx_25 = ((ecx_25 - 1) | 0xffffffe0) + 1
        
        char var_28_3 = ecx_25.b
        int32_t i_3 = 0
        var_24 = 0
        int32_t i_5 = 0
        
        do
            int32_t edx_32 = (&var_14)[i_3]
            (&var_14)[i_5] = edx_32 u>> var_28_3 | var_24
            var_24 = (edx_32 & not.d(0xffffffff << ecx_25.b)) << (0x20 - var_28_3)
            i_3 = i_5 + 1
            i_5 = i_3
        while (i_3 s< 3)
        
        void* edx_35 = &var_c - (eax_65 << 2)
        int32_t ecx_32 = 2
        int32_t temp7_1
        
        do
            if (ecx_32 s< eax_65)
                (&var_14)[ecx_32] = 0
            else
                (&var_14)[ecx_32] = *edx_35
            
            edx_35 -= 4
            temp7_1 = ecx_32
            ecx_32 -= 1
        while (temp7_1 - 1 s>= 0)
        esi = 0
        i_1 = 2
    else if (ecx_10 s< data_74b114)
        int32_t esi_11 = data_74b128
        var_14 &= 0x7fffffff
        int32_t ecx_39 = data_74b120
        int32_t eax_85
        int32_t edx_42
        edx_42:eax_85 = sx.q(ecx_39)
        int32_t eax_87 = (eax_85 + (edx_42 & 0x1f)) s>> 5
        int32_t ecx_40 = ecx_39 & 0x8000001f
        
        if (ecx_40 s< 0)
            ecx_40 = ((ecx_40 - 1) | 0xffffffe0) + 1
        
        var_24 = 0
        int32_t i_4 = 0
        char ebx_1 = ecx_40.b
        int32_t var_28_5 = ecx_40
        
        do
            int32_t edx_44 = (&var_14)[i_4]
            (&var_14)[i_4] = edx_44 u>> ebx_1 | var_24
            i_4 += 1
            var_24 = (edx_44 & not.d(0xffffffff << ecx_40.b)) << (0x20 - ebx_1)
        while (i_4 s< 3)
        
        esi = esi_11 + ecx_10
        void* edx_47 = &var_c - (eax_87 << 2)
        i_1 = 0
        int32_t ecx_45 = 2
        int32_t temp3_1
        
        do
            if (ecx_45 s< eax_87)
                (&var_14)[ecx_45] = 0
            else
                (&var_14)[ecx_45] = *edx_47
            
            edx_47 -= 4
            temp3_1 = ecx_45
            ecx_45 -= 1
        while (temp3_1 - 1 s>= 0)
    else
        int32_t ecx_33 = data_74b120
        var_14 = 0
        int32_t* edi_24 = &var_10
        *edi_24 = 0
        edi_24[1] = 0
        var_14 |= 0x80000000
        int32_t eax_74
        int32_t edx_36
        edx_36:eax_74 = sx.q(ecx_33)
        int32_t eax_76 = (eax_74 + (edx_36 & 0x1f)) s>> 5
        int32_t ecx_34 = ecx_33 & 0x8000001f
        
        if (ecx_34 s< 0)
            ecx_34 = ((ecx_34 - 1) | 0xffffffe0) + 1
        
        int32_t var_3c_3 = ecx_34
        char eax_77 = 0x20 - ecx_34.b
        var_24 = 0
        int32_t edi_27 = not.d(0xffffffff << ecx_34.b)
        
        do
            int32_t edx_38 = (&var_14)[i_1]
            int32_t edx_40 = edx_38 u>> ecx_34.b | var_24
            ecx_34 = var_3c_3
            (&var_14)[i_1] = edx_40
            i_1 += 1
            var_24 = (edx_38 & edi_27) << eax_77
        while (i_1 s< 3)
        
        void* edx_41 = &var_c - (eax_76 << 2)
        int32_t ecx_38 = 2
        int32_t temp5_1
        
        do
            if (ecx_38 s< eax_76)
                (&var_14)[ecx_38] = 0
            else
                (&var_14)[ecx_38] = *edx_41
            
            edx_41 -= 4
            temp5_1 = ecx_38
            ecx_38 -= 1
        while (temp5_1 - 1 s>= 0)
        esi = data_74b128 + data_74b114
        i_1 = 1
else
    esi = 0
    int32_t eax_8 = 0
    
    while ((&var_14)[eax_8] == 0)
        eax_8 += 1
        
        if (eax_8 s>= 3)
            goto label_6ab4e8
    
    var_14 = 0
    int32_t* edi_1 = &var_10
    *edi_1 = 0
    edi_1[1] = 0
    i_1 = 2

label_6ab4e8:
int32_t eax_97 = neg.d(eax_3)
int32_t eax_100 = data_74b124
int32_t esi_15 =
    esi << (0x1f - (data_74b120).b) | (sbb.d(eax_97, eax_97, eax_3 != 0) & 0x80000000) | var_14

if (eax_100 == 0x40)
    int32_t eax_101 = var_10
    arg2[1] = esi_15
    *arg2 = eax_101
else if (eax_100 == 0x20)
    *arg2 = esi_15

sub_69a5bc(eax_1 ^ &__saved_ebp)
return i_1
