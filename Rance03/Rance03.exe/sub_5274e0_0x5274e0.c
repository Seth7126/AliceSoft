// 函数: sub_5274e0
// 地址: 0x5274e0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* ebp = arg2
sub_468ec0(ebp, (*(arg1 + 8) - *(arg1 + 4)) s/ 0x38)
void* i = *(arg1 + 4)

if (i != *(arg1 + 8))
    void* edi_1 = ebp + 4
    char var_20 = 0
    
    do
        int32_t eax_4 = *(i + 0x14)
        void* i_2
        
        if (eax_4 u< 0x10)
            i_2 = i
        else
            i_2 = *i
        
        void* i_1
        
        if (eax_4 u< 0x10)
            i_1 = i
        else
            i_1 = *i
        
        void* var_34_1 = arg2
        sub_468ff0(edi_1, *(ebp + 8), i_1, i_2 + *(i + 0x10))
        int32_t eax_6 = *(edi_1 + 4)
        int32_t ecx_2
        
        if (&var_20 u< eax_6)
            ecx_2 = *edi_1
        
        if (&var_20 u>= eax_6 || ecx_2 u> &var_20)
            if (eax_6 == *(edi_1 + 8))
                sub_403590(edi_1, 1)
            
            char* eax_8 = *(edi_1 + 4)
            
            if (eax_8 != 0)
                *eax_8 = 0
        else
            if (eax_6 == *(edi_1 + 8))
                sub_403590(edi_1, 1)
            
            char* ecx_4 = *(edi_1 + 4)
            
            if (ecx_4 != 0)
                int32_t eax_7
                eax_7.b = *(&var_20 - ecx_2 + *edi_1)
                *ecx_4 = eax_7.b
        
        *(edi_1 + 4) += 1
        int32_t eax_9 = *(edi_1 + 4)
        int32_t ebx_3 = *(i + 0x18)
        char var_1f = ebx_3.b
        int32_t ecx_6
        
        if (&var_1f u< eax_9)
            ecx_6 = *edi_1
        
        if (&var_1f u>= eax_9 || ecx_6 u> &var_1f)
            if (eax_9 == *(edi_1 + 8))
                sub_403590(edi_1, 1)
            
            char* eax_11 = *(edi_1 + 4)
            
            if (eax_11 != 0)
                *eax_11 = ebx_3.b
        else
            if (eax_9 == *(edi_1 + 8))
                sub_403590(edi_1, 1)
            
            char* ecx_8 = *(edi_1 + 4)
            
            if (ecx_8 != 0)
                char* eax_10
                eax_10.b = *(*edi_1 + &var_1f - ecx_6)
                *ecx_8 = eax_10.b
        
        *(edi_1 + 4) += 1
        int32_t ecx_10 = *(edi_1 + 4)
        uint32_t eax_13 = ebx_3 u>> 8
        char var_1e = eax_13.b
        int32_t edx_3
        
        if (&var_1e u< ecx_10)
            edx_3 = *edi_1
        
        char* ecx_13
        
        if (&var_1e u>= ecx_10 || edx_3 u> &var_1e)
            if (ecx_10 == *(edi_1 + 8))
                sub_403590(edi_1, 1)
            
            ecx_13 = *(edi_1 + 4)
            
            if (ecx_13 != 0)
                *ecx_13 = eax_13.b
        else
            if (ecx_10 == *(edi_1 + 8))
                sub_403590(edi_1, 1)
            
            ecx_13 = *(edi_1 + 4)
            
            if (ecx_13 != 0)
                eax_13.b = *(*edi_1 + &var_1e - edx_3)
                *ecx_13 = eax_13.b
        *(edi_1 + 4) += 1
        int32_t ecx_14 = *(edi_1 + 4)
        uint32_t eax_15 = ebx_3 u>> 0x10
        char var_1d = eax_15.b
        int32_t edx_4
        
        if (&var_1d u< ecx_14)
            edx_4 = *edi_1
        
        char* ecx_17
        
        if (&var_1d u>= ecx_14 || edx_4 u> &var_1d)
            if (ecx_14 == *(edi_1 + 8))
                sub_403590(edi_1, 1)
            
            ecx_17 = *(edi_1 + 4)
            
            if (ecx_17 != 0)
                *ecx_17 = eax_15.b
        else
            if (ecx_14 == *(edi_1 + 8))
                sub_403590(edi_1, 1)
            
            ecx_17 = *(edi_1 + 4)
            
            if (ecx_17 != 0)
                eax_15.b = *(*edi_1 + &var_1d - edx_4)
                *ecx_17 = eax_15.b
        *(edi_1 + 4) += 1
        int32_t eax_16 = *(edi_1 + 4)
        uint8_t ebx_4 = (ebx_3 u>> 0x18).b
        uint8_t var_1c = ebx_4
        int32_t ecx_18
        
        if (&var_1c u< eax_16)
            ecx_18 = *edi_1
        
        if (&var_1c u>= eax_16 || ecx_18 u> &var_1c)
            if (eax_16 == *(edi_1 + 8))
                sub_403590(edi_1, 1)
            
            uint8_t* eax_18 = *(edi_1 + 4)
            
            if (eax_18 != 0)
                *eax_18 = ebx_4
        else
            if (eax_16 == *(edi_1 + 8))
                sub_403590(edi_1, 1)
            
            char* ecx_20 = *(edi_1 + 4)
            
            if (ecx_20 != 0)
                int32_t eax_17
                eax_17.b = *(&var_1c - ecx_18 + *edi_1)
                *ecx_20 = eax_17.b
        
        *(edi_1 + 4) += 1
        int32_t xmm0_1 = *(i + 0x1c)
        int32_t eax_19 = *(edi_1 + 4)
        char var_1b = xmm0_1.b
        int32_t ecx_22
        
        if (&var_1b u< eax_19)
            ecx_22 = *edi_1
        
        if (&var_1b u>= eax_19 || ecx_22 u> &var_1b)
            if (eax_19 == *(edi_1 + 8))
                sub_403590(edi_1, 1)
            
            char* eax_21 = *(edi_1 + 4)
            
            if (eax_21 != 0)
                *eax_21 = xmm0_1.b
        else
            if (eax_19 == *(edi_1 + 8))
                sub_403590(edi_1, 1)
            
            char* ecx_24 = *(edi_1 + 4)
            
            if (ecx_24 != 0)
                char* eax_20
                eax_20.b = *(*edi_1 + &var_1b - ecx_22)
                *ecx_24 = eax_20.b
        
        *(edi_1 + 4) += 1
        int32_t ecx_26 = *(edi_1 + 4)
        uint32_t eax_23 = xmm0_1 u>> 8
        char var_1a = eax_23.b
        int32_t edx_5
        
        if (&var_1a u< ecx_26)
            edx_5 = *edi_1
        
        char* ecx_29
        
        if (&var_1a u>= ecx_26 || edx_5 u> &var_1a)
            if (ecx_26 == *(edi_1 + 8))
                sub_403590(edi_1, 1)
            
            ecx_29 = *(edi_1 + 4)
            
            if (ecx_29 != 0)
                *ecx_29 = eax_23.b
        else
            if (ecx_26 == *(edi_1 + 8))
                sub_403590(edi_1, 1)
            
            ecx_29 = *(edi_1 + 4)
            
            if (ecx_29 != 0)
                eax_23.b = *(*edi_1 + &var_1a - edx_5)
                *ecx_29 = eax_23.b
        *(edi_1 + 4) += 1
        int32_t ecx_30 = *(edi_1 + 4)
        uint32_t eax_25 = xmm0_1 u>> 0x10
        char var_19 = eax_25.b
        int32_t edx_6
        
        if (&var_19 u< ecx_30)
            edx_6 = *edi_1
        
        char* ecx_33
        
        if (&var_19 u>= ecx_30 || edx_6 u> &var_19)
            if (ecx_30 == *(edi_1 + 8))
                sub_403590(edi_1, 1)
            
            ecx_33 = *(edi_1 + 4)
            
            if (ecx_33 != 0)
                *ecx_33 = eax_25.b
        else
            if (ecx_30 == *(edi_1 + 8))
                sub_403590(edi_1, 1)
            
            ecx_33 = *(edi_1 + 4)
            
            if (ecx_33 != 0)
                eax_25.b = *(*edi_1 + &var_19 - edx_6)
                *ecx_33 = eax_25.b
        *(edi_1 + 4) += 1
        int32_t eax_26 = *(edi_1 + 4)
        uint8_t ebx_7 = (xmm0_1 u>> 0x18).b
        uint8_t var_18 = ebx_7
        int32_t ecx_34
        
        if (&var_18 u< eax_26)
            ecx_34 = *edi_1
        
        if (&var_18 u>= eax_26 || ecx_34 u> &var_18)
            if (eax_26 == *(edi_1 + 8))
                sub_403590(edi_1, 1)
            
            uint8_t* eax_28 = *(edi_1 + 4)
            
            if (eax_28 != 0)
                *eax_28 = ebx_7
        else
            if (eax_26 == *(edi_1 + 8))
                sub_403590(edi_1, 1)
            
            char* ecx_36 = *(edi_1 + 4)
            
            if (ecx_36 != 0)
                int32_t eax_27
                eax_27.b = *(&var_18 - ecx_34 + *edi_1)
                *ecx_36 = eax_27.b
        
        *(edi_1 + 4) += 1
        int32_t xmm0_2 = *(i + 0x20)
        int32_t eax_29 = *(edi_1 + 4)
        char var_17 = xmm0_2.b
        int32_t ecx_38
        
        if (&var_17 u< eax_29)
            ecx_38 = *edi_1
        
        if (&var_17 u>= eax_29 || ecx_38 u> &var_17)
            if (eax_29 == *(edi_1 + 8))
                sub_403590(edi_1, 1)
            
            char* eax_31 = *(edi_1 + 4)
            
            if (eax_31 != 0)
                *eax_31 = xmm0_2.b
        else
            if (eax_29 == *(edi_1 + 8))
                sub_403590(edi_1, 1)
            
            char* ecx_40 = *(edi_1 + 4)
            
            if (ecx_40 != 0)
                char* eax_30
                eax_30.b = *(*edi_1 + &var_17 - ecx_38)
                *ecx_40 = eax_30.b
        
        *(edi_1 + 4) += 1
        int32_t ecx_42 = *(edi_1 + 4)
        uint32_t eax_33 = xmm0_2 u>> 8
        char var_16 = eax_33.b
        int32_t edx_7
        
        if (&var_16 u< ecx_42)
            edx_7 = *edi_1
        
        char* ecx_45
        
        if (&var_16 u>= ecx_42 || edx_7 u> &var_16)
            if (ecx_42 == *(edi_1 + 8))
                sub_403590(edi_1, 1)
            
            ecx_45 = *(edi_1 + 4)
            
            if (ecx_45 != 0)
                *ecx_45 = eax_33.b
        else
            if (ecx_42 == *(edi_1 + 8))
                sub_403590(edi_1, 1)
            
            ecx_45 = *(edi_1 + 4)
            
            if (ecx_45 != 0)
                eax_33.b = *(*edi_1 + &var_16 - edx_7)
                *ecx_45 = eax_33.b
        *(edi_1 + 4) += 1
        int32_t ecx_46 = *(edi_1 + 4)
        uint32_t eax_35 = xmm0_2 u>> 0x10
        char var_15 = eax_35.b
        int32_t edx_8
        
        if (&var_15 u< ecx_46)
            edx_8 = *edi_1
        
        char* ecx_49
        
        if (&var_15 u>= ecx_46 || edx_8 u> &var_15)
            if (ecx_46 == *(edi_1 + 8))
                sub_403590(edi_1, 1)
            
            ecx_49 = *(edi_1 + 4)
            
            if (ecx_49 != 0)
                *ecx_49 = eax_35.b
        else
            if (ecx_46 == *(edi_1 + 8))
                sub_403590(edi_1, 1)
            
            ecx_49 = *(edi_1 + 4)
            
            if (ecx_49 != 0)
                eax_35.b = *(*edi_1 + &var_15 - edx_8)
                *ecx_49 = eax_35.b
        *(edi_1 + 4) += 1
        int32_t eax_36 = *(edi_1 + 4)
        uint8_t ebx_10 = (xmm0_2 u>> 0x18).b
        uint8_t var_14 = ebx_10
        int32_t ecx_50
        
        if (&var_14 u< eax_36)
            ecx_50 = *edi_1
        
        if (&var_14 u>= eax_36 || ecx_50 u> &var_14)
            if (eax_36 == *(edi_1 + 8))
                sub_403590(edi_1, 1)
            
            uint8_t* eax_38 = *(edi_1 + 4)
            
            if (eax_38 != 0)
                *eax_38 = ebx_10
        else
            if (eax_36 == *(edi_1 + 8))
                sub_403590(edi_1, 1)
            
            char* ecx_52 = *(edi_1 + 4)
            
            if (ecx_52 != 0)
                int32_t eax_37
                eax_37.b = *(&var_14 - ecx_50 + *edi_1)
                *ecx_52 = eax_37.b
        
        *(edi_1 + 4) += 1
        int32_t xmm0_3 = *(i + 0x24)
        int32_t eax_39 = *(edi_1 + 4)
        char var_13 = xmm0_3.b
        int32_t ecx_54
        
        if (&var_13 u< eax_39)
            ecx_54 = *edi_1
        
        if (&var_13 u>= eax_39 || ecx_54 u> &var_13)
            if (eax_39 == *(edi_1 + 8))
                sub_403590(edi_1, 1)
            
            char* eax_41 = *(edi_1 + 4)
            
            if (eax_41 != 0)
                *eax_41 = xmm0_3.b
        else
            if (eax_39 == *(edi_1 + 8))
                sub_403590(edi_1, 1)
            
            char* ecx_56 = *(edi_1 + 4)
            
            if (ecx_56 != 0)
                char* eax_40
                eax_40.b = *(*edi_1 + &var_13 - ecx_54)
                *ecx_56 = eax_40.b
        
        *(edi_1 + 4) += 1
        int32_t ecx_58 = *(edi_1 + 4)
        uint32_t eax_43 = xmm0_3 u>> 8
        char var_12 = eax_43.b
        int32_t edx_9
        
        if (&var_12 u< ecx_58)
            edx_9 = *edi_1
        
        char* ecx_61
        
        if (&var_12 u>= ecx_58 || edx_9 u> &var_12)
            if (ecx_58 == *(edi_1 + 8))
                sub_403590(edi_1, 1)
            
            ecx_61 = *(edi_1 + 4)
            
            if (ecx_61 != 0)
                *ecx_61 = eax_43.b
        else
            if (ecx_58 == *(edi_1 + 8))
                sub_403590(edi_1, 1)
            
            ecx_61 = *(edi_1 + 4)
            
            if (ecx_61 != 0)
                eax_43.b = *(*edi_1 + &var_12 - edx_9)
                *ecx_61 = eax_43.b
        *(edi_1 + 4) += 1
        int32_t ecx_62 = *(edi_1 + 4)
        uint32_t eax_45 = xmm0_3 u>> 0x10
        char var_11 = eax_45.b
        int32_t edx_10
        
        if (&var_11 u< ecx_62)
            edx_10 = *edi_1
        
        char* ecx_65
        
        if (&var_11 u>= ecx_62 || edx_10 u> &var_11)
            if (ecx_62 == *(edi_1 + 8))
                sub_403590(edi_1, 1)
            
            ecx_65 = *(edi_1 + 4)
            
            if (ecx_65 != 0)
                *ecx_65 = eax_45.b
        else
            if (ecx_62 == *(edi_1 + 8))
                sub_403590(edi_1, 1)
            
            ecx_65 = *(edi_1 + 4)
            
            if (ecx_65 != 0)
                eax_45.b = *(*edi_1 + &var_11 - edx_10)
                *ecx_65 = eax_45.b
        *(edi_1 + 4) += 1
        int32_t eax_46 = *(edi_1 + 4)
        uint8_t ebx_13 = (xmm0_3 u>> 0x18).b
        uint8_t var_10 = ebx_13
        int32_t ecx_66
        
        if (&var_10 u< eax_46)
            ecx_66 = *edi_1
        
        if (&var_10 u>= eax_46 || ecx_66 u> &var_10)
            if (eax_46 == *(edi_1 + 8))
                sub_403590(edi_1, 1)
            
            uint8_t* eax_48 = *(edi_1 + 4)
            
            if (eax_48 != 0)
                *eax_48 = ebx_13
        else
            if (eax_46 == *(edi_1 + 8))
                sub_403590(edi_1, 1)
            
            char* ecx_68 = *(edi_1 + 4)
            
            if (ecx_68 != 0)
                int32_t eax_47
                eax_47.b = *(&var_10 - ecx_66 + *edi_1)
                *ecx_68 = eax_47.b
        
        *(edi_1 + 4) += 1
        int32_t xmm0_4 = *(i + 0x28)
        int32_t eax_49 = *(edi_1 + 4)
        char var_f = xmm0_4.b
        int32_t ecx_70
        
        if (&var_f u< eax_49)
            ecx_70 = *edi_1
        
        if (&var_f u>= eax_49 || ecx_70 u> &var_f)
            if (eax_49 == *(edi_1 + 8))
                sub_403590(edi_1, 1)
            
            char* eax_51 = *(edi_1 + 4)
            
            if (eax_51 != 0)
                *eax_51 = xmm0_4.b
        else
            if (eax_49 == *(edi_1 + 8))
                sub_403590(edi_1, 1)
            
            char* ecx_72 = *(edi_1 + 4)
            
            if (ecx_72 != 0)
                char* eax_50
                eax_50.b = *(*edi_1 + &var_f - ecx_70)
                *ecx_72 = eax_50.b
        
        *(edi_1 + 4) += 1
        int32_t ecx_74 = *(edi_1 + 4)
        uint32_t eax_53 = xmm0_4 u>> 8
        char var_e = eax_53.b
        int32_t edx_11
        
        if (&var_e u< ecx_74)
            edx_11 = *edi_1
        
        char* ecx_77
        
        if (&var_e u>= ecx_74 || edx_11 u> &var_e)
            if (ecx_74 == *(edi_1 + 8))
                sub_403590(edi_1, 1)
            
            ecx_77 = *(edi_1 + 4)
            
            if (ecx_77 != 0)
                *ecx_77 = eax_53.b
        else
            if (ecx_74 == *(edi_1 + 8))
                sub_403590(edi_1, 1)
            
            ecx_77 = *(edi_1 + 4)
            
            if (ecx_77 != 0)
                eax_53.b = *(*edi_1 + &var_e - edx_11)
                *ecx_77 = eax_53.b
        *(edi_1 + 4) += 1
        int32_t ecx_78 = *(edi_1 + 4)
        uint32_t eax_55 = xmm0_4 u>> 0x10
        char var_d = eax_55.b
        int32_t edx_12
        
        if (&var_d u< ecx_78)
            edx_12 = *edi_1
        
        char* ecx_81
        
        if (&var_d u>= ecx_78 || edx_12 u> &var_d)
            if (ecx_78 == *(edi_1 + 8))
                sub_403590(edi_1, 1)
            
            ecx_81 = *(edi_1 + 4)
            
            if (ecx_81 != 0)
                *ecx_81 = eax_55.b
        else
            if (ecx_78 == *(edi_1 + 8))
                sub_403590(edi_1, 1)
            
            ecx_81 = *(edi_1 + 4)
            
            if (ecx_81 != 0)
                eax_55.b = *(*edi_1 + &var_d - edx_12)
                *ecx_81 = eax_55.b
        *(edi_1 + 4) += 1
        int32_t eax_56 = *(edi_1 + 4)
        uint8_t ebx_16 = (xmm0_4 u>> 0x18).b
        uint8_t var_c = ebx_16
        int32_t ecx_82
        
        if (&var_c u< eax_56)
            ecx_82 = *edi_1
        
        if (&var_c u>= eax_56 || ecx_82 u> &var_c)
            if (eax_56 == *(edi_1 + 8))
                sub_403590(edi_1, 1)
            
            uint8_t* eax_58 = *(edi_1 + 4)
            
            if (eax_58 != 0)
                *eax_58 = ebx_16
        else
            if (eax_56 == *(edi_1 + 8))
                sub_403590(edi_1, 1)
            
            char* ecx_84 = *(edi_1 + 4)
            
            if (ecx_84 != 0)
                int32_t eax_57
                eax_57.b = *(&var_c - ecx_82 + *edi_1)
                *ecx_84 = eax_57.b
        
        *(edi_1 + 4) += 1
        int32_t eax_59 = *(edi_1 + 4)
        int32_t ecx_86 = *(i + 0x2c)
        int32_t var_8_16 = ecx_86
        char var_b = ecx_86.b
        int32_t edx_13
        
        if (&var_b u< eax_59)
            edx_13 = *edi_1
        
        if (&var_b u>= eax_59 || edx_13 u> &var_b)
            if (eax_59 == *(edi_1 + 8))
                sub_403590(edi_1, 1)
                ecx_86 = var_8_16
            
            char* eax_61 = *(edi_1 + 4)
            
            if (eax_61 != 0)
                *eax_61 = ecx_86.b
        else
            if (eax_59 == *(edi_1 + 8))
                sub_403590(edi_1, 1)
                ecx_86 = var_8_16
            
            char* edx_14 = *(edi_1 + 4)
            
            if (edx_14 != 0)
                int32_t eax_60
                eax_60.b = *(&var_b - edx_13 + *edi_1)
                *edx_14 = eax_60.b
        
        *(edi_1 + 4) += 1
        int32_t eax_62 = *(edi_1 + 4)
        uint8_t ebx_20 = (ecx_86 u>> 8).b
        uint8_t var_a = ebx_20
        int32_t edx_15
        
        if (&var_a u< eax_62)
            edx_15 = *edi_1
        
        if (&var_a u>= eax_62 || edx_15 u> &var_a)
            if (eax_62 == *(edi_1 + 8))
                sub_403590(edi_1, 1)
                ecx_86 = var_8_16
            
            uint8_t* eax_64 = *(edi_1 + 4)
            
            if (eax_64 != 0)
                *eax_64 = ebx_20
        else
            if (eax_62 == *(edi_1 + 8))
                sub_403590(edi_1, 1)
                ecx_86 = var_8_16
            
            char* edx_16 = *(edi_1 + 4)
            
            if (edx_16 != 0)
                int32_t eax_63
                eax_63.b = *(&var_a - edx_15 + *edi_1)
                *edx_16 = eax_63.b
        
        *(edi_1 + 4) += 1
        uint8_t var_9 = (ecx_86 u>> 0x10).b
        sub_414b60(edi_1, &var_9)
        var_9 = (var_8_16 u>> 0x18).b
        sub_414b60(edi_1, &var_9)
        ebp = arg2
        sub_468ec0(ebp, *(i + 0x30))
        var_9 = *(i + 0x34) != 0
        sub_414b60(edi_1, &var_9)
        i += 0x38
    while (i != *(arg1 + 8))

void* result
result.b = 1
return result
