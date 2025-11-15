// 函数: sub_440550
// 地址: 0x440550
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ebp = arg2
void* ebx = arg1
void* edx = (arg5 << 1) + 0xe
void* var_20 = ebx
void* edx_1 = (arg5 << 1) + 0xc
void* edx_2 = (arg5 << 1) + 0xa
int32_t ecx = ebp << 1
void* edx_3 = (arg5 << 1) + 8
arg2 = 8
void* edx_4 = (arg5 << 1) + 6
int32_t esi = arg7
void* edi = arg5 * 2
void* edx_5 = (arg5 << 1) + 4
arg7 = ecx
arg5 = edi
int32_t result
int32_t i

do
    int32_t edx_6 = esi + ebp
    int16_t* ebx_2 = *(ebx + 0x20) + ecx
    int32_t eax_4 = *(arg6 + 0x20)
    int32_t eax_7 = sx.d(*(eax_4 + (edx_6 << 1))) + sx.d(*(eax_4 + (edx_6 << 1) + 2)) + 1
    
    if (eax_7 s< 0)
        eax_7 += 1
    
    int32_t eax_13
    int32_t edx_7
    edx_7:eax_13 = sx.q(sx.d(*(edi + ecx + *(arg4 + 0x20))) + sx.d((eax_7 s>> 1).w) + 1)
    int32_t edx_8 = esi + ebp
    *ebx_2 += ((eax_13 - edx_7) s>> 1).w
    void* ebx_4 = *(var_20 + 0x20) + arg7
    int32_t eax_18 = *(arg6 + 0x20)
    int32_t eax_21 = sx.d(*(eax_18 + (edx_8 << 1) + 2)) + sx.d(*(eax_18 + (edx_8 << 1) + 4)) + 1
    
    if (eax_21 s< 0)
        eax_21 += 1
    
    int32_t eax_28
    int32_t edx_9
    edx_9:eax_28 = sx.q(sx.d(*(arg5 + arg7 + *(arg4 + 0x20) + 2)) + 1 + sx.d((eax_21 s>> 1).w))
    int32_t edx_10 = esi + ebp
    *(ebx_4 + 2) += ((eax_28 - edx_9) s>> 1).w
    int32_t ebx_5 = *(var_20 + 0x20)
    int32_t eax_33 = *(arg6 + 0x20)
    int32_t eax_36 = sx.d(*(eax_33 + (edx_10 << 1) + 4)) + sx.d(*(eax_33 + (edx_10 << 1) + 6)) + 1
    
    if (eax_36 s< 0)
        eax_36 += 1
    
    int32_t eax_43
    int32_t edx_11
    edx_11:eax_43 = sx.q(sx.d(*(edx_5 + arg7 + *(arg4 + 0x20))) + 1 + sx.d((eax_36 s>> 1).w))
    int32_t edx_12 = esi + ebp
    *(arg7 + ebx_5 + 4) += ((eax_43 - edx_11) s>> 1).w
    int32_t ebx_6 = *(var_20 + 0x20)
    int32_t eax_48 = *(arg6 + 0x20)
    int32_t eax_51 = sx.d(*(eax_48 + (edx_12 << 1) + 6)) + sx.d(*(eax_48 + (edx_12 << 1) + 8)) + 1
    
    if (eax_51 s< 0)
        eax_51 += 1
    
    int32_t eax_58
    int32_t edx_13
    edx_13:eax_58 = sx.q(sx.d(*(edx_4 + arg7 + *(arg4 + 0x20))) + 1 + sx.d((eax_51 s>> 1).w))
    int32_t edx_14 = esi + ebp
    *(arg7 + ebx_6 + 6) += ((eax_58 - edx_13) s>> 1).w
    int32_t ebx_7 = *(var_20 + 0x20)
    int32_t eax_63 = *(arg6 + 0x20)
    int32_t eax_66 = sx.d(*(eax_63 + (edx_14 << 1) + 8)) + sx.d(*(eax_63 + (edx_14 << 1) + 0xa)) + 1
    
    if (eax_66 s< 0)
        eax_66 += 1
    
    int32_t eax_73
    int32_t edx_15
    edx_15:eax_73 = sx.q(sx.d(*(edx_3 + arg7 + *(arg4 + 0x20))) + 1 + sx.d((eax_66 s>> 1).w))
    int32_t edx_16 = esi + ebp
    *(arg7 + ebx_7 + 8) += ((eax_73 - edx_15) s>> 1).w
    int32_t ebx_8 = *(var_20 + 0x20)
    int32_t eax_78 = *(arg6 + 0x20)
    int32_t eax_81 =
        sx.d(*(eax_78 + (edx_16 << 1) + 0xa)) + sx.d(*(eax_78 + (edx_16 << 1) + 0xc)) + 1
    
    if (eax_81 s< 0)
        eax_81 += 1
    
    int32_t eax_88
    int32_t edx_17
    edx_17:eax_88 = sx.q(sx.d(*(edx_2 + arg7 + *(arg4 + 0x20))) + 1 + sx.d((eax_81 s>> 1).w))
    int32_t edx_18 = esi + ebp
    *(arg7 + ebx_8 + 0xa) += ((eax_88 - edx_17) s>> 1).w
    int32_t ebx_9 = *(var_20 + 0x20)
    int32_t eax_93 = *(arg6 + 0x20)
    int32_t eax_96 =
        sx.d(*(eax_93 + (edx_18 << 1) + 0xc)) + sx.d(*(eax_93 + (edx_18 << 1) + 0xe)) + 1
    
    if (eax_96 s< 0)
        eax_96 += 1
    
    int32_t eax_103
    int32_t edx_19
    edx_19:eax_103 = sx.q(sx.d(*(edx_1 + arg7 + *(arg4 + 0x20))) + 1 + sx.d((eax_96 s>> 1).w))
    int32_t edx_20 = esi + ebp
    *(arg7 + ebx_9 + 0xc) += ((eax_103 - edx_19) s>> 1).w
    int32_t ebx_10 = *(var_20 + 0x20)
    int32_t eax_108 = *(arg6 + 0x20)
    int32_t eax_111 =
        sx.d(*(eax_108 + (edx_20 << 1) + 0xe)) + sx.d(*(eax_108 + (edx_20 << 1) + 0x10)) + 1
    
    if (eax_111 s< 0)
        eax_111 += 1
    
    edi = arg5
    int32_t eax_118
    int32_t edx_21
    edx_21:eax_118 = sx.q(sx.d(*(edx + arg7 + *(arg4 + 0x20))) + 1 + sx.d((eax_111 s>> 1).w))
    *(arg7 + ebx_10 + 0xe) += ((eax_118 - edx_21) s>> 1).w
    ebx = var_20
    result = arg3 * 2 + arg7 + 0x10
    ebp = ebp + 8 + arg3 - 8
    i = arg2
    arg2 -= 1
    ecx = result - 0x10
    arg7 = ecx
while (i != 1)
return result
