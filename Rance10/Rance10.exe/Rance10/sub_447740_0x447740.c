// 函数: sub_447740
// 地址: 0x447740
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t result = arg5
void* ebp = arg1
int32_t i_1 = 8
int32_t ecx = result + 1
void* var_30 = ebp
int32_t ecx_1 = result + 2
int32_t ecx_2 = result + 3
int32_t ecx_3 = result + 4
int32_t ecx_4 = result + 5
int32_t ecx_5 = result + 6
int32_t ecx_6 = result + 7
int32_t esi = arg7
int32_t ecx_7 = arg2
int32_t edi = arg3
arg7 = ecx_7 * 2
int32_t edx_1 = edi * 2
int32_t i

do
    int32_t edx_2 = ecx_7 + result
    int16_t* eax_1 = *(ebp + 0x20) + arg7
    int32_t ebx_1 = ecx_7 + esi
    int32_t ecx_9 = *(arg4 + 0x20)
    int16_t* ebp_1 = ecx_9 + ((edx_2 + edi) << 1)
    int16_t* eax_3 = ecx_9 + (edx_2 << 1)
    int32_t ecx_11 = *(arg6 + 0x20)
    int16_t* edx_3 = ecx_11 + ((ebx_1 + edi) << 1)
    int32_t eax_9 = sx.d(*(ecx_11 + (ebx_1 << 1))) + sx.d(*(ecx_11 + (ebx_1 << 1) + 2))
        + sx.d(edx_3[1]) + sx.d(*edx_3) + 2
    
    if (eax_9 s< 0)
        eax_9 += 3
    
    int32_t eax_16 = sx.d(*eax_3) + 2 + sx.d(eax_3[1]) + sx.d(ebp_1[1]) + sx.d(*ebp_1)
    
    if (eax_16 s< 0)
        eax_16 += 3
    
    int32_t eax_20
    int32_t edx_6
    edx_6:eax_20 = sx.q(sx.d((eax_16 s>> 2).w) + sx.d((eax_9 s>> 2).w) + 1)
    *eax_1 += ((eax_20 - edx_6) s>> 1).w
    int32_t edx_8 = ecx + arg2
    int32_t ebx_3 = arg2 + 1 + esi
    int16_t* eax_26 = *(var_30 + 0x20) + arg7 + 2
    int32_t ecx_18 = *(arg4 + 0x20)
    int16_t* ebp_2 = ecx_18 + ((edx_8 + arg3) << 1)
    int16_t* eax_29 = ecx_18 + (edx_8 << 1)
    int32_t ecx_19 = *(arg6 + 0x20)
    int16_t* edx_9 = ecx_19 + ((ebx_3 + arg3) << 1)
    int32_t eax_37 = sx.d(*(ecx_19 + (ebx_3 << 1))) + 2 + sx.d(*(ecx_19 + (ebx_3 << 1) + 2))
        + sx.d(edx_9[1]) + sx.d(*edx_9)
    
    if (eax_37 s< 0)
        eax_37 += 3
    
    int32_t eax_44 = sx.d(*eax_29) + 2 + sx.d(eax_29[1]) + sx.d(ebp_2[1]) + sx.d(*ebp_2)
    
    if (eax_44 s< 0)
        eax_44 += 3
    
    int32_t eax_48
    int32_t edx_12
    edx_12:eax_48 = sx.q(sx.d((eax_44 s>> 2).w) + sx.d((eax_37 s>> 2).w) + 1)
    *eax_26 += ((eax_48 - edx_12) s>> 1).w
    int32_t edx_14 = ecx_1 + arg2
    int32_t edi_12 = arg2 + 2 + esi
    int32_t ecx_24 = *(arg4 + 0x20)
    int16_t* ebp_3 = ecx_24 + (edx_14 << 1)
    int16_t* ebx_4 = ecx_24 + ((arg3 + edx_14) << 1)
    int32_t ecx_25 = *(arg6 + 0x20)
    int16_t* edi_13 = ecx_25 + (edi_12 << 1)
    int16_t* edx_15 = ecx_25 + ((arg3 + edi_12) << 1)
    int32_t eax_63 = sx.d(*edi_13) + 2 + sx.d(edi_13[1]) + sx.d(edx_15[1]) + sx.d(*edx_15)
    
    if (eax_63 s< 0)
        eax_63 += 3
    
    int32_t eax_70 = sx.d(*ebp_3) + 2 + sx.d(ebp_3[1]) + sx.d(ebx_4[1]) + sx.d(*ebx_4)
    
    if (eax_70 s< 0)
        eax_70 += 3
    
    int32_t eax_74
    int32_t edx_18
    edx_18:eax_74 = sx.q(sx.d((eax_70 s>> 2).w) + sx.d((eax_63 s>> 2).w) + 1)
    int32_t ecx_32 = *(var_30 + 0x20)
    *(arg7 + ecx_32 + 4) += ((eax_74 - edx_18) s>> 1).w
    int32_t edx_21 = ecx_2 + arg2
    int32_t edi_15 = arg2 + 3 + esi
    int32_t ecx_33 = *(arg4 + 0x20)
    int16_t* ebp_4 = ecx_33 + (edx_21 << 1)
    int16_t* ebx_6 = ecx_33 + ((arg3 + edx_21) << 1)
    int32_t ecx_34 = *(arg6 + 0x20)
    int16_t* edi_16 = ecx_34 + (edi_15 << 1)
    int16_t* edx_22 = ecx_34 + ((arg3 + edi_15) << 1)
    int32_t eax_89 = sx.d(*edi_16) + 2 + sx.d(edi_16[1]) + sx.d(edx_22[1]) + sx.d(*edx_22)
    
    if (eax_89 s< 0)
        eax_89 += 3
    
    int32_t eax_96 = sx.d(*ebp_4) + 2 + sx.d(ebp_4[1]) + sx.d(ebx_6[1]) + sx.d(*ebx_6)
    
    if (eax_96 s< 0)
        eax_96 += 3
    
    int32_t eax_100
    int32_t edx_25
    edx_25:eax_100 = sx.q(sx.d((eax_96 s>> 2).w) + sx.d((eax_89 s>> 2).w) + 1)
    int32_t ecx_41 = *(var_30 + 0x20)
    *(arg7 + ecx_41 + 6) += ((eax_100 - edx_25) s>> 1).w
    int32_t edx_28 = ecx_3 + arg2
    int32_t edi_18 = arg2 + 4 + esi
    int32_t ecx_42 = *(arg4 + 0x20)
    int16_t* ebp_5 = ecx_42 + (edx_28 << 1)
    int16_t* ebx_8 = ecx_42 + ((arg3 + edx_28) << 1)
    int32_t ecx_43 = *(arg6 + 0x20)
    int16_t* edi_19 = ecx_43 + (edi_18 << 1)
    int16_t* edx_29 = ecx_43 + ((arg3 + edi_18) << 1)
    int32_t eax_115 = sx.d(*edi_19) + 2 + sx.d(edi_19[1]) + sx.d(edx_29[1]) + sx.d(*edx_29)
    
    if (eax_115 s< 0)
        eax_115 += 3
    
    int32_t eax_122 = sx.d(*ebp_5) + 2 + sx.d(ebp_5[1]) + sx.d(ebx_8[1]) + sx.d(*ebx_8)
    
    if (eax_122 s< 0)
        eax_122 += 3
    
    int32_t eax_126
    int32_t edx_32
    edx_32:eax_126 = sx.q(sx.d((eax_122 s>> 2).w) + sx.d((eax_115 s>> 2).w) + 1)
    int32_t ecx_50 = *(var_30 + 0x20)
    *(arg7 + ecx_50 + 8) += ((eax_126 - edx_32) s>> 1).w
    int32_t edx_35 = ecx_4 + arg2
    int32_t edi_21 = arg2 + 5 + esi
    int32_t ecx_51 = *(arg4 + 0x20)
    int16_t* ebp_6 = ecx_51 + (edx_35 << 1)
    int16_t* ebx_10 = ecx_51 + ((arg3 + edx_35) << 1)
    int32_t ecx_52 = *(arg6 + 0x20)
    int16_t* edi_22 = ecx_52 + (edi_21 << 1)
    int16_t* edx_36 = ecx_52 + ((arg3 + edi_21) << 1)
    int32_t eax_141 = sx.d(*edi_22) + 2 + sx.d(edi_22[1]) + sx.d(edx_36[1]) + sx.d(*edx_36)
    
    if (eax_141 s< 0)
        eax_141 += 3
    
    int32_t eax_148 = sx.d(*ebp_6) + 2 + sx.d(ebp_6[1]) + sx.d(ebx_10[1]) + sx.d(*ebx_10)
    
    if (eax_148 s< 0)
        eax_148 += 3
    
    int32_t eax_152
    int32_t edx_39
    edx_39:eax_152 = sx.q(sx.d((eax_148 s>> 2).w) + sx.d((eax_141 s>> 2).w) + 1)
    int32_t ecx_59 = *(var_30 + 0x20)
    *(arg7 + ecx_59 + 0xa) += ((eax_152 - edx_39) s>> 1).w
    int32_t edx_42 = ecx_5 + arg2
    int32_t edi_24 = arg2 + 6 + esi
    int32_t ecx_60 = *(arg4 + 0x20)
    int16_t* ebp_7 = ecx_60 + (edx_42 << 1)
    int16_t* ebx_12 = ecx_60 + ((arg3 + edx_42) << 1)
    int32_t ecx_61 = *(arg6 + 0x20)
    int16_t* edi_25 = ecx_61 + (edi_24 << 1)
    int16_t* edx_43 = ecx_61 + ((arg3 + edi_24) << 1)
    int32_t eax_167 = sx.d(*edi_25) + 2 + sx.d(edi_25[1]) + sx.d(edx_43[1]) + sx.d(*edx_43)
    
    if (eax_167 s< 0)
        eax_167 += 3
    
    int32_t eax_174 = sx.d(*ebp_7) + 2 + sx.d(ebp_7[1]) + sx.d(ebx_12[1]) + sx.d(*ebx_12)
    
    if (eax_174 s< 0)
        eax_174 += 3
    
    int32_t eax_178
    int32_t edx_46
    edx_46:eax_178 = sx.q(sx.d((eax_174 s>> 2).w) + sx.d((eax_167 s>> 2).w) + 1)
    int32_t ecx_68 = *(var_30 + 0x20)
    *(arg7 + ecx_68 + 0xc) += ((eax_178 - edx_46) s>> 1).w
    int32_t edx_49 = ecx_6 + arg2
    int32_t edi_27 = arg2 + 7 + esi
    int32_t ecx_69 = *(arg4 + 0x20)
    int16_t* ebp_8 = ecx_69 + (edx_49 << 1)
    int16_t* ebx_14 = ecx_69 + ((arg3 + edx_49) << 1)
    int32_t ecx_70 = *(arg6 + 0x20)
    int16_t* edi_28 = ecx_70 + (edi_27 << 1)
    int16_t* edx_50 = ecx_70 + ((arg3 + edi_27) << 1)
    int32_t eax_193 = sx.d(*edi_28) + 2 + sx.d(edi_28[1]) + sx.d(edx_50[1]) + sx.d(*edx_50)
    
    if (eax_193 s< 0)
        eax_193 += 3
    
    int32_t eax_200 = sx.d(*ebp_8) + 2 + sx.d(ebp_8[1]) + sx.d(ebx_14[1]) + sx.d(*ebx_14)
    
    if (eax_200 s< 0)
        eax_200 += 3
    
    ebp = var_30
    edi = arg3
    int32_t ecx_77 = *(ebp + 0x20)
    int32_t eax_204
    int32_t edx_53
    edx_53:eax_204 = sx.q(sx.d((eax_200 s>> 2).w) + sx.d((eax_193 s>> 2).w) + 1)
    *(arg7 + ecx_77 + 0xe) += ((eax_204 - edx_53) s>> 1).w
    ecx_7 = arg2 + edi
    i = i_1
    i_1 -= 1
    arg7 = edx_1 - 0x10 + arg7 + 0x10
    result = arg5
    arg2 = ecx_7
while (i != 1)
return result
