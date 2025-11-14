// 函数: sub_4459e0
// 地址: 0x4459e0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t edx_1 = arg3 + arg5
int32_t ecx = edx_1 * 2
void* ebp = arg4
int32_t ecx_1 = arg5 * 2
int32_t ecx_12 = arg2
arg4 = 8
int16_t result
void* i

do
    int32_t edx_2 = *(ebp + 0x24)
    int16_t* esi_1 = *(arg1 + 0x24) + (ecx_12 << 1)
    int32_t eax_10
    int32_t edx_3
    edx_3:eax_10 =
        sx.q(sx.d(*(ecx_1 + (arg2 << 1) + edx_2)) + 1 + sx.d(*(ecx + (ecx_12 << 1) + edx_2)))
    *esi_1 += ((eax_10 - edx_3) s>> 1).w
    int32_t edx_4 = *(ebp + 0x24)
    void* esi_2 = *(arg1 + 0x24) + (arg2 << 1)
    int32_t eax_19
    int32_t edx_5
    edx_5:eax_19 =
        sx.q(sx.d(*(ecx + (arg2 << 1) + edx_4 + 2)) + sx.d(*(ecx_1 + (arg2 << 1) + edx_4 + 2)) + 1)
    *(esi_2 + 2) += ((eax_19 - edx_5) s>> 1).w
    int32_t edx_6 = *(ebp + 0x24)
    void* esi_3 = *(arg1 + 0x24) + (arg2 << 1)
    int32_t eax_27
    int32_t edx_7
    edx_7:eax_27 = sx.q(sx.d(*((arg5 << 1) + 4 + (arg2 << 1) + edx_6))
        + sx.d(*((edx_1 << 1) + 4 + (arg2 << 1) + edx_6)) + 1)
    *(esi_3 + 4) += ((eax_27 - edx_7) s>> 1).w
    int32_t edx_8 = *(ebp + 0x24)
    void* esi_4 = *(arg1 + 0x24) + (arg2 << 1)
    int32_t eax_35
    int32_t edx_9
    edx_9:eax_35 = sx.q(sx.d(*((arg5 << 1) + 6 + (arg2 << 1) + edx_8))
        + sx.d(*((edx_1 << 1) + 6 + (arg2 << 1) + edx_8)) + 1)
    *(esi_4 + 6) += ((eax_35 - edx_9) s>> 1).w
    int32_t edx_10 = *(ebp + 0x24)
    void* esi_5 = *(arg1 + 0x24) + (arg2 << 1)
    int32_t eax_43
    int32_t edx_11
    edx_11:eax_43 = sx.q(sx.d(*((arg5 << 1) + 8 + (arg2 << 1) + edx_10))
        + sx.d(*((edx_1 << 1) + 8 + (arg2 << 1) + edx_10)) + 1)
    *(esi_5 + 8) += ((eax_43 - edx_11) s>> 1).w
    int32_t edx_12 = *(ebp + 0x24)
    void* esi_6 = *(arg1 + 0x24) + (arg2 << 1)
    int32_t eax_51
    int32_t edx_13
    edx_13:eax_51 = sx.q(sx.d(*((arg5 << 1) + 0xa + (arg2 << 1) + edx_12))
        + sx.d(*((edx_1 << 1) + 0xa + (arg2 << 1) + edx_12)) + 1)
    *(esi_6 + 0xa) += ((eax_51 - edx_13) s>> 1).w
    int32_t edx_14 = *(ebp + 0x24)
    void* esi_7 = *(arg1 + 0x24) + (arg2 << 1)
    int32_t eax_59
    int32_t edx_15
    edx_15:eax_59 = sx.q(sx.d(*((arg5 << 1) + 0xc + (arg2 << 1) + edx_14))
        + sx.d(*((edx_1 << 1) + 0xc + (arg2 << 1) + edx_14)) + 1)
    *(esi_7 + 0xc) += ((eax_59 - edx_15) s>> 1).w
    int32_t edx_16 = *(ebp + 0x24)
    void* esi_8 = *(arg1 + 0x24) + (arg2 << 1)
    int32_t eax_67
    int32_t edx_17
    edx_17:eax_67 = sx.q(sx.d(*((arg5 << 1) + 0xe + (arg2 << 1) + edx_16))
        + sx.d(*((edx_1 << 1) + 0xe + (arg2 << 1) + edx_16)) + 1)
    ecx_12 = arg2 + 8 + arg3 - 8
    result = ((eax_67 - edx_17) s>> 1).w
    *(esi_8 + 0xe) += result
    i = arg4
    arg4 -= 1
    arg2 = ecx_12
while (i != 1)
return result
