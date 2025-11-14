// 函数: sub_445c50
// 地址: 0x445c50
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t eax = arg5
int32_t ebp = arg2
int32_t ecx = eax * 2
arg5 = 8
int32_t var_18 = ecx
int32_t i

do
    void* edx_5 = ecx + (ebp << 1)
    int16_t* esi_1 = *(arg1 + 0x18) + (ebp << 1)
    int32_t eax_3 = *(arg4 + 0x18)
    int32_t eax_6
    int32_t edx_6
    edx_6:eax_6 = sx.q(sx.d(*(edx_5 + eax_3)) + sx.d(*(edx_5 + eax_3 + 2)) + 1)
    *esi_1 += ((eax_6 - edx_6) s>> 1).w
    void* esi_2 = *(arg1 + 0x18) + (ebp << 1)
    int32_t ecx_3 = var_18 + (ebp << 1)
    int32_t eax_11 = *(arg4 + 0x18)
    int32_t eax_14
    int32_t edx_9
    edx_9:eax_14 = sx.q(sx.d(*(ecx_3 + eax_11 + 2)) + sx.d(*(ecx_3 + eax_11 + 4)) + 1)
    *(esi_2 + 2) += ((eax_14 - edx_9) s>> 1).w
    void* esi_3 = *(arg1 + 0x18) + (ebp << 1)
    void* edx_10 = (eax << 1) + 4 + (ebp << 1)
    int32_t eax_19 = *(arg4 + 0x18)
    int32_t eax_22
    int32_t edx_11
    edx_11:eax_22 = sx.q(sx.d(*(edx_10 + eax_19)) + sx.d(*(edx_10 + eax_19 + 2)) + 1)
    *(esi_3 + 4) += ((eax_22 - edx_11) s>> 1).w
    void* esi_4 = *(arg1 + 0x18) + (ebp << 1)
    void* edx_12 = (eax << 1) + 6 + (ebp << 1)
    int32_t eax_27 = *(arg4 + 0x18)
    int32_t eax_30
    int32_t edx_13
    edx_13:eax_30 = sx.q(sx.d(*(edx_12 + eax_27)) + sx.d(*(edx_12 + eax_27 + 2)) + 1)
    *(esi_4 + 6) += ((eax_30 - edx_13) s>> 1).w
    void* esi_5 = *(arg1 + 0x18) + (ebp << 1)
    void* edx_14 = (eax << 1) + 8 + (ebp << 1)
    int32_t eax_35 = *(arg4 + 0x18)
    int32_t eax_38
    int32_t edx_15
    edx_15:eax_38 = sx.q(sx.d(*(edx_14 + eax_35)) + sx.d(*(edx_14 + eax_35 + 2)) + 1)
    *(esi_5 + 8) += ((eax_38 - edx_15) s>> 1).w
    void* esi_6 = *(arg1 + 0x18) + (ebp << 1)
    void* edx_16 = (eax << 1) + 0xa + (ebp << 1)
    int32_t eax_43 = *(arg4 + 0x18)
    int32_t eax_46
    int32_t edx_17
    edx_17:eax_46 = sx.q(sx.d(*(edx_16 + eax_43)) + sx.d(*(edx_16 + eax_43 + 2)) + 1)
    *(esi_6 + 0xa) += ((eax_46 - edx_17) s>> 1).w
    void* esi_7 = *(arg1 + 0x18) + (ebp << 1)
    void* edx_18 = (eax << 1) + 0xc + (ebp << 1)
    int32_t eax_51 = *(arg4 + 0x18)
    int32_t eax_54
    int32_t edx_19
    edx_19:eax_54 = sx.q(sx.d(*(edx_18 + eax_51)) + sx.d(*(edx_18 + eax_51 + 2)) + 1)
    *(esi_7 + 0xc) += ((eax_54 - edx_19) s>> 1).w
    void* esi_8 = *(arg1 + 0x18) + (ebp << 1)
    void* edx_20 = (eax << 1) + 0xe + (ebp << 1)
    int32_t eax_59 = *(arg4 + 0x18)
    ecx = var_18
    int32_t eax_62
    int32_t edx_21
    edx_21:eax_62 = sx.q(sx.d(*(edx_20 + eax_59)) + sx.d(*(edx_20 + eax_59 + 2)) + 1)
    *(esi_8 + 0xe) += ((eax_62 - edx_21) s>> 1).w
    ebp = ebp + 8 + arg3 - 8
    i = arg5
    arg5 -= 1
while (i != 1)
return arg3 - 8
