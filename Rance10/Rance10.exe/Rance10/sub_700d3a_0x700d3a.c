// 函数: sub_700d3a
// 地址: 0x700d3a
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t i = arg3

if (i == 0)
    return nullptr

uint32_t eax_227
uint32_t ecx_143

if (i == 1)
    ecx_143 = zx.d(*arg1)
    eax_227 = zx.d(*arg2)
else
    void* eax_222
    
    if (i == 2)
        uint32_t ecx_149 = zx.d(*arg1)
        uint32_t eax_233 = zx.d(*arg2)
        
        if (ecx_149 != eax_233)
            int32_t eax_234
            eax_234.b = ecx_149 - eax_233 s> 0
            eax_222 = (eax_234 << 1) + 0xffffffff
        
        if (ecx_149 != eax_233 && eax_222 != 0)
            return eax_222
        
        ecx_143 = zx.d(arg1[1])
        eax_227 = zx.d(arg2[1])
    else if (i == 3)
        uint32_t ecx_145 = zx.d(*arg1)
        uint32_t eax_229 = zx.d(*arg2)
        
        if (ecx_145 != eax_229)
            int32_t eax_230
            eax_230.b = ecx_145 - eax_229 s> 0
            eax_222 = (eax_230 << 1) + 0xffffffff
        
        if (ecx_145 != eax_229 && eax_222 != 0)
            return eax_222
        
        uint32_t ecx_147 = zx.d(arg1[1])
        uint32_t eax_231 = zx.d(arg2[1])
        
        if (ecx_147 != eax_231)
            int32_t eax_232
            eax_232.b = ecx_147 - eax_231 s> 0
            eax_222 = (eax_232 << 1) + 0xffffffff
        
        if (ecx_147 != eax_231 && eax_222 != 0)
            return eax_222
        
        ecx_143 = zx.d(arg1[2])
        eax_227 = zx.d(arg2[2])
    else
        int32_t* edx_1 = arg2
        
        if (i != 4)
            int32_t* esi_1 = arg1
            uint32_t eax_5
            void* ecx_2
            
            while (i u>= 0x20)
                int32_t eax_6 = *esi_1
                
                if (eax_6 == *edx_1)
                    ecx_2 = nullptr
                else
                    uint32_t edi_1 = zx.d(eax_6.b)
                    uint32_t eax_7 = zx.d(*edx_1)
                    
                    if (edi_1 != eax_7)
                        int32_t ecx_1
                        ecx_1.b = edi_1 - eax_7 s> 0
                        ecx_2 = (ecx_1 << 1) + 0xffffffff
                        
                        if (ecx_2 != 0)
                            return ecx_2
                    
                    uint32_t edi_3 = zx.d(*(esi_1 + 1))
                    uint32_t eax_8 = zx.d(*(edx_1 + 1))
                    
                    if (edi_3 != eax_8)
                        int32_t ecx_3
                        ecx_3.b = edi_3 - eax_8 s> 0
                        ecx_2 = (ecx_3 << 1) + 0xffffffff
                        
                        if (ecx_2 != 0)
                            return ecx_2
                    
                    uint32_t edi_5 = zx.d(*(esi_1 + 2))
                    uint32_t eax_9 = zx.d(*(edx_1 + 2))
                    
                    if (edi_5 != eax_9)
                        int32_t ecx_4
                        ecx_4.b = edi_5 - eax_9 s> 0
                        ecx_2 = (ecx_4 << 1) + 0xffffffff
                        
                        if (ecx_2 != 0)
                            return ecx_2
                    
                    uint32_t ecx_5 = zx.d(*(esi_1 + 3))
                    uint32_t eax_10 = zx.d(*(edx_1 + 3))
                    ecx_2 = ecx_5 - eax_10
                    
                    if (ecx_5 != eax_10)
                        int32_t eax_11
                        eax_11.b = ecx_2 s> 0
                        ecx_2 = (eax_11 << 1) + 0xffffffff
                
                if (ecx_2 != 0)
                    return ecx_2
                
                int32_t eax_12 = esi_1[1]
                
                if (eax_12 == edx_1[1])
                    ecx_2 = nullptr
                else
                    uint32_t edi_7 = zx.d(eax_12.b)
                    uint32_t eax_13 = zx.d(edx_1[1].b)
                    
                    if (edi_7 != eax_13)
                        ecx_2.b = edi_7 - eax_13 s> 0
                        ecx_2 = (ecx_2 << 1) + 0xffffffff
                        
                        if (ecx_2 != 0)
                            return ecx_2
                    
                    uint32_t edi_9 = zx.d(*(esi_1 + 5))
                    uint32_t eax_14 = zx.d(*(edx_1 + 5))
                    
                    if (edi_9 != eax_14)
                        int32_t ecx_6
                        ecx_6.b = edi_9 - eax_14 s> 0
                        ecx_2 = (ecx_6 << 1) + 0xffffffff
                        
                        if (ecx_2 != 0)
                            return ecx_2
                    
                    uint32_t edi_11 = zx.d(*(esi_1 + 6))
                    uint32_t eax_15 = zx.d(*(edx_1 + 6))
                    
                    if (edi_11 != eax_15)
                        int32_t ecx_7
                        ecx_7.b = edi_11 - eax_15 s> 0
                        ecx_2 = (ecx_7 << 1) + 0xffffffff
                        
                        if (ecx_2 != 0)
                            return ecx_2
                    
                    uint32_t ecx_8 = zx.d(*(esi_1 + 7))
                    uint32_t eax_16 = zx.d(*(edx_1 + 7))
                    ecx_2 = ecx_8 - eax_16
                    
                    if (ecx_8 != eax_16)
                        int32_t eax_17
                        eax_17.b = ecx_2 s> 0
                        ecx_2 = (eax_17 << 1) + 0xffffffff
                
                if (ecx_2 != 0)
                    return ecx_2
                
                int32_t eax_18 = esi_1[2]
                
                if (eax_18 == edx_1[2])
                    ecx_2 = nullptr
                else
                    uint32_t edi_13 = zx.d(eax_18.b)
                    uint32_t eax_19 = zx.d(edx_1[2].b)
                    
                    if (edi_13 != eax_19)
                        ecx_2.b = edi_13 - eax_19 s> 0
                        ecx_2 = (ecx_2 << 1) + 0xffffffff
                        
                        if (ecx_2 != 0)
                            return ecx_2
                    
                    uint32_t edi_15 = zx.d(*(esi_1 + 9))
                    uint32_t eax_20 = zx.d(*(edx_1 + 9))
                    
                    if (edi_15 != eax_20)
                        int32_t ecx_9
                        ecx_9.b = edi_15 - eax_20 s> 0
                        ecx_2 = (ecx_9 << 1) + 0xffffffff
                        
                        if (ecx_2 != 0)
                            return ecx_2
                    
                    uint32_t edi_17 = zx.d(*(esi_1 + 0xa))
                    uint32_t eax_21 = zx.d(*(edx_1 + 0xa))
                    
                    if (edi_17 != eax_21)
                        int32_t ecx_10
                        ecx_10.b = edi_17 - eax_21 s> 0
                        ecx_2 = (ecx_10 << 1) + 0xffffffff
                        
                        if (ecx_2 != 0)
                            return ecx_2
                    
                    uint32_t ecx_11 = zx.d(*(esi_1 + 0xb))
                    uint32_t eax_22 = zx.d(*(edx_1 + 0xb))
                    ecx_2 = ecx_11 - eax_22
                    
                    if (ecx_11 != eax_22)
                        int32_t eax_23
                        eax_23.b = ecx_2 s> 0
                        ecx_2 = (eax_23 << 1) + 0xffffffff
                
                if (ecx_2 != 0)
                    return ecx_2
                
                int32_t eax_24 = esi_1[3]
                
                if (eax_24 == edx_1[3])
                    ecx_2 = nullptr
                else
                    uint32_t edi_19 = zx.d(eax_24.b)
                    uint32_t eax_25 = zx.d(edx_1[3].b)
                    
                    if (edi_19 != eax_25)
                        ecx_2.b = edi_19 - eax_25 s> 0
                        ecx_2 = (ecx_2 << 1) + 0xffffffff
                        
                        if (ecx_2 != 0)
                            return ecx_2
                    
                    uint32_t edi_21 = zx.d(*(esi_1 + 0xd))
                    uint32_t eax_26 = zx.d(*(edx_1 + 0xd))
                    
                    if (edi_21 != eax_26)
                        int32_t ecx_12
                        ecx_12.b = edi_21 - eax_26 s> 0
                        ecx_2 = (ecx_12 << 1) + 0xffffffff
                        
                        if (ecx_2 != 0)
                            return ecx_2
                    
                    uint32_t edi_23 = zx.d(*(esi_1 + 0xe))
                    uint32_t eax_27 = zx.d(*(edx_1 + 0xe))
                    
                    if (edi_23 != eax_27)
                        int32_t ecx_13
                        ecx_13.b = edi_23 - eax_27 s> 0
                        ecx_2 = (ecx_13 << 1) + 0xffffffff
                        
                        if (ecx_2 != 0)
                            return ecx_2
                    
                    uint32_t ecx_14 = zx.d(*(esi_1 + 0xf))
                    uint32_t eax_28 = zx.d(*(edx_1 + 0xf))
                    ecx_2 = ecx_14 - eax_28
                    
                    if (ecx_14 != eax_28)
                        int32_t eax_29
                        eax_29.b = ecx_2 s> 0
                        ecx_2 = (eax_29 << 1) + 0xffffffff
                
                if (ecx_2 != 0)
                    return ecx_2
                
                if (esi_1[4] == edx_1[4])
                    ecx_2 = nullptr
                else
                    uint32_t eax_31 = zx.d(edx_1[4].b)
                    uint32_t edi_25 = zx.d(esi_1[4].b)
                    
                    if (edi_25 != eax_31)
                        ecx_2.b = edi_25 - eax_31 s> 0
                        ecx_2 = (ecx_2 << 1) + 0xffffffff
                        
                        if (ecx_2 != 0)
                            return ecx_2
                    
                    uint32_t edi_27 = zx.d(*(esi_1 + 0x11))
                    uint32_t eax_32 = zx.d(*(edx_1 + 0x11))
                    
                    if (edi_27 != eax_32)
                        int32_t ecx_15
                        ecx_15.b = edi_27 - eax_32 s> 0
                        ecx_2 = (ecx_15 << 1) + 0xffffffff
                        
                        if (ecx_2 != 0)
                            return ecx_2
                    
                    uint32_t edi_29 = zx.d(*(esi_1 + 0x12))
                    uint32_t eax_33 = zx.d(*(edx_1 + 0x12))
                    
                    if (edi_29 != eax_33)
                        int32_t ecx_16
                        ecx_16.b = edi_29 - eax_33 s> 0
                        ecx_2 = (ecx_16 << 1) + 0xffffffff
                        
                        if (ecx_2 != 0)
                            return ecx_2
                    
                    uint32_t ecx_17 = zx.d(*(esi_1 + 0x13))
                    uint32_t eax_34 = zx.d(*(edx_1 + 0x13))
                    ecx_2 = ecx_17 - eax_34
                    
                    if (ecx_17 != eax_34)
                        int32_t eax_35
                        eax_35.b = ecx_2 s> 0
                        ecx_2 = (eax_35 << 1) + 0xffffffff
                
                if (ecx_2 != 0)
                    return ecx_2
                
                int32_t eax_36 = esi_1[5]
                
                if (eax_36 == edx_1[5])
                    ecx_2 = nullptr
                else
                    uint32_t edi_31 = zx.d(eax_36.b)
                    uint32_t eax_37 = zx.d(edx_1[5].b)
                    
                    if (edi_31 != eax_37)
                        ecx_2.b = edi_31 - eax_37 s> 0
                        ecx_2 = (ecx_2 << 1) + 0xffffffff
                        
                        if (ecx_2 != 0)
                            return ecx_2
                    
                    uint32_t edi_33 = zx.d(*(esi_1 + 0x15))
                    uint32_t eax_38 = zx.d(*(edx_1 + 0x15))
                    
                    if (edi_33 != eax_38)
                        int32_t ecx_18
                        ecx_18.b = edi_33 - eax_38 s> 0
                        ecx_2 = (ecx_18 << 1) + 0xffffffff
                        
                        if (ecx_2 != 0)
                            return ecx_2
                    
                    uint32_t edi_35 = zx.d(*(esi_1 + 0x16))
                    uint32_t eax_39 = zx.d(*(edx_1 + 0x16))
                    
                    if (edi_35 != eax_39)
                        int32_t ecx_19
                        ecx_19.b = edi_35 - eax_39 s> 0
                        ecx_2 = (ecx_19 << 1) + 0xffffffff
                        
                        if (ecx_2 != 0)
                            return ecx_2
                    
                    uint32_t ecx_20 = zx.d(*(esi_1 + 0x17))
                    uint32_t eax_40 = zx.d(*(edx_1 + 0x17))
                    ecx_2 = ecx_20 - eax_40
                    
                    if (ecx_20 != eax_40)
                        int32_t eax_41
                        eax_41.b = ecx_2 s> 0
                        ecx_2 = (eax_41 << 1) + 0xffffffff
                
                if (ecx_2 != 0)
                    return ecx_2
                
                int32_t eax_42 = esi_1[6]
                
                if (eax_42 == edx_1[6])
                    ecx_2 = nullptr
                else
                    uint32_t edi_37 = zx.d(eax_42.b)
                    uint32_t eax_43 = zx.d(edx_1[6].b)
                    
                    if (edi_37 != eax_43)
                        ecx_2.b = edi_37 - eax_43 s> 0
                        ecx_2 = (ecx_2 << 1) + 0xffffffff
                        
                        if (ecx_2 != 0)
                            return ecx_2
                    
                    uint32_t edi_39 = zx.d(*(esi_1 + 0x19))
                    uint32_t eax_44 = zx.d(*(edx_1 + 0x19))
                    
                    if (edi_39 != eax_44)
                        int32_t ecx_21
                        ecx_21.b = edi_39 - eax_44 s> 0
                        ecx_2 = (ecx_21 << 1) + 0xffffffff
                        
                        if (ecx_2 != 0)
                            return ecx_2
                    
                    uint32_t edi_41 = zx.d(*(esi_1 + 0x1a))
                    uint32_t eax_45 = zx.d(*(edx_1 + 0x1a))
                    
                    if (edi_41 != eax_45)
                        int32_t ecx_22
                        ecx_22.b = edi_41 - eax_45 s> 0
                        ecx_2 = (ecx_22 << 1) + 0xffffffff
                        
                        if (ecx_2 != 0)
                            return ecx_2
                    
                    uint32_t ecx_23 = zx.d(*(esi_1 + 0x1b))
                    uint32_t eax_46 = zx.d(*(edx_1 + 0x1b))
                    ecx_2 = ecx_23 - eax_46
                    
                    if (ecx_23 != eax_46)
                        int32_t eax_47
                        eax_47.b = ecx_2 s> 0
                        ecx_2 = (eax_47 << 1) + 0xffffffff
                
                if (ecx_2 != 0)
                    return ecx_2
                
                eax_5 = esi_1[7]
                
                if (eax_5 == edx_1[7])
                    ecx_2 = nullptr
                else
                    uint32_t edi_43 = zx.d(eax_5.b)
                    uint32_t eax_48 = zx.d(edx_1[7].b)
                    
                    if (edi_43 != eax_48)
                        ecx_2.b = edi_43 - eax_48 s> 0
                        ecx_2 = (ecx_2 << 1) + 0xffffffff
                        
                        if (ecx_2 != 0)
                            return ecx_2
                    
                    uint32_t edi_45 = zx.d(*(esi_1 + 0x1d))
                    uint32_t eax_49 = zx.d(*(edx_1 + 0x1d))
                    
                    if (edi_45 != eax_49)
                        int32_t ecx_24
                        ecx_24.b = edi_45 - eax_49 s> 0
                        ecx_2 = (ecx_24 << 1) + 0xffffffff
                        
                        if (ecx_2 != 0)
                            return ecx_2
                    
                    uint32_t edi_47 = zx.d(*(esi_1 + 0x1e))
                    uint32_t eax_50 = zx.d(*(edx_1 + 0x1e))
                    
                    if (edi_47 != eax_50)
                        int32_t ecx_25
                        ecx_25.b = edi_47 - eax_50 s> 0
                        ecx_2 = (ecx_25 << 1) + 0xffffffff
                        
                        if (ecx_2 != 0)
                            return ecx_2
                    
                    uint32_t ecx_26 = zx.d(*(esi_1 + 0x1f))
                    eax_5 = zx.d(*(edx_1 + 0x1f))
                    ecx_2 = ecx_26 - eax_5
                    
                    if (ecx_26 != eax_5)
                        eax_5.b = ecx_2 s> 0
                        ecx_2 = (eax_5 << 1) + 0xffffffff
                
                if (ecx_2 != 0)
                    return ecx_2
                
                i -= 0x20
                esi_1 = &esi_1[8]
                edx_1 = &edx_1[8]
            
            void* esi_2 = esi_1 + i
            void* edx_2 = edx_1 + i
            
            if (i u> 0x1f)
                return nullptr
            
            switch (i)
                case 0
                    return nullptr
                case 1
                label_701a60:
                    uint32_t eax_135 = zx.d(*(edx_2 - 1))
                    uint32_t ecx_83 = zx.d(*(esi_2 - 1))
                    ecx_2 = ecx_83 - eax_135
                    
                    if (ecx_83 != eax_135)
                        int32_t eax_136
                        eax_136.b = ecx_2 s> 0
                        return (eax_136 << 1) + 0xffffffff
                case 2
                label_701ea5:
                    eax_5.w = *(esi_2 - 2)
                    
                    if (eax_5.w == *(edx_2 - 2))
                        return nullptr
                    
                label_7022fd:
                    uint32_t eax_219 = zx.d(*(edx_2 - 2))
                    uint32_t edi_219 = zx.d(*(esi_2 - 2))
                    
                    if (edi_219 == eax_219)
                        goto label_701a60
                    
                    int32_t ecx_141
                    ecx_141.b = edi_219 - eax_219 s> 0
                    ecx_2 = (ecx_141 << 1) + 0xffffffff
                    goto label_701a58
                case 3
                label_7022db:
                    uint32_t edi_217 = zx.d(*(esi_2 - 3))
                    uint32_t eax_218 = zx.d(*(edx_2 - 3))
                    
                    if (edi_217 == eax_218)
                        goto label_7022fd
                    
                    int32_t ecx_140
                    ecx_140.b = edi_217 - eax_218 s> 0
                    ecx_2 = (ecx_140 << 1) + 0xffffffff
                    
                    if (ecx_2 == 0)
                        goto label_7022fd
                case 4
                label_7015c1:
                    int32_t eax_87 = *(esi_2 - 4)
                    
                    if (eax_87 == *(edx_2 - 4))
                        ecx_2 = nullptr
                    label_701640:
                        
                        if (ecx_2 == 0)
                            return nullptr
                    else
                        uint32_t edi_85 = zx.d(eax_87.b)
                        uint32_t eax_88 = zx.d(*(edx_2 - 4))
                        
                        if (edi_85 != eax_88)
                            int32_t ecx_51
                            ecx_51.b = edi_85 - eax_88 s> 0
                            ecx_2 = (ecx_51 << 1) + 0xffffffff
                        
                        if (edi_85 == eax_88 || ecx_2 == 0)
                            uint32_t edi_87 = zx.d(*(esi_2 - 3))
                            uint32_t eax_89 = zx.d(*(edx_2 - 3))
                            
                            if (edi_87 != eax_89)
                                int32_t ecx_52
                                ecx_52.b = edi_87 - eax_89 s> 0
                                ecx_2 = (ecx_52 << 1) + 0xffffffff
                            
                            if (edi_87 == eax_89 || ecx_2 == 0)
                                uint32_t edi_89 = zx.d(*(esi_2 - 2))
                                uint32_t eax_90 = zx.d(*(edx_2 - 2))
                                
                                if (edi_89 != eax_90)
                                    int32_t ecx_53
                                    ecx_53.b = edi_89 - eax_90 s> 0
                                    ecx_2 = (ecx_53 << 1) + 0xffffffff
                                
                                if (edi_89 == eax_90 || ecx_2 == 0)
                                    uint32_t ecx_54 = zx.d(*(esi_2 - 1))
                                    uint32_t eax_91 = zx.d(*(edx_2 - 1))
                                    ecx_2 = ecx_54 - eax_91
                                    
                                    if (ecx_54 != eax_91)
                                        int32_t eax_92
                                        eax_92.b = ecx_2 s> 0
                                        ecx_2 = (eax_92 << 1) + 0xffffffff
                                    
                                    goto label_701640
                case 5
                label_7019c9:
                    int32_t eax_129 = *(esi_2 - 5)
                    
                    if (eax_129 == *(edx_2 - 5))
                        ecx_2 = nullptr
                    label_701a58:
                        
                        if (ecx_2 == 0)
                            goto label_701a60
                    else
                        uint32_t edi_127 = zx.d(eax_129.b)
                        uint32_t eax_130 = zx.d(*(edx_2 - 5))
                        
                        if (edi_127 != eax_130)
                            int32_t ecx_79
                            ecx_79.b = edi_127 - eax_130 s> 0
                            ecx_2 = (ecx_79 << 1) + 0xffffffff
                        
                        if (edi_127 == eax_130 || ecx_2 == 0)
                            uint32_t edi_129 = zx.d(*(esi_2 - 4))
                            uint32_t eax_131 = zx.d(*(edx_2 - 4))
                            
                            if (edi_129 != eax_131)
                                int32_t ecx_80
                                ecx_80.b = edi_129 - eax_131 s> 0
                                ecx_2 = (ecx_80 << 1) + 0xffffffff
                            
                            if (edi_129 == eax_131 || ecx_2 == 0)
                                uint32_t edi_131 = zx.d(*(esi_2 - 3))
                                uint32_t eax_132 = zx.d(*(edx_2 - 3))
                                
                                if (edi_131 != eax_132)
                                    int32_t ecx_81
                                    ecx_81.b = edi_131 - eax_132 s> 0
                                    ecx_2 = (ecx_81 << 1) + 0xffffffff
                                
                                if (edi_131 == eax_132 || ecx_2 == 0)
                                    uint32_t ecx_82 = zx.d(*(esi_2 - 2))
                                    uint32_t eax_133 = zx.d(*(edx_2 - 2))
                                    ecx_2 = ecx_82 - eax_133
                                    
                                    if (ecx_82 != eax_133)
                                        int32_t eax_134
                                        eax_134.b = ecx_2 s> 0
                                        ecx_2 = (eax_134 << 1) + 0xffffffff
                                    
                                    goto label_701a58
                case 6
                label_701e0e:
                    eax_5 = *(esi_2 - 6)
                    
                    if (eax_5 == *(edx_2 - 6))
                        ecx_2 = nullptr
                    label_701e9d:
                        
                        if (ecx_2 == 0)
                            goto label_701ea5
                    else
                        uint32_t edi_169 = zx.d(eax_5.b)
                        uint32_t eax_173 = zx.d(*(edx_2 - 6))
                        
                        if (edi_169 != eax_173)
                            int32_t ecx_108
                            ecx_108.b = edi_169 - eax_173 s> 0
                            ecx_2 = (ecx_108 << 1) + 0xffffffff
                        
                        if (edi_169 == eax_173 || ecx_2 == 0)
                            uint32_t edi_171 = zx.d(*(esi_2 - 5))
                            uint32_t eax_174 = zx.d(*(edx_2 - 5))
                            
                            if (edi_171 != eax_174)
                                int32_t ecx_109
                                ecx_109.b = edi_171 - eax_174 s> 0
                                ecx_2 = (ecx_109 << 1) + 0xffffffff
                            
                            if (edi_171 == eax_174 || ecx_2 == 0)
                                uint32_t edi_173 = zx.d(*(esi_2 - 4))
                                uint32_t eax_175 = zx.d(*(edx_2 - 4))
                                
                                if (edi_173 != eax_175)
                                    int32_t ecx_110
                                    ecx_110.b = edi_173 - eax_175 s> 0
                                    ecx_2 = (ecx_110 << 1) + 0xffffffff
                                
                                if (edi_173 == eax_175 || ecx_2 == 0)
                                    uint32_t ecx_111 = zx.d(*(esi_2 - 3))
                                    eax_5 = zx.d(*(edx_2 - 3))
                                    ecx_2 = ecx_111 - eax_5
                                    
                                    if (ecx_111 != eax_5)
                                        eax_5.b = ecx_2 s> 0
                                        ecx_2 = (eax_5 << 1) + 0xffffffff
                                    
                                    goto label_701e9d
                case 7
                label_702244:
                    int32_t eax_212 = *(esi_2 - 7)
                    
                    if (eax_212 == *(edx_2 - 7))
                        ecx_2 = nullptr
                    label_7022d3:
                        
                        if (ecx_2 == 0)
                            goto label_7022db
                    else
                        uint32_t edi_211 = zx.d(eax_212.b)
                        uint32_t eax_213 = zx.d(*(edx_2 - 7))
                        
                        if (edi_211 != eax_213)
                            int32_t ecx_136
                            ecx_136.b = edi_211 - eax_213 s> 0
                            ecx_2 = (ecx_136 << 1) + 0xffffffff
                        
                        if (edi_211 == eax_213 || ecx_2 == 0)
                            uint32_t edi_213 = zx.d(*(esi_2 - 6))
                            uint32_t eax_214 = zx.d(*(edx_2 - 6))
                            
                            if (edi_213 != eax_214)
                                int32_t ecx_137
                                ecx_137.b = edi_213 - eax_214 s> 0
                                ecx_2 = (ecx_137 << 1) + 0xffffffff
                            
                            if (edi_213 == eax_214 || ecx_2 == 0)
                                uint32_t edi_215 = zx.d(*(esi_2 - 5))
                                uint32_t eax_215 = zx.d(*(edx_2 - 5))
                                
                                if (edi_215 != eax_215)
                                    int32_t ecx_138
                                    ecx_138.b = edi_215 - eax_215 s> 0
                                    ecx_2 = (ecx_138 << 1) + 0xffffffff
                                
                                if (edi_215 == eax_215 || ecx_2 == 0)
                                    uint32_t ecx_139 = zx.d(*(esi_2 - 4))
                                    uint32_t eax_216 = zx.d(*(edx_2 - 4))
                                    ecx_2 = ecx_139 - eax_216
                                    
                                    if (ecx_139 != eax_216)
                                        int32_t eax_217
                                        eax_217.b = ecx_2 s> 0
                                        ecx_2 = (eax_217 << 1) + 0xffffffff
                                    
                                    goto label_7022d3
                case 8
                label_70152a:
                    int32_t eax_81 = *(esi_2 - 8)
                    
                    if (eax_81 == *(edx_2 - 8))
                        ecx_2 = nullptr
                    label_7015b9:
                        
                        if (ecx_2 == 0)
                            goto label_7015c1
                    else
                        uint32_t edi_79 = zx.d(eax_81.b)
                        uint32_t eax_82 = zx.d(*(edx_2 - 8))
                        
                        if (edi_79 != eax_82)
                            int32_t ecx_47
                            ecx_47.b = edi_79 - eax_82 s> 0
                            ecx_2 = (ecx_47 << 1) + 0xffffffff
                        
                        if (edi_79 == eax_82 || ecx_2 == 0)
                            uint32_t edi_81 = zx.d(*(esi_2 - 7))
                            uint32_t eax_83 = zx.d(*(edx_2 - 7))
                            
                            if (edi_81 != eax_83)
                                int32_t ecx_48
                                ecx_48.b = edi_81 - eax_83 s> 0
                                ecx_2 = (ecx_48 << 1) + 0xffffffff
                            
                            if (edi_81 == eax_83 || ecx_2 == 0)
                                uint32_t edi_83 = zx.d(*(esi_2 - 6))
                                uint32_t eax_84 = zx.d(*(edx_2 - 6))
                                
                                if (edi_83 != eax_84)
                                    int32_t ecx_49
                                    ecx_49.b = edi_83 - eax_84 s> 0
                                    ecx_2 = (ecx_49 << 1) + 0xffffffff
                                
                                if (edi_83 == eax_84 || ecx_2 == 0)
                                    uint32_t ecx_50 = zx.d(*(esi_2 - 5))
                                    uint32_t eax_85 = zx.d(*(edx_2 - 5))
                                    ecx_2 = ecx_50 - eax_85
                                    
                                    if (ecx_50 != eax_85)
                                        int32_t eax_86
                                        eax_86.b = ecx_2 s> 0
                                        ecx_2 = (eax_86 << 1) + 0xffffffff
                                    
                                    goto label_7015b9
                case 9
                label_701934:
                    
                    if (*(esi_2 - 9) == *(edx_2 - 9))
                        ecx_2 = nullptr
                    label_7019c1:
                        
                        if (ecx_2 == 0)
                            goto label_7019c9
                    else
                        uint32_t eax_124 = zx.d(*(edx_2 - 9))
                        uint32_t edi_121 = zx.d(*(esi_2 - 9))
                        
                        if (edi_121 != eax_124)
                            int32_t ecx_75
                            ecx_75.b = edi_121 - eax_124 s> 0
                            ecx_2 = (ecx_75 << 1) + 0xffffffff
                        
                        if (edi_121 == eax_124 || ecx_2 == 0)
                            uint32_t edi_123 = zx.d(*(esi_2 - 8))
                            uint32_t eax_125 = zx.d(*(edx_2 - 8))
                            
                            if (edi_123 != eax_125)
                                int32_t ecx_76
                                ecx_76.b = edi_123 - eax_125 s> 0
                                ecx_2 = (ecx_76 << 1) + 0xffffffff
                            
                            if (edi_123 == eax_125 || ecx_2 == 0)
                                uint32_t edi_125 = zx.d(*(esi_2 - 7))
                                uint32_t eax_126 = zx.d(*(edx_2 - 7))
                                
                                if (edi_125 != eax_126)
                                    int32_t ecx_77
                                    ecx_77.b = edi_125 - eax_126 s> 0
                                    ecx_2 = (ecx_77 << 1) + 0xffffffff
                                
                                if (edi_125 == eax_126 || ecx_2 == 0)
                                    uint32_t ecx_78 = zx.d(*(esi_2 - 6))
                                    uint32_t eax_127 = zx.d(*(edx_2 - 6))
                                    ecx_2 = ecx_78 - eax_127
                                    
                                    if (ecx_78 != eax_127)
                                        int32_t eax_128
                                        eax_128.b = ecx_2 s> 0
                                        ecx_2 = (eax_128 << 1) + 0xffffffff
                                    
                                    goto label_7019c1
                case 0xa
                label_701d79:
                    
                    if (*(esi_2 - 0xa) == *(edx_2 - 0xa))
                        ecx_2 = nullptr
                    label_701e06:
                        
                        if (ecx_2 == 0)
                            goto label_701e0e
                    else
                        uint32_t eax_168 = zx.d(*(edx_2 - 0xa))
                        uint32_t edi_163 = zx.d(*(esi_2 - 0xa))
                        
                        if (edi_163 != eax_168)
                            int32_t ecx_104
                            ecx_104.b = edi_163 - eax_168 s> 0
                            ecx_2 = (ecx_104 << 1) + 0xffffffff
                        
                        if (edi_163 == eax_168 || ecx_2 == 0)
                            uint32_t eax_169 = zx.d(*(edx_2 - 9))
                            uint32_t edi_165 = zx.d(*(esi_2 - 9))
                            
                            if (edi_165 != eax_169)
                                int32_t ecx_105
                                ecx_105.b = edi_165 - eax_169 s> 0
                                ecx_2 = (ecx_105 << 1) + 0xffffffff
                            
                            if (edi_165 == eax_169 || ecx_2 == 0)
                                uint32_t eax_170 = zx.d(*(edx_2 - 8))
                                uint32_t edi_167 = zx.d(*(esi_2 - 8))
                                
                                if (edi_167 != eax_170)
                                    int32_t ecx_106
                                    ecx_106.b = edi_167 - eax_170 s> 0
                                    ecx_2 = (ecx_106 << 1) + 0xffffffff
                                
                                if (edi_167 == eax_170 || ecx_2 == 0)
                                    uint32_t eax_171 = zx.d(*(edx_2 - 7))
                                    uint32_t ecx_107 = zx.d(*(esi_2 - 7))
                                    ecx_2 = ecx_107 - eax_171
                                    
                                    if (ecx_107 != eax_171)
                                        int32_t eax_172
                                        eax_172.b = ecx_2 s> 0
                                        ecx_2 = (eax_172 << 1) + 0xffffffff
                                    
                                    goto label_701e06
                case 0xb
                label_7021ad:
                    int32_t eax_206 = *(esi_2 - 0xb)
                    
                    if (eax_206 == *(edx_2 - 0xb))
                        ecx_2 = nullptr
                    label_70223c:
                        
                        if (ecx_2 == 0)
                            goto label_702244
                    else
                        uint32_t edi_205 = zx.d(eax_206.b)
                        uint32_t eax_207 = zx.d(*(edx_2 - 0xb))
                        
                        if (edi_205 != eax_207)
                            int32_t ecx_132
                            ecx_132.b = edi_205 - eax_207 s> 0
                            ecx_2 = (ecx_132 << 1) + 0xffffffff
                        
                        if (edi_205 == eax_207 || ecx_2 == 0)
                            uint32_t edi_207 = zx.d(*(esi_2 - 0xa))
                            uint32_t eax_208 = zx.d(*(edx_2 - 0xa))
                            
                            if (edi_207 != eax_208)
                                int32_t ecx_133
                                ecx_133.b = edi_207 - eax_208 s> 0
                                ecx_2 = (ecx_133 << 1) + 0xffffffff
                            
                            if (edi_207 == eax_208 || ecx_2 == 0)
                                uint32_t edi_209 = zx.d(*(esi_2 - 9))
                                uint32_t eax_209 = zx.d(*(edx_2 - 9))
                                
                                if (edi_209 != eax_209)
                                    int32_t ecx_134
                                    ecx_134.b = edi_209 - eax_209 s> 0
                                    ecx_2 = (ecx_134 << 1) + 0xffffffff
                                
                                if (edi_209 == eax_209 || ecx_2 == 0)
                                    uint32_t ecx_135 = zx.d(*(esi_2 - 8))
                                    uint32_t eax_210 = zx.d(*(edx_2 - 8))
                                    ecx_2 = ecx_135 - eax_210
                                    
                                    if (ecx_135 != eax_210)
                                        int32_t eax_211
                                        eax_211.b = ecx_2 s> 0
                                        ecx_2 = (eax_211 << 1) + 0xffffffff
                                    
                                    goto label_70223c
                case 0xc
                label_701495:
                    
                    if (*(esi_2 - 0xc) == *(edx_2 - 0xc))
                        ecx_2 = nullptr
                    label_701522:
                        
                        if (ecx_2 == 0)
                            goto label_70152a
                    else
                        uint32_t eax_76 = zx.d(*(edx_2 - 0xc))
                        uint32_t edi_73 = zx.d(*(esi_2 - 0xc))
                        
                        if (edi_73 != eax_76)
                            int32_t ecx_43
                            ecx_43.b = edi_73 - eax_76 s> 0
                            ecx_2 = (ecx_43 << 1) + 0xffffffff
                        
                        if (edi_73 == eax_76 || ecx_2 == 0)
                            uint32_t edi_75 = zx.d(*(esi_2 - 0xb))
                            uint32_t eax_77 = zx.d(*(edx_2 - 0xb))
                            
                            if (edi_75 != eax_77)
                                int32_t ecx_44
                                ecx_44.b = edi_75 - eax_77 s> 0
                                ecx_2 = (ecx_44 << 1) + 0xffffffff
                            
                            if (edi_75 == eax_77 || ecx_2 == 0)
                                uint32_t edi_77 = zx.d(*(esi_2 - 0xa))
                                uint32_t eax_78 = zx.d(*(edx_2 - 0xa))
                                
                                if (edi_77 != eax_78)
                                    int32_t ecx_45
                                    ecx_45.b = edi_77 - eax_78 s> 0
                                    ecx_2 = (ecx_45 << 1) + 0xffffffff
                                
                                if (edi_77 == eax_78 || ecx_2 == 0)
                                    uint32_t ecx_46 = zx.d(*(esi_2 - 9))
                                    uint32_t eax_79 = zx.d(*(edx_2 - 9))
                                    ecx_2 = ecx_46 - eax_79
                                    
                                    if (ecx_46 != eax_79)
                                        int32_t eax_80
                                        eax_80.b = ecx_2 s> 0
                                        ecx_2 = (eax_80 << 1) + 0xffffffff
                                    
                                    goto label_701522
                case 0xd
                label_70189a:
                    int32_t eax_117 = *(esi_2 - 0xd)
                    
                    if (eax_117 == *(edx_2 - 0xd))
                        ecx_2 = nullptr
                    label_701929:
                        
                        if (ecx_2 == 0)
                            goto label_701934
                    else
                        uint32_t edi_115 = zx.d(eax_117.b)
                        uint32_t eax_118 = zx.d(*(edx_2 - 0xd))
                        
                        if (edi_115 != eax_118)
                            int32_t ecx_71
                            ecx_71.b = edi_115 - eax_118 s> 0
                            ecx_2 = (ecx_71 << 1) + 0xffffffff
                        
                        if (edi_115 == eax_118 || ecx_2 == 0)
                            uint32_t edi_117 = zx.d(*(esi_2 - 0xc))
                            uint32_t eax_119 = zx.d(*(edx_2 - 0xc))
                            
                            if (edi_117 != eax_119)
                                int32_t ecx_72
                                ecx_72.b = edi_117 - eax_119 s> 0
                                ecx_2 = (ecx_72 << 1) + 0xffffffff
                            
                            if (edi_117 == eax_119 || ecx_2 == 0)
                                uint32_t edi_119 = zx.d(*(esi_2 - 0xb))
                                uint32_t eax_120 = zx.d(*(edx_2 - 0xb))
                                
                                if (edi_119 != eax_120)
                                    int32_t ecx_73
                                    ecx_73.b = edi_119 - eax_120 s> 0
                                    ecx_2 = (ecx_73 << 1) + 0xffffffff
                                
                                if (edi_119 == eax_120 || ecx_2 == 0)
                                    uint32_t ecx_74 = zx.d(*(esi_2 - 0xa))
                                    uint32_t eax_121 = zx.d(*(edx_2 - 0xa))
                                    ecx_2 = ecx_74 - eax_121
                                    
                                    if (ecx_74 != eax_121)
                                        int32_t eax_122
                                        eax_122.b = ecx_2 s> 0
                                        ecx_2 = (eax_122 << 1) + 0xffffffff
                                    
                                    goto label_701929
                case 0xe
                label_701cdf:
                    int32_t eax_161 = *(esi_2 - 0xe)
                    
                    if (eax_161 == *(edx_2 - 0xe))
                        ecx_2 = nullptr
                    label_701d6e:
                        
                        if (ecx_2 == 0)
                            goto label_701d79
                    else
                        uint32_t edi_157 = zx.d(eax_161.b)
                        uint32_t eax_162 = zx.d(*(edx_2 - 0xe))
                        
                        if (edi_157 != eax_162)
                            int32_t ecx_100
                            ecx_100.b = edi_157 - eax_162 s> 0
                            ecx_2 = (ecx_100 << 1) + 0xffffffff
                        
                        if (edi_157 == eax_162 || ecx_2 == 0)
                            uint32_t edi_159 = zx.d(*(esi_2 - 0xd))
                            uint32_t eax_163 = zx.d(*(edx_2 - 0xd))
                            
                            if (edi_159 != eax_163)
                                int32_t ecx_101
                                ecx_101.b = edi_159 - eax_163 s> 0
                                ecx_2 = (ecx_101 << 1) + 0xffffffff
                            
                            if (edi_159 == eax_163 || ecx_2 == 0)
                                uint32_t edi_161 = zx.d(*(esi_2 - 0xc))
                                uint32_t eax_164 = zx.d(*(edx_2 - 0xc))
                                
                                if (edi_161 != eax_164)
                                    int32_t ecx_102
                                    ecx_102.b = edi_161 - eax_164 s> 0
                                    ecx_2 = (ecx_102 << 1) + 0xffffffff
                                
                                if (edi_161 == eax_164 || ecx_2 == 0)
                                    uint32_t ecx_103 = zx.d(*(esi_2 - 0xb))
                                    uint32_t eax_165 = zx.d(*(edx_2 - 0xb))
                                    ecx_2 = ecx_103 - eax_165
                                    
                                    if (ecx_103 != eax_165)
                                        int32_t eax_166
                                        eax_166.b = ecx_2 s> 0
                                        ecx_2 = (eax_166 << 1) + 0xffffffff
                                    
                                    goto label_701d6e
                case 0xf
                label_702118:
                    
                    if (*(esi_2 - 0xf) == *(edx_2 - 0xf))
                        ecx_2 = nullptr
                    label_7021a5:
                        
                        if (ecx_2 == 0)
                            goto label_7021ad
                    else
                        uint32_t eax_201 = zx.d(*(edx_2 - 0xf))
                        uint32_t edi_199 = zx.d(*(esi_2 - 0xf))
                        
                        if (edi_199 != eax_201)
                            int32_t ecx_128
                            ecx_128.b = edi_199 - eax_201 s> 0
                            ecx_2 = (ecx_128 << 1) + 0xffffffff
                        
                        if (edi_199 == eax_201 || ecx_2 == 0)
                            uint32_t edi_201 = zx.d(*(esi_2 - 0xe))
                            uint32_t eax_202 = zx.d(*(edx_2 - 0xe))
                            
                            if (edi_201 != eax_202)
                                int32_t ecx_129
                                ecx_129.b = edi_201 - eax_202 s> 0
                                ecx_2 = (ecx_129 << 1) + 0xffffffff
                            
                            if (edi_201 == eax_202 || ecx_2 == 0)
                                uint32_t edi_203 = zx.d(*(esi_2 - 0xd))
                                uint32_t eax_203 = zx.d(*(edx_2 - 0xd))
                                
                                if (edi_203 != eax_203)
                                    int32_t ecx_130
                                    ecx_130.b = edi_203 - eax_203 s> 0
                                    ecx_2 = (ecx_130 << 1) + 0xffffffff
                                
                                if (edi_203 == eax_203 || ecx_2 == 0)
                                    uint32_t ecx_131 = zx.d(*(esi_2 - 0xc))
                                    uint32_t eax_204 = zx.d(*(edx_2 - 0xc))
                                    ecx_2 = ecx_131 - eax_204
                                    
                                    if (ecx_131 != eax_204)
                                        int32_t eax_205
                                        eax_205.b = ecx_2 s> 0
                                        ecx_2 = (eax_205 << 1) + 0xffffffff
                                    
                                    goto label_7021a5
                case 0x10
                label_7013fb:
                    int32_t eax_69 = *(esi_2 - 0x10)
                    
                    if (eax_69 == *(edx_2 - 0x10))
                        ecx_2 = nullptr
                    label_70148a:
                        
                        if (ecx_2 == 0)
                            goto label_701495
                    else
                        uint32_t edi_67 = zx.d(eax_69.b)
                        uint32_t eax_70 = zx.d(*(edx_2 - 0x10))
                        
                        if (edi_67 != eax_70)
                            int32_t ecx_39
                            ecx_39.b = edi_67 - eax_70 s> 0
                            ecx_2 = (ecx_39 << 1) + 0xffffffff
                        
                        if (edi_67 == eax_70 || ecx_2 == 0)
                            uint32_t edi_69 = zx.d(*(esi_2 - 0xf))
                            uint32_t eax_71 = zx.d(*(edx_2 - 0xf))
                            
                            if (edi_69 != eax_71)
                                int32_t ecx_40
                                ecx_40.b = edi_69 - eax_71 s> 0
                                ecx_2 = (ecx_40 << 1) + 0xffffffff
                            
                            if (edi_69 == eax_71 || ecx_2 == 0)
                                uint32_t edi_71 = zx.d(*(esi_2 - 0xe))
                                uint32_t eax_72 = zx.d(*(edx_2 - 0xe))
                                
                                if (edi_71 != eax_72)
                                    int32_t ecx_41
                                    ecx_41.b = edi_71 - eax_72 s> 0
                                    ecx_2 = (ecx_41 << 1) + 0xffffffff
                                
                                if (edi_71 == eax_72 || ecx_2 == 0)
                                    uint32_t ecx_42 = zx.d(*(esi_2 - 0xd))
                                    uint32_t eax_73 = zx.d(*(edx_2 - 0xd))
                                    ecx_2 = ecx_42 - eax_73
                                    
                                    if (ecx_42 != eax_73)
                                        int32_t eax_74
                                        eax_74.b = ecx_2 s> 0
                                        ecx_2 = (eax_74 << 1) + 0xffffffff
                                    
                                    goto label_70148a
                case 0x11
                label_701803:
                    int32_t eax_111 = *(esi_2 - 0x11)
                    
                    if (eax_111 == *(edx_2 - 0x11))
                        ecx_2 = nullptr
                    label_701892:
                        
                        if (ecx_2 == 0)
                            goto label_70189a
                    else
                        uint32_t edi_109 = zx.d(eax_111.b)
                        uint32_t eax_112 = zx.d(*(edx_2 - 0x11))
                        
                        if (edi_109 != eax_112)
                            int32_t ecx_67
                            ecx_67.b = edi_109 - eax_112 s> 0
                            ecx_2 = (ecx_67 << 1) + 0xffffffff
                        
                        if (edi_109 == eax_112 || ecx_2 == 0)
                            uint32_t edi_111 = zx.d(*(esi_2 - 0x10))
                            uint32_t eax_113 = zx.d(*(edx_2 - 0x10))
                            
                            if (edi_111 != eax_113)
                                int32_t ecx_68
                                ecx_68.b = edi_111 - eax_113 s> 0
                                ecx_2 = (ecx_68 << 1) + 0xffffffff
                            
                            if (edi_111 == eax_113 || ecx_2 == 0)
                                uint32_t edi_113 = zx.d(*(esi_2 - 0xf))
                                uint32_t eax_114 = zx.d(*(edx_2 - 0xf))
                                
                                if (edi_113 != eax_114)
                                    int32_t ecx_69
                                    ecx_69.b = edi_113 - eax_114 s> 0
                                    ecx_2 = (ecx_69 << 1) + 0xffffffff
                                
                                if (edi_113 == eax_114 || ecx_2 == 0)
                                    uint32_t ecx_70 = zx.d(*(esi_2 - 0xe))
                                    uint32_t eax_115 = zx.d(*(edx_2 - 0xe))
                                    ecx_2 = ecx_70 - eax_115
                                    
                                    if (ecx_70 != eax_115)
                                        int32_t eax_116
                                        eax_116.b = ecx_2 s> 0
                                        ecx_2 = (eax_116 << 1) + 0xffffffff
                                    
                                    goto label_701892
                case 0x12
                label_701c48:
                    int32_t eax_155 = *(esi_2 - 0x12)
                    
                    if (eax_155 == *(edx_2 - 0x12))
                        ecx_2 = nullptr
                    label_701cd7:
                        
                        if (ecx_2 == 0)
                            goto label_701cdf
                    else
                        uint32_t edi_151 = zx.d(eax_155.b)
                        uint32_t eax_156 = zx.d(*(edx_2 - 0x12))
                        
                        if (edi_151 != eax_156)
                            int32_t ecx_96
                            ecx_96.b = edi_151 - eax_156 s> 0
                            ecx_2 = (ecx_96 << 1) + 0xffffffff
                        
                        if (edi_151 == eax_156 || ecx_2 == 0)
                            uint32_t edi_153 = zx.d(*(esi_2 - 0x11))
                            uint32_t eax_157 = zx.d(*(edx_2 - 0x11))
                            
                            if (edi_153 != eax_157)
                                int32_t ecx_97
                                ecx_97.b = edi_153 - eax_157 s> 0
                                ecx_2 = (ecx_97 << 1) + 0xffffffff
                            
                            if (edi_153 == eax_157 || ecx_2 == 0)
                                uint32_t edi_155 = zx.d(*(esi_2 - 0x10))
                                uint32_t eax_158 = zx.d(*(edx_2 - 0x10))
                                
                                if (edi_155 != eax_158)
                                    int32_t ecx_98
                                    ecx_98.b = edi_155 - eax_158 s> 0
                                    ecx_2 = (ecx_98 << 1) + 0xffffffff
                                
                                if (edi_155 == eax_158 || ecx_2 == 0)
                                    uint32_t ecx_99 = zx.d(*(esi_2 - 0xf))
                                    uint32_t eax_159 = zx.d(*(edx_2 - 0xf))
                                    ecx_2 = ecx_99 - eax_159
                                    
                                    if (ecx_99 != eax_159)
                                        int32_t eax_160
                                        eax_160.b = ecx_2 s> 0
                                        ecx_2 = (eax_160 << 1) + 0xffffffff
                                    
                                    goto label_701cd7
                case 0x13
                label_70207e:
                    int32_t eax_194 = *(esi_2 - 0x13)
                    
                    if (eax_194 == *(edx_2 - 0x13))
                        ecx_2 = nullptr
                    label_70210d:
                        
                        if (ecx_2 == 0)
                            goto label_702118
                    else
                        uint32_t edi_193 = zx.d(eax_194.b)
                        uint32_t eax_195 = zx.d(*(edx_2 - 0x13))
                        
                        if (edi_193 != eax_195)
                            int32_t ecx_124
                            ecx_124.b = edi_193 - eax_195 s> 0
                            ecx_2 = (ecx_124 << 1) + 0xffffffff
                        
                        if (edi_193 == eax_195 || ecx_2 == 0)
                            uint32_t edi_195 = zx.d(*(esi_2 - 0x12))
                            uint32_t eax_196 = zx.d(*(edx_2 - 0x12))
                            
                            if (edi_195 != eax_196)
                                int32_t ecx_125
                                ecx_125.b = edi_195 - eax_196 s> 0
                                ecx_2 = (ecx_125 << 1) + 0xffffffff
                            
                            if (edi_195 == eax_196 || ecx_2 == 0)
                                uint32_t edi_197 = zx.d(*(esi_2 - 0x11))
                                uint32_t eax_197 = zx.d(*(edx_2 - 0x11))
                                
                                if (edi_197 != eax_197)
                                    int32_t ecx_126
                                    ecx_126.b = edi_197 - eax_197 s> 0
                                    ecx_2 = (ecx_126 << 1) + 0xffffffff
                                
                                if (edi_197 == eax_197 || ecx_2 == 0)
                                    uint32_t ecx_127 = zx.d(*(esi_2 - 0x10))
                                    uint32_t eax_198 = zx.d(*(edx_2 - 0x10))
                                    ecx_2 = ecx_127 - eax_198
                                    
                                    if (ecx_127 != eax_198)
                                        int32_t eax_199
                                        eax_199.b = ecx_2 s> 0
                                        ecx_2 = (eax_199 << 1) + 0xffffffff
                                    
                                    goto label_70210d
                case 0x14
                label_701364:
                    int32_t eax_63 = *(esi_2 - 0x14)
                    
                    if (eax_63 == *(edx_2 - 0x14))
                        ecx_2 = nullptr
                    label_7013f3:
                        
                        if (ecx_2 == 0)
                            goto label_7013fb
                    else
                        uint32_t edi_61 = zx.d(eax_63.b)
                        uint32_t eax_64 = zx.d(*(edx_2 - 0x14))
                        
                        if (edi_61 != eax_64)
                            int32_t ecx_35
                            ecx_35.b = edi_61 - eax_64 s> 0
                            ecx_2 = (ecx_35 << 1) + 0xffffffff
                        
                        if (edi_61 == eax_64 || ecx_2 == 0)
                            uint32_t edi_63 = zx.d(*(esi_2 - 0x13))
                            uint32_t eax_65 = zx.d(*(edx_2 - 0x13))
                            
                            if (edi_63 != eax_65)
                                int32_t ecx_36
                                ecx_36.b = edi_63 - eax_65 s> 0
                                ecx_2 = (ecx_36 << 1) + 0xffffffff
                            
                            if (edi_63 == eax_65 || ecx_2 == 0)
                                uint32_t edi_65 = zx.d(*(esi_2 - 0x12))
                                uint32_t eax_66 = zx.d(*(edx_2 - 0x12))
                                
                                if (edi_65 != eax_66)
                                    int32_t ecx_37
                                    ecx_37.b = edi_65 - eax_66 s> 0
                                    ecx_2 = (ecx_37 << 1) + 0xffffffff
                                
                                if (edi_65 == eax_66 || ecx_2 == 0)
                                    uint32_t ecx_38 = zx.d(*(esi_2 - 0x11))
                                    uint32_t eax_67 = zx.d(*(edx_2 - 0x11))
                                    ecx_2 = ecx_38 - eax_67
                                    
                                    if (ecx_38 != eax_67)
                                        int32_t eax_68
                                        eax_68.b = ecx_2 s> 0
                                        ecx_2 = (eax_68 << 1) + 0xffffffff
                                    
                                    goto label_7013f3
                case 0x15
                label_70176c:
                    int32_t eax_105 = *(esi_2 - 0x15)
                    
                    if (eax_105 == *(edx_2 - 0x15))
                        ecx_2 = nullptr
                    label_7017fb:
                        
                        if (ecx_2 == 0)
                            goto label_701803
                    else
                        uint32_t edi_103 = zx.d(eax_105.b)
                        uint32_t eax_106 = zx.d(*(edx_2 - 0x15))
                        
                        if (edi_103 != eax_106)
                            int32_t ecx_63
                            ecx_63.b = edi_103 - eax_106 s> 0
                            ecx_2 = (ecx_63 << 1) + 0xffffffff
                        
                        if (edi_103 == eax_106 || ecx_2 == 0)
                            uint32_t edi_105 = zx.d(*(esi_2 - 0x14))
                            uint32_t eax_107 = zx.d(*(edx_2 - 0x14))
                            
                            if (edi_105 != eax_107)
                                int32_t ecx_64
                                ecx_64.b = edi_105 - eax_107 s> 0
                                ecx_2 = (ecx_64 << 1) + 0xffffffff
                            
                            if (edi_105 == eax_107 || ecx_2 == 0)
                                uint32_t edi_107 = zx.d(*(esi_2 - 0x13))
                                uint32_t eax_108 = zx.d(*(edx_2 - 0x13))
                                
                                if (edi_107 != eax_108)
                                    int32_t ecx_65
                                    ecx_65.b = edi_107 - eax_108 s> 0
                                    ecx_2 = (ecx_65 << 1) + 0xffffffff
                                
                                if (edi_107 == eax_108 || ecx_2 == 0)
                                    uint32_t ecx_66 = zx.d(*(esi_2 - 0x12))
                                    uint32_t eax_109 = zx.d(*(edx_2 - 0x12))
                                    ecx_2 = ecx_66 - eax_109
                                    
                                    if (ecx_66 != eax_109)
                                        int32_t eax_110
                                        eax_110.b = ecx_2 s> 0
                                        ecx_2 = (eax_110 << 1) + 0xffffffff
                                    
                                    goto label_7017fb
                case 0x16
                label_701bb1:
                    int32_t eax_149 = *(esi_2 - 0x16)
                    
                    if (eax_149 == *(edx_2 - 0x16))
                        ecx_2 = nullptr
                    label_701c40:
                        
                        if (ecx_2 == 0)
                            goto label_701c48
                    else
                        uint32_t edi_145 = zx.d(eax_149.b)
                        uint32_t eax_150 = zx.d(*(edx_2 - 0x16))
                        
                        if (edi_145 != eax_150)
                            int32_t ecx_92
                            ecx_92.b = edi_145 - eax_150 s> 0
                            ecx_2 = (ecx_92 << 1) + 0xffffffff
                        
                        if (edi_145 == eax_150 || ecx_2 == 0)
                            uint32_t edi_147 = zx.d(*(esi_2 - 0x15))
                            uint32_t eax_151 = zx.d(*(edx_2 - 0x15))
                            
                            if (edi_147 != eax_151)
                                int32_t ecx_93
                                ecx_93.b = edi_147 - eax_151 s> 0
                                ecx_2 = (ecx_93 << 1) + 0xffffffff
                            
                            if (edi_147 == eax_151 || ecx_2 == 0)
                                uint32_t edi_149 = zx.d(*(esi_2 - 0x14))
                                uint32_t eax_152 = zx.d(*(edx_2 - 0x14))
                                
                                if (edi_149 != eax_152)
                                    int32_t ecx_94
                                    ecx_94.b = edi_149 - eax_152 s> 0
                                    ecx_2 = (ecx_94 << 1) + 0xffffffff
                                
                                if (edi_149 == eax_152 || ecx_2 == 0)
                                    uint32_t ecx_95 = zx.d(*(esi_2 - 0x13))
                                    uint32_t eax_153 = zx.d(*(edx_2 - 0x13))
                                    ecx_2 = ecx_95 - eax_153
                                    
                                    if (ecx_95 != eax_153)
                                        int32_t eax_154
                                        eax_154.b = ecx_2 s> 0
                                        ecx_2 = (eax_154 << 1) + 0xffffffff
                                    
                                    goto label_701c40
                case 0x17
                label_701fe7:
                    int32_t eax_188 = *(esi_2 - 0x17)
                    
                    if (eax_188 == *(edx_2 - 0x17))
                        ecx_2 = nullptr
                    label_702076:
                        
                        if (ecx_2 == 0)
                            goto label_70207e
                    else
                        uint32_t edi_187 = zx.d(eax_188.b)
                        uint32_t eax_189 = zx.d(*(edx_2 - 0x17))
                        
                        if (edi_187 != eax_189)
                            int32_t ecx_120
                            ecx_120.b = edi_187 - eax_189 s> 0
                            ecx_2 = (ecx_120 << 1) + 0xffffffff
                        
                        if (edi_187 == eax_189 || ecx_2 == 0)
                            uint32_t edi_189 = zx.d(*(esi_2 - 0x16))
                            uint32_t eax_190 = zx.d(*(edx_2 - 0x16))
                            
                            if (edi_189 != eax_190)
                                int32_t ecx_121
                                ecx_121.b = edi_189 - eax_190 s> 0
                                ecx_2 = (ecx_121 << 1) + 0xffffffff
                            
                            if (edi_189 == eax_190 || ecx_2 == 0)
                                uint32_t edi_191 = zx.d(*(esi_2 - 0x15))
                                uint32_t eax_191 = zx.d(*(edx_2 - 0x15))
                                
                                if (edi_191 != eax_191)
                                    int32_t ecx_122
                                    ecx_122.b = edi_191 - eax_191 s> 0
                                    ecx_2 = (ecx_122 << 1) + 0xffffffff
                                
                                if (edi_191 == eax_191 || ecx_2 == 0)
                                    uint32_t ecx_123 = zx.d(*(esi_2 - 0x14))
                                    uint32_t eax_192 = zx.d(*(edx_2 - 0x14))
                                    ecx_2 = ecx_123 - eax_192
                                    
                                    if (ecx_123 != eax_192)
                                        int32_t eax_193
                                        eax_193.b = ecx_2 s> 0
                                        ecx_2 = (eax_193 << 1) + 0xffffffff
                                    
                                    goto label_702076
                case 0x18
                label_7012cd:
                    int32_t eax_57 = *(esi_2 - 0x18)
                    
                    if (eax_57 == *(edx_2 - 0x18))
                        ecx_2 = nullptr
                    label_70135c:
                        
                        if (ecx_2 == 0)
                            goto label_701364
                    else
                        uint32_t edi_55 = zx.d(eax_57.b)
                        uint32_t eax_58 = zx.d(*(edx_2 - 0x18))
                        
                        if (edi_55 != eax_58)
                            int32_t ecx_31
                            ecx_31.b = edi_55 - eax_58 s> 0
                            ecx_2 = (ecx_31 << 1) + 0xffffffff
                        
                        if (edi_55 == eax_58 || ecx_2 == 0)
                            uint32_t edi_57 = zx.d(*(esi_2 - 0x17))
                            uint32_t eax_59 = zx.d(*(edx_2 - 0x17))
                            
                            if (edi_57 != eax_59)
                                int32_t ecx_32
                                ecx_32.b = edi_57 - eax_59 s> 0
                                ecx_2 = (ecx_32 << 1) + 0xffffffff
                            
                            if (edi_57 == eax_59 || ecx_2 == 0)
                                uint32_t edi_59 = zx.d(*(esi_2 - 0x16))
                                uint32_t eax_60 = zx.d(*(edx_2 - 0x16))
                                
                                if (edi_59 != eax_60)
                                    int32_t ecx_33
                                    ecx_33.b = edi_59 - eax_60 s> 0
                                    ecx_2 = (ecx_33 << 1) + 0xffffffff
                                
                                if (edi_59 == eax_60 || ecx_2 == 0)
                                    uint32_t ecx_34 = zx.d(*(esi_2 - 0x15))
                                    uint32_t eax_61 = zx.d(*(edx_2 - 0x15))
                                    ecx_2 = ecx_34 - eax_61
                                    
                                    if (ecx_34 != eax_61)
                                        int32_t eax_62
                                        eax_62.b = ecx_2 s> 0
                                        ecx_2 = (eax_62 << 1) + 0xffffffff
                                    
                                    goto label_70135c
                case 0x19
                label_7016d5:
                    int32_t eax_99 = *(esi_2 - 0x19)
                    
                    if (eax_99 == *(edx_2 - 0x19))
                        ecx_2 = nullptr
                    label_701764:
                        
                        if (ecx_2 == 0)
                            goto label_70176c
                    else
                        uint32_t edi_97 = zx.d(eax_99.b)
                        uint32_t eax_100 = zx.d(*(edx_2 - 0x19))
                        
                        if (edi_97 != eax_100)
                            int32_t ecx_59
                            ecx_59.b = edi_97 - eax_100 s> 0
                            ecx_2 = (ecx_59 << 1) + 0xffffffff
                        
                        if (edi_97 == eax_100 || ecx_2 == 0)
                            uint32_t edi_99 = zx.d(*(esi_2 - 0x18))
                            uint32_t eax_101 = zx.d(*(edx_2 - 0x18))
                            
                            if (edi_99 != eax_101)
                                int32_t ecx_60
                                ecx_60.b = edi_99 - eax_101 s> 0
                                ecx_2 = (ecx_60 << 1) + 0xffffffff
                            
                            if (edi_99 == eax_101 || ecx_2 == 0)
                                uint32_t edi_101 = zx.d(*(esi_2 - 0x17))
                                uint32_t eax_102 = zx.d(*(edx_2 - 0x17))
                                
                                if (edi_101 != eax_102)
                                    int32_t ecx_61
                                    ecx_61.b = edi_101 - eax_102 s> 0
                                    ecx_2 = (ecx_61 << 1) + 0xffffffff
                                
                                if (edi_101 == eax_102 || ecx_2 == 0)
                                    uint32_t ecx_62 = zx.d(*(esi_2 - 0x16))
                                    uint32_t eax_103 = zx.d(*(edx_2 - 0x16))
                                    ecx_2 = ecx_62 - eax_103
                                    
                                    if (ecx_62 != eax_103)
                                        int32_t eax_104
                                        eax_104.b = ecx_2 s> 0
                                        ecx_2 = (eax_104 << 1) + 0xffffffff
                                    
                                    goto label_701764
                case 0x1a
                label_701b1a:
                    int32_t eax_143 = *(esi_2 - 0x1a)
                    
                    if (eax_143 == *(edx_2 - 0x1a))
                        ecx_2 = nullptr
                    label_701ba9:
                        
                        if (ecx_2 == 0)
                            goto label_701bb1
                    else
                        uint32_t edi_139 = zx.d(eax_143.b)
                        uint32_t eax_144 = zx.d(*(edx_2 - 0x1a))
                        
                        if (edi_139 != eax_144)
                            int32_t ecx_88
                            ecx_88.b = edi_139 - eax_144 s> 0
                            ecx_2 = (ecx_88 << 1) + 0xffffffff
                        
                        if (edi_139 == eax_144 || ecx_2 == 0)
                            uint32_t edi_141 = zx.d(*(esi_2 - 0x19))
                            uint32_t eax_145 = zx.d(*(edx_2 - 0x19))
                            
                            if (edi_141 != eax_145)
                                int32_t ecx_89
                                ecx_89.b = edi_141 - eax_145 s> 0
                                ecx_2 = (ecx_89 << 1) + 0xffffffff
                            
                            if (edi_141 == eax_145 || ecx_2 == 0)
                                uint32_t edi_143 = zx.d(*(esi_2 - 0x18))
                                uint32_t eax_146 = zx.d(*(edx_2 - 0x18))
                                
                                if (edi_143 != eax_146)
                                    int32_t ecx_90
                                    ecx_90.b = edi_143 - eax_146 s> 0
                                    ecx_2 = (ecx_90 << 1) + 0xffffffff
                                
                                if (edi_143 == eax_146 || ecx_2 == 0)
                                    uint32_t ecx_91 = zx.d(*(esi_2 - 0x17))
                                    uint32_t eax_147 = zx.d(*(edx_2 - 0x17))
                                    ecx_2 = ecx_91 - eax_147
                                    
                                    if (ecx_91 != eax_147)
                                        int32_t eax_148
                                        eax_148.b = ecx_2 s> 0
                                        ecx_2 = (eax_148 << 1) + 0xffffffff
                                    
                                    goto label_701ba9
                case 0x1b
                label_701f50:
                    int32_t eax_182 = *(esi_2 - 0x1b)
                    
                    if (eax_182 == *(edx_2 - 0x1b))
                        ecx_2 = nullptr
                    label_701fdf:
                        
                        if (ecx_2 == 0)
                            goto label_701fe7
                    else
                        uint32_t edi_181 = zx.d(eax_182.b)
                        uint32_t eax_183 = zx.d(*(edx_2 - 0x1b))
                        
                        if (edi_181 != eax_183)
                            int32_t ecx_116
                            ecx_116.b = edi_181 - eax_183 s> 0
                            ecx_2 = (ecx_116 << 1) + 0xffffffff
                        
                        if (edi_181 == eax_183 || ecx_2 == 0)
                            uint32_t edi_183 = zx.d(*(esi_2 - 0x1a))
                            uint32_t eax_184 = zx.d(*(edx_2 - 0x1a))
                            
                            if (edi_183 != eax_184)
                                int32_t ecx_117
                                ecx_117.b = edi_183 - eax_184 s> 0
                                ecx_2 = (ecx_117 << 1) + 0xffffffff
                            
                            if (edi_183 == eax_184 || ecx_2 == 0)
                                uint32_t edi_185 = zx.d(*(esi_2 - 0x19))
                                uint32_t eax_185 = zx.d(*(edx_2 - 0x19))
                                
                                if (edi_185 != eax_185)
                                    int32_t ecx_118
                                    ecx_118.b = edi_185 - eax_185 s> 0
                                    ecx_2 = (ecx_118 << 1) + 0xffffffff
                                
                                if (edi_185 == eax_185 || ecx_2 == 0)
                                    uint32_t ecx_119 = zx.d(*(esi_2 - 0x18))
                                    uint32_t eax_186 = zx.d(*(edx_2 - 0x18))
                                    ecx_2 = ecx_119 - eax_186
                                    
                                    if (ecx_119 != eax_186)
                                        int32_t eax_187
                                        eax_187.b = ecx_2 s> 0
                                        ecx_2 = (eax_187 << 1) + 0xffffffff
                                    
                                    goto label_701fdf
                case 0x1c
                    int32_t eax_51 = *(esi_2 - 0x1c)
                    
                    if (eax_51 == *(edx_2 - 0x1c))
                        ecx_2 = nullptr
                    label_7012c5:
                        
                        if (ecx_2 == 0)
                            goto label_7012cd
                    else
                        uint32_t edi_49 = zx.d(eax_51.b)
                        uint32_t eax_52 = zx.d(*(edx_2 - 0x1c))
                        
                        if (edi_49 != eax_52)
                            int32_t ecx_27
                            ecx_27.b = edi_49 - eax_52 s> 0
                            ecx_2 = (ecx_27 << 1) + 0xffffffff
                        
                        if (edi_49 == eax_52 || ecx_2 == 0)
                            uint32_t edi_51 = zx.d(*(esi_2 - 0x1b))
                            uint32_t eax_53 = zx.d(*(edx_2 - 0x1b))
                            
                            if (edi_51 != eax_53)
                                int32_t ecx_28
                                ecx_28.b = edi_51 - eax_53 s> 0
                                ecx_2 = (ecx_28 << 1) + 0xffffffff
                            
                            if (edi_51 == eax_53 || ecx_2 == 0)
                                uint32_t edi_53 = zx.d(*(esi_2 - 0x1a))
                                uint32_t eax_54 = zx.d(*(edx_2 - 0x1a))
                                
                                if (edi_53 != eax_54)
                                    int32_t ecx_29
                                    ecx_29.b = edi_53 - eax_54 s> 0
                                    ecx_2 = (ecx_29 << 1) + 0xffffffff
                                
                                if (edi_53 == eax_54 || ecx_2 == 0)
                                    uint32_t ecx_30 = zx.d(*(esi_2 - 0x19))
                                    uint32_t eax_55 = zx.d(*(edx_2 - 0x19))
                                    ecx_2 = ecx_30 - eax_55
                                    
                                    if (ecx_30 != eax_55)
                                        int32_t eax_56
                                        eax_56.b = ecx_2 s> 0
                                        ecx_2 = (eax_56 << 1) + 0xffffffff
                                    
                                    goto label_7012c5
                case 0x1d
                    int32_t eax_93 = *(esi_2 - 0x1d)
                    
                    if (eax_93 == *(edx_2 - 0x1d))
                        ecx_2 = nullptr
                    label_7016cd:
                        
                        if (ecx_2 == 0)
                            goto label_7016d5
                    else
                        uint32_t edi_91 = zx.d(eax_93.b)
                        uint32_t eax_94 = zx.d(*(edx_2 - 0x1d))
                        
                        if (edi_91 != eax_94)
                            int32_t ecx_55
                            ecx_55.b = edi_91 - eax_94 s> 0
                            ecx_2 = (ecx_55 << 1) + 0xffffffff
                        
                        if (edi_91 == eax_94 || ecx_2 == 0)
                            uint32_t edi_93 = zx.d(*(esi_2 - 0x1c))
                            uint32_t eax_95 = zx.d(*(edx_2 - 0x1c))
                            
                            if (edi_93 != eax_95)
                                int32_t ecx_56
                                ecx_56.b = edi_93 - eax_95 s> 0
                                ecx_2 = (ecx_56 << 1) + 0xffffffff
                            
                            if (edi_93 == eax_95 || ecx_2 == 0)
                                uint32_t edi_95 = zx.d(*(esi_2 - 0x1b))
                                uint32_t eax_96 = zx.d(*(edx_2 - 0x1b))
                                
                                if (edi_95 != eax_96)
                                    int32_t ecx_57
                                    ecx_57.b = edi_95 - eax_96 s> 0
                                    ecx_2 = (ecx_57 << 1) + 0xffffffff
                                
                                if (edi_95 == eax_96 || ecx_2 == 0)
                                    uint32_t ecx_58 = zx.d(*(esi_2 - 0x1a))
                                    uint32_t eax_97 = zx.d(*(edx_2 - 0x1a))
                                    ecx_2 = ecx_58 - eax_97
                                    
                                    if (ecx_58 != eax_97)
                                        int32_t eax_98
                                        eax_98.b = ecx_2 s> 0
                                        ecx_2 = (eax_98 << 1) + 0xffffffff
                                    
                                    goto label_7016cd
                case 0x1e
                    int32_t eax_137 = *(esi_2 - 0x1e)
                    
                    if (eax_137 == *(edx_2 - 0x1e))
                        ecx_2 = nullptr
                    label_701b12:
                        
                        if (ecx_2 == 0)
                            goto label_701b1a
                    else
                        uint32_t edi_133 = zx.d(eax_137.b)
                        uint32_t eax_138 = zx.d(*(edx_2 - 0x1e))
                        
                        if (edi_133 != eax_138)
                            int32_t ecx_84
                            ecx_84.b = edi_133 - eax_138 s> 0
                            ecx_2 = (ecx_84 << 1) + 0xffffffff
                        
                        if (edi_133 == eax_138 || ecx_2 == 0)
                            uint32_t edi_135 = zx.d(*(esi_2 - 0x1d))
                            uint32_t eax_139 = zx.d(*(edx_2 - 0x1d))
                            
                            if (edi_135 != eax_139)
                                int32_t ecx_85
                                ecx_85.b = edi_135 - eax_139 s> 0
                                ecx_2 = (ecx_85 << 1) + 0xffffffff
                            
                            if (edi_135 == eax_139 || ecx_2 == 0)
                                uint32_t edi_137 = zx.d(*(esi_2 - 0x1c))
                                uint32_t eax_140 = zx.d(*(edx_2 - 0x1c))
                                
                                if (edi_137 != eax_140)
                                    int32_t ecx_86
                                    ecx_86.b = edi_137 - eax_140 s> 0
                                    ecx_2 = (ecx_86 << 1) + 0xffffffff
                                
                                if (edi_137 == eax_140 || ecx_2 == 0)
                                    uint32_t ecx_87 = zx.d(*(esi_2 - 0x1b))
                                    uint32_t eax_141 = zx.d(*(edx_2 - 0x1b))
                                    ecx_2 = ecx_87 - eax_141
                                    
                                    if (ecx_87 != eax_141)
                                        int32_t eax_142
                                        eax_142.b = ecx_2 s> 0
                                        ecx_2 = (eax_142 << 1) + 0xffffffff
                                    
                                    goto label_701b12
                case 0x1f
                    if (*(esi_2 - 0x1f) == *(edx_2 - 0x1f))
                        ecx_2 = nullptr
                    label_701f48:
                        
                        if (ecx_2 == 0)
                            goto label_701f50
                    else
                        uint32_t eax_177 = zx.d(*(edx_2 - 0x1f))
                        uint32_t edi_175 = zx.d(*(esi_2 - 0x1f))
                        
                        if (edi_175 != eax_177)
                            int32_t ecx_112
                            ecx_112.b = edi_175 - eax_177 s> 0
                            ecx_2 = (ecx_112 << 1) + 0xffffffff
                        
                        if (edi_175 == eax_177 || ecx_2 == 0)
                            uint32_t edi_177 = zx.d(*(esi_2 - 0x1e))
                            uint32_t eax_178 = zx.d(*(edx_2 - 0x1e))
                            
                            if (edi_177 != eax_178)
                                int32_t ecx_113
                                ecx_113.b = edi_177 - eax_178 s> 0
                                ecx_2 = (ecx_113 << 1) + 0xffffffff
                            
                            if (edi_177 == eax_178 || ecx_2 == 0)
                                uint32_t edi_179 = zx.d(*(esi_2 - 0x1d))
                                uint32_t eax_179 = zx.d(*(edx_2 - 0x1d))
                                
                                if (edi_179 != eax_179)
                                    int32_t ecx_114
                                    ecx_114.b = edi_179 - eax_179 s> 0
                                    ecx_2 = (ecx_114 << 1) + 0xffffffff
                                
                                if (edi_179 == eax_179 || ecx_2 == 0)
                                    uint32_t ecx_115 = zx.d(*(esi_2 - 0x1c))
                                    uint32_t eax_180 = zx.d(*(edx_2 - 0x1c))
                                    ecx_2 = ecx_115 - eax_180
                                    
                                    if (ecx_115 != eax_180)
                                        int32_t eax_181
                                        eax_181.b = ecx_2 s> 0
                                        ecx_2 = (eax_181 << 1) + 0xffffffff
                                    
                                    goto label_701f48
            
            return ecx_2
        
        uint32_t eax_220 = zx.d(*edx_1)
        uint32_t esi_3 = zx.d(*arg1)
        
        if (esi_3 != eax_220)
            int32_t eax_221
            eax_221.b = esi_3 - eax_220 s> 0
            eax_222 = (eax_221 << 1) + 0xffffffff
        
        if (esi_3 != eax_220 && eax_222 != 0)
            return eax_222
        
        uint32_t esi_5 = zx.d(arg1[1])
        uint32_t eax_223 = zx.d(*(edx_1 + 1))
        
        if (esi_5 != eax_223)
            int32_t eax_224
            eax_224.b = esi_5 - eax_223 s> 0
            eax_222 = (eax_224 << 1) + 0xffffffff
        
        if (esi_5 != eax_223 && eax_222 != 0)
            return eax_222
        
        uint32_t esi_7 = zx.d(arg1[2])
        uint32_t eax_225 = zx.d(*(edx_1 + 2))
        
        if (esi_7 != eax_225)
            int32_t eax_226
            eax_226.b = esi_7 - eax_225 s> 0
            eax_222 = (eax_226 << 1) + 0xffffffff
        
        if (esi_7 != eax_225 && eax_222 != 0)
            return eax_222
        
        ecx_143 = zx.d(arg1[3])
        eax_227 = zx.d(*(edx_1 + 3))

void* ecx_144 = ecx_143 - eax_227

if (ecx_143 == eax_227)
    return ecx_144

int32_t eax_228
eax_228.b = ecx_144 s> 0
return (eax_228 << 1) + 0xffffffff
