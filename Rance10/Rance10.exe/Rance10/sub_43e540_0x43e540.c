// 函数: sub_43e540
// 地址: 0x43e540
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t result = arg5
int32_t ecx = result + 1
int32_t i_1 = 8
int32_t ecx_1 = result + 2
int32_t ecx_2 = result + 3
int32_t ecx_3 = result + 4
int32_t ecx_4 = result + 5
int32_t ecx_5 = result + 6
int32_t ecx_6 = result + 7
int32_t esi = arg7
int32_t edi = arg3
int32_t ecx_7 = arg2
int32_t edx = edi * 2
int32_t ebp = ecx_7 * 2
arg7 = ebp
int32_t i

do
    int32_t ebx_1 = ecx_7 + result
    int32_t edx_1 = ecx_7 + esi
    int32_t ecx_9 = *(arg6 + 8)
    int16_t* eax_2 = *(arg1 + 8) + ebp
    int16_t* ebp_1 = ecx_9 + (edx_1 << 1)
    int16_t* edi_1 = ecx_9 + ((edx_1 + edi) << 1)
    int32_t edx_3 = *(arg4 + 8)
    int32_t eax_8 = sx.d(*(edx_3 + (ebx_1 << 1))) + sx.d(*(edx_3 + ((arg3 + ebx_1) << 1))) + 1
    
    if (eax_8 s< 0)
        eax_8 += 1
    
    int32_t eax_14 = sx.d(*ebp_1) + sx.d(ebp_1[1]) + sx.d(edi_1[1]) + sx.d(*edi_1) + 2
    
    if (eax_14 s< 0)
        eax_14 += 3
    
    int32_t eax_18
    int32_t edx_6
    edx_6:eax_18 = sx.q(sx.d((eax_14 s>> 2).w) + sx.d((eax_8 s>> 1).w) + 1)
    *eax_2 += ((eax_18 - edx_6) s>> 1).w
    int32_t ebx_3 = ecx + arg2
    int32_t edx_8 = arg2 + 1 + esi
    int16_t* eax_24 = *(arg1 + 8) + arg7 + 2
    int32_t ecx_19 = *(arg6 + 8)
    int16_t* ebp_2 = ecx_19 + (edx_8 << 1)
    int16_t* edi_2 = ecx_19 + ((arg3 + edx_8) << 1)
    int32_t edx_9 = *(arg4 + 8)
    int32_t eax_34 = sx.d(*(edx_9 + (ebx_3 << 1))) + 1 + sx.d(*(edx_9 + ((arg3 + ebx_3) << 1)))
    
    if (eax_34 s< 0)
        eax_34 += 1
    
    int32_t eax_41 = sx.d(*ebp_2) + 2 + sx.d(ebp_2[1]) + sx.d(edi_2[1]) + sx.d(*edi_2)
    
    if (eax_41 s< 0)
        eax_41 += 3
    
    int32_t eax_45
    int32_t edx_12
    edx_12:eax_45 = sx.q(sx.d((eax_41 s>> 2).w) + sx.d((eax_34 s>> 1).w) + 1)
    *eax_24 += ((eax_45 - edx_12) s>> 1).w
    int32_t ebp_4 = ecx_1 + arg2
    int32_t edx_14 = arg2 + 2 + esi
    int32_t ecx_25 = *(arg6 + 8)
    int16_t* ebx_4 = ecx_25 + (edx_14 << 1)
    int16_t* edi_3 = ecx_25 + ((arg3 + edx_14) << 1)
    int32_t edx_15 = *(arg4 + 8)
    int32_t eax_58 = sx.d(*(edx_15 + (ebp_4 << 1))) + 1 + sx.d(*(edx_15 + ((arg3 + ebp_4) << 1)))
    
    if (eax_58 s< 0)
        eax_58 += 1
    
    int32_t eax_65 = sx.d(*ebx_4) + 2 + sx.d(ebx_4[1]) + sx.d(edi_3[1]) + sx.d(*edi_3)
    
    if (eax_65 s< 0)
        eax_65 += 3
    
    int32_t ecx_30 = *(arg1 + 8)
    int32_t eax_69
    int32_t edx_18
    edx_18:eax_69 = sx.q(sx.d((eax_65 s>> 2).w) + sx.d((eax_58 s>> 1).w) + 1)
    *(arg7 + ecx_30 + 4) += ((eax_69 - edx_18) s>> 1).w
    int32_t ebp_6 = ecx_2 + arg2
    int32_t edx_21 = arg2 + 3 + esi
    int32_t ecx_31 = *(arg6 + 8)
    int16_t* ebx_6 = ecx_31 + (edx_21 << 1)
    int16_t* edi_4 = ecx_31 + ((arg3 + edx_21) << 1)
    int32_t edx_22 = *(arg4 + 8)
    int32_t eax_82 = sx.d(*(edx_22 + (ebp_6 << 1))) + 1 + sx.d(*(edx_22 + ((arg3 + ebp_6) << 1)))
    
    if (eax_82 s< 0)
        eax_82 += 1
    
    int32_t eax_89 = sx.d(*ebx_6) + 2 + sx.d(ebx_6[1]) + sx.d(edi_4[1]) + sx.d(*edi_4)
    
    if (eax_89 s< 0)
        eax_89 += 3
    
    int32_t eax_93
    int32_t edx_25
    edx_25:eax_93 = sx.q(sx.d((eax_89 s>> 2).w) + sx.d((eax_82 s>> 1).w) + 1)
    int32_t ecx_36 = *(arg1 + 8)
    *(arg7 + ecx_36 + 6) += ((eax_93 - edx_25) s>> 1).w
    int32_t ebp_8 = ecx_3 + arg2
    int32_t edx_28 = arg2 + 4 + esi
    int32_t ecx_37 = *(arg6 + 8)
    int16_t* ebx_8 = ecx_37 + (edx_28 << 1)
    int16_t* edi_5 = ecx_37 + ((arg3 + edx_28) << 1)
    int32_t edx_29 = *(arg4 + 8)
    int32_t eax_106 = sx.d(*(edx_29 + (ebp_8 << 1))) + 1 + sx.d(*(edx_29 + ((arg3 + ebp_8) << 1)))
    
    if (eax_106 s< 0)
        eax_106 += 1
    
    int32_t eax_113 = sx.d(*ebx_8) + 2 + sx.d(ebx_8[1]) + sx.d(edi_5[1]) + sx.d(*edi_5)
    
    if (eax_113 s< 0)
        eax_113 += 3
    
    int32_t ecx_42 = *(arg1 + 8)
    int32_t eax_117
    int32_t edx_32
    edx_32:eax_117 = sx.q(sx.d((eax_113 s>> 2).w) + sx.d((eax_106 s>> 1).w) + 1)
    *(arg7 + ecx_42 + 8) += ((eax_117 - edx_32) s>> 1).w
    int32_t ebp_10 = ecx_4 + arg2
    int32_t edx_35 = arg2 + 5 + esi
    int32_t ecx_43 = *(arg6 + 8)
    int16_t* ebx_10 = ecx_43 + (edx_35 << 1)
    int16_t* edi_6 = ecx_43 + ((arg3 + edx_35) << 1)
    int32_t edx_36 = *(arg4 + 8)
    int32_t eax_130 = sx.d(*(edx_36 + (ebp_10 << 1))) + 1 + sx.d(*(edx_36 + ((arg3 + ebp_10) << 1)))
    
    if (eax_130 s< 0)
        eax_130 += 1
    
    int32_t eax_137 = sx.d(*ebx_10) + 2 + sx.d(ebx_10[1]) + sx.d(edi_6[1]) + sx.d(*edi_6)
    
    if (eax_137 s< 0)
        eax_137 += 3
    
    int32_t eax_141
    int32_t edx_39
    edx_39:eax_141 = sx.q(sx.d((eax_137 s>> 2).w) + sx.d((eax_130 s>> 1).w) + 1)
    int32_t ecx_48 = *(arg1 + 8)
    *(arg7 + ecx_48 + 0xa) += ((eax_141 - edx_39) s>> 1).w
    int32_t ebp_12 = ecx_5 + arg2
    int32_t edx_42 = arg2 + 6 + esi
    int32_t ecx_49 = *(arg6 + 8)
    int16_t* ebx_12 = ecx_49 + (edx_42 << 1)
    int16_t* edi_7 = ecx_49 + ((arg3 + edx_42) << 1)
    int32_t edx_43 = *(arg4 + 8)
    int32_t eax_154 = sx.d(*(edx_43 + (ebp_12 << 1))) + 1 + sx.d(*(edx_43 + ((arg3 + ebp_12) << 1)))
    
    if (eax_154 s< 0)
        eax_154 += 1
    
    int32_t eax_161 = sx.d(*ebx_12) + 2 + sx.d(ebx_12[1]) + sx.d(edi_7[1]) + sx.d(*edi_7)
    
    if (eax_161 s< 0)
        eax_161 += 3
    
    int32_t ecx_54 = *(arg1 + 8)
    int32_t eax_165
    int32_t edx_46
    edx_46:eax_165 = sx.q(sx.d((eax_161 s>> 2).w) + sx.d((eax_154 s>> 1).w) + 1)
    *(arg7 + ecx_54 + 0xc) += ((eax_165 - edx_46) s>> 1).w
    int32_t ebp_14 = ecx_6 + arg2
    int32_t edx_49 = arg2 + 7 + esi
    int32_t ecx_55 = *(arg6 + 8)
    int16_t* ebx_14 = ecx_55 + (edx_49 << 1)
    int16_t* edi_8 = ecx_55 + ((arg3 + edx_49) << 1)
    int32_t edx_50 = *(arg4 + 8)
    int32_t eax_178 = sx.d(*(edx_50 + (ebp_14 << 1))) + 1 + sx.d(*(edx_50 + ((arg3 + ebp_14) << 1)))
    
    if (eax_178 s< 0)
        eax_178 += 1
    
    int32_t eax_185 = sx.d(*ebx_14) + 2 + sx.d(ebx_14[1]) + sx.d(edi_8[1]) + sx.d(*edi_8)
    
    if (eax_185 s< 0)
        eax_185 += 3
    
    int32_t eax_189
    int32_t edx_53
    edx_53:eax_189 = sx.q(sx.d((eax_185 s>> 2).w) + sx.d((eax_178 s>> 1).w) + 1)
    int32_t ecx_60 = *(arg1 + 8)
    *(arg7 + ecx_60 + 0xe) += ((eax_189 - edx_53) s>> 1).w
    edi = arg3
    result = arg5
    ecx_7 = arg2 + edi
    ebp = edx - 0x10 + arg7 + 0x10
    i = i_1
    i_1 -= 1
    arg2 = ecx_7
    arg7 = ebp
while (i != 1)
return result
