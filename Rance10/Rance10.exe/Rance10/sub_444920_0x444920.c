// 函数: sub_444920
// 地址: 0x444920
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
int32_t ecx_7 = arg2
int32_t esi = arg7
int32_t ebx = ecx_7 * 2
arg7 = ebx
int32_t i

do
    int32_t ebp_1 = ecx_7 + result
    int32_t edi_1 = ecx_7 + esi
    int32_t edx_2 = *(arg6 + 0x20)
    int16_t* eax_2 = *(arg1 + 0x20) + ebx
    int32_t ebx_2 = *(arg4 + 0x20)
    int32_t eax_7 = sx.d(*(edx_2 + (edi_1 << 1))) + sx.d(*(edx_2 + ((arg3 + edi_1) << 1))) + 1
    
    if (eax_7 s< 0)
        eax_7 += 1
    
    int32_t eax_13 = sx.d(*(ebx_2 + (ebp_1 << 1))) + sx.d(*(ebx_2 + ((arg3 + ebp_1) << 1))) + 1
    
    if (eax_13 s< 0)
        eax_13 += 1
    
    int32_t eax_17
    int32_t edx_5
    edx_5:eax_17 = sx.q(sx.d((eax_13 s>> 1).w) + sx.d((eax_7 s>> 1).w) + 1)
    *eax_2 += ((eax_17 - edx_5) s>> 1).w
    int32_t ebp_3 = ecx + arg2
    int32_t edi_3 = arg2 + 1 + esi
    int16_t* eax_23 = *(arg1 + 0x20) + arg7 + 2
    int32_t ebx_3 = *(arg4 + 0x20)
    int32_t edx_6 = *(arg6 + 0x20)
    int32_t eax_31 = sx.d(*(edx_6 + (edi_3 << 1))) + 1 + sx.d(*(edx_6 + ((arg3 + edi_3) << 1)))
    
    if (eax_31 s< 0)
        eax_31 += 1
    
    int32_t eax_38 = sx.d(*(ebx_3 + (ebp_3 << 1))) + 1 + sx.d(*(ebx_3 + ((arg3 + ebp_3) << 1)))
    
    if (eax_38 s< 0)
        eax_38 += 1
    
    int32_t eax_42
    int32_t edx_9
    edx_9:eax_42 = sx.q(sx.d((eax_38 s>> 1).w) + sx.d((eax_31 s>> 1).w) + 1)
    *eax_23 += ((eax_42 - edx_9) s>> 1).w
    int32_t ebp_5 = ecx_1 + arg2
    int32_t ebx_5 = arg2 + 2 + esi
    int32_t edi_4 = *(arg4 + 0x20)
    int32_t edx_10 = *(arg6 + 0x20)
    int32_t eax_53 = sx.d(*(edx_10 + (ebx_5 << 1))) + 1 + sx.d(*(edx_10 + ((arg3 + ebx_5) << 1)))
    
    if (eax_53 s< 0)
        eax_53 += 1
    
    int32_t eax_60 = sx.d(*(edi_4 + (ebp_5 << 1))) + 1 + sx.d(*(edi_4 + ((arg3 + ebp_5) << 1)))
    
    if (eax_60 s< 0)
        eax_60 += 1
    
    int32_t ecx_20 = *(arg1 + 0x20)
    int32_t eax_64
    int32_t edx_13
    edx_13:eax_64 = sx.q(sx.d((eax_60 s>> 1).w) + sx.d((eax_53 s>> 1).w) + 1)
    *(ecx_20 + arg7 + 4) += ((eax_64 - edx_13) s>> 1).w
    int32_t ebp_7 = ecx_2 + arg2
    int32_t ebx_7 = arg2 + 3 + esi
    int32_t edi_6 = *(arg4 + 0x20)
    int32_t edx_15 = *(arg6 + 0x20)
    int32_t eax_75 = sx.d(*(edx_15 + (ebx_7 << 1))) + 1 + sx.d(*(edx_15 + ((arg3 + ebx_7) << 1)))
    
    if (eax_75 s< 0)
        eax_75 += 1
    
    int32_t eax_82 = sx.d(*(edi_6 + (ebp_7 << 1))) + 1 + sx.d(*(edi_6 + ((arg3 + ebp_7) << 1)))
    
    if (eax_82 s< 0)
        eax_82 += 1
    
    int32_t ecx_23 = *(arg1 + 0x20)
    int32_t eax_86
    int32_t edx_18
    edx_18:eax_86 = sx.q(sx.d((eax_82 s>> 1).w) + sx.d((eax_75 s>> 1).w) + 1)
    *(ecx_23 + arg7 + 6) += ((eax_86 - edx_18) s>> 1).w
    int32_t ebp_9 = ecx_3 + arg2
    int32_t ebx_9 = arg2 + 4 + esi
    int32_t edi_8 = *(arg4 + 0x20)
    int32_t edx_20 = *(arg6 + 0x20)
    int32_t eax_97 = sx.d(*(edx_20 + (ebx_9 << 1))) + 1 + sx.d(*(edx_20 + ((arg3 + ebx_9) << 1)))
    
    if (eax_97 s< 0)
        eax_97 += 1
    
    int32_t eax_104 = sx.d(*(edi_8 + (ebp_9 << 1))) + 1 + sx.d(*(edi_8 + ((arg3 + ebp_9) << 1)))
    
    if (eax_104 s< 0)
        eax_104 += 1
    
    int32_t ecx_26 = *(arg1 + 0x20)
    int32_t eax_108
    int32_t edx_23
    edx_23:eax_108 = sx.q(sx.d((eax_104 s>> 1).w) + sx.d((eax_97 s>> 1).w) + 1)
    *(ecx_26 + arg7 + 8) += ((eax_108 - edx_23) s>> 1).w
    int32_t ebp_11 = ecx_4 + arg2
    int32_t ebx_11 = arg2 + 5 + esi
    int32_t edi_10 = *(arg4 + 0x20)
    int32_t edx_25 = *(arg6 + 0x20)
    int32_t eax_119 = sx.d(*(edx_25 + (ebx_11 << 1))) + 1 + sx.d(*(edx_25 + ((arg3 + ebx_11) << 1)))
    
    if (eax_119 s< 0)
        eax_119 += 1
    
    int32_t eax_126 = sx.d(*(edi_10 + (ebp_11 << 1))) + 1 + sx.d(*(edi_10 + ((arg3 + ebp_11) << 1)))
    
    if (eax_126 s< 0)
        eax_126 += 1
    
    int32_t ecx_29 = *(arg1 + 0x20)
    int32_t eax_130
    int32_t edx_28
    edx_28:eax_130 = sx.q(sx.d((eax_126 s>> 1).w) + sx.d((eax_119 s>> 1).w) + 1)
    *(ecx_29 + arg7 + 0xa) += ((eax_130 - edx_28) s>> 1).w
    int32_t ebp_13 = ecx_5 + arg2
    int32_t ebx_13 = arg2 + 6 + esi
    int32_t edi_12 = *(arg4 + 0x20)
    int32_t edx_30 = *(arg6 + 0x20)
    int32_t eax_141 = sx.d(*(edx_30 + (ebx_13 << 1))) + 1 + sx.d(*(edx_30 + ((arg3 + ebx_13) << 1)))
    
    if (eax_141 s< 0)
        eax_141 += 1
    
    int32_t eax_148 = sx.d(*(edi_12 + (ebp_13 << 1))) + 1 + sx.d(*(edi_12 + ((arg3 + ebp_13) << 1)))
    
    if (eax_148 s< 0)
        eax_148 += 1
    
    int32_t ecx_32 = *(arg1 + 0x20)
    int32_t eax_152
    int32_t edx_33
    edx_33:eax_152 = sx.q(sx.d((eax_148 s>> 1).w) + sx.d((eax_141 s>> 1).w) + 1)
    *(ecx_32 + arg7 + 0xc) += ((eax_152 - edx_33) s>> 1).w
    int32_t ebp_15 = ecx_6 + arg2
    int32_t ebx_15 = arg2 + 7 + esi
    int32_t edi_14 = *(arg4 + 0x20)
    int32_t edx_35 = *(arg6 + 0x20)
    int32_t eax_163 = sx.d(*(edx_35 + (ebx_15 << 1))) + 1 + sx.d(*(edx_35 + ((arg3 + ebx_15) << 1)))
    
    if (eax_163 s< 0)
        eax_163 += 1
    
    int32_t eax_169 = sx.d(*(edi_14 + (ebp_15 << 1))) + 1 + sx.d(*(edi_14 + ((arg3 + ebp_15) << 1)))
    
    if (eax_169 s< 0)
        eax_169 += 1
    
    int32_t eax_173
    int32_t edx_38
    edx_38:eax_173 = sx.q(sx.d((eax_169 s>> 1).w) + sx.d((eax_163 s>> 1).w) + 1)
    int32_t ecx_35 = *(arg1 + 0x20)
    *(ecx_35 + arg7 + 0xe) += ((eax_173 - edx_38) s>> 1).w
    ecx_7 = arg2 + 8 + arg3 - 8
    i = i_1
    i_1 -= 1
    arg2 = ecx_7
    ebx = arg7 + 0x10 + ((arg3 - 8) << 1)
    result = arg5
    arg7 = ebx
while (i != 1)
return result
