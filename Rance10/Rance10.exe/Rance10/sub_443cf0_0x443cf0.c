// 函数: sub_443cf0
// 地址: 0x443cf0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t result = arg5
int32_t esi = arg7
void* edi = arg1
int32_t ecx = result + 1
void* var_28 = edi
int32_t ecx_1 = result + 2
int32_t ecx_2 = result + 3
int32_t ecx_3 = result + 4
int32_t ecx_4 = result + 5
int32_t ecx_5 = result + 6
int32_t ecx_6 = result + 7
int32_t ecx_7 = arg2
int32_t i_1 = 8
int32_t ebp = ecx_7 * 2
arg7 = ebp
int32_t i

do
    int32_t ebx_1 = ecx_7 + result
    int16_t* ebp_1 = ebp + *(edi + 0x14)
    int32_t edx_3 = *(arg4 + 0x14)
    int16_t* edi_1 = *(arg6 + 0x14) + ((ecx_7 + esi) << 1)
    int32_t eax_6 = sx.d(*(edx_3 + (ebx_1 << 1))) + sx.d(*(edx_3 + ((arg3 + ebx_1) << 1))) + 1
    
    if (eax_6 s< 0)
        eax_6 += 1
    
    int32_t eax_10 = sx.d(*edi_1) + sx.d(edi_1[1]) + 1
    
    if (eax_10 s< 0)
        eax_10 += 1
    
    int32_t eax_14
    int32_t edx_6
    edx_6:eax_14 = sx.q(sx.d((eax_10 s>> 1).w) + sx.d((eax_6 s>> 1).w) + 1)
    *ebp_1 += ((eax_14 - edx_6) s>> 1).w
    int32_t ebx_3 = ecx + arg2
    void* ebp_3 = *(var_28 + 0x14) + arg7
    int32_t edx_7 = *(arg4 + 0x14)
    int16_t* edi_2 = *(arg6 + 0x14) + ((arg2 + 1 + esi) << 1)
    int32_t eax_27 = sx.d(*(edx_7 + (ebx_3 << 1))) + 1 + sx.d(*(edx_7 + ((arg3 + ebx_3) << 1)))
    
    if (eax_27 s< 0)
        eax_27 += 1
    
    int32_t eax_31 = sx.d(*edi_2) + sx.d(edi_2[1]) + 1
    
    if (eax_31 s< 0)
        eax_31 += 1
    
    int32_t eax_35
    int32_t edx_10
    edx_10:eax_35 = sx.q(sx.d((eax_31 s>> 1).w) + sx.d((eax_27 s>> 1).w) + 1)
    *(ebp_3 + 2) += ((eax_35 - edx_10) s>> 1).w
    int32_t ebx_5 = ecx_1 + arg2
    int32_t ebp_4 = *(var_28 + 0x14)
    int32_t edx_11 = *(arg4 + 0x14)
    int16_t* edi_3 = *(arg6 + 0x14) + ((arg2 + 2 + esi) << 1)
    int32_t eax_48 = sx.d(*(edx_11 + (ebx_5 << 1))) + 1 + sx.d(*(edx_11 + ((arg3 + ebx_5) << 1)))
    
    if (eax_48 s< 0)
        eax_48 += 1
    
    int32_t eax_52 = sx.d(*edi_3) + sx.d(edi_3[1]) + 1
    
    if (eax_52 s< 0)
        eax_52 += 1
    
    int32_t eax_56
    int32_t edx_14
    edx_14:eax_56 = sx.q(sx.d((eax_52 s>> 1).w) + sx.d((eax_48 s>> 1).w) + 1)
    *(arg7 + ebp_4 + 4) += ((eax_56 - edx_14) s>> 1).w
    int32_t ebx_7 = ecx_2 + arg2
    int32_t ebp_5 = *(var_28 + 0x14)
    int32_t edx_15 = *(arg4 + 0x14)
    int16_t* edi_4 = *(arg6 + 0x14) + ((arg2 + 3 + esi) << 1)
    int32_t eax_69 = sx.d(*(edx_15 + (ebx_7 << 1))) + 1 + sx.d(*(edx_15 + ((arg3 + ebx_7) << 1)))
    
    if (eax_69 s< 0)
        eax_69 += 1
    
    int32_t eax_73 = sx.d(*edi_4) + sx.d(edi_4[1]) + 1
    
    if (eax_73 s< 0)
        eax_73 += 1
    
    int32_t eax_77
    int32_t edx_18
    edx_18:eax_77 = sx.q(sx.d((eax_73 s>> 1).w) + sx.d((eax_69 s>> 1).w) + 1)
    *(arg7 + ebp_5 + 6) += ((eax_77 - edx_18) s>> 1).w
    int32_t ebx_9 = ecx_3 + arg2
    int32_t ebp_6 = *(var_28 + 0x14)
    int32_t edx_19 = *(arg4 + 0x14)
    int16_t* edi_5 = *(arg6 + 0x14) + ((arg2 + 4 + esi) << 1)
    int32_t eax_90 = sx.d(*(edx_19 + (ebx_9 << 1))) + 1 + sx.d(*(edx_19 + ((arg3 + ebx_9) << 1)))
    
    if (eax_90 s< 0)
        eax_90 += 1
    
    int32_t eax_94 = sx.d(*edi_5) + sx.d(edi_5[1]) + 1
    
    if (eax_94 s< 0)
        eax_94 += 1
    
    int32_t eax_98
    int32_t edx_22
    edx_22:eax_98 = sx.q(sx.d((eax_94 s>> 1).w) + sx.d((eax_90 s>> 1).w) + 1)
    *(arg7 + ebp_6 + 8) += ((eax_98 - edx_22) s>> 1).w
    int32_t ebx_11 = ecx_4 + arg2
    int32_t ebp_7 = *(var_28 + 0x14)
    int32_t edx_23 = *(arg4 + 0x14)
    int16_t* edi_6 = *(arg6 + 0x14) + ((arg2 + 5 + esi) << 1)
    int32_t eax_111 = sx.d(*(edx_23 + (ebx_11 << 1))) + 1 + sx.d(*(edx_23 + ((arg3 + ebx_11) << 1)))
    
    if (eax_111 s< 0)
        eax_111 += 1
    
    int32_t eax_115 = sx.d(*edi_6) + sx.d(edi_6[1]) + 1
    
    if (eax_115 s< 0)
        eax_115 += 1
    
    int32_t eax_119
    int32_t edx_26
    edx_26:eax_119 = sx.q(sx.d((eax_115 s>> 1).w) + sx.d((eax_111 s>> 1).w) + 1)
    *(arg7 + ebp_7 + 0xa) += ((eax_119 - edx_26) s>> 1).w
    int32_t ebx_13 = ecx_5 + arg2
    int32_t ebp_8 = *(var_28 + 0x14)
    int32_t edx_27 = *(arg4 + 0x14)
    int16_t* edi_7 = *(arg6 + 0x14) + ((arg2 + 6 + esi) << 1)
    int32_t eax_132 = sx.d(*(edx_27 + (ebx_13 << 1))) + 1 + sx.d(*(edx_27 + ((arg3 + ebx_13) << 1)))
    
    if (eax_132 s< 0)
        eax_132 += 1
    
    int32_t eax_136 = sx.d(*edi_7) + sx.d(edi_7[1]) + 1
    
    if (eax_136 s< 0)
        eax_136 += 1
    
    int32_t eax_140
    int32_t edx_30
    edx_30:eax_140 = sx.q(sx.d((eax_136 s>> 1).w) + sx.d((eax_132 s>> 1).w) + 1)
    *(arg7 + ebp_8 + 0xc) += ((eax_140 - edx_30) s>> 1).w
    int32_t ebx_15 = ecx_6 + arg2
    int32_t ebp_9 = *(var_28 + 0x14)
    int32_t edx_31 = *(arg4 + 0x14)
    int16_t* edi_8 = *(arg6 + 0x14) + ((arg2 + 7 + esi) << 1)
    int32_t eax_153 = sx.d(*(edx_31 + (ebx_15 << 1))) + 1 + sx.d(*(edx_31 + ((arg3 + ebx_15) << 1)))
    
    if (eax_153 s< 0)
        eax_153 += 1
    
    int32_t eax_157 = sx.d(*edi_8) + sx.d(edi_8[1]) + 1
    
    if (eax_157 s< 0)
        eax_157 += 1
    
    edi = var_28
    int32_t eax_161
    int32_t edx_34
    edx_34:eax_161 = sx.q(sx.d((eax_157 s>> 1).w) + sx.d((eax_153 s>> 1).w) + 1)
    *(arg7 + ebp_9 + 0xe) += ((eax_161 - edx_34) s>> 1).w
    result = arg5
    ebp = arg3 * 2 + arg7 + 0x10 - 0x10
    arg7 = ebp
    ecx_7 = arg2 + 8 + arg3 - 8
    i = i_1
    i_1 -= 1
    arg2 = ecx_7
while (i != 1)
return result
