// 函数: sub_441db0
// 地址: 0x441db0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* edx = arg2
void* ebp = arg5
void* ebx = edx * 2
int32_t esi = arg7
arg5 = ebx
arg7 = 8
int16_t result
int32_t i

do
    int16_t* ebx_1 = ebx + *(arg1 + 0x14)
    int16_t* edx_1 = *(arg4 + 0x14) + ((edx + ebp) << 1)
    int16_t* edi_2 = *(arg6 + 0x14) + ((edx + esi) << 1)
    int32_t eax_10 = sx.d(*edx_1) + sx.d(edx_1[1]) + 1
    
    if (eax_10 s< 0)
        eax_10 += 1
    
    int32_t eax_14 = sx.d(*edi_2) + sx.d(edi_2[1]) + 1
    
    if (eax_14 s< 0)
        eax_14 += 1
    
    int32_t eax_18
    int32_t edx_4
    edx_4:eax_18 = sx.q(sx.d((eax_14 s>> 1).w) + sx.d((eax_10 s>> 1).w) + 1)
    *ebx_1 += ((eax_18 - edx_4) s>> 1).w
    void* ebx_3 = *(arg1 + 0x14) + arg5
    int16_t* edx_5 = *(arg4 + 0x14) + ((ebp + 1 + arg2) << 1)
    int16_t* edi_5 = *(arg6 + 0x14) + ((arg2 + 1 + esi) << 1)
    int32_t eax_29 = sx.d(*edx_5) + sx.d(edx_5[1]) + 1
    
    if (eax_29 s< 0)
        eax_29 += 1
    
    int32_t eax_33 = sx.d(*edi_5) + sx.d(edi_5[1]) + 1
    
    if (eax_33 s< 0)
        eax_33 += 1
    
    int32_t eax_37
    int32_t edx_8
    edx_8:eax_37 = sx.q(sx.d((eax_33 s>> 1).w) + sx.d((eax_29 s>> 1).w) + 1)
    *(ebx_3 + 2) += ((eax_37 - edx_8) s>> 1).w
    int32_t ebx_4 = *(arg1 + 0x14)
    int16_t* edx_9 = *(arg4 + 0x14) + ((ebp + 2 + arg2) << 1)
    int16_t* edi_8 = *(arg6 + 0x14) + ((arg2 + 2 + esi) << 1)
    int32_t eax_48 = sx.d(*edx_9) + sx.d(edx_9[1]) + 1
    
    if (eax_48 s< 0)
        eax_48 += 1
    
    int32_t eax_52 = sx.d(*edi_8) + sx.d(edi_8[1]) + 1
    
    if (eax_52 s< 0)
        eax_52 += 1
    
    int32_t eax_56
    int32_t edx_12
    edx_12:eax_56 = sx.q(sx.d((eax_52 s>> 1).w) + sx.d((eax_48 s>> 1).w) + 1)
    *(ebx_4 + arg5 + 4) += ((eax_56 - edx_12) s>> 1).w
    int32_t ebx_5 = *(arg1 + 0x14)
    int16_t* edx_13 = *(arg4 + 0x14) + ((ebp + 3 + arg2) << 1)
    int16_t* edi_11 = *(arg6 + 0x14) + ((arg2 + 3 + esi) << 1)
    int32_t eax_67 = sx.d(*edx_13) + sx.d(edx_13[1]) + 1
    
    if (eax_67 s< 0)
        eax_67 += 1
    
    int32_t eax_71 = sx.d(*edi_11) + sx.d(edi_11[1]) + 1
    
    if (eax_71 s< 0)
        eax_71 += 1
    
    int32_t eax_75
    int32_t edx_16
    edx_16:eax_75 = sx.q(sx.d((eax_71 s>> 1).w) + sx.d((eax_67 s>> 1).w) + 1)
    *(ebx_5 + arg5 + 6) += ((eax_75 - edx_16) s>> 1).w
    int32_t ebx_6 = *(arg1 + 0x14)
    int16_t* edx_17 = *(arg4 + 0x14) + ((ebp + 4 + arg2) << 1)
    int16_t* edi_14 = *(arg6 + 0x14) + ((arg2 + 4 + esi) << 1)
    int32_t eax_86 = sx.d(*edx_17) + sx.d(edx_17[1]) + 1
    
    if (eax_86 s< 0)
        eax_86 += 1
    
    int32_t eax_90 = sx.d(*edi_14) + sx.d(edi_14[1]) + 1
    
    if (eax_90 s< 0)
        eax_90 += 1
    
    int32_t eax_94
    int32_t edx_20
    edx_20:eax_94 = sx.q(sx.d((eax_90 s>> 1).w) + sx.d((eax_86 s>> 1).w) + 1)
    *(ebx_6 + arg5 + 8) += ((eax_94 - edx_20) s>> 1).w
    int32_t ebx_7 = *(arg1 + 0x14)
    int16_t* edx_21 = *(arg4 + 0x14) + ((ebp + 5 + arg2) << 1)
    int16_t* edi_17 = *(arg6 + 0x14) + ((arg2 + 5 + esi) << 1)
    int32_t eax_105 = sx.d(*edx_21) + sx.d(edx_21[1]) + 1
    
    if (eax_105 s< 0)
        eax_105 += 1
    
    int32_t eax_109 = sx.d(*edi_17) + sx.d(edi_17[1]) + 1
    
    if (eax_109 s< 0)
        eax_109 += 1
    
    int32_t eax_113
    int32_t edx_24
    edx_24:eax_113 = sx.q(sx.d((eax_109 s>> 1).w) + sx.d((eax_105 s>> 1).w) + 1)
    *(ebx_7 + arg5 + 0xa) += ((eax_113 - edx_24) s>> 1).w
    int32_t ebx_8 = *(arg1 + 0x14)
    int16_t* edx_25 = *(arg4 + 0x14) + ((ebp + 6 + arg2) << 1)
    int16_t* edi_20 = *(arg6 + 0x14) + ((arg2 + 6 + esi) << 1)
    int32_t eax_124 = sx.d(*edx_25) + sx.d(edx_25[1]) + 1
    
    if (eax_124 s< 0)
        eax_124 += 1
    
    int32_t eax_128 = sx.d(*edi_20) + sx.d(edi_20[1]) + 1
    
    if (eax_128 s< 0)
        eax_128 += 1
    
    int32_t eax_132
    int32_t edx_28
    edx_28:eax_132 = sx.q(sx.d((eax_128 s>> 1).w) + sx.d((eax_124 s>> 1).w) + 1)
    *(ebx_8 + arg5 + 0xc) += ((eax_132 - edx_28) s>> 1).w
    int32_t ebx_9 = *(arg1 + 0x14)
    int16_t* edx_29 = *(arg4 + 0x14) + ((ebp + 7 + arg2) << 1)
    int16_t* edi_23 = *(arg6 + 0x14) + ((arg2 + 7 + esi) << 1)
    int32_t eax_143 = sx.d(*edx_29) + sx.d(edx_29[1]) + 1
    
    if (eax_143 s< 0)
        eax_143 += 1
    
    int32_t eax_147 = sx.d(*edi_23) + sx.d(edi_23[1]) + 1
    
    if (eax_147 s< 0)
        eax_147 += 1
    
    int32_t eax_151
    int32_t edx_32
    edx_32:eax_151 = sx.q(sx.d((eax_147 s>> 1).w) + sx.d((eax_143 s>> 1).w) + 1)
    result = ((eax_151 - edx_32) s>> 1).w
    *(ebx_9 + arg5 + 0xe) += result
    ebx = arg3 * 2 + arg5 + 0x10 - 0x10
    edx = arg2 + 8 + arg3 - 8
    arg5 = ebx
    i = arg7
    arg7 -= 1
    arg2 = edx
while (i != 1)
return result
