// 函数: sub_623b50
// 地址: 0x623b50
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

char** var_3c = arg1

if (arg1 != 0)
    int32_t* edi_1 = arg1[7]
    int32_t* var_28_1 = edi_1
    
    if (edi_1 != 0 && arg1[3] != 0 && (*arg1 != 0 || arg1[1] == 0))
        if (*edi_1 == 0xb)
            *edi_1 = 0xc
        
        int32_t* edx = edi_1[0xe]
        int32_t* var_24 = arg1[3]
        void* j_9 = arg1[4]
        void* j_5 = j_9
        void* j_8 = j_9
        void* j_11 = arg1[1]
        int32_t result = 0
        int32_t* i = *edi_1
        char* var_34 = *arg1
        int32_t* var_40 = edx
        void* j_12 = j_11
        int32_t j = edi_1[0xf]
        
        if (i u<= 0x1e)
            void* ebx_1 = &edi_1[0x15]
            char* ebx_2 = var_34
            
            do
                char var_30
                int32_t edx_24
                int32_t* edi_2
                
                switch (i)
                    case nullptr
                        int32_t eax_1 = edi_1[2]
                        
                        if (eax_1 != 0)
                            if (j u< 0x10)
                                do
                                    if (j_11 == 0)
                                        goto label_6240bc
                                    
                                    uint32_t eax_3 = zx.d(*ebx_2) << j.b
                                    ebx_2 = &ebx_2[1]
                                    edx += eax_3
                                    var_34 = ebx_2
                                    j += 8
                                    var_40 = edx
                                    j_11 -= 1
                                while (j u< 0x10)
                                
                                eax_1 = edi_1[2]
                                arg1 = var_3c
                            
                            if ((eax_1.b & 2) == 0 || edx != 0x8b1f)
                                void* eax_6 = edi_1[8]
                                edi_1[4] = 0
                                
                                if (eax_6 != 0)
                                    *(eax_6 + 0x30) = 0xffffffff
                                
                                if ((edi_1[2].b & 1) == 0)
                                    arg1[6] = "incorrect header check"
                                    *edi_1 = 0x1d
                                else
                                    uint32_t eax_9 = (edx u>> 8) + (zx.d(edx.b) << 8)
                                    edx = var_40
                                    
                                    if (modu.dp.d(0:eax_9, 0x1f) != 0)
                                        arg1 = var_3c
                                        arg1[6] = "incorrect header check"
                                        *edi_1 = 0x1d
                                    else if ((edx.b & 0xf) == 8)
                                        int32_t eax_12 = edi_1[9]
                                        j -= 4
                                        edx u>>= 4
                                        var_40 = edx
                                        
                                        if (eax_12 != 0)
                                            if ((edx & 0xf) + 8 u<= eax_12)
                                                goto label_623cf3
                                            
                                            arg1 = var_3c
                                            arg1[6] = "invalid window size"
                                            *edi_1 = 0x1d
                                        else
                                            edi_1[9] = (edx & 0xf) + 8
                                        label_623cf3:
                                            int32_t eax_13 = 1 << ((edx & 0xf) + 8).b
                                            edi_1[5] = eax_13
                                            void* eax_14 = sub_620fc0(eax_13, nullptr, 0, 0)
                                            arg1 = var_3c
                                            edi_1[6] = eax_14
                                            arg1[0xc] = eax_14
                                            *edi_1 = (not.d(var_40 u>> 8) & 2) | 9
                                            edx = nullptr
                                            var_40 = nullptr
                                            j = 0
                                    else
                                        arg1 = var_3c
                                        arg1[6] = "unknown compression method"
                                        *edi_1 = 0x1d
                            else
                                int32_t var_54_1 = 0
                                int32_t eax_4 = sub_621220(0, nullptr)
                                edi_1[6] = eax_4
                                var_30.w = 0x8b1f
                                edx = nullptr
                                edi_1[6] = sub_621230(eax_4, &var_30, eax_4, 2)
                                var_40 = nullptr
                                j = 0
                                *edi_1 = 1
                                arg1 = var_3c
                        else
                            *edi_1 = 0xc
                    case 1
                        if (j u< 0x10)
                            do
                                if (j_11 == 0)
                                    goto label_6240bc
                                
                                i = zx.d(*ebx_2) << j.b
                                ebx_2 = &ebx_2[1]
                                edx += i
                                var_34 = ebx_2
                                j += 8
                                var_40 = edx
                                j_11 -= 1
                            while (j u< 0x10)
                            
                            arg1 = var_3c
                        
                        edi_1[4] = edx
                        
                        if (edx.b == 8)
                            if ((edx & 0xe000) == 0)
                                int32_t** ecx_8 = edi_1[8]
                                
                                if (ecx_8 != 0)
                                    i = edx u>> 8 & 1
                                    *ecx_8 = i
                                
                                if ((edi_1[4] & 0x200) != 0)
                                    int32_t ecx_9 = edi_1[6]
                                    var_30 = edx.b
                                    uint8_t var_2f_1 = (edx u>> 8).b
                                    edi_1[6] = sub_621230(i, &var_30, ecx_9, 2)
                                
                                edx = nullptr
                                *edi_1 = 2
                                var_40 = nullptr
                                j = 0
                                goto label_623e31
                            
                            arg1[6] = "unknown header flags set"
                            *edi_1 = 0x1d
                        else
                            arg1[6] = "unknown compression method"
                            *edi_1 = 0x1d
                    case 2
                        if (j u< 0x20)
                        label_623e31:
                            
                            do
                                if (j_11 == 0)
                                    goto label_6240bc
                                
                                uint32_t eax_20 = zx.d(*ebx_2) << j.b
                                ebx_2 = &ebx_2[1]
                                edx += eax_20
                                var_34 = ebx_2
                                j += 8
                                var_40 = edx
                                j_11 -= 1
                            while (j u< 0x20)
                        
                        void* eax_21 = edi_1[8]
                        
                        if (eax_21 != 0)
                            *(eax_21 + 4) = edx
                        
                        if ((edi_1[4] & 0x200) != 0)
                            int32_t ecx_11 = edi_1[6]
                            uint8_t var_2f_2 = (edx u>> 8).b
                            var_30 = edx.b
                            uint32_t eax_25 = edx u>> 0x10
                            uint8_t var_2d_1 = (edx u>> 0x18).b
                            char var_2e_1 = eax_25.b
                            edi_1[6] = sub_621230(eax_25, &var_30, ecx_11, 4)
                        
                        edx = nullptr
                        *edi_1 = 3
                        var_40 = nullptr
                        j = 0
                        goto label_623eb1
                    case 3
                        if (j u< 0x10)
                        label_623eb1:
                            
                            do
                                if (j_11 == 0)
                                    goto label_6240bc
                                
                                i = zx.d(*ebx_2) << j.b
                                ebx_2 = &ebx_2[1]
                                edx += i
                                var_34 = ebx_2
                                j += 8
                                var_40 = edx
                                j_11 -= 1
                            while (j u< 0x10)
                        
                        void* ecx_13 = edi_1[8]
                        
                        if (ecx_13 != 0)
                            *(ecx_13 + 8) = zx.d(edx.b)
                            i = edi_1[8]
                            i[3] = edx u>> 8
                        
                        if ((edi_1[4] & 0x200) != 0)
                            int32_t ecx_16 = edi_1[6]
                            var_30 = edx.b
                            uint8_t var_2f_3 = (edx u>> 8).b
                            edi_1[6] = sub_621230(i, &var_30, ecx_16, 2)
                        
                        edx = nullptr
                        *edi_1 = 4
                        var_40 = nullptr
                        j = 0
                        goto label_623f08
                    case 4
                    label_623f08:
                        
                        if ((edi_1[4] & 0x400) == 0)
                            i = edi_1[8]
                            
                            if (i != 0)
                                i[4] = 0
                        else
                            while (j u< 0x10)
                                if (j_11 == 0)
                                    goto label_6240bc
                                
                                uint32_t eax_31 = zx.d(*ebx_2) << j.b
                                ebx_2 = &ebx_2[1]
                                edx += eax_31
                                var_34 = ebx_2
                                j += 8
                                var_40 = edx
                                j_11 -= 1
                            
                            i = edi_1[8]
                            edi_1[0x10] = edx
                            
                            if (i != 0)
                                i[5] = edx
                            
                            if ((edi_1[4] & 0x200) != 0)
                                int32_t ecx_18 = edi_1[6]
                                var_30 = edx.b
                                uint8_t var_2f_4 = (edx u>> 8).b
                                i = sub_621230(i, &var_30, ecx_18, 2)
                                edi_1[6] = i
                            
                            j = 0
                            var_40 = nullptr
                        
                        *edi_1 = 5
                    label_623f8d:
                        
                        if ((edi_1[4] & 0x400) != 0)
                            void* j_13 = edi_1[0x10]
                            
                            if (j_13 u> j_11)
                                j_13 = j_11
                            
                            void* j_14 = j_13
                            
                            if (j_13 != 0)
                                void* edx_17 = edi_1[8]
                                
                                if (edx_17 != 0)
                                    i = *(edx_17 + 0x10)
                                    
                                    if (i != 0)
                                        void* eax_33 = *(edx_17 + 0x14) - edi_1[0x10]
                                        int32_t edx_18 = *(edx_17 + 0x18)
                                        void* j_15
                                        
                                        if (eax_33 + j_13 u<= edx_18)
                                            j_15 = j_13
                                        else
                                            j_15 = edx_18 - eax_33
                                        
                                        i = sub_69d850(eax_33 + i, ebx_2, j_15)
                                        j_13 = j_14
                                
                                if ((edi_1[4] & 0x200) != 0)
                                    int32_t eax_37
                                    
                                    if (ebx_2 != 0)
                                        eax_37 = sub_621230(i, ebx_2, edi_1[6], j_13)
                                    else
                                        eax_37 = 0
                                    
                                    edi_1[6] = eax_37
                                
                                ebx_2 += j_14
                                j_11 -= j_14
                                var_34 = ebx_2
                                edi_1[0x10] -= j_14
                        
                        if ((edi_1[4] & 0x400) != 0 && edi_1[0x10] != 0)
                            goto label_6240bc
                        
                        edi_1[0x10] = 0
                        *edi_1 = 6
                    label_624034:
                        
                        if ((edi_1[4] & 0x800) == 0)
                            void* eax_48 = edi_1[8]
                            
                            if (eax_48 != 0)
                                *(eax_48 + 0x1c) = 0
                        else
                            if (j_11 == 0)
                                goto label_6240bc
                            
                            void* ecx_20 = nullptr
                            uint32_t eax_39
                            uint32_t eax_43
                            
                            do
                                eax_39 = zx.d(*(ecx_20 + ebx_2))
                                ecx_20 += 1
                                void* eax_40 = edi_1[8]
                                
                                if (eax_40 != 0 && *(eax_40 + 0x1c) != 0)
                                    int32_t edx_21 = edi_1[0x10]
                                    
                                    if (edx_21 u< *(eax_40 + 0x20))
                                        (*(eax_40 + 0x1c))[edx_21] = eax_39.b
                                        edi_1[0x10] += 1
                                        ebx_2 = var_34
                                
                                eax_43 = eax_39
                                
                                if (eax_43 == 0)
                                    break
                            while (ecx_20 u< j_11)
                            
                            if ((edi_1[4] & 0x200) != 0)
                                int32_t edx_22
                                
                                if (ebx_2 != 0)
                                    edx_22 = sub_621230(eax_43, ebx_2, edi_1[6], ecx_20)
                                    eax_43 = eax_39
                                else
                                    edx_22 = 0
                                
                                edi_1[6] = edx_22
                            
                            ebx_2 += ecx_20
                            j_11 -= ecx_20
                            var_34 = ebx_2
                            
                            if (eax_43 != 0)
                                goto label_6240bc
                        
                        edi_1[0x10] = 0
                        *edi_1 = 7
                    label_624159:
                        
                        if ((edi_1[4] & 0x1000) == 0)
                            void* eax_54 = edi_1[8]
                            
                            if (eax_54 != 0)
                                *(eax_54 + 0x24) = 0
                        else
                            if (j_11 == 0)
                                goto label_6240bc
                            
                            void* ecx_22 = nullptr
                            uint32_t eax_49
                            uint32_t eax_53
                            
                            do
                                eax_49 = zx.d(*(ecx_22 + ebx_2))
                                ecx_22 += 1
                                void* eax_50 = edi_1[8]
                                
                                if (eax_50 != 0 && *(eax_50 + 0x24) != 0)
                                    int32_t edx_27 = edi_1[0x10]
                                    
                                    if (edx_27 u< *(eax_50 + 0x28))
                                        (*(eax_50 + 0x24))[edx_27] = eax_49.b
                                        edi_1[0x10] += 1
                                        ebx_2 = var_34
                                
                                eax_53 = eax_49
                                
                                if (eax_53 == 0)
                                    break
                            while (ecx_22 u< j_11)
                            
                            if ((edi_1[4] & 0x200) != 0)
                                int32_t edx_28
                                
                                if (ebx_2 != 0)
                                    edx_28 = sub_621230(eax_53, ebx_2, edi_1[6], ecx_22)
                                    eax_53 = eax_49
                                else
                                    edx_28 = 0
                                
                                edi_1[6] = edx_28
                            
                            ebx_2 += ecx_22
                            j_11 -= ecx_22
                            var_34 = ebx_2
                            
                            if (eax_53 != 0)
                                goto label_6240bc
                        
                        edx = var_40
                        *edi_1 = 8
                    label_624206:
                        
                        if ((edi_1[4] & 0x200) == 0)
                            goto label_62425d
                        
                        while (j u< 0x10)
                            if (j_11 == 0)
                                goto label_6240bc
                            
                            uint32_t eax_56 = zx.d(*ebx_2) << j.b
                            ebx_2 = &ebx_2[1]
                            edx += eax_56
                            var_34 = ebx_2
                            j += 8
                            var_40 = edx
                            j_11 -= 1
                        
                        if (edx == zx.d(edi_1[6].w))
                            j = 0
                            var_40 = nullptr
                        label_62425d:
                            void* ecx_25 = edi_1[8]
                            
                            if (ecx_25 != 0)
                                *(ecx_25 + 0x2c) = edi_1[4] s>> 9 & 1
                                *(edi_1[8] + 0x30) = 1
                            
                            int32_t var_54_6 = 0
                            int32_t eax_62 = sub_621220(0, nullptr)
                            arg1 = var_3c
                            edx = var_40
                            edi_1[6] = eax_62
                            arg1[0xc] = eax_62
                            *edi_1 = 0xb
                        else
                            arg1 = var_3c
                            arg1[6] = "header crc mismatch"
                            *edi_1 = 0x1d
                    case 5
                        goto label_623f8d
                    case 6
                        goto label_624034
                    case 7
                        goto label_624159
                    case 8
                        goto label_624206
                    case 9
                        while (j u< 0x20)
                            if (j_11 == 0)
                                goto label_6240bc
                            
                            uint32_t eax_64 = zx.d(*ebx_2) << j.b
                            ebx_2 = &ebx_2[1]
                            edx += eax_64
                            var_34 = ebx_2
                            j += 8
                            var_40 = edx
                            j_11 -= 1
                        
                        arg1 = var_3c
                        i = (edx u>> 8 & 0xff00) + (((edx & 0xff00) + (edx << 0x10)) << 8)
                            + (edx u>> 0x18)
                        edx = nullptr
                        edi_1[6] = i
                        var_40 = nullptr
                        j = 0
                        arg1[0xc] = i
                        *edi_1 = 0xa
                        goto label_624304
                    case 0xa
                    label_624304:
                        
                        if (edi_1[3] == 0)
                            arg1[3] = var_24
                            arg1[4] = j_5
                            *arg1 = ebx_2
                            arg1[1] = j_11
                            edi_1[0xf] = j
                            edi_1[0xe] = edx
                            return 2
                        
                        void* eax_71 = sub_620fc0(i, nullptr, 0, 0)
                        edx = var_40
                        edi_1[6] = eax_71
                        var_3c[0xc] = eax_71
                        *edi_1 = 0xb
                    label_624334:
                        
                        if (arg2 != 5 && arg2 != 6)
                            goto label_624346
                        
                        edi_2 = var_40
                        edx_24 = arg2
                    label_6240c4:
                        char** ecx_158 = var_3c
                        ecx_158[3] = var_24
                        ecx_158[4] = j_5
                        char* eax_46 = var_34
                        ecx_158[1] = j_11
                        *ecx_158 = eax_46
                        bool cond:1_1 = var_28_1[0xa] != 0
                        var_28_1[0xe] = edi_2
                        var_28_1[0xf] = j
                        
                        if (not(cond:1_1))
                            if (j_8 == ecx_158[4])
                                goto label_6250ef
                            
                            eax_46 = *var_28_1
                            
                            if (eax_46 s>= 0x1d || (eax_46 s>= 0x1a && edx_24 == 4))
                                goto label_6250ef
                            
                            goto label_624117
                        
                    label_624117:
                        eax_46 = sub_623a60(ecx_158, j_8)
                        
                        if (eax_46 != 0)
                            *var_28_1 = 0x1e
                            return 0xfffffffc
                        
                        ecx_158 = var_3c
                    label_6250ef:
                        void* edi_23 = j_12 - ecx_158[1]
                        void* ebp_1 = j_8 - ecx_158[4]
                        ecx_158[2] += edi_23
                        ecx_158[5] += ebp_1
                        var_28_1[7] += ebp_1
                        
                        if (var_28_1[2] != 0 && ebp_1 != 0)
                            int32_t edx_72 = ecx_158[3]
                            int32_t eax_216
                            
                            if (var_28_1[4] == 0)
                                eax_216 = sub_620fc0(eax_46, edx_72 - ebp_1, var_28_1[6], ebp_1)
                                ecx_158 = var_3c
                            else if (edx_72 != ebp_1)
                                eax_216 = sub_621230(eax_46, edx_72 - ebp_1, var_28_1[6], ebp_1)
                                ecx_158 = var_3c
                            else
                                eax_216 = 0
                            
                            var_28_1[6] = eax_216
                            ecx_158[0xc] = eax_216
                        
                        int32_t edx_75 = *var_28_1
                        int32_t esi
                        
                        if (edx_75 == 0x13 || edx_75 == 0xe)
                            esi = 0x100
                        else
                            esi = 0
                        
                        int32_t ecx_161 = var_28_1[1]
                        int32_t ecx_162 = neg.d(ecx_161)
                        int32_t eax_217 = 0
                        
                        if (edx_75 == 0xb)
                            eax_217 = 0x80
                        
                        var_3c[0xb] = eax_217 + (sbb.d(ecx_162, ecx_162, ecx_161 != 0) & 0x40) + esi
                            + var_28_1[0xf]
                        
                        if ((edi_23 != 0 || ebp_1 != 0) && arg2 != 4)
                            return result
                        
                        if (result == 0)
                            return 0xfffffffb
                        
                        return result
                    case 0xb
                        goto label_624334
                    case 0xc
                    label_624346:
                        
                        if (edi_1[1] == 0)
                            while (j u< 3)
                                if (j_11 == 0)
                                    goto label_6240bc
                                
                                uint32_t eax_74 = zx.d(*ebx_2) << j.b
                                ebx_2 = &ebx_2[1]
                                edx += eax_74
                                var_34 = ebx_2
                                j += 8
                                var_40 = edx
                                j_11 -= 1
                            
                            uint32_t edx_31 = edx u>> 1
                            edi_1[1] = edx & 1
                            int32_t eax_78 = edx_31 & 3
                            
                            if (eax_78 u> 3)
                                goto label_6243b4
                            
                            switch (eax_78)
                                case 0
                                    *edi_1 = 0xd
                                label_6243b4:
                                    arg1 = var_3c
                                    edx = edx_31 u>> 2
                                    j -= 3
                                    var_40 = edx
                                case 1
                                    edi_1[0x13] = 0x6efcb8
                                    edi_1[0x15] = 9
                                    edi_1[0x14] = 0x6efc10
                                    edi_1[0x16] = 5
                                    *edi_1 = 0x13
                                    
                                    if (arg2 != 6)
                                        goto label_6243b4
                                    
                                    j -= 3
                                    var_40 = edx_31 u>> 2
                                    goto label_6240bc
                                case 2
                                    arg1 = var_3c
                                    edx = edx_31 u>> 2
                                    j -= 3
                                    *edi_1 = 0x10
                                    var_40 = edx
                                case 3
                                    arg1 = var_3c
                                    edx = edx_31 u>> 2
                                    j -= 3
                                    var_40 = edx
                                    arg1[6] = "invalid block type"
                                    *edi_1 = 0x1d
                        else
                            *edi_1 = 0x1a
                            int32_t ecx_33 = j & 7
                            edx u>>= ecx_33.b
                            j -= ecx_33
                            var_40 = edx
                            arg1 = var_3c
                    case 0xd
                        int32_t ecx_36 = j & 7
                        edx u>>= ecx_36.b
                        j -= ecx_36
                        var_40 = edx
                        
                        while (j u< 0x20)
                            if (j_11 == 0)
                                goto label_6240bc
                            
                            uint32_t eax_80 = zx.d(*ebx_2) << j.b
                            ebx_2 = &ebx_2[1]
                            edx += eax_80
                            var_34 = ebx_2
                            j += 8
                            var_40 = edx
                            j_11 -= 1
                        
                        uint32_t ecx_39 = zx.d(edx.w)
                        
                        if (ecx_39 == not.d(edx) u>> 0x10)
                            edx = nullptr
                            edi_1[0x10] = ecx_39
                            j = 0
                            var_40 = nullptr
                            *edi_1 = 0xe
                            
                            if (arg2 == 6)
                                edi_2 = nullptr
                                goto label_6240c0
                            
                            arg1 = var_3c
                        label_6244b9:
                            *edi_1 = 0xf
                        label_6244bf:
                            void* j_10 = edi_1[0x10]
                            
                            if (j_10 == 0)
                                *edi_1 = 0xb
                            else
                                if (j_10 u> j_11)
                                    j_10 = j_11
                                
                                if (j_10 u> j_5)
                                    j_10 = j_5
                                
                                if (j_10 == 0)
                                    goto label_6240bc
                                
                                sub_69d850(var_24, ebx_2, j_10)
                                j_5 -= j_10
                                ebx_2 += j_10
                                var_24 += j_10
                                j_11 -= j_10
                                edi_1[0x10] -= j_10
                                var_34 = ebx_2
                                edx = var_40
                                arg1 = var_3c
                        else
                            arg1 = var_3c
                            arg1[6] = "invalid stored block lengths"
                            *edi_1 = 0x1d
                    case 0xe
                        goto label_6244b9
                    case 0xf
                        goto label_6244bf
                    case 0x10
                        if (j u< 0xe)
                            do
                                if (j_11 == 0)
                                    goto label_6240bc
                                
                                uint32_t eax_87 = zx.d(*ebx_2) << j.b
                                ebx_2 = &ebx_2[1]
                                edx += eax_87
                                var_34 = ebx_2
                                j += 8
                                var_40 = edx
                                j_11 -= 1
                            while (j u< 0xe)
                            
                            arg1 = var_3c
                        
                        j -= 0xe
                        uint32_t edx_33 = edx u>> 5
                        edi_1[0x18] = (edx & 0x1f) + 0x101
                        uint32_t edx_34 = edx_33 u>> 5
                        edi_1[0x19] = (edx_33 & 0x1f) + 1
                        edx = edx_34 u>> 4
                        var_40 = edx
                        bool cond:0_1 = edi_1[0x18] u> 0x11e
                        edi_1[0x17] = (edx_34 & 0xf) + 4
                        
                        if (cond:0_1 || edi_1[0x19] u> 0x1e)
                            arg1[6] = "too many length or distance symbols"
                            *edi_1 = 0x1d
                        else
                            edi_1[0x1a] = 0
                            *edi_1 = 0x11
                        label_6245b4:
                            
                            while (edi_1[0x1a] u< edi_1[0x17])
                                while (j u< 3)
                                    if (j_11 == 0)
                                        goto label_6240bc
                                    
                                    uint32_t eax_99 = zx.d(*ebx_2) << j.b
                                    ebx_2 = &ebx_2[1]
                                    edx += eax_99
                                    var_34 = ebx_2
                                    j += 8
                                    var_40 = edx
                                    j_11 -= 1
                                
                                int16_t ecx_43 = edx.w & 7
                                edx u>>= 3
                                j -= 3
                                var_40 = edx
                                *(edi_1 + (zx.d(*((edi_1[0x1a] << 1) + &data_6efc90)) << 1)
                                    + 0x70) = ecx_43
                                edi_1[0x1a] += 1
                            
                            while (edi_1[0x1a] u< 0x13)
                                *(edi_1 + (zx.d(*((edi_1[0x1a] << 1) + &data_6efc90)) << 1)
                                    + 0x70) = 0
                                edi_1[0x1a] += 1
                            
                            edi_1[0x15] = 7
                            edi_1[0x13] = &edi_1[0x14c]
                            edi_1[0x1b] = &edi_1[0x14c]
                            int32_t result_1 = sub_6252a0(&edi_1[0xbc], &edi_1[0x1c], 0, 0x13, 
                                &edi_1[0x1b], &edi_1[0x15], &edi_1[0xbc])
                            result = result_1
                            
                            if (result_1 == 0)
                                edi_1[0x1a] = 0
                                *edi_1 = 0x12
                            label_6246a2:
                                int32_t j_7 = edi_1[0x1a]
                                int32_t j_3 = j_7
                                
                                if (j_7 u< edi_1[0x19] + edi_1[0x18])
                                    edi_2 = var_40
                                    int32_t* ecx_55
                                    int32_t j_1
                                    
                                    do
                                        int32_t eax_112 = *(var_28_1[0x13]
                                            + ((((1 << (*ebx_1).b) - 1) & edi_2) << 2))
                                        int32_t var_10_2 = eax_112
                                        
                                        while (zx.d((eax_112 u>> 8).b) u> j)
                                            if (j_11 == 0)
                                                goto label_6240c0
                                            
                                            edi_2 += zx.d(*ebx_2) << j.b
                                            ebx_2 = &ebx_2[1]
                                            j += 8
                                            j_11 -= 1
                                            var_40 = edi_2
                                            var_34 = ebx_2
                                            eax_112 = *(var_28_1[0x13]
                                                + ((((1 << (*ebx_1).b) - 1) & edi_2) << 2))
                                            var_10_2 = eax_112
                                        
                                        uint16_t edx_44 = (eax_112 u>> 0x10).w
                                        
                                        if (edx_44 u>= 0x10)
                                            int16_t var_10_3
                                            void* k_2
                                            
                                            if (edx_44 != 0x10)
                                                int32_t* edx_48 = var_40
                                                uint32_t eax_122 = zx.d(eax_112:1.b)
                                                int32_t eax_125
                                                
                                                if (var_10_2:2.w != 0x11)
                                                    uint32_t var_8_7 = eax_122
                                                    
                                                    if (j u< eax_122 + 7)
                                                        do
                                                            if (j_11 == 0)
                                                                goto label_6240bc
                                                            
                                                            uint32_t eax_127 = zx.d(*ebx_2) << j.b
                                                            ebx_2 = &ebx_2[1]
                                                            edx_48 += eax_127
                                                            var_34 = ebx_2
                                                            j += 8
                                                            var_40 = edx_48
                                                            j_11 -= 1
                                                        while (j u< eax_122 + 7)
                                                        
                                                        eax_122 = var_8_7
                                                    
                                                    uint32_t edx_50 = edx_48 u>> eax_122.b
                                                    edx = edx_50 u>> 7
                                                    k_2 = (edx_50 & 0x7f) + 0xb
                                                    eax_125 = 0xfffffff9 - var_8_7
                                                else
                                                    uint32_t var_8_6 = eax_122
                                                    
                                                    if (j u< eax_122 + 3)
                                                        do
                                                            if (j_11 == 0)
                                                                goto label_6240bc
                                                            
                                                            uint32_t eax_124 = zx.d(*ebx_2) << j.b
                                                            ebx_2 = &ebx_2[1]
                                                            edx_48 += eax_124
                                                            var_34 = ebx_2
                                                            j += 8
                                                            var_40 = edx_48
                                                            j_11 -= 1
                                                        while (j u< eax_122 + 3)
                                                        
                                                        eax_122 = var_8_6
                                                    
                                                    uint32_t edx_49 = edx_48 u>> eax_122.b
                                                    edx = edx_49 u>> 3
                                                    k_2 = (edx_49 & 7) + 3
                                                    eax_125 = 0xfffffffd - var_8_6
                                                
                                                edi_1 = var_28_1
                                                j += eax_125
                                                var_10_3 = 0
                                            else
                                                while (j u< zx.d((eax_112 u>> 8).b) + 2)
                                                    if (j_11 == 0)
                                                        goto label_6240c0
                                                    
                                                    uint32_t edx_46 = zx.d(*ebx_2) << j.b
                                                    ebx_2 = &ebx_2[1]
                                                    edi_2 += edx_46
                                                    var_34 = ebx_2
                                                    j += 8
                                                    var_40 = edi_2
                                                    j_11 -= 1
                                                
                                                edi_1 = var_28_1
                                                uint32_t ecx_61 = zx.d(eax_112:1.b)
                                                j -= ecx_61
                                                edx = var_40 u>> ecx_61.b
                                                var_40 = edx
                                                
                                                if (j_3 == 0)
                                                    arg1 = var_3c
                                                    arg1[6] = "invalid bit length repeat"
                                                    *edi_1 = 0x1d
                                                    goto label_62450d
                                                
                                                void* ecx_63 = edx & 3
                                                edx u>>= 2
                                                k_2 = ecx_63 + 3
                                                var_10_3 = *(edi_1 + (j_3 << 1) + 0x6e)
                                                j -= 2
                                            
                                            var_40 = edx
                                            
                                            if (k_2 + j_3 u> edi_1[0x19] + edi_1[0x18])
                                                arg1 = var_3c
                                                arg1[6] = "invalid bit length repeat"
                                                *edi_1 = 0x1d
                                                goto label_62450d
                                            
                                            void* k_1 = k_2
                                            
                                            if (k_1 != 0)
                                                void* k
                                                
                                                do
                                                    *(edi_1 + (edi_1[0x1a] << 1) + 0x70) = var_10_3
                                                    edi_1[0x1a] += 1
                                                    k = k_1
                                                    k_1 -= 1
                                                while (k != 1)
                                            
                                            ecx_55 = var_28_1
                                            edi_2 = var_40
                                        else
                                            uint32_t ecx_54 = zx.d((eax_112 u>> 8).b)
                                            j -= ecx_54
                                            edi_2 u>>= ecx_54.b
                                            ecx_55 = var_28_1
                                            var_40 = edi_2
                                            *(ecx_55 + (j_3 << 1) + 0x70) = edx_44
                                            ecx_55[0x1a] += 1
                                        
                                        j_1 = ecx_55[0x1a]
                                        j_3 = j_1
                                    while (j_1 u< ecx_55[0x19] + ecx_55[0x18])
                                    edi_1 = var_28_1
                                
                                if (*edi_1 == 0x1d)
                                    edx = var_40
                                    arg1 = var_3c
                                else if (edi_1[0x9c].w != 0)
                                    edi_1[0x15] = 9
                                    edi_1[0x13] = &edi_1[0x14c]
                                    edi_1[0x1b] = &edi_1[0x14c]
                                    int32_t result_2 = sub_6252a0(&edi_1[0xbc], &edi_1[0x1c], 1, 
                                        edi_1[0x18], &edi_1[0x1b], &edi_1[0x15], &edi_1[0xbc])
                                    result = result_2
                                    
                                    if (result_2 == 0)
                                        edi_1[0x14] = edi_1[0x1b]
                                        edi_1[0x16] = 6
                                        int32_t eax_138 = edi_1[0x18] + 0x38
                                        int32_t result_3 = sub_6252a0(eax_138, 
                                            edi_1 + (eax_138 << 1), 2, edi_1[0x19], &edi_1[0x1b], 
                                            &edi_1[0x16], &edi_1[0xbc])
                                        result = result_3
                                        
                                        if (result_3 == 0)
                                            edx_24 = arg2
                                            *edi_1 = 0x13
                                            
                                            if (edx_24 == 6)
                                                edi_2 = var_40
                                                goto label_6240c4
                                            
                                            edx = var_40
                                            arg1 = var_3c
                                        label_624a11:
                                            *edi_1 = 0x14
                                        label_624a17:
                                            
                                            if (j_11 u< 6 || j_5 u< 0x102)
                                                int32_t eax_143 = edi_1[0x13]
                                                int32_t ecx_76 = edi_1[0x13]
                                                void* eax_146 = ((1 << (edi_1[0x15]).b) - 1) & edx
                                                edi_1[0x6f1] = 0
                                                int32_t eax_147 = *(ecx_76 + (eax_146 << 2))
                                                
                                                while (zx.d((eax_147 u>> 8).b) u> j)
                                                    if (j_11 == 0)
                                                        goto label_6240bc
                                                    
                                                    uint32_t eax_149 = zx.d(*ebx_2) << j.b
                                                    ebx_2 = &ebx_2[1]
                                                    j += 8
                                                    var_40 = edx + eax_149
                                                    j_11 -= 1
                                                    var_34 = ebx_2
                                                    eax_147 = *(edi_1[0x13] + ((((1
                                                        << (edi_1[0x15]).b) - 1) & var_40) << 2))
                                                    edx = var_40
                                                
                                                if (eax_147.b != 0 && (eax_147.b & 0xf0) == 0)
                                                    uint8_t ecx_86 = (eax_147 u>> 8).b
                                                    int32_t edx_61 = eax_147
                                                    eax_147 = *(eax_143 + ((((((1
                                                        << (eax_147.b + ecx_86)) - 1) & var_40)
                                                        u>> ecx_86) + (eax_147 u>> 0x10)) << 2))
                                                    
                                                    if (zx.d((eax_147 u>> 8).b) + zx.d(ecx_86) u> j)
                                                        uint32_t ebx_13
                                                        
                                                        do
                                                            if (j_11 == 0)
                                                                goto label_6240bc
                                                            
                                                            char ecx_95 = j.b
                                                            j += 8
                                                            j_11 -= 1
                                                            var_40 += zx.d(*var_34) << ecx_95
                                                            var_34 = &var_34[1]
                                                            ebx_13 = zx.d(edx_61:1.b)
                                                            eax_147 = *(var_28_1[0x13] + ((((((1
                                                                << (edx_61.b + ebx_13.b)) - 1)
                                                                & var_40) u>> ebx_13.b)
                                                                + zx.d(edx_61:2.w)) << 2))
                                                        while (zx.d((eax_147 u>> 8).b) + ebx_13
                                                            u> j)
                                                    
                                                    edi_1 = var_28_1
                                                    ebx_2 = var_34
                                                    uint32_t ecx_103 = zx.d(edx_61:1.b)
                                                    edx = var_40 u>> ecx_103.b
                                                    j -= ecx_103
                                                    edi_1[0x6f1] = ecx_103
                                                
                                                uint32_t ecx_106 = zx.d((eax_147 u>> 8).b)
                                                edi_1[0x6f1] += ecx_106
                                                j -= ecx_106
                                                edx u>>= ecx_106.b
                                                var_40 = edx
                                                edi_1[0x10] = eax_147 u>> 0x10
                                                
                                                if (eax_147.b == 0)
                                                    *edi_1 = 0x19
                                                    arg1 = var_3c
                                                else if ((eax_147.b & 0x20) == 0)
                                                    if ((eax_147.b & 0x40) == 0)
                                                        *edi_1 = 0x15
                                                        edi_1[0x12] = zx.d(eax_147.b) & 0xf
                                                    label_624c2f:
                                                        int32_t ecx_110 = edi_1[0x12]
                                                        
                                                        if (ecx_110 != 0)
                                                            while (j u< ecx_110)
                                                                if (j_11 == 0)
                                                                    goto label_6240bc
                                                                
                                                                uint32_t eax_160 = zx.d(*ebx_2) << j.b
                                                                ebx_2 = &ebx_2[1]
                                                                ecx_110 = edi_1[0x12]
                                                                edx += eax_160
                                                                j += 8
                                                                var_40 = edx
                                                                j_11 -= 1
                                                                var_34 = ebx_2
                                                            
                                                            j -= ecx_110
                                                            void* eax_163 =
                                                                ((1 << ecx_110.b) - 1) & edx
                                                            edx u>>= ecx_110.b
                                                            edi_1[0x10] += eax_163
                                                            edi_1[0x6f1] += ecx_110
                                                            var_40 = edx
                                                        
                                                        edi_1[0x6f2] = edi_1[0x10]
                                                        *edi_1 = 0x16
                                                        goto label_624ca6
                                                    
                                                    arg1 = var_3c
                                                    arg1[6] = "invalid literal/length code"
                                                    *edi_1 = 0x1d
                                                else
                                                    edi_1[0x6f1] = 0xffffffff
                                                    *edi_1 = 0xb
                                                    arg1 = var_3c
                                            else
                                                arg1[3] = var_24
                                                arg1[4] = j_5
                                                *arg1 = ebx_2
                                                arg1[1] = j_11
                                                edi_1[0xe] = edx
                                                edi_1[0xf] = j
                                                sub_623430(arg1, j_8)
                                                arg1 = var_3c
                                                edx = edi_1[0xe]
                                                j = edi_1[0xf]
                                                var_40 = edx
                                                ebx_2 = *arg1
                                                j_11 = arg1[1]
                                                var_24 = arg1[3]
                                                j_5 = arg1[4]
                                                var_34 = ebx_2
                                                
                                                if (*edi_1 == 0xb)
                                                    edi_1[0x6f1] = 0xffffffff
                                        else
                                            arg1 = var_3c
                                            edx = var_40
                                            arg1[6] = "invalid distances set"
                                            *edi_1 = 0x1d
                                    else
                                        arg1 = var_3c
                                        edx = var_40
                                        arg1[6] = "invalid literal/lengths set"
                                        *edi_1 = 0x1d
                                else
                                    arg1 = var_3c
                                    edx = var_40
                                    arg1[6] = "invalid code -- missing end-of-block"
                                    *edi_1 = 0x1d
                            else
                                arg1 = var_3c
                                edx = var_40
                                arg1[6] = "invalid code lengths set"
                                *edi_1 = 0x1d
                    case 0x11
                        goto label_6245b4
                    case 0x12
                        goto label_6246a2
                    case 0x13
                        goto label_624a11
                    case 0x14
                        goto label_624a17
                    case 0x15
                        goto label_624c2f
                    case 0x16
                    label_624ca6:
                        int32_t eax_169 =
                            *(edi_1[0x14] + ((((1 << (edi_1[0x16]).b) - 1) & edx) << 2))
                        
                        while (zx.d((eax_169 u>> 8).b) u> j)
                            if (j_11 == 0)
                                goto label_6240bc
                            
                            uint32_t eax_171 = zx.d(*ebx_2) << j.b
                            ebx_2 = &ebx_2[1]
                            j += 8
                            var_40 = edx + eax_171
                            j_11 -= 1
                            var_34 = ebx_2
                            eax_169 =
                                *(edi_1[0x14] + ((((1 << (edi_1[0x16]).b) - 1) & var_40) << 2))
                            edx = var_40
                        
                        if ((eax_169.b & 0xf0) == 0)
                            uint8_t ecx_122 = (eax_169 u>> 8).b
                            int32_t edx_67 = eax_169
                            eax_169 = *(edi_1[0x14] + ((((((1 << (eax_169.b + ecx_122)) - 1)
                                & var_40) u>> ecx_122) + (eax_169 u>> 0x10)) << 2))
                            
                            if (zx.d((eax_169 u>> 8).b) + zx.d(ecx_122) u> j)
                                uint32_t ebx_21
                                
                                do
                                    if (j_11 == 0)
                                        goto label_6240bc
                                    
                                    char ecx_131 = j.b
                                    j += 8
                                    j_11 -= 1
                                    var_40 += zx.d(*var_34) << ecx_131
                                    var_34 = &var_34[1]
                                    ebx_21 = zx.d(edx_67:1.b)
                                    eax_169 = *(var_28_1[0x14] + ((((((1 << (edx_67.b + ebx_21.b))
                                        - 1) & var_40) u>> ebx_21.b) + zx.d(edx_67:2.w)) << 2))
                                while (zx.d((eax_169 u>> 8).b) + ebx_21 u> j)
                            
                            edi_1 = var_28_1
                            uint32_t ecx_139 = zx.d(edx_67:1.b)
                            j -= ecx_139
                            edx = var_40 u>> ecx_139.b
                            edi_1[0x6f1] += ecx_139
                        
                        ebx_2 = var_34
                        uint32_t ecx_142 = zx.d((eax_169 u>> 8).b)
                        edi_1[0x6f1] += ecx_142
                        j -= ecx_142
                        edx u>>= ecx_142.b
                        var_40 = edx
                        
                        if ((eax_169.b & 0x40) == 0)
                            *edi_1 = 0x17
                            edi_1[0x11] = eax_169 u>> 0x10
                            edi_1[0x12] = zx.d(eax_169.b) & 0xf
                        label_624dff:
                            int32_t ecx_146 = edi_1[0x12]
                            
                            if (ecx_146 != 0)
                                while (j u< ecx_146)
                                    if (j_11 == 0)
                                        goto label_6240bc
                                    
                                    uint32_t eax_182 = zx.d(*ebx_2) << j.b
                                    ebx_2 = &ebx_2[1]
                                    ecx_146 = edi_1[0x12]
                                    edx += eax_182
                                    j += 8
                                    var_40 = edx
                                    j_11 -= 1
                                    var_34 = ebx_2
                                
                                j -= ecx_146
                                void* eax_185 = ((1 << ecx_146.b) - 1) & edx
                                edx u>>= ecx_146.b
                                edi_1[0x11] += eax_185
                                edi_1[0x6f1] += ecx_146
                                var_40 = edx
                            
                            *edi_1 = 0x18
                            goto label_624e5a
                        
                        arg1 = var_3c
                        arg1[6] = "invalid distance code"
                        *edi_1 = 0x1d
                    case 0x17
                        goto label_624dff
                    case 0x18
                    label_624e5a:
                        
                        if (j_5 == 0)
                            goto label_6240bc
                        
                        void* eax_187 = j_8 - j_5
                        int32_t ecx_148 = edi_1[0x11]
                        void* var_10_6
                        void* j_6
                        void* j_4
                        
                        if (ecx_148 u<= eax_187)
                            var_10_6 = var_24 - ecx_148
                            j_6 = edi_1[0x10]
                        label_624eca:
                            j_4 = j_6
                        label_624ed2:
                            
                            if (j_4 u> j_5)
                                j_4 = j_5
                            
                            j_5 -= j_4
                            edi_1[0x10] = j_6 - j_4
                            int32_t* edi_21 = var_24
                            void* ebx_25 = var_10_6 - edi_21
                            void* j_2
                            
                            do
                                void* eax_196
                                eax_196.b = *(ebx_25 + edi_21)
                                *edi_21 = eax_196.b
                                edi_21 += 1
                                j_2 = j_4
                                j_4 -= 1
                            while (j_2 != 1)
                            ebx_2 = var_34
                            var_24 = edi_21
                            edi_1 = var_28_1
                            
                            if (edi_1[0x10] == j_4)
                                *edi_1 = 0x14
                            
                            arg1 = var_3c
                        else
                            j_4 = ecx_148 - eax_187
                            
                            if (j_4 u<= edi_1[0xb] || edi_1[0x6f0] == 0)
                                int32_t eax_188 = edi_1[0xc]
                                void* eax_191
                                
                                if (j_4 u<= eax_188)
                                    eax_191 = edi_1[0xd] - j_4 + edi_1[0xc]
                                else
                                    j_4 -= eax_188
                                    eax_191 = edi_1[0xd] + edi_1[0xa] - j_4
                                
                                var_10_6 = eax_191
                                j_6 = edi_1[0x10]
                                
                                if (j_4 u<= j_6)
                                    goto label_624ed2
                                
                                goto label_624eca
                            
                            arg1 = var_3c
                            arg1[6] = "invalid distance too far back"
                            *edi_1 = 0x1d
                    case 0x19
                        if (j_5 == 0)
                            goto label_6240bc
                        
                        int32_t* ebx_27 = var_24
                        i.b = edi_1[0x10].b
                        var_24 += 1
                        j_5 -= 1
                        *ebx_27 = i.b
                        ebx_2 = var_34
                        *edi_1 = 0x14
                    case 0x1a
                        if (edi_1[2] == 0)
                            goto label_625026
                        
                        if (j u< 0x20)
                            do
                                if (j_11 == 0)
                                    goto label_6240bc
                                
                                uint32_t eax_198 = zx.d(*ebx_2) << j.b
                                ebx_2 = &ebx_2[1]
                                edx += eax_198
                                var_34 = ebx_2
                                j += 8
                                var_40 = edx
                                j_11 -= 1
                            while (j u< 0x20)
                            
                            arg1 = var_3c
                        
                        void* eax_200 = j_8 - j_5
                        arg1[5] += eax_200
                        edi_1[7] += eax_200
                        
                        if (eax_200 != 0)
                            int32_t eax_202
                            
                            if (edi_1[4] == 0)
                                eax_202 = sub_620fc0(eax_200, var_24 - eax_200, edi_1[6], eax_200)
                                arg1 = var_3c
                                edx = var_40
                            else
                                eax_202 = var_24 - eax_200
                                
                                if (var_24 != eax_200)
                                    eax_202 = sub_621230(eax_202, eax_202, edi_1[6], eax_200)
                                    arg1 = var_3c
                                    edx = var_40
                            
                            edi_1[6] = eax_202
                            arg1[0xc] = eax_202
                        
                        arg1 = edx
                        j_8 = j_5
                        
                        if (edi_1[4] == 0)
                            arg1 = (((arg1 & 0xff00) + (edx << 0x10)) << 8) + (edx u>> 8 & 0xff00)
                                + (edx u>> 0x18)
                        
                        if (arg1 == edi_1[6])
                            edx = nullptr
                            j = 0
                            var_40 = nullptr
                        label_625026:
                            *edi_1 = 0x1b
                        label_62502c:
                            
                            if (edi_1[2] == 0 || edi_1[4] == 0)
                                goto label_6250ac
                            
                            while (j u< 0x20)
                                if (j_11 == 0)
                                    goto label_6240bc
                                
                                uint32_t eax_212 = zx.d(*ebx_2) << j.b
                                ebx_2 = &ebx_2[1]
                                edx += eax_212
                                var_34 = ebx_2
                                j += 8
                                var_40 = edx
                                j_11 -= 1
                            
                            if (edx == edi_1[7])
                                j = 0
                                var_40 = nullptr
                            label_6250ac:
                                *edi_1 = 0x1c
                            label_6250b2:
                                result = 1
                            label_6240bc:
                                edi_2 = var_40
                            label_6240c0:
                                edx_24 = arg2
                                goto label_6240c4
                            
                            arg1 = var_3c
                            arg1[6] = "incorrect length check"
                            *edi_1 = 0x1d
                        else
                            arg1 = var_3c
                            arg1[6] = "incorrect data check"
                            *edi_1 = 0x1d
                    case 0x1b
                        goto label_62502c
                    case 0x1c
                        goto label_6250b2
                    case 0x1d
                        result = 0xfffffffd
                        goto label_6240bc
                    case 0x1e
                        return 0xfffffffc
                
            label_62450d:
                i = *edi_1
            while (i u<= 0x1e)

return 0xfffffffe
