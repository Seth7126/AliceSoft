// 函数: sub_651170
// 地址: 0x651170
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if ((arg1[7] & 0xff000000) != 0 || (arg1[8] & 0xff000000) != 0)
    *(*arg1 + 0x14) = 0x2a
    *(*arg1 + 0x18) = 0xffdc
    (**arg1)(arg1)

int32_t edi = arg1[0x5b]
int32_t ecx = arg1[0xe]
int32_t edx_1 = arg1[0xf] * edi

if (ecx u>= edx_1)
    int32_t eax_6 = arg1[7] * edi
    arg1[0x42] = 1
    arg1[0x43] = 1
    arg1[0x10] = eax_6
    int32_t eax_8 = arg1[8] * edi
    arg1[0x11] = eax_8
    return eax_8

if (ecx * 2 u>= edx_1)
    int32_t eax_11 = arg1[7] * edi
    arg1[0x42] = 2
    arg1[0x43] = 2
    int32_t eax_13
    int32_t edx_2
    edx_2:eax_13 = sx.q(eax_11 + 1)
    arg1[0x10] = (eax_13 - edx_2) s>> 1
    int32_t eax_19
    int32_t edx_3
    edx_3:eax_19 = sx.q(arg1[8] * edi + 1)
    int32_t eax_21 = (eax_19 - edx_3) s>> 1
    arg1[0x11] = eax_21
    return eax_21

if (ecx * 3 u>= edx_1)
    int32_t ecx_2 = arg1[7] * edi
    arg1[0x42] = 3
    arg1[0x43] = 3
    arg1[0x10] = (ecx_2 + 2) s/ 3
    int32_t eax_24
    int32_t edx_5
    edx_5:eax_24 = muls.dp.d(0x55555556, arg1[8] * edi + 2)
    int32_t eax_27 = (edx_5 u>> 0x1f) + edx_5
    arg1[0x11] = eax_27
    return eax_27

if (ecx << 2 u>= edx_1)
    int32_t eax_30 = arg1[7] * edi
    arg1[0x42] = 4
    arg1[0x43] = 4
    int32_t eax_32
    int32_t edx_6
    edx_6:eax_32 = sx.q(eax_30 + 3)
    arg1[0x10] = (eax_32 + (edx_6 & 3)) s>> 2
    int32_t eax_38
    int32_t edx_8
    edx_8:eax_38 = sx.q(arg1[8] * edi + 3)
    int32_t eax_40 = (eax_38 + (edx_8 & 3)) s>> 2
    arg1[0x11] = eax_40
    return eax_40

if (ecx * 5 u>= edx_1)
    int32_t ecx_11 = arg1[7] * edi
    arg1[0x42] = 5
    arg1[0x43] = 5
    arg1[0x10] = (ecx_11 + 4) s/ 5
    int32_t eax_43
    int32_t edx_12
    edx_12:eax_43 = muls.dp.d(0x66666667, arg1[8] * edi + 4)
    int32_t edx_13 = edx_12 s>> 1
    int32_t eax_46 = (edx_13 u>> 0x1f) + edx_13
    arg1[0x11] = eax_46
    return eax_46

if (ecx * 6 u>= edx_1)
    int32_t ecx_20 = arg1[7] * edi
    arg1[0x42] = 6
    arg1[0x43] = 6
    arg1[0x10] = (ecx_20 + 5) s/ 6
    int32_t eax_50
    int32_t edx_15
    edx_15:eax_50 = muls.dp.d(0x2aaaaaab, arg1[8] * edi + 5)
    int32_t eax_53 = (edx_15 u>> 0x1f) + edx_15
    arg1[0x11] = eax_53
    return eax_53

if (ecx * 7 u>= edx_1)
    int32_t ecx_29 = arg1[7] * edi
    arg1[0x42] = 7
    arg1[0x43] = 7
    arg1[0x10] = (ecx_29 + 6) s/ 7
    int32_t eax_60 = (arg1[8] * edi + 6) s/ 7
    arg1[0x11] = eax_60
    return eax_60

if (ecx << 3 u>= edx_1)
    int32_t eax_63 = arg1[7] * edi
    arg1[0x42] = 8
    arg1[0x43] = 8
    int32_t eax_65
    int32_t edx_22
    edx_22:eax_65 = sx.q(eax_63 + 7)
    arg1[0x10] = (eax_65 + (edx_22 & 7)) s>> 3
    int32_t eax_71
    int32_t edx_24
    edx_24:eax_71 = sx.q(arg1[8] * edi + 7)
    int32_t eax_73 = (eax_71 + (edx_24 & 7)) s>> 3
    arg1[0x11] = eax_73
    return eax_73

