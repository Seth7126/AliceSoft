// 函数: sub_43ba50
// 地址: 0x43ba50
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* ebx = arg3
void* result = arg1
void* ecx = arg2
void* esi = arg5
int32_t ebp = ebx * 2
void* edx = ecx * 2
void* result_1 = result
arg5 = edx
int32_t i_1 = 8
int32_t i

do
    int16_t* ebp_2 = *(result + 0x20) + edx
    void* edx_1 = ecx + esi
    int32_t ecx_2 = *(arg4 + 0x20)
    int16_t* ebx_1 = ecx_2 + ((edx_1 + ebx) << 1)
    int32_t eax_5
    int32_t edx_2
    edx_2:eax_5 = sx.q(sx.d(*ebx_1) + sx.d(*(ecx_2 + (edx_1 << 1) + 2)) + sx.d(ebx_1[1])
        + sx.d(*(ecx_2 + (edx_1 << 1))) + 2)
    *ebp_2 += ((eax_5 + (edx_2 & 3)) s>> 2).w
    int32_t edx_6 = arg2 + 1 + esi
    void* ebp_4 = arg5 + *(result_1 + 0x20)
    int32_t ecx_3 = *(arg4 + 0x20)
    int16_t* ebx_2 = ecx_3 + ((arg3 + edx_6) << 1)
    int32_t eax_18
    int32_t edx_7
    edx_7:eax_18 = sx.q(sx.d(*ebx_2) + 2 + sx.d(*(ecx_3 + (edx_6 << 1) + 2)) + sx.d(ebx_2[1])
        + sx.d(*(ecx_3 + (edx_6 << 1))))
    *(ebp_4 + 2) += ((eax_18 + (edx_7 & 3)) s>> 2).w
    int32_t edx_11 = arg2 + 2 + esi
    int32_t ebp_5 = *(result_1 + 0x20)
    int32_t ecx_4 = *(arg4 + 0x20)
    int16_t* ebx_3 = ecx_4 + ((arg3 + edx_11) << 1)
    int32_t eax_30
    int32_t edx_12
    edx_12:eax_30 = sx.q(sx.d(*ebx_3) + 2 + sx.d(*(ecx_4 + (edx_11 << 1) + 2)) + sx.d(ebx_3[1])
        + sx.d(*(ecx_4 + (edx_11 << 1))))
    *(arg5 + ebp_5 + 4) += ((eax_30 + (edx_12 & 3)) s>> 2).w
    int32_t edx_16 = arg2 + 3 + esi
    int32_t ebp_6 = *(result_1 + 0x20)
    int32_t ecx_6 = *(arg4 + 0x20)
    int16_t* ebx_4 = ecx_6 + ((arg3 + edx_16) << 1)
    int32_t eax_42
    int32_t edx_17
    edx_17:eax_42 = sx.q(sx.d(*ebx_4) + 2 + sx.d(*(ecx_6 + (edx_16 << 1) + 2)) + sx.d(ebx_4[1])
        + sx.d(*(ecx_6 + (edx_16 << 1))))
    *(arg5 + ebp_6 + 6) += ((eax_42 + (edx_17 & 3)) s>> 2).w
    int32_t edx_21 = arg2 + 4 + esi
    int32_t ebp_7 = *(result_1 + 0x20)
    int32_t ecx_8 = *(arg4 + 0x20)
    int16_t* ebx_5 = ecx_8 + ((arg3 + edx_21) << 1)
    int32_t eax_54
    int32_t edx_22
    edx_22:eax_54 = sx.q(sx.d(*ebx_5) + 2 + sx.d(*(ecx_8 + (edx_21 << 1) + 2)) + sx.d(ebx_5[1])
        + sx.d(*(ecx_8 + (edx_21 << 1))))
    *(arg5 + ebp_7 + 8) += ((eax_54 + (edx_22 & 3)) s>> 2).w
    int32_t edx_26 = arg2 + 5 + esi
    int32_t ebp_8 = *(result_1 + 0x20)
    int32_t ecx_10 = *(arg4 + 0x20)
    int16_t* ebx_6 = ecx_10 + ((arg3 + edx_26) << 1)
    int32_t eax_66
    int32_t edx_27
    edx_27:eax_66 = sx.q(sx.d(*ebx_6) + 2 + sx.d(*(ecx_10 + (edx_26 << 1) + 2)) + sx.d(ebx_6[1])
        + sx.d(*(ecx_10 + (edx_26 << 1))))
    *(arg5 + ebp_8 + 0xa) += ((eax_66 + (edx_27 & 3)) s>> 2).w
    int32_t edx_31 = arg2 + 6 + esi
    int32_t ebp_9 = *(result_1 + 0x20)
    int32_t ecx_12 = *(arg4 + 0x20)
    int16_t* ebx_7 = ecx_12 + ((arg3 + edx_31) << 1)
    int32_t eax_78
    int32_t edx_32
    edx_32:eax_78 = sx.q(sx.d(*ebx_7) + 2 + sx.d(*(ecx_12 + (edx_31 << 1) + 2)) + sx.d(ebx_7[1])
        + sx.d(*(ecx_12 + (edx_31 << 1))))
    void* edx_36 = arg2 + 7 + esi
    *(arg5 + ebp_9 + 0xc) += ((eax_78 + (edx_32 & 3)) s>> 2).w
    int32_t ebp_10 = *(result_1 + 0x20)
    int32_t ecx_14 = *(arg4 + 0x20)
    int16_t* ebx_8 = ecx_14 + ((arg3 + edx_36) << 1)
    ebx = arg3
    int32_t eax_90
    int32_t edx_37
    edx_37:eax_90 = sx.q(sx.d(*ebx_8) + 2 + sx.d(*(ecx_14 + (edx_36 << 1) + 2)) + sx.d(ebx_8[1])
        + sx.d(*(ecx_14 + (edx_36 << 1))))
    ecx = arg2 + ebx
    arg2 = ecx
    *(arg5 + ebp_10 + 0xe) += ((eax_90 + (edx_37 & 3)) s>> 2).w
    edx = arg5 + 0x10 + ebp - 0x10
    i = i_1
    i_1 -= 1
    result = result_1
    arg5 = edx
while (i != 1)
return result
