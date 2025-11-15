// 函数: sub_43d510
// 地址: 0x43d510
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* result = arg5
void* ecx = result + 1
int32_t i_1 = 8
void* ecx_1 = result + 2
void* ecx_2 = result + 3
void* ecx_3 = result + 4
void* ecx_4 = result + 5
void* ecx_5 = result + 6
void* ecx_6 = result + 7
void* esi = arg7
void* edi = arg3
void* ecx_7 = arg2
void* edx = edi * 2
void* ebp = ecx_7 * 2
arg7 = ebp
int32_t i

do
    void* edx_1 = ecx_7 + esi
    int16_t* ebp_1 = ebp + *(arg1 + 8)
    int32_t ecx_9 = *(arg6 + 8)
    int16_t* edx_2 = ecx_9 + (edx_1 << 1)
    int16_t* edi_1 = ecx_9 + ((edx_1 + edi) << 1)
    int16_t* ebx_2 = *(arg4 + 8) + ((ecx_7 + result) << 1)
    int32_t eax_9 = sx.d(*edx_2) + sx.d(edx_2[1]) + sx.d(edi_1[1]) + sx.d(*edi_1) + 2
    
    if (eax_9 s< 0)
        eax_9 += 3
    
    int32_t eax_13 = sx.d(*ebx_2) + sx.d(ebx_2[1]) + 1
    
    if (eax_13 s< 0)
        eax_13 += 1
    
    int32_t eax_17
    int32_t edx_5
    edx_5:eax_17 = sx.q(sx.d((eax_13 s>> 1).w) + sx.d((eax_9 s>> 2).w) + 1)
    *ebp_1 += ((eax_17 - edx_5) s>> 1).w
    int32_t edx_7 = arg2 + 1 + esi
    void* ebp_3 = arg7 + *(arg1 + 8)
    int32_t ecx_16 = *(arg6 + 8)
    int16_t* edx_8 = ecx_16 + (edx_7 << 1)
    int16_t* edi_2 = ecx_16 + ((arg3 + edx_7) << 1)
    int16_t* ebx_5 = *(arg4 + 8) + ((ecx + arg2) << 1)
    int32_t eax_33 = sx.d(*edx_8) + 2 + sx.d(edx_8[1]) + sx.d(edi_2[1]) + sx.d(*edi_2)
    
    if (eax_33 s< 0)
        eax_33 += 3
    
    int32_t eax_37 = sx.d(*ebx_5) + sx.d(ebx_5[1]) + 1
    
    if (eax_37 s< 0)
        eax_37 += 1
    
    int32_t eax_41
    int32_t edx_11
    edx_11:eax_41 = sx.q(sx.d((eax_37 s>> 1).w) + sx.d((eax_33 s>> 2).w) + 1)
    *(ebp_3 + 2) += ((eax_41 - edx_11) s>> 1).w
    int32_t edi_4 = arg2 + 2 + esi
    int32_t ebp_4 = *(arg1 + 8)
    int32_t ecx_22 = *(arg6 + 8)
    int16_t* edi_5 = ecx_22 + (edi_4 << 1)
    int16_t* edx_12 = ecx_22 + ((arg3 + edi_4) << 1)
    int16_t* ebx_8 = *(arg4 + 8) + ((ecx_1 + arg2) << 1)
    int32_t eax_56 = sx.d(*edi_5) + 2 + sx.d(edi_5[1]) + sx.d(edx_12[1]) + sx.d(*edx_12)
    
    if (eax_56 s< 0)
        eax_56 += 3
    
    int32_t eax_60 = sx.d(*ebx_8) + sx.d(ebx_8[1]) + 1
    
    if (eax_60 s< 0)
        eax_60 += 1
    
    int32_t eax_64
    int32_t edx_15
    edx_15:eax_64 = sx.q(sx.d((eax_60 s>> 1).w) + sx.d((eax_56 s>> 2).w) + 1)
    *(arg7 + ebp_4 + 4) += ((eax_64 - edx_15) s>> 1).w
    int32_t edi_7 = arg2 + 3 + esi
    int32_t ebp_5 = *(arg1 + 8)
    int32_t ecx_29 = *(arg6 + 8)
    int16_t* edi_8 = ecx_29 + (edi_7 << 1)
    int16_t* edx_16 = ecx_29 + ((arg3 + edi_7) << 1)
    int16_t* ebx_11 = *(arg4 + 8) + ((ecx_2 + arg2) << 1)
    int32_t eax_79 = sx.d(*edi_8) + 2 + sx.d(edi_8[1]) + sx.d(edx_16[1]) + sx.d(*edx_16)
    
    if (eax_79 s< 0)
        eax_79 += 3
    
    int32_t eax_83 = sx.d(*ebx_11) + sx.d(ebx_11[1]) + 1
    
    if (eax_83 s< 0)
        eax_83 += 1
    
    int32_t eax_87
    int32_t edx_19
    edx_19:eax_87 = sx.q(sx.d((eax_83 s>> 1).w) + sx.d((eax_79 s>> 2).w) + 1)
    *(arg7 + ebp_5 + 6) += ((eax_87 - edx_19) s>> 1).w
    int32_t edi_10 = arg2 + 4 + esi
    int32_t ebp_6 = *(arg1 + 8)
    int32_t ecx_36 = *(arg6 + 8)
    int16_t* edi_11 = ecx_36 + (edi_10 << 1)
    int16_t* edx_20 = ecx_36 + ((arg3 + edi_10) << 1)
    int16_t* ebx_14 = *(arg4 + 8) + ((ecx_3 + arg2) << 1)
    int32_t eax_102 = sx.d(*edi_11) + 2 + sx.d(edi_11[1]) + sx.d(edx_20[1]) + sx.d(*edx_20)
    
    if (eax_102 s< 0)
        eax_102 += 3
    
    int32_t eax_106 = sx.d(*ebx_14) + sx.d(ebx_14[1]) + 1
    
    if (eax_106 s< 0)
        eax_106 += 1
    
    int32_t eax_110
    int32_t edx_23
    edx_23:eax_110 = sx.q(sx.d((eax_106 s>> 1).w) + sx.d((eax_102 s>> 2).w) + 1)
    *(arg7 + ebp_6 + 8) += ((eax_110 - edx_23) s>> 1).w
    int32_t edi_13 = arg2 + 5 + esi
    int32_t ebp_7 = *(arg1 + 8)
    int32_t ecx_43 = *(arg6 + 8)
    int16_t* edi_14 = ecx_43 + (edi_13 << 1)
    int16_t* edx_24 = ecx_43 + ((arg3 + edi_13) << 1)
    int16_t* ebx_17 = *(arg4 + 8) + ((ecx_4 + arg2) << 1)
    int32_t eax_125 = sx.d(*edi_14) + 2 + sx.d(edi_14[1]) + sx.d(edx_24[1]) + sx.d(*edx_24)
    
    if (eax_125 s< 0)
        eax_125 += 3
    
    int32_t eax_129 = sx.d(*ebx_17) + sx.d(ebx_17[1]) + 1
    
    if (eax_129 s< 0)
        eax_129 += 1
    
    int32_t eax_133
    int32_t edx_27
    edx_27:eax_133 = sx.q(sx.d((eax_129 s>> 1).w) + sx.d((eax_125 s>> 2).w) + 1)
    *(arg7 + ebp_7 + 0xa) += ((eax_133 - edx_27) s>> 1).w
    int32_t edi_16 = arg2 + 6 + esi
    int32_t ebp_8 = *(arg1 + 8)
    int32_t ecx_50 = *(arg6 + 8)
    int16_t* edx_28 = ecx_50 + ((arg3 + edi_16) << 1)
    int16_t* edi_17 = ecx_50 + (edi_16 << 1)
    int16_t* ebx_20 = *(arg4 + 8) + ((ecx_5 + arg2) << 1)
    int32_t eax_148 = sx.d(*edi_17) + 2 + sx.d(edi_17[1]) + sx.d(edx_28[1]) + sx.d(*edx_28)
    
    if (eax_148 s< 0)
        eax_148 += 3
    
    int32_t eax_152 = sx.d(*ebx_20) + sx.d(ebx_20[1]) + 1
    
    if (eax_152 s< 0)
        eax_152 += 1
    
    int32_t eax_156
    int32_t edx_31
    edx_31:eax_156 = sx.q(sx.d((eax_152 s>> 1).w) + sx.d((eax_148 s>> 2).w) + 1)
    *(arg7 + ebp_8 + 0xc) += ((eax_156 - edx_31) s>> 1).w
    void* edi_19 = arg2 + 7 + esi
    int32_t ebp_9 = *(arg1 + 8)
    int32_t ecx_57 = *(arg6 + 8)
    int16_t* edi_20 = ecx_57 + (edi_19 << 1)
    int16_t* edx_32 = ecx_57 + ((arg3 + edi_19) << 1)
    int16_t* ebx_23 = *(arg4 + 8) + ((ecx_6 + arg2) << 1)
    int32_t eax_171 = sx.d(*edi_20) + 2 + sx.d(edi_20[1]) + sx.d(edx_32[1]) + sx.d(*edx_32)
    
    if (eax_171 s< 0)
        eax_171 += 3
    
    int32_t eax_175 = sx.d(*ebx_23) + sx.d(ebx_23[1]) + 1
    
    if (eax_175 s< 0)
        eax_175 += 1
    
    edi = arg3
    ecx_7 = arg2 + edi
    int32_t eax_179
    int32_t edx_35
    edx_35:eax_179 = sx.q(sx.d((eax_175 s>> 1).w) + sx.d((eax_171 s>> 2).w) + 1)
    arg2 = ecx_7
    *(arg7 + ebp_9 + 0xe) += ((eax_179 - edx_35) s>> 1).w
    result = arg5
    ebp = edx - 0x10 + arg7 + 0x10
    i = i_1
    i_1 -= 1
    arg7 = ebp
while (i != 1)
return result
