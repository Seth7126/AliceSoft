// 函数: sub_43b5a0
// 地址: 0x43b5a0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ebp = arg2
void* result = arg1
int32_t ecx = arg3
int32_t esi = arg5
int32_t edx = ebp << 1
void* result_1 = result
int32_t ebx = ecx * 2
arg5 = edx
arg2 = 8
int32_t i

do
    int32_t edi_1 = esi + ebp
    int16_t* ebx_2 = *(result + 0x20) + edx
    int32_t edx_2 = *(arg4 + 0x20)
    int32_t eax_3
    int32_t edx_3
    edx_3:eax_3 = sx.q(sx.d(*(edx_2 + (edi_1 << 1))) + sx.d(*(edx_2 + ((edi_1 + ecx) << 1))) + 1)
    int32_t edi_3 = esi + 1 + ebp
    *ebx_2 += ((eax_3 - edx_3) s>> 1).w
    void* ebx_4 = arg5 + *(result_1 + 0x20)
    int32_t edx_4 = *(arg4 + 0x20)
    int32_t eax_13
    int32_t edx_5
    edx_5:eax_13 = sx.q(sx.d(*(edx_4 + (edi_3 << 1))) + sx.d(*(edx_4 + ((arg3 + edi_3) << 1))) + 1)
    int32_t edi_5 = esi + 2 + ebp
    *(ebx_4 + 2) += ((eax_13 - edx_5) s>> 1).w
    int32_t ebx_5 = *(result_1 + 0x20)
    int32_t edx_6 = *(arg4 + 0x20)
    int32_t edi_7 = esi + 3 + ebp
    int32_t eax_22
    int32_t edx_7
    edx_7:eax_22 = sx.q(sx.d(*(edx_6 + (edi_5 << 1))) + sx.d(*(edx_6 + ((arg3 + edi_5) << 1))) + 1)
    *(arg5 + ebx_5 + 4) += ((eax_22 - edx_7) s>> 1).w
    int32_t ebx_6 = *(result_1 + 0x20)
    int32_t edx_8 = *(arg4 + 0x20)
    int32_t edi_9 = esi + 4 + ebp
    int32_t eax_31
    int32_t edx_9
    edx_9:eax_31 = sx.q(sx.d(*(edx_8 + (edi_7 << 1))) + sx.d(*(edx_8 + ((arg3 + edi_7) << 1))) + 1)
    *(arg5 + ebx_6 + 6) += ((eax_31 - edx_9) s>> 1).w
    int32_t ebx_7 = *(result_1 + 0x20)
    int32_t edx_10 = *(arg4 + 0x20)
    int32_t eax_40
    int32_t edx_11
    edx_11:eax_40 =
        sx.q(sx.d(*(edx_10 + (edi_9 << 1))) + sx.d(*(edx_10 + ((arg3 + edi_9) << 1))) + 1)
    int32_t edi_11 = esi + 5 + ebp
    *(arg5 + ebx_7 + 8) += ((eax_40 - edx_11) s>> 1).w
    int32_t ebx_8 = *(result_1 + 0x20)
    int32_t edx_12 = *(arg4 + 0x20)
    int32_t edi_13 = esi + 6 + ebp
    int32_t eax_49
    int32_t edx_13
    edx_13:eax_49 =
        sx.q(sx.d(*(edx_12 + (edi_11 << 1))) + sx.d(*(edx_12 + ((arg3 + edi_11) << 1))) + 1)
    *(arg5 + ebx_8 + 0xa) += ((eax_49 - edx_13) s>> 1).w
    int32_t ebx_9 = *(result_1 + 0x20)
    int32_t edx_14 = *(arg4 + 0x20)
    int32_t edi_15 = esi + 7 + ebp
    int32_t eax_58
    int32_t edx_15
    edx_15:eax_58 =
        sx.q(sx.d(*(edx_14 + (edi_13 << 1))) + sx.d(*(edx_14 + ((arg3 + edi_13) << 1))) + 1)
    *(arg5 + ebx_9 + 0xc) += ((eax_58 - edx_15) s>> 1).w
    int32_t ebx_10 = *(result_1 + 0x20)
    int32_t edx_16 = *(arg4 + 0x20)
    int32_t eax_67
    int32_t edx_17
    edx_17:eax_67 =
        sx.q(sx.d(*(edx_16 + (edi_15 << 1))) + sx.d(*(edx_16 + ((arg3 + edi_15) << 1))) + 1)
    *(arg5 + ebx_10 + 0xe) += ((eax_67 - edx_17) s>> 1).w
    result = result_1
    ecx = arg3
    edx = ebx + arg5 + 0x10 - 0x10
    ebp += ecx
    arg5 = edx
    i = arg2
    arg2 -= 1
while (i != 1)
return result
