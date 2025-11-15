// 函数: sub_69e2a0
// 地址: 0x69e2a0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t eax = sub_69e100(arg1)

if (eax != 0 || arg2 u> 5)
    return 0xfffffffe

int32_t* esi = arg1[7]

if (arg1[3] == eax || (arg1[1] != eax && *arg1 == eax) || (esi[1] == 0x29a && arg2 != 4))
    arg1[6] = "stream error"
    return 0xfffffffe

if (arg1[4] == 0)
    arg1[6] = "buffer error"
    return 0xfffffffb

bool cond:0 = esi[5] == 0
int32_t edx = esi[0xa]
esi[0xa] = arg2

if (cond:0)
    if (arg1[1] == 0)
        int32_t eax_3 = 0
        
        if (edx s> 4)
            eax_3 = 9
        
        int32_t ecx = 0
        
        if (arg2 s> 4)
            ecx = 9
        
        if ((arg2 << 1) - ecx s> edx * 2 - eax_3 || arg2 == 4)
            goto label_69e363
        
        arg1[6] = "buffer error"
        return 0xfffffffb
    
label_69e363:
    int32_t eax_6 = esi[1]
    
    if (eax_6 == 0x29a && arg1[1] != 0)
        arg1[6] = "buffer error"
        return 0xfffffffb
    
    if (eax_6 == 0x2a)
        int32_t edx_3
        
        if (esi[0x22] s< 2)
            edx_3 = esi[0x21]
        
        int32_t eax_8
        
        if (esi[0x22] s>= 2 || edx_3 s< 2)
            eax_8 = 0
        else if (edx_3 s>= 6)
            int32_t eax_9
            eax_9.b = edx_3 != 6
            eax_8 = eax_9 + 2
        else
            eax_8 = 1
        
        int32_t eax_11 = eax_8 << 6 | ((esi[0xc] << 0xc) - 0x7800)
        int32_t ecx_5 = eax_11 | 0x20
        
        if (esi[0x1b] == 0)
            ecx_5 = eax_11
        
        int32_t eax_13 = sub_69e220(esi, (ecx_5 u/ 0x1f + 1) * 0x1f)
        
        if (esi[0x1b] != 0)
            sub_69e220(esi, zx.d(*(arg1 + 0x32)))
            eax_13 = sub_69e220(esi, zx.d(arg1[0xc].w))
        
        arg1[0xc] = sub_69d9c0(eax_13, nullptr, 0, 0)
        esi[1] = 0x71
        sub_69e250(arg1)
    
    if (eax_6 == 0x2a && esi[5] != 0)
    labelid_2:
        esi[0xa] = 0xffffffff
    else
        if (esi[1] == 0x39)
            arg1[0xc] = 0
            esi[5][esi[2]] = 0x1f
            esi[5] += 1
            esi[5][esi[2]] = 0x8b
            esi[5] += 1
            esi[5][esi[2]] = 8
            esi[5] += 1
            void* edx_10 = esi[7]
            char* ebx_1 = esi[5]
            
            if (edx_10 != 0)
                int32_t ecx_25 = *(edx_10 + 0x24)
                int32_t eax_27 = *(edx_10 + 0x2c)
                char ecx_26 = (neg.d(ecx_25)).b
                char eax_28 = (neg.d(eax_27)).b
                int32_t eax_29 = *(edx_10 + 0x1c)
                char eax_30 = (neg.d(eax_29)).b
                int32_t eax_31 = *(edx_10 + 0x10)
                char eax_32 = (neg.d(eax_31)).b
                ecx_26 = (sbb.b(ecx_26, ecx_26, ecx_25 != 0) & 0x10)
                    + (sbb.b(eax_28, eax_28, eax_27 != 0) & 2)
                    + (sbb.b(eax_30, eax_30, eax_29 != 0) & 8)
                    + (sbb.b(eax_32, eax_32, eax_31 != 0) & 4)
                ebx_1[esi[2]] = ecx_26 + (*edx_10 != 0)
                esi[5] += 1
                esi[5][esi[2]] = *(esi[7] + 4)
                esi[5] += 1
                esi[5][esi[2]] = *(esi[7] + 5)
                esi[5] += 1
                esi[5][esi[2]] = *(esi[7] + 6)
                esi[5] += 1
                esi[5][esi[2]] = *(esi[7] + 7)
                esi[5] += 1
                int32_t eax_42 = esi[0x21]
                char ecx_31
                
                if (eax_42 == 9)
                    ecx_31 = eax_42.b - 7
                else if (esi[0x22] s>= 2 || eax_42 s< 2)
                    ecx_31 = 4
                else
                    ecx_31 = 0
                
                esi[5][esi[2]] = ecx_31
                esi[5] += 1
                void* eax_44
                eax_44.b = *(esi[7] + 0xc)
                esi[5][esi[2]] = eax_44.b
                void* eax_45 = esi[7]
                esi[5] += 1
                char* edx_18 = esi[5]
                
                if (*(eax_45 + 0x10) != 0)
                    edx_18[esi[2]] = *(eax_45 + 0x14)
                    esi[5] += 1
                    esi[5][esi[2]] = *(esi[7] + 0x15)
                    esi[5] += 1
                    edx_18 = esi[5]
                
                if (*(esi[7] + 0x2c) != 0)
                    int32_t eax_50 = esi[2]
                    
                    if (eax_50 != 0)
                        eax_50 = sub_69dc30(eax_50, eax_50, arg1[0xc], edx_18)
                    
                    arg1[0xc] = eax_50
                
                esi[8] = 0
                esi[1] = 0x45
            else
                ebx_1[esi[2]] = edx_10.b
                esi[5] += 1
                esi[5][esi[2]] = edx_10.b
                esi[5] += 1
                esi[5][esi[2]] = edx_10.b
                esi[5] += 1
                esi[5][esi[2]] = edx_10.b
                esi[5] += 1
                esi[5][esi[2]] = edx_10.b
                esi[5] += 1
                int32_t eax_23 = esi[0x21]
                char ecx_22
                
                if (eax_23 == 9)
                    ecx_22 = eax_23.b - 7
                else if (esi[0x22] s>= 2 || eax_23 s< 2)
                    ecx_22 = 4
                else
                    ecx_22 = 0
                
                esi[5][esi[2]] = ecx_22
                esi[5] += 1
                esi[5][esi[2]] = 0xa
                esi[5] += 1
                esi[1] = 0x71
                sub_69e250(arg1)
                
                if (esi[5] != 0)
                    esi[0xa] = 0xffffffff
                    return 0
        
        if (esi[1] == 0x45)
            void* eax_51 = esi[7]
            
            if (*(eax_51 + 0x10) != 0)
                void* ecx_37 = zx.d(*(eax_51 + 0x14)) - esi[8]
                void* ebp_1 = esi[5]
                void* var_8_1 = ecx_37
                
                if (ebp_1 + ecx_37 u> esi[3])
                    do
                        void* ebx_3 = esi[3] - esi[5]
                        sub_700660(esi[2] + esi[5], *(esi[7] + 0x10) + esi[8], ebx_3)
                        void* eax_59 = esi[7]
                        int32_t ecx_38 = esi[3]
                        esi[5] = ecx_38
                        
                        if (*(eax_59 + 0x2c) != 0 && ecx_38 u> ebp_1)
                            void* edx_21 = esi[2]
                            int32_t eax_60
                            
                            if (edx_21 != neg.d(ebp_1))
                                eax_60 =
                                    sub_69dc30(eax_59, edx_21 + ebp_1, arg1[0xc], ecx_38 - ebp_1)
                            else
                                eax_60 = 0
                            
                            arg1[0xc] = eax_60
                        
                        esi[8] += ebx_3
                        sub_69e250(arg1)
                        
                        if (esi[5] != 0)
                            goto label_69e321_2
                        
                        ebp_1 = nullptr
                        ecx_37 = var_8_1 - ebx_3
                        var_8_1 = ecx_37
                    while (esi[5] + ecx_37 u> esi[3])
                
                sub_700660(esi[5] + esi[2], *(esi[7] + 0x10) + esi[8], ecx_37)
                esi[5] += var_8_1
                void* eax_69 = esi[7]
                int32_t ecx_43 = esi[5]
                
                if (*(eax_69 + 0x2c) != 0 && ecx_43 u> ebp_1)
                    void* edx_23 = esi[2]
                    int32_t eax_70
                    
                    if (edx_23 != neg.d(ebp_1))
                        eax_70 = sub_69dc30(eax_69, edx_23 + ebp_1, arg1[0xc], ecx_43 - ebp_1)
                    else
                        eax_70 = 0
                    
                    arg1[0xc] = eax_70
                
                esi[8] = 0
            
            esi[1] = 0x49
        
        if (esi[1] == 0x49)
            if (*(esi[7] + 0x1c) != 0)
                int32_t ebx_4 = esi[5]
                int32_t ecx_50
                uint32_t i
                
                do
                    if (esi[5] == esi[3])
                        if (*(esi[7] + 0x2c) != 0)
                            int32_t eax_74 = esi[5]
                            
                            if (eax_74 u> ebx_4)
                                void* edx_25 = esi[2]
                                void* eax_75 = eax_74 - ebx_4
                                int32_t eax_76
                                
                                if (edx_25 != neg.d(ebx_4))
                                    eax_76 = sub_69dc30(eax_75, edx_25 + ebx_4, arg1[0xc], eax_75)
                                else
                                    eax_76 = 0
                                
                                arg1[0xc] = eax_76
                        
                        sub_69e250(arg1)
                        
                        if (esi[5] != 0)
                            goto label_69e321_2
                        
                        ebx_4 = 0
                    
                    int32_t ecx_48 = esi[8]
                    i = zx.d(*(*(esi[7] + 0x1c) + ecx_48))
                    char* ecx_49 = esi[2]
                    esi[8] = ecx_48 + 1
                    ecx_49[esi[5]] = i.b
                    esi[5] += 1
                    ecx_50 = esi[5]
                while (i != 0)
                
                void* eax_81 = esi[7]
                
                if (*(eax_81 + 0x2c) != i && ecx_50 u> ebx_4)
                    void* edx_27 = esi[2]
                    int32_t eax_82
                    
                    if (edx_27 != neg.d(ebx_4))
                        eax_82 = sub_69dc30(eax_81, edx_27 + ebx_4, arg1[0xc], ecx_50 - ebx_4)
                    else
                        eax_82 = 0
                    
                    arg1[0xc] = eax_82
                
                esi[8] = 0
            
            esi[1] = 0x5b
        
        if (esi[1] == 0x5b)
            if (*(esi[7] + 0x24) != 0)
                int32_t ebx_5 = esi[5]
                int32_t ecx_57
                uint32_t i_1
                
                do
                    if (esi[5] == esi[3])
                        if (*(esi[7] + 0x2c) != 0)
                            int32_t eax_86 = esi[5]
                            
                            if (eax_86 u> ebx_5)
                                void* edx_29 = esi[2]
                                void* eax_87 = eax_86 - ebx_5
                                int32_t eax_88
                                
                                if (edx_29 != neg.d(ebx_5))
                                    eax_88 = sub_69dc30(eax_87, edx_29 + ebx_5, arg1[0xc], eax_87)
                                else
                                    eax_88 = 0
                                
                                arg1[0xc] = eax_88
                        
                        sub_69e250(arg1)
                        
                        if (esi[5] != 0)
                            goto label_69e321_2
                        
                        ebx_5 = 0
                    
                    int32_t ecx_55 = esi[8]
                    i_1 = zx.d(*(*(esi[7] + 0x24) + ecx_55))
                    char* ecx_56 = esi[2]
                    esi[8] = ecx_55 + 1
                    ecx_56[esi[5]] = i_1.b
                    esi[5] += 1
                    ecx_57 = esi[5]
                while (i_1 != 0)
                
                void* eax_93 = esi[7]
                
                if (*(eax_93 + 0x2c) != i_1 && ecx_57 u> ebx_5)
                    void* edx_31 = esi[2]
                    int32_t eax_94
                    
                    if (edx_31 != neg.d(ebx_5))
                        eax_94 = sub_69dc30(eax_93, edx_31 + ebx_5, arg1[0xc], ecx_57 - ebx_5)
                    else
                        eax_94 = 0
                    
                    arg1[0xc] = eax_94
            
            esi[1] = 0x67
        
        if (esi[1] != 0x67)
        label_69e937:
            
            if (arg1[1] != 0 || esi[0x1d] != 0 || (arg2 != 0 && esi[1] != 0x29a))
                int32_t eax_100 = esi[0x21]
                int32_t eax_101
                
                if (eax_100 != 0)
                    int32_t ecx_64 = esi[0x22]
                    
                    if (ecx_64 == 2)
                        eax_101 = sub_69ff60(esi, arg2)
                    else if (ecx_64 != 3)
                        eax_101 = (&data_771cc8)[eax_100 * 3](esi, arg2)
                    else
                        eax_101 = sub_69fc50(esi, arg2)
                else
                    eax_101 = sub_69f070(esi, arg2)
                
                if (eax_101 == 2 || eax_101 == 3)
                    esi[1] = 0x29a
                
                if (eax_101 != 0 && eax_101 != 2)
                    if (eax_101 != 1)
                        goto label_69ea43
                    
                    if (arg2 == eax_101)
                        sub_6a3630(esi)
                    else if (arg2 != 5)
                        sub_6a3540(eax_101.w, nullptr, esi, nullptr, 0)
                        
                        if (arg2 == 3)
                            *(esi[0x11] + (esi[0x13] << 1) - 2) = 0
                            _memset(esi[0x11], 0, (esi[0x13] << 1) + 0xfffffffe)
                            
                            if (esi[0x1d] == 0)
                                esi[0x1b] = 0
                                esi[0x17] = 0
                                esi[0x5ad] = 0
                    
                    sub_69e250(arg1)
                    
                    if (arg1[4] != 0)
                        goto label_69ea43
                    
                labelid_2:
                    esi[0xa] = 0xffffffff
                else if (arg1[4] == 0)
                    esi[0xa] = 0xffffffff
            else
            label_69ea43:
                
                if (arg2 == 4)
                    int32_t eax_107 = esi[6]
                    
                    if (eax_107 s<= 0)
                        return arg2 - 3
                    
                    if (eax_107 != 2)
                        sub_69e220(esi, zx.d(*(arg1 + 0x32)))
                        sub_69e220(esi, zx.d(arg1[0xc].w))
                    else
                        esi[5][esi[2]] = arg1[0xc].b
                        esi[5] += 1
                        esi[5][esi[2]] = *(arg1 + 0x31)
                        esi[5] += 1
                        esi[5][esi[2]] = *(arg1 + 0x32)
                        esi[5] += 1
                        esi[5][esi[2]] = *(arg1 + 0x33)
                        esi[5] += 1
                        esi[5][esi[2]] = arg1[2].b
                        esi[5] += 1
                        esi[5][esi[2]] = *(arg1 + 9)
                        esi[5] += 1
                        esi[5][esi[2]] = *(arg1 + 0xa)
                        esi[5] += 1
                        esi[5][esi[2]] = *(arg1 + 0xb)
                        esi[5] += 1
                    
                    sub_69e250(arg1)
                    int32_t eax_117 = esi[6]
                    
                    if (eax_117 s> 0)
                        esi[6] = neg.d(eax_117)
                    
                    int32_t result
                    result.b = esi[5] == 0
                    return result
        else
            if (*(esi[7] + 0x2c) == 0)
                goto label_69e921
            
            if (esi[5] + 2 u> esi[3])
                sub_69e250(arg1)
            
            if (esi[5] + 2 u> esi[3] && esi[5] != 0)
            label_69e321:
                esi[0xa] = 0xffffffff
            else
                esi[5][esi[2]] = arg1[0xc].b
                esi[5] += 1
                esi[5][esi[2]] = *(arg1 + 0x31)
                esi[5] += 1
                arg1[0xc] = 0
            label_69e921:
                esi[1] = 0x71
                sub_69e250(arg1)
                
                if (esi[5] == 0)
                    goto label_69e937
                
            label_69e321_1:
                esi[0xa] = 0xffffffff
else
    sub_69e250(arg1)
    
    if (arg1[4] != 0)
        goto label_69e363
    
label_69e321_2:
    esi[0xa] = 0xffffffff

return 0
