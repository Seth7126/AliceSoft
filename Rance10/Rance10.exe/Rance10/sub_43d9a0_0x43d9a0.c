// 函数: sub_43d9a0
// 地址: 0x43d9a0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* ebp = arg1
int32_t i_1 = 8
void* ecx = arg2
void* ebx = ecx * 2
void* var_24 = ebp
void* eax_1 = arg7 * 2
void* esi = arg5
arg5 = ebx
int16_t result
int32_t i

do
    void* edi_1 = ecx + esi
    void* ebp_2 = *(ebp + 8) + ebx
    int32_t edx_8 = *(arg4 + 8)
    int32_t eax_7 = sx.d(*(edx_8 + (edi_1 << 1))) + sx.d(*(edx_8 + ((arg3 + edi_1) << 1))) + 1
    
    if (eax_7 s< 0)
        eax_7 += 1
    
    int32_t edi_4 = arg2 + 1 + esi
    int32_t eax_13
    int32_t edx_9
    edx_9:eax_13 = sx.q(sx.d(*(ebx + eax_1 + *(arg6 + 8))) + sx.d((eax_7 s>> 1).w) + 1)
    *ebp_2 += ((eax_13 - edx_9) s>> 1).w
    void* ebp_4 = *(var_24 + 8) + arg5
    int32_t edx_10 = *(arg4 + 8)
    int32_t eax_23 = sx.d(*(edx_10 + (edi_4 << 1))) + 1 + sx.d(*(edx_10 + ((arg3 + edi_4) << 1)))
    
    if (eax_23 s< 0)
        eax_23 += 1
    
    int32_t eax_30
    int32_t edx_11
    edx_11:eax_30 = sx.q(sx.d(*(eax_1 + arg5 + *(arg6 + 8) + 2)) + 1 + sx.d((eax_23 s>> 1).w))
    int32_t ebx_6 = arg2 + 2 + esi
    *(ebp_4 + 2) += ((eax_30 - edx_11) s>> 1).w
    int32_t ebp_5 = *(var_24 + 8)
    int32_t edx_12 = *(arg4 + 8)
    int32_t eax_40 = sx.d(*(edx_12 + (ebx_6 << 1))) + 1 + sx.d(*(edx_12 + ((arg3 + ebx_6) << 1)))
    
    if (eax_40 s< 0)
        eax_40 += 1
    
    int32_t eax_47
    int32_t edx_13
    edx_13:eax_47 = sx.q(sx.d(*(arg5 + (arg7 << 1) + 4 + *(arg6 + 8))) + 1 + sx.d((eax_40 s>> 1).w))
    *(arg5 + ebp_5 + 4) += ((eax_47 - edx_13) s>> 1).w
    int32_t ebx_9 = arg2 + 3 + esi
    int32_t ebp_6 = *(var_24 + 8)
    int32_t edx_14 = *(arg4 + 8)
    int32_t eax_57 = sx.d(*(edx_14 + (ebx_9 << 1))) + 1 + sx.d(*(edx_14 + ((arg3 + ebx_9) << 1)))
    
    if (eax_57 s< 0)
        eax_57 += 1
    
    int32_t ebx_12 = arg2 + 4 + esi
    int32_t eax_64
    int32_t edx_15
    edx_15:eax_64 = sx.q(sx.d(*((arg7 << 1) + 6 + arg5 + *(arg6 + 8))) + 1 + sx.d((eax_57 s>> 1).w))
    *(arg5 + ebp_6 + 6) += ((eax_64 - edx_15) s>> 1).w
    int32_t ebp_7 = *(var_24 + 8)
    int32_t edx_16 = *(arg4 + 8)
    int32_t eax_74 = sx.d(*(edx_16 + (ebx_12 << 1))) + 1 + sx.d(*(edx_16 + ((arg3 + ebx_12) << 1)))
    
    if (eax_74 s< 0)
        eax_74 += 1
    
    int32_t ebx_15 = arg2 + 5 + esi
    int32_t eax_81
    int32_t edx_17
    edx_17:eax_81 = sx.q(sx.d(*((arg7 << 1) + 8 + arg5 + *(arg6 + 8))) + 1 + sx.d((eax_74 s>> 1).w))
    *(arg5 + ebp_7 + 8) += ((eax_81 - edx_17) s>> 1).w
    int32_t ebp_8 = *(var_24 + 8)
    int32_t edx_18 = *(arg4 + 8)
    int32_t eax_91 = sx.d(*(edx_18 + (ebx_15 << 1))) + 1 + sx.d(*(edx_18 + ((arg3 + ebx_15) << 1)))
    
    if (eax_91 s< 0)
        eax_91 += 1
    
    int32_t eax_98
    int32_t edx_19
    edx_19:eax_98 =
        sx.q(sx.d(*((arg7 << 1) + 0xa + arg5 + *(arg6 + 8))) + 1 + sx.d((eax_91 s>> 1).w))
    *(arg5 + ebp_8 + 0xa) += ((eax_98 - edx_19) s>> 1).w
    int32_t ebx_18 = arg2 + 6 + esi
    int32_t ebp_9 = *(var_24 + 8)
    int32_t edx_20 = *(arg4 + 8)
    int32_t eax_108 = sx.d(*(edx_20 + (ebx_18 << 1))) + 1 + sx.d(*(edx_20 + ((arg3 + ebx_18) << 1)))
    
    if (eax_108 s< 0)
        eax_108 += 1
    
    void* ebx_21 = arg2 + 7 + esi
    int32_t eax_115
    int32_t edx_21
    edx_21:eax_115 =
        sx.q(sx.d(*((arg7 << 1) + 0xc + arg5 + *(arg6 + 8))) + 1 + sx.d((eax_108 s>> 1).w))
    *(arg5 + ebp_9 + 0xc) += ((eax_115 - edx_21) s>> 1).w
    int32_t ebp_10 = *(var_24 + 8)
    int32_t edx_22 = *(arg4 + 8)
    int32_t eax_125 = sx.d(*(edx_22 + (ebx_21 << 1))) + 1 + sx.d(*(edx_22 + ((arg3 + ebx_21) << 1)))
    
    if (eax_125 s< 0)
        eax_125 += 1
    
    int32_t eax_132
    int32_t edx_23
    edx_23:eax_132 =
        sx.q(sx.d(*((arg7 << 1) + 0xe + arg5 + *(arg6 + 8))) + 1 + sx.d((eax_125 s>> 1).w))
    result = ((eax_132 - edx_23) s>> 1).w
    *(arg5 + ebp_10 + 0xe) += result
    ebp = var_24
    ebx = arg3 * 2 + arg5 + 0x10 - 0x10
    arg5 = ebx
    ecx = arg2 + 8 + arg3 - 8
    i = i_1
    i_1 -= 1
    arg2 = ecx
while (i != 1)
return result
