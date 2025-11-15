// 函数: sub_5f24e0
// 地址: 0x5f24e0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp_1
int32_t __saved_ebp = __saved_ebp_1
int32_t var_c = 0
int32_t __saved_ebx_1
int32_t __saved_ebx = __saved_ebx_1
int32_t esi
int32_t var_1c = esi
void* edi
void* var_20 = edi
int32_t* esp_1 = &var_20

if (arg2 u> 0x49)
    sub_602420(arg1)
    return arg1

int32_t* var_2c_2
void* var_28
void* var_24
int32_t* eax_30
char eax_49
int32_t* eax_93
int32_t* eax_111
int32_t eax_112
int32_t* ecx_29
bool ecx_67
int32_t* edx_8
void* edx_13
int32_t edx_29
void** esp_2
void** esp_6
bool cond:1_1

switch (arg2)
    case 0
        void* eax_2 = *arg3
        void* eax_3
        void* ecx_1
        eax_3, ecx_1 = sub_602ff0()
        var_24 = eax_3
        var_28 = ecx_1
        var_28 = sub_602ff0()
        int32_t eax_5
        int32_t ecx_4
        eax_5, ecx_4 = sub_602ff0()
        int32_t var_30_1 = ecx_4
        int32_t eax_6 = sub_602ff0()
        int32_t* eax_7 = sub_603530(eax_2)
        sub_5f6910(eax_7, eax_6, eax_7, eax_5, var_28, var_24)
        *arg1 = 0
        return arg1
    case 1
        void* edi_3 = *arg3
        void* eax_10 = sub_602ff0()
        int32_t* eax_11 = sub_603530(edi_3)
        var_24 = eax_10
        (*(*eax_11 + 0x44))(var_24)
        *arg1 = 0
        return arg1
    case 2
        void* edi_5 = *arg3
        var_24 = edi_5 + 0x20
        var_28 = edi_5 + 0x10
        void* eax_15 = sub_602ff0()
        int32_t* eax_16 = sub_603530(edi_5)
        sub_5f6a30(eax_16, eax_15, eax_16, var_24)
        *arg1 = 0
        return arg1
    case 3
        void* edi_7 = *arg3
        int32_t* eax_19 = sub_603530(edi_7 + 0x10)
        sub_5f6a90(sub_603530(edi_7), eax_19)
        *arg1 = 0
        return arg1
    case 4
        sub_5f6b50(arg1, sub_603530(*arg3))
        return arg1
    case 5
        sub_603530(*arg3)
        sub_5f6b80(arg1)
        return arg1
    case 6
        (*(*sub_603530(*arg3) + 0x48))()
        *arg1 = 0
        return arg1
    case 7
        void* esi_13 = *arg3
        int32_t* eax_29 = sub_603530(esi_13)
        var_24 = esi_13 + 0x10
        eax_30 = (*(*eax_29 + 8))(var_24)
        esp_2 = &var_20
        edx_8 = eax_30
        ecx_29 = eax_29
    label_5f2679:
        sub_5f6c20(eax_30, edx_8, ecx_29)
        *arg1 = 0
        esp_2[1]
        esp_2[2]
        esp_2[3]
        return arg1
    case 8
        int32_t* eax_32 = sub_603530(*arg3)
        int32_t eax_33 = (*(*eax_32 + 8))()
        int32_t edx_10 = *eax_32
        var_24 = eax_33 - 1
        (*(edx_10 + 0x44))(var_24)
        *arg1 = 0
        return arg1
    case 9
        sub_5f6ba0(arg1, sub_603530(*arg3))
        return arg1
    case 0xa
        void* edi_16 = *arg3
        int32_t* eax_39 = sub_603530(edi_16 + 0x10)
        sub_5f6be0(sub_603530(edi_16), eax_39)
        *arg1 = 0
        return arg1
    case 0xb
        void* edi_18 = *arg3
        var_24 = edi_18 + 0x20
        var_28 = edi_18 + 0x10
        int32_t* eax_44 = sub_602ff0()
        esp_2 = &var_24
        eax_30 = sub_603530(edi_18)
        edx_8 = eax_44
        ecx_29 = eax_30
        goto label_5f2679
    case 0xc
        void* edi_19 = *arg3
        void* eax_46 = sub_602ff0()
        void** eax_47 = sub_603530(edi_19)
        var_24 = eax_46
        edx_13 = *eax_47
    label_5f274f:
        eax_49 = (*(edx_13 + 0x50))()
        goto label_5f275a
    case 0xd
        void* ecx_46 = *arg3
        int32_t* eax_52 = sub_603530(ecx_46)
        var_24 = ecx_46 + 0x10
        void* eax_53 = (*(*eax_52 + 8))(var_24)
        var_28 = eax_53
        void* eax_54 = sub_5f8130(eax_53, 0, eax_52, var_28)
        edx_13 = *eax_52
        var_24 = eax_54
        goto label_5f274f
    case 0xe
        void* edi_22 = *arg3
        int32_t* eax_56 = sub_603530(edi_22 + 0x10)
        eax_49 = sub_5f6cf0(sub_603530(edi_22), eax_56)
    label_5f275a:
        int32_t ecx_45
        ecx_45.b = eax_49 != 0
        *arg1 = 0x2f
        arg1[1] = ecx_45
        return arg1
    case 0xf
        void* ecx_53 = *arg3
        eax_49 = sub_5f7410(sub_603530(ecx_53), ecx_53 + 0x10)
        goto label_5f275a
    case 0x10
        void* ecx_55 = *arg3
        var_24 = ecx_55 + 0x10
        int32_t* eax_62 = sub_603530(ecx_55)
        sub_5f74f0(eax_62, eax_62, arg1, var_24)
        return arg1
    case 0x11
        arg1[1] = (*(*sub_603530(*arg3) + 8))()
        *arg1 = 0xa
        return arg1
    case 0x12
        void* ecx_61 = *arg3
        arg1[1] = sub_5f7640(sub_603530(ecx_61), ecx_61 + 0x10)
        *arg1 = 0xa
        return arg1
    case 0x13
        cond:1_1 = (*(*sub_603530(*arg3) + 8))() == 0
    label_5f285a:
        ecx_67 = cond:1_1
        goto label_5f2863
    case 0x14
        void* ecx_69 = *arg3
        int32_t* eax_75 = sub_603530(ecx_69)
        int32_t eax_76 = (*(*eax_75 + 8))()
        cond:1_1 = sub_5f7640(eax_75, ecx_69 + 0x10) == eax_76
        goto label_5f285a
    case 0x15
        ecx_67 = (*(*sub_603530(*arg3) + 8))() != 0
    label_5f2863:
        *arg1 = 0x2f
        arg1[1] = zx.d(ecx_67)
        return arg1
    case 0x16
        void* ecx_75 = *arg3
        int32_t* eax_81 = sub_603530(ecx_75)
        var_24 = ecx_75 + 0x10
        void* eax_82 = (*(*eax_81 + 8))(var_24)
        var_28 = eax_82
        ecx_67 = sub_5f8130(eax_82, 0, eax_81, var_28) s>= 0
        goto label_5f2863
    case 0x17
        void* ecx_78 = *arg3
        arg1[1] = sub_5f7710(sub_603530(ecx_78), ecx_78 + 0x10)
        *arg1 = 0xa
        return arg1
    case 0x18
        void* edi_30 = *arg3
        var_24 = edi_30 + 0x30
        var_28 = edi_30 + 0x20
        var_28 = sub_602ff0()
        esp_6 = &var_28
        void* eax_91 = sub_602ff0()
        int32_t* eax_92 = sub_603530(edi_30)
        eax_93 = sub_5f7760(eax_92, eax_91, eax_92, var_28, var_24)
    label_5f2936:
        esp_1 = &esp_6[2]
        goto label_5f293c
    case 0x19
        void* edi_32 = *arg3
        int32_t* eax_96 = sub_603530(edi_32 + 0x10)
        arg1[1] = sub_5f77c0(sub_603530(edi_32), eax_96)
        *arg1 = 0xa
        return arg1
    case 0x1a
        void* edi_34 = *arg3
        void* eax_101
        void* ecx_91
        eax_101, ecx_91 = sub_603530(edi_34 + 0x20)
        var_24 = eax_101
        var_28 = ecx_91
        int32_t eax_102 = sub_602ff0()
        int32_t* eax_103 = sub_603530(edi_34)
        arg1[1] = sub_5f77f0(eax_103, eax_102, eax_103, var_24)
        *arg1 = 0xa
        return arg1
    case 0x1b
        void* eax_107 = *arg3
        void* eax_108 = sub_602ff0()
        void* eax_109 = sub_602ff0()
        int32_t* eax_110 = sub_603530(eax_107 + 0x10)
        eax_111 = sub_603530(eax_107)
        var_24 = eax_108
        edx_29 = 0
        var_28 = eax_109
        var_2c_2 = eax_110
    label_5f2a06:
        eax_112 = sub_5f7820(eax_111, edx_29, eax_111, var_2c_2, var_28, var_24)
        goto label_5f2a11
    case 0x1c
        void* eax_115 = *arg3
        void* eax_116
        void* ecx_103
        eax_116, ecx_103 = sub_602ff0()
        var_24 = eax_116
        var_28 = ecx_103
        var_28 = sub_602ff0()
        int32_t* eax_118
        int32_t ecx_106
        eax_118, ecx_106 = sub_603530(eax_115 + 0x20)
        var_2c_2 = eax_118
        int32_t var_30_2 = ecx_106
        int32_t eax_119 = sub_602ff0()
        eax_111 = sub_603530(eax_115)
        edx_29 = eax_119
        goto label_5f2a06
    case 0x1d
        void* ecx_109 = *arg3
        var_24 = ecx_109 + 0x10
        int32_t* eax_122 = sub_603530(ecx_109)
        sub_5f7940(eax_122, eax_122, arg1, var_24)
        return arg1
    case 0x1e
        sub_603530(*arg3)
        sub_5f7a30(arg1)
        return arg1
    case 0x1f
        sub_5f7ae0(arg1, sub_603530(*arg3))
        return arg1
    case 0x20
        sub_5f7bc0(arg1, sub_603530(*arg3))
        return arg1
    case 0x21
        sub_5f7ce0(arg1, sub_603530(*arg3))
        return arg1
    case 0x22
        void* ecx_123 = *arg3
        var_24 = ecx_123 + 0x10
        int32_t* eax_134 = sub_603530(ecx_123)
        sub_5f7dc0(eax_134, eax_134, arg1, var_24)
        return arg1
    case 0x23
        void* ecx_125 = *arg3
        eax_112 = sub_5f7eb0(sub_603530(ecx_125), ecx_125 + 0x10)
    label_5f2a11:
        arg1[1] = eax_112
        *arg1 = 0xa
        return arg1
    case 0x24
        void* ecx_127 = *arg3
        eax_112 = sub_5f7f50(sub_603530(ecx_127), ecx_127 + 0x10)
        goto label_5f2a11
    case 0x25
        void* edi_45 = *arg3
        var_24 = edi_45 + 0x30
        var_28 = edi_45 + 0x20
        var_28 = sub_602ff0()
        esp_6 = &var_28
        int32_t eax_143 = sub_602ff0()
        int32_t* eax_144 = sub_603530(edi_45)
        eax_93 = sub_5f7ff0(eax_144, eax_143, eax_144, var_28, var_24)
        goto label_5f2936
    case 0x26
        void* edi_46 = *arg3
        var_24 = edi_46 + 0x30
        var_28 = edi_46 + 0x20
        var_28 = sub_602ff0()
        esp_6 = &var_28
        int32_t eax_148 = sub_602ff0()
        int32_t* eax_149 = sub_603530(edi_46)
        eax_93 = sub_5f8090(eax_149, eax_148, eax_149, var_28, var_24)
        goto label_5f2936
    case 0x27
        void* ecx_137 = *arg3
        int32_t* eax_151 = sub_603530(ecx_137)
        var_24 = ecx_137 + 0x10
        void* eax_152 = (*(*eax_151 + 8))(var_24)
        var_24 = eax_152
        esp_6 = &var_24
        eax_93 = sub_5f8130(eax_152, 0, eax_151, var_24, var_20)
        goto label_5f2936
    case 0x28
        void* ecx_140 = *arg3
        int32_t* eax_154 = sub_603530(ecx_140)
        var_24 = ecx_140 + 0x10
        void* eax_155 = (*(*eax_154 + 8))(var_24)
        var_24 = eax_155
        esp_6 = &var_24
        eax_93 = sub_5f81e0(eax_155, 0, eax_154, var_24, var_20)
        goto label_5f2936
    case 0x29
        void* edi_49 = *arg3
        var_24 = edi_49 + 0x30
        var_28 = edi_49 + 0x20
        var_28 = sub_602ff0()
        esp_6 = &var_28
        int32_t eax_159 = sub_602ff0()
        int32_t* eax_160 = sub_603530(edi_49)
        eax_93 = sub_5f8130(eax_160, eax_159, eax_160, var_28, var_24)
        goto label_5f2936
    case 0x2a
        void* edi_50 = *arg3
        var_24 = edi_50 + 0x30
        var_28 = edi_50 + 0x20
        var_28 = sub_602ff0()
        esp_6 = &var_28
        int32_t eax_164 = sub_602ff0()
        int32_t* eax_165 = sub_603530(edi_50)
        eax_93 = sub_5f81e0(eax_165, eax_164, eax_165, var_28, var_24)
        goto label_5f2936
    case 0x2b
        void* ecx_151 = *arg3
        eax_93 = sub_5f8290(sub_603530(ecx_151), ecx_151 + 0x10)
    label_5f293c:
        arg1[1] = eax_93
        *arg1 = 0xa
        *esp_1
        esp_1[1]
        esp_1[2]
        return arg1
    case 0x2c
        void* ecx_153 = *arg3
        eax_93 = sub_5f8330(sub_603530(ecx_153), ecx_153 + 0x10)
        goto label_5f293c
    case 0x2d
        void* ecx_155 = *arg3
        eax_93 = sub_5f83d0(sub_603530(ecx_155), ecx_155 + 0x10)
        goto label_5f293c
    case 0x2e
        void* ecx_157 = *arg3
        eax_93 = sub_5f8470(sub_603530(ecx_157), ecx_157 + 0x10)
        goto label_5f293c
    case 0x2f
        void* ecx_159 = *arg3
        eax_93 = sub_5f8510(sub_603530(ecx_159), ecx_159 + 0x10)
        goto label_5f293c
    case 0x30
        void* ecx_161 = *arg3
        eax_93 = sub_5f85b0(sub_603530(ecx_161), ecx_161 + 0x10)
        goto label_5f293c
    case 0x31
        void* ecx_163 = *arg3
        ecx_67 = sub_5f7eb0(sub_603530(ecx_163), ecx_163 + 0x10) s>= 0
        goto label_5f2863
    case 0x32
        void* ecx_165 = *arg3
        eax_49 = sub_5f8650(sub_603530(ecx_165), ecx_165 + 0x10)
        goto label_5f275a
    case 0x33
        void* ecx_167 = *arg3
        var_24 = ecx_167 + 0x10
        int32_t* eax_185 = sub_603530(ecx_167)
        sub_5f8670(eax_185, eax_185, arg1, var_24)
        return arg1
    case 0x34
        sub_5f87e0(sub_603530(*arg3))
        *arg1 = 0
        return arg1
    case 0x35
        void* edi_53 = *arg3
        uint32_t eax_190 = sub_602ff0()
        sub_5f8820(sub_603530(edi_53), eax_190)
        *arg1 = 0
        return arg1
    case 0x36
        sub_5f8910(sub_603530(*arg3))
        *arg1 = 0
        return arg1
    case 0x37
        void* ecx_178 = *arg3
        sub_5f8a00(sub_603530(ecx_178), ecx_178 + 0x10)
        *arg1 = 0
        return arg1
    case 0x38
        void* esi_76 = *arg3
        var_24 = sub_602ff0()
        int32_t* eax_200 = sub_603530(esi_76)
        sub_5f8af0(eax_200, eax_200, arg1, var_24)
        return arg1
    case 0x39
        void* esi_78 = *arg3
        var_24 = sub_602ff0()
        int32_t* eax_204 = sub_603530(esi_78)
        sub_5f8e20(eax_204, eax_204, arg1, var_24)
        return arg1
    case 0x3a
        sub_603530(*arg3)
        sub_5f8e50(arg1)
        return arg1
    case 0x3b
        sub_603530(*arg3)
        sub_5f8e80(arg1)
        return arg1
    case 0x3c
        void* ecx_192 = *arg3
        var_24 = ecx_192 + 0x10
        int32_t* eax_212 = sub_603530(ecx_192)
        sub_5f8ea0(eax_212, eax_212, arg1, var_24)
        return arg1
    case 0x3d
        void* ecx_194 = *arg3
        var_24 = ecx_194 + 0x10
        int32_t* eax_216 = sub_603530(ecx_194)
        sub_5f8ee0(eax_216, eax_216, arg1, var_24)
        return arg1
    case 0x3e
        sub_5f8f10(arg1, sub_603530(*arg3))
        return arg1
    case 0x3f
        sub_603530(*arg3)
        sub_5f8f50(arg1)
        return arg1
    case 0x40
        void* ecx_202 = *arg3
        var_24 = ecx_202 + 0x10
        int32_t* eax_224 = sub_603530(ecx_202)
        sub_5f8f70(eax_224, eax_224, arg1, var_24)
        return arg1
    case 0x41
        void* ecx_204 = *arg3
        var_24 = ecx_204 + 0x10
        int32_t* eax_228 = sub_603530(ecx_204)
        sub_5f8fb0(eax_228, eax_228, arg1, var_24)
        return arg1
    case 0x42
        sub_5f8fe0(arg1, sub_603530(*arg3))
        return arg1
    case 0x43
        sub_603530(*arg3)
        sub_5f9080(arg1)
        return arg1
    case 0x44
        void* ecx_212 = *arg3
        var_24 = ecx_212 + 0x10
        int32_t* eax_236 = sub_603530(ecx_212)
        sub_5f90a0(eax_236, eax_236, arg1, var_24)
        return arg1
    case 0x45
        void* ecx_214 = *arg3
        var_24 = ecx_214 + 0x10
        int32_t* eax_240 = sub_603530(ecx_214)
        sub_5f9140(eax_240, eax_240, arg1, var_24)
        return arg1
    case 0x46
        sub_5f9170(arg1, sub_603530(*arg3))
        return arg1
    case 0x47
        sub_603530(*arg3)
        sub_5f9210(arg1)
        return arg1
    case 0x48
        void* ecx_222 = *arg3
        var_24 = ecx_222 + 0x10
        int32_t* eax_248 = sub_603530(ecx_222)
        sub_5f9230(eax_248, eax_248, arg1, var_24)
        return arg1
    case 0x49
        void* ecx_224 = *arg3
        var_24 = ecx_224 + 0x10
        int32_t* eax_252 = sub_603530(ecx_224)
        sub_5f92d0(eax_252, eax_252, arg1, var_24)
        return arg1
