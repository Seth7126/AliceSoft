// 函数: sub_6a08b0
// 地址: 0x6a08b0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

char** var_38 = arg1

if (arg1 != 0 && arg1[8] != 0 && arg1[9] != 0)
    int32_t* edi_1 = arg1[7]
    int32_t* var_20_1 = edi_1
    
    if (edi_1 != 0 && *edi_1 == arg1)
        int32_t eax_1 = edi_1[1]
        
        if (eax_1 s>= 0x3f34 && eax_1 s<= 0x3f53 && arg1[3] != 0 && (*arg1 != 0 || arg1[1] == 0))
            if (eax_1 == 0x3f3f)
                edi_1[1] = 0x3f40
            
            uint32_t edx = edi_1[0xf]
            char* var_24 = arg1[3]
            void* j_9 = arg1[4]
            void* j_5 = j_9
            void* j_8 = j_9
            int32_t result = 0
            void* j_11 = arg1[1]
            char* i = edi_1[1] - 0x3f34
            char* var_30 = *arg1
            uint32_t var_3c = edx
            void* j_12 = j_11
            int32_t j = edi_1[0x10]
            
            if (i u<= 0x1e)
                void* ebx_1 = &edi_1[0x16]
                char* ebx_2 = var_30
                
                do
                    char var_2c
                    int32_t edx_24
                    uint32_t edi_2
                    
                    switch (i)
                        case nullptr
                            int32_t eax_4 = edi_1[3]
                            
                            if (eax_4 != 0)
                                if (j u< 0x10)
                                    do
                                        if (j_11 == 0)
                                            goto label_6a0ea4
                                        
                                        uint32_t eax_6 = zx.d(*ebx_2) << j.b
                                        ebx_2 = &ebx_2[1]
                                        edx += eax_6
                                        var_30 = ebx_2
                                        j += 8
                                        var_3c = edx
                                        j_11 -= 1
                                    while (j u< 0x10)
                                    
                                    eax_4 = edi_1[3]
                                    arg1 = var_38
                                
                                if ((eax_4.b & 2) == 0 || edx != 0x8b1f)
                                    void* eax_9 = edi_1[9]
                                    edi_1[5] = 0
                                    
                                    if (eax_9 != 0)
                                        *(eax_9 + 0x30) = 0xffffffff
                                    
                                    if ((edi_1[3].b & 1) == 0)
                                        arg1[6] = "incorrect header check"
                                        edi_1[1] = 0x3f51
                                    else
                                        uint32_t eax_12 = (edx u>> 8) + (zx.d(edx.b) << 8)
                                        edx = var_3c
                                        
                                        if (modu.dp.d(0:eax_12, 0x1f) != 0)
                                            arg1 = var_38
                                            arg1[6] = "incorrect header check"
                                            edi_1[1] = 0x3f51
                                        else if ((edx.b & 0xf) == 8)
                                            edx u>>= 4
                                            j -= 4
                                            var_3c = edx
                                            
                                            if (edi_1[0xa] == 0)
                                                edi_1[0xa] = (edx & 0xf) + 8
                                            
                                            if ((edx & 0xf) + 8 u> 0xf
                                                    || (edx & 0xf) + 8 u> edi_1[0xa])
                                                arg1 = var_38
                                                arg1[6] = "invalid window size"
                                                edi_1[1] = 0x3f51
                                            else
                                                int32_t eax_15 = 1 << ((edx & 0xf) + 8).b
                                                edi_1[6] = eax_15
                                                void* eax_16 = sub_69d9c0(eax_15, nullptr, 0, 0)
                                                arg1 = var_38
                                                edi_1[7] = eax_16
                                                arg1[0xc] = eax_16
                                                edi_1[1] = (not.d(var_3c u>> 8) & 2) | 0x3f3d
                                                edx = 0
                                                var_3c = 0
                                                j = 0
                                        else
                                            arg1 = var_38
                                            arg1[6] = "unknown compression method"
                                            edi_1[1] = 0x3f51
                                else
                                    if (edi_1[0xa] == 0)
                                        edi_1[0xa] = 0xf
                                    
                                    int32_t var_50_1 = 0
                                    int32_t eax_7 = sub_69dc20(0, nullptr)
                                    edi_1[7] = eax_7
                                    var_2c.w = 0x8b1f
                                    edx = 0
                                    edi_1[7] = sub_69dc30(eax_7, &var_2c, eax_7, 2)
                                    var_3c = 0
                                    j = 0
                                    edi_1[1] = 0x3f35
                                    arg1 = var_38
                            else
                                edi_1[1] = 0x3f40
                        case 1
                            if (j u< 0x10)
                                do
                                    if (j_11 == 0)
                                        goto label_6a0ea4
                                    
                                    i = zx.d(*ebx_2) << j.b
                                    ebx_2 = &ebx_2[1]
                                    edx = &i[edx]
                                    var_30 = ebx_2
                                    j += 8
                                    var_3c = edx
                                    j_11 -= 1
                                while (j u< 0x10)
                                
                                arg1 = var_38
                            
                            edi_1[5] = edx
                            
                            if (edx.b == 8)
                                if ((edx & 0xe000) == 0)
                                    char** ecx_8 = edi_1[9]
                                    
                                    if (ecx_8 != 0)
                                        i = edx u>> 8 & 1
                                        *ecx_8 = i
                                    
                                    if ((edi_1[5] & 0x200) != 0 && (edi_1[3].b & 4) != 0)
                                        int32_t ecx_9 = edi_1[7]
                                        var_2c = edx.b
                                        uint8_t var_2b_1 = (edx u>> 8).b
                                        edi_1[7] = sub_69dc30(i, &var_2c, ecx_9, 2)
                                    
                                    edx = 0
                                    edi_1[1] = 0x3f36
                                    var_3c = 0
                                    j = 0
                                    goto label_6a0bf3
                                
                                arg1[6] = "unknown header flags set"
                                edi_1[1] = 0x3f51
                            else
                                arg1[6] = "unknown compression method"
                                edi_1[1] = 0x3f51
                        case 2
                            if (j u< 0x20)
                            label_6a0bf3:
                                
                                do
                                    if (j_11 == 0)
                                        goto label_6a0ea4
                                    
                                    uint32_t eax_22 = zx.d(*ebx_2) << j.b
                                    ebx_2 = &ebx_2[1]
                                    edx += eax_22
                                    var_30 = ebx_2
                                    j += 8
                                    var_3c = edx
                                    j_11 -= 1
                                while (j u< 0x20)
                            
                            void* eax_23 = edi_1[9]
                            
                            if (eax_23 != 0)
                                *(eax_23 + 4) = edx
                            
                            if ((edi_1[5] & 0x200) != 0 && (edi_1[3].b & 4) != 0)
                                int32_t ecx_11 = edi_1[7]
                                uint8_t var_2b_2 = (edx u>> 8).b
                                var_2c = edx.b
                                uint32_t eax_27 = edx u>> 0x10
                                uint8_t var_29_1 = (edx u>> 0x18).b
                                char var_2a_1 = eax_27.b
                                edi_1[7] = sub_69dc30(eax_27, &var_2c, ecx_11, 4)
                            
                            edx = 0
                            edi_1[1] = 0x3f37
                            var_3c = 0
                            j = 0
                            goto label_6a0c76
                        case 3
                            if (j u< 0x10)
                            label_6a0c76:
                                
                                do
                                    if (j_11 == 0)
                                        goto label_6a0ea4
                                    
                                    i = zx.d(*ebx_2) << j.b
                                    ebx_2 = &ebx_2[1]
                                    edx = &i[edx]
                                    var_30 = ebx_2
                                    j += 8
                                    var_3c = edx
                                    j_11 -= 1
                                while (j u< 0x10)
                            
                            void* ecx_13 = edi_1[9]
                            
                            if (ecx_13 != 0)
                                *(ecx_13 + 8) = zx.d(edx.b)
                                i = edi_1[9]
                                *(i + 0xc) = edx u>> 8
                            
                            if ((edi_1[5] & 0x200) != 0 && (edi_1[3].b & 4) != 0)
                                int32_t ecx_16 = edi_1[7]
                                var_2c = edx.b
                                uint8_t var_2b_3 = (edx u>> 8).b
                                edi_1[7] = sub_69dc30(i, &var_2c, ecx_16, 2)
                            
                            edx = 0
                            edi_1[1] = 0x3f38
                            var_3c = 0
                            j = 0
                            goto label_6a0cd4
                        case 4
                        label_6a0cd4:
                            
                            if ((edi_1[5] & 0x400) == 0)
                                i = edi_1[9]
                                
                                if (i != 0)
                                    *(i + 0x10) = 0
                            else
                                while (j u< 0x10)
                                    if (j_11 == 0)
                                        goto label_6a0ea4
                                    
                                    uint32_t eax_33 = zx.d(*ebx_2) << j.b
                                    ebx_2 = &ebx_2[1]
                                    edx += eax_33
                                    var_30 = ebx_2
                                    j += 8
                                    var_3c = edx
                                    j_11 -= 1
                                
                                i = edi_1[9]
                                edi_1[0x11] = edx
                                
                                if (i != 0)
                                    *(i + 0x14) = edx
                                
                                if ((edi_1[5] & 0x200) != 0 && (edi_1[3].b & 4) != 0)
                                    int32_t ecx_18 = edi_1[7]
                                    var_2c = edx.b
                                    uint8_t var_2b_4 = (edx u>> 8).b
                                    i = sub_69dc30(i, &var_2c, ecx_18, 2)
                                    edi_1[7] = i
                                
                                j = 0
                                var_3c = 0
                            
                            edi_1[1] = 0x3f39
                        label_6a0d64:
                            
                            if ((edi_1[5] & 0x400) != 0)
                                void* j_13 = edi_1[0x11]
                                
                                if (j_13 u> j_11)
                                    j_13 = j_11
                                
                                void* j_14 = j_13
                                
                                if (j_13 != 0)
                                    void* edx_17 = edi_1[9]
                                    
                                    if (edx_17 != 0)
                                        i = *(edx_17 + 0x10)
                                        
                                        if (i != 0)
                                            void* eax_35 = *(edx_17 + 0x14) - edi_1[0x11]
                                            int32_t edx_18 = *(edx_17 + 0x18)
                                            void* j_15
                                            
                                            if (eax_35 + j_13 u<= edx_18)
                                                j_15 = j_13
                                            else
                                                j_15 = edx_18 - eax_35
                                            
                                            i = sub_700660(eax_35 + i, ebx_2, j_15)
                                            j_13 = j_14
                                    
                                    if ((edi_1[5] & 0x200) != 0 && (edi_1[3].b & 4) != 0)
                                        int32_t eax_39
                                        
                                        if (ebx_2 != 0)
                                            eax_39 = sub_69dc30(i, ebx_2, edi_1[7], j_13)
                                        else
                                            eax_39 = 0
                                        
                                        edi_1[7] = eax_39
                                    
                                    ebx_2 += j_14
                                    j_11 -= j_14
                                    var_30 = ebx_2
                                    edi_1[0x11] -= j_14
                            
                            if ((edi_1[5] & 0x400) != 0 && edi_1[0x11] != 0)
                                goto label_6a0ea4
                            
                            edi_1[0x11] = 0
                            edi_1[1] = 0x3f3a
                        label_6a0e12:
                            
                            if ((edi_1[5] & 0x800) == 0)
                                void* eax_52 = edi_1[9]
                                
                                if (eax_52 != 0)
                                    *(eax_52 + 0x1c) = 0
                            else
                                if (j_11 == 0)
                                    goto label_6a0ea4
                                
                                void* ecx_20 = nullptr
                                uint32_t eax_41
                                uint32_t eax_45
                                
                                do
                                    eax_41 = zx.d(*(ecx_20 + ebx_2))
                                    ecx_20 += 1
                                    void* eax_42 = edi_1[9]
                                    
                                    if (eax_42 != 0 && *(eax_42 + 0x1c) != 0)
                                        int32_t edx_21 = edi_1[0x11]
                                        
                                        if (edx_21 u< *(eax_42 + 0x20))
                                            (*(eax_42 + 0x1c))[edx_21] = eax_41.b
                                            edi_1[0x11] += 1
                                            ebx_2 = var_30
                                    
                                    eax_45 = eax_41
                                    
                                    if (eax_45 == 0)
                                        break
                                while (ecx_20 u< j_11)
                                
                                if ((edi_1[5] & 0x200) != 0 && (edi_1[3].b & 4) != 0)
                                    int32_t edx_22
                                    
                                    if (ebx_2 != 0)
                                        edx_22 = sub_69dc30(eax_45, ebx_2, edi_1[7], ecx_20)
                                        eax_45 = eax_41
                                    else
                                        edx_22 = 0
                                    
                                    edi_1[7] = edx_22
                                
                                ebx_2 += ecx_20
                                j_11 -= ecx_20
                                var_30 = ebx_2
                                
                                if (eax_45 != 0)
                                    goto label_6a0ea4
                            
                            edi_1[0x11] = 0
                            edi_1[1] = 0x3f3b
                        label_6a0f52:
                            
                            if ((edi_1[5] & 0x1000) == 0)
                                void* eax_58 = edi_1[9]
                                
                                if (eax_58 != 0)
                                    *(eax_58 + 0x24) = 0
                            else
                                if (j_11 == 0)
                                    goto label_6a0ea4
                                
                                void* ecx_22 = nullptr
                                uint32_t eax_53
                                uint32_t eax_57
                                
                                do
                                    eax_53 = zx.d(*(ecx_22 + ebx_2))
                                    ecx_22 += 1
                                    void* eax_54 = edi_1[9]
                                    
                                    if (eax_54 != 0 && *(eax_54 + 0x24) != 0)
                                        int32_t edx_27 = edi_1[0x11]
                                        
                                        if (edx_27 u< *(eax_54 + 0x28))
                                            (*(eax_54 + 0x24))[edx_27] = eax_53.b
                                            edi_1[0x11] += 1
                                            ebx_2 = var_30
                                    
                                    eax_57 = eax_53
                                    
                                    if (eax_57 == 0)
                                        break
                                while (ecx_22 u< j_11)
                                
                                if ((edi_1[5] & 0x200) != 0 && (edi_1[3].b & 4) != 0)
                                    int32_t edx_28
                                    
                                    if (ebx_2 != 0)
                                        edx_28 = sub_69dc30(eax_57, ebx_2, edi_1[7], ecx_22)
                                        eax_57 = eax_53
                                    else
                                        edx_28 = 0
                                    
                                    edi_1[7] = edx_28
                                
                                ebx_2 += ecx_22
                                j_11 -= ecx_22
                                var_30 = ebx_2
                                
                                if (eax_57 != 0)
                                    goto label_6a0ea4
                            
                            edx = var_3c
                            edi_1[1] = 0x3f3c
                        label_6a0fff:
                            
                            if ((edi_1[5] & 0x200) == 0)
                                goto label_6a1060
                            
                            while (j u< 0x10)
                                if (j_11 == 0)
                                    goto label_6a0ea4
                                
                                uint32_t eax_60 = zx.d(*ebx_2) << j.b
                                ebx_2 = &ebx_2[1]
                                edx += eax_60
                                var_30 = ebx_2
                                j += 8
                                var_3c = edx
                                j_11 -= 1
                            
                            if ((edi_1[3].b & 4) == 0 || edx == zx.d(edi_1[7].w))
                                j = 0
                                var_3c = 0
                            label_6a1060:
                                void* ecx_25 = edi_1[9]
                                
                                if (ecx_25 != 0)
                                    *(ecx_25 + 0x2c) = edi_1[5] s>> 9 & 1
                                    *(edi_1[9] + 0x30) = 1
                                
                                int32_t var_50_7 = 0
                                int32_t eax_66 = sub_69dc20(0, nullptr)
                                arg1 = var_38
                                edx = var_3c
                                edi_1[7] = eax_66
                                arg1[0xc] = eax_66
                                edi_1[1] = 0x3f3f
                            else
                                arg1 = var_38
                                arg1[6] = "header crc mismatch"
                                edi_1[1] = 0x3f51
                        case 5
                            goto label_6a0d64
                        case 6
                            goto label_6a0e12
                        case 7
                            goto label_6a0f52
                        case 8
                            goto label_6a0fff
                        case 9
                            while (j u< 0x20)
                                if (j_11 == 0)
                                    goto label_6a0ea4
                                
                                uint32_t eax_68 = zx.d(*ebx_2) << j.b
                                ebx_2 = &ebx_2[1]
                                edx += eax_68
                                var_30 = ebx_2
                                j += 8
                                var_3c = edx
                                j_11 -= 1
                            
                            arg1 = var_38
                            i = (edx u>> 8 & 0xff00) + (((edx & 0xff00) + (edx << 0x10)) << 8)
                                + (edx u>> 0x18)
                            edx = 0
                            edi_1[7] = i
                            var_3c = 0
                            j = 0
                            arg1[0xc] = i
                            edi_1[1] = 0x3f3e
                            goto label_6a110f
                        case 0xa
                        label_6a110f:
                            
                            if (edi_1[4] == 0)
                                arg1[3] = var_24
                                arg1[4] = j_5
                                *arg1 = ebx_2
                                arg1[1] = j_11
                                edi_1[0x10] = j
                                edi_1[0xf] = edx
                                return 2
                            
                            void* eax_75 = sub_69d9c0(i, nullptr, 0, 0)
                            edx = var_3c
                            edi_1[7] = eax_75
                            var_38[0xc] = eax_75
                            edi_1[1] = 0x3f3f
                        label_6a1140:
                            
                            if (arg2 != 5 && arg2 != 6)
                                goto label_6a1152
                            
                            edi_2 = var_3c
                            edx_24 = arg2
                        label_6a0eac:
                            char** ecx_151 = var_38
                            ecx_151[3] = var_24
                            ecx_151[4] = j_5
                            char* eax_48 = var_30
                            ecx_151[1] = j_11
                            *ecx_151 = eax_48
                            bool cond:1_1 = var_20_1[0xb] != 0
                            var_20_1[0xf] = edi_2
                            var_20_1[0x10] = j
                            
                            if (not(cond:1_1))
                                if (j_8 == ecx_151[4])
                                    goto label_6a1f11
                                
                                eax_48 = var_20_1[1]
                                
                                if (eax_48 s>= 0x3f51 || (eax_48 s>= 0x3f4e && edx_24 == 4))
                                    goto label_6a1f11
                                
                                goto label_6a0f07
                            
                        label_6a0f07:
                            void* eax_50 = j_8 - ecx_151[4]
                            eax_48 = sub_6a07c0(eax_50, ecx_151[3], ecx_151, eax_50)
                            
                            if (eax_48 != 0)
                                var_20_1[1] = 0x3f52
                                return 0xfffffffc
                            
                            ecx_151 = var_38
                        label_6a1f11:
                            void* edi_23 = j_12 - ecx_151[1]
                            void* ebp_1 = j_8 - ecx_151[4]
                            ecx_151[2] += edi_23
                            ecx_151[5] += ebp_1
                            var_20_1[8] += ebp_1
                            
                            if ((var_20_1[3].b & 4) != 0 && ebp_1 != 0)
                                int32_t edx_72 = ecx_151[3]
                                int32_t eax_228
                                
                                if (var_20_1[5] == 0)
                                    eax_228 = sub_69d9c0(eax_48, edx_72 - ebp_1, var_20_1[7], ebp_1)
                                    ecx_151 = var_38
                                else if (edx_72 != ebp_1)
                                    eax_228 = sub_69dc30(eax_48, edx_72 - ebp_1, var_20_1[7], ebp_1)
                                    ecx_151 = var_38
                                else
                                    eax_228 = 0
                                
                                var_20_1[7] = eax_228
                                ecx_151[0xc] = eax_228
                            
                            int32_t edx_75 = var_20_1[1]
                            int32_t esi
                            
                            if (edx_75 == 0x3f47 || edx_75 == 0x3f42)
                                esi = 0x100
                            else
                                esi = 0
                            
                            int32_t ecx_154 = var_20_1[2]
                            int32_t ecx_155 = neg.d(ecx_154)
                            int32_t eax_229 = 0
                            
                            if (edx_75 == 0x3f3f)
                                eax_229 = 0x80
                            
                            var_38[0xb] = eax_229 + (sbb.d(ecx_155, ecx_155, ecx_154 != 0) & 0x40)
                                + esi + var_20_1[0x10]
                            
                            if ((edi_23 != 0 || ebp_1 != 0) && arg2 != 4)
                                return result
                            
                            if (result == 0)
                                return 0xfffffffb
                            
                            return result
                        case 0xb
                            goto label_6a1140
                        case 0xc
                        label_6a1152:
                            
                            if (edi_1[2] == 0)
                                while (j u< 3)
                                    if (j_11 == 0)
                                        goto label_6a0ea4
                                    
                                    uint32_t eax_78 = zx.d(*ebx_2) << j.b
                                    ebx_2 = &ebx_2[1]
                                    edx += eax_78
                                    var_30 = ebx_2
                                    j += 8
                                    var_3c = edx
                                    j_11 -= 1
                                
                                uint32_t edx_31 = edx u>> 1
                                edi_1[2] = edx & 1
                                
                                switch (edx_31 & 3)
                                    case 0
                                        edi_1[1] = 0x3f41
                                    label_6a11b6:
                                        arg1 = var_38
                                        edx = edx_31 u>> 2
                                        j -= 3
                                        var_3c = edx
                                    case 1
                                        edi_1[0x14] = 0x772668
                                        edi_1[0x16] = 9
                                        edi_1[0x15] = 0x7725e8
                                        edi_1[0x17] = 5
                                        edi_1[1] = 0x3f47
                                        
                                        if (arg2 != 6)
                                            goto label_6a11b6
                                        
                                        j -= 3
                                        var_3c = edx_31 u>> 2
                                        goto label_6a0ea4
                                    case 2
                                        arg1 = var_38
                                        edx = edx_31 u>> 2
                                        j -= 3
                                        edi_1[1] = 0x3f44
                                        var_3c = edx
                                    case 3
                                        arg1 = var_38
                                        edx = edx_31 u>> 2
                                        j -= 3
                                        var_3c = edx
                                        arg1[6] = "invalid block type"
                                        edi_1[1] = 0x3f51
                            else
                                edi_1[1] = 0x3f4e
                                int32_t ecx_33 = j & 7
                                edx u>>= ecx_33.b
                                j -= ecx_33
                                var_3c = edx
                                arg1 = var_38
                        case 0xd
                            int32_t ecx_36 = j & 7
                            edx u>>= ecx_36.b
                            j -= ecx_36
                            var_3c = edx
                            
                            while (j u< 0x20)
                                if (j_11 == 0)
                                    goto label_6a0ea4
                                
                                uint32_t eax_84 = zx.d(*ebx_2) << j.b
                                ebx_2 = &ebx_2[1]
                                edx += eax_84
                                var_30 = ebx_2
                                j += 8
                                var_3c = edx
                                j_11 -= 1
                            
                            uint32_t ecx_38 = zx.d(edx.w)
                            
                            if (ecx_38 == not.d(edx) u>> 0x10)
                                edx = 0
                                edi_1[0x11] = ecx_38
                                j = 0
                                var_3c = 0
                                edi_1[1] = 0x3f42
                                
                                if (arg2 == 6)
                                    edi_2 = 0
                                    goto label_6a0ea8
                                
                                arg1 = var_38
                            label_6a12b6:
                                edi_1[1] = 0x3f43
                            label_6a12bd:
                                void* j_10 = edi_1[0x11]
                                
                                if (j_10 == 0)
                                    edi_1[1] = 0x3f3f
                                else
                                    if (j_10 u> j_11)
                                        j_10 = j_11
                                    
                                    if (j_10 u> j_5)
                                        j_10 = j_5
                                    
                                    if (j_10 == 0)
                                        goto label_6a0ea4
                                    
                                    sub_700660(var_24, ebx_2, j_10)
                                    j_5 -= j_10
                                    ebx_2 += j_10
                                    var_24 += j_10
                                    j_11 -= j_10
                                    edi_1[0x11] -= j_10
                                    var_30 = ebx_2
                                    edx = var_3c
                                    arg1 = var_38
                            else
                                arg1 = var_38
                                arg1[6] = "invalid stored block lengths"
                                edi_1[1] = 0x3f51
                        case 0xe
                            goto label_6a12b6
                        case 0xf
                            goto label_6a12bd
                        case 0x10
                            if (j u< 0xe)
                                do
                                    if (j_11 == 0)
                                        goto label_6a0ea4
                                    
                                    uint32_t eax_92 = zx.d(*ebx_2) << j.b
                                    ebx_2 = &ebx_2[1]
                                    edx += eax_92
                                    var_30 = ebx_2
                                    j += 8
                                    var_3c = edx
                                    j_11 -= 1
                                while (j u< 0xe)
                                
                                arg1 = var_38
                            
                            j -= 0xe
                            uint32_t edx_33 = edx u>> 5
                            edi_1[0x19] = (edx & 0x1f) + 0x101
                            uint32_t edx_34 = edx_33 u>> 5
                            edi_1[0x1a] = (edx_33 & 0x1f) + 1
                            edx = edx_34 u>> 4
                            var_3c = edx
                            bool cond:0_1 = edi_1[0x19] u> 0x11e
                            edi_1[0x18] = (edx_34 & 0xf) + 4
                            
                            if (cond:0_1 || edi_1[0x1a] u> 0x1e)
                                arg1[6] = "too many length or distance symbols"
                                edi_1[1] = 0x3f51
                            else
                                edi_1[0x1b] = 0
                                edi_1[1] = 0x3f45
                            label_6a13ba:
                                
                                while (edi_1[0x1b] u< edi_1[0x18])
                                    while (j u< 3)
                                        if (j_11 == 0)
                                            goto label_6a0ea4
                                        
                                        uint32_t eax_104 = zx.d(*ebx_2) << j.b
                                        ebx_2 = &ebx_2[1]
                                        edx += eax_104
                                        var_30 = ebx_2
                                        j += 8
                                        var_3c = edx
                                        j_11 -= 1
                                    
                                    int16_t ecx_42 = edx.w & 7
                                    edx u>>= 3
                                    j -= 3
                                    var_3c = edx
                                    *(edi_1 + (zx.d(*((edi_1[0x1b] << 1) + &data_7725c0)) << 1)
                                        + 0x74) = ecx_42
                                    edi_1[0x1b] += 1
                                
                                while (edi_1[0x1b] u< 0x13)
                                    *(edi_1 + (zx.d(*((edi_1[0x1b] << 1) + &data_7725c0)) << 1)
                                        + 0x74) = 0
                                    edi_1[0x1b] += 1
                                
                                edi_1[0x16] = 7
                                edi_1[0x14] = &edi_1[0x14d]
                                edi_1[0x1c] = &edi_1[0x14d]
                                int32_t result_1 = sub_6a20e0(&edi_1[0xbd], &edi_1[0x1d], 0, 0x13, 
                                    &edi_1[0x1c], &edi_1[0x16], &edi_1[0xbd])
                                result = result_1
                                
                                if (result_1 == 0)
                                    edi_1[0x1b] = 0
                                    edi_1[1] = 0x3f46
                                label_6a14b8:
                                    
                                    if (edi_1[0x1b] u< edi_1[0x1a] + edi_1[0x19])
                                        edi_2 = var_3c
                                        int32_t* ecx_54
                                        int32_t j_1
                                        
                                        do
                                            int32_t eax_117 = *(var_20_1[0x14]
                                                + ((((1 << (*ebx_1).b) - 1) & edi_2) << 2))
                                            int32_t var_10_5 = eax_117
                                            
                                            while (zx.d((eax_117 u>> 8).b) u> j)
                                                if (j_11 == 0)
                                                    goto label_6a0ea8
                                                
                                                edi_2 += zx.d(*ebx_2) << j.b
                                                ebx_2 = &ebx_2[1]
                                                j += 8
                                                j_11 -= 1
                                                var_3c = edi_2
                                                var_30 = ebx_2
                                                eax_117 = *(var_20_1[0x14]
                                                    + ((((1 << (*ebx_1).b) - 1) & edi_2) << 2))
                                                var_10_5 = eax_117
                                            
                                            uint16_t edx_44 = (eax_117 u>> 0x10).w
                                            
                                            if (edx_44 u>= 0x10)
                                                int32_t k_2
                                                int16_t var_10_7
                                                int32_t k_3
                                                
                                                if (edx_44 != 0x10)
                                                    uint32_t edx_48 = var_3c
                                                    uint32_t ecx_61 = zx.d(eax_117:1.b)
                                                    int32_t eax_134
                                                    
                                                    if (var_10_5:2.w != 0x11)
                                                        while (j u< ecx_61 + 7)
                                                            if (j_11 == 0)
                                                                goto label_6a0ea4
                                                            
                                                            uint32_t eax_136 = zx.d(*ebx_2) << j.b
                                                            ebx_2 = &ebx_2[1]
                                                            edx_48 += eax_136
                                                            var_30 = ebx_2
                                                            j += 8
                                                            var_3c = edx_48
                                                            j_11 -= 1
                                                        
                                                        uint32_t edx_50 = edx_48 u>> ecx_61.b
                                                        edx = edx_50 u>> 7
                                                        k_2 = (edx_50 & 0x7f) + 0xb
                                                        eax_134 = 0xfffffff9
                                                    else
                                                        while (j u< ecx_61 + 3)
                                                            if (j_11 == 0)
                                                                goto label_6a0ea4
                                                            
                                                            uint32_t eax_130 = zx.d(*ebx_2) << j.b
                                                            ebx_2 = &ebx_2[1]
                                                            edx_48 += eax_130
                                                            var_30 = ebx_2
                                                            j += 8
                                                            var_3c = edx_48
                                                            j_11 -= 1
                                                        
                                                        uint32_t edx_49 = edx_48 u>> ecx_61.b
                                                        edx = edx_49 u>> 3
                                                        k_2 = (edx_49 & 7) + 3
                                                        eax_134 = 0xfffffffd
                                                    
                                                    edi_1 = var_20_1
                                                    j += eax_134 - ecx_61
                                                    var_10_7 = 0
                                                    k_3 = k_2
                                                else
                                                    while (j u< zx.d((eax_117 u>> 8).b) + 2)
                                                        if (j_11 == 0)
                                                            goto label_6a0ea8
                                                        
                                                        uint32_t edx_46 = zx.d(*ebx_2) << j.b
                                                        ebx_2 = &ebx_2[1]
                                                        edi_2 += edx_46
                                                        var_30 = ebx_2
                                                        j += 8
                                                        var_3c = edi_2
                                                        j_11 -= 1
                                                    
                                                    edi_1 = var_20_1
                                                    uint32_t ecx_60 = zx.d(eax_117:1.b)
                                                    edx = var_3c u>> ecx_60.b
                                                    j -= ecx_60
                                                    int32_t eax_125 = edi_1[0x1b]
                                                    var_3c = edx
                                                    
                                                    if (eax_125 == 0)
                                                        arg1 = var_38
                                                        arg1[6] = "invalid bit length repeat"
                                                        edi_1[1] = 0x3f51
                                                        goto label_6a130e
                                                    
                                                    var_10_7 = *(edi_1 + (eax_125 << 1) + 0x72)
                                                    int32_t eax_128 = edx & 3
                                                    edx u>>= 2
                                                    k_3 = eax_128 + 3
                                                    j -= 2
                                                    k_2 = k_3
                                                
                                                var_3c = edx
                                                
                                                if (edi_1[0x1b] + k_3 u> edi_1[0x1a] + edi_1[0x19])
                                                    arg1 = var_38
                                                    arg1[6] = "invalid bit length repeat"
                                                    edi_1[1] = 0x3f51
                                                    goto label_6a130e
                                                
                                                int32_t k_1 = k_2
                                                int32_t j_3
                                                int32_t k
                                                
                                                do
                                                    *(edi_1 + (edi_1[0x1b] << 1) + 0x74) = var_10_7
                                                    edi_1[0x1b] += 1
                                                    j_3 = edi_1[0x1b]
                                                    int32_t j_6 = j_3
                                                    k = k_1
                                                    k_1 -= 1
                                                while (k != 1)
                                                edi_2 = var_3c
                                                j_1 = j_3
                                                ecx_54 = var_20_1
                                            else
                                                uint32_t ecx_53 = zx.d((eax_117 u>> 8).b)
                                                edi_2 u>>= ecx_53.b
                                                j -= ecx_53
                                                ecx_54 = var_20_1
                                                var_3c = edi_2
                                                *(ecx_54 + (ecx_54[0x1b] << 1) + 0x74) = edx_44
                                                ecx_54[0x1b] += 1
                                                j_1 = ecx_54[0x1b]
                                        while (j_1 u< ecx_54[0x1a] + ecx_54[0x19])
                                        edi_1 = var_20_1
                                    
                                    if (edi_1[1] == 0x3f51)
                                        edx = var_3c
                                        arg1 = var_38
                                    else if (edi_1[0x9d].w != 0)
                                        edi_1[0x16] = 9
                                        edi_1[0x14] = &edi_1[0x14d]
                                        edi_1[0x1c] = &edi_1[0x14d]
                                        int32_t result_2 = sub_6a20e0(&edi_1[0xbd], &edi_1[0x1d], 
                                            1, edi_1[0x19], &edi_1[0x1c], &edi_1[0x16], 
                                            &edi_1[0xbd])
                                        result = result_2
                                        
                                        if (result_2 == 0)
                                            edi_1[0x15] = edi_1[0x1c]
                                            edi_1[0x17] = 6
                                            int32_t eax_151 = edi_1[0x19] + 0x3a
                                            int32_t result_3 = sub_6a20e0(eax_151, 
                                                edi_1 + (eax_151 << 1), 2, edi_1[0x1a], 
                                                &edi_1[0x1c], &edi_1[0x17], &edi_1[0xbd])
                                            result = result_3
                                            
                                            if (result_3 == 0)
                                                edx_24 = arg2
                                                edi_1[1] = 0x3f47
                                                
                                                if (edx_24 == 6)
                                                    edi_2 = var_3c
                                                    goto label_6a0eac
                                                
                                                edx = var_3c
                                                arg1 = var_38
                                            label_6a181d:
                                                edi_1[1] = 0x3f48
                                            label_6a1824:
                                                
                                                if (j_11 u< 6 || j_5 u< 0x102)
                                                    int32_t eax_156 = edi_1[0x14]
                                                    int32_t ecx_69 = edi_1[0x14]
                                                    int32_t eax_159 =
                                                        ((1 << (edi_1[0x16]).b) - 1) & edx
                                                    edi_1[0x6f2] = 0
                                                    int32_t eax_160 = *(ecx_69 + (eax_159 << 2))
                                                    
                                                    while (zx.d((eax_160 u>> 8).b) u> j)
                                                        if (j_11 == 0)
                                                            goto label_6a0ea4
                                                        
                                                        uint32_t eax_162 = zx.d(*ebx_2) << j.b
                                                        ebx_2 = &ebx_2[1]
                                                        j += 8
                                                        var_3c = edx + eax_162
                                                        j_11 -= 1
                                                        var_30 = ebx_2
                                                        eax_160 = *(edi_1[0x14] + ((((1
                                                            << (edi_1[0x16]).b) - 1) & var_3c) << 2))
                                                        edx = var_3c
                                                    
                                                    if (eax_160.b != 0 && (eax_160.b & 0xf0) == 0)
                                                        uint8_t ecx_79 = (eax_160 u>> 8).b
                                                        int32_t edx_61 = eax_160
                                                        eax_160 = *(eax_156 + ((((((1
                                                            << (eax_160.b + ecx_79)) - 1) & var_3c)
                                                            u>> ecx_79) + (eax_160 u>> 0x10)) << 2))
                                                        
                                                        if (zx.d((eax_160 u>> 8).b) + zx.d(ecx_79)
                                                                u> j)
                                                            uint32_t ebx_13
                                                            
                                                            do
                                                                if (j_11 == 0)
                                                                    goto label_6a0ea4
                                                                
                                                                char ecx_88 = j.b
                                                                j += 8
                                                                j_11 -= 1
                                                                var_3c += zx.d(*var_30) << ecx_88
                                                                var_30 = &var_30[1]
                                                                ebx_13 = zx.d(edx_61:1.b)
                                                                eax_160 = *(var_20_1[0x14] + ((((((1
                                                                    << (edx_61.b + ebx_13.b)) - 1)
                                                                    & var_3c) u>> ebx_13.b)
                                                                    + zx.d(edx_61:2.w)) << 2))
                                                            while (zx.d((eax_160 u>> 8).b) + ebx_13
                                                                u> j)
                                                        
                                                        edi_1 = var_20_1
                                                        ebx_2 = var_30
                                                        uint32_t ecx_96 = zx.d(edx_61:1.b)
                                                        edx = var_3c u>> ecx_96.b
                                                        j -= ecx_96
                                                        edi_1[0x6f2] = ecx_96
                                                    
                                                    uint32_t ecx_99 = zx.d((eax_160 u>> 8).b)
                                                    edi_1[0x6f2] += ecx_99
                                                    j -= ecx_99
                                                    edx u>>= ecx_99.b
                                                    var_3c = edx
                                                    edi_1[0x11] = eax_160 u>> 0x10
                                                    
                                                    if (eax_160.b == 0)
                                                        edi_1[1] = 0x3f4d
                                                        arg1 = var_38
                                                    else if ((eax_160.b & 0x20) == 0)
                                                        if ((eax_160.b & 0x40) == 0)
                                                            edi_1[1] = 0x3f49
                                                            edi_1[0x13] = zx.d(eax_160.b) & 0xf
                                                        label_6a1a44:
                                                            int32_t ecx_103 = edi_1[0x13]
                                                            
                                                            if (ecx_103 != 0)
                                                                while (j u< ecx_103)
                                                                    if (j_11 == 0)
                                                                        goto label_6a0ea4
                                                                    
                                                                    uint32_t eax_173 = zx.d(*ebx_2) << j.b
                                                                    ebx_2 = &ebx_2[1]
                                                                    ecx_103 = edi_1[0x13]
                                                                    edx += eax_173
                                                                    j += 8
                                                                    var_3c = edx
                                                                    j_11 -= 1
                                                                    var_30 = ebx_2
                                                                
                                                                j -= ecx_103
                                                                int32_t eax_176 =
                                                                    ((1 << ecx_103.b) - 1) & edx
                                                                edx u>>= ecx_103.b
                                                                edi_1[0x11] += eax_176
                                                                edi_1[0x6f2] += ecx_103
                                                                var_3c = edx
                                                            
                                                            edi_1[0x6f3] = edi_1[0x11]
                                                            edi_1[1] = 0x3f4a
                                                            goto label_6a1ab7
                                                        
                                                        arg1 = var_38
                                                        arg1[6] = "invalid literal/length code"
                                                        edi_1[1] = 0x3f51
                                                    else
                                                        edi_1[0x6f2] = 0xffffffff
                                                        edi_1[1] = 0x3f3f
                                                        arg1 = var_38
                                                else
                                                    arg1[3] = var_24
                                                    arg1[4] = j_5
                                                    *arg1 = ebx_2
                                                    arg1[1] = j_11
                                                    edi_1[0xf] = edx
                                                    edi_1[0x10] = j
                                                    sub_6a0140(arg1, j_8)
                                                    arg1 = var_38
                                                    edx = edi_1[0xf]
                                                    j = edi_1[0x10]
                                                    var_3c = edx
                                                    ebx_2 = *arg1
                                                    j_11 = arg1[1]
                                                    var_24 = arg1[3]
                                                    j_5 = arg1[4]
                                                    var_30 = ebx_2
                                                    
                                                    if (edi_1[1] == 0x3f3f)
                                                        edi_1[0x6f2] = 0xffffffff
                                            else
                                                arg1 = var_38
                                                edx = var_3c
                                                arg1[6] = "invalid distances set"
                                                edi_1[1] = 0x3f51
                                        else
                                            arg1 = var_38
                                            edx = var_3c
                                            arg1[6] = "invalid literal/lengths set"
                                            edi_1[1] = 0x3f51
                                    else
                                        arg1 = var_38
                                        edx = var_3c
                                        arg1[6] = "invalid code -- missing end-of-block"
                                        edi_1[1] = 0x3f51
                                else
                                    arg1 = var_38
                                    edx = var_3c
                                    arg1[6] = "invalid code lengths set"
                                    edi_1[1] = 0x3f51
                        case 0x11
                            goto label_6a13ba
                        case 0x12
                            goto label_6a14b8
                        case 0x13
                            goto label_6a181d
                        case 0x14
                            goto label_6a1824
                        case 0x15
                            goto label_6a1a44
                        case 0x16
                        label_6a1ab7:
                            int32_t eax_182 =
                                *(edi_1[0x15] + ((((1 << (edi_1[0x17]).b) - 1) & edx) << 2))
                            
                            while (zx.d((eax_182 u>> 8).b) u> j)
                                if (j_11 == 0)
                                    goto label_6a0ea4
                                
                                uint32_t eax_184 = zx.d(*ebx_2) << j.b
                                ebx_2 = &ebx_2[1]
                                j += 8
                                var_3c = edx + eax_184
                                j_11 -= 1
                                var_30 = ebx_2
                                eax_182 =
                                    *(edi_1[0x15] + ((((1 << (edi_1[0x17]).b) - 1) & var_3c) << 2))
                                edx = var_3c
                            
                            if ((eax_182.b & 0xf0) == 0)
                                uint8_t ecx_115 = (eax_182 u>> 8).b
                                int32_t edx_67 = eax_182
                                eax_182 = *(edi_1[0x15] + ((((((1 << (eax_182.b + ecx_115)) - 1)
                                    & var_3c) u>> ecx_115) + (eax_182 u>> 0x10)) << 2))
                                
                                if (zx.d((eax_182 u>> 8).b) + zx.d(ecx_115) u> j)
                                    uint32_t ebx_21
                                    
                                    do
                                        if (j_11 == 0)
                                            goto label_6a0ea4
                                        
                                        char ecx_124 = j.b
                                        j += 8
                                        j_11 -= 1
                                        var_3c += zx.d(*var_30) << ecx_124
                                        var_30 = &var_30[1]
                                        ebx_21 = zx.d(edx_67:1.b)
                                        eax_182 = *(var_20_1[0x15] + ((((((1
                                            << (edx_67.b + ebx_21.b)) - 1) & var_3c) u>> ebx_21.b)
                                            + zx.d(edx_67:2.w)) << 2))
                                    while (zx.d((eax_182 u>> 8).b) + ebx_21 u> j)
                                
                                edi_1 = var_20_1
                                uint32_t ecx_132 = zx.d(edx_67:1.b)
                                j -= ecx_132
                                edx = var_3c u>> ecx_132.b
                                edi_1[0x6f2] += ecx_132
                            
                            ebx_2 = var_30
                            uint32_t ecx_135 = zx.d((eax_182 u>> 8).b)
                            edi_1[0x6f2] += ecx_135
                            j -= ecx_135
                            edx u>>= ecx_135.b
                            var_3c = edx
                            
                            if ((eax_182.b & 0x40) == 0)
                                edi_1[1] = 0x3f4b
                                edi_1[0x12] = eax_182 u>> 0x10
                                edi_1[0x13] = zx.d(eax_182.b) & 0xf
                            label_6a1c19:
                                int32_t ecx_139 = edi_1[0x13]
                                
                                if (ecx_139 != 0)
                                    while (j u< ecx_139)
                                        if (j_11 == 0)
                                            goto label_6a0ea4
                                        
                                        uint32_t eax_195 = zx.d(*ebx_2) << j.b
                                        ebx_2 = &ebx_2[1]
                                        ecx_139 = edi_1[0x13]
                                        edx += eax_195
                                        j += 8
                                        var_3c = edx
                                        j_11 -= 1
                                        var_30 = ebx_2
                                    
                                    j -= ecx_139
                                    int32_t eax_198 = ((1 << ecx_139.b) - 1) & edx
                                    edx u>>= ecx_139.b
                                    edi_1[0x12] += eax_198
                                    edi_1[0x6f2] += ecx_139
                                    var_3c = edx
                                
                                edi_1[1] = 0x3f4c
                                goto label_6a1c6f
                            
                            arg1 = var_38
                            arg1[6] = "invalid distance code"
                            edi_1[1] = 0x3f51
                        case 0x17
                            goto label_6a1c19
                        case 0x18
                        label_6a1c6f:
                            
                            if (j_5 == 0)
                                goto label_6a0ea4
                            
                            void* eax_200 = j_8 - j_5
                            int32_t ecx_141 = edi_1[0x12]
                            void* var_10_12
                            void* j_7
                            void* j_4
                            
                            if (ecx_141 u<= eax_200)
                                var_10_12 = var_24 - ecx_141
                                j_7 = edi_1[0x11]
                            label_6a1ce0:
                                j_4 = j_7
                            label_6a1ce8:
                                
                                if (j_4 u> j_5)
                                    j_4 = j_5
                                
                                j_5 -= j_4
                                edi_1[0x11] = j_7 - j_4
                                char* edi_21 = var_24
                                char* ebx_25 = var_10_12 - edi_21
                                void* j_2
                                
                                do
                                    void* eax_209
                                    eax_209.b = *(ebx_25 + edi_21)
                                    *edi_21 = eax_209.b
                                    edi_21 = &edi_21[1]
                                    j_2 = j_4
                                    j_4 -= 1
                                while (j_2 != 1)
                                ebx_2 = var_30
                                var_24 = edi_21
                                edi_1 = var_20_1
                                
                                if (edi_1[0x11] == j_4)
                                    edi_1[1] = 0x3f48
                                
                                arg1 = var_38
                            else
                                j_4 = ecx_141 - eax_200
                                
                                if (j_4 u<= edi_1[0xc] || edi_1[0x6f1] == 0)
                                    int32_t eax_201 = edi_1[0xd]
                                    void* eax_204
                                    
                                    if (j_4 u<= eax_201)
                                        eax_204 = edi_1[0xe] - j_4 + edi_1[0xd]
                                    else
                                        j_4 -= eax_201
                                        eax_204 = edi_1[0xe] + edi_1[0xb] - j_4
                                    
                                    var_10_12 = eax_204
                                    j_7 = edi_1[0x11]
                                    
                                    if (j_4 u<= j_7)
                                        goto label_6a1ce8
                                    
                                    goto label_6a1ce0
                                
                                arg1 = var_38
                                arg1[6] = "invalid distance too far back"
                                edi_1[1] = 0x3f51
                        case 0x19
                            if (j_5 == 0)
                                goto label_6a0ea4
                            
                            char* ebx_26 = var_24
                            i.b = edi_1[0x11].b
                            var_24 = &var_24[1]
                            j_5 -= 1
                            *ebx_26 = i.b
                            ebx_2 = var_30
                            edi_1[1] = 0x3f48
                        case 0x1a
                            if (edi_1[3] == 0)
                                goto label_6a1e3c
                            
                            if (j u< 0x20)
                                do
                                    if (j_11 == 0)
                                        goto label_6a0ea4
                                    
                                    uint32_t eax_211 = zx.d(*ebx_2) << j.b
                                    ebx_2 = &ebx_2[1]
                                    edx += eax_211
                                    var_30 = ebx_2
                                    j += 8
                                    var_3c = edx
                                    j_11 -= 1
                                while (j u< 0x20)
                                
                                arg1 = var_38
                            
                            void* eax_213 = j_8 - j_5
                            arg1[5] += eax_213
                            edi_1[8] += eax_213
                            
                            if ((edi_1[3].b & 4) != 0 && eax_213 != 0)
                                int32_t eax_214
                                
                                if (edi_1[5] == 0)
                                    eax_214 =
                                        sub_69d9c0(eax_213, var_24 - eax_213, edi_1[7], eax_213)
                                    arg1 = var_38
                                else if (var_24 != eax_213)
                                    eax_214 =
                                        sub_69dc30(eax_213, var_24 - eax_213, edi_1[7], eax_213)
                                    arg1 = var_38
                                else
                                    eax_214 = 0
                                
                                edx = var_3c
                                edi_1[7] = eax_214
                                arg1[0xc] = eax_214
                            
                            j_8 = j_5
                            uint32_t ecx_145
                            
                            if ((edi_1[3].b & 4) != 0)
                                ecx_145 = edx
                                
                                if (edi_1[5] == 0)
                                    ecx_145 = (((ecx_145 & 0xff00) + (edx << 0x10)) << 8)
                                        + (edx u>> 8 & 0xff00) + (edx u>> 0x18)
                            
                            if ((edi_1[3].b & 4) == 0 || ecx_145 == edi_1[7])
                                edx = 0
                                j = 0
                                var_3c = 0
                            label_6a1e3c:
                                edi_1[1] = 0x3f4f
                            label_6a1e43:
                                
                                if (edi_1[3] == 0 || edi_1[5] == 0)
                                    goto label_6a1ecd
                                
                                while (j u< 0x20)
                                    if (j_11 == 0)
                                        goto label_6a0ea4
                                    
                                    uint32_t eax_224 = zx.d(*ebx_2) << j.b
                                    ebx_2 = &ebx_2[1]
                                    edx += eax_224
                                    var_30 = ebx_2
                                    j += 8
                                    var_3c = edx
                                    j_11 -= 1
                                
                                if (edx == edi_1[8])
                                    j = 0
                                    var_3c = 0
                                label_6a1ecd:
                                    edi_1[1] = 0x3f50
                                label_6a1ed4:
                                    result = 1
                                label_6a0ea4:
                                    edi_2 = var_3c
                                label_6a0ea8:
                                    edx_24 = arg2
                                    goto label_6a0eac
                                
                                arg1 = var_38
                                arg1[6] = "incorrect length check"
                                edi_1[1] = 0x3f51
                            else
                                arg1 = var_38
                                arg1[6] = "incorrect data check"
                                edi_1[1] = 0x3f51
                        case 0x1b
                            goto label_6a1e43
                        case 0x1c
                            goto label_6a1ed4
                        case 0x1d
                            result = 0xfffffffd
                            goto label_6a0ea4
                        case 0x1e
                            return 0xfffffffc
                    
                label_6a130e:
                    i = edi_1[1] - 0x3f34
                while (i u<= 0x1e)

return 0xfffffffe
