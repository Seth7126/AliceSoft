// 函数: sub_6ac7d9
// 地址: 0x6ac7d9
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int16_t edx_1 = arg3 & 0x8000
int32_t var_34 = 0xcccccccc
int16_t esi_1 = arg3 & 0x7fff
int32_t var_30 = 0xcccccccc
int32_t var_2c = 0x3ffbcccc
int32_t var_68 = 0x7fff

if (edx_1 == 0)
    arg6[1].b = 0x20
else
    arg6[1].b = 0x2d

int32_t result

if (esi_1 == 0)
    if (arg2 != 0 || arg1 != arg2)
        goto label_6ac90f
    
    *(arg6 + 3) = 1
    *arg6 = 0
    arg6[1].b = (((edx_1 != 0x8000) - 1) & 0xd) + 0x20
    result = 1
    arg6[2] = 0x30
else if (esi_1 != 0x7fff)
label_6ac90f:
    uint32_t edx_2 = zx.d(esi_1)
    void* i_10 = arg2
    int32_t* edi_1 = &data_74b0e8
    int16_t var_1a_1 = esi_1
    int32_t i_7 = 5
    int32_t var_74_1 = 0xbffd
    int32_t var_58_1 = 0x3fbf
    uint32_t ecx_5 = zx.d(((edx_2 * 0x4d10 - 0x134312f4
        + ((edx_2 u>> 8) + (arg2 u>> 0x18 << 1)) * 0x4d) s>> 0x10).w)
    void* j_16 = arg1
    int16_t var_24 = 0
    int32_t i = neg.d(sx.d(ecx_5.w))
    uint32_t var_4c_1 = ecx_5
    int32_t i_9 = i
    bool cond:2_1 = i == 0
    void* j_6
    void* var_40
    int32_t var_3c
    void* j_8
    int32_t j_24
    void* j_14
    
    if (i == 0)
        j_24 = j_16
        j_14 = var_24.d
    else
        if (i s< 0)
            i = neg.d(i)
            edi_1 = &data_74b248
            i_9 = i
            cond:2_1 = i == 0
        
        if (cond:2_1)
            j_24 = j_16
            j_14 = var_24.d
        else
            j_14 = var_24.d
            j_24 = j_16
            j_6 = j_14
            
            do
                i_9 s>>= 3
                edi_1 = &edi_1[0x15]
                int32_t eax_17 = i & 7
                
                if (eax_17 != 0)
                    void* ecx_7 = eax_17 * 0xc + edi_1
                    void* var_6c_1 = ecx_7
                    
                    if (*ecx_7 u>= 0x8000)
                        void* esi_2 = ecx_7
                        ecx_7 = &var_40
                        var_6c_1 = &var_40
                        var_40 = *esi_2
                        int32_t* edi_2 = &var_3c
                        void* esi_3 = esi_2 + 4
                        *edi_2 = *esi_3
                        edi_2[1] = *(esi_3 + 4)
                        var_40 -= 1
                    
                    int16_t edi_5 = *(ecx_7 + 0xa)
                    int16_t edi_6 = edi_5 & 0x7fff
                    int16_t eax_19 = var_1a_1 & 0x7fff
                    int16_t var_60_3 = (edi_5 ^ var_1a_1) & 0x8000
                    uint32_t edi_7 = zx.d(eax_19 + edi_6)
                    j_14 = j_6
                    int32_t var_14_1 = 0
                    j_8 = nullptr
                    void* j_7 = nullptr
                    uint32_t var_50_1 = edi_7
                    
                    if (eax_19 u>= 0x7fff)
                    label_6acc78:
                        int32_t eax_40
                        eax_40.b = var_60_3 == 0
                        i_10 = ((eax_40 - 1) & 0x80000000) + 0x7fff8000
                    label_6acc89:
                        j_14 = nullptr
                        j_24 = 0
                        var_24.d = 0
                        j_16 = 0
                        j_6 = j_14
                    else
                        void* ecx_8 = var_6c_1
                        
                        if (edi_6 u>= 0x7fff || edi_7.w u> 0xbffd)
                            goto label_6acc78
                        
                        if (edi_7.w u<= 0x3fbf)
                            i_10 = 0
                            goto label_6acc89
                        
                        if (eax_19 == 0)
                            edi_7 += 1
                            var_50_1 = edi_7
                        
                        if (eax_19 != 0 || (i_10 & 0x7fffffff) != 0 || j_24 != 0 || j_14 != 0)
                            if (edi_6 == 0)
                                var_50_1 = edi_7 + 1
                            
                            if (edi_6 == 0 && (*(ecx_8 + 8) & 0x7fffffff) == 0 && *(ecx_8 + 4) == 0
                                    && *ecx_8 == 0)
                                i_10 = 0
                                goto label_6acc89
                            
                            int32_t eax_22 = 0
                            void** edx_3 = &j_8
                            int32_t j = 5
                            int32_t var_88_1 = 0
                            int32_t j_4 = 5
                            
                            do
                                if (j s> 0)
                                    void* eax_23 = &(&var_24)[eax_22]
                                    void* var_8c_1 = eax_23
                                    j_6 = ecx_8 + 8
                                    int32_t k = j
                                    void* j_10 = j_6
                                    
                                    do
                                        int32_t edi_10 = zx.d(*eax_23) * zx.d(*j_10)
                                        int32_t eax_25 = edx_3[-1]
                                        int32_t ecx_9 = eax_25 + edi_10
                                        int32_t var_64_3 = ecx_9
                                        int32_t ecx_10
                                        
                                        if (ecx_9 u< eax_25 || ecx_9 u< edi_10)
                                            ecx_10 = 1
                                        else
                                            ecx_10 = 0
                                        
                                        edx_3[-1] = ecx_9
                                        
                                        if (ecx_10 != 0)
                                            *edx_3 += 1
                                        
                                        eax_23 = var_8c_1 + 2
                                        j_10 = j_6 - 2
                                        var_8c_1 = eax_23
                                        k -= 1
                                        j_6 = j_10
                                    while (k s> 0)
                                    
                                    ecx_8 = var_6c_1
                                    j = j_4
                                    eax_22 = var_88_1
                                
                                edx_3 += 2
                                eax_22 += 1
                                j -= 1
                                var_88_1 = eax_22
                                j_4 = j
                            while (j s> 0)
                            
                            void* j_2 = j_7
                            int32_t edi_12 = var_50_1 + 0xc002
                            int32_t esi_7 = var_14_1
                            j_6 = j_2
                            
                            if (edi_12.w s<= 0)
                            label_6acb7d:
                                edi_12 += 0xffff
                                
                                if (edi_12.w s>= 0)
                                    j_2.w = var_14_1.w
                                else
                                    void* j_13 = j_6
                                    uint32_t j_9 = zx.d((neg.d(edi_12)).w)
                                    uint32_t j_5 = j_9
                                    int32_t edi_14 = 0
                                    uint32_t j_1
                                    
                                    do
                                        if ((var_14_1.b & 1) != 0)
                                            edi_14 += 1
                                        
                                        void* j_11 = j_8
                                        j_6 = j_11
                                        j_6 u>>= 1
                                        j_6 |= j_13 << 0x1f
                                        j_13 u>>= 1
                                        esi_7 = esi_7 u>> 1 | j_11 << 0x1f
                                        j_1 = j_5
                                        j_5 -= 1
                                        j_7 = j_13
                                        j_8 = j_6
                                        var_14_1 = esi_7
                                    while (j_1 != 1)
                                    j_6 = j_13
                                    edi_12 += j_9
                                    
                                    if (edi_14 == 0)
                                        j_2.w = var_14_1.w
                                    else
                                        j_2.w = esi_7.w
                                        j_2.w |= 1
                                        var_14_1.w = j_2.w
                                        esi_7 = var_14_1
                            else
                                while (j_2 s>= 0)
                                    void* j_17 = j_8
                                    void* j_18 = (j_17 * 2) | esi_7 u>> 0x1f
                                    esi_7 *= 2
                                    j_8 = j_18
                                    var_14_1 = esi_7
                                    j_2 = (j_6 * 2) | j_17 u>> 0x1f
                                    edi_12 += 0xffff
                                    j_6 = j_2
                                    j_7 = j_2
                                    
                                    if (edi_12.w s<= 0)
                                        break
                                
                                if (edi_12.w s<= 0)
                                    goto label_6acb7d
                                
                                j_2.w = var_14_1.w
                            
                            void* ecx_15
                            
                            if (j_2.w u<= 0x8000 && (esi_7 & 0x1ffff) != 0x18000)
                                ecx_15 = j_6
                            else if (var_14_1 != 0xffffffff)
                                var_14_1 += 1
                                ecx_15 = j_6
                            else
                                void* j_19 = j_8
                                var_14_1 = 0
                                
                                if (j_19 != 0xffffffff)
                                    j_8 = j_19 + 1
                                else
                                    j_19.w = j_7:2.w
                                    j_8 = 0
                                    
                                    if (j_19.w != 0xffff)
                                        j_19.w += 1
                                        j_7:2.w = j_19.w
                                    else
                                        j_7:2.w = 0x8000
                                        edi_12 += 1
                                
                                ecx_15 = j_7
                            
                            if (edi_12.w u>= 0x7fff)
                                goto label_6acc78
                            
                            var_24 = var_14_1:2.w
                            j_16 = j_8
                            j_14 = var_24.d
                            i_10 = ecx_15
                            j_24 = j_16
                            var_1a_1 = edi_12.w | var_60_3
                            j_6 = j_14
                        else
                            var_1a_1 = 0
                
                i = i_9
            while (i != 0)
            
            ecx_5 = var_4c_1
    
    uint16_t eax_45 = (i_10 u>> 0x10).w
    
    if (eax_45 u>= 0x3fff)
        var_4c_1 = ecx_5 + 1
        int16_t eax_46 = var_2c.w
        int32_t var_14_2 = 0
        int16_t edi_18 = (eax_46 ^ eax_45) & 0x8000
        j_8 = nullptr
        int16_t eax_47 = eax_46 & 0x7fff
        void* i_11 = nullptr
        int16_t ecx_18 = eax_45 & 0x7fff
        uint32_t edi_19 = zx.d(eax_47 + ecx_18)
        uint32_t var_50_3 = edi_19
        
        if (ecx_18 u>= 0x7fff || eax_47 u>= 0x7fff || edi_19.w u> 0xbffd)
        label_6acf4d:
            int32_t eax_66
            eax_66.b = edi_18 == 0
            i_10 = ((eax_66 - 1) & 0x80000000) + 0x7fff8000
            j_14 = nullptr
            j_24 = 0
        else if (edi_19.w u> 0x3fbf)
            if (ecx_18 == 0)
                edi_19 += 1
                var_50_3 = edi_19
            
            if (ecx_18 != 0 || (i_10 & 0x7fffffff) != 0 || j_24 != 0 || j_14 != 0)
                if (eax_47 == 0)
                    var_50_3 = edi_19 + 1
                
                if (eax_47 == 0 && (var_2c & 0x7fffffff) == 0 && var_30 == 0 && var_34 == 0)
                    goto label_6acd24
                
                int32_t edx_6 = 0
                int32_t* ecx_19 = &j_8
                int32_t var_54_2 = 0
                
                for (int32_t i_1 = 5; i_1 s> 0; )
                    int32_t j_3 = i_1
                    
                    if (i_1 s> 0)
                        int32_t* eax_50 = &var_2c
                        void* edi_21 = &(&var_24)[edx_6]
                        int32_t* var_74_2 = &var_2c
                        void* var_58_2 = edi_21
                        
                        do
                            int32_t edx_8 = zx.d(*eax_50) * zx.d(*edi_21)
                            int32_t eax_52 = ecx_19[-1]
                            int32_t edi_22 = eax_52 + edx_8
                            int32_t eax_53
                            
                            if (edi_22 u< eax_52 || edi_22 u< edx_8)
                                eax_53 = 1
                            else
                                eax_53 = 0
                            
                            ecx_19[-1] = edi_22
                            
                            if (eax_53 != 0)
                                *ecx_19 += 1
                            
                            edi_21 = var_58_2 + 2
                            eax_50 = var_74_2 - 2
                            var_58_2 = edi_21
                            j_3 -= 1
                            var_74_2 = eax_50
                        while (j_3 s> 0)
                        
                        edx_6 = var_54_2
                        i_1 = i_7
                    
                    ecx_19 += 2
                    edx_6 += 1
                    i_1 -= 1
                    var_54_2 = edx_6
                    i_7 = i_1
                
                void* i_3 = i_11
                int32_t edi_25 = var_50_3 + 0xc002
                int32_t edx_11
                
                if (edi_25.w s<= 0)
                    edx_11 = var_14_2
                label_6acea0:
                    edi_25 += 0xffff
                    
                    if (edi_25.w s>= 0)
                        ecx_19.w = var_14_2.w
                    else
                        uint32_t i_14 = zx.d((neg.d(edi_25)).w)
                        uint32_t i_8 = i_14
                        int32_t edi_27 = 0
                        uint32_t i_2
                        
                        do
                            if ((var_14_2.b & 1) != 0)
                                edi_27 += 1
                            
                            void* j_22 = j_8
                            int32_t j_23 = j_22 u>> 1 | i_3 << 0x1f
                            edx_11 = edx_11 u>> 1 | j_22 << 0x1f
                            i_3 u>>= 1
                            i_2 = i_8
                            i_8 -= 1
                            j_8 = j_23
                            var_14_2 = edx_11
                        while (i_2 != 1)
                        i_11 = i_3
                        edi_25 += i_14
                        
                        if (edi_27 == 0)
                            ecx_19.w = var_14_2.w
                        else
                            ecx_19.w = edx_11.w
                            ecx_19.w |= 1
                            var_14_2.w = ecx_19.w
                            edx_11 = var_14_2
                else
                    int32_t ebx_1 = var_14_2
                    int32_t var_6c_2 = ebx_1
                    
                    while (i_3 s>= 0)
                        void* j_20 = j_8
                        j_8 = (j_20 * 2) | ebx_1 u>> 0x1f
                        ebx_1 *= 2
                        var_14_2 = ebx_1
                        i_3 = (i_3 * 2) | j_20 u>> 0x1f
                        edi_25 += 0xffff
                        i_11 = i_3
                        
                        if (edi_25.w s<= 0)
                            break
                    
                    edx_11 = ebx_1
                    
                    if (edi_25.w s<= 0)
                        goto label_6acea0
                    
                    ecx_19.w = var_14_2.w
                
                if (ecx_19.w u> 0x8000 || (edx_11 & 0x1ffff) == 0x18000)
                    if (var_14_2 != 0xffffffff)
                        var_14_2 += 1
                    else
                        void* j_21 = j_8
                        var_14_2 = 0
                        
                        if (j_21 != 0xffffffff)
                            j_8 = j_21 + 1
                        else
                            j_21.w = i_11:2.w
                            j_8 = 0
                            
                            if (j_21.w != 0xffff)
                                j_21.w += 1
                                i_11:2.w = j_21.w
                            else
                                edi_25 += 1
                                i_11:2.w = 0x8000
                        
                        i_3 = i_11
                
                if (edi_25.w u>= 0x7fff)
                    goto label_6acf4d
                
                var_24 = var_14_2:2.w
                j_16 = j_8
                i_10 = i_3
                j_24 = j_16
                j_14 = var_24.d
                int16_t var_1a_3 = edi_25.w | edi_18
            else
                int16_t var_1a_2 = 0
        else
        label_6acd24:
            i_10 = 0
            j_14 = nullptr
            j_24 = 0
    
    int16_t eax_70 = var_4c_1.w
    int32_t edi_29 = arg4
    *arg6 = eax_70
    int32_t var_4c_2
    
    if ((arg5 & 1) == 0)
        var_4c_2 = edi_29
    label_6acfb2:
        
        if (edi_29 s> 0x15)
            var_4c_2 = 0x15
        
        int32_t edi_32 = (i_10 u>> 0x10) - 0x3ffe
        int16_t var_1a_4 = 0
        void* i_16 = i_10
        int32_t i_12 = 8
        int32_t i_4
        
        do
            uint32_t eax_74 = j_14 u>> 0x1f
            j_14 *= 2
            i_16 = (i_16 * 2) | j_24 u>> 0x1f
            j_24 = (j_24 * 2) | eax_74
            var_24.d = j_14
            i_10 = i_16
            i_4 = i_12
            i_12 -= 1
        while (i_4 != 1)
        void* i_13 = i_16
        j_16 = j_24
        j_6 = j_14
        
        if (edi_32 s< 0)
            uint32_t i_5 = zx.d((neg.d(edi_32)).b)
            
            if (i_5 s> 0)
                void* i_17 = i_13
                
                do
                    int32_t eax_76 = i_17 << 0x1f
                    j_14 = j_14 u>> 1 | j_24 << 0x1f
                    i_17 u>>= 1
                    j_24 = j_24 u>> 1 | eax_76
                    i_5 -= 1
                    i_10 = i_17
                    var_24.d = j_14
                while (i_5 s> 0)
                
                i_13 = i_17
                j_16 = j_24
                j_6 = j_14
        
        int16_t* esi_20 = arg6
        int32_t var_58_3 = var_4c_2 + 1
        void* edi_35 = &esi_20[2]
        void* ecx_27 = edi_35
        void* var_5c_1 = ecx_27
        int32_t eax_78
        
        if (var_4c_2 + 1 s> 0)
            while (true)
                var_40 = var_24.d
                int32_t* edi_36 = &var_3c
                void* esi_12 = &j_16:2
                *edi_36 = *esi_12
                edi_36[1] = *(esi_12 + 4)
                void* j_15 = j_6
                int32_t edi_39 = j_15 * 2
                int32_t edx_17 = (j_24 * 2) | j_15 u>> 0x1f
                int32_t edi_40 = edi_39 * 2
                int32_t edx_19 = (edx_17 * 2) | edi_39 u>> 0x1f
                void* eax_84 = var_40
                int32_t esi_18 = (((i_13 * 2) | j_24 u>> 0x1f) * 2) | edx_17 u>> 0x1f
                void* ecx_32 = eax_84 + edi_40
                void* var_4c_3 = ecx_32
                
                if (ecx_32 u< edi_40 || ecx_32 u< eax_84)
                    int32_t ecx_33 = 0
                    
                    if (edx_19 + 1 u< edx_19 || edx_19 + 1 u< 1)
                        ecx_33 = 1
                    
                    edx_19 += 1
                    ecx_32 = var_4c_3
                    
                    if (ecx_33 != 0)
                        esi_18 += 1
                
                int32_t eax_86 = var_3c
                int32_t edi_41 = eax_86 + edx_19
                
                if (edi_41 u< edx_19 || edi_41 u< eax_86)
                    esi_18 += 1
                
                void* j_12 = var_4c_3 * 2
                j_6 = j_12
                var_24.d = j_12
                j_24 = (edi_41 * 2) | ecx_32 u>> 0x1f
                j_16 = j_24
                int32_t var_38
                int32_t i_15 = ((esi_18 + var_38) * 2) | edi_41 u>> 0x1f
                i_10 = i_15
                var_1a_4:1.b = 0
                *var_5c_1 = (i_15 u>> 0x18).b + 0x30
                ecx_27 = var_5c_1 + 1
                eax_78 = var_58_3 - 1
                var_5c_1 = ecx_27
                var_58_3 = eax_78
                
                if (eax_78 s<= 0)
                    break
                
                i_13 = i_10
            
            esi_20 = arg6
        
        eax_78.b = *(ecx_27 - 1)
        void* i_6 = ecx_27 - 2
        
        if (eax_78.b s>= 0x35)
            for (; i_6 u>= edi_35; i_6 -= 1)
                if (*i_6 != 0x39)
                    break
                
                *i_6 = 0x30
            
            if (i_6 u< edi_35)
                i_6 += 1
                *esi_20 += 1
            
            *i_6 += 1
            goto label_6ad144
        
        for (; i_6 u>= edi_35; i_6 -= 1)
            if (*i_6 != 0x30)
                break
        
        if (i_6 u>= edi_35)
        label_6ad144:
            i_6.b -= arg6.b
            i_6.b -= 3
            *(arg6 + 3) = i_6.b
            *(sx.d(i_6.b) + arg6 + 4) = 0
            result = 1
        else
            *arg6 = 0
            arg6[1].b = (((edx_1 != 0x8000) - 1) & 0xd) + 0x20
            result = 1
            *(arg6 + 3) = 1
            *edi_35 = 0x30
            *(arg6 + 5) = 0
    else
        edi_29 += sx.d(eax_70)
        var_4c_2 = edi_29
        
        if (edi_29 s> 0)
            goto label_6acfb2
        
        *arg6 = 0
        arg6[1].b = (((edx_1 != 0x8000) - 1) & 0xd) + 0x20
        result = 1
        *(arg6 + 3) = 1
        arg6[2].b = 0x30
        *(arg6 + 5) = 0
else
    *arg6 = 1
    char* var_9c_1
    
    if ((arg2 != 0x80000000 || arg1 != 0) && (arg2 & 0x40000000) == 0)
        var_9c_1 = "1#SNAN"
    label_6ac8f4:
        
        if (_strcpy_s(&arg6[2], 0x16, var_9c_1) != 0)
        label_6ad1a6:
            int32_t var_ac
            __builtin_memset(&var_ac, 0, 0x14)
            __invoke_watson()
            noreturn
        
        *(arg6 + 3) = 6
    else
        char* var_9c_2
        
        if (edx_1 == 0 || arg2 != 0xc0000000)
            if (arg2 != 0x80000000 || arg1 != 0)
                var_9c_1 = "1#QNAN"
                goto label_6ac8f4
            
            var_9c_2 = "1#INF"
        else
            if (arg1 != 0)
                var_9c_1 = "1#QNAN"
                goto label_6ac8f4
            
            var_9c_2 = "1#IND"
        
        if (_strcpy_s(&arg6[2], 0x16, var_9c_2) != 0)
            goto label_6ad1a6
        
        *(arg6 + 3) = 5
    result = 0

sub_69a5bc(eax_1 ^ &__saved_ebp)
return result
