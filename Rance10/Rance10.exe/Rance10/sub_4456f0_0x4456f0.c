// 函数: sub_4456f0
// 地址: 0x4456f0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* ebx = arg1
int32_t i_1 = 8
void* ecx = arg2
void* var_28 = ebx
void* eax_1 = arg7 * 2
void* edx_6 = arg3
void* esi = arg5
void* ebp = ecx * 2
void* eax_2 = edx_6 * 2
arg5 = ebp
int16_t result
int32_t i

do
    void* edi_1 = ecx + esi
    int16_t* eax_4 = *(ebx + 0x14) + ebp
    int32_t ecx_2 = *(arg4 + 0x14)
    int16_t* ebx_1 = ecx_2 + ((edi_1 + edx_6) << 1)
    int32_t eax_10 = sx.d(*ebx_1) + sx.d(*(ecx_2 + (edi_1 << 1) + 2)) + sx.d(ebx_1[1])
        + sx.d(*(ecx_2 + (edi_1 << 1))) + 2
    
    if (eax_10 s< 0)
        eax_10 += 3
    
    void* edi_4 = arg2 + 1 + esi
    int32_t eax_16
    int32_t edx_11
    edx_11:eax_16 = sx.q(sx.d(*(*(arg6 + 0x14) + ebp + eax_1)) + sx.d((eax_10 s>> 2).w) + 1)
    *eax_4 += ((eax_16 - edx_11) s>> 1).w
    int16_t* eax_22 = *(var_28 + 0x14) + 2 + arg5
    int32_t ecx_6 = *(arg4 + 0x14)
    int16_t* ebx_2 = ecx_6 + ((arg3 + edi_4) << 1)
    int32_t eax_31 = sx.d(*ebx_2) + 2 + sx.d(*(ecx_6 + (edi_4 << 1) + 2)) + sx.d(ebx_2[1])
        + sx.d(*(ecx_6 + (edi_4 << 1)))
    
    if (eax_31 s< 0)
        eax_31 += 3
    
    int32_t eax_38
    int32_t edx_15
    edx_15:eax_38 = sx.q(sx.d(*(*(arg6 + 0x14) + eax_1 + arg5 + 2)) + 1 + sx.d((eax_31 s>> 2).w))
    *eax_22 += ((eax_38 - edx_15) s>> 1).w
    void* edx_18 = arg2 + 2 + esi
    int32_t ebp_4 = *(var_28 + 0x14)
    int32_t ecx_9 = *(arg4 + 0x14)
    int16_t* edx_19 = ecx_9 + (edx_18 << 1)
    int16_t* edi_5 = ecx_9 + ((arg3 + edx_18) << 1)
    int32_t eax_50 = sx.d(*edi_5) + 2 + sx.d(edx_19[1]) + sx.d(edi_5[1]) + sx.d(*edx_19)
    
    if (eax_50 s< 0)
        eax_50 += 3
    
    int32_t eax_57
    int32_t edx_20
    edx_20:eax_57 =
        sx.q(sx.d(*(*(arg6 + 0x14) + (arg7 << 1) + 4 + arg5)) + 1 + sx.d((eax_50 s>> 2).w))
    *(arg5 + ebp_4 + 4) += ((eax_57 - edx_20) s>> 1).w
    void* edx_23 = arg2 + 3 + esi
    int32_t ebp_5 = *(var_28 + 0x14)
    int32_t ecx_14 = *(arg4 + 0x14)
    int16_t* edx_24 = ecx_14 + (edx_23 << 1)
    int16_t* edi_6 = ecx_14 + ((arg3 + edx_23) << 1)
    int32_t eax_69 = sx.d(*edi_6) + 2 + sx.d(edx_24[1]) + sx.d(edi_6[1]) + sx.d(*edx_24)
    
    if (eax_69 s< 0)
        eax_69 += 3
    
    int32_t eax_76
    int32_t edx_25
    edx_25:eax_76 =
        sx.q(sx.d(*(*(arg6 + 0x14) + arg5 + (arg7 << 1) + 6)) + 1 + sx.d((eax_69 s>> 2).w))
    *(arg5 + ebp_5 + 6) += ((eax_76 - edx_25) s>> 1).w
    void* edx_28 = arg2 + 4 + esi
    int32_t ebp_6 = *(var_28 + 0x14)
    int32_t ecx_19 = *(arg4 + 0x14)
    int16_t* edx_29 = ecx_19 + (edx_28 << 1)
    int16_t* edi_7 = ecx_19 + ((arg3 + edx_28) << 1)
    int32_t eax_88 = sx.d(*edi_7) + 2 + sx.d(edx_29[1]) + sx.d(edi_7[1]) + sx.d(*edx_29)
    
    if (eax_88 s< 0)
        eax_88 += 3
    
    int32_t eax_95
    int32_t edx_30
    edx_30:eax_95 =
        sx.q(sx.d(*(*(arg6 + 0x14) + arg5 + (arg7 << 1) + 8)) + 1 + sx.d((eax_88 s>> 2).w))
    *(arg5 + ebp_6 + 8) += ((eax_95 - edx_30) s>> 1).w
    void* edx_33 = arg2 + 5 + esi
    int32_t ebp_7 = *(var_28 + 0x14)
    int32_t ecx_24 = *(arg4 + 0x14)
    int16_t* edx_34 = ecx_24 + (edx_33 << 1)
    int16_t* edi_8 = ecx_24 + ((arg3 + edx_33) << 1)
    int32_t eax_107 = sx.d(*edi_8) + 2 + sx.d(edx_34[1]) + sx.d(edi_8[1]) + sx.d(*edx_34)
    
    if (eax_107 s< 0)
        eax_107 += 3
    
    int32_t eax_114
    int32_t edx_35
    edx_35:eax_114 =
        sx.q(sx.d(*(*(arg6 + 0x14) + arg5 + (arg7 << 1) + 0xa)) + 1 + sx.d((eax_107 s>> 2).w))
    *(arg5 + ebp_7 + 0xa) += ((eax_114 - edx_35) s>> 1).w
    void* edx_38 = arg2 + 6 + esi
    int32_t ebp_8 = *(var_28 + 0x14)
    int32_t ecx_29 = *(arg4 + 0x14)
    int16_t* edx_39 = ecx_29 + (edx_38 << 1)
    int16_t* edi_9 = ecx_29 + ((arg3 + edx_38) << 1)
    int32_t eax_126 = sx.d(*edi_9) + 2 + sx.d(edx_39[1]) + sx.d(edi_9[1]) + sx.d(*edx_39)
    
    if (eax_126 s< 0)
        eax_126 += 3
    
    int32_t eax_133
    int32_t edx_40
    edx_40:eax_133 =
        sx.q(sx.d(*(*(arg6 + 0x14) + arg5 + (arg7 << 1) + 0xc)) + 1 + sx.d((eax_126 s>> 2).w))
    *(arg5 + ebp_8 + 0xc) += ((eax_133 - edx_40) s>> 1).w
    void* edx_43 = arg2 + 7 + esi
    int32_t ebp_9 = *(var_28 + 0x14)
    int32_t ecx_34 = *(arg4 + 0x14)
    int16_t* edx_44 = ecx_34 + (edx_43 << 1)
    int16_t* edi_10 = ecx_34 + ((arg3 + edx_43) << 1)
    int32_t eax_145 = sx.d(*edi_10) + 2 + sx.d(edx_44[1]) + sx.d(edi_10[1]) + sx.d(*edx_44)
    
    if (eax_145 s< 0)
        eax_145 += 3
    
    ebx = var_28
    int32_t eax_152
    int32_t edx_45
    edx_45:eax_152 =
        sx.q(sx.d(*(*(arg6 + 0x14) + arg5 + (arg7 << 1) + 0xe)) + 1 + sx.d((eax_145 s>> 2).w))
    result = ((eax_152 - edx_45) s>> 1).w
    *(arg5 + ebp_9 + 0xe) += result
    edx_6 = arg3
    ecx = arg2 + edx_6
    ebp = eax_2 + arg5 + 0x10 - 0x10
    i = i_1
    i_1 -= 1
    arg2 = ecx
    arg5 = ebp
while (i != 1)
return result
