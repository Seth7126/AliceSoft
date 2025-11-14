// 函数: sub_6635d0
// 地址: 0x6635d0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_43 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6cfa90
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* result_2
int32_t eax_2 = __security_cookie ^ &result_2
int32_t __saved_edi
int32_t var_b0 = __security_cookie ^ &__saved_edi
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
void* edi = *(arg1 + 0x5c)

if (edi != 0)
    result_2 = nullptr
    int32_t* var_98
    sub_42f3d0(edi + 0x320, &var_98, &result_2)
    int32_t* eax_5 = var_98
    int32_t ebp_1
    
    if (eax_5 != *(edi + 0x320))
        ebp_1 = eax_5[5]
    else
        ebp_1 = 0
    
    result_2 = nullptr
    sub_42f3d0(edi + 0x328, &var_98, &result_2)
    int32_t* eax_6 = var_98
    int32_t eax_7
    
    if (eax_6 != *(edi + 0x328))
        eax_7 = eax_6[5]
    else
        eax_7 = 0
    
    int32_t eax_8 = eax_7 + ebp_1
    result_2 = 1
    sub_42f3d0(edi + 0x320, &var_98, &result_2)
    int32_t* eax_9 = var_98
    int32_t ebp_2
    
    if (eax_9 != *(edi + 0x320))
        ebp_2 = eax_9[5]
    else
        ebp_2 = 0
    
    result_2 = 1
    sub_42f3d0(edi + 0x328, &var_98, &result_2)
    int32_t* eax_10 = var_98
    int32_t eax_11
    
    if (eax_10 != *(edi + 0x328))
        eax_11 = eax_10[5]
    else
        eax_11 = 0
    
    int32_t eax_12 = eax_11 + ebp_2
    result_2 = 2
    sub_42f3d0(edi + 0x320, &var_98, &result_2)
    int32_t* eax_13 = var_98
    int32_t ebp_3
    
    if (eax_13 != *(edi + 0x320))
        ebp_3 = eax_13[5]
    else
        ebp_3 = 0
    
    result_2 = 2
    sub_42f3d0(edi + 0x328, &var_98, &result_2)
    int32_t* eax_14 = var_98
    int32_t eax_15
    
    if (eax_14 != *(edi + 0x328))
        eax_15 = eax_14[5]
    else
        eax_15 = 0
    
    int32_t eax_16 = eax_15 + ebp_3
    result_2 = 3
    sub_42f3d0(edi + 0x320, &var_98, &result_2)
    int32_t* eax_17 = var_98
    int32_t ebp_4
    
    if (eax_17 != *(edi + 0x320))
        ebp_4 = eax_17[5]
    else
        ebp_4 = 0
    
    result_2 = 3
    sub_42f3d0(edi + 0x328, &var_98, &result_2)
    int32_t* eax_18 = var_98
    int32_t eax_19
    
    if (eax_18 != *(edi + 0x328))
        eax_19 = eax_18[5]
    else
        eax_19 = 0
    
    int32_t eax_20 = eax_19 + ebp_4
    result_2 = 4
    sub_42f3d0(edi + 0x320, &var_98, &result_2)
    int32_t* eax_21 = var_98
    int32_t ebp_5
    
    if (eax_21 != *(edi + 0x320))
        ebp_5 = eax_21[5]
    else
        ebp_5 = 0
    
    result_2 = 4
    sub_42f3d0(edi + 0x328, &var_98, &result_2)
    int32_t* eax_22 = var_98
    int32_t eax_23
    
    if (eax_22 != *(edi + 0x328))
        eax_23 = eax_22[5]
    else
        eax_23 = 0
    
    int32_t eax_24 = eax_23 + ebp_5
    result_2 = 5
    sub_42f3d0(edi + 0x320, &var_98, &result_2)
    int32_t* eax_25 = var_98
    int32_t ebp_6
    
    if (eax_25 != *(edi + 0x320))
        ebp_6 = eax_25[5]
    else
        ebp_6 = 0
    
    result_2 = 5
    sub_42f3d0(edi + 0x328, &var_98, &result_2)
    int32_t* eax_26 = var_98
    int32_t eax_27
    
    if (eax_26 != *(edi + 0x328))
        eax_27 = eax_26[5]
    else
        eax_27 = 0
    
    int32_t eax_28 = eax_27 + ebp_6
    result_2 = 6
    sub_42f3d0(edi + 0x320, &var_98, &result_2)
    int32_t* eax_29 = var_98
    int32_t ebp_7
    
    if (eax_29 != *(edi + 0x320))
        ebp_7 = eax_29[5]
    else
        ebp_7 = 0
    
    result_2 = 6
    sub_42f3d0(edi + 0x328, &var_98, &result_2)
    int32_t* eax_30 = var_98
    int32_t eax_31
    
    if (eax_30 != *(edi + 0x328))
        eax_31 = eax_30[5]
    else
        eax_31 = 0
    
    int32_t eax_32 = eax_31 + ebp_7
    result_2 = 7
    sub_42f3d0(edi + 0x320, &var_98, &result_2)
    int32_t* eax_33 = var_98
    int32_t ebp_8
    
    if (eax_33 != *(edi + 0x320))
        ebp_8 = eax_33[5]
    else
        ebp_8 = 0
    
    result_2 = 7
    sub_42f3d0(edi + 0x328, &var_98, &result_2)
    int32_t* eax_34 = var_98
    int32_t eax_35
    
    if (eax_34 != *(edi + 0x328))
        eax_35 = eax_34[5]
    else
        eax_35 = 0
    
    int32_t eax_36 = eax_35 + ebp_8
    result_2 = 8
    sub_42f3d0(edi + 0x320, &var_98, &result_2)
    int32_t* eax_37 = var_98
    int32_t ebp_9
    
    if (eax_37 != *(edi + 0x320))
        ebp_9 = eax_37[5]
    else
        ebp_9 = 0
    
    result_2 = 8
    sub_42f3d0(edi + 0x328, &var_98, &result_2)
    int32_t* eax_38 = var_98
    int32_t eax_39
    
    if (eax_38 != *(edi + 0x328))
        eax_39 = eax_38[5]
    else
        eax_39 = 0
    
    int32_t eax_40 = eax_39 + ebp_9
    result_2 = 9
    sub_42f3d0(edi + 0x320, &var_98, &result_2)
    int32_t* eax_41 = var_98
    int32_t ebp_10
    
    if (eax_41 != *(edi + 0x320))
        ebp_10 = eax_41[5]
    else
        ebp_10 = 0
    
    result_2 = 9
    sub_42f3d0(edi + 0x328, &var_98, &result_2)
    int32_t* eax_42 = var_98
    int32_t eax_43
    
    if (eax_42 != *(edi + 0x328))
        eax_43 = eax_42[5]
    else
        eax_43 = 0
    
    int32_t eax_44 = eax_43 + ebp_10
    result_2 = 0xb
    sub_42f3d0(edi + 0x320, &var_98, &result_2)
    int32_t* eax_45 = var_98
    int32_t ebp_11
    
    if (eax_45 != *(edi + 0x320))
        ebp_11 = eax_45[5]
    else
        ebp_11 = 0
    
    result_2 = 0xb
    sub_42f3d0(edi + 0x328, &var_98, &result_2)
    int32_t* eax_46 = var_98
    int32_t eax_47
    
    if (eax_46 != *(edi + 0x328))
        eax_47 = eax_46[5]
    else
        eax_47 = 0
    
    int32_t eax_48 = eax_47 + ebp_11
    result_2 = 0xc
    sub_42f3d0(edi + 0x320, &var_98, &result_2)
    int32_t* eax_49 = var_98
    int32_t ebp_12
    
    if (eax_49 != *(edi + 0x320))
        ebp_12 = eax_49[5]
    else
        ebp_12 = 0
    
    result_2 = 0xc
    sub_42f3d0(edi + 0x328, &var_98, &result_2)
    int32_t* eax_50 = var_98
    int32_t eax_51
    
    if (eax_50 != *(edi + 0x328))
        eax_51 = eax_50[5]
    else
        eax_51 = 0
    
    int32_t eax_52 = eax_51 + ebp_12
    result_2 = 0xd
    sub_42f3d0(edi + 0x320, &var_98, &result_2)
    int32_t* eax_53 = var_98
    int32_t ebp_13
    
    if (eax_53 != *(edi + 0x320))
        ebp_13 = eax_53[5]
    else
        ebp_13 = 0
    
    result_2 = 0xd
    sub_42f3d0(edi + 0x328, &var_98, &result_2)
    int32_t* eax_54 = var_98
    int32_t eax_55
    
    if (eax_54 != *(edi + 0x328))
        eax_55 = eax_54[5]
    else
        eax_55 = 0
    
    int32_t eax_56 = eax_55 + ebp_13
    result_2 = 0xe
    sub_42f3d0(edi + 0x320, &var_98, &result_2)
    int32_t* eax_57 = var_98
    int32_t ebp_14
    
    if (eax_57 != *(edi + 0x320))
        ebp_14 = eax_57[5]
    else
        ebp_14 = 0
    
    result_2 = 0xe
    sub_42f3d0(edi + 0x328, &var_98, &result_2)
    int32_t* eax_58 = var_98
    int32_t eax_59
    
    if (eax_58 != *(edi + 0x328))
        eax_59 = eax_58[5]
    else
        eax_59 = 0
    
    int32_t eax_60 = eax_59 + ebp_14
    result_2 = 0xf
    sub_42f3d0(edi + 0x320, &var_98, &result_2)
    int32_t* eax_61 = var_98
    int32_t ebp_15
    
    if (eax_61 != *(edi + 0x320))
        ebp_15 = eax_61[5]
    else
        ebp_15 = 0
    
    result_2 = 0xf
    sub_42f3d0(edi + 0x328, &var_98, &result_2)
    int32_t* eax_62 = var_98
    int32_t eax_63
    
    if (eax_62 != *(edi + 0x328))
        eax_63 = eax_62[5]
    else
        eax_63 = 0
    
    int32_t eax_64 = eax_63 + ebp_15
    result_2 = 0x10
    sub_42f3d0(edi + 0x320, &var_98, &result_2)
    int32_t* eax_65 = var_98
    int32_t ebp_16
    
    if (eax_65 != *(edi + 0x320))
        ebp_16 = eax_65[5]
    else
        ebp_16 = 0
    
    result_2 = 0x10
    sub_42f3d0(edi + 0x328, &var_98, &result_2)
    int32_t* eax_66 = var_98
    int32_t eax_67
    
    if (eax_66 != *(edi + 0x328))
        eax_67 = eax_66[5]
    else
        eax_67 = 0
    
    int32_t eax_68 = eax_67 + ebp_16
    result_2 = 0x11
    sub_42f3d0(edi + 0x320, &var_98, &result_2)
    int32_t* eax_69 = var_98
    int32_t ebp_17
    
    if (eax_69 != *(edi + 0x320))
        ebp_17 = eax_69[5]
    else
        ebp_17 = 0
    
    result_2 = 0x11
    sub_42f3d0(edi + 0x328, &var_98, &result_2)
    int32_t* eax_70 = var_98
    int32_t eax_71
    
    if (eax_70 != *(edi + 0x328))
        eax_71 = eax_70[5]
    else
        eax_71 = 0
    
    int32_t eax_72 = eax_71 + ebp_17
    result_2 = 0x12
    sub_42f3d0(edi + 0x320, &var_98, &result_2)
    int32_t* eax_73 = var_98
    int32_t ebp_18
    
    if (eax_73 != *(edi + 0x320))
        ebp_18 = eax_73[5]
    else
        ebp_18 = 0
    
    result_2 = 0x12
    sub_42f3d0(edi + 0x328, &var_98, &result_2)
    int32_t* eax_74 = var_98
    void* eax_75
    
    if (eax_74 != *(edi + 0x328))
        eax_75 = eax_74[5]
    else
        eax_75 = nullptr
    
    result_2 = 0x13
    var_98 = eax_75 + ebp_18
    int32_t* var_94
    sub_42f3d0(edi + 0x320, &var_94, &result_2)
    int32_t* eax_77 = var_94
    int32_t ebp_19
    
    if (eax_77 != *(edi + 0x320))
        ebp_19 = eax_77[5]
    else
        ebp_19 = 0
    
    var_94 = 0x13
    sub_42f3d0(edi + 0x328, &result_2, &var_94)
    int32_t* result_3 = result_2
    void* eax_78
    
    if (result_3 != *(edi + 0x328))
        eax_78 = result_3[5]
    else
        eax_78 = nullptr
    
    var_94 = 0x14
    result_2 = eax_78 + ebp_19
    int32_t* var_90
    sub_42f3d0(edi + 0x320, &var_90, &var_94)
    int32_t* eax_80 = var_90
    int32_t ebp_20
    
    if (eax_80 != *(edi + 0x320))
        ebp_20 = eax_80[5]
    else
        ebp_20 = 0
    
    var_90 = 0x14
    sub_42f3d0(edi + 0x328, &var_94, &var_90)
    int32_t* eax_81 = var_94
    int32_t eax_82
    
    if (eax_81 != *(edi + 0x328))
        eax_82 = eax_81[5]
    else
        eax_82 = 0
    
    int32_t eax_83 = eax_82 + ebp_20
    var_90 = 0x15
    sub_42f3d0(edi + 0x320, &var_94, &var_90)
    int32_t* eax_84 = var_94
    int32_t ebp_21
    
    if (eax_84 != *(edi + 0x320))
        ebp_21 = eax_84[5]
    else
        ebp_21 = 0
    
    var_90 = 0x15
    sub_42f3d0(edi + 0x328, &var_94, &var_90)
    int32_t* eax_85 = var_94
    int32_t eax_86
    
    if (eax_85 != *(edi + 0x328))
        eax_86 = eax_85[5]
    else
        eax_86 = 0
    
    int32_t edi_1 = eax_86 + ebp_21
    int32_t eax_87 = eax_12
    int32_t esi_16 = edi_1 + eax_83 + result_2 + var_98 + eax_72 + eax_68 + eax_64 + eax_60 + eax_56
        + eax_52 + eax_48 + eax_44 + eax_40 + eax_36 + eax_32 + eax_28 + eax_24
    int32_t esi_20 = esi_16 + eax_20 + eax_16 + eax_87 + eax_8
    int32_t var_44
    int32_t var_30
    
    if (eax_8 != 0)
        int32_t var_b4_43 = eax_8
        int32_t var_4 = 0
        sub_403110(arg2, sub_4691f0(&var_44, 0x7013bc), nullptr, 0xffffffff)
        int32_t var_4_1 = 0xffffffff
        
        if (var_30 u>= 0x10)
            j__free(var_44)
        
        eax_87 = eax_12
    
    if (eax_87 != 0)
        int32_t var_b4_45 = eax_87
        int32_t var_4_2 = 1
        sub_403110(arg2, sub_4691f0(&var_44, 0x7013d4), nullptr, 0xffffffff)
        int32_t var_4_3 = 0xffffffff
        
        if (var_30 u>= 0x10)
            j__free(var_44)
    
    if (eax_16 != 0)
        int32_t var_b4_47 = eax_16
        int32_t var_4_4 = 2
        sub_403110(arg2, sub_4691f0(&var_44, 0x7013c8), nullptr, 0xffffffff)
        int32_t var_4_5 = 0xffffffff
        
        if (var_30 u>= 0x10)
            j__free(var_44)
    
    if (eax_20 != 0)
        int32_t var_b4_49 = eax_20
        int32_t var_4_6 = 3
        sub_403110(arg2, sub_4691f0(&var_44, 0x7013ec), nullptr, 0xffffffff)
        int32_t var_4_7 = 0xffffffff
        
        if (var_30 u>= 0x10)
            j__free(var_44)
    
    if (eax_24 != 0)
        int32_t var_b4_51 = eax_24
        int32_t var_4_8 = 4
        sub_403110(arg2, sub_4691f0(&var_44, 0x7013e0), nullptr, 0xffffffff)
        int32_t var_4_9 = 0xffffffff
        
        if (var_30 u>= 0x10)
            j__free(var_44)
    
    if (eax_28 != 0)
        int32_t var_b4_53 = eax_28
        int32_t var_4_10 = 5
        sub_403110(arg2, sub_4691f0(&var_44, 0x701744), nullptr, 0xffffffff)
        int32_t var_4_11 = 0xffffffff
        
        if (var_30 u>= 0x10)
            j__free(var_44)
    
    if (eax_32 != 0)
        int32_t var_b4_55 = eax_32
        int32_t var_4_12 = 6
        sub_403110(arg2, sub_4691f0(&var_44, 0x701738), nullptr, 0xffffffff)
        int32_t var_4_13 = 0xffffffff
        
        if (var_30 u>= 0x10)
            j__free(var_44)
    
    if (eax_36 != 0)
        int32_t var_b4_57 = eax_36
        int32_t var_4_14 = 7
        sub_403110(arg2, sub_4691f0(&var_44, 0x70175c), nullptr, 0xffffffff)
        int32_t var_4_15 = 0xffffffff
        
        if (var_30 u>= 0x10)
            j__free(var_44)
    
    if (eax_40 != 0)
        int32_t var_b4_59 = eax_40
        int32_t var_4_16 = 8
        sub_403110(arg2, sub_4691f0(&var_44, 0x701750), nullptr, 0xffffffff)
        int32_t var_4_17 = 0xffffffff
        
        if (var_30 u>= 0x10)
            j__free(var_44)
    
    if (eax_44 != 0)
        int32_t var_b4_61 = eax_44
        int32_t var_4_18 = 9
        sub_403110(arg2, sub_4691f0(&var_44, 0x701770), nullptr, 0xffffffff)
        int32_t var_4_19 = 0xffffffff
        
        if (var_30 u>= 0x10)
            j__free(var_44)
    
    if (eax_48 != 0)
        int32_t var_b4_63 = eax_48
        int32_t var_4_20 = 0xa
        sub_403110(arg2, sub_4691f0(&var_44, "CG:%d, "), nullptr, 0xffffffff)
        int32_t var_4_21 = 0xffffffff
        
        if (var_30 u>= 0x10)
            j__free(var_44)
    
    if (eax_52 != 0)
        int32_t var_b4_65 = eax_52
        int32_t var_4_22 = 0xb
        sub_403110(arg2, sub_4691f0(&var_44, 0x701788), nullptr, 0xffffffff)
        int32_t var_4_23 = 0xffffffff
        
        if (var_30 u>= 0x10)
            j__free(var_44)
    
    if (eax_56 != 0)
        int32_t var_b4_67 = eax_56
        int32_t var_4_24 = 0xc
        sub_403110(arg2, sub_4691f0(&var_44, 0x70177c), nullptr, 0xffffffff)
        int32_t var_4_25 = 0xffffffff
        
        if (var_30 u>= 0x10)
            j__free(var_44)
    
    if (eax_60 != 0)
        int32_t var_b4_69 = eax_60
        int32_t var_4_26 = 0xd
        sub_403110(arg2, sub_4691f0(&var_44, 0x7016e4), nullptr, 0xffffffff)
        int32_t var_4_27 = 0xffffffff
        
        if (var_30 u>= 0x10)
            j__free(var_44)
    
    if (eax_64 != 0)
        int32_t var_b4_71 = eax_64
        int32_t var_4_28 = 0xe
        sub_403110(arg2, sub_4691f0(&var_44, 0x7016d8), nullptr, 0xffffffff)
        int32_t var_4_29 = 0xffffffff
        
        if (var_30 u>= 0x10)
            j__free(var_44)
    
    if (eax_68 != 0)
        int32_t var_b4_73 = eax_68
        int32_t var_4_30 = 0xf
        sub_403110(arg2, sub_4691f0(&var_44, 0x7016fc), nullptr, 0xffffffff)
        int32_t var_4_31 = 0xffffffff
        
        if (var_30 u>= 0x10)
            j__free(var_44)
    
    if (eax_72 != 0)
        int32_t var_b4_75 = eax_72
        int32_t var_4_32 = 0x10
        sub_403110(arg2, sub_4691f0(&var_44, 0x7016f0), nullptr, 0xffffffff)
        int32_t var_4_33 = 0xffffffff
        
        if (var_30 u>= 0x10)
            j__free(var_44)
    
    int32_t* eax_120 = var_98
    
    if (eax_120 != 0)
        int32_t* var_b4_77 = eax_120
        int32_t var_4_34 = 0x11
        sub_403110(arg2, sub_4691f0(&var_44, 0x701714), nullptr, 0xffffffff)
        int32_t var_4_35 = 0xffffffff
        
        if (var_30 u>= 0x10)
            j__free(var_44)
    
    result = result_2
    
    if (result != 0)
        struct _EXCEPTION_REGISTRATION_RECORD** result_1 = result
        int32_t var_4_36 = 0x12
        result = sub_403110(arg2, sub_4691f0(&var_44, 0x701708), nullptr, 0xffffffff)
        int32_t var_4_37 = 0xffffffff
        
        if (var_30 u>= 0x10)
            result = j__free(var_44)
    
    if (eax_83 != 0)
        int32_t var_b4_80 = eax_83
        int32_t var_4_38 = 0x13
        result = sub_403110(arg2, sub_4691f0(&var_44, 0x70172c), nullptr, 0xffffffff)
        int32_t var_4_39 = 0xffffffff
        
        if (var_30 u>= 0x10)
            result = j__free(var_44)
    
    if (edi_1 != 0)
        int32_t var_b4_82 = edi_1
        int32_t var_4_40 = 0x14
        result = sub_403110(arg2, sub_4691f0(&var_44, 0x701720), nullptr, 0xffffffff)
        int32_t var_4_41 = 0xffffffff
        
        if (var_30 u>= 0x10)
            result = j__free(var_44)
    
    if (esi_20 != 0)
        int32_t var_b4_84 = esi_20
        int32_t var_4_42 = 0x15
        int32_t var_2c
        result = sub_403110(arg2, sub_4691f0(&var_2c, 0x7015b0), nullptr, 0xffffffff)
        int32_t var_18
        
        if (var_18 u>= 0x10)
            result = j__free(var_2c)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &result_2)
return result
