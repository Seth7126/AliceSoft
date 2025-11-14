// 函数: sub_621850
// 地址: 0x621850
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (arg1 != 0)
    int32_t** esi_1 = arg1[7]
    
    if (esi_1 != 0 && arg2 u<= 5)
        if (arg1[3] != 0 && (*arg1 != 0 || arg1[1] == 0))
            int32_t eax_1 = esi_1[1]
            
            if (eax_1 != 0x29a || arg2 == 4)
                if (arg1[4] == 0)
                    arg1[6] = "buffer error"
                    return 0xfffffffb
                
                int32_t ecx = esi_1[0xa]
                *esi_1 = arg1
                esi_1[0xa] = arg2
                
                if (eax_1 == 0x2a)
                    if (esi_1[6] != 2)
                        int32_t edx_11
                        
                        if (esi_1[0x22] s< 2)
                            edx_11 = esi_1[0x21]
                        
                        int32_t eax_38
                        
                        if (esi_1[0x22] s>= 2 || edx_11 s< 2)
                            eax_38 = 0
                        else if (edx_11 s>= 6)
                            int32_t eax_39
                            eax_39.b = edx_11 != 6
                            eax_38 = eax_39 + 2
                        else
                            eax_38 = 1
                        
                        int32_t ecx_25 = (((esi_1[0xc] - 8) << 0xc) + 0x800) | eax_38 << 6
                        
                        if (esi_1[0x1b] != 0)
                            ecx_25 |= 0x20
                        
                        esi_1[1] = 0x71
                        sub_6217d0(esi_1, (ecx_25 u/ 0x1f + 1) * 0x1f)
                        
                        if (esi_1[0x1b] != 0)
                            sub_6217d0(esi_1, zx.d(*(arg1 + 0x32)))
                            sub_6217d0(esi_1, zx.d(arg1[0xc].w))
                        
                        arg1[0xc] = 1
                    else
                        arg1[0xc] = 0
                        esi_1[5][esi_1[2]] = 0x1f
                        esi_1[5] += 1
                        esi_1[5][esi_1[2]] = 0x8b
                        esi_1[5] += 1
                        esi_1[5][esi_1[2]] = 8
                        esi_1[5] += 1
                        void* edx = esi_1[7]
                        char* ebx_1 = esi_1[5]
                        
                        if (edx != 0)
                            int32_t ecx_10 = *(edx + 0x24)
                            int32_t eax_14 = *(edx + 0x2c)
                            char ecx_11 = (neg.d(ecx_10)).b
                            char eax_15 = (neg.d(eax_14)).b
                            int32_t eax_16 = *(edx + 0x1c)
                            char eax_17 = (neg.d(eax_16)).b
                            int32_t eax_18 = *(edx + 0x10)
                            char eax_19 = (neg.d(eax_18)).b
                            ecx_11 = (sbb.b(ecx_11, ecx_11, ecx_10 != 0) & 0x10)
                                + (sbb.b(eax_15, eax_15, eax_14 != 0) & 2)
                                + (sbb.b(eax_17, eax_17, eax_16 != 0) & 8)
                                + (sbb.b(eax_19, eax_19, eax_18 != 0) & 4)
                            ebx_1[esi_1[2]] = ecx_11 + (*edx != 0)
                            esi_1[5] += 1
                            esi_1[5][esi_1[2]] = esi_1[7][1].b
                            esi_1[5] += 1
                            esi_1[5][esi_1[2]] = *(esi_1[7] + 5)
                            esi_1[5] += 1
                            esi_1[5][esi_1[2]] = *(esi_1[7] + 6)
                            esi_1[5] += 1
                            esi_1[5][esi_1[2]] = *(esi_1[7] + 7)
                            esi_1[5] += 1
                            int32_t eax_29 = esi_1[0x21]
                            char ecx_16
                            
                            if (eax_29 == 9)
                                ecx_16 = eax_29.b - 7
                            else if (esi_1[0x22] s>= 2 || eax_29 s< 2)
                                ecx_16 = 4
                            else
                                ecx_16 = 0
                            
                            esi_1[5][esi_1[2]] = ecx_16
                            esi_1[5] += 1
                            void* eax_31
                            eax_31.b = esi_1[7][3].b
                            esi_1[5][esi_1[2]] = eax_31.b
                            void* eax_32 = esi_1[7]
                            esi_1[5] += 1
                            char* edx_8 = esi_1[5]
                            
                            if (*(eax_32 + 0x10) != 0)
                                edx_8[esi_1[2]] = *(eax_32 + 0x14)
                                esi_1[5] += 1
                                esi_1[5][esi_1[2]] = *(esi_1[7] + 0x15)
                                esi_1[5] += 1
                                edx_8 = esi_1[5]
                            
                            if (esi_1[7][0xb] != 0)
                                int32_t eax_37 = esi_1[2]
                                
                                if (eax_37 != 0)
                                    eax_37 = sub_621230(eax_37, eax_37, arg1[0xc], edx_8)
                                
                                arg1[0xc] = eax_37
                            
                            esi_1[8] = 0
                            esi_1[1] = 0x45
                        else
                            ebx_1[esi_1[2]] = edx.b
                            esi_1[5] += 1
                            esi_1[5][esi_1[2]] = edx.b
                            esi_1[5] += 1
                            esi_1[5][esi_1[2]] = edx.b
                            esi_1[5] += 1
                            esi_1[5][esi_1[2]] = edx.b
                            esi_1[5] += 1
                            esi_1[5][esi_1[2]] = edx.b
                            esi_1[5] += 1
                            int32_t eax_11 = esi_1[0x21]
                            char ecx_8
                            
                            if (eax_11 == 9)
                                ecx_8 = eax_11.b - 7
                            else if (esi_1[0x22] s>= 2 || eax_11 s< 2)
                                ecx_8 = 4
                            else
                                ecx_8 = 0
                            
                            esi_1[5][esi_1[2]] = ecx_8
                            esi_1[5] += 1
                            esi_1[5][esi_1[2]] = 0xb
                            esi_1[5] += 1
                            esi_1[1] = 0x71
                
                if (esi_1[1] == 0x45)
                    void* eax_42 = esi_1[7]
                    
                    if (*(eax_42 + 0x10) == 0)
                        esi_1[1] = 0x49
                    else
                        char* ebp_1 = esi_1[5]
                        
                        if (esi_1[8] u< zx.d(*(eax_42 + 0x14)))
                            do
                                char* ebx_3 = esi_1[5]
                                
                                if (ebx_3 == esi_1[3])
                                    void* eax_44 = esi_1[7]
                                    
                                    if (*(eax_44 + 0x2c) != 0 && ebx_3 u> ebp_1)
                                        void* edx_18 = esi_1[2]
                                        int32_t eax_45
                                        
                                        if (edx_18 != neg.d(ebp_1))
                                            eax_45 = sub_621230(eax_44, edx_18 + ebp_1, arg1[0xc], 
                                                ebx_3 - ebp_1)
                                        else
                                            eax_45 = 0
                                        
                                        arg1[0xc] = eax_45
                                    
                                    sub_621800(arg1)
                                    ebx_3 = esi_1[5]
                                    ebp_1 = ebx_3
                                    
                                    if (ebx_3 == esi_1[3])
                                        break
                                
                                int32_t eax_47
                                eax_47.b = esi_1[7][4][esi_1[8]]
                                ebx_3[esi_1[2]] = eax_47.b
                                esi_1[5] += 1
                                esi_1[8] += 1
                            while (esi_1[8] u< zx.d(esi_1[7][5].w))
                        
                        if (esi_1[7][0xb] != 0)
                            int32_t eax_51 = esi_1[5]
                            
                            if (eax_51 u> ebp_1)
                                void* edx_21 = esi_1[2]
                                void* eax_52 = eax_51 - ebp_1
                                int32_t eax_53
                                
                                if (edx_21 != neg.d(ebp_1))
                                    eax_53 = sub_621230(eax_52, edx_21 + ebp_1, arg1[0xc], eax_52)
                                else
                                    eax_53 = 0
                                
                                arg1[0xc] = eax_53
                        
                        if (esi_1[8] == esi_1[7][5])
                            esi_1[8] = 0
                            esi_1[1] = 0x49
                
                if (esi_1[1] == 0x49)
                    if (esi_1[7][7] == 0)
                        esi_1[1] = 0x5b
                    else
                        char* ebx_4 = esi_1[5]
                        uint32_t i
                        
                        do
                            char* edx_25 = esi_1[5]
                            
                            if (edx_25 == esi_1[3])
                                if (esi_1[7][0xb] != 0 && edx_25 u> ebx_4)
                                    int32_t eax_57 = esi_1[2]
                                    int32_t eax_58 = &ebx_4[eax_57]
                                    
                                    if (eax_57 != neg.d(ebx_4))
                                        eax_58 =
                                            sub_621230(eax_58, eax_58, arg1[0xc], edx_25 - ebx_4)
                                    
                                    arg1[0xc] = eax_58
                                
                                sub_621800(arg1)
                                edx_25 = esi_1[5]
                                ebx_4 = edx_25
                                
                                if (edx_25 == esi_1[3])
                                    i = 1
                                    break
                            
                            int32_t ecx_41 = esi_1[8]
                            i = zx.d(*(esi_1[7][7] + ecx_41))
                            esi_1[8] = ecx_41 + 1
                            uint32_t i_2 = i
                            edx_25[esi_1[2]] = i.b
                            esi_1[5] += 1
                        while (i != 0)
                        
                        if (esi_1[7][0xb] != 0)
                            int32_t eax_64 = esi_1[5]
                            
                            if (eax_64 u> ebx_4)
                                void* edx_26 = esi_1[2]
                                void* eax_65 = eax_64 - ebx_4
                                int32_t eax_66
                                
                                if (edx_26 != neg.d(ebx_4))
                                    eax_66 = sub_621230(eax_65, edx_26 + ebx_4, arg1[0xc], eax_65)
                                else
                                    eax_66 = 0
                                
                                arg1[0xc] = eax_66
                        
                        if (i == 0)
                            esi_1[8] = i
                            esi_1[1] = 0x5b
                
                if (esi_1[1] == 0x5b)
                    uint32_t i_1
                    
                    if (esi_1[7][9] != 0)
                        char* ebx_5 = esi_1[5]
                        
                        do
                            char* edx_30 = esi_1[5]
                            
                            if (edx_30 == esi_1[3])
                                if (esi_1[7][0xb] != 0 && edx_30 u> ebx_5)
                                    int32_t eax_69 = esi_1[2]
                                    int32_t eax_70 = &ebx_5[eax_69]
                                    
                                    if (eax_69 != neg.d(ebx_5))
                                        eax_70 =
                                            sub_621230(eax_70, eax_70, arg1[0xc], edx_30 - ebx_5)
                                    
                                    arg1[0xc] = eax_70
                                
                                sub_621800(arg1)
                                edx_30 = esi_1[5]
                                ebx_5 = edx_30
                                
                                if (edx_30 == esi_1[3])
                                    i_1 = 1
                                    break
                            
                            int32_t ecx_46 = esi_1[8]
                            i_1 = zx.d(*(esi_1[7][9] + ecx_46))
                            esi_1[8] = ecx_46 + 1
                            uint32_t i_3 = i_1
                            edx_30[esi_1[2]] = i_1.b
                            esi_1[5] += 1
                        while (i_1 != 0)
                        
                        if (esi_1[7][0xb] != 0)
                            int32_t eax_76 = esi_1[5]
                            
                            if (eax_76 u> ebx_5)
                                void* edx_31 = esi_1[2]
                                void* eax_77 = eax_76 - ebx_5
                                int32_t eax_78
                                
                                if (edx_31 != neg.d(ebx_5))
                                    eax_78 = sub_621230(eax_77, edx_31 + ebx_5, arg1[0xc], eax_77)
                                else
                                    eax_78 = 0
                                
                                arg1[0xc] = eax_78
                    
                    if (esi_1[7][9] == 0 || i_1 == 0)
                        esi_1[1] = 0x67
                
                if (esi_1[1] == 0x67)
                    if (esi_1[7][0xb] == 0)
                        esi_1[1] = 0x71
                    else
                        if (esi_1[5] + 2 u> esi_1[3])
                            sub_621800(arg1)
                        
                        char* edx_33 = esi_1[5]
                        
                        if (&edx_33[2] u<= esi_1[3])
                            edx_33[esi_1[2]] = arg1[0xc].b
                            esi_1[5] += 1
                            esi_1[5][esi_1[2]] = *(arg1 + 0x31)
                            esi_1[5] += 1
                            arg1[0xc] = 0
                            esi_1[1] = 0x71
                
                uint32_t ebx_6
                
                if (esi_1[5] == 0)
                    ebx_6 = arg2
                    
                    if (arg1[1] == 0)
                        int32_t eax_86 = 0
                        
                        if (ecx s> 4)
                            eax_86 = 9
                        
                        int32_t ecx_54 = 0
                        
                        if (ebx_6 s> 4)
                            ecx_54 = 9
                        
                        if (ebx_6 * 2 - ecx_54 s<= ecx * 2 - eax_86 && ebx_6 != 4)
                            arg1[6] = "buffer error"
                            return 0xfffffffb
                    
                    goto label_621e7d
                
                sub_621800(arg1)
                
                if (arg1[4] != 0)
                    ebx_6 = arg2
                label_621e7d:
                    int32_t eax_90 = esi_1[1]
                    
                    if (eax_90 == 0x29a)
                        if (arg1[1] != 0)
                            arg1[6] = "buffer error"
                            return 0xfffffffb
                        
                        if (esi_1[0x1d] != 0 || (ebx_6 != 0 && eax_90 != 0x29a))
                            goto label_621ec1
                        
                        goto label_621f9f
                    
                    if (arg1[1] != 0 || esi_1[0x1d] != 0 || (ebx_6 != 0 && eax_90 != 0x29a))
                    label_621ec1:
                        int32_t eax_92 = esi_1[0x22]
                        int32_t eax_93
                        
                        if (eax_92 == 2)
                            eax_93 = sub_623280(esi_1, ebx_6)
                        else if (eax_92 != 3)
                            eax_93 = (&data_6ef318)[esi_1[0x21] * 3](esi_1, ebx_6)
                        else
                            eax_93 = sub_622fb0(esi_1, ebx_6)
                        
                        if (eax_93 == 2 || eax_93 == 3)
                            esi_1[1] = 0x29a
                        
                        if (eax_93 != 0 && eax_93 != 2)
                            if (eax_93 != 1)
                                goto label_621f9f
                            
                            if (ebx_6 == eax_93)
                                sub_626780(esi_1)
                            else if (ebx_6 != 5)
                                sub_6266d0(eax_93.w, nullptr, esi_1, 0, 0)
                                
                                if (ebx_6 == 3)
                                    *(esi_1[0x11] + (esi_1[0x13] << 1) - 2) = 0
                                    _memset(esi_1[0x11], 0, (esi_1[0x13] << 1) + 0xfffffffe)
                                    
                                    if (esi_1[0x1d] == 0)
                                        esi_1[0x1b] = 0
                                        esi_1[0x17] = 0
                                        esi_1[0x5ad] = 0
                            
                            sub_621800(arg1)
                            
                            if (arg1[4] != 0)
                                goto label_621f9f
                            
                            esi_1[0xa] = 0xffffffff
                        else if (arg1[4] == 0)
                            esi_1[0xa] = 0xffffffff
                    else
                    label_621f9f:
                        
                        if (ebx_6 == 4)
                            int32_t eax_100 = esi_1[6]
                            
                            if (eax_100 s<= 0)
                                return ebx_6 - 3
                            
                            if (eax_100 != 2)
                                sub_6217d0(esi_1, zx.d(*(arg1 + 0x32)))
                                sub_6217d0(esi_1, zx.d(arg1[0xc].w))
                            else
                                esi_1[5][esi_1[2]] = arg1[0xc].b
                                esi_1[5] += 1
                                esi_1[5][esi_1[2]] = *(arg1 + 0x31)
                                esi_1[5] += 1
                                esi_1[5][esi_1[2]] = *(arg1 + 0x32)
                                esi_1[5] += 1
                                esi_1[5][esi_1[2]] = *(arg1 + 0x33)
                                esi_1[5] += 1
                                esi_1[5][esi_1[2]] = arg1[2].b
                                esi_1[5] += 1
                                esi_1[5][esi_1[2]] = *(arg1 + 9)
                                esi_1[5] += 1
                                esi_1[5][esi_1[2]] = *(arg1 + 0xa)
                                esi_1[5] += 1
                                esi_1[5][esi_1[2]] = *(arg1 + 0xb)
                                esi_1[5] += 1
                            
                            sub_621800(arg1)
                            int32_t eax_110 = esi_1[6]
                            
                            if (eax_110 s> 0)
                                esi_1[6] = neg.d(eax_110)
                            
                            int32_t result
                            result.b = esi_1[5] == 0
                            return result
                else
                    esi_1[0xa] = 0xffffffff
                
                return 0
        
        arg1[6] = "stream error"

return 0xfffffffe
