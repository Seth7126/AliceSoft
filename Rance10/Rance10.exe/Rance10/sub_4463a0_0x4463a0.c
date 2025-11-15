// 函数: sub_4463a0
// 地址: 0x4463a0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* result = arg5
void* edx = arg3
void* ecx = result + 1
int32_t i_1 = 8
void* ebx = edx * 2
void* ecx_1 = result + 2
void* ecx_2 = result + 3
void* ecx_3 = result + 4
void* ecx_4 = result + 5
void* ecx_5 = result + 6
void* ecx_6 = result + 7
void* ecx_7 = arg2
void* esi = arg7
void* ebp = ecx_7 * 2
arg7 = ebp
int32_t i

do
    void* edi_1 = ecx_7 + result
    int16_t* ebp_1 = ebp + *(arg1 + 0x20)
    int32_t ecx_9 = *(arg4 + 0x20)
    int16_t* edi_2 = ecx_9 + (edi_1 << 1)
    int16_t* edx_1 = ecx_9 + ((edi_1 + edx) << 1)
    int16_t* ebx_2 = *(arg6 + 0x20) + ((ecx_7 + esi) << 1)
    int32_t eax_9 = sx.d(*edi_2) + sx.d(edi_2[1]) + sx.d(edx_1[1]) + sx.d(*edx_1) + 2
    
    if (eax_9 s< 0)
        eax_9 += 3
    
    int32_t eax_13 = sx.d(*ebx_2) + sx.d(ebx_2[1]) + 1
    
    if (eax_13 s< 0)
        eax_13 += 1
    
    int32_t eax_17
    int32_t edx_4
    edx_4:eax_17 = sx.q(sx.d((eax_13 s>> 1).w) + sx.d((eax_9 s>> 2).w) + 1)
    *ebp_1 += ((eax_17 - edx_4) s>> 1).w
    void* edi_4 = ecx + arg2
    void* ebp_3 = arg7 + *(arg1 + 0x20)
    int32_t ecx_16 = *(arg4 + 0x20)
    int16_t* edi_5 = ecx_16 + (edi_4 << 1)
    int16_t* edx_5 = ecx_16 + ((arg3 + edi_4) << 1)
    int16_t* ebx_5 = *(arg6 + 0x20) + ((arg2 + 1 + esi) << 1)
    int32_t eax_33 = sx.d(*edi_5) + 2 + sx.d(edi_5[1]) + sx.d(edx_5[1]) + sx.d(*edx_5)
    
    if (eax_33 s< 0)
        eax_33 += 3
    
    int32_t eax_37 = sx.d(*ebx_5) + sx.d(ebx_5[1]) + 1
    
    if (eax_37 s< 0)
        eax_37 += 1
    
    int32_t eax_41
    int32_t edx_8
    edx_8:eax_41 = sx.q(sx.d((eax_37 s>> 1).w) + sx.d((eax_33 s>> 2).w) + 1)
    *(ebp_3 + 2) += ((eax_41 - edx_8) s>> 1).w
    void* edi_7 = ecx_1 + arg2
    int32_t ebp_4 = *(arg1 + 0x20)
    int32_t ecx_22 = *(arg4 + 0x20)
    int16_t* edi_8 = ecx_22 + (edi_7 << 1)
    int16_t* edx_9 = ecx_22 + ((arg3 + edi_7) << 1)
    int16_t* ebx_8 = *(arg6 + 0x20) + ((arg2 + 2 + esi) << 1)
    int32_t eax_56 = sx.d(*edi_8) + 2 + sx.d(edi_8[1]) + sx.d(edx_9[1]) + sx.d(*edx_9)
    
    if (eax_56 s< 0)
        eax_56 += 3
    
    int32_t eax_60 = sx.d(*ebx_8) + sx.d(ebx_8[1]) + 1
    
    if (eax_60 s< 0)
        eax_60 += 1
    
    int32_t eax_64
    int32_t edx_12
    edx_12:eax_64 = sx.q(sx.d((eax_60 s>> 1).w) + sx.d((eax_56 s>> 2).w) + 1)
    *(arg7 + ebp_4 + 4) += ((eax_64 - edx_12) s>> 1).w
    void* edi_10 = ecx_2 + arg2
    int32_t ebp_5 = *(arg1 + 0x20)
    int32_t ecx_29 = *(arg4 + 0x20)
    int16_t* edi_11 = ecx_29 + (edi_10 << 1)
    int16_t* edx_13 = ecx_29 + ((arg3 + edi_10) << 1)
    int16_t* ebx_11 = *(arg6 + 0x20) + ((arg2 + 3 + esi) << 1)
    int32_t eax_79 = sx.d(*edi_11) + 2 + sx.d(edi_11[1]) + sx.d(edx_13[1]) + sx.d(*edx_13)
    
    if (eax_79 s< 0)
        eax_79 += 3
    
    int32_t eax_83 = sx.d(*ebx_11) + sx.d(ebx_11[1]) + 1
    
    if (eax_83 s< 0)
        eax_83 += 1
    
    int32_t eax_87
    int32_t edx_16
    edx_16:eax_87 = sx.q(sx.d((eax_83 s>> 1).w) + sx.d((eax_79 s>> 2).w) + 1)
    *(arg7 + ebp_5 + 6) += ((eax_87 - edx_16) s>> 1).w
    void* edi_13 = ecx_3 + arg2
    int32_t ebp_6 = *(arg1 + 0x20)
    int32_t ecx_36 = *(arg4 + 0x20)
    int16_t* edi_14 = ecx_36 + (edi_13 << 1)
    int16_t* edx_17 = ecx_36 + ((arg3 + edi_13) << 1)
    int16_t* ebx_14 = *(arg6 + 0x20) + ((arg2 + 4 + esi) << 1)
    int32_t eax_102 = sx.d(*edi_14) + 2 + sx.d(edi_14[1]) + sx.d(edx_17[1]) + sx.d(*edx_17)
    
    if (eax_102 s< 0)
        eax_102 += 3
    
    int32_t eax_106 = sx.d(*ebx_14) + sx.d(ebx_14[1]) + 1
    
    if (eax_106 s< 0)
        eax_106 += 1
    
    int32_t eax_110
    int32_t edx_20
    edx_20:eax_110 = sx.q(sx.d((eax_106 s>> 1).w) + sx.d((eax_102 s>> 2).w) + 1)
    *(arg7 + ebp_6 + 8) += ((eax_110 - edx_20) s>> 1).w
    void* edi_16 = ecx_4 + arg2
    int32_t ebp_7 = *(arg1 + 0x20)
    int32_t ecx_43 = *(arg4 + 0x20)
    int16_t* edi_17 = ecx_43 + (edi_16 << 1)
    int16_t* edx_21 = ecx_43 + ((arg3 + edi_16) << 1)
    int16_t* ebx_17 = *(arg6 + 0x20) + ((arg2 + 5 + esi) << 1)
    int32_t eax_125 = sx.d(*edi_17) + 2 + sx.d(edi_17[1]) + sx.d(edx_21[1]) + sx.d(*edx_21)
    
    if (eax_125 s< 0)
        eax_125 += 3
    
    int32_t eax_129 = sx.d(*ebx_17) + sx.d(ebx_17[1]) + 1
    
    if (eax_129 s< 0)
        eax_129 += 1
    
    int32_t eax_133
    int32_t edx_24
    edx_24:eax_133 = sx.q(sx.d((eax_129 s>> 1).w) + sx.d((eax_125 s>> 2).w) + 1)
    *(arg7 + ebp_7 + 0xa) += ((eax_133 - edx_24) s>> 1).w
    void* edi_19 = ecx_5 + arg2
    int32_t ebp_8 = *(arg1 + 0x20)
    int32_t ecx_50 = *(arg4 + 0x20)
    int16_t* edx_25 = ecx_50 + ((arg3 + edi_19) << 1)
    int16_t* edi_20 = ecx_50 + (edi_19 << 1)
    int16_t* ebx_20 = *(arg6 + 0x20) + ((arg2 + 6 + esi) << 1)
    int32_t eax_148 = sx.d(*edi_20) + 2 + sx.d(edi_20[1]) + sx.d(edx_25[1]) + sx.d(*edx_25)
    
    if (eax_148 s< 0)
        eax_148 += 3
    
    int32_t eax_152 = sx.d(*ebx_20) + sx.d(ebx_20[1]) + 1
    
    if (eax_152 s< 0)
        eax_152 += 1
    
    int32_t eax_156
    int32_t edx_28
    edx_28:eax_156 = sx.q(sx.d((eax_152 s>> 1).w) + sx.d((eax_148 s>> 2).w) + 1)
    *(arg7 + ebp_8 + 0xc) += ((eax_156 - edx_28) s>> 1).w
    void* edi_22 = ecx_6 + arg2
    int32_t ebp_9 = *(arg1 + 0x20)
    int32_t ecx_57 = *(arg4 + 0x20)
    int16_t* edi_23 = ecx_57 + (edi_22 << 1)
    int16_t* edx_29 = ecx_57 + ((arg3 + edi_22) << 1)
    int16_t* ebx_23 = *(arg6 + 0x20) + ((arg2 + 7 + esi) << 1)
    int32_t eax_171 = sx.d(*edi_23) + 2 + sx.d(edi_23[1]) + sx.d(edx_29[1]) + sx.d(*edx_29)
    
    if (eax_171 s< 0)
        eax_171 += 3
    
    int32_t eax_175 = sx.d(*ebx_23) + sx.d(ebx_23[1]) + 1
    
    if (eax_175 s< 0)
        eax_175 += 1
    
    int32_t eax_179
    int32_t edx_32
    edx_32:eax_179 = sx.q(sx.d((eax_175 s>> 1).w) + sx.d((eax_171 s>> 2).w) + 1)
    *(arg7 + ebp_9 + 0xe) += ((eax_179 - edx_32) s>> 1).w
    result = arg5
    edx = arg3
    ebp = ebx + arg7 + 0x10 - 0x10
    ecx_7 = arg2 + edx
    arg7 = ebp
    i = i_1
    i_1 -= 1
    arg2 = ecx_7
while (i != 1)
return result
