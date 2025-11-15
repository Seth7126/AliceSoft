// 函数: sub_5ebde0
// 地址: 0x5ebde0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* ebx = sub_566690(data_7fd4cc, arg2, arg4)
int32_t eax

if (ebx == 0)
    eax.b = 0
    return eax

if (arg5 s>= 0)
    int32_t eax_1
    int32_t edx
    edx:eax_1 = muls.dp.d(0x4da637d, ebx[2] - ebx[1])
    int32_t edx_1 = edx s>> 4
    
    if (arg5 s< (edx_1 u>> 0x1f) + edx_1)
        int32_t esi_1 = arg5 * 0x34c
        void* esi_2 = esi_1 + ebx[1]
        int32_t eax_66
        int32_t ecx_5
        int32_t edx_6
        int32_t edi_16
        int32_t xmm0_14
        int32_t xmm0_48
        int64_t xmm1
        int64_t xmm1_1
        float xmm2[0x4]
        float xmm2_2[0x4]
        
        if (esi_1 != neg.d(ebx[1]) && arg3 - 0xc u<= 0x9b)
            switch (arg3 + &jump_table_5ecb48[0x49])
                case &lookup_table_5ecc78
                    eax.b = 1
                    *(esi_2 + 0x28) = arg7
                    *ebx += 1
                    return eax
                case &lookup_table_5ecc78[1]
                    eax.b = 1
                    *(esi_2 + 0x2c) = arg7
                    *ebx += 1
                    return eax
                case &lookup_table_5ecc78[2]
                    eax.b = 1
                    *(esi_2 + 0x30) = arg7
                    *ebx += 1
                    return eax
                case &lookup_table_5ecc78[6]
                    eax.b = 1
                    *(esi_2 + 0x4c) = arg7
                    *ebx += 1
                    return eax
                case &lookup_table_5ecc78[7]
                    eax.b = 1
                    *(esi_2 + 0x58) = arg7
                    *ebx += 1
                    return eax
                case &lookup_table_5ecc78[8]
                    eax.b = 1
                    *(esi_2 + 0x64) = arg7
                    *ebx += 1
                    return eax
                case &lookup_table_5ecc78[9]
                    eax.b = 1
                    *(esi_2 + 0x70) = arg7
                    *ebx += 1
                    return eax
                case &lookup_table_5ecc78[0xa]
                    eax.b = 1
                    *(esi_2 + 0x7c) = arg7
                    *ebx += 1
                    return eax
                case &lookup_table_5ecc78[0xb]
                    eax.b = 1
                    *(esi_2 + 0x88) = arg7
                    *ebx += 1
                    return eax
                case &lookup_table_5ecc78[0xc]
                    eax.b = 1
                    *(esi_2 + 0x94) = arg7
                    *ebx += 1
                    return eax
                case &lookup_table_5ecc78[0xd]
                    eax.b = 1
                    *(esi_2 + 0xa0) = arg7
                    *ebx += 1
                    return eax
                case &lookup_table_5ecc78[0x12]
                    eax.b = 1
                    *(esi_2 + 0xb0) = arg7
                    *ebx += 1
                    return eax
                case &lookup_table_5ecc78[0x13]
                    eax.b = 1
                    *(esi_2 + 0xbc) = arg7
                    *ebx += 1
                    return eax
                case &lookup_table_5ecc78[0x14]
                    eax.b = 1
                    *(esi_2 + 0xc8) = arg7
                    *ebx += 1
                    return eax
                case &lookup_table_5ecc78[0x16]
                    xmm2 = arg7
                    xmm1 = *(esi_2 + 0xd8)
                label_5ebfb0:
                    xmm0_14 = *(esi_2 + 0xdc)
                    goto label_5ebfbb
                case &lookup_table_5ecc78[0x17]
                    xmm2 = *(esi_2 + 0xd4)
                    xmm1 = arg7
                    goto label_5ebfb0
                case &lookup_table_5ecc78[0x18]
                    xmm2 = *(esi_2 + 0xd4)
                    xmm1 = *(esi_2 + 0xd8)
                    xmm0_14 = arg7
                label_5ebfbb:
                    *(esi_2 + 0xd4) = _mm_unpacklo_ps(xmm2, xmm1)
                    *(esi_2 + 0xdc) = xmm0_14
                    int32_t eax_4
                    eax_4.b = 1
                    *ebx += 1
                    return eax_4
                case &lookup_table_5ecc78[0x19]
                    eax.b = 1
                    *(esi_2 + 0xe0) = arg7
                    *ebx += 1
                    return eax
                case &lookup_table_5ecc78[0x1a]
                    eax.b = 1
                    *(esi_2 + 0xe4) = arg7
                    *ebx += 1
                    return eax
                case &lookup_table_5ecc78[0x1d]
                    eax.b = 1
                    *(esi_2 + 0x104) = arg7
                    *ebx += 1
                    return eax
                case &lookup_table_5ecc78[0x20]
                    eax.b = 1
                    *(esi_2 + 0x12c) = arg7
                    *ebx += 1
                    return eax
                case &lookup_table_5ecc78[0x21]
                    eax.b = 1
                    *(esi_2 + 0x138) = arg7
                    *ebx += 1
                    return eax
                case &lookup_table_5ecc78[0x22]
                    eax.b = 1
                    *(esi_2 + 0x144) = arg7
                    *ebx += 1
                    return eax
                case &lookup_table_5ecc78[0x23]
                    eax.b = 1
                    *(esi_2 + 0x150) = arg7
                    *ebx += 1
                    return eax
                case &lookup_table_5ecc78[0x24]
                    eax.b = 1
                    *(esi_2 + 0x158) = arg7
                    *ebx += 1
                    return eax
                case &lookup_table_5ecc78[0x25]
                    eax.b = 1
                    *(esi_2 + 0x15c) = arg7
                    *ebx += 1
                    return eax
                case &lookup_table_5ecc78[0x26]
                    eax.b = 1
                    *(esi_2 + 0x160) = arg7
                    *ebx += 1
                    return eax
                case &lookup_table_5ecc78[0x27]
                    eax.b = 1
                    *(esi_2 + 0x164) = arg7
                    *ebx += 1
                    return eax
                case &lookup_table_5ecc78[0x29]
                    eax.b = 1
                    *(esi_2 + 0x16c) = arg7
                    *ebx += 1
                    return eax
                case &lookup_table_5ecc78[0x2a]
                    eax.b = 1
                    *(esi_2 + 0x170) = arg7
                    *ebx += 1
                    return eax
                case &lookup_table_5ecc78[0x2b]
                    eax.b = 1
                    *(esi_2 + 0x178) = arg7
                    *ebx += 1
                    return eax
                case &lookup_table_5ecc78[0x2c]
                    eax.b = 1
                    *(esi_2 + 0x184) = arg7
                    *ebx += 1
                    return eax
                case &lookup_table_5ecc78[0x2d]
                    eax.b = 1
                    *(esi_2 + 0x190) = arg7
                    *ebx += 1
                    return eax
                case &lookup_table_5ecc78[0x2e]
                    eax.b = 1
                    *(esi_2 + 0x19c) = arg7
                    *ebx += 1
                    return eax
                case &lookup_table_5ecc78[0x2f]
                    eax.b = 1
                    *(esi_2 + 0x1a8) = arg7
                    *ebx += 1
                    return eax
                case &lookup_table_5ecc78[0x30]
                    eax.b = 1
                    *(esi_2 + 0x1b4) = arg7
                    *ebx += 1
                    return eax
                case &lookup_table_5ecc78[0x34]
                    eax.b = 1
                    *(esi_2 + 0x1c0) = arg7
                    *ebx += 1
                    return eax
                case &lookup_table_5ecc78[0x35]
                    eax.b = 1
                    *(esi_2 + 0x1c4) = arg7
                    *ebx += 1
                    return eax
                case &lookup_table_5ecc78[0x36]
                    eax.b = 1
                    *(esi_2 + 0x1c8) = arg7
                    *ebx += 1
                    return eax
                case &lookup_table_5ecc78[0x37]
                    eax.b = 1
                    *(esi_2 + 0x1cc) = arg7
                    *ebx += 1
                    return eax
                case &lookup_table_5ecc78[0x38]
                    eax.b = 1
                    *(esi_2 + 0x1d0) = arg7
                    *ebx += 1
                    return eax
                case &lookup_table_5ecc78[0x39]
                    eax.b = 1
                    *(esi_2 + 0x1d4) = arg7
                    *ebx += 1
                    return eax
                case &lookup_table_5ecc78[0x3a]
                    eax.b = 1
                    *(esi_2 + 0x1d8) = arg7
                    *ebx += 1
                    return eax
                case &lookup_table_5ecc78[0x3b]
                    eax.b = 1
                    *(esi_2 + 0x1dc) = arg7
                    *ebx += 1
                    return eax
                case &lookup_table_5ecc78[0x3c]
                    eax.b = 1
                    *(esi_2 + 0x1e0) = arg7
                    *ebx += 1
                    return eax
                case &lookup_table_5ecc78[0x3d]
                    eax.b = 1
                    *(esi_2 + 0x1e4) = arg7
                    *ebx += 1
                    return eax
                case &lookup_table_5ecc78[0x3e]
                    eax.b = 1
                    *(esi_2 + 0x1e8) = arg7
                    *ebx += 1
                    return eax
                case &lookup_table_5ecc78[0x3f]
                    eax.b = 1
                    *(esi_2 + 0x1ec) = arg7
                    *ebx += 1
                    return eax
                case &lookup_table_5ecc78[0x40]
                    eax.b = 1
                    *(esi_2 + 0x1f4) = arg7
                    *ebx += 1
                    return eax
                case &lookup_table_5ecc78[0x41]
                    eax.b = 1
                    *(esi_2 + 0x200) = arg7
                    *ebx += 1
                    return eax
                case &lookup_table_5ecc78[0x4f]
                    if (arg6 s>= 0 && arg6 s< (*(esi_2 + 0x29c) - *(esi_2 + 0x298)) s/ 0x1c)
                        ecx_5 = *(esi_2 + 0x298)
                        xmm2_2 = arg7
                        edx_6 = arg6 * 7
                        xmm1_1 = *(ecx_5 + (edx_6 << 2) + 0xc)
                    label_5ec38d:
                        xmm0_48 = *(ecx_5 + (edx_6 << 2) + 0x10)
                        goto label_5ec3a1
                case &lookup_table_5ecc78[0x50]
                    if (arg6 s>= 0 && arg6 s< (*(esi_2 + 0x29c) - *(esi_2 + 0x298)) s/ 0x1c)
                        ecx_5 = *(esi_2 + 0x298)
                        xmm1_1 = arg7
                        edx_6 = arg6 * 7
                        xmm2_2 = *(ecx_5 + (edx_6 << 2) + 8)
                        goto label_5ec38d
                case &lookup_table_5ecc78[0x51]
                    if (arg6 s>= 0 && arg6 s< (*(esi_2 + 0x29c) - *(esi_2 + 0x298)) s/ 0x1c)
                        ecx_5 = *(esi_2 + 0x298)
                        xmm0_48 = arg7
                        edx_6 = arg6 * 7
                        xmm2_2 = *(ecx_5 + (edx_6 << 2) + 8)
                        xmm1_1 = *(ecx_5 + (edx_6 << 2) + 0xc)
                    label_5ec3a1:
                        *(ecx_5 + (edx_6 << 2) + 8) = _mm_unpacklo_ps(xmm2_2, xmm1_1)
                        *(ecx_5 + (edx_6 << 2) + 0x10) = xmm0_48
                        int32_t eax_8
                        eax_8.b = 1
                        *ebx += 1
                        return eax_8
                case &lookup_table_5ecc78[0x52]
                    if (arg6 s>= 0 && arg6 s< (*(esi_2 + 0x29c) - *(esi_2 + 0x298)) s/ 0x1c)
                        *(*(esi_2 + 0x298) + arg6 * 0x1c + 0x14) = arg7
                        int32_t eax_18
                        eax_18.b = 1
                        *ebx += 1
                        return eax_18
                case &lookup_table_5ecc78[0x53]
                    if (arg6 s>= 0 && arg6 s< (*(esi_2 + 0x29c) - *(esi_2 + 0x298)) s/ 0x1c)
                        *(*(esi_2 + 0x298) + arg6 * 0x1c + 0x18) = arg7
                        int32_t eax_22
                        eax_22.b = 1
                        *ebx += 1
                        return eax_22
                case &lookup_table_5ecc78[0x5b]
                    if (arg6 s>= 0)
                        int32_t eax_23
                        int32_t edx_21
                        edx_21:eax_23 = muls.dp.d(0x2aaaaaab, *(esi_2 + 0x2a8) - *(esi_2 + 0x2a4))
                        int32_t edx_22 = edx_21 s>> 1
                        
                        if (arg6 s< (edx_22 u>> 0x1f) + edx_22)
                            *(*(esi_2 + 0x2a4) + arg6 * 0xc + 8) = arg7
                            int32_t eax_26
                            eax_26.b = 1
                            *ebx += 1
                            return eax_26
                case &lookup_table_5ecc78[0x61]
                    if (arg6 s>= 0)
                        int32_t eax_27
                        int32_t edx_24
                        edx_24:eax_27 = muls.dp.d(0x2aaaaaab, *(esi_2 + 0x2b4) - *(esi_2 + 0x2b0))
                        int32_t edx_25 = edx_24 s>> 1
                        
                        if (arg6 s< (edx_25 u>> 0x1f) + edx_25)
                            *(*(esi_2 + 0x2b0) + arg6 * 0xc + 8) = arg7
                            int32_t eax_30
                            eax_30.b = 1
                            *ebx += 1
                            return eax_30
                case &lookup_table_5ecc78[0x67]
                    if (arg6 s>= 0)
                        int32_t eax_31
                        int32_t edx_27
                        edx_27:eax_31 = muls.dp.d(0x2aaaaaab, *(esi_2 + 0x2c0) - *(esi_2 + 0x2bc))
                        int32_t edx_28 = edx_27 s>> 1
                        
                        if (arg6 s< (edx_28 u>> 0x1f) + edx_28)
                            *(*(esi_2 + 0x2bc) + arg6 * 0xc + 8) = arg7
                            int32_t eax_34
                            eax_34.b = 1
                            *ebx += 1
                            return eax_34
                case &lookup_table_5ecc78[0x6d]
                    if (arg6 s>= 0)
                        int32_t eax_35
                        int32_t edx_30
                        edx_30:eax_35 = muls.dp.d(0x2aaaaaab, *(esi_2 + 0x2cc) - *(esi_2 + 0x2c8))
                        int32_t edx_31 = edx_30 s>> 1
                        
                        if (arg6 s< (edx_31 u>> 0x1f) + edx_31)
                            *(*(esi_2 + 0x2c8) + arg6 * 0xc + 8) = arg7
                            int32_t eax_38
                            eax_38.b = 1
                            *ebx += 1
                            return eax_38
                case &lookup_table_5ecc78[0x73]
                    if (arg6 s>= 0)
                        int32_t eax_39
                        int32_t edx_33
                        edx_33:eax_39 = muls.dp.d(0x66666667, *(esi_2 + 0x2d8) - *(esi_2 + 0x2d4))
                        int32_t edx_34 = edx_33 s>> 3
                        
                        if (arg6 s< (edx_34 u>> 0x1f) + edx_34)
                            *(*(esi_2 + 0x2d4) + arg6 * 0x14 + 8) = arg7
                            int32_t eax_42
                            eax_42.b = 1
                            *ebx += 1
                            return eax_42
                case &lookup_table_5ecc78[0x74]
                    if (arg6 s>= 0)
                        int32_t eax_43
                        int32_t edx_35
                        edx_35:eax_43 = muls.dp.d(0x66666667, *(esi_2 + 0x2d8) - *(esi_2 + 0x2d4))
                        int32_t edx_36 = edx_35 s>> 3
                        
                        if (arg6 s< (edx_36 u>> 0x1f) + edx_36)
                            *(*(esi_2 + 0x2d4) + arg6 * 0x14 + 0xc) = arg7
                            int32_t eax_46
                            eax_46.b = 1
                            *ebx += 1
                            return eax_46
                case &lookup_table_5ecc78[0x75]
                    if (arg6 s>= 0)
                        int32_t eax_47
                        int32_t edx_37
                        edx_37:eax_47 = muls.dp.d(0x66666667, *(esi_2 + 0x2d8) - *(esi_2 + 0x2d4))
                        int32_t edx_38 = edx_37 s>> 3
                        
                        if (arg6 s< (edx_38 u>> 0x1f) + edx_38)
                            *(*(esi_2 + 0x2d4) + arg6 * 0x14 + 0x10) = arg7
                            int32_t eax_50
                            eax_50.b = 1
                            *ebx += 1
                            return eax_50
                case &lookup_table_5ecc78[0x7b]
                    if (arg6 s>= 0)
                        int32_t eax_51
                        int32_t edx_39
                        edx_39:eax_51 = muls.dp.d(0x2aaaaaab, *(esi_2 + 0x2e4) - *(esi_2 + 0x2e0))
                        int32_t edx_40 = edx_39 s>> 1
                        
                        if (arg6 s< (edx_40 u>> 0x1f) + edx_40)
                            *(*(esi_2 + 0x2e0) + arg6 * 0xc + 8) = arg7
                            int32_t eax_54
                            eax_54.b = 1
                            *ebx += 1
                            return eax_54
                case &lookup_table_5ecc78[0x81]
                    if (arg6 s>= 0)
                        int32_t eax_55
                        int32_t edx_42
                        edx_42:eax_55 = muls.dp.d(0x2aaaaaab, *(esi_2 + 0x2f0) - *(esi_2 + 0x2ec))
                        int32_t edx_43 = edx_42 s>> 2
                        
                        if (arg6 s< (edx_43 u>> 0x1f) + edx_43)
                            *(*(esi_2 + 0x2ec) + arg6 * 0x18 + 8) = arg7
                            int32_t eax_58
                            eax_58.b = 1
                            *ebx += 1
                            return eax_58
                case &lookup_table_5ecc78[0x82]
                    if (arg6 s>= 0)
                        int32_t eax_59
                        int32_t edx_44
                        edx_44:eax_59 = muls.dp.d(0x2aaaaaab, *(esi_2 + 0x2f0) - *(esi_2 + 0x2ec))
                        int32_t edx_45 = edx_44 s>> 2
                        
                        if (arg6 s< (edx_45 u>> 0x1f) + edx_45)
                            *(*(esi_2 + 0x2ec) + arg6 * 0x18 + 0xc) = arg7
                            int32_t eax_62
                            eax_62.b = 1
                            *ebx += 1
                            return eax_62
                case &lookup_table_5ecc78[0x83]
                    edi_16 = arg6
                    
                    if (edi_16 s>= 0)
                        int32_t eax_63
                        int32_t edx_46
                        edx_46:eax_63 = muls.dp.d(0x2aaaaaab, *(esi_2 + 0x2f0) - *(esi_2 + 0x2ec))
                        int32_t edx_47 = edx_46 s>> 2
                        
                        if (edi_16 s< (edx_47 u>> 0x1f) + edx_47)
                            eax_66 = *(esi_2 + 0x2ec)
                        label_5ecb2c:
                            *(eax_66 + edi_16 * 0x18 + 0x10) = arg7
                            eax_66.b = 1
                            *ebx += 1
                            return eax_66
                case &lookup_table_5ecc78[0x89]
                    if (arg6 s>= 0)
                        int32_t eax_67
                        int32_t edx_48
                        edx_48:eax_67 = muls.dp.d(0x2aaaaaab, *(esi_2 + 0x2fc) - *(esi_2 + 0x2f8))
                        int32_t edx_49 = edx_48 s>> 2
                        
                        if (arg6 s< (edx_49 u>> 0x1f) + edx_49)
                            *(*(esi_2 + 0x2f8) + arg6 * 0x18 + 8) = arg7
                            int32_t eax_70
                            eax_70.b = 1
                            *ebx += 1
                            return eax_70
                case &lookup_table_5ecc78[0x8a]
                    if (arg6 s>= 0)
                        int32_t eax_71
                        int32_t edx_50
                        edx_50:eax_71 = muls.dp.d(0x2aaaaaab, *(esi_2 + 0x2fc) - *(esi_2 + 0x2f8))
                        int32_t edx_51 = edx_50 s>> 2
                        
                        if (arg6 s< (edx_51 u>> 0x1f) + edx_51)
                            *(*(esi_2 + 0x2f8) + arg6 * 0x18 + 0xc) = arg7
                            int32_t eax_74
                            eax_74.b = 1
                            *ebx += 1
                            return eax_74
                case &lookup_table_5ecc78[0x8b]
                    edi_16 = arg6
                    
                    if (edi_16 s>= 0)
                        int32_t eax_75
                        int32_t edx_52
                        edx_52:eax_75 = muls.dp.d(0x2aaaaaab, *(esi_2 + 0x2fc) - *(esi_2 + 0x2f8))
                        int32_t edx_53 = edx_52 s>> 2
                        
                        if (edi_16 s< (edx_53 u>> 0x1f) + edx_53)
                            eax_66 = *(esi_2 + 0x2f8)
                            goto label_5ecb2c
                case &lookup_table_5ecc78[0x91]
                    if (arg6 s>= 0)
                        int32_t eax_78
                        int32_t edx_54
                        edx_54:eax_78 = muls.dp.d(0x2aaaaaab, *(esi_2 + 0x308) - *(esi_2 + 0x304))
                        int32_t edx_55 = edx_54 s>> 2
                        
                        if (arg6 s< (edx_55 u>> 0x1f) + edx_55)
                            *(*(esi_2 + 0x304) + arg6 * 0x18 + 8) = arg7
                            int32_t eax_81
                            eax_81.b = 1
                            *ebx += 1
                            return eax_81
                case &lookup_table_5ecc78[0x92]
                    if (arg6 s>= 0)
                        int32_t eax_82
                        int32_t edx_56
                        edx_56:eax_82 = muls.dp.d(0x2aaaaaab, *(esi_2 + 0x308) - *(esi_2 + 0x304))
                        int32_t edx_57 = edx_56 s>> 2
                        
                        if (arg6 s< (edx_57 u>> 0x1f) + edx_57)
                            *(*(esi_2 + 0x304) + arg6 * 0x18 + 0xc) = arg7
                            int32_t eax_85
                            eax_85.b = 1
                            *ebx += 1
                            return eax_85
                case &lookup_table_5ecc78[0x93]
                    edi_16 = arg6
                    
                    if (edi_16 s>= 0)
                        int32_t eax_86
                        int32_t edx_58
                        edx_58:eax_86 = muls.dp.d(0x2aaaaaab, *(esi_2 + 0x308) - *(esi_2 + 0x304))
                        int32_t edx_59 = edx_58 s>> 2
                        
                        if (edi_16 s< (edx_59 u>> 0x1f) + edx_59)
                            eax_66 = *(esi_2 + 0x304)
                            goto label_5ecb2c
                case &lookup_table_5ecc78[0x99]
                    if (arg6 s>= 0)
                        int32_t eax_89
                        int32_t edx_60
                        edx_60:eax_89 = muls.dp.d(0x2aaaaaab, *(esi_2 + 0x314) - *(esi_2 + 0x310))
                        int32_t edx_61 = edx_60 s>> 2
                        
                        if (arg6 s< (edx_61 u>> 0x1f) + edx_61)
                            *(*(esi_2 + 0x310) + arg6 * 0x18 + 8) = arg7
                            int32_t eax_92
                            eax_92.b = 1
                            *ebx += 1
                            return eax_92
                case &lookup_table_5ecc78[0x9a]
                    if (arg6 s>= 0)
                        int32_t eax_93
                        int32_t edx_62
                        edx_62:eax_93 = muls.dp.d(0x2aaaaaab, *(esi_2 + 0x314) - *(esi_2 + 0x310))
                        int32_t edx_63 = edx_62 s>> 2
                        
                        if (arg6 s< (edx_63 u>> 0x1f) + edx_63)
                            *(*(esi_2 + 0x310) + arg6 * 0x18 + 0xc) = arg7
                            int32_t eax_96
                            eax_96.b = 1
                            *ebx += 1
                            return eax_96
                case &lookup_table_5ecc78[0x9b]
                    edi_16 = arg6
                    
                    if (edi_16 s>= 0)
                        int32_t eax_97
                        int32_t edx_64
                        edx_64:eax_97 = muls.dp.d(0x2aaaaaab, *(esi_2 + 0x314) - *(esi_2 + 0x310))
                        int32_t edx_65 = edx_64 s>> 2
                        
                        if (edi_16 s< (edx_65 u>> 0x1f) + edx_65)
                            eax_66 = *(esi_2 + 0x310)
                            goto label_5ecb2c

eax.b = 0
return eax
