// 函数: sub_445110
// 地址: 0x445110
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t eax = arg5
int32_t ebx = eax * 2
void* var_38 = arg1
int32_t edx = eax + arg3
arg5 = 8
int32_t esi = arg2
int32_t edi = edx * 2
int32_t var_34 = edi
int16_t result
int32_t i

do
    int16_t* ebx_11 = *(arg1 + 0x18) + (esi << 1)
    int32_t eax_4 = edi + (esi << 1)
    int32_t esi_1 = ebx + (esi << 1)
    void* edi_2 = *(arg4 + 0x18)
    int32_t eax_9
    int32_t edx_2
    edx_2:eax_9 = sx.q(sx.d(*(edi_2 + esi_1)) + sx.d(*(edi_2 + esi_1 + 2)) + sx.d(*(edi_2 + eax_4))
        + sx.d(*(edi_2 + eax_4 + 2)) + 2)
    *ebx_11 += ((eax_9 + (edx_2 & 3)) s>> 2).w
    void* edi_3 = *(var_38 + 0x18) + (arg2 << 1)
    int32_t ecx_4 = *(arg4 + 0x18)
    void* edx_4 = var_34 + ecx_4 + (arg2 << 1)
    void* ecx_5 = ebx + ecx_4 + (arg2 << 1)
    int32_t eax_23
    int32_t edx_5
    edx_5:eax_23 =
        sx.q(sx.d(*(ecx_5 + 2)) + 2 + sx.d(*(ecx_5 + 4)) + sx.d(*(edx_4 + 4)) + sx.d(*(edx_4 + 2)))
    void* esi_7 = (eax << 1) + 4 + (arg2 << 1)
    *(edi_3 + 2) += ((eax_23 + (edx_5 & 3)) s>> 2).w
    void* ebx_13 = *(var_38 + 0x18) + (arg2 << 1)
    void* edi_5 = *(arg4 + 0x18)
    void* eax_28 = (edx << 1) + 4 + (arg2 << 1)
    int32_t eax_34
    int32_t edx_8
    edx_8:eax_34 = sx.q(sx.d(*(edi_5 + esi_7)) + 2 + sx.d(*(edi_5 + esi_7 + 2))
        + sx.d(*(edi_5 + eax_28)) + sx.d(*(edi_5 + eax_28 + 2)))
    *(ebx_13 + 4) += ((eax_34 + (edx_8 & 3)) s>> 2).w
    void* edi_6 = *(arg4 + 0x18)
    void* ebx_14 = *(var_38 + 0x18) + (arg2 << 1)
    void* eax_40 = (edx << 1) + 6 + (arg2 << 1)
    void* esi_9 = (eax << 1) + 6 + (arg2 << 1)
    int32_t eax_46
    int32_t edx_11
    edx_11:eax_46 = sx.q(sx.d(*(edi_6 + esi_9)) + 2 + sx.d(*(edi_6 + esi_9 + 2))
        + sx.d(*(edi_6 + eax_40)) + sx.d(*(edi_6 + eax_40 + 2)))
    *(ebx_14 + 6) += ((eax_46 + (edx_11 & 3)) s>> 2).w
    void* edi_7 = *(arg4 + 0x18)
    void* ebx_15 = *(var_38 + 0x18) + (arg2 << 1)
    void* eax_52 = (edx << 1) + 8 + (arg2 << 1)
    void* esi_11 = (eax << 1) + 8 + (arg2 << 1)
    int32_t eax_58
    int32_t edx_14
    edx_14:eax_58 = sx.q(sx.d(*(edi_7 + esi_11)) + 2 + sx.d(*(edi_7 + esi_11 + 2))
        + sx.d(*(edi_7 + eax_52)) + sx.d(*(edi_7 + eax_52 + 2)))
    *(ebx_15 + 8) += ((eax_58 + (edx_14 & 3)) s>> 2).w
    void* edi_8 = *(arg4 + 0x18)
    void* ebx_16 = *(var_38 + 0x18) + (arg2 << 1)
    void* eax_64 = (edx << 1) + 0xa + (arg2 << 1)
    void* esi_13 = (eax << 1) + 0xa + (arg2 << 1)
    int32_t eax_70
    int32_t edx_17
    edx_17:eax_70 = sx.q(sx.d(*(edi_8 + esi_13)) + 2 + sx.d(*(edi_8 + esi_13 + 2))
        + sx.d(*(edi_8 + eax_64)) + sx.d(*(edi_8 + eax_64 + 2)))
    *(ebx_16 + 0xa) += ((eax_70 + (edx_17 & 3)) s>> 2).w
    void* edi_9 = *(arg4 + 0x18)
    void* ebx_17 = *(var_38 + 0x18) + (arg2 << 1)
    void* eax_76 = (edx << 1) + 0xc + (arg2 << 1)
    void* esi_15 = (eax << 1) + 0xc + (arg2 << 1)
    int32_t eax_82
    int32_t edx_20
    edx_20:eax_82 = sx.q(sx.d(*(edi_9 + esi_15)) + 2 + sx.d(*(edi_9 + esi_15 + 2))
        + sx.d(*(edi_9 + eax_76)) + sx.d(*(edi_9 + eax_76 + 2)))
    *(ebx_17 + 0xc) += ((eax_82 + (edx_20 & 3)) s>> 2).w
    void* ebx_18 = *(var_38 + 0x18) + (arg2 << 1)
    void* edi_10 = *(arg4 + 0x18)
    void* eax_88 = (edx << 1) + 0xe + (arg2 << 1)
    void* esi_17 = (eax << 1) + 0xe + (arg2 << 1)
    edi = var_34
    arg1 = var_38
    int32_t eax_94
    int32_t edx_23
    edx_23:eax_94 = sx.q(sx.d(*(edi_10 + esi_17)) + 2 + sx.d(*(edi_10 + esi_17 + 2))
        + sx.d(*(edi_10 + eax_88)) + sx.d(*(edi_10 + eax_88 + 2)))
    esi = arg2 + arg3
    arg2 = esi
    result = ((eax_94 + (edx_23 & 3)) s>> 2).w
    *(ebx_18 + 0xe) += result
    i = arg5
    arg5 -= 1
while (i != 1)
return result
