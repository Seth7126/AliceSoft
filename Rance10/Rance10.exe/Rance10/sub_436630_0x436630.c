// 函数: sub_436630
// 地址: 0x436630
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* esi = arg2 + 0x40
int32_t i_2 = 8
int32_t i

do
    int32_t eax_2 = *(esi + 0x80) + *esi
    int32_t edx = *(esi + 0x60)
    int32_t ecx = *(esi + 0x20)
    int32_t eax_4 = edx - ecx
    int32_t eax_5 = *(esi + 0xa0)
    int32_t ebp_1 = *(esi - 0x20)
    int32_t edi_1 = edx + ecx
    int32_t ebx_1 = eax_5 + ebp_1
    int32_t ebp_2 = ebp_1 - eax_5
    int32_t eax_6 = edi_1 + ebx_1
    int32_t edi_2 = *(esi + 0x40)
    int32_t eax_10
    char edx_1
    edx_1:eax_10 = sx.q(ebp_2 * 0x1d9 - eax_4 * 0xc4 + 0x80)
    int32_t eax_13 = ((eax_10 + zx.d(edx_1)) s>> 8) - eax_6
    int32_t eax_14 = eax_13 - (((ebx_1 - edi_1) * 0x16a + 0x80) s>> 8)
    int32_t ecx_6 = *(esi - 0x40) - edi_2
    int32_t edi_3 = edi_2 + *(esi - 0x40)
    int32_t eax_19
    char edx_3
    edx_3:eax_19 = sx.q((*esi - *(esi + 0x80)) * 0x16a + 0x80)
    int32_t eax_22 = ((eax_19 + zx.d(edx_3)) s>> 8) - eax_2
    int32_t ebp_3 = edi_3 + eax_2
    int32_t edi_4 = edi_3 - eax_2
    int32_t ebx_3 = eax_22 + ecx_6
    int32_t ecx_7 = ecx_6 - eax_22
    int32_t eax_25
    char edx_6
    edx_6:eax_25 = sx.q(ebp_2 * 0xc4 + eax_4 * 0x1d9 + 0x80)
    int32_t ecx_12 = neg.d(eax_14) - ((eax_25 + zx.d(edx_6)) s>> 8)
    *(esi - 0x40) = eax_6 + ebp_3
    *(esi - 0x20) = eax_13 + ebx_3
    *esi = ecx_7 - eax_14
    *(esi + 0x20) = edi_4 - ecx_12
    *(esi + 0x40) = ecx_12 + edi_4
    *(esi + 0x60) = eax_14 + ecx_7
    *(esi + 0x80) = ebx_3 - eax_13
    esi += 4
    i = i_2
    i_2 -= 1
    *(esi + 0x9c) = ebp_3 - eax_6
while (i != 1)
void* ebx_6 = arg2 + 0x14
void* var_28_2 = arg1 + 4
void* var_24_2 = ebx_6
int32_t i_3 = 8
int16_t result
int32_t i_1

do
    int32_t ebp_5 = *(ebx_6 + 4)
    int32_t edx_8 = *ebx_6
    int32_t eax_42 = *(ebx_6 - 0xc) + ebp_5
    int32_t ecx_13 = *(ebx_6 - 8)
    int32_t eax_44 = edx_8 - ecx_13
    int32_t eax_45 = *(ebx_6 + 8)
    int32_t esi_1 = ecx_13 + edx_8
    int32_t ebx_7 = *(ebx_6 - 0x10)
    int32_t edi_5 = ebx_7 + eax_45
    int32_t ebx_8 = ebx_7 - eax_45
    int32_t eax_46 = esi_1 + edi_5
    int32_t ebx_10 = *(var_24_2 - 0x14)
    int32_t eax_50
    char edx_9
    edx_9:eax_50 = sx.q(ebx_8 * 0x1d9 - eax_44 * 0xc4 + 0x80)
    int32_t ecx_17 = ((zx.d(edx_9) + eax_50) s>> 8) - eax_46
    int32_t eax_53
    char edx_11
    edx_11:eax_53 = sx.q((edi_5 - esi_1) * 0x16a + 0x80)
    int32_t ecx_18 = ecx_17 - ((eax_53 + zx.d(edx_11)) s>> 8)
    int32_t ecx_19 = *(var_24_2 - 4)
    int32_t eax_57 = ebx_10 - ecx_19
    int32_t esi_2 = ebx_10 + ecx_19
    int32_t eax_62
    char edx_14
    edx_14:eax_62 = sx.q((*(var_24_2 - 0xc) - ebp_5) * 0x16a + 0x80)
    int32_t eax_65 = ((eax_62 + zx.d(edx_14)) s>> 8) - eax_42
    int32_t ebp_6 = esi_2 + eax_42
    int32_t esi_3 = esi_2 - eax_42
    int32_t edi_7 = eax_65 + eax_57
    int32_t ebx_12 = eax_57 - eax_65
    int32_t eax_68
    char edx_17
    edx_17:eax_68 = sx.q(ebx_8 * 0xc4 + eax_44 * 0x1d9 + 0x80)
    int32_t ecx_24 = neg.d(ecx_18) - ((eax_68 + zx.d(edx_17)) s>> 8)
    int32_t eax_74
    char edx_19
    edx_19:eax_74 = sx.q(eax_46 + 0x80 + ebp_6)
    *(var_28_2 - 4) = ((eax_74 + zx.d(edx_19)) s>> 8).w
    int32_t eax_80
    char edx_22
    edx_22:eax_80 = sx.q(ecx_17 + 0x80 + edi_7)
    *(var_28_2 - 2) = ((eax_80 + zx.d(edx_22)) s>> 8).w
    int32_t eax_86
    char edx_25
    edx_25:eax_86 = sx.q(ebx_12 - ecx_18 + 0x80)
    *var_28_2 = ((eax_86 + zx.d(edx_25)) s>> 8).w
    int32_t eax_92
    char edx_28
    edx_28:eax_92 = sx.q(esi_3 - ecx_24 + 0x80)
    *(var_28_2 + 2) = ((eax_92 + zx.d(edx_28)) s>> 8).w
    int32_t eax_97
    char edx_31
    edx_31:eax_97 = sx.q(esi_3 + 0x80 + ecx_24)
    *(var_28_2 + 4) = ((eax_97 + zx.d(edx_31)) s>> 8).w
    int32_t eax_103
    char edx_33
    edx_33:eax_103 = sx.q(ecx_18 + 0x80 + ebx_12)
    ebx_6 = var_24_2 + 0x20
    var_24_2 = ebx_6
    *(var_28_2 + 6) = ((eax_103 + zx.d(edx_33)) s>> 8).w
    int32_t eax_107
    char edx_35
    edx_35:eax_107 = sx.q(edi_7 - ecx_17 + 0x80)
    *(var_28_2 + 8) = ((eax_107 + zx.d(edx_35)) s>> 8).w
    int32_t eax_111
    char edx_37
    edx_37:eax_111 = sx.q(ebp_6 - eax_46 + 0x80)
    result = ((eax_111 + zx.d(edx_37)) s>> 8).w
    *(var_28_2 + 0xa) = result
    i_1 = i_3
    i_3 -= 1
    var_28_2 += 0x10
while (i_1 != 1)
return result
