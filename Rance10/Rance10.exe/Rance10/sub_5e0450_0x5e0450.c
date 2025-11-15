// 函数: sub_5e0450
// 地址: 0x5e0450
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_1a4 = 0xffffffff
int32_t (* var_1a8)(void* arg1) = sub_7418f9
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_1a0
int32_t eax_2 = __security_cookie ^ &var_1a0
int32_t var_210 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_1fc = 0
int32_t* result
int32_t var_1f0
int32_t var_1e0
int32_t eax_5
int32_t eax_34
void* ecx_81
int32_t* ebx
int32_t xmm0_83

if (arg2 u> 0xff)
    sub_602420(arg1)
    result = arg1
else
    switch (arg2)
        case 0
            void* ecx = data_7fd4cc
            int32_t edx_3 = (*(ecx + 0x58) - *(ecx + 0x54)) s>> 3
            *arg1 = 0xa
            arg1[1] = edx_3
            result = arg1
        case 1
            *arg3
            eax_5 = sub_5e5390(sub_602ff0())
        label_5e04e7:
            *arg1 = 0x2f
            int32_t ecx_3
            ecx_3.b = eax_5.b != 0
            arg1[1] = ecx_3
            result = arg1
        case 2
            *arg3
            void var_20
            char* eax_6 = sub_603290(&var_20)
            int32_t var_1a4_1 = 0
            *arg3
            int32_t eax_7 = sub_602ff0()
            char eax_8 = sub_566230(data_7fd4cc, eax_6, eax_7)
            *arg1 = 0x2f
            int32_t ecx_8
            ecx_8.b = eax_8 != 0
            arg1[1] = ecx_8
            sub_403320(&var_20)
            result = arg1
        case 3
            *arg3
            sub_5e53d0(sub_602ff0())
            *arg1 = 0
            result = arg1
        case 4
            *arg3
            int32_t eax_11 = sub_5e5440(sub_602ff0())
            *arg1 = 0xa
            arg1[1] = eax_11
            result = arg1
        case 5
            *arg3
            int32_t eax_12 = sub_602ff0()
            eax_5 = sub_5e54a0(sub_602ff0(), eax_12)
            goto label_5e04e7
        case 6
            *arg3
            void var_38
            char* eax_14 = sub_603290(&var_38)
            int32_t var_1a4_2 = 1
            *arg3
            int32_t eax_15 = sub_602ff0()
            int32_t eax_16 = sub_602ff0()
            char eax_17 = sub_5e5510(eax_16, eax_15, eax_16, eax_14)
            *arg1 = 0x2f
            int32_t ecx_22
            ecx_22.b = eax_17 != 0
            arg1[1] = ecx_22
            sub_403320(&var_38)
            result = arg1
        case 7
            *arg3
            void var_50
            char* eax_18 = sub_603290(&var_50)
            int32_t var_1a4_3 = 2
            *arg3
            int32_t eax_19 = sub_602ff0()
            int32_t eax_20 = sub_602ff0()
            char eax_21 = sub_5e5570(eax_20, eax_19, eax_20, eax_18)
            *arg1 = 0x2f
            int32_t ecx_29
            ecx_29.b = eax_21 != 0
            arg1[1] = ecx_29
            sub_403320(&var_50)
            result = arg1
        case 8
            *arg3
            int32_t eax_22 = sub_602ff0()
            eax_5 = sub_5e55a0(sub_602ff0(), eax_22)
            goto label_5e04e7
        case 9
            void* edx_8 = *arg3
            char eax_24 = sub_602ea0()
            int32_t* eax_26 = sub_603530(edx_8 + 0x70)
            int32_t* eax_27 = sub_603530(edx_8 + 0x60)
            int32_t* eax_28 = sub_603530(edx_8 + 0x50)
            int32_t* eax_29 = sub_603530(edx_8 + 0x40)
            int32_t* eax_30 = sub_603530(edx_8 + 0x30)
            int32_t* eax_31 = sub_603530(edx_8 + 0x20)
            int32_t eax_32 = sub_602ff0()
            int32_t eax_33 = sub_602ff0()
            eax_34 = sub_5e55f0(eax_33, eax_32, eax_33, eax_31, eax_30, eax_29, eax_28, eax_27, 
                eax_26, eax_24)
        label_5e06e6:
            result = arg1
            int32_t ecx_44
            ecx_44.b = eax_34.b != 0
            *arg1 = 0x2f
            arg1[1] = ecx_44
        case 0xa
            *arg3
            void var_68
            char* eax_35 = sub_603290(&var_68)
            int32_t var_1a4_4 = 3
            *arg3
            int32_t eax_36 = sub_602ff0()
            int32_t eax_37 = sub_602ff0()
            uint32_t eax_38 = sub_5665c0(data_7fd4cc, eax_37, eax_36)
            
            if (eax_38 != 0)
                eax_38 = sub_566230(data_7fd4cc, eax_35, *eax_38)
            else
                eax_38.b = 0
            
            *arg1 = 0x2f
            int32_t ecx_51
            ecx_51.b = eax_38.b != 0
            arg1[1] = ecx_51
            sub_403320(&var_68)
            result = arg1
        case 0xb
            int32_t* eax_39 = sub_603500(*arg3 + 0x20)
            int32_t eax_40 = sub_602ff0()
            int32_t eax_41 = sub_602ff0()
            void* eax_42 = sub_5665c0(data_7fd4cc, eax_41, eax_40)
            
            if (eax_42 != 0)
                int32_t* ecx_57 = eax_42 + 4
                
                if (*(eax_42 + 0x18) u>= 0x10)
                    ecx_57 = *ecx_57
                
                (*(*eax_39 + 4))(ecx_57)
                goto label_5e07c8
            
        label_5e079d:
            *arg1 = 0x2f
            arg1[1] = 0
            result = arg1
        case 0xc
            *arg3
            int32_t eax_45 = sub_602ff0()
            int32_t eax_46 = sub_602ff0()
            int32_t eax_47 = sub_602ff0()
            int32_t* eax_48 = sub_5665c0(data_7fd4cc, eax_47, eax_46)
            
            if (eax_48 != 0)
                if (*eax_48 != eax_45)
                    sub_581bd0(eax_48)
                    *eax_48 = eax_45
                
                *arg1 = 0x2f
                arg1[1] = 1
            else
                *arg1 = 0x2f
                arg1[1] = eax_48
            
            result = arg1
        case 0xd
            int32_t var_1cc_5 = *arg3
            int32_t ecx_65
            float xmm0_1
            ecx_65, xmm0_1 = sub_603140()
            int32_t var_214_14 = ecx_65
            float xmm0_2 = sub_603140()
            float xmm0_3 = sub_603140()
            int32_t eax_50 = sub_602ff0()
            int32_t eax_51 = sub_602ff0()
            eax_34 = sub_5e5880(eax_51, eax_50, eax_51, xmm0_3, xmm0_2, xmm0_1)
            goto label_5e06e6
        case 0xe
            void* eax_52 = *arg3
            void* var_1b8_2 = eax_52
            int32_t* eax_53 = sub_6034c0(eax_52 + 0x40)
            int32_t* eax_54 = sub_6034c0(eax_52 + 0x30)
            int32_t* eax_55 = sub_6034c0(eax_52 + 0x20)
            int32_t eax_56 = sub_602ff0()
            int32_t eax_57 = sub_602ff0()
            eax_34 = sub_5e58d0(eax_57, eax_56, eax_57, eax_55, eax_54, eax_53)
            goto label_5e06e6
        case 0xf
            *arg3
            float xmm0_4 = sub_603140()
            int32_t eax_58 = sub_602ff0()
            int32_t eax_59 = sub_602ff0()
            void* eax_60 = sub_5665c0(data_7fd4cc, eax_59, eax_58)
            
            if (eax_60 == 0)
                goto label_5e079d
            
            float xmm0_5 = *(eax_60 + 0x74)
            ecx_81 = eax_60 + 0x74
            xmm0_5 - xmm0_4
            eax_60:1.b = (xmm0_5 == xmm0_4 ? 1 : 0) << 6
                | (is_unordered.d(xmm0_5, xmm0_4) ? 1 : 0) << 2 | (xmm0_5 < xmm0_4 ? 1 : 0)
            bool p_2 = unimplemented  {test ah, 0x44}
            
            if (not(p_2))
            label_5e07c8:
                *arg1 = 0x2f
                arg1[1] = 1
                result = arg1
            else
                *ecx_81 = xmm0_4
            label_5e0934:
                sub_581340(ecx_81)
                *arg1 = 0x2f
                arg1[1] = 1
                result = arg1
        case 0x10
            *arg3
            float xmm0_6 = sub_603140()
            int32_t eax_61 = sub_602ff0()
            int32_t eax_62 = sub_602ff0()
            void* eax_63 = sub_5665c0(data_7fd4cc, eax_62, eax_61)
            
            if (eax_63 == 0)
                goto label_5e079d
            
            float xmm0_7 = *(eax_63 + 0x78)
            ecx_81 = eax_63 + 0x74
            xmm0_7 - xmm0_6
            eax_63:1.b = (xmm0_7 == xmm0_6 ? 1 : 0) << 6
                | (is_unordered.d(xmm0_7, xmm0_6) ? 1 : 0) << 2 | (xmm0_7 < xmm0_6 ? 1 : 0)
            bool p_4 = unimplemented  {test ah, 0x44}
            
            if (not(p_4))
                goto label_5e07c8
            
            *(ecx_81 + 4) = xmm0_6
            goto label_5e0934
        case 0x11
            *arg3
            float xmm0_8 = sub_603140()
            int32_t eax_64 = sub_602ff0()
            int32_t eax_65 = sub_602ff0()
            void* eax_66 = sub_5665c0(data_7fd4cc, eax_65, eax_64)
            
            if (eax_66 == 0)
                goto label_5e079d
            
            float xmm0_9 = *(eax_66 + 0x7c)
            ecx_81 = eax_66 + 0x74
            xmm0_9 - xmm0_8
            eax_66:1.b = (xmm0_9 == xmm0_8 ? 1 : 0) << 6
                | (is_unordered.d(xmm0_9, xmm0_8) ? 1 : 0) << 2 | (xmm0_9 < xmm0_8 ? 1 : 0)
            bool p_6 = unimplemented  {test ah, 0x44}
            
            if (not(p_6))
                goto label_5e07c8
            
            *(ecx_81 + 8) = xmm0_8
            goto label_5e0934
        case 0x12
            int32_t* eax_67 = sub_6034c0(*arg3 + 0x20)
            int32_t eax_68 = sub_602ff0()
            int32_t eax_69 = sub_602ff0()
            void* eax_70 = sub_5665c0(data_7fd4cc, eax_69, eax_68)
            
            if (eax_70 == 0)
                goto label_5e079d
            
            *eax_67 = *(eax_70 + 0x74)
            *arg1 = 0x2f
            arg1[1] = 1
            result = arg1
        case 0x13
            int32_t* eax_72 = sub_6034c0(*arg3 + 0x20)
            int32_t eax_73 = sub_602ff0()
            int32_t eax_74 = sub_602ff0()
            void* eax_75 = sub_5665c0(data_7fd4cc, eax_74, eax_73)
            
            if (eax_75 == 0)
                goto label_5e079d
            
            *eax_72 = *(eax_75 + 0x78)
            *arg1 = 0x2f
            arg1[1] = 1
            result = arg1
        case 0x14
            int32_t* eax_77 = sub_6034c0(*arg3 + 0x20)
            int32_t eax_78 = sub_602ff0()
            int32_t eax_79 = sub_602ff0()
            void* eax_80 = sub_5665c0(data_7fd4cc, eax_79, eax_78)
            
            if (eax_80 == 0)
                goto label_5e079d
            
            *eax_77 = *(eax_80 + 0x7c)
            *arg1 = 0x2f
            arg1[1] = 1
            result = arg1
        case 0x15
            *arg3
            int32_t eax_82 = sub_602ff0()
            int32_t eax_83 = sub_602ff0()
            void* eax_84 = sub_5665c0(data_7fd4cc, eax_83, eax_82)
            
            if (eax_84 != 0)
                int32_t xmm0_10 = *(eax_84 + 0xc0)
                *arg1 = 0xb
                arg1[1] = xmm0_10
            else
                *arg1 = 0xb
                arg1[1] = 0x3f800000
            
            result = arg1
        case 0x16
            *arg3
            int32_t eax_86 = sub_602ff0()
            int32_t eax_87 = sub_602ff0()
            void* eax_88 = sub_5665c0(data_7fd4cc, eax_87, eax_86)
            
            if (eax_88 != 0)
                int32_t xmm0_11 = *(eax_88 + 0xc4)
                *arg1 = 0xb
                arg1[1] = xmm0_11
            else
                *arg1 = 0xb
                arg1[1] = 0x3f800000
            
            result = arg1
        case 0x17
            *arg3
            int32_t eax_90 = sub_602ff0()
            int32_t eax_91 = sub_602ff0()
            void* eax_92 = sub_5665c0(data_7fd4cc, eax_91, eax_90)
            
            if (eax_92 != 0)
                int32_t xmm0_12 = *(eax_92 + 0xc8)
                *arg1 = 0xb
                arg1[1] = xmm0_12
            else
                *arg1 = 0xb
                arg1[1] = 0x3f800000
            
            result = arg1
        case 0x18
            *arg3
            int32_t xmm0_13 = sub_603140()
            int32_t eax_94 = sub_602ff0()
            int32_t eax_95 = sub_602ff0()
            void* eax_96 = sub_5665c0(data_7fd4cc, eax_95, eax_94)
            
            if (eax_96 == 0)
                goto label_5e079d
            
            *(eax_96 + 0xc0) = xmm0_13
            *arg1 = 0x2f
            arg1[1] = 1
            result = arg1
        case 0x19
            *arg3
            int32_t xmm0_15 = sub_603140()
            int32_t eax_97 = sub_602ff0()
            int32_t eax_98 = sub_602ff0()
            void* eax_99 = sub_5665c0(data_7fd4cc, eax_98, eax_97)
            
            if (eax_99 == 0)
                goto label_5e079d
            
            *(eax_99 + 0xc4) = xmm0_15
            *arg1 = 0x2f
            arg1[1] = 1
            result = arg1
        case 0x1a
            *arg3
            int32_t xmm0_17 = sub_603140()
            int32_t eax_100 = sub_602ff0()
            int32_t eax_101 = sub_602ff0()
            void* eax_102 = sub_5665c0(data_7fd4cc, eax_101, eax_100)
            
            if (eax_102 == 0)
                goto label_5e079d
            
            *(eax_102 + 0xc8) = xmm0_17
            *arg1 = 0x2f
            arg1[1] = 1
            result = arg1
        case 0x1b
            int32_t ecx_126 = *arg3
            int32_t var_1d0_2 = ecx_126 + 0x50
            int32_t var_1b8_15 = ecx_126 + 0x40
            int32_t eax_105 = sub_602ff0()
            int32_t eax_106 = sub_602ff0()
            int32_t eax_107 = sub_602ff0()
            int32_t xmm0_19 = sub_603140()
            int32_t xmm0_20 = sub_603140()
            int32_t xmm0_21 = sub_603140()
            eax_34 = sub_5665c0(data_7fd4cc, eax_105, eax_106)
            
            if (eax_34 == 0)
                eax_34.b = 0
                goto label_5e06e6
            
            var_1f0 = xmm0_19
            int32_t var_1ec_1 = xmm0_20
            int32_t var_1e8_1 = xmm0_21
            eax_34 = sub_5837e0(eax_34, eax_107, &var_1f0)
            goto label_5e06e6
        case 0x1c
            int32_t var_1b0_2 = *arg3
            int32_t ecx_135
            int32_t xmm0_25
            ecx_135, xmm0_25 = sub_603140()
            int32_t var_214_31 = ecx_135
            int32_t xmm0_26 = sub_603140()
            int32_t eax_109 = sub_602ff0()
            int32_t eax_110 = sub_602ff0()
            int32_t eax_111 = sub_602ff0()
            eax_34 = sub_5e59a0(eax_111, eax_110, eax_111, xmm0_26, eax_109, xmm0_25)
            goto label_5e06e6
        case 0x1d
            int32_t var_1b0_3 = *arg3 + 0x40
            int32_t eax_113 = sub_602ff0()
            int32_t eax_114 = sub_602ff0()
            int32_t xmm0_27 = sub_603140()
            int32_t xmm0_28 = sub_603140()
            int32_t xmm0_29 = sub_603140()
            void* eax_115 = sub_5665c0(data_7fd4cc, eax_113, eax_114)
            
            if (eax_115 != 0)
                var_1e0 = xmm0_28
                int32_t var_1dc_1 = xmm0_29
                int32_t var_1d8_1 = 0x3f800000
                *(eax_115 + 0xe4) = xmm0_27.o
            label_5e0ea2:
                *arg1 = 0x2f
                arg1[1] = 1
                result = arg1
            else
            label_5e0e5a:
                *arg1 = 0x2f
                arg1[1] = 0
                result = arg1
        case 0x1e
            void* eax_116 = *arg3
            void* var_1b0_5 = eax_116
            int32_t* eax_117 = sub_6034c0(eax_116 + 0x40)
            int32_t* eax_118 = sub_6034c0(eax_116 + 0x30)
            int32_t* eax_119 = sub_6034c0(eax_116 + 0x20)
            int32_t eax_120 = sub_602ff0()
            int32_t eax_121 = sub_602ff0()
            eax_34 = sub_5e5a10(eax_121, eax_120, eax_121, eax_119, eax_118, eax_117)
            goto label_5e06e6
        case 0x1f
            int32_t var_1b0_6 = *arg3 + 0x40
            int32_t eax_123 = sub_602ff0()
            int32_t eax_124 = sub_602ff0()
            int32_t xmm0_34 = sub_603140()
            int32_t xmm0_35 = sub_603140()
            int32_t xmm0_36 = sub_603140()
            void* eax_125 = sub_5665c0(data_7fd4cc, eax_123, eax_124)
            
            if (eax_125 == 0)
                goto label_5e0e5a
            
            var_1e0 = xmm0_35
            int32_t var_1dc_2 = xmm0_36
            int32_t var_1d8_2 = 0
            *(eax_125 + 0xf4) = xmm0_34.o
            goto label_5e0ea2
        case 0x20
            void* eax_126 = *arg3
            void* var_1b0_8 = eax_126
            int32_t* eax_127 = sub_6034c0(eax_126 + 0x40)
            int32_t* eax_128 = sub_6034c0(eax_126 + 0x30)
            int32_t* eax_129 = sub_6034c0(eax_126 + 0x20)
            int32_t eax_130 = sub_602ff0()
            int32_t eax_131 = sub_602ff0()
            eax_34 = sub_5e5a50(eax_131, eax_130, eax_131, eax_129, eax_128, eax_127)
            goto label_5e06e6
        case 0x21
            *arg3
            int32_t xmm0_41 = sub_603140()
            int32_t eax_132 = sub_602ff0()
            int32_t eax_133 = sub_602ff0()
            void* eax_134 = sub_5665c0(data_7fd4cc, eax_133, eax_132)
            
            if (eax_134 == 0)
                goto label_5e079d
            
            *(eax_134 + 0x104) = xmm0_41
            *arg1 = 0x2f
            arg1[1] = 1
            result = arg1
        case 0x22
            int32_t* eax_135 = sub_6034c0(*arg3 + 0x20)
            int32_t eax_136 = sub_602ff0()
            int32_t eax_137 = sub_602ff0()
            void* eax_138 = sub_5665c0(data_7fd4cc, eax_137, eax_136)
            
            if (eax_138 == 0)
                goto label_5e079d
            
            *eax_135 = *(eax_138 + 0x104)
            *arg1 = 0x2f
            arg1[1] = 1
            result = arg1
        case 0x23
            *arg3
            int32_t xmm0_43 = sub_603140()
            int32_t eax_140 = sub_602ff0()
            int32_t eax_141 = sub_602ff0()
            void* eax_142 = sub_5665c0(data_7fd4cc, eax_141, eax_140)
            
            if (eax_142 == 0)
                goto label_5e079d
            
            *(eax_142 + 0x108) = xmm0_43
            *arg1 = 0x2f
            arg1[1] = 1
            result = arg1
        case 0x24
            int32_t* eax_143 = sub_6034c0(*arg3 + 0x20)
            int32_t eax_144 = sub_602ff0()
            int32_t eax_145 = sub_602ff0()
            void* eax_146 = sub_5665c0(data_7fd4cc, eax_145, eax_144)
            
            if (eax_146 == 0)
                goto label_5e079d
            
            *eax_143 = *(eax_146 + 0x108)
            *arg1 = 0x2f
            arg1[1] = 1
            result = arg1
        case 0x25
            *arg3
            char eax_148 = sub_602ea0()
            int32_t eax_149 = sub_602ff0()
            int32_t eax_150 = sub_602ff0()
            void* eax_151 = sub_5665c0(data_7fd4cc, eax_150, eax_149)
            
            if (eax_151 == 0)
                goto label_5e079d
            
            *(eax_151 + 0x10c) = eax_148
            *arg1 = 0x2f
            arg1[1] = 1
            result = arg1
        case 0x26
            *arg3
            char eax_152 = sub_602ea0()
            int32_t eax_153 = sub_602ff0()
            int32_t eax_154 = sub_602ff0()
            void* eax_155 = sub_5665c0(data_7fd4cc, eax_154, eax_153)
            
            if (eax_155 == 0)
                goto label_5e079d
            
            *(eax_155 + 0x10d) = eax_152
            *arg1 = 0x2f
            arg1[1] = 1
            result = arg1
        case 0x27
            *arg3
            char eax_156 = sub_602ea0()
            int32_t eax_157 = sub_602ff0()
            int32_t eax_158 = sub_602ff0()
            void* eax_159 = sub_5665c0(data_7fd4cc, eax_158, eax_157)
            
            if (eax_159 == 0)
                goto label_5e079d
            
            *(eax_159 + 0x10e) = eax_156
            *arg1 = 0x2f
            arg1[1] = 1
            result = arg1
        case 0x28
            *arg3
            int32_t eax_160 = sub_602ff0()
            int32_t eax_161 = sub_602ff0()
            void* eax_162 = sub_5665c0(data_7fd4cc, eax_161, eax_160)
            
            if (eax_162 != 0)
                bool cond:2_1 = *(eax_162 + 0x10c) != 0
                *arg1 = 0x2f
                int32_t eax_163
                eax_163.b = cond:2_1
                arg1[1] = eax_163
            else
                *arg1 = 0x2f
                eax_162.b = false
                arg1[1] = eax_162
            
            result = arg1
        case 0x29
            *arg3
            int32_t eax_164 = sub_602ff0()
            int32_t eax_165 = sub_602ff0()
            void* eax_166 = sub_5665c0(data_7fd4cc, eax_165, eax_164)
            
            if (eax_166 != 0)
                bool cond:3_1 = *(eax_166 + 0x10d) != 0
                *arg1 = 0x2f
                int32_t eax_167
                eax_167.b = cond:3_1
                arg1[1] = eax_167
            else
                *arg1 = 0x2f
                eax_166.b = false
                arg1[1] = eax_166
            
            result = arg1
        case 0x2a
            *arg3
            int32_t eax_168 = sub_602ff0()
            int32_t eax_169 = sub_602ff0()
            void* eax_170 = sub_5665c0(data_7fd4cc, eax_169, eax_168)
            
            if (eax_170 != 0)
                bool cond:4_1 = *(eax_170 + 0x10e) != 0
                *arg1 = 0x2f
                int32_t eax_171
                eax_171.b = cond:4_1
                arg1[1] = eax_171
            else
                *arg1 = 0x2f
                eax_170.b = false
                arg1[1] = eax_170
            
            result = arg1
        case 0x2b
            *arg3
            int32_t eax_172 = sub_602ff0()
            int32_t eax_173 = sub_602ff0()
            int32_t eax_174 = sub_602ff0()
            int32_t eax_175 = sub_602ff0()
            eax_34 = sub_5e5a90(eax_175, eax_174, eax_175, eax_173, eax_172)
            goto label_5e06e6
        case 0x2c
            int32_t* eax_176 = sub_603470(*arg3 + 0x30)
            int32_t eax_177 = sub_602ff0()
            int32_t eax_178 = sub_602ff0()
            int32_t eax_179 = sub_602ff0()
            eax_34 = sub_5e5ae0(eax_179, eax_178, eax_179, eax_177, eax_176)
            goto label_5e06e6
        case 0x2d
            *arg3
            void var_80
            char* eax_180 = sub_603290(&var_80)
            int32_t var_1a4_5 = 4
            *arg3
            int32_t eax_181 = sub_602ff0()
            int32_t eax_182 = sub_602ff0()
            char eax_183 = sub_5e5b30(eax_182, eax_181, eax_182, eax_180)
            *arg1 = 0x2f
            int32_t ecx_225
            ecx_225.b = eax_183 != 0
            arg1[1] = ecx_225
            sub_403320(&var_80)
            result = arg1
        case 0x2e
            *arg3
            void var_98
            char* eax_184 = sub_603290(&var_98)
            int32_t var_1a4_6 = 5
            *arg3
            int32_t eax_185 = sub_602ff0()
            int32_t eax_186 = sub_602ff0()
            void** eax_187 = sub_5665c0(data_7fd4cc, eax_186, eax_185)
            
            if (eax_187 != 0)
                eax_187 = sub_583a20(eax_187, eax_184)
            else
                eax_187.b = 0
            
            *arg1 = 0x2f
            int32_t ecx_233
            ecx_233.b = eax_187.b != 0
            arg1[1] = ecx_233
            sub_403320(&var_98)
            result = arg1
        case 0x2f
            *arg3
            int32_t eax_188 = sub_602ff0()
            int32_t eax_189 = sub_602ff0()
            void* eax_190 = sub_5665c0(data_7fd4cc, eax_189, eax_188)
            
            if (eax_190 != 0)
                int32_t eax_191 = *(eax_190 + 0x174)
                *arg1 = 0xa
                arg1[1] = eax_191
                result = arg1
            else
            label_5e1463:
                *arg1 = 0xa
                arg1[1] = 0
                result = arg1
        case 0x30
            *arg3
            int32_t eax_192 = sub_602ff0()
            int32_t eax_193 = sub_602ff0()
            void* eax_194 = sub_5665c0(data_7fd4cc, eax_193, eax_192)
            
            if (eax_194 != 0)
                int32_t xmm0_45 = *(eax_194 + 0x178)
                *arg1 = 0xb
                arg1[1] = xmm0_45
            else
                *arg1 = 0xb
                int32_t var_1b0_14 = 0
                arg1[1] = 0
            
            result = arg1
        case 0x31
            *arg3
            int32_t eax_196 = sub_602ff0()
            int32_t eax_197 = sub_602ff0()
            int32_t eax_198 = sub_602ff0()
            eax_5 = sub_5e5b60(eax_198, eax_197, eax_198, eax_196)
            goto label_5e04e7
        case 0x32
            *arg3
            int32_t xmm0_46 = sub_603140()
            int32_t eax_199 = sub_602ff0()
            int32_t eax_200 = sub_602ff0()
            void* eax_201 = sub_5665c0(data_7fd4cc, eax_200, eax_199)
            
            if (eax_201 == 0)
                goto label_5e079d
            
            *(eax_201 + 0x178) = xmm0_46
            *arg1 = 0x2f
            arg1[1] = 1
            result = arg1
        case 0x33
            int32_t var_1b0_17 = *arg3 + 0x30
            int32_t eax_203 = sub_602ff0()
            int32_t eax_204 = sub_602ff0()
            int32_t xmm0_48 = sub_603140()
            int32_t xmm0_49 = sub_603140()
            void* eax_205 = sub_5665c0(data_7fd4cc, eax_203, eax_204)
            
            if (eax_205 == 0)
                goto label_5e0e5a
            
            *(eax_205 + 0x17c) = xmm0_48
            *(eax_205 + 0x180) = xmm0_49
            goto label_5e0ea2
        case 0x34
            int32_t var_1b0_19 = *arg3 + 0x30
            int32_t eax_207 = sub_602ff0()
            int32_t eax_208 = sub_602ff0()
            int32_t xmm0_52 = sub_603140()
            int32_t xmm0_53 = sub_603140()
            void* eax_209 = sub_5665c0(data_7fd4cc, eax_207, eax_208)
            
            if (eax_209 == 0)
                goto label_5e0e5a
            
            *(eax_209 + 0x184) = xmm0_52
            *(eax_209 + 0x188) = xmm0_53
            goto label_5e0ea2
        case 0x35
            *arg3
            void var_b0
            char* eax_210 = sub_603290(&var_b0)
            int32_t var_1a4_7 = 6
            *arg3
            int32_t eax_211 = sub_602ff0()
            int32_t eax_212 = sub_602ff0()
            char eax_213 = sub_5e5bb0(eax_212, eax_211, eax_212, eax_210)
            *arg1 = 0x2f
            int32_t ecx_264
            ecx_264.b = eax_213 != 0
            arg1[1] = ecx_264
            sub_403320(&var_b0)
            result = arg1
        case 0x36
            *arg3
            int32_t eax_214 = sub_602ff0()
            int32_t eax_215 = sub_602ff0()
            int32_t eax_216 = sub_602ff0()
            void* eax_217 = sub_5665c0(data_7fd4cc, eax_216, eax_215)
            
            if (eax_217 == 0)
                goto label_5e079d
            
            *(eax_217 + 0x18c) = eax_214
            *arg1 = 0x2f
            arg1[1] = 1
            result = arg1
        case 0x37
            *arg3
            int32_t xmm0_56 = sub_603140()
            int32_t eax_218 = sub_602ff0()
            int32_t eax_219 = sub_602ff0()
            void* eax_220 = sub_5665c0(data_7fd4cc, eax_219, eax_218)
            
            if (eax_220 == 0)
                goto label_5e079d
            
            *(eax_220 + 0x190) = xmm0_56
            *arg1 = 0x2f
            arg1[1] = 1
            result = arg1
        case 0x38
            int32_t var_1b0_23 = *arg3 + 0x30
            int32_t eax_222 = sub_602ff0()
            int32_t eax_223 = sub_602ff0()
            int32_t xmm0_58 = sub_603140()
            int32_t xmm0_59 = sub_603140()
            void* eax_224 = sub_5665c0(data_7fd4cc, eax_222, eax_223)
            
            if (eax_224 == 0)
                goto label_5e0e5a
            
            *(eax_224 + 0x194) = xmm0_58
            *(eax_224 + 0x198) = xmm0_59
            goto label_5e0ea2
        case 0x39
            int32_t var_1b0_25 = *arg3 + 0x30
            int32_t eax_226 = sub_602ff0()
            int32_t eax_227 = sub_602ff0()
            int32_t xmm0_62 = sub_603140()
            int32_t xmm0_63 = sub_603140()
            void* eax_228 = sub_5665c0(data_7fd4cc, eax_226, eax_227)
            
            if (eax_228 == 0)
                goto label_5e0e5a
            
            *(eax_228 + 0x19c) = xmm0_62
            *(eax_228 + 0x1a0) = xmm0_63
            goto label_5e0ea2
        case 0x3a
            *arg3
            int32_t xmm0_66 = sub_603140()
            int32_t eax_229 = sub_602ff0()
            int32_t eax_230 = sub_602ff0()
            void* eax_231 = sub_5665c0(data_7fd4cc, eax_230, eax_229)
            
            if (eax_231 == 0)
                goto label_5e079d
            
            *(eax_231 + 0x1e8) = xmm0_66
            *arg1 = 0x2f
            arg1[1] = 1
            result = arg1
        case 0x3b
            *arg3
            char eax_232 = sub_602ea0()
            int32_t eax_233 = sub_602ff0()
            int32_t eax_234 = sub_602ff0()
            void* eax_235 = sub_5665c0(data_7fd4cc, eax_234, eax_233)
            
            if (eax_235 == 0)
                goto label_5e079d
            
            *(eax_235 + 0x1e4) = eax_232
            *arg1 = 0x2f
            arg1[1] = 1
            result = arg1
        case 0x3c
            *arg3
            int32_t eax_236 = sub_602ff0()
            int32_t eax_237 = sub_602ff0()
            void* eax_238 = sub_5665c0(data_7fd4cc, eax_237, eax_236)
            
            if (eax_238 != 0)
                bool cond:5_1 = *(eax_238 + 0x1e4) != 0
                *arg1 = 0x2f
                int32_t eax_239
                eax_239.b = cond:5_1
                arg1[1] = eax_239
            else
                *arg1 = 0x2f
                eax_238.b = false
                arg1[1] = eax_238
            
            result = arg1
        case 0x3d
            *arg3
            int32_t eax_240 = sub_602ff0()
            int32_t eax_241 = sub_602ff0()
            void* eax_242 = sub_5665c0(data_7fd4cc, eax_241, eax_240)
            
            if (eax_242 == 0)
                goto label_5e079d
            
            sub_582be0(eax_242)
            *arg1 = 0x2f
            arg1[1] = 1
            result = arg1
        case 0x3e
            *arg3
            int32_t eax_243 = sub_602ff0()
            int32_t eax_244 = sub_602ff0()
            void* eax_245 = sub_5665c0(data_7fd4cc, eax_244, eax_243)
            
            if (eax_245 == 0)
                goto label_5e079d
            
            sub_582c40(eax_245)
            *arg1 = 0x2f
            arg1[1] = 1
            result = arg1
        case 0x3f
            *arg3
            int32_t eax_246 = sub_602ff0()
            int32_t eax_247 = sub_602ff0()
            void* eax_248 = sub_5665c0(data_7fd4cc, eax_247, eax_246)
            
            if (eax_248 == 0)
                goto label_5e1463
            
            int32_t eax_249 = sub_584400(eax_248)
            *arg1 = 0xa
            arg1[1] = eax_249
            result = arg1
        case 0x40
            int32_t* eax_250 = sub_603500(*arg3 + 0x30)
            int32_t eax_251 = sub_602ff0()
            int32_t eax_252 = sub_602ff0()
            int32_t eax_253 = sub_602ff0()
            eax_34 = sub_5e5be0(eax_253, eax_252, eax_253, eax_251, eax_250)
            goto label_5e06e6
        case 0x41
            *arg3
            sub_602ff0()
            sub_602ff0()
            sub_602ff0()
            sub_602ff0()
            *arg1 = 0xb
            arg1[1] = 0
            result = arg1
        case 0x42
            int32_t var_1b0_28 = *arg3
            sub_603140()
            sub_602ff0()
            sub_602ff0()
            sub_602ff0()
            sub_602ff0()
            result = arg1
            *arg1 = 0x2f
            arg1[1] = 0
        case 0x43
            *arg3
            sub_602ff0()
            sub_602ff0()
            *arg1 = 0x2f
            arg1[1] = 0
            result = arg1
        case 0x44
            *arg3
            int32_t eax_255 = sub_602ff0()
            int32_t eax_256 = sub_602ff0()
            int32_t eax_257 = sub_602ff0()
            int32_t eax_258 = sub_602ff0()
            eax_34 = sub_5e5ca0(eax_258, eax_257, eax_258, eax_256, eax_255)
            goto label_5e06e6
        case 0x45
            *arg3
            int32_t eax_259 = sub_602ff0()
            int32_t eax_260 = sub_602ff0()
            int32_t eax_261 = sub_602ff0()
            int32_t eax_262 = sub_5e5cf0(eax_261, eax_260, eax_261, eax_259)
            *arg1 = 0xa
            arg1[1] = eax_262
            result = arg1
        case 0x46
            *arg3
            int32_t eax_263 = sub_602ff0()
            int32_t eax_264 = sub_602ff0()
            void* eax_265 = sub_5665c0(data_7fd4cc, eax_264, eax_263)
            
            if (eax_265 != 0)
                int32_t xmm0_68 = *(eax_265 + 0x1f8)
                *arg1 = 0xb
                arg1[1] = xmm0_68
            else
                *arg1 = 0xb
                int32_t var_1b0_29 = 0
                arg1[1] = 0
            
            result = arg1
        case 0x47
            *arg3
            int32_t xmm0_69 = sub_603140()
            int32_t eax_267 = sub_602ff0()
            int32_t eax_268 = sub_602ff0()
            void* eax_269 = sub_5665c0(data_7fd4cc, eax_268, eax_267)
            
            if (eax_269 == 0)
                goto label_5e079d
            
            *(eax_269 + 0x1f8) = xmm0_69
            *arg1 = 0x2f
            arg1[1] = 1
            result = arg1
        case 0x48
            *arg3
            int32_t eax_270 = sub_602ff0()
            int32_t eax_271 = sub_602ff0()
            void* eax_272 = sub_5665c0(data_7fd4cc, eax_271, eax_270)
            
            if (eax_272 == 0)
                goto label_5e1463
            
            int32_t eax_273 = sub_584500(eax_272)
            *arg1 = 0xa
            arg1[1] = eax_273
            result = arg1
        case 0x49
            int32_t* eax_274 = sub_603500(*arg3 + 0x30)
            int32_t eax_275 = sub_602ff0()
            int32_t eax_276 = sub_602ff0()
            int32_t eax_277 = sub_602ff0()
            eax_34 = sub_5e5d30(eax_277, eax_276, eax_277, eax_275, eax_274)
            goto label_5e06e6
        case 0x4a
            int32_t* eax_278 = sub_603470(*arg3 + 0x30)
            int32_t eax_279 = sub_602ff0()
            int32_t eax_280 = sub_602ff0()
            int32_t eax_281 = sub_602ff0()
            eax_34 = sub_5e5e30(eax_281, eax_280, eax_281, eax_279, eax_278)
            goto label_5e06e6
        case 0x4b
            *arg3
            void var_c8
            char* eax_282 = sub_603290(&var_c8)
            int32_t var_1a4_8 = 7
            *arg3
            int32_t eax_283 = sub_602ff0()
            int32_t eax_284 = sub_602ff0()
            int32_t eax_285 = sub_5e5ea0(eax_284, eax_283, eax_284, eax_282)
            *arg1 = 0xa
            arg1[1] = eax_285
            sub_403320(&var_c8)
            result = arg1
        case 0x4c
            void* edx_32 = *arg3
            int32_t* eax_286 = sub_6034c0(edx_32 + 0x80)
            int32_t* eax_287 = sub_6034c0(edx_32 + 0x70)
            float* eax_288 = sub_6034c0(edx_32 + 0x60)
            int32_t ecx_366
            int32_t xmm0_71
            ecx_366, xmm0_71 = sub_603140()
            int32_t var_220_2 = ecx_366
            int32_t ecx_368
            int32_t xmm0_72
            ecx_368, xmm0_72 = sub_603140()
            int32_t var_224_2 = ecx_368
            int32_t var_1b0_33 = sub_603140()
            int32_t eax_289 = sub_602ff0()
            int32_t eax_290 = sub_602ff0()
            int32_t eax_291 = sub_602ff0()
            eax_34 = sub_5e5ee0(eax_291, eax_290, eax_291, eax_289, xmm0_72, xmm0_71, eax_288, 
                eax_287, eax_286)
            goto label_5e06e6
        case 0x4d
            *arg3
            int32_t eax_292 = sub_602ff0()
            eax_5 = sub_5e5f70(sub_602ff0(), eax_292)
            goto label_5e04e7
        case 0x4e
            *arg3
            int32_t eax_294 = sub_602ff0()
            int32_t eax_295 = sub_602ff0()
            int32_t eax_296 = sub_602ff0()
            eax_5 = sub_5e5fa0(eax_296, eax_295, eax_296, eax_294)
            goto label_5e04e7
        case 0x4f
            *arg3
            char eax_297 = sub_602ea0()
            int32_t eax_299 = sub_602ff0()
            int32_t eax_300 = sub_602ff0()
            int32_t eax_301 = sub_602ff0()
            eax_34 = sub_5e6000(eax_301, eax_300, eax_301, eax_299, eax_297)
            goto label_5e06e6
        case 0x50
            void* eax_302 = *arg3
            int32_t* eax_303 = sub_6034c0(eax_302 + 0x50)
            int32_t* eax_304 = sub_6034c0(eax_302 + 0x40)
            int32_t* eax_305 = sub_6034c0(eax_302 + 0x30)
            int32_t eax_306 = sub_602ff0()
            int32_t eax_307 = sub_602ff0()
            int32_t eax_308 = sub_602ff0()
            eax_34 = sub_5e6060(eax_308, eax_307, eax_308, eax_306, eax_305, eax_304, eax_303)
            goto label_5e06e6
        case 0x51
            void* eax_309 = *arg3
            int32_t* eax_310 = sub_6034c0(eax_309 + 0x50)
            int32_t* eax_311 = sub_6034c0(eax_309 + 0x40)
            int32_t* eax_312 = sub_6034c0(eax_309 + 0x30)
            int32_t eax_313 = sub_602ff0()
            int32_t eax_314 = sub_602ff0()
            int32_t eax_315 = sub_602ff0()
            eax_34 = sub_5e60e0(eax_315, eax_314, eax_315, eax_313, eax_312, eax_311, eax_310)
            goto label_5e06e6
        case 0x52
            void* eax_316 = *arg3
            int32_t* eax_317 = sub_6034c0(eax_316 + 0x50)
            int32_t* eax_318 = sub_6034c0(eax_316 + 0x40)
            int32_t* eax_319 = sub_6034c0(eax_316 + 0x30)
            int32_t eax_320 = sub_602ff0()
            int32_t eax_321 = sub_602ff0()
            int32_t eax_322 = sub_602ff0()
            eax_34 = sub_5e6160(eax_322, eax_321, eax_322, eax_320, eax_319, eax_318, eax_317)
            goto label_5e06e6
        case 0x53
            *arg3
            int32_t ecx_408
            int32_t xmm0_74
            ecx_408, xmm0_74 = sub_603140()
            int32_t var_214_88 = ecx_408
            int32_t ecx_410
            int32_t xmm0_75
            ecx_410, xmm0_75 = sub_603140()
            int32_t var_218_67 = ecx_410
            int32_t xmm0_76 = sub_603140()
            int32_t eax_324 = sub_602ff0()
            int32_t eax_325 = sub_602ff0()
            int32_t eax_326 = sub_602ff0()
            eax_34 = sub_5e61e0(eax_326, eax_325, eax_326, xmm0_76, eax_324, xmm0_75, xmm0_74)
            goto label_5e06e6
        case 0x54
            *arg3
            int32_t ecx_417
            int32_t xmm0_77
            ecx_417, xmm0_77 = sub_603140()
            int32_t var_214_90 = ecx_417
            int32_t ecx_419
            int32_t xmm0_78
            ecx_419, xmm0_78 = sub_603140()
            int32_t var_218_69 = ecx_419
            int32_t xmm0_79 = sub_603140()
            int32_t eax_328 = sub_602ff0()
            int32_t eax_329 = sub_602ff0()
            int32_t eax_330 = sub_602ff0()
            eax_34 = sub_5e6280(eax_330, eax_329, eax_330, xmm0_79, eax_328, xmm0_78, xmm0_77)
            goto label_5e06e6
        case 0x55
            *arg3
            int32_t xmm0_80 = sub_603140()
            int32_t eax_331 = sub_602ff0()
            int32_t eax_332 = sub_602ff0()
            int32_t eax_333 = sub_602ff0()
            eax_34 = sub_5e6320(eax_333, eax_332, eax_333, xmm0_80, eax_331)
            goto label_5e06e6
        case 0x56
            *arg3
            int32_t xmm0_81 = sub_603140()
            int32_t eax_334 = sub_602ff0()
            int32_t eax_335 = sub_602ff0()
            int32_t eax_336 = sub_602ff0()
            eax_34 = sub_5e6390(eax_336, eax_335, eax_336, xmm0_81, eax_334)
            goto label_5e06e6
        case 0x57
            *arg3
            int32_t xmm0_82 = sub_603140()
            int32_t eax_337 = sub_602ff0()
            int32_t eax_338 = sub_602ff0()
            int32_t eax_339 = sub_602ff0()
            eax_34 = sub_5e6400(eax_339, eax_338, eax_339, xmm0_82, eax_337)
            goto label_5e06e6
        case 0x58
            *arg3
            int32_t eax_340 = sub_602ff0()
            int32_t eax_341 = sub_602ff0()
            int32_t eax_342 = sub_602ff0()
            xmm0_83 = sub_5e6470(eax_342, eax_341, eax_342, eax_340)
        label_5e207d:
            *arg1 = 0xb
            arg1[1] = xmm0_83
            result = arg1
        case 0x59
            *arg3
            int32_t eax_344 = sub_602ff0()
            int32_t eax_345 = sub_602ff0()
            int32_t eax_346 = sub_602ff0()
            xmm0_83 = sub_5e64e0(eax_346, eax_345, eax_346, eax_344)
            goto label_5e207d
        case 0x5a
            *arg3
            int32_t eax_347 = sub_602ff0()
            int32_t eax_348 = sub_602ff0()
            int32_t eax_349 = sub_602ff0()
            xmm0_83 = sub_5e6550(eax_349, eax_348, eax_349, eax_347)
            goto label_5e207d
        case 0x5b
            *arg3
            int32_t eax_350 = sub_602ff0()
            int32_t eax_352 = sub_5e65c0(sub_602ff0(), eax_350)
            *arg1 = 0xa
            arg1[1] = eax_352
            result = arg1
        case 0x5c
            *arg3
            int32_t eax_353 = sub_602ff0()
            int32_t eax_354 = sub_602ff0()
            int32_t eax_355 = sub_602ff0()
            int32_t eax_356 = sub_5e65f0(eax_355, eax_354, eax_355, eax_353)
            *arg1 = 0xa
            arg1[1] = eax_356
            result = arg1
        case 0x5d
            void* eax_357 = *arg3
            int32_t* eax_358 = sub_6034c0(eax_357 + 0x50)
            int32_t* eax_359 = sub_6034c0(eax_357 + 0x40)
            int32_t* eax_360 = sub_6034c0(eax_357 + 0x30)
            int32_t eax_361 = sub_602ff0()
            int32_t eax_362 = sub_602ff0()
            int32_t eax_363 = sub_602ff0()
            eax_34 = sub_5e6650(eax_363, eax_362, eax_363, eax_361, eax_360, eax_359, eax_358)
            goto label_5e06e6
        case 0x5e
            void* eax_364 = *arg3
            int32_t* eax_365 = sub_6034c0(eax_364 + 0x50)
            int32_t* eax_366 = sub_6034c0(eax_364 + 0x40)
            int32_t* eax_367 = sub_6034c0(eax_364 + 0x30)
            int32_t eax_368 = sub_602ff0()
            int32_t eax_369 = sub_602ff0()
            int32_t eax_370 = sub_602ff0()
            eax_34 = sub_5e66c0(eax_370, eax_369, eax_370, eax_368, eax_367, eax_366, eax_365)
            goto label_5e06e6
        case 0x5f
            *arg3
            int32_t eax_371 = sub_602ff0()
            int32_t eax_372 = sub_602ff0()
            int32_t eax_373 = sub_602ff0()
            xmm0_83 = sub_5e6730(eax_373, eax_372, eax_373, eax_371)
            goto label_5e207d
        case 0x60
            *arg3
            int32_t eax_374 = sub_602ff0()
            int32_t eax_375 = sub_602ff0()
            int32_t eax_376 = sub_602ff0()
            int32_t eax_377 = sub_5e6790(eax_376, eax_375, eax_376, eax_374)
            *arg1 = 0xa
            arg1[1] = eax_377
            result = arg1
        case 0x61
            *arg3
            int32_t eax_378 = sub_602ff0()
            int32_t eax_379 = sub_602ff0()
            int32_t eax_380 = sub_602ff0()
            int32_t eax_381 = sub_602ff0()
            eax_34 = sub_5e67f0(eax_381, eax_380, eax_381, eax_379, eax_378)
            goto label_5e06e6
        case 0x62
            *arg3
            int32_t ecx_487
            int32_t xmm0_84
            ecx_487, xmm0_84 = sub_603140()
            int32_t var_214_104 = ecx_487
            int32_t ecx_489
            int32_t xmm0_85
            ecx_489, xmm0_85 = sub_603140()
            int32_t var_218_74 = ecx_489
            int32_t xmm0_86 = sub_603140()
            int32_t eax_383 = sub_602ff0()
            int32_t eax_384 = sub_602ff0()
            int32_t eax_385 = sub_602ff0()
            eax_34 = sub_5e6850(eax_385, eax_384, eax_385, xmm0_86, eax_383, xmm0_85, xmm0_84)
            goto label_5e06e6
        case 0x63
            *arg3
            int32_t ecx_496
            int32_t xmm0_87
            ecx_496, xmm0_87 = sub_603140()
            int32_t var_214_106 = ecx_496
            int32_t ecx_498
            int32_t xmm0_88
            ecx_498, xmm0_88 = sub_603140()
            int32_t var_218_76 = ecx_498
            int32_t xmm0_89 = sub_603140()
            int32_t eax_387 = sub_602ff0()
            int32_t eax_388 = sub_602ff0()
            int32_t eax_389 = sub_602ff0()
            eax_34 = sub_5e68e0(eax_389, eax_388, eax_389, xmm0_89, eax_387, xmm0_88, xmm0_87)
            goto label_5e06e6
        case 0x64
            *arg3
            int32_t xmm0_90 = sub_603140()
            int32_t eax_390 = sub_602ff0()
            int32_t eax_391 = sub_602ff0()
            int32_t eax_392 = sub_602ff0()
            eax_34 = sub_5e6970(eax_392, eax_391, eax_392, xmm0_90, eax_390)
            goto label_5e06e6
        case 0x65
            *arg3
            int32_t eax_393 = sub_602ff0()
            int32_t eax_394 = sub_602ff0()
            int32_t eax_395 = sub_602ff0()
            int32_t eax_396 = sub_602ff0()
            eax_34 = sub_5e69e0(eax_396, eax_395, eax_396, eax_394, eax_393)
            goto label_5e06e6
        case 0x66
            *arg3
            int32_t eax_397 = sub_602ff0()
            eax_5 = sub_5e6a40(sub_602ff0(), eax_397)
            goto label_5e04e7
        case 0x67
            *arg3
            int32_t eax_399 = sub_602ff0()
            int32_t eax_400 = sub_602ff0()
            int32_t eax_401 = sub_602ff0()
            eax_5 = sub_5665c0(data_7fd4cc, eax_401, eax_400)
            
            if (eax_5 != 0)
                eax_5 = sub_56b2f0(eax_5 + 0x13c, eax_399)
            else
                eax_5.b = 0
            
            goto label_5e04e7
        case 0x68
            *arg3
            int32_t eax_402 = sub_602ff0()
            void* eax_404 = sub_5e6ad0(sub_602ff0(), eax_402)
            *arg1 = 0xa
            arg1[1] = eax_404
            result = arg1
        case 0x69
            *arg3
            int32_t eax_405 = sub_602ff0()
            int32_t eax_407 = sub_5e6b30(sub_602ff0(), eax_405)
            *arg1 = 0xa
            arg1[1] = eax_407
            result = arg1
        case 0x6a
            *arg3
            int32_t eax_408 = sub_602ff0()
            int32_t eax_410 = sub_5e6ba0(sub_602ff0(), eax_408)
            *arg1 = 0xa
            arg1[1] = eax_410
            result = arg1
        case 0x6b
            *arg3
            int32_t eax_411 = sub_602ff0()
            int32_t eax_413 = sub_5e6c10(sub_602ff0(), eax_411)
            *arg1 = 0xa
            arg1[1] = eax_413
            result = arg1
        case 0x6c
            int32_t* eax_414 = sub_603500(*arg3 + 0x30)
            int32_t eax_415 = sub_602ff0()
            int32_t eax_416 = sub_602ff0()
            int32_t eax_417 = sub_602ff0()
            eax_34 = sub_5e6c70(eax_417, eax_416, eax_417, eax_415, eax_414)
            goto label_5e06e6
        case 0x6d
            *arg3
            int32_t eax_418 = sub_602ff0()
            int32_t eax_419 = sub_602ff0()
            int32_t eax_420 = sub_602ff0()
            int32_t eax_421 = sub_5e6d00(eax_420, eax_419, eax_420, eax_418)
            *arg1 = 0xa
            arg1[1] = eax_421
            result = arg1
        case 0x6e
            *arg3
            int32_t eax_422 = sub_602ff0()
            int32_t eax_423 = sub_602ff0()
            int32_t eax_424 = sub_602ff0()
            int32_t eax_425 = sub_5e6d80(eax_424, eax_423, eax_424, eax_422)
            *arg1 = 0xa
            arg1[1] = eax_425
            result = arg1
        case 0x6f
            *arg3
            int32_t eax_426 = sub_602ff0()
            int32_t eax_427 = sub_602ff0()
            int32_t eax_428 = sub_602ff0()
            int32_t eax_429 = sub_5e6e00(eax_428, eax_427, eax_428, eax_426)
            *arg1 = 0xa
            arg1[1] = eax_429
            result = arg1
        case 0x70
            *arg3
            int32_t eax_430 = sub_602ff0()
            int32_t eax_431 = sub_602ff0()
            int32_t eax_432 = sub_602ff0()
            eax_5 = sub_5e6e90(eax_432, eax_431, eax_432, eax_430)
            goto label_5e04e7
        case 0x71
            *arg3
            int32_t eax_433 = sub_602ff0()
            int32_t eax_434 = sub_602ff0()
            void* eax_435 = sub_5665c0(data_7fd4cc, eax_434, eax_433)
            
            if (eax_435 == 0)
                goto label_5e1463
            
            int32_t eax_436 = sub_585840(eax_435)
            *arg1 = 0xa
            arg1[1] = eax_436
            result = arg1
        case 0x72
            *arg3
            int32_t eax_437 = sub_602ff0()
            int32_t eax_438 = sub_602ff0()
            int32_t var_1a4_9 = 8
            void var_e0
            sub_601850(arg1, sub_5e6f10(eax_438, eax_438, &var_e0, eax_437))
            sub_403320(&var_e0)
            result = arg1
        case 0x73
            *arg3
            int32_t eax_440 = sub_602ff0()
            int32_t eax_441 = sub_602ff0()
            int32_t var_1a4_10 = 9
            void var_f8
            sub_601850(arg1, sub_5e6f60(eax_441, eax_441, &var_f8, eax_440))
            sub_403320(&var_f8)
            result = arg1
        case 0x74
            void* edx_71 = *arg3
            int32_t* eax_443 = sub_6034c0(edx_71 + 0x70)
            int32_t* eax_444 = sub_6034c0(edx_71 + 0x60)
            int32_t* eax_445 = sub_6034c0(edx_71 + 0x50)
            int32_t* eax_446 = sub_6034c0(edx_71 + 0x40)
            int32_t* eax_447 = sub_6034c0(edx_71 + 0x30)
            int32_t* eax_448 = sub_6034c0(edx_71 + 0x20)
            int32_t eax_449 = sub_602ff0()
            int32_t eax_450 = sub_602ff0()
            eax_34 = sub_5e6fb0(eax_450, eax_449, eax_450, eax_448, eax_447, eax_446, eax_445, 
                eax_444, eax_443)
            goto label_5e06e6
        case 0x75
            void* ecx_578 = *arg3
            void* var_1b0_50 = ecx_578 + 0x30
            int32_t eax_453 = sub_602ff0()
            int32_t eax_454 = sub_602ff0()
            float xmm0_91 = sub_603140()
            float xmm0_92 = sub_603140()
            float* eax_455 = sub_6034c0(ecx_578 + 0x40)
            eax_34 = sub_5665c0(data_7fd4cc, eax_453, eax_454)
            
            if (eax_34 == 0)
                eax_34.b = 0
                goto label_5e06e6
            
            eax_34 = sub_5863d0(eax_34, xmm0_91, xmm0_92, eax_455)
            goto label_5e06e6
        case 0x76
            *arg3
            int32_t eax_456 = sub_602ff0()
            int32_t eax_457 = sub_602ff0()
            void* eax_458 = sub_5665c0(data_7fd4cc, eax_457, eax_456)
            
            if (eax_458 == 0)
                goto label_5e079d
            
            *(eax_458 + 0x234) = *(eax_458 + 0x230)
            *arg1 = 0x2f
            arg1[1] = 1
            result = arg1
        case 0x77
            int32_t ecx_589 = *arg3
            int32_t var_1f4_1 = ecx_589 + 0x90
            int32_t var_1d4_1 = ecx_589 + 0x80
            int32_t var_1cc_9 = ecx_589 + 0x70
            int32_t var_1d0_7 = ecx_589 + 0x60
            int32_t var_1b8_29 = ecx_589 + 0x50
            int32_t var_1b0_52 = ecx_589 + 0x40
            int32_t eax_466 = sub_602ff0()
            int32_t eax_467 = sub_602ff0()
            int32_t xmm0_93 = sub_603140()
            int32_t xmm0_94 = sub_603140()
            int32_t xmm0_95 = sub_603140()
            int32_t eax_468 = sub_602ff0()
            int32_t xmm0_96 = sub_603140()
            int32_t xmm0_97 = sub_603140()
            int32_t xmm0_98 = sub_603140()
            int32_t eax_469 = sub_602ff0()
            void* eax_470 = sub_5665c0(data_7fd4cc, eax_466, eax_467)
            
            if (eax_470 == 0)
                goto label_5e0e5a
            
            var_1f0 = xmm0_96
            int32_t var_1ec_2 = xmm0_97
            int32_t var_1e8_2 = xmm0_98
            var_1e0 = xmm0_93
            int32_t var_1dc_3 = xmm0_94
            int32_t var_1d8_3 = xmm0_95
            sub_5857c0(eax_470, &var_1e0, eax_468, &var_1f0, eax_469)
            goto label_5e0ea2
        case 0x78
            *arg3
            int32_t eax_471 = sub_602ff0()
            int32_t eax_472 = sub_602ff0()
            void* eax_473 = sub_5665c0(data_7fd4cc, eax_472, eax_471)
            
            if (eax_473 != 0)
                int32_t xmm0_105 = *(eax_473 + 0x23c)
                *arg1 = 0xb
                arg1[1] = xmm0_105
            else
                *arg1 = 0xb
                int32_t var_1b4_2 = 0
                arg1[1] = 0
            
            result = arg1
        case 0x79
            *arg3
            int32_t xmm0_106 = sub_603140()
            int32_t eax_475 = sub_602ff0()
            int32_t eax_476 = sub_602ff0()
            void* eax_477 = sub_5665c0(data_7fd4cc, eax_476, eax_475)
            
            if (eax_477 == 0)
                goto label_5e079d
            
            *(eax_477 + 0x23c) = xmm0_106
            *arg1 = 0x2f
            arg1[1] = 1
            result = arg1
        case 0x7a
            *arg3
            int32_t eax_478 = sub_602ff0()
            eax_5 = sub_5e72f0(sub_602ff0(), eax_478)
            goto label_5e04e7
        case 0x7b
            *arg3
            int32_t eax_480 = sub_602ff0()
            eax_5 = sub_5e7390(sub_602ff0(), eax_480)
            goto label_5e04e7
        case 0x7c
            *arg3
            char eax_482 = sub_602ea0()
            int32_t eax_483 = sub_602ff0()
            int32_t eax_484 = sub_602ff0()
            void* eax_485 = sub_5665c0(data_7fd4cc, eax_484, eax_483)
            
            if (eax_485 == 0)
                goto label_5e079d
            
            *(eax_485 + 0x11c) = eax_482
            *arg1 = 0x2f
            arg1[1] = 1
            result = arg1
        case 0x7d
            *arg3
            int32_t eax_486 = sub_602ff0()
            int32_t eax_487 = sub_602ff0()
            void* eax_488 = sub_5665c0(data_7fd4cc, eax_487, eax_486)
            
            if (eax_488 != 0)
                bool cond:6_1 = *(eax_488 + 0x11c) != 0
                *arg1 = 0x2f
                int32_t eax_489
                eax_489.b = cond:6_1
                arg1[1] = eax_489
            else
                *arg1 = 0x2f
                eax_488.b = false
                arg1[1] = eax_488
            
            result = arg1
        case 0x7e
            *arg3
            int32_t eax_490 = sub_602ff0()
            int32_t eax_491 = sub_602ff0()
            void* eax_492 = sub_5665c0(data_7fd4cc, eax_491, eax_490)
            
            if (eax_492 != 0)
                bool cond:7_1 = *(eax_492 + 0x241) != 0
                *arg1 = 0x2f
                int32_t eax_493
                eax_493.b = cond:7_1
                arg1[1] = eax_493
            else
                *arg1 = 0x2f
                eax_492.b = false
                arg1[1] = eax_492
            
            result = arg1
        case 0x7f
            *arg3
            char eax_494 = sub_602ea0()
            int32_t eax_495 = sub_602ff0()
            int32_t eax_496 = sub_602ff0()
            void* eax_497 = sub_5665c0(data_7fd4cc, eax_496, eax_495)
            
            if (eax_497 == 0)
                goto label_5e079d
            
            *(eax_497 + 0x241) = eax_494
            *arg1 = 0x2f
            arg1[1] = 1
            result = arg1
        case 0x80
            int32_t var_1b4_5 = *arg3
            int32_t eax_499 = sub_602ff0()
            int32_t eax_500 = sub_602ff0()
            int32_t eax_501 = sub_602ff0()
            float eax_502 = sub_602ff0()
            int32_t eax_503 = sub_602ff0()
            eax_34 = sub_5e7410(eax_503, eax_502, eax_503, eax_501, eax_500, eax_499)
            goto label_5e06e6
        case 0x81
            int32_t var_1b4_6 = *arg3
            int32_t eax_505 = sub_602ff0()
            int32_t eax_506 = sub_602ff0()
            int32_t eax_507 = sub_602ff0()
            int32_t eax_508 = sub_602ff0()
            int32_t eax_509 = sub_602ff0()
            eax_34 = sub_5e7a30(eax_509, eax_508, eax_509, eax_507, eax_506, eax_505)
            goto label_5e06e6
        case 0x82
            *arg3
            int32_t eax_510 = sub_602ff0()
            eax_5 = sub_5e7a80(sub_602ff0(), eax_510)
            goto label_5e04e7
        case 0x83
            *arg3
            void var_110
            char* eax_512 = sub_603290(&var_110)
            int32_t var_1a4_11 = 0xa
            *arg3
            int32_t eax_513 = sub_602ff0()
            int32_t eax_514 = sub_602ff0()
            char eax_515 = sub_5e7b50(eax_514, eax_513, eax_514, eax_512)
            *arg1 = 0x2f
            int32_t ecx_652
            ecx_652.b = eax_515 != 0
            arg1[1] = ecx_652
            sub_403320(&var_110)
            result = arg1
        case 0x84
            void* edi_126 = *arg3
            int32_t* eax_516 = sub_603470(edi_126 + 0x30)
            int32_t* eax_517 = sub_603470(edi_126 + 0x20)
            int32_t eax_518 = sub_602ff0()
            int32_t eax_519 = sub_602ff0()
            void* eax_520 = sub_5665c0(data_7fd4cc, eax_519, eax_518)
            
            if (eax_520 == 0)
                goto label_5e079d
            
            void* ecx_659 = *(eax_520 + 0x220)
            void* var_200_1 = ecx_659
            
            if (ecx_659 == 0)
                goto label_5e079d
            
            sub_59f570(ecx_659, eax_517, eax_516)
            *arg1 = 0x2f
            arg1[1] = 1
            result = arg1
        case 0x85
            *arg3
            int32_t xmm0_108 = sub_603140()
            int32_t xmm0_109 = sub_603140()
            int32_t xmm0_110 = sub_603140()
            eax_34 = sub_5e7c40(sub_602ff0(), xmm0_110, xmm0_109, xmm0_108)
            goto label_5e06e6
        case 0x86
            *arg3
            float xmm0_111 = sub_603140()
            eax_5 = sub_5e7cd0(sub_602ff0(), xmm0_111)
            goto label_5e04e7
        case 0x87
            *arg3
            float xmm0_112 = sub_603140()
            eax_5 = sub_5e7d60(sub_602ff0(), xmm0_112)
            goto label_5e04e7
        case 0x88
            void* ebx_47 = *arg3
            int32_t* eax_524 = sub_6034c0(ebx_47 + 0x30)
            int32_t* eax_525 = sub_6034c0(ebx_47 + 0x20)
            int32_t* eax_526 = sub_6034c0(ebx_47 + 0x10)
            int32_t eax_527 = sub_602ff0()
            eax_34 = sub_5e7df0(eax_527, eax_526, eax_527, eax_525, eax_524)
            goto label_5e06e6
        case 0x89
            int32_t* eax_528 = sub_6034c0(*arg3 + 0x10)
            eax_5 = sub_5e7e60(sub_602ff0(), eax_528)
            goto label_5e04e7
        case 0x8a
            int32_t* eax_530 = sub_6034c0(*arg3 + 0x10)
            eax_5 = sub_5e7ec0(sub_602ff0(), eax_530)
            goto label_5e04e7
        case 0x8b
            void* ebx_48 = *arg3
            float* eax_532 = sub_6034c0(ebx_48 + 0x30)
            float* eax_533 = sub_6034c0(ebx_48 + 0x20)
            float* eax_534 = sub_6034c0(ebx_48 + 0x10)
            int32_t eax_535 = sub_602ff0()
            eax_34 = sub_5e7f20(eax_535, eax_534, eax_535, eax_533, eax_532)
            goto label_5e06e6
        case 0x8c
            void* ebx_49 = *arg3
            float* eax_536 = sub_6034c0(ebx_49 + 0x30)
            float* eax_537 = sub_6034c0(ebx_49 + 0x20)
            float* eax_538 = sub_6034c0(ebx_49 + 0x10)
            int32_t eax_539 = sub_602ff0()
            eax_34 = sub_5e8080(eax_539, eax_538, eax_539, eax_537, eax_536)
            goto label_5e06e6
        case 0x8d
            void* ebx_50 = *arg3
            float* eax_540 = sub_6034c0(ebx_50 + 0x30)
            float* eax_541 = sub_6034c0(ebx_50 + 0x20)
            float* eax_542 = sub_6034c0(ebx_50 + 0x10)
            int32_t eax_543 = sub_602ff0()
            eax_34 = sub_5e81e0(eax_543, eax_542, eax_543, eax_541, eax_540)
            goto label_5e06e6
        case 0x8e
            *arg3
            ebx.b = sub_602ea0()
            eax_34 = sub_5e8340(sub_602ff0(), ebx.b)
            goto label_5e06e6
        case 0x8f
            *arg3
            int32_t xmm0_113 = sub_603140()
            eax_5 = sub_5e8390(sub_602ff0(), xmm0_113)
            goto label_5e04e7
        case 0x90
            *arg3
            int32_t xmm0_114 = sub_603140()
            eax_5 = sub_5e83f0(sub_602ff0(), xmm0_114)
            goto label_5e04e7
        case 0x91
            *arg3
            int32_t xmm0_115 = sub_603140()
            eax_5 = sub_5e8450(sub_602ff0(), xmm0_115)
            goto label_5e04e7
        case 0x92
            char* eax_549 = sub_603430(*arg3 + 0x10)
            eax_5 = sub_5e84b0(sub_602ff0(), eax_549)
            goto label_5e04e7
        case 0x93
            int32_t* eax_551 = sub_6034c0(*arg3 + 0x10)
            eax_5 = sub_5e8500(sub_602ff0(), eax_551)
            goto label_5e04e7
        case 0x94
            int32_t* eax_553 = sub_6034c0(*arg3 + 0x10)
            eax_5 = sub_5e8560(sub_602ff0(), eax_553)
            goto label_5e04e7
        case 0x95
            int32_t* eax_555 = sub_6034c0(*arg3 + 0x10)
            eax_5 = sub_5e85c0(sub_602ff0(), eax_555)
            goto label_5e04e7
        case 0x96
            *arg3
            int32_t xmm0_116 = sub_603140()
            int32_t xmm0_117 = sub_603140()
            int32_t xmm0_118 = sub_603140()
            eax_34 = sub_5e8620(sub_602ff0(), xmm0_118, xmm0_117, xmm0_116)
            goto label_5e06e6
        case 0x97
            void* ebx_52 = *arg3
            int32_t* eax_558 = sub_6034c0(ebx_52 + 0x30)
            int32_t* eax_559 = sub_6034c0(ebx_52 + 0x20)
            int32_t* eax_560 = sub_6034c0(ebx_52 + 0x10)
            int32_t eax_561 = sub_602ff0()
            eax_34 = sub_5e86b0(eax_561, eax_560, eax_561, eax_559, eax_558)
            goto label_5e06e6
        case 0x98
            *arg3
            int32_t xmm0_119 = sub_603140()
            eax_5 = sub_5e8720(sub_602ff0(), xmm0_119)
            goto label_5e04e7
        case 0x99
            *arg3
            int32_t xmm0_120 = sub_5e8780(sub_602ff0())
            *arg1 = 0xb
            arg1[1] = xmm0_120
            result = arg1
        case 0x9a
            *arg3
            int32_t eax_565 = sub_602ff0()
            int32_t xmm0_121 = sub_5e87d0(sub_602ff0(), eax_565)
            *arg1 = 0xb
            arg1[1] = xmm0_121
            result = arg1
        case 0x9b
            *arg3
            int32_t eax_569 = sub_5e8b50(sub_602ff0())
            *arg1 = 0xa
            arg1[1] = eax_569
            result = arg1
        case 0x9c
            *arg3
            int32_t eax_570 = sub_602ff0()
            int32_t xmm0_122 = sub_5e8a60(sub_602ff0(), eax_570)
            *arg1 = 0xb
            arg1[1] = xmm0_122
            result = arg1
        case 0x9d
            *arg3
            int32_t eax_573 = sub_602ff0()
            eax_5 = sub_5e8840(sub_602ff0(), eax_573)
            goto label_5e04e7
        case 0x9e
            *arg3
            int32_t xmm0_123 = sub_603140()
            int32_t xmm0_124 = sub_603140()
            int32_t xmm0_125 = sub_603140()
            eax_34 = sub_5e8890(sub_602ff0(), xmm0_125, xmm0_124, xmm0_123)
            goto label_5e06e6
        case 0x9f
            *arg3
            int32_t xmm0_126 = sub_603140()
            eax_5 = sub_5e8930(sub_602ff0(), xmm0_126)
            goto label_5e04e7
        case 0xa0
            *arg3
            int32_t xmm0_127 = sub_603140()
            int32_t eax_577 = sub_602ff0()
            eax_5 = sub_5e8990(sub_602ff0(), eax_577, xmm0_127)
            goto label_5e04e7
        case 0xa1
            sub_423750(arg3, 1)
            int32_t eax_580 = sub_602ff0()
            sub_423750(arg3, 0)
            sub_601750(arg1, sub_5e8a10(sub_602ff0(), eax_580))
            result = arg1
        case 0xa2
            sub_423750(arg3, 2)
            int32_t xmm0_128 = sub_603140()
            sub_423750(arg3, 1)
            int32_t eax_587 = sub_602ff0()
            sub_423750(arg3, 0)
            sub_601750(arg1, sub_5e8ad0(sub_602ff0(), eax_587, xmm0_128))
            result = arg1
        case 0xa3
            sub_423750(arg3, 1)
            int32_t xmm0_129 = sub_603140()
            sub_423750(arg3, 0)
            sub_601750(arg1, sub_5e8ba0(sub_602ff0(), xmm0_129))
            result = arg1
        case 0xa4
            sub_423750(arg3, 0)
            int32_t xmm0_130 = sub_5e8c00(sub_602ff0())
            *arg1 = 0xb
            arg1[1] = xmm0_130
            result = arg1
        case 0xa5
            sub_423750(arg3, 1)
            int32_t eax_601 = sub_602ff0()
            sub_423750(arg3, 0)
            sub_601750(arg1, sub_5e8c50(sub_602ff0(), eax_601))
            result = arg1
        case 0xa6
            sub_423750(arg3, 1)
            int32_t xmm0_131 = sub_603140()
            sub_423750(arg3, 0)
            sub_601750(arg1, sub_5e8cb0(sub_602ff0(), xmm0_131))
            result = arg1
        case 0xa7
            sub_423750(arg3, 1)
            int32_t xmm0_132 = sub_603140()
            sub_423750(arg3, 0)
            sub_601750(arg1, sub_5e8d20(sub_602ff0(), xmm0_132))
            result = arg1
        case 0xa8
            sub_423750(arg3, 3)
            int32_t var_1b4_27 = sub_603140()
            sub_423750(arg3, 2)
            int32_t var_1c4_6 = sub_603140()
            sub_423750(arg3, 1)
            int32_t xmm0_135 = sub_603140()
            sub_423750(arg3, 0)
            sub_601750(arg1, sub_5e8d90(sub_602ff0(), xmm0_135))
            result = arg1
        case 0xa9
            sub_423750(arg3, 0)
            int32_t eax_625 = sub_5e8e40(sub_602ff0())
            *arg1 = 0xa
            arg1[1] = eax_625
            result = arg1
        case 0xaa
            sub_423750(arg3, 0)
            int32_t xmm0_136 = sub_5e8e90(sub_602ff0())
            *arg1 = 0xb
            arg1[1] = xmm0_136
            result = arg1
        case 0xab
            sub_423750(arg3, 0)
            int32_t xmm0_137 = sub_5e8ef0(sub_602ff0())
            *arg1 = 0xb
            arg1[1] = xmm0_137
            result = arg1
        case 0xac
            int32_t* eax_633 = sub_6034c0(sub_423750(arg3, 3))
            int32_t* eax_635 = sub_6034c0(sub_423750(arg3, 2))
            int32_t* eax_637 = sub_6034c0(sub_423750(arg3, 1))
            sub_423750(arg3, 0)
            int32_t eax_639 = sub_602ff0()
            sub_5e8f50(eax_639, eax_637, eax_639, eax_635, eax_633)
            *arg1 = 0
            result = arg1
        case 0xad
            sub_423750(arg3, 1)
            int32_t xmm0_138 = sub_603140()
            sub_423750(arg3, 0)
            sub_601750(arg1, sub_5e8fd0(sub_602ff0(), xmm0_138))
            result = arg1
        case 0xae
            sub_423750(arg3, 0)
            int32_t xmm0_139 = sub_5e9040(sub_602ff0())
            *arg1 = 0xb
            arg1[1] = xmm0_139
            result = arg1
        case 0xaf
            sub_423750(arg3, 1)
            int32_t xmm0_140 = sub_603140()
            sub_423750(arg3, 0)
            sub_601750(arg1, sub_5e90a0(sub_602ff0(), xmm0_140))
            result = arg1
        case 0xb0
            sub_423750(arg3, 0)
            int32_t xmm0_141 = sub_5e9110(sub_602ff0())
            *arg1 = 0xb
            arg1[1] = xmm0_141
            result = arg1
        case 0xb1
            sub_423750(arg3, 1)
            int32_t xmm0_142 = sub_603140()
            sub_423750(arg3, 0)
            sub_601750(arg1, sub_5e9170(sub_602ff0(), xmm0_142))
            result = arg1
        case 0xb2
            sub_423750(arg3, 0)
            int32_t xmm0_143 = sub_5e91e0(sub_602ff0())
            *arg1 = 0xb
            arg1[1] = xmm0_143
            result = arg1
        case 0xb3
            sub_423750(arg3, 3)
            int32_t var_1b4_36 = sub_603140()
            sub_423750(arg3, 2)
            int32_t var_1c4_7 = sub_603140()
            sub_423750(arg3, 1)
            int32_t xmm0_146 = sub_603140()
            sub_423750(arg3, 0)
            sub_601750(arg1, sub_5e9240(sub_602ff0(), xmm0_146))
            result = arg1
        case 0xb4
            int32_t* eax_672 = sub_6034c0(sub_423750(arg3, 3))
            int32_t* eax_674 = sub_6034c0(sub_423750(arg3, 2))
            int32_t* eax_676 = sub_6034c0(sub_423750(arg3, 1))
            sub_423750(arg3, 0)
            int32_t eax_678 = sub_602ff0()
            sub_601750(arg1, sub_5e92f0(eax_678, eax_676, eax_678, eax_674, eax_672))
            result = arg1
        case 0xb5
            sub_423750(arg3, 4)
            int32_t eax_682 = sub_602ff0()
            sub_423750(arg3, 3)
            int32_t eax_684 = sub_602ff0()
            sub_423750(arg3, 2)
            int32_t eax_686 = sub_602ff0()
            sub_423750(arg3, 1)
            int32_t eax_688 = sub_602ff0()
            sub_423750(arg3, 0)
            int32_t eax_690 = sub_602ff0()
            sub_601750(arg1, sub_5e9370(eax_690, eax_688, eax_690, eax_686, eax_684, eax_682))
            result = arg1
        case 0xb6
            sub_423750(arg3, 5)
            int32_t ecx_889
            float xmm0_147
            ecx_889, xmm0_147 = sub_603140()
            int32_t var_214_161 = ecx_889
            sub_423750(arg3, 4)
            int32_t ecx_892
            int32_t xmm0_148
            ecx_892, xmm0_148 = sub_603140()
            int32_t var_218_105 = ecx_892
            sub_423750(arg3, 3)
            int32_t var_1b4_37 = sub_603140()
            sub_423750(arg3, 2)
            float xmm0_150 = sub_603140()
            sub_423750(arg3, 1)
            float xmm0_151 = sub_603140()
            sub_423750(arg3, 0)
            int32_t eax_699
            int32_t edx_101
            eax_699, edx_101 = sub_602ff0()
            sub_601750(arg1, 
                sub_5e93f0(eax_699, edx_101, eax_699, xmm0_151, xmm0_150, xmm0_148, xmm0_147))
            result = arg1
        case 0xb7
            sub_423750(arg3, 1)
            int32_t eax_703 = sub_602ff0()
            sub_423750(arg3, 0)
            sub_601750(arg1, sub_5e97c0(sub_602ff0(), eax_703))
            result = arg1
        case 0xb8
            sub_423750(arg3, 0)
            int32_t eax_710 = sub_5e94a0(sub_602ff0())
            *arg1 = 0xa
            arg1[1] = eax_710
            result = arg1
        case 0xb9
            sub_423750(arg3, 2)
            int32_t eax_712 = sub_602ff0()
            sub_423750(arg3, 1)
            int32_t eax_714 = sub_602ff0()
            sub_423750(arg3, 0)
            int32_t eax_716 = sub_602ff0()
            sub_601750(arg1, sub_5e97d0(eax_716, eax_714, eax_716, eax_712))
            result = arg1
        case 0xba
            sub_423750(arg3, 1)
            int32_t eax_720 = sub_602ff0()
            sub_423750(arg3, 0)
            int32_t eax_723 = sub_5e9850(sub_602ff0(), eax_720)
            *arg1 = 0xa
            arg1[1] = eax_723
            result = arg1
        case 0xbb
            sub_423750(arg3, 1)
            int32_t eax_725 = sub_602ff0()
            sub_423750(arg3, 0)
            sub_601750(arg1, sub_5e98d0(sub_602ff0(), eax_725))
            result = arg1
        case 0xbc
            sub_423750(arg3, 1)
            int32_t eax_731 = sub_602ff0()
            sub_423750(arg3, 0)
            sub_601750(arg1, sub_5e9930(sub_602ff0(), eax_731))
            result = arg1
        case 0xbd
            sub_423750(arg3, 1)
            int32_t eax_737 = sub_602ff0()
            sub_423750(arg3, 0)
            sub_601750(arg1, sub_5e9990(sub_602ff0(), eax_737))
            result = arg1
        case 0xbe
            sub_423750(arg3, 1)
            int32_t eax_743 = sub_602ff0()
            sub_423750(arg3, 0)
            sub_601750(arg1, sub_5e99f0(sub_602ff0(), eax_743))
            result = arg1
        case 0xbf
            sub_423750(arg3, 1)
            int32_t eax_749 = sub_602ff0()
            sub_423750(arg3, 0)
            sub_601750(arg1, sub_5e9a50(sub_602ff0(), eax_749))
            result = arg1
        case 0xc0
            sub_423750(arg3, 1)
            int32_t eax_755 = sub_602ff0()
            sub_423750(arg3, 0)
            sub_601750(arg1, sub_5e9ab0(sub_602ff0(), eax_755))
            result = arg1
        case 0xc1
            sub_423750(arg3, 1)
            int32_t eax_761 = sub_602ff0()
            sub_423750(arg3, 0)
            sub_601750(arg1, sub_5e9b10(sub_602ff0(), eax_761))
            result = arg1
        case 0xc2
            sub_423750(arg3, 1)
            int32_t eax_767 = sub_602ff0()
            sub_423750(arg3, 0)
            sub_601750(arg1, sub_5e9b70(sub_602ff0(), eax_767))
            result = arg1
        case 0xc3
            sub_423750(arg3, 0)
            int32_t eax_774 = sub_5e94f0(sub_602ff0())
            *arg1 = 0xa
            arg1[1] = eax_774
            result = arg1
        case 0xc4
            sub_423750(arg3, 0)
            int32_t eax_777 = sub_5e9540(sub_602ff0())
            *arg1 = 0xa
            arg1[1] = eax_777
            result = arg1
        case 0xc5
            sub_423750(arg3, 0)
            int32_t eax_780 = sub_5e9590(sub_602ff0())
            *arg1 = 0xa
            arg1[1] = eax_780
            result = arg1
        case 0xc6
            sub_423750(arg3, 0)
            int32_t eax_783 = sub_5e95e0(sub_602ff0())
            *arg1 = 0xa
            arg1[1] = eax_783
            result = arg1
        case 0xc7
            sub_423750(arg3, 0)
            int32_t eax_786 = sub_5e9630(sub_602ff0())
            *arg1 = 0xa
            arg1[1] = eax_786
            result = arg1
        case 0xc8
            sub_423750(arg3, 0)
            int32_t eax_789 = sub_5e9680(sub_602ff0())
            *arg1 = 0xa
            arg1[1] = eax_789
            result = arg1
        case 0xc9
            sub_423750(arg3, 0)
            int32_t eax_792 = sub_5e96d0(sub_602ff0())
            *arg1 = 0xa
            arg1[1] = eax_792
            result = arg1
        case 0xca
            sub_423750(arg3, 0)
            int32_t eax_795 = sub_5e9720(sub_602ff0())
            *arg1 = 0xa
            arg1[1] = eax_795
            result = arg1
        case 0xcb
            sub_423750(arg3, 2)
            int32_t eax_797 = sub_602ff0()
            sub_423750(arg3, 1)
            int32_t eax_799 = sub_602ff0()
            sub_423750(arg3, 0)
            int32_t eax_801 = sub_602ff0()
            sub_601750(arg1, sub_5e9bd0(eax_801, eax_799, eax_801, eax_797))
            result = arg1
        case 0xcc
            sub_423750(arg3, 1)
            int32_t eax_805 = sub_602ff0()
            sub_423750(arg3, 0)
            int32_t eax_808 = sub_5e9c40(sub_602ff0(), eax_805)
            *arg1 = 0xa
            arg1[1] = eax_808
            result = arg1
        case 0xcd
            sub_423750(arg3, 0)
            int32_t eax_811 = sub_5e9ca0(sub_602ff0())
            *arg1 = 0xa
            arg1[1] = eax_811
            result = arg1
        case 0xce
            sub_423750(arg3, 0)
            int32_t eax_814 = sub_5e9770(sub_602ff0())
            *arg1 = 0xa
            arg1[1] = eax_814
            result = arg1
        case 0xcf
            sub_423750(arg3, 1)
            int32_t eax_816 = sub_602ff0()
            sub_423750(arg3, 0)
            sub_601750(arg1, sub_5e9cf0(sub_602ff0(), eax_816))
            result = arg1
        case 0xd0
            sub_423750(arg3, 1)
            int32_t eax_822 = sub_602ff0()
            sub_423750(arg3, 0)
            sub_601750(arg1, sub_5e9d50(sub_602ff0(), eax_822))
            result = arg1
        case 0xd1
            sub_423750(arg3, 0)
            int32_t eax_829 = sub_5e9db0(sub_602ff0())
            *arg1 = 0xa
            arg1[1] = eax_829
            result = arg1
        case 0xd2
            sub_423750(arg3, 1)
            int32_t eax_831 = sub_602ff0()
            sub_423750(arg3, 0)
            sub_601750(arg1, sub_5e9e00(sub_602ff0(), eax_831))
            result = arg1
        case 0xd3
            sub_423750(arg3, 0)
            int32_t eax_838 = sub_5e9e60(sub_602ff0())
            *arg1 = 0xa
            arg1[1] = eax_838
            result = arg1
        case 0xd4
            sub_423750(arg3, 1)
            int32_t eax_840 = sub_602ff0()
            sub_423750(arg3, 0)
            sub_601750(arg1, sub_5e9eb0(sub_602ff0(), eax_840))
            result = arg1
        case 0xd5
            sub_423750(arg3, 1)
            int32_t eax_846 = sub_602ff0()
            sub_423750(arg3, 0)
            int32_t xmm0_152 = sub_5e9f10(sub_602ff0(), eax_846)
            *arg1 = 0xb
            arg1[1] = xmm0_152
            result = arg1
        case 0xd6
            sub_423750(arg3, 2)
            int32_t xmm0_153 = sub_603140()
            sub_423750(arg3, 1)
            int32_t eax_852 = sub_602ff0()
            sub_423750(arg3, 0)
            sub_601750(arg1, sub_5e9f80(sub_602ff0(), eax_852, xmm0_153))
            result = arg1
        case 0xd7
            int32_t* eax_858 = sub_6034c0(sub_423750(arg3, 6))
            int32_t* eax_860 = sub_6034c0(sub_423750(arg3, 5))
            int32_t* eax_862 = sub_6034c0(sub_423750(arg3, 4))
            sub_423750(arg3, 3)
            int32_t eax_864 = sub_602ff0()
            sub_423750(arg3, 2)
            int32_t eax_866 = sub_602ff0()
            sub_423750(arg3, 1)
            int32_t eax_868 = sub_602ff0()
            sub_423750(arg3, 0)
            int32_t eax_870 = sub_602ff0()
            sub_601750(arg1, 
                sub_5ea000(eax_870, eax_868, eax_870, eax_866, eax_864, eax_862, eax_860, eax_858))
            result = arg1
        case 0xd8
            float* eax_874 = sub_6034c0(sub_423750(arg3, 3))
            sub_423750(arg3, 2)
            float xmm0_154 = sub_603140()
            sub_423750(arg3, 1)
            float xmm0_155 = sub_603140()
            sub_423750(arg3, 0)
            sub_601750(arg1, sub_5ea100(sub_602ff0(), eax_874, xmm0_155, xmm0_154))
            result = arg1
        case 0xd9
            int32_t* eax_882 = sub_6034c0(sub_423750(arg3, 0xa))
            int32_t* eax_884 = sub_6034c0(sub_423750(arg3, 9))
            int32_t* eax_886 = sub_6034c0(sub_423750(arg3, 8))
            sub_423750(arg3, 7)
            int32_t ecx_1093
            float xmm0_156
            ecx_1093, xmm0_156 = sub_603140()
            int32_t var_21c_21 = ecx_1093
            sub_423750(arg3, 6)
            int32_t ecx_1096
            int32_t xmm0_157
            ecx_1096, xmm0_157 = sub_603140()
            int32_t var_220_12 = ecx_1096
            sub_423750(arg3, 5)
            int32_t ecx_1099
            int32_t xmm0_158
            ecx_1099, xmm0_158 = sub_603140()
            int32_t var_224_6 = ecx_1099
            sub_423750(arg3, 4)
            int32_t ecx_1102
            int32_t xmm0_159
            ecx_1102, xmm0_159 = sub_603140()
            int32_t var_228_4 = ecx_1102
            sub_423750(arg3, 3)
            int32_t var_1b4_41 = sub_603140()
            sub_423750(arg3, 2)
            int32_t var_1c4_10 = sub_603140()
            sub_423750(arg3, 1)
            int32_t var_1c8_8 = sub_603140()
            sub_423750(arg3, 0)
            int32_t eax_895 = sub_602ff0()
            sub_601750(arg1, 
                sub_5ea1d0(eax_895, eax_886, eax_895, xmm0_159, xmm0_158, xmm0_157, xmm0_156, 
                    eax_884, eax_882))
            result = arg1
        case 0xda
            int32_t* eax_899 = sub_6034c0(sub_423750(arg3, 5))
            int32_t* eax_901 = sub_6034c0(sub_423750(arg3, 4))
            struct common::CPoint::VTable** eax_903 = sub_6034c0(sub_423750(arg3, 3))
            sub_423750(arg3, 2)
            int32_t eax_905 = sub_602ff0()
            sub_423750(arg3, 1)
            int32_t eax_907 = sub_602ff0()
            sub_423750(arg3, 0)
            int32_t eax_909 = sub_602ff0()
            sub_601750(arg1, 
                sub_5ea2f0(eax_909, eax_907, eax_909, eax_905, eax_903, eax_901, eax_899))
            result = arg1
        case 0xdb
            sub_423750(arg3, 6)
            int32_t ecx_1129
            int32_t xmm0_163
            ecx_1129, xmm0_163 = sub_603140()
            int32_t var_214_189 = ecx_1129
            sub_423750(arg3, 5)
            int32_t ecx_1132
            int32_t xmm0_164
            ecx_1132, xmm0_164 = sub_603140()
            int32_t var_218_110 = ecx_1132
            sub_423750(arg3, 4)
            int32_t ecx_1135
            int32_t xmm0_165
            ecx_1135, xmm0_165 = sub_603140()
            int32_t var_21c_24 = ecx_1135
            sub_423750(arg3, 3)
            int32_t var_1b4_42 = sub_603140()
            sub_423750(arg3, 2)
            int32_t var_1c4_11 = sub_603140()
            sub_423750(arg3, 1)
            int32_t var_1c8_9 = sub_603140()
            sub_423750(arg3, 0)
            int32_t eax_919
            int32_t edx_125
            eax_919, edx_125 = sub_602ff0()
            sub_601750(arg1, sub_5ea440(eax_919, edx_125, eax_919, xmm0_165, xmm0_164, xmm0_163))
            result = arg1
        case 0xdc
            int32_t* eax_923 = sub_603530(sub_423750(arg3, 3))
            int32_t* eax_925 = sub_603530(sub_423750(arg3, 2))
            int32_t* eax_927 = sub_603530(sub_423750(arg3, 1))
            sub_423750(arg3, 0)
            int32_t eax_929 = sub_602ff0()
            sub_601750(arg1, sub_5ea520(eax_929, eax_927, eax_929, eax_925, eax_923))
            result = arg1
        case 0xdd
            int32_t* eax_933 = sub_603530(sub_423750(arg3, 3))
            int32_t* eax_935 = sub_603530(sub_423750(arg3, 2))
            int32_t* eax_937 = sub_603530(sub_423750(arg3, 1))
            sub_423750(arg3, 0)
            int32_t eax_939 = sub_602ff0()
            sub_601750(arg1, sub_5ea720(eax_939, eax_937, eax_939, eax_935, eax_933))
            result = arg1
        case 0xde
            int32_t* eax_943 = sub_603470(sub_423750(arg3, 5))
            int32_t* eax_945 = sub_603470(sub_423750(arg3, 4))
            sub_423750(arg3, 3)
            int32_t var_1b4_43 = sub_603140()
            sub_423750(arg3, 2)
            int32_t var_1c4_12 = sub_603140()
            sub_423750(arg3, 1)
            int32_t var_1c8_10 = sub_603140()
            sub_423750(arg3, 0)
            int32_t eax_950 = sub_602ff0()
            sub_601750(arg1, sub_5ea920(eax_950, eax_945, eax_950, eax_943))
            result = arg1
        case 0xdf
            sub_423750(arg3, 0)
            sub_601750(arg1, sub_5eaa00(sub_602ff0()))
            result = arg1
        case 0xe0
            sub_423750(arg3, 0)
            sub_601750(arg1, sub_5eaa50(sub_602ff0()))
            result = arg1
        case 0xe1
            sub_423750(arg3, 2)
            int32_t xmm0_172 = sub_603140()
            sub_423750(arg3, 1)
            int32_t eax_963 = sub_602ff0()
            sub_423750(arg3, 0)
            sub_601750(arg1, sub_5eaaa0(sub_602ff0(), eax_963, xmm0_172))
            result = arg1
        case 0xe2
            sub_423750(arg3, 1)
            int32_t eax_969 = sub_602ff0()
            sub_423750(arg3, 0)
            int32_t xmm0_173 = sub_5eab10(sub_602ff0(), eax_969)
            *arg1 = 0xb
            arg1[1] = xmm0_173
            result = arg1
        case 0xe3
            sub_423750(arg3, 1)
            ebx.b = sub_602ea0()
            sub_423750(arg3, 0)
            sub_601750(arg1, sub_5eab70(sub_602ff0(), ebx.b))
            result = arg1
        case 0xe4
            sub_423750(arg3, 0)
            sub_601750(arg1, sub_5eabf0(sub_602ff0()))
            result = arg1
        case 0xe5
            sub_423750(arg3, 0)
            sub_601750(arg1, sub_5eac40(sub_602ff0()))
            result = arg1
        case 0xe6
            sub_423750(arg3, 0)
            sub_601750(arg1, sub_5eac90(sub_602ff0()))
            result = arg1
        case 0xe7
            sub_423750(arg3, 0)
            sub_601750(arg1, sub_5eace0(sub_602ff0()))
            result = arg1
        case 0xe8
            sub_423750(arg3, 0)
            sub_601750(arg1, sub_5ead30(sub_602ff0()))
            result = arg1
        case 0xe9
            int32_t* eax_1000 = sub_603530(sub_423750(arg3, 1))
            sub_423750(arg3, 0)
            sub_601750(arg1, sub_5ead80(sub_602ff0(), eax_1000))
            result = arg1
        case 0xea
            sub_423750(arg3, 0)
            int32_t eax_1007 = sub_5eae90(sub_602ff0())
            *arg1 = 0xa
            arg1[1] = eax_1007
            result = arg1
        case 0xeb
            int32_t* eax_1009 = sub_6034c0(sub_423750(arg3, 8))
            int32_t* eax_1011 = sub_6034c0(sub_423750(arg3, 7))
            int32_t* eax_1013 = sub_6034c0(sub_423750(arg3, 6))
            int32_t* eax_1015 = sub_6034c0(sub_423750(arg3, 5))
            int32_t* eax_1017 = sub_6034c0(sub_423750(arg3, 4))
            int32_t* eax_1019 = sub_6034c0(sub_423750(arg3, 3))
            sub_423750(arg3, 2)
            int32_t eax_1021 = sub_602ff0()
            sub_423750(arg3, 1)
            int32_t eax_1023 = sub_602ff0()
            sub_423750(arg3, 0)
            int32_t eax_1025 = sub_602ff0()
            sub_601750(arg1, 
                sub_5eaee0(eax_1025, eax_1023, eax_1025, eax_1021, eax_1019, eax_1017, eax_1015, 
                    eax_1013, eax_1011, eax_1009))
            result = arg1
        case 0xec
            int32_t* eax_1029 = sub_603470(sub_423750(arg3, 3))
            sub_423750(arg3, 2)
            int32_t eax_1031 = sub_602ff0()
            sub_423750(arg3, 1)
            int32_t eax_1033 = sub_602ff0()
            sub_423750(arg3, 0)
            int32_t eax_1035 = sub_602ff0()
            sub_601750(arg1, sub_5ed200(eax_1035, eax_1033, eax_1035, eax_1031, eax_1029))
            result = arg1
        case 0xed
            sub_423750(arg3, 3)
            int32_t eax_1039 = sub_602ff0()
            sub_423750(arg3, 2)
            int32_t eax_1041 = sub_602ff0()
            sub_423750(arg3, 1)
            int32_t eax_1043 = sub_602ff0()
            sub_423750(arg3, 0)
            int32_t eax_1045 = sub_602ff0()
            sub_601750(arg1, sub_5eafe0(eax_1045, eax_1043, eax_1045, eax_1041, eax_1039))
            result = arg1
        case 0xee
            int32_t* eax_1049 = sub_603470(sub_423750(arg3, 5))
            sub_423750(arg3, 4)
            int32_t eax_1051 = sub_602ff0()
            sub_423750(arg3, 3)
            int32_t eax_1053 = sub_602ff0()
            sub_423750(arg3, 2)
            int32_t eax_1055 = sub_602ff0()
            sub_423750(arg3, 1)
            int32_t eax_1057 = sub_602ff0()
            sub_423750(arg3, 0)
            int32_t eax_1059 = sub_602ff0()
            sub_601750(arg1, 
                sub_5ed2e0(eax_1059, eax_1057, eax_1059, eax_1055, eax_1053, eax_1051, eax_1049))
            result = arg1
        case 0xef
            sub_423750(arg3, 5)
            int32_t eax_1063 = sub_602ff0()
            sub_423750(arg3, 4)
            int32_t eax_1065 = sub_602ff0()
            sub_423750(arg3, 3)
            int32_t eax_1067 = sub_602ff0()
            sub_423750(arg3, 2)
            int32_t eax_1069 = sub_602ff0()
            sub_423750(arg3, 1)
            int32_t eax_1071 = sub_602ff0()
            sub_423750(arg3, 0)
            int32_t eax_1073 = sub_602ff0()
            sub_601750(arg1, 
                sub_5eb060(eax_1073, eax_1071, eax_1073, eax_1069, eax_1067, eax_1065, eax_1063))
            result = arg1
        case 0xf0
            int32_t* eax_1077 = sub_6034c0(sub_423750(arg3, 5))
            sub_423750(arg3, 4)
            int32_t eax_1079 = sub_602ff0()
            sub_423750(arg3, 3)
            int32_t eax_1081 = sub_602ff0()
            sub_423750(arg3, 2)
            int32_t eax_1083 = sub_602ff0()
            sub_423750(arg3, 1)
            int32_t eax_1085 = sub_602ff0()
            sub_423750(arg3, 0)
            int32_t eax_1087 = sub_602ff0()
            sub_601750(arg1, 
                sub_5ee0c0(eax_1087, eax_1085, eax_1087, eax_1083, eax_1081, eax_1079, eax_1077))
            result = arg1
        case 0xf1
            sub_423750(arg3, 5)
            int32_t ecx_1320
            int32_t xmm0_174
            ecx_1320, xmm0_174 = sub_603140()
            int32_t var_214_220 = ecx_1320
            sub_423750(arg3, 4)
            int32_t eax_1092 = sub_602ff0()
            sub_423750(arg3, 3)
            int32_t eax_1094 = sub_602ff0()
            sub_423750(arg3, 2)
            int32_t eax_1096 = sub_602ff0()
            sub_423750(arg3, 1)
            int32_t eax_1098 = sub_602ff0()
            sub_423750(arg3, 0)
            int32_t eax_1100 = sub_602ff0()
            sub_601750(arg1, 
                sub_5ebde0(eax_1100, eax_1098, eax_1100, eax_1096, eax_1094, eax_1092, xmm0_174))
            result = arg1
        case 0xf2
            int32_t* eax_1104 = sub_603500(sub_423750(arg3, 5))
            sub_423750(arg3, 4)
            int32_t eax_1106 = sub_602ff0()
            sub_423750(arg3, 3)
            int32_t eax_1108 = sub_602ff0()
            sub_423750(arg3, 2)
            int32_t eax_1110 = sub_602ff0()
            sub_423750(arg3, 1)
            int32_t eax_1112 = sub_602ff0()
            sub_423750(arg3, 0)
            int32_t eax_1114 = sub_602ff0()
            sub_601750(arg1, 
                sub_5eef10(eax_1114, eax_1112, eax_1114, eax_1110, eax_1108, eax_1106, eax_1104))
            result = arg1
        case 0xf3
            sub_423750(arg3, 5)
            void var_128
            char* eax_1118 = sub_603290(&var_128)
            int32_t var_1a4_12 = 0xb
            sub_423750(arg3, 4)
            void** ecx_1351 = sub_602ff0()
            char* var_214_226 = eax_1118
            sub_423750(arg3, 3)
            int32_t eax_1121 = sub_602ff0()
            sub_423750(arg3, 2)
            int32_t eax_1123 = sub_602ff0()
            sub_423750(arg3, 1)
            int32_t eax_1125 = sub_602ff0()
            sub_423750(arg3, 0)
            int32_t eax_1127 = sub_602ff0()
            sub_601750(arg1, sub_5ecd20(eax_1127, eax_1125, eax_1127, eax_1123, eax_1121, ecx_1351))
            sub_403320(&var_128)
            result = arg1
        case 0xf4
            sub_423750(arg3, 4)
            sub_602ff0()
            int32_t eax_1132
            int32_t* ecx_1367
            eax_1132, ecx_1367 = sub_603470(sub_423750(arg3, 5))
            int32_t var_214_228 = eax_1132
            sub_423750(arg3, 3)
            int32_t eax_1134 = sub_602ff0()
            sub_423750(arg3, 2)
            int32_t eax_1136 = sub_602ff0()
            sub_423750(arg3, 1)
            int32_t eax_1138 = sub_602ff0()
            sub_423750(arg3, 0)
            int32_t eax_1140 = sub_602ff0()
            sub_601750(arg1, sub_5ef1e0(eax_1140, eax_1138, eax_1140, eax_1136, eax_1134, ecx_1367))
            result = arg1
        case 0xf5
            sub_423750(arg3, 4)
            sub_602ff0()
            sub_423750(arg3, 5)
            int32_t eax_1145
            int32_t ecx_1382
            eax_1145, ecx_1382 = sub_602ff0()
            int32_t var_214_230 = eax_1145
            sub_423750(arg3, 3)
            int32_t eax_1147 = sub_602ff0()
            sub_423750(arg3, 2)
            int32_t eax_1149 = sub_602ff0()
            sub_423750(arg3, 1)
            int32_t eax_1151 = sub_602ff0()
            sub_423750(arg3, 0)
            int32_t eax_1153 = sub_602ff0()
            sub_601750(arg1, sub_5ef250(eax_1153, eax_1151, eax_1153, eax_1149, eax_1147, ecx_1382))
            result = arg1
        case 0xf6
            sub_423750(arg3, 4)
            sub_602ff0()
            int32_t eax_1158
            int32_t* ecx_1397
            eax_1158, ecx_1397 = sub_6034c0(sub_423750(arg3, 5))
            int32_t var_214_232 = eax_1158
            sub_423750(arg3, 3)
            int32_t eax_1160 = sub_602ff0()
            sub_423750(arg3, 2)
            int32_t eax_1162 = sub_602ff0()
            sub_423750(arg3, 1)
            int32_t eax_1164 = sub_602ff0()
            sub_423750(arg3, 0)
            int32_t eax_1166 = sub_602ff0()
            sub_601750(arg1, sub_5ef2c0(eax_1166, eax_1164, eax_1166, eax_1162, eax_1160, ecx_1397))
            result = arg1
        case 0xf7
            sub_423750(arg3, 4)
            sub_602ff0()
            sub_423750(arg3, 5)
            int32_t var_214_234 = sub_603140()
            sub_423750(arg3, 3)
            int32_t eax_1172 = sub_602ff0()
            sub_423750(arg3, 2)
            int32_t eax_1174 = sub_602ff0()
            sub_423750(arg3, 1)
            int32_t eax_1176 = sub_602ff0()
            sub_423750(arg3, 0)
            int32_t eax_1178 = sub_602ff0()
            int32_t var_218
            sub_601750(arg1, sub_5ecef0(eax_1178, eax_1176, eax_1178, eax_1174, eax_1172, var_218))
            result = arg1
        case 0xf8
            sub_423750(arg3, 2)
            int32_t eax_1182 = sub_602ff0()
            sub_423750(arg3, 1)
            int32_t eax_1184 = sub_602ff0()
            sub_423750(arg3, 0)
            int32_t eax_1186 = sub_602ff0()
            sub_601750(arg1, sub_5ef570(eax_1186, eax_1184, eax_1186, eax_1182))
            result = arg1
        case 0xf9
            sub_423750(arg3, 4)
            int32_t eax_1190 = sub_602ff0()
            sub_423750(arg3, 3)
            int32_t eax_1192 = sub_602ff0()
            sub_423750(arg3, 2)
            int32_t eax_1194 = sub_602ff0()
            sub_423750(arg3, 1)
            int32_t eax_1196 = sub_602ff0()
            sub_423750(arg3, 0)
            int32_t eax_1198 = sub_602ff0()
            sub_601750(arg1, sub_5ef5a0(eax_1198, eax_1196, eax_1198, eax_1194, eax_1192, eax_1190))
            result = arg1
        case 0xfa
            int32_t* eax_1202 = sub_603530(sub_423750(arg3, 2))
            sub_423750(arg3, 1)
            int32_t eax_1204 = sub_602ff0()
            sub_423750(arg3, 0)
            int32_t eax_1206 = sub_602ff0()
            sub_601750(arg1, sub_5ef6d0(eax_1206, eax_1204, eax_1206, eax_1202))
            result = arg1
        case 0xfb
            int32_t* eax_1210 = sub_603530(sub_423750(arg3, 3))
            sub_423750(arg3, 2)
            int32_t eax_1212 = sub_602ff0()
            sub_423750(arg3, 1)
            int32_t eax_1214 = sub_602ff0()
            sub_423750(arg3, 0)
            int32_t eax_1216 = sub_602ff0()
            sub_601750(arg1, sub_5ef770(eax_1216, eax_1214, eax_1216, eax_1212, eax_1210))
            result = arg1
        case 0xfc
            int32_t* eax_1220 = sub_603530(sub_423750(arg3, 3))
            sub_423750(arg3, 2)
            int32_t eax_1222 = sub_602ff0()
            sub_423750(arg3, 1)
            int32_t eax_1224 = sub_602ff0()
            sub_423750(arg3, 0)
            int32_t eax_1226 = sub_602ff0()
            sub_601750(arg1, sub_5ef810(eax_1226, eax_1224, eax_1226, eax_1222, eax_1220))
            result = arg1
        case 0xfd
            sub_423750(arg3, 4)
            int32_t ecx_1472
            int32_t xmm0_176
            ecx_1472, xmm0_176 = sub_603140()
            int32_t var_214_246 = ecx_1472
            sub_423750(arg3, 3)
            int32_t var_1b4_46 = sub_603140()
            sub_423750(arg3, 2)
            int32_t var_1c4_13 = sub_603140()
            sub_423750(arg3, 1)
            int32_t var_1c8_11 = sub_603140()
            sub_423750(arg3, 0)
            sub_603140()
            int32_t xmm0_180 = sub_5ef8b0(xmm0_176)
            *arg1 = 0xb
            arg1[1] = xmm0_180
            result = arg1
        case 0xfe
            sub_423750(arg3, 1)
            void var_158
            char* eax_1236 = sub_603290(&var_158)
            int32_t var_1a4_13 = 0xc
            sub_423750(arg3, 0)
            var_1a4_13.b = 0xd
            void var_140
            sub_601750(arg1, sub_5ef900(sub_603290(&var_140), eax_1236))
            sub_403320(&var_140)
            sub_403320(&var_158)
            result = arg1
        case 0xff
            sub_423750(arg3, 2)
            char* eax_1242 = sub_603290(&var_1a0)
            int32_t var_1a4_14 = 0xe
            sub_423750(arg3, 1)
            void var_188
            char* eax_1244 = sub_603290(&var_188)
            var_1a4_14.b = 0xf
            sub_423750(arg3, 0)
            void var_170
            void** eax_1246 = sub_603290(&var_170)
            var_1a4_14.b = 0x10
            sub_601750(arg1, sub_5ef910(eax_1246, eax_1244, eax_1246, eax_1242))
            sub_403320(&var_170)
            sub_403320(&var_188)
            sub_403320(&var_1a0)
            result = arg1
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &var_1a0)
return result
