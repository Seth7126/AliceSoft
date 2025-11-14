// 函数: sub_664610
// 地址: 0x664610
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_45 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6cfb78
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t var_f4
int32_t eax_2 = __security_cookie ^ &var_f4
int32_t __saved_edi
int32_t var_108 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* edi = *(arg1 + 0x5c)
int32_t* result = arg2

if (edi != 0)
    var_f4 = 0
    int32_t* var_ec
    sub_42f3d0(edi + 0x320, &var_ec, &var_f4)
    int32_t* eax_5 = var_ec
    int32_t ebx_1
    
    if (eax_5 != *(edi + 0x320))
        ebx_1 = eax_5[5]
    else
        ebx_1 = 0
    
    var_f4 = 0
    sub_42f3d0(edi + 0x328, &var_ec, &var_f4)
    int32_t* eax_6 = var_ec
    int32_t eax_7
    
    if (eax_6 != *(edi + 0x328))
        eax_7 = eax_6[5]
    else
        eax_7 = 0
    
    int32_t eax_8 = eax_7 + ebx_1
    var_f4 = 1
    sub_42f3d0(edi + 0x320, &var_ec, &var_f4)
    int32_t* eax_9 = var_ec
    int32_t ebx_2
    
    if (eax_9 != *(edi + 0x320))
        ebx_2 = eax_9[5]
    else
        ebx_2 = 0
    
    var_f4 = 1
    sub_42f3d0(edi + 0x328, &var_ec, &var_f4)
    int32_t* eax_10 = var_ec
    int32_t eax_11
    
    if (eax_10 != *(edi + 0x328))
        eax_11 = eax_10[5]
    else
        eax_11 = 0
    
    int32_t eax_12 = eax_11 + ebx_2
    var_f4 = 2
    sub_42f3d0(edi + 0x320, &var_ec, &var_f4)
    int32_t* eax_13 = var_ec
    int32_t ebx_3
    
    if (eax_13 != *(edi + 0x320))
        ebx_3 = eax_13[5]
    else
        ebx_3 = 0
    
    var_f4 = 2
    sub_42f3d0(edi + 0x328, &var_ec, &var_f4)
    int32_t* eax_14 = var_ec
    int32_t eax_15
    
    if (eax_14 != *(edi + 0x328))
        eax_15 = eax_14[5]
    else
        eax_15 = 0
    
    int32_t eax_16 = eax_15 + ebx_3
    var_f4 = 3
    sub_42f3d0(edi + 0x320, &var_ec, &var_f4)
    int32_t* eax_17 = var_ec
    int32_t ebx_4
    
    if (eax_17 != *(edi + 0x320))
        ebx_4 = eax_17[5]
    else
        ebx_4 = 0
    
    var_f4 = 3
    sub_42f3d0(edi + 0x328, &var_ec, &var_f4)
    int32_t* eax_18 = var_ec
    int32_t eax_19
    
    if (eax_18 != *(edi + 0x328))
        eax_19 = eax_18[5]
    else
        eax_19 = 0
    
    int32_t eax_20 = eax_19 + ebx_4
    var_f4 = 4
    sub_42f3d0(edi + 0x320, &var_ec, &var_f4)
    int32_t* eax_21 = var_ec
    int32_t ebx_5
    
    if (eax_21 != *(edi + 0x320))
        ebx_5 = eax_21[5]
    else
        ebx_5 = 0
    
    var_f4 = 4
    sub_42f3d0(edi + 0x328, &var_ec, &var_f4)
    int32_t* eax_22 = var_ec
    int32_t eax_23
    
    if (eax_22 != *(edi + 0x328))
        eax_23 = eax_22[5]
    else
        eax_23 = 0
    
    int32_t eax_24 = eax_23 + ebx_5
    var_f4 = 5
    sub_42f3d0(edi + 0x320, &var_ec, &var_f4)
    int32_t* eax_25 = var_ec
    int32_t ebx_6
    
    if (eax_25 != *(edi + 0x320))
        ebx_6 = eax_25[5]
    else
        ebx_6 = 0
    
    var_f4 = 5
    sub_42f3d0(edi + 0x328, &var_ec, &var_f4)
    int32_t* eax_26 = var_ec
    int32_t eax_27
    
    if (eax_26 != *(edi + 0x328))
        eax_27 = eax_26[5]
    else
        eax_27 = 0
    
    int32_t eax_28 = eax_27 + ebx_6
    var_f4 = 6
    sub_42f3d0(edi + 0x320, &var_ec, &var_f4)
    int32_t* eax_29 = var_ec
    int32_t ebx_7
    
    if (eax_29 != *(edi + 0x320))
        ebx_7 = eax_29[5]
    else
        ebx_7 = 0
    
    var_f4 = 6
    sub_42f3d0(edi + 0x328, &var_ec, &var_f4)
    int32_t* eax_30 = var_ec
    int32_t eax_31
    
    if (eax_30 != *(edi + 0x328))
        eax_31 = eax_30[5]
    else
        eax_31 = 0
    
    int32_t eax_32 = eax_31 + ebx_7
    var_f4 = 7
    sub_42f3d0(edi + 0x320, &var_ec, &var_f4)
    int32_t* eax_33 = var_ec
    int32_t ebx_8
    
    if (eax_33 != *(edi + 0x320))
        ebx_8 = eax_33[5]
    else
        ebx_8 = 0
    
    var_f4 = 7
    sub_42f3d0(edi + 0x328, &var_ec, &var_f4)
    int32_t* eax_34 = var_ec
    int32_t eax_35
    
    if (eax_34 != *(edi + 0x328))
        eax_35 = eax_34[5]
    else
        eax_35 = 0
    
    int32_t eax_36 = eax_35 + ebx_8
    var_f4 = 8
    sub_42f3d0(edi + 0x320, &var_ec, &var_f4)
    int32_t* eax_37 = var_ec
    int32_t ebx_9
    
    if (eax_37 != *(edi + 0x320))
        ebx_9 = eax_37[5]
    else
        ebx_9 = 0
    
    var_f4 = 8
    sub_42f3d0(edi + 0x328, &var_ec, &var_f4)
    int32_t* eax_38 = var_ec
    int32_t eax_39
    
    if (eax_38 != *(edi + 0x328))
        eax_39 = eax_38[5]
    else
        eax_39 = 0
    
    int32_t eax_40 = eax_39 + ebx_9
    var_f4 = 9
    sub_42f3d0(edi + 0x320, &var_ec, &var_f4)
    int32_t* eax_41 = var_ec
    int32_t ebx_10
    
    if (eax_41 != *(edi + 0x320))
        ebx_10 = eax_41[5]
    else
        ebx_10 = 0
    
    var_f4 = 9
    sub_42f3d0(edi + 0x328, &var_ec, &var_f4)
    int32_t* eax_42 = var_ec
    int32_t eax_43
    
    if (eax_42 != *(edi + 0x328))
        eax_43 = eax_42[5]
    else
        eax_43 = 0
    
    int32_t eax_44 = eax_43 + ebx_10
    var_f4 = 0xb
    sub_42f3d0(edi + 0x320, &var_ec, &var_f4)
    int32_t* eax_45 = var_ec
    int32_t ebx_11
    
    if (eax_45 != *(edi + 0x320))
        ebx_11 = eax_45[5]
    else
        ebx_11 = 0
    
    var_f4 = 0xb
    sub_42f3d0(edi + 0x328, &var_ec, &var_f4)
    int32_t* eax_46 = var_ec
    int32_t eax_47
    
    if (eax_46 != *(edi + 0x328))
        eax_47 = eax_46[5]
    else
        eax_47 = 0
    
    int32_t eax_48 = eax_47 + ebx_11
    var_f4 = 0xc
    sub_42f3d0(edi + 0x320, &var_ec, &var_f4)
    int32_t* eax_49 = var_ec
    int32_t ebx_12
    
    if (eax_49 != *(edi + 0x320))
        ebx_12 = eax_49[5]
    else
        ebx_12 = 0
    
    var_f4 = 0xc
    sub_42f3d0(edi + 0x328, &var_ec, &var_f4)
    int32_t* eax_50 = var_ec
    int32_t eax_51
    
    if (eax_50 != *(edi + 0x328))
        eax_51 = eax_50[5]
    else
        eax_51 = 0
    
    int32_t eax_52 = eax_51 + ebx_12
    var_f4 = 0xd
    sub_42f3d0(edi + 0x320, &var_ec, &var_f4)
    int32_t* eax_53 = var_ec
    int32_t ebx_13
    
    if (eax_53 != *(edi + 0x320))
        ebx_13 = eax_53[5]
    else
        ebx_13 = 0
    
    var_f4 = 0xd
    sub_42f3d0(edi + 0x328, &var_ec, &var_f4)
    int32_t* eax_54 = var_ec
    int32_t eax_55
    
    if (eax_54 != *(edi + 0x328))
        eax_55 = eax_54[5]
    else
        eax_55 = 0
    
    int32_t eax_56 = eax_55 + ebx_13
    var_f4 = 0xe
    sub_42f3d0(edi + 0x320, &var_ec, &var_f4)
    int32_t* eax_57 = var_ec
    int32_t ebx_14
    
    if (eax_57 != *(edi + 0x320))
        ebx_14 = eax_57[5]
    else
        ebx_14 = 0
    
    var_f4 = 0xe
    sub_42f3d0(edi + 0x328, &var_ec, &var_f4)
    int32_t* eax_58 = var_ec
    int32_t eax_59
    
    if (eax_58 != *(edi + 0x328))
        eax_59 = eax_58[5]
    else
        eax_59 = 0
    
    int32_t eax_60 = eax_59 + ebx_14
    var_f4 = 0xf
    sub_42f3d0(edi + 0x320, &var_ec, &var_f4)
    int32_t* eax_61 = var_ec
    int32_t ebx_15
    
    if (eax_61 != *(edi + 0x320))
        ebx_15 = eax_61[5]
    else
        ebx_15 = 0
    
    var_f4 = 0xf
    sub_42f3d0(edi + 0x328, &var_ec, &var_f4)
    int32_t* eax_62 = var_ec
    int32_t eax_63
    
    if (eax_62 != *(edi + 0x328))
        eax_63 = eax_62[5]
    else
        eax_63 = 0
    
    int32_t eax_64 = eax_63 + ebx_15
    var_f4 = 0x10
    sub_42f3d0(edi + 0x320, &var_ec, &var_f4)
    int32_t* eax_65 = var_ec
    int32_t ebx_16
    
    if (eax_65 != *(edi + 0x320))
        ebx_16 = eax_65[5]
    else
        ebx_16 = 0
    
    var_f4 = 0x10
    sub_42f3d0(edi + 0x328, &var_ec, &var_f4)
    int32_t* eax_66 = var_ec
    int32_t eax_67
    
    if (eax_66 != *(edi + 0x328))
        eax_67 = eax_66[5]
    else
        eax_67 = 0
    
    int32_t eax_68 = eax_67 + ebx_16
    var_f4 = 0x11
    sub_42f3d0(edi + 0x320, &var_ec, &var_f4)
    int32_t* eax_69 = var_ec
    int32_t ebx_17
    
    if (eax_69 != *(edi + 0x320))
        ebx_17 = eax_69[5]
    else
        ebx_17 = 0
    
    var_f4 = 0x11
    sub_42f3d0(edi + 0x328, &var_ec, &var_f4)
    int32_t* eax_70 = var_ec
    int32_t eax_71
    
    if (eax_70 != *(edi + 0x328))
        eax_71 = eax_70[5]
    else
        eax_71 = 0
    
    int32_t eax_72 = eax_71 + ebx_17
    var_f4 = 0x12
    sub_42f3d0(edi + 0x320, &var_ec, &var_f4)
    int32_t* eax_73 = var_ec
    int32_t ebx_18
    
    if (eax_73 != *(edi + 0x320))
        ebx_18 = eax_73[5]
    else
        ebx_18 = 0
    
    var_f4 = 0x12
    sub_42f3d0(edi + 0x328, &var_ec, &var_f4)
    int32_t* eax_74 = var_ec
    int32_t eax_75
    
    if (eax_74 != *(edi + 0x328))
        eax_75 = eax_74[5]
    else
        eax_75 = 0
    
    int32_t eax_76 = eax_75 + ebx_18
    var_f4 = 0x13
    sub_42f3d0(edi + 0x320, &var_ec, &var_f4)
    int32_t* eax_77 = var_ec
    int32_t ebx_19
    
    if (eax_77 != *(edi + 0x320))
        ebx_19 = eax_77[5]
    else
        ebx_19 = 0
    
    var_f4 = 0x13
    sub_42f3d0(edi + 0x328, &var_ec, &var_f4)
    int32_t* eax_78 = var_ec
    int32_t eax_79
    
    if (eax_78 != *(edi + 0x328))
        eax_79 = eax_78[5]
    else
        eax_79 = 0
    
    int32_t eax_80 = eax_79 + ebx_19
    var_f4 = 0x14
    sub_42f3d0(edi + 0x320, &var_ec, &var_f4)
    int32_t* eax_81 = var_ec
    int32_t ebx_20
    
    if (eax_81 != *(edi + 0x320))
        ebx_20 = eax_81[5]
    else
        ebx_20 = 0
    
    var_f4 = 0x14
    sub_42f3d0(edi + 0x328, &var_ec, &var_f4)
    int32_t* eax_82 = var_ec
    void* eax_83
    
    if (eax_82 != *(edi + 0x328))
        eax_83 = eax_82[5]
    else
        eax_83 = nullptr
    
    var_f4 = 0x15
    var_ec = eax_83 + ebx_20
    int32_t* var_f0
    sub_42f3d0(edi + 0x320, &var_f0, &var_f4)
    int32_t* eax_85 = var_f0
    int32_t ebx_21
    
    if (eax_85 != *(edi + 0x320))
        ebx_21 = eax_85[5]
    else
        ebx_21 = 0
    
    var_f4 = 0x15
    sub_42f3d0(edi + 0x328, &var_f0, &var_f4)
    int32_t* eax_86 = var_f0
    int32_t eax_87
    
    if (eax_86 != *(edi + 0x328))
        eax_87 = eax_86[5]
    else
        eax_87 = 0
    
    var_f0 = nullptr
    var_f4 = eax_87 + ebx_21
    int32_t* var_e8
    sub_42f3d0(edi + 0x328, &var_e8, &var_f0)
    int32_t* eax_89 = var_e8
    int32_t ebx_22
    
    if (eax_89 != *(edi + 0x328))
        ebx_22 = eax_89[5]
    else
        ebx_22 = 0
    
    var_f0 = nullptr
    sub_42f3d0(edi + 0x328, &var_e8, &var_f0)
    int32_t* eax_90 = var_e8
    int32_t eax_91
    
    if (eax_90 != *(edi + 0x328))
        eax_91 = eax_90[5]
    else
        eax_91 = 0
    
    int32_t eax_92 = eax_91 + ebx_22
    var_f0 = 1
    sub_42f3d0(edi + 0x328, &var_e8, &var_f0)
    int32_t* eax_93 = var_e8
    int32_t ebx_23
    
    if (eax_93 != *(edi + 0x328))
        ebx_23 = eax_93[5]
    else
        ebx_23 = 0
    
    var_f0 = 1
    sub_42f3d0(edi + 0x328, &var_e8, &var_f0)
    int32_t* eax_94 = var_e8
    int32_t eax_95
    
    if (eax_94 != *(edi + 0x328))
        eax_95 = eax_94[5]
    else
        eax_95 = 0
    
    int32_t eax_96 = eax_95 + ebx_23
    var_f0 = 2
    sub_42f3d0(edi + 0x328, &var_e8, &var_f0)
    int32_t* eax_97 = var_e8
    int32_t ebx_24
    
    if (eax_97 != *(edi + 0x328))
        ebx_24 = eax_97[5]
    else
        ebx_24 = 0
    
    var_f0 = 2
    sub_42f3d0(edi + 0x328, &var_e8, &var_f0)
    int32_t* eax_98 = var_e8
    int32_t eax_99
    
    if (eax_98 != *(edi + 0x328))
        eax_99 = eax_98[5]
    else
        eax_99 = 0
    
    int32_t eax_100 = eax_99 + ebx_24
    var_f0 = 3
    sub_42f3d0(edi + 0x328, &var_e8, &var_f0)
    int32_t* eax_101 = var_e8
    int32_t ebx_25
    
    if (eax_101 != *(edi + 0x328))
        ebx_25 = eax_101[5]
    else
        ebx_25 = 0
    
    var_f0 = 3
    sub_42f3d0(edi + 0x328, &var_e8, &var_f0)
    int32_t* eax_102 = var_e8
    int32_t eax_103
    
    if (eax_102 != *(edi + 0x328))
        eax_103 = eax_102[5]
    else
        eax_103 = 0
    
    int32_t eax_104 = eax_103 + ebx_25
    var_f0 = 4
    sub_42f3d0(edi + 0x328, &var_e8, &var_f0)
    int32_t* eax_105 = var_e8
    int32_t ebx_26
    
    if (eax_105 != *(edi + 0x328))
        ebx_26 = eax_105[5]
    else
        ebx_26 = 0
    
    var_f0 = 4
    sub_42f3d0(edi + 0x328, &var_e8, &var_f0)
    int32_t* eax_106 = var_e8
    int32_t eax_107
    
    if (eax_106 != *(edi + 0x328))
        eax_107 = eax_106[5]
    else
        eax_107 = 0
    
    int32_t eax_108 = eax_107 + ebx_26
    var_f0 = 5
    sub_42f3d0(edi + 0x328, &var_e8, &var_f0)
    int32_t* eax_109 = var_e8
    int32_t ebx_27
    
    if (eax_109 != *(edi + 0x328))
        ebx_27 = eax_109[5]
    else
        ebx_27 = 0
    
    var_f0 = 5
    sub_42f3d0(edi + 0x328, &var_e8, &var_f0)
    int32_t* eax_110 = var_e8
    int32_t eax_111
    
    if (eax_110 != *(edi + 0x328))
        eax_111 = eax_110[5]
    else
        eax_111 = 0
    
    int32_t eax_112 = eax_111 + ebx_27
    var_f0 = 6
    sub_42f3d0(edi + 0x328, &var_e8, &var_f0)
    int32_t* eax_113 = var_e8
    int32_t ebx_28
    
    if (eax_113 != *(edi + 0x328))
        ebx_28 = eax_113[5]
    else
        ebx_28 = 0
    
    var_f0 = 6
    sub_42f3d0(edi + 0x328, &var_e8, &var_f0)
    int32_t* eax_114 = var_e8
    int32_t eax_115
    
    if (eax_114 != *(edi + 0x328))
        eax_115 = eax_114[5]
    else
        eax_115 = 0
    
    int32_t eax_116 = eax_115 + ebx_28
    var_f0 = 7
    sub_42f3d0(edi + 0x328, &var_e8, &var_f0)
    int32_t* eax_117 = var_e8
    int32_t ebx_29
    
    if (eax_117 != *(edi + 0x328))
        ebx_29 = eax_117[5]
    else
        ebx_29 = 0
    
    var_f0 = 7
    sub_42f3d0(edi + 0x328, &var_e8, &var_f0)
    int32_t* eax_118 = var_e8
    int32_t eax_119
    
    if (eax_118 != *(edi + 0x328))
        eax_119 = eax_118[5]
    else
        eax_119 = 0
    
    int32_t eax_120 = eax_119 + ebx_29
    var_f0 = 8
    sub_42f3d0(edi + 0x328, &var_e8, &var_f0)
    int32_t* eax_121 = var_e8
    int32_t ebx_30
    
    if (eax_121 != *(edi + 0x328))
        ebx_30 = eax_121[5]
    else
        ebx_30 = 0
    
    var_f0 = 8
    sub_42f3d0(edi + 0x328, &var_e8, &var_f0)
    int32_t* eax_122 = var_e8
    int32_t eax_123
    
    if (eax_122 != *(edi + 0x328))
        eax_123 = eax_122[5]
    else
        eax_123 = 0
    
    int32_t eax_124 = eax_123 + ebx_30
    var_f0 = 9
    sub_42f3d0(edi + 0x328, &var_e8, &var_f0)
    int32_t* eax_125 = var_e8
    int32_t ebx_31
    
    if (eax_125 != *(edi + 0x328))
        ebx_31 = eax_125[5]
    else
        ebx_31 = 0
    
    var_f0 = 9
    sub_42f3d0(edi + 0x328, &var_e8, &var_f0)
    int32_t* eax_126 = var_e8
    int32_t eax_127
    
    if (eax_126 != *(edi + 0x328))
        eax_127 = eax_126[5]
    else
        eax_127 = 0
    
    int32_t eax_128 = eax_127 + ebx_31
    var_f0 = 0xb
    sub_42f3d0(edi + 0x328, &var_e8, &var_f0)
    int32_t* eax_129 = var_e8
    int32_t ebx_32
    
    if (eax_129 != *(edi + 0x328))
        ebx_32 = eax_129[5]
    else
        ebx_32 = 0
    
    var_f0 = 0xb
    sub_42f3d0(edi + 0x328, &var_e8, &var_f0)
    int32_t* eax_130 = var_e8
    int32_t eax_131
    
    if (eax_130 != *(edi + 0x328))
        eax_131 = eax_130[5]
    else
        eax_131 = 0
    
    int32_t eax_132 = eax_131 + ebx_32
    var_f0 = 0xc
    sub_42f3d0(edi + 0x328, &var_e8, &var_f0)
    int32_t* eax_133 = var_e8
    int32_t ebx_33
    
    if (eax_133 != *(edi + 0x328))
        ebx_33 = eax_133[5]
    else
        ebx_33 = 0
    
    var_f0 = 0xc
    sub_42f3d0(edi + 0x328, &var_e8, &var_f0)
    int32_t* eax_134 = var_e8
    int32_t eax_135
    
    if (eax_134 != *(edi + 0x328))
        eax_135 = eax_134[5]
    else
        eax_135 = 0
    
    int32_t eax_136 = eax_135 + ebx_33
    var_f0 = 0xd
    sub_42f3d0(edi + 0x328, &var_e8, &var_f0)
    int32_t* eax_137 = var_e8
    int32_t ebx_34
    
    if (eax_137 != *(edi + 0x328))
        ebx_34 = eax_137[5]
    else
        ebx_34 = 0
    
    var_f0 = 0xd
    sub_42f3d0(edi + 0x328, &var_e8, &var_f0)
    int32_t* eax_138 = var_e8
    int32_t eax_139
    
    if (eax_138 != *(edi + 0x328))
        eax_139 = eax_138[5]
    else
        eax_139 = 0
    
    int32_t eax_140 = eax_139 + ebx_34
    var_f0 = 0xe
    sub_42f3d0(edi + 0x328, &var_e8, &var_f0)
    int32_t* eax_141 = var_e8
    int32_t ebx_35
    
    if (eax_141 != *(edi + 0x328))
        ebx_35 = eax_141[5]
    else
        ebx_35 = 0
    
    var_f0 = 0xe
    sub_42f3d0(edi + 0x328, &var_e8, &var_f0)
    int32_t* eax_142 = var_e8
    int32_t eax_143
    
    if (eax_142 != *(edi + 0x328))
        eax_143 = eax_142[5]
    else
        eax_143 = 0
    
    int32_t eax_144 = eax_143 + ebx_35
    var_f0 = 0xf
    sub_42f3d0(edi + 0x328, &var_e8, &var_f0)
    int32_t* eax_145 = var_e8
    int32_t ebx_36
    
    if (eax_145 != *(edi + 0x328))
        ebx_36 = eax_145[5]
    else
        ebx_36 = 0
    
    var_f0 = 0xf
    sub_42f3d0(edi + 0x328, &var_e8, &var_f0)
    int32_t* eax_146 = var_e8
    int32_t eax_147
    
    if (eax_146 != *(edi + 0x328))
        eax_147 = eax_146[5]
    else
        eax_147 = 0
    
    int32_t eax_148 = eax_147 + ebx_36
    var_f0 = 0x10
    sub_42f3d0(edi + 0x328, &var_e8, &var_f0)
    int32_t* eax_149 = var_e8
    int32_t ebx_37
    
    if (eax_149 != *(edi + 0x328))
        ebx_37 = eax_149[5]
    else
        ebx_37 = 0
    
    var_f0 = 0x10
    sub_42f3d0(edi + 0x328, &var_e8, &var_f0)
    int32_t* eax_150 = var_e8
    int32_t eax_151
    
    if (eax_150 != *(edi + 0x328))
        eax_151 = eax_150[5]
    else
        eax_151 = 0
    
    int32_t eax_152 = eax_151 + ebx_37
    var_f0 = 0x11
    sub_42f3d0(edi + 0x328, &var_e8, &var_f0)
    int32_t* eax_153 = var_e8
    int32_t ebx_38
    
    if (eax_153 != *(edi + 0x328))
        ebx_38 = eax_153[5]
    else
        ebx_38 = 0
    
    var_f0 = 0x11
    sub_42f3d0(edi + 0x328, &var_e8, &var_f0)
    int32_t* eax_154 = var_e8
    int32_t eax_155
    
    if (eax_154 != *(edi + 0x328))
        eax_155 = eax_154[5]
    else
        eax_155 = 0
    
    int32_t eax_156 = eax_155 + ebx_38
    var_f0 = 0x12
    sub_42f3d0(edi + 0x328, &var_e8, &var_f0)
    int32_t* eax_157 = var_e8
    int32_t ebx_39
    
    if (eax_157 != *(edi + 0x328))
        ebx_39 = eax_157[5]
    else
        ebx_39 = 0
    
    var_f0 = 0x12
    sub_42f3d0(edi + 0x328, &var_e8, &var_f0)
    int32_t* eax_158 = var_e8
    void* eax_159
    
    if (eax_158 != *(edi + 0x328))
        eax_159 = eax_158[5]
    else
        eax_159 = nullptr
    
    var_f0 = 0x13
    var_e8 = eax_159 + ebx_39
    int32_t* var_e0
    sub_42f3d0(edi + 0x328, &var_e0, &var_f0)
    int32_t* eax_161 = var_e0
    int32_t ebx_40
    
    if (eax_161 != *(edi + 0x328))
        ebx_40 = eax_161[5]
    else
        ebx_40 = 0
    
    var_e0 = 0x13
    sub_42f3d0(edi + 0x328, &var_f0, &var_e0)
    int32_t* eax_162 = var_f0
    void* eax_163
    
    if (eax_162 != *(edi + 0x328))
        eax_163 = eax_162[5]
    else
        eax_163 = nullptr
    
    var_e0 = 0x14
    var_f0 = eax_163 + ebx_40
    int32_t* var_dc
    sub_42f3d0(edi + 0x328, &var_dc, &var_e0)
    int32_t* eax_165 = var_dc
    int32_t ebx_41
    
    if (eax_165 != *(edi + 0x328))
        ebx_41 = eax_165[5]
    else
        ebx_41 = 0
    
    var_dc = 0x14
    sub_42f3d0(edi + 0x328, &var_e0, &var_dc)
    int32_t* eax_166 = var_e0
    int32_t eax_167
    
    if (eax_166 != *(edi + 0x328))
        eax_167 = eax_166[5]
    else
        eax_167 = 0
    
    int32_t ebp_1 = eax_167 + ebx_41
    var_dc = 0x15
    sub_42f3d0(edi + 0x328, &var_e0, &var_dc)
    int32_t* eax_168 = var_e0
    int32_t ebx_42
    
    if (eax_168 != *(edi + 0x328))
        ebx_42 = eax_168[5]
    else
        ebx_42 = 0
    
    var_dc = 0x15
    sub_42f3d0(edi + 0x328, &var_e0, &var_dc)
    int32_t* eax_169 = var_e0
    int32_t eax_170
    
    if (eax_169 != *(edi + 0x328))
        eax_170 = eax_169[5]
    else
        eax_170 = 0
    
    int32_t ebx_43 = ebx_42 + eax_170
    void* esi_17 = var_f4 + var_ec + eax_80 + eax_76 + eax_72 + eax_68 + eax_64 + eax_60 + eax_56
        + eax_52 + eax_48 + eax_44 + eax_40 + eax_36 + eax_32 + eax_28 + eax_24
    void* edi_16 = ebx_43 + ebp_1 + var_f0 + var_e8 + eax_156 + eax_152 + eax_148 + eax_144
        + eax_140 + eax_136 + eax_132 + eax_128 + eax_124 + eax_120 + eax_116 + eax_112 + eax_108
    void* esi_21 = esi_17 + eax_20 + eax_16 + eax_12 + eax_8
    void* edi_20 = edi_16 + eax_104 + eax_100 + eax_96 + eax_92
    int32_t var_4 = 0
    int32_t var_44
    sub_403110(result, sub_4691f0(&var_44, 0x701578), nullptr, 0xffffffff)
    int32_t var_4_1 = 0xffffffff
    int32_t var_30
    
    if (var_30 u>= 0x10)
        j__free(var_44)
    
    int32_t var_10c_86 = eax_92 + eax_8
    int32_t var_110_86 = eax_92
    int32_t var_114_2 = eax_8
    int32_t var_4_2 = 1
    sub_403110(result, sub_4691f0(&var_44, 0x7015e8), nullptr, 0xffffffff)
    int32_t var_4_3 = 0xffffffff
    
    if (var_30 u>= 0x10)
        j__free(var_44)
    
    int32_t var_10c_88 = eax_96 + eax_12
    int32_t var_110_87 = eax_96
    int32_t var_114_4 = eax_12
    int32_t var_4_4 = 2
    sub_403110(result, sub_4691f0(&var_44, 0x7015b8), nullptr, 0xffffffff)
    int32_t var_4_5 = 0xffffffff
    
    if (var_30 u>= 0x10)
        j__free(var_44)
    
    int32_t var_10c_90 = eax_100 + eax_16
    int32_t var_110_88 = eax_100
    int32_t var_114_6 = eax_16
    int32_t var_4_6 = 3
    sub_403110(result, sub_4691f0(&var_44, 0x701648), nullptr, 0xffffffff)
    int32_t var_4_7 = 0xffffffff
    
    if (var_30 u>= 0x10)
        j__free(var_44)
    
    int32_t var_10c_92 = eax_104 + eax_20
    int32_t var_110_89 = eax_104
    int32_t var_114_8 = eax_20
    int32_t var_4_8 = 4
    sub_403110(result, sub_4691f0(&var_44, 0x701618), nullptr, 0xffffffff)
    int32_t var_4_9 = 0xffffffff
    
    if (var_30 u>= 0x10)
        j__free(var_44)
    
    int32_t var_10c_94 = eax_108 + eax_24
    int32_t var_110_90 = eax_108
    int32_t var_114_10 = eax_24
    int32_t var_4_10 = 5
    sub_403110(result, sub_4691f0(&var_44, 0x7016a8), nullptr, 0xffffffff)
    int32_t var_4_11 = 0xffffffff
    
    if (var_30 u>= 0x10)
        j__free(var_44)
    
    int32_t var_10c_96 = eax_112 + eax_28
    int32_t var_110_91 = eax_112
    int32_t var_114_12 = eax_28
    int32_t var_4_12 = 6
    sub_403110(result, sub_4691f0(&var_44, 0x701678), nullptr, 0xffffffff)
    int32_t var_4_13 = 0xffffffff
    
    if (var_30 u>= 0x10)
        j__free(var_44)
    
    int32_t var_10c_98 = eax_116 + eax_32
    int32_t var_110_92 = eax_116
    int32_t var_114_14 = eax_32
    int32_t var_4_14 = 7
    sub_403110(result, sub_4691f0(&var_44, 0x701428), nullptr, 0xffffffff)
    int32_t var_4_15 = 0xffffffff
    
    if (var_30 u>= 0x10)
        j__free(var_44)
    
    int32_t var_10c_100 = eax_120 + eax_36
    int32_t var_110_93 = eax_120
    int32_t var_114_16 = eax_36
    int32_t var_4_16 = 8
    sub_403110(result, sub_4691f0(&var_44, 0x7013f8), nullptr, 0xffffffff)
    int32_t var_4_17 = 0xffffffff
    
    if (var_30 u>= 0x10)
        j__free(var_44)
    
    int32_t var_10c_102 = eax_124 + eax_40
    int32_t var_110_94 = eax_124
    int32_t var_114_18 = eax_40
    int32_t var_4_18 = 9
    sub_403110(result, sub_4691f0(&var_44, 0x701488), nullptr, 0xffffffff)
    int32_t var_4_19 = 0xffffffff
    
    if (var_30 u>= 0x10)
        int32_t var_10c_103 = var_30 + 1
        sub_402390(var_44)
    
    int32_t var_30_1 = 0xf
    sub_4022b0(&var_44, 0)
    int32_t var_10c_104 = eax_128 + eax_44
    int32_t var_110_96 = eax_128
    int32_t var_114_21 = eax_44
    int32_t var_4_20 = 0xa
    sub_403060(sub_4691f0(&var_44, 0x701458))
    int32_t var_4_21 = 0xffffffff
    sub_401fb0(&var_44)
    int32_t var_10c_106 = eax_132 + eax_48
    int32_t var_110_97 = eax_132
    int32_t var_114_22 = eax_48
    int32_t var_4_22 = 0xb
    sub_403060(sub_4691f0(&var_44, 0x7014e8))
    int32_t var_4_23 = 0xffffffff
    sub_401fb0(&var_44)
    int32_t var_10c_108 = eax_136 + eax_52
    int32_t var_110_98 = eax_136
    int32_t var_114_23 = eax_52
    int32_t var_4_24 = 0xc
    sub_403060(sub_4691f0(&var_44, 0x7014b8))
    int32_t var_4_25 = 0xffffffff
    sub_401fb0(&var_44)
    int32_t var_10c_110 = eax_140 + eax_56
    int32_t var_110_99 = eax_140
    int32_t var_114_24 = eax_56
    int32_t var_4_26 = 0xd
    sub_403060(sub_4691f0(&var_44, 0x701548))
    int32_t var_4_27 = 0xffffffff
    sub_401fb0(&var_44)
    int32_t var_10c_112 = eax_144 + eax_60
    int32_t var_110_100 = eax_144
    int32_t var_114_25 = eax_60
    int32_t var_4_28 = 0xe
    sub_403060(sub_4691f0(&var_44, 0x701518))
    int32_t var_4_29 = 0xffffffff
    sub_401fb0(&var_44)
    int32_t var_10c_114 = eax_148 + eax_64
    int32_t var_110_101 = eax_148
    int32_t var_114_26 = eax_64
    int32_t var_4_30 = 0xf
    sub_403060(sub_4691f0(&var_44, 0x701838))
    int32_t var_4_31 = 0xffffffff
    sub_401fb0(&var_44)
    int32_t var_10c_116 = eax_152 + eax_68
    int32_t var_110_102 = eax_152
    int32_t var_114_27 = eax_68
    int32_t var_4_32 = 0x10
    sub_403060(sub_4691f0(&var_44, 0x701808))
    int32_t var_4_33 = 0xffffffff
    sub_401fb0(&var_44)
    int32_t var_10c_118 = eax_156 + eax_72
    int32_t var_110_103 = eax_156
    int32_t var_114_28 = eax_72
    int32_t var_4_34 = 0x11
    sub_403060(sub_4691f0(&var_44, 0x701898))
    int32_t var_4_35 = 0xffffffff
    sub_401fb0(&var_44)
    int32_t* ecx_129 = var_e8
    void* var_10c_120 = ecx_129 + eax_76
    int32_t* var_110_104 = ecx_129
    int32_t var_114_29 = eax_76
    int32_t var_4_36 = 0x12
    sub_403060(sub_4691f0(&var_44, 0x701868))
    int32_t var_4_37 = 0xffffffff
    sub_401fb0(&var_44)
    int32_t* ecx_132 = var_f0
    void* var_10c_122 = ecx_132 + eax_80
    int32_t* var_110_105 = ecx_132
    int32_t var_114_30 = eax_80
    int32_t var_4_38 = 0x13
    sub_403060(sub_4691f0(&var_44, 0x7018f8))
    int32_t var_4_39 = 0xffffffff
    sub_401fb0(&var_44)
    int32_t* ecx_135 = var_ec
    void* var_10c_124 = ecx_135 + ebp_1
    int32_t var_110_106 = ebp_1
    int32_t* var_114_31 = ecx_135
    int32_t var_4_40 = 0x14
    sub_403060(sub_4691f0(&var_44, 0x7018c8))
    int32_t var_4_41 = 0xffffffff
    sub_401fb0(&var_44)
    int32_t ecx_138 = var_f4
    int32_t var_10c_126 = ebx_43 + ecx_138
    int32_t var_110_107 = ebx_43
    int32_t var_114_32 = ecx_138
    int32_t var_4_42 = 0x15
    sub_403060(sub_4691f0(&var_44, 0x701958))
    int32_t var_4_43 = 0xffffffff
    sub_401fb0(&var_44)
    void* var_10c_128 = edi_20 + esi_21
    void* var_110_108 = edi_20
    void* var_114_33 = esi_21
    int32_t var_4_44 = 0x16
    void var_2c
    sub_403060(sub_4691f0(&var_2c, 0x701928))
    result = sub_401fb0(&var_2c)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_f4)
return result
