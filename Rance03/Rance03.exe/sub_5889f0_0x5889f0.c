// 函数: sub_5889f0
// 地址: 0x5889f0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

uint32_t ebx = arg2

if (sub_544930(arg1 + 4, ebx) != 0)
    sub_468ec0(ebx, *(arg1 + 0x28))
    sub_468ec0(ebx, *(arg1 + 0x2c))
    sub_468ec0(ebx, *(arg1 + 0x30))
    sub_468ec0(ebx, *(arg1 + 0x34))
    sub_468ec0(ebx, *(arg1 + 0x38))
    int32_t* edi_1 = ebx + 4
    bool var_5 = *(arg1 + 0x3c) != 0
    sub_414b60(edi_1, &var_5)
    sub_468ec0(ebx, *(arg1 + 0x40))
    sub_468ec0(ebx, *(arg1 + 0x44))
    sub_468ec0(ebx, *(arg1 + 0x48))
    sub_468ec0(ebx, *(arg1 + 0x4c))
    sub_468ec0(ebx, *(arg1 + 0x50))
    sub_468ec0(ebx, *(arg1 + 0x54))
    sub_468ec0(ebx, *(arg1 + 0x58))
    sub_468ec0(ebx, *(arg1 + 0x5c))
    sub_468ec0(ebx, *(arg1 + 0x60))
    sub_468ec0(ebx, *(arg1 + 0x64))
    sub_468ec0(ebx, *(arg1 + 0x68))
    sub_468ec0(ebx, *(arg1 + 0x6c))
    sub_468ec0(ebx, *(arg1 + 0x70))
    sub_468ec0(ebx, *(arg1 + 0x74))
    sub_468ec0(ebx, *(arg1 + 0x78))
    sub_468ec0(ebx, *(arg1 + 0x7c))
    sub_468ec0(ebx, *(arg1 + 0x80))
    sub_468ec0(ebx, *(arg1 + 0x84))
    sub_468ec0(ebx, *(arg1 + 0x88))
    sub_589dd0(
        sub_589dd0(sub_589dd0(sub_468ec0(ebx, *(arg1 + 0x8c)), ebx, arg1 + 0x90), ebx, 
            arg1 + 0x9c), 
        ebx, arg1 + 0xa8)
    sub_468ec0(ebx, *(arg1 + 0xb4))
    sub_468ec0(ebx, *(arg1 + 0xb8))
    sub_468ec0(ebx, *(arg1 + 0xbc))
    sub_468ec0(ebx, *(arg1 + 0xc0))
    sub_468ec0(ebx, *(arg1 + 0xc4))
    sub_468ec0(ebx, *(arg1 + 0xc8))
    sub_468ec0(ebx, *(arg1 + 0xcc))
    sub_468ec0(ebx, *(arg1 + 0xd0))
    sub_468ec0(ebx, *(arg1 + 0xd4))
    sub_468ec0(ebx, *(arg1 + 0xd8))
    sub_468ec0(ebx, *(arg1 + 0xdc))
    sub_468ec0(ebx, *(arg1 + 0xec))
    sub_468ec0(ebx, *(arg1 + 0xe0))
    sub_468ec0(ebx, *(arg1 + 0xe4))
    sub_468ec0(ebx, *(arg1 + 0xe8))
    sub_468ec0(ebx, *(arg1 + 0x134))
    sub_468ec0(ebx, *(arg1 + 0x138))
    sub_468ec0(ebx, *(arg1 + 0x13c))
    sub_468ec0(ebx, *(arg1 + 0x140))
    sub_468ec0(ebx, *(arg1 + 0x144))
    sub_468ec0(ebx, *(arg1 + 0x158))
    sub_468ec0(ebx, *(arg1 + 0x15c))
    sub_468ec0(ebx, *(arg1 + 0x160))
    sub_468ec0(ebx, *(arg1 + 0x164))
    sub_468ec0(ebx, *(arg1 + 0x168))
    sub_468ec0(ebx, *(arg1 + 0x170))
    int32_t* eax_4 = *(arg1 + 0x16c)
    int32_t* i = *eax_4
    
    if (i != eax_4)
        do
            int32_t eax_5 = edi_1[1]
            int32_t ebx_1 = i[4]
            char var_1a = ebx_1.b
            int32_t edx_1
            
            if (&var_1a u< eax_5)
                edx_1 = *edi_1
            
            if (&var_1a u>= eax_5 || edx_1 u> &var_1a)
                if (eax_5 == edi_1[2])
                    sub_403590(edi_1, 1)
                
                char* eax_7 = edi_1[1]
                
                if (eax_7 != 0)
                    *eax_7 = ebx_1.b
            else
                if (eax_5 == edi_1[2])
                    sub_403590(edi_1, 1)
                
                char* edx_2 = edi_1[1]
                
                if (edx_2 != 0)
                    int32_t eax_6
                    eax_6.b = *(&var_1a - edx_1 + *edi_1)
                    *edx_2 = eax_6.b
            
            edi_1[1] += 1
            int32_t ecx_59 = edi_1[1]
            uint32_t eax_9 = ebx_1 u>> 8
            char var_19 = eax_9.b
            char* ecx_62
            
            if (&var_19 u>= ecx_59 || *edi_1 u> &var_19)
                if (ecx_59 == edi_1[2])
                    sub_403590(edi_1, 1)
                
                ecx_62 = edi_1[1]
                
                if (ecx_62 != 0)
                    *ecx_62 = eax_9.b
            else
                void* edx_3 = &var_19 - *edi_1
                
                if (ecx_59 == edi_1[2])
                    sub_403590(edi_1, 1)
                
                ecx_62 = edi_1[1]
                
                if (ecx_62 != 0)
                    eax_9.b = *(edx_3 + *edi_1)
                    *ecx_62 = eax_9.b
            edi_1[1] += 1
            int32_t ecx_63 = edi_1[1]
            uint32_t eax_11 = ebx_1 u>> 0x10
            char var_18 = eax_11.b
            char* ecx_66
            
            if (&var_18 u>= ecx_63 || *edi_1 u> &var_18)
                if (ecx_63 == edi_1[2])
                    sub_403590(edi_1, 1)
                
                ecx_66 = edi_1[1]
                
                if (ecx_66 != 0)
                    *ecx_66 = eax_11.b
            else
                void* edx_4 = &var_18 - *edi_1
                
                if (ecx_63 == edi_1[2])
                    sub_403590(edi_1, 1)
                
                ecx_66 = edi_1[1]
                
                if (ecx_66 != 0)
                    eax_11.b = *(edx_4 + *edi_1)
                    *ecx_66 = eax_11.b
            edi_1[1] += 1
            int32_t eax_12 = edi_1[1]
            uint8_t ebx_2 = (ebx_1 u>> 0x18).b
            uint8_t var_17 = ebx_2
            int32_t ecx_67
            
            if (&var_17 u< eax_12)
                ecx_67 = *edi_1
            
            if (&var_17 u>= eax_12 || ecx_67 u> &var_17)
                if (eax_12 == edi_1[2])
                    sub_403590(edi_1, 1)
                
                uint8_t* eax_14 = edi_1[1]
                
                if (eax_14 != 0)
                    *eax_14 = ebx_2
            else
                if (eax_12 == edi_1[2])
                    sub_403590(edi_1, 1)
                
                char* ecx_69 = edi_1[1]
                
                if (ecx_69 != 0)
                    int32_t eax_13
                    eax_13.b = *(&var_17 - ecx_67 + *edi_1)
                    *ecx_69 = eax_13.b
            
            edi_1[1] += 1
            int32_t eax_15 = edi_1[1]
            int32_t ebx_4 = i[5]
            char var_16 = ebx_4.b
            int32_t edx_5
            
            if (&var_16 u< eax_15)
                edx_5 = *edi_1
            
            if (&var_16 u>= eax_15 || edx_5 u> &var_16)
                if (eax_15 == edi_1[2])
                    sub_403590(edi_1, 1)
                
                char* eax_17 = edi_1[1]
                
                if (eax_17 != 0)
                    *eax_17 = ebx_4.b
            else
                if (eax_15 == edi_1[2])
                    sub_403590(edi_1, 1)
                
                char* edx_6 = edi_1[1]
                
                if (edx_6 != 0)
                    int32_t eax_16
                    eax_16.b = *(&var_16 - edx_5 + *edi_1)
                    *edx_6 = eax_16.b
            
            edi_1[1] += 1
            int32_t ecx_74 = edi_1[1]
            uint32_t eax_19 = ebx_4 u>> 8
            char var_15 = eax_19.b
            char* ecx_77
            
            if (&var_15 u>= ecx_74 || *edi_1 u> &var_15)
                if (ecx_74 == edi_1[2])
                    sub_403590(edi_1, 1)
                
                ecx_77 = edi_1[1]
                
                if (ecx_77 != 0)
                    *ecx_77 = eax_19.b
            else
                void* edx_7 = &var_15 - *edi_1
                
                if (ecx_74 == edi_1[2])
                    sub_403590(edi_1, 1)
                
                ecx_77 = edi_1[1]
                
                if (ecx_77 != 0)
                    eax_19.b = *(edx_7 + *edi_1)
                    *ecx_77 = eax_19.b
            edi_1[1] += 1
            int32_t ecx_78 = edi_1[1]
            uint32_t eax_21 = ebx_4 u>> 0x10
            char var_14 = eax_21.b
            char* ecx_81
            
            if (&var_14 u>= ecx_78 || *edi_1 u> &var_14)
                if (ecx_78 == edi_1[2])
                    sub_403590(edi_1, 1)
                
                ecx_81 = edi_1[1]
                
                if (ecx_81 != 0)
                    *ecx_81 = eax_21.b
            else
                void* edx_8 = &var_14 - *edi_1
                
                if (ecx_78 == edi_1[2])
                    sub_403590(edi_1, 1)
                
                ecx_81 = edi_1[1]
                
                if (ecx_81 != 0)
                    eax_21.b = *(edx_8 + *edi_1)
                    *ecx_81 = eax_21.b
            edi_1[1] += 1
            int32_t eax_22 = edi_1[1]
            uint8_t ebx_5 = (ebx_4 u>> 0x18).b
            uint8_t var_13 = ebx_5
            char* ecx_82
            
            if (&var_13 u< eax_22)
                ecx_82 = *edi_1
            
            if (&var_13 u>= eax_22 || ecx_82 u> &var_13)
                if (eax_22 == edi_1[2])
                    sub_403590(edi_1, 1)
                
                uint8_t* eax_24 = edi_1[1]
                
                if (eax_24 != 0)
                    *eax_24 = ebx_5
            else
                char* ebx_6 = &var_13 - ecx_82
                
                if (eax_22 == edi_1[2])
                    sub_403590(edi_1, 1)
                
                ecx_82 = edi_1[1]
                
                if (ecx_82 != 0)
                    int32_t eax_23
                    eax_23.b = ebx_6[*edi_1]
                    *ecx_82 = eax_23.b
            
            edi_1[1] += 1
            
            if (*(i + 0xd) == 0)
                int32_t* i_1 = i[2]
                
                if (*(i_1 + 0xd) != 0)
                    int32_t* i_3 = i[1]
                    
                    if (*(i_3 + 0xd) == 0)
                        while (i == i_3[2])
                            i = i_3
                            i_3 = i_3[1]
                            
                            if (*(i_3 + 0xd) != 0)
                                break
                    
                    i = i_3
                else
                    i = i_1
                    int32_t* i_2 = *i
                    
                    while (*(i_2 + 0xd) == 0)
                        i = i_2
                        i_2 = *i
        while (i != *(arg1 + 0x16c))
        
        ebx = arg2
    
    uint32_t ecx_87 = *(arg1 + 0x174)
    int32_t eax_25 = edi_1[1]
    arg2 = ecx_87
    char var_12 = ecx_87.b
    int32_t edx_9
    
    if (&var_12 u< eax_25)
        edx_9 = *edi_1
    
    if (&var_12 u>= eax_25 || edx_9 u> &var_12)
        if (eax_25 == edi_1[2])
            sub_403590(edi_1, 1)
            ecx_87 = arg2
        
        char* eax_27 = edi_1[1]
        
        if (eax_27 != 0)
            *eax_27 = ecx_87.b
    else
        if (eax_25 == edi_1[2])
            sub_403590(edi_1, 1)
            ecx_87 = arg2
        
        char* edx_10 = edi_1[1]
        
        if (edx_10 != 0)
            int32_t eax_26
            eax_26.b = *(&var_12 - edx_9 + *edi_1)
            *edx_10 = eax_26.b
    
    edi_1[1] += 1
    int32_t edx_11 = edi_1[1]
    uint32_t eax_29 = ecx_87 u>> 8
    char var_11 = eax_29.b
    char* edx_12
    
    if (&var_11 u>= edx_11 || *edi_1 u> &var_11)
        if (edx_11 == edi_1[2])
            sub_403590(edi_1, 1)
            ecx_87 = arg2
        
        edx_12 = edi_1[1]
        
        if (edx_12 != 0)
            *edx_12 = eax_29.b
    else
        void* esi_2 = &var_11 - *edi_1
        
        if (edx_11 == edi_1[2])
            sub_403590(edi_1, 1)
            ecx_87 = arg2
        
        edx_12 = edi_1[1]
        
        if (edx_12 != 0)
            eax_29.b = *(esi_2 + *edi_1)
            *edx_12 = eax_29.b
    edi_1[1] += 1
    int32_t edx_13 = edi_1[1]
    uint32_t eax_31 = ecx_87 u>> 0x10
    char var_10 = eax_31.b
    char* edx_14
    
    if (&var_10 u>= edx_13 || *edi_1 u> &var_10)
        if (edx_13 == edi_1[2])
            sub_403590(edi_1, 1)
            ecx_87 = arg2
        
        edx_14 = edi_1[1]
        
        if (edx_14 != 0)
            *edx_14 = eax_31.b
    else
        void* esi_3 = &var_10 - *edi_1
        
        if (edx_13 == edi_1[2])
            sub_403590(edi_1, 1)
            ecx_87 = arg2
        
        edx_14 = edi_1[1]
        
        if (edx_14 != 0)
            eax_31.b = *(esi_3 + *edi_1)
            *edx_14 = eax_31.b
    edi_1[1] += 1
    int32_t eax_32 = edi_1[1]
    uint32_t ecx_93 = ecx_87 u>> 0x18
    arg2 = ecx_93
    char var_f = ecx_93.b
    int32_t edx_15
    
    if (&var_f u< eax_32)
        edx_15 = *edi_1
    
    if (&var_f u>= eax_32 || edx_15 u> &var_f)
        if (eax_32 == edi_1[2])
            sub_403590(edi_1, 1)
            ecx_93 = arg2
        
        char* eax_34 = edi_1[1]
        
        if (eax_34 != 0)
            *eax_34 = ecx_93.b
    else
        if (eax_32 == edi_1[2])
            sub_403590(edi_1, 1)
        
        char* ecx_95 = edi_1[1]
        
        if (ecx_95 != 0)
            int32_t eax_33
            eax_33.b = *(&var_f - edx_15 + *edi_1)
            *ecx_95 = eax_33.b
    
    edi_1[1] += 1
    uint32_t ecx_97 = *(arg1 + 0x178)
    int32_t eax_35 = edi_1[1]
    arg2 = ecx_97
    char var_e = ecx_97.b
    int32_t edx_16
    
    if (&var_e u< eax_35)
        edx_16 = *edi_1
    
    if (&var_e u>= eax_35 || edx_16 u> &var_e)
        if (eax_35 == edi_1[2])
            sub_403590(edi_1, 1)
            ecx_97 = arg2
        
        char* eax_37 = edi_1[1]
        
        if (eax_37 != 0)
            *eax_37 = ecx_97.b
    else
        if (eax_35 == edi_1[2])
            sub_403590(edi_1, 1)
            ecx_97 = arg2
        
        char* edx_17 = edi_1[1]
        
        if (edx_17 != 0)
            int32_t eax_36
            eax_36.b = *(&var_e - edx_16 + *edi_1)
            *edx_17 = eax_36.b
    
    edi_1[1] += 1
    int32_t edx_18 = edi_1[1]
    uint32_t eax_39 = ecx_97 u>> 8
    char var_d = eax_39.b
    char* edx_19
    
    if (&var_d u>= edx_18 || *edi_1 u> &var_d)
        if (edx_18 == edi_1[2])
            sub_403590(edi_1, 1)
            ecx_97 = arg2
        
        edx_19 = edi_1[1]
        
        if (edx_19 != 0)
            *edx_19 = eax_39.b
    else
        void* esi_6 = &var_d - *edi_1
        
        if (edx_18 == edi_1[2])
            sub_403590(edi_1, 1)
            ecx_97 = arg2
        
        edx_19 = edi_1[1]
        
        if (edx_19 != 0)
            eax_39.b = *(esi_6 + *edi_1)
            *edx_19 = eax_39.b
    edi_1[1] += 1
    int32_t edx_20 = edi_1[1]
    uint32_t eax_41 = ecx_97 u>> 0x10
    char var_c = eax_41.b
    char* edx_21
    
    if (&var_c u>= edx_20 || *edi_1 u> &var_c)
        if (edx_20 == edi_1[2])
            sub_403590(edi_1, 1)
            ecx_97 = arg2
        
        edx_21 = edi_1[1]
        
        if (edx_21 != 0)
            *edx_21 = eax_41.b
    else
        void* esi_7 = &var_c - *edi_1
        
        if (edx_20 == edi_1[2])
            sub_403590(edi_1, 1)
            ecx_97 = arg2
        
        edx_21 = edi_1[1]
        
        if (edx_21 != 0)
            eax_41.b = *(esi_7 + *edi_1)
            *edx_21 = eax_41.b
    edi_1[1] += 1
    int32_t eax_42 = edi_1[1]
    uint32_t ecx_104 = ecx_97 u>> 0x18
    arg2 = ecx_104
    char var_b = ecx_104.b
    int32_t edx_22
    
    if (&var_b u< eax_42)
        edx_22 = *edi_1
    
    if (&var_b u>= eax_42 || edx_22 u> &var_b)
        if (eax_42 == edi_1[2])
            sub_403590(edi_1, 1)
            ecx_104 = arg2
        
        char* eax_44 = edi_1[1]
        
        if (eax_44 != 0)
            *eax_44 = ecx_104.b
    else
        if (eax_42 == edi_1[2])
            sub_403590(edi_1, 1)
        
        char* ecx_106 = edi_1[1]
        
        if (ecx_106 != 0)
            int32_t eax_43
            eax_43.b = *(&var_b - edx_22 + *edi_1)
            *ecx_106 = eax_43.b
    
    edi_1[1] += 1
    uint32_t ecx_108 = *(arg1 + 0x17c)
    int32_t eax_45 = edi_1[1]
    arg2 = ecx_108
    char var_a = ecx_108.b
    int32_t edx_23
    
    if (&var_a u< eax_45)
        edx_23 = *edi_1
    
    if (&var_a u>= eax_45 || edx_23 u> &var_a)
        if (eax_45 == edi_1[2])
            sub_403590(edi_1, 1)
            ecx_108 = arg2
        
        char* eax_47 = edi_1[1]
        
        if (eax_47 != 0)
            *eax_47 = ecx_108.b
    else
        if (eax_45 == edi_1[2])
            sub_403590(edi_1, 1)
            ecx_108 = arg2
        
        char* edx_24 = edi_1[1]
        
        if (edx_24 != 0)
            int32_t eax_46
            eax_46.b = *(&var_a - edx_23 + *edi_1)
            *edx_24 = eax_46.b
    
    edi_1[1] += 1
    int32_t edx_25 = edi_1[1]
    uint32_t eax_49 = ecx_108 u>> 8
    char var_9 = eax_49.b
    char* edx_26
    
    if (&var_9 u>= edx_25 || *edi_1 u> &var_9)
        if (edx_25 == edi_1[2])
            sub_403590(edi_1, 1)
            ecx_108 = arg2
        
        edx_26 = edi_1[1]
        
        if (edx_26 != 0)
            *edx_26 = eax_49.b
    else
        void* esi_10 = &var_9 - *edi_1
        
        if (edx_25 == edi_1[2])
            sub_403590(edi_1, 1)
            ecx_108 = arg2
        
        edx_26 = edi_1[1]
        
        if (edx_26 != 0)
            eax_49.b = *(esi_10 + *edi_1)
            *edx_26 = eax_49.b
    edi_1[1] += 1
    int32_t edx_27 = edi_1[1]
    uint32_t eax_51 = ecx_108 u>> 0x10
    char var_8 = eax_51.b
    char* edx_28
    
    if (&var_8 u>= edx_27 || *edi_1 u> &var_8)
        if (edx_27 == edi_1[2])
            sub_403590(edi_1, 1)
            ecx_108 = arg2
        
        edx_28 = edi_1[1]
        
        if (edx_28 != 0)
            *edx_28 = eax_51.b
    else
        void* esi_11 = &var_8 - *edi_1
        
        if (edx_27 == edi_1[2])
            sub_403590(edi_1, 1)
            ecx_108 = arg2
        
        edx_28 = edi_1[1]
        
        if (edx_28 != 0)
            eax_51.b = *(esi_11 + *edi_1)
            *edx_28 = eax_51.b
    edi_1[1] += 1
    int32_t eax_52 = edi_1[1]
    uint32_t ecx_115 = ecx_108 u>> 0x18
    arg2 = ecx_115
    char var_7 = ecx_115.b
    int32_t edx_29
    
    if (&var_7 u< eax_52)
        edx_29 = *edi_1
    
    if (&var_7 u>= eax_52 || edx_29 u> &var_7)
        if (eax_52 == edi_1[2])
            sub_403590(edi_1, 1)
            ecx_115 = arg2
        
        char* eax_54 = edi_1[1]
        
        if (eax_54 != 0)
            *eax_54 = ecx_115.b
    else
        if (eax_52 == edi_1[2])
            sub_403590(edi_1, 1)
        
        char* ecx_117 = edi_1[1]
        
        if (ecx_117 != 0)
            int32_t eax_53
            eax_53.b = *(&var_7 - edx_29 + *edi_1)
            *ecx_117 = eax_53.b
    
    edi_1[1] += 1
    int32_t ecx_119 = *(arg1 + 0x180)
    int32_t eax_55 = edi_1[1]
    int32_t var_4_56 = ecx_119
    char var_6 = ecx_119.b
    int32_t edx_30
    
    if (&var_6 u< eax_55)
        edx_30 = *edi_1
    
    if (&var_6 u>= eax_55 || edx_30 u> &var_6)
        if (eax_55 == edi_1[2])
            sub_403590(edi_1, 1)
            ecx_119 = var_4_56
        
        char* eax_57 = edi_1[1]
        
        if (eax_57 != 0)
            *eax_57 = ecx_119.b
    else
        if (eax_55 == edi_1[2])
            sub_403590(edi_1, 1)
            ecx_119 = var_4_56
        
        char* edx_31 = edi_1[1]
        
        if (edx_31 != 0)
            int32_t eax_56
            eax_56.b = *(&var_6 - edx_30 + *edi_1)
            *edx_31 = eax_56.b
    
    edi_1[1] += 1
    arg2.b = (ecx_119 u>> 8).b
    sub_414b60(edi_1, &arg2)
    arg2.b = (var_4_56 u>> 0x10).b
    sub_414b60(edi_1, &arg2)
    arg2.b = (var_4_56 u>> 0x18).b
    sub_414b60(edi_1, &arg2)
    sub_468ec0(ebx, *(arg1 + 0x184))
    sub_468ec0(ebx, *(arg1 + 0x188))
    sub_468ec0(ebx, *(arg1 + 0x18c))
    sub_468ec0(ebx, *(arg1 + 0x190))
    sub_468ec0(ebx, *(arg1 + 0x194))
    sub_468ec0(ebx, *(arg1 + 0x198))
    sub_468ec0(ebx, *(arg1 + 0x1ac))
    sub_468ec0(ebx, *(arg1 + 0x1b0))
    char eax
    int32_t ecx_134
    eax, ecx_134 = sub_5477d0(*(arg1 + 0x1b4), ebx)
    
    if (eax != 0)
        sub_589dd0(ecx_134, ebx, arg1 + 0x1b8)
        int32_t ecx_136
        eax, ecx_136 = sub_5274e0(arg1 + 0x1e4, ebx)
        
        if (eax != 0)
            sub_589dd0(ecx_136, ebx, arg1 + 0x1f4)
            char* result
            result.b = 1
            return result

return 0