if (ecx * 9 u>= edx_1)
    int32_t ecx_38 = arg1[7] * edi
    arg1[0x42] = 9
    arg1[0x43] = 9
    arg1[0x10] = (ecx_38 + 8) s/ 9
    int32_t eax_76
    int32_t edx_28
    edx_28:eax_76 = muls.dp.d(0x38e38e39, arg1[8] * edi + 8)
    int32_t edx_29 = edx_28 s>> 1
    int32_t eax_79 = (edx_29 u>> 0x1f) + edx_29
    arg1[0x11] = eax_79
    return eax_79

if (ecx * 0xa u>= edx_1)
    int32_t ecx_47 = arg1[7] * edi
    arg1[0x42] = 0xa
    arg1[0x43] = 0xa
    int32_t ecx_50 = arg1[8] * edi
    arg1[0x10] = (ecx_47 + 9) s/ 0xa
    int32_t eax_89 = (ecx_50 + 9) s/ 0xa
    arg1[0x11] = eax_89
    return eax_89

if (ecx * 0xb u>= edx_1)
    int32_t ecx_53 = arg1[7] * edi
    arg1[0x42] = 0xb
    arg1[0x43] = 0xb
    arg1[0x10] = (ecx_53 + 0xa) s/ 0xb
    int32_t eax_92
    int32_t edx_36
    edx_36:eax_92 = muls.dp.d(0x2e8ba2e9, arg1[8] * edi + 0xa)
    int32_t edx_37 = edx_36 s>> 1
    int32_t eax_95 = (edx_37 u>> 0x1f) + edx_37
    arg1[0x11] = eax_95
    return eax_95

if (ecx * 0xc u>= edx_1)
    int32_t ecx_62 = arg1[7] * edi
    arg1[0x42] = 0xc
    arg1[0x43] = 0xc
    int32_t ecx_65 = arg1[8] * edi
    arg1[0x10] = (ecx_62 + 0xb) s/ 0xc
    int32_t eax_105 = (ecx_65 + 0xb) s/ 0xc
    arg1[0x11] = eax_105
    return eax_105

if (ecx * 0xd u>= edx_1)
    int32_t ecx_68 = arg1[7] * edi
    arg1[0x42] = 0xd
    arg1[0x43] = 0xd
    arg1[0x10] = (ecx_68 + 0xc) s/ 0xd
    int32_t eax_108
    int32_t edx_44
    edx_44:eax_108 = muls.dp.d(0x4ec4ec4f, arg1[8] * edi + 0xc)
    int32_t edx_45 = edx_44 s>> 2
    int32_t eax_111 = (edx_45 u>> 0x1f) + edx_45
    arg1[0x11] = eax_111
    return eax_111

if (ecx * 0xe u>= edx_1)
    int32_t ecx_77 = arg1[7] * edi
    arg1[0x42] = 0xe
    arg1[0x43] = 0xe
    int32_t ecx_80 = arg1[8] * edi
    arg1[0x10] = (ecx_77 + 0xd) s/ 0xe
    int32_t eax_122 = (ecx_80 + 0xd) s/ 0xe
    arg1[0x11] = eax_122
    return eax_122

if (ecx * 0xf u< edx_1)
    int32_t eax_132 = arg1[7] * edi
    arg1[0x42] = 0x10
    arg1[0x43] = 0x10
    int32_t eax_134
    int32_t edx_58
    edx_58:eax_134 = sx.q(eax_132 + 0xf)
    arg1[0x10] = (eax_134 + (edx_58 & 0xf)) s>> 4
    int32_t eax_140
    int32_t edx_60
    edx_60:eax_140 = sx.q(arg1[8] * edi + 0xf)
    int32_t eax_142 = (eax_140 + (edx_60 & 0xf)) s>> 4
    arg1[0x11] = eax_142
    return eax_142

int32_t ecx_83 = arg1[7] * edi
arg1[0x42] = 0xf
arg1[0x43] = 0xf
arg1[0x10] = (ecx_83 + 0xe) s/ 0xf
int32_t eax_130 = (arg1[8] * edi + 0xe) s/ 0xf
arg1[0x11] = eax_130
return eax_130
