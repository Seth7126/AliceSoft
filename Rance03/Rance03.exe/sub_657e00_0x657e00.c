// 函数: sub_657e00
// 地址: 0x657e00
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6cf59b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_100
int32_t eax_2 = __security_cookie ^ &var_100
void* ebx
void* var_104 = ebx
int32_t __saved_edi
int32_t var_114 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ecx = arg3
int32_t ebp = 0
int32_t* var_f0 = ecx
int32_t result = (ecx[1] - *ecx) s>> 2
int32_t result_1 = result

if (result s> 0)
    do
        void* edi_1 = data_75d4fc
        int32_t esi_1 = *(*ecx + (ebp << 2))
        char eax_9
        
        if (esi_1 s> 0)
            int32_t var_118_1 = esi_1
            eax_9 = sub_4a55e0(edi_1 + 0x178)
        
        struct partsengine::CPartsList::VTable** vFunc_0_1
        
        if (esi_1 s<= 0 || eax_9 == 0)
            vFunc_0_1 = nullptr
        else
            int32_t var_118_2 = esi_1
            struct partsengine::CPartsList::VTable** eax_10 = sub_4a52a0(edi_1 + 0x178)
            
            if (eax_10 == 0)
                edi_1 = data_75d4fc
                vFunc_0_1 = 0xffffffff
            else
                int32_t eax_11 = eax_10[2]
                struct IInterface::VTable** vFunc_0
                
                if (esi_1 s< eax_11 || eax_10[1] + eax_11 s<= esi_1)
                    vFunc_0 = nullptr
                label_657ecb:
                    
                    if (vFunc_0 != 0)
                        goto label_657ecf
                    
                    edi_1 = data_75d4fc
                    vFunc_0_1 = 0xffffffff
                else
                    vFunc_0 = eax_10[3][esi_1 - eax_11].vFunc_0
                    
                    if (vFunc_0 == 0)
                        vFunc_0 = sub_4e7720(eax_10, esi_1)
                        goto label_657ecb
                    
                label_657ecf:
                    int32_t* ecx_8 = vFunc_0[0x17]
                    
                    if (ecx_8 == 0)
                        edi_1 = data_75d4fc
                        vFunc_0_1 = 0xffffffff
                    else
                        vFunc_0_1 = (*(*ecx_8 + 8))(1)
                        edi_1 = data_75d4fc
        
        struct partsengine::CPartsList::VTable** vFunc_0_16 = vFunc_0_1
        
        if (esi_1 s<= 0)
            vFunc_0_1.b = 0
        else
            int32_t var_118_4 = esi_1
            
            if (sub_4a55e0(edi_1 + 0x178).b == 0)
                vFunc_0_1.b = 0
            else
                int32_t var_118_5 = esi_1
                struct partsengine::CPartsList::VTable** edx_2 = sub_4a52a0(edi_1 + 0x178)
                
                if (edx_2 == 0)
                    vFunc_0_1.b = 0
                else
                    int32_t eax_14 = edx_2[2]
                    
                    if (esi_1 s< eax_14 || edx_2[1] + eax_14 s<= esi_1)
                        vFunc_0_1 = nullptr
                    label_657f46:
                        
                        if (vFunc_0_1 == 0)
                            vFunc_0_1.b = 0
                        else
                            vFunc_0_1.b = vFunc_0_1[0x23].b
                    else
                        vFunc_0_1 = edx_2[3][esi_1 - eax_14].vFunc_0
                        
                        if (vFunc_0_1 == 0)
                            vFunc_0_1 = sub_4e7720(edx_2, esi_1)
                            goto label_657f46
                        
                        vFunc_0_1.b = vFunc_0_1[0x23].b
        
        ebx.b = vFunc_0_1.b != 0
        int32_t* ecx_17
        
        if (ebx.b == 0)
            ecx_17 = arg1 + 0x328
        else
            ecx_17 = arg1 + 0x320
        
        void* eax_16 = sub_42f350(ecx_17, &vFunc_0_16)
        *eax_16 += 1
        result = arg1
        
        if (*(result + 0x2c0) == 0 || ebx.b != 0)
            int32_t var_d0
            sub_6547e0(&var_d0)
            int32_t var_4 = 0
            void* edi_2 = data_75d4fc
            struct partsengine::CPartsList::VTable** vFunc_0_17 = vFunc_0_16
            var_d0 = esi_1
            uint32_t var_94_1 = zx.d(ebx.b)
            char eax_19
            
            if (esi_1 s> 0)
                int32_t var_118_8 = esi_1
                eax_19 = sub_4a55e0(edi_2 + 0x178)
            
            int32_t eax_23
            
            if (esi_1 s<= 0 || eax_19 == 0)
                eax_23 = 0
            else
                int32_t var_118_9 = esi_1
                struct partsengine::CPartsList::VTable** eax_20 = sub_4a52a0(edi_2 + 0x178)
                
                if (eax_20 == 0)
                    edi_2 = data_75d4fc
                    eax_23 = int.d(0f)
                else
                    int32_t eax_21 = eax_20[2]
                    struct IInterface::VTable** vFunc_0_2
                    
                    if (esi_1 s< eax_21 || eax_20[1] + eax_21 s<= esi_1)
                        vFunc_0_2 = nullptr
                    label_658010:
                        
                        if (vFunc_0_2 == 0)
                            edi_2 = data_75d4fc
                            eax_23 = int.d(0f)
                        else
                            edi_2 = data_75d4fc
                            eax_23 =
                                int.d(_mm_cvtepi32_ps(zx.o(vFunc_0_2[0x5f])) f+ vFunc_0_2[0x1f])
                    else
                        vFunc_0_2 = eax_20[3][esi_1 - eax_21].vFunc_0
                        
                        if (vFunc_0_2 == 0)
                            vFunc_0_2 = sub_4e7720(eax_20, esi_1)
                            goto label_658010
                        
                        edi_2 = data_75d4fc
                        eax_23 = int.d(_mm_cvtepi32_ps(zx.o(vFunc_0_2[0x5f])) f+ vFunc_0_2[0x1f])
            
            int32_t var_c8_1 = eax_23
            char eax_24
            
            if (esi_1 s> 0)
                int32_t var_118_11 = esi_1
                eax_24 = sub_4a55e0(edi_2 + 0x178)
            
            int32_t eax_28
            
            if (esi_1 s<= 0 || eax_24 == 0)
                eax_28 = 0
            else
                int32_t var_118_12 = esi_1
                struct partsengine::CPartsList::VTable** eax_25 = sub_4a52a0(edi_2 + 0x178)
                
                if (eax_25 == 0)
                    edi_2 = data_75d4fc
                    eax_28 = int.d(0f)
                else
                    int32_t eax_26 = eax_25[2]
                    struct IInterface::VTable** vFunc_0_3
                    
                    if (esi_1 s< eax_26 || eax_25[1] + eax_26 s<= esi_1)
                        vFunc_0_3 = nullptr
                    label_658099:
                        
                        if (vFunc_0_3 == 0)
                            edi_2 = data_75d4fc
                            eax_28 = int.d(0f)
                        else
                            edi_2 = data_75d4fc
                            eax_28 =
                                int.d(_mm_cvtepi32_ps(zx.o(vFunc_0_3[0x60])) f+ vFunc_0_3[0x20])
                    else
                        vFunc_0_3 = eax_25[3][esi_1 - eax_26].vFunc_0
                        
                        if (vFunc_0_3 == 0)
                            vFunc_0_3 = sub_4e7720(eax_25, esi_1)
                            goto label_658099
                        
                        edi_2 = data_75d4fc
                        eax_28 = int.d(_mm_cvtepi32_ps(zx.o(vFunc_0_3[0x60])) f+ vFunc_0_3[0x20])
            
            int32_t var_c4_1 = eax_28
            char eax_29
            
            if (esi_1 s> 0)
                int32_t var_118_14 = esi_1
                eax_29 = sub_4a55e0(edi_2 + 0x178)
            
            int32_t eax_33
            
            if (esi_1 s<= 0 || eax_29 == 0)
                eax_33 = 0
            else
                int32_t var_118_15 = esi_1
                struct partsengine::CPartsList::VTable** eax_30 = sub_4a52a0(edi_2 + 0x178)
                
                if (eax_30 == 0)
                    edi_2 = data_75d4fc
                    eax_33 = 0
                else
                    int32_t eax_31 = eax_30[2]
                    struct IInterface::VTable** vFunc_0_4
                    
                    if (esi_1 s< eax_31 || eax_30[1] + eax_31 s<= esi_1)
                        vFunc_0_4 = nullptr
                    label_658121:
                        
                        if (vFunc_0_4 == 0)
                            edi_2 = data_75d4fc
                            eax_33 = 0
                        else
                            eax_33 = vFunc_0_4[0x21]
                            edi_2 = data_75d4fc
                    else
                        vFunc_0_4 = eax_30[3][esi_1 - eax_31].vFunc_0
                        
                        if (vFunc_0_4 == 0)
                            vFunc_0_4 = sub_4e7720(eax_30, esi_1)
                            goto label_658121
                        
                        eax_33 = vFunc_0_4[0x21]
                        edi_2 = data_75d4fc
            
            int32_t var_b0_1 = eax_33
            char eax_34
            
            if (esi_1 s> 0)
                int32_t var_118_17 = esi_1
                eax_34 = sub_4a55e0(edi_2 + 0x178)
            
            int32_t eax_39
            
            if (esi_1 s<= 0 || eax_34 == 0)
                eax_39 = 0
            else
                int32_t var_118_18 = esi_1
                struct partsengine::CPartsList::VTable** eax_35 = sub_4a52a0(edi_2 + 0x178)
                
                if (eax_35 == 0)
                    edi_2 = data_75d4fc
                    eax_39 = 0
                else
                    int32_t eax_36 = eax_35[2]
                    struct IInterface::VTable** vFunc_0_5
                    
                    if (esi_1 s< eax_36 || eax_35[1] + eax_36 s<= esi_1)
                        vFunc_0_5 = nullptr
                    label_658193:
                        
                        if (vFunc_0_5 == 0)
                            edi_2 = data_75d4fc
                            eax_39 = 0
                        else
                            eax_39 = (*(vFunc_0_5[0x17]->vFunc_0 + 0x28))(1)
                            edi_2 = data_75d4fc
                    else
                        vFunc_0_5 = eax_35[3][esi_1 - eax_36].vFunc_0
                        
                        if (vFunc_0_5 == 0)
                            vFunc_0_5 = sub_4e7720(eax_35, esi_1)
                            goto label_658193
                        
                        eax_39 = (*(vFunc_0_5[0x17]->vFunc_0 + 0x28))(1)
                        edi_2 = data_75d4fc
            
            int32_t var_c0_1 = eax_39
            char eax_40
            
            if (esi_1 s> 0)
                int32_t var_118_20 = esi_1
                eax_40 = sub_4a55e0(edi_2 + 0x178)
            
            int32_t eax_45
            
            if (esi_1 s<= 0 || eax_40 == 0)
                eax_45 = 0
            else
                int32_t var_118_21 = esi_1
                struct partsengine::CPartsList::VTable** eax_41 = sub_4a52a0(edi_2 + 0x178)
                
                if (eax_41 == 0)
                    edi_2 = data_75d4fc
                    eax_45 = 0
                else
                    int32_t eax_42 = eax_41[2]
                    struct IInterface::VTable** vFunc_0_6
                    
                    if (esi_1 s< eax_42 || eax_41[1] + eax_42 s<= esi_1)
                        vFunc_0_6 = nullptr
                    label_658209:
                        
                        if (vFunc_0_6 == 0)
                            edi_2 = data_75d4fc
                            eax_45 = 0
                        else
                            eax_45 = (*(vFunc_0_6[0x17]->vFunc_0 + 0x2c))(1)
                            edi_2 = data_75d4fc
                    else
                        vFunc_0_6 = eax_41[3][esi_1 - eax_42].vFunc_0
                        
                        if (vFunc_0_6 == 0)
                            vFunc_0_6 = sub_4e7720(eax_41, esi_1)
                            goto label_658209
                        
                        eax_45 = (*(vFunc_0_6[0x17]->vFunc_0 + 0x2c))(1)
                        edi_2 = data_75d4fc
            
            int32_t var_bc_1 = eax_45
            char eax_46
            
            if (esi_1 s> 0)
                int32_t var_118_23 = esi_1
                eax_46 = sub_4a55e0(edi_2 + 0x178)
            
            int32_t eax_50
            
            if (esi_1 s<= 0 || eax_46 == 0)
                eax_50 = 0
            else
                int32_t var_118_24 = esi_1
                struct partsengine::CPartsList::VTable** eax_47 = sub_4a52a0(edi_2 + 0x178)
                
                if (eax_47 == 0)
                    edi_2 = data_75d4fc
                    eax_50 = 0
                else
                    int32_t eax_48 = eax_47[2]
                    struct IInterface::VTable** vFunc_0_7
                    
                    if (esi_1 s< eax_48 || eax_47[1] + eax_48 s<= esi_1)
                        vFunc_0_7 = nullptr
                    label_65827f:
                        
                        if (vFunc_0_7 == 0)
                            edi_2 = data_75d4fc
                            eax_50 = 0
                        else
                            eax_50 = vFunc_0_7[0x24]
                            edi_2 = data_75d4fc
                    else
                        vFunc_0_7 = eax_47[3][esi_1 - eax_48].vFunc_0
                        
                        if (vFunc_0_7 == 0)
                            vFunc_0_7 = sub_4e7720(eax_47, esi_1)
                            goto label_65827f
                        
                        eax_50 = vFunc_0_7[0x24]
                        edi_2 = data_75d4fc
            
            int32_t var_b4_1 = eax_50
            int32_t* eax_81
            
            if (esi_1 s<= 0)
                eax_81 = nullptr
            else
                int32_t var_118_26 = esi_1
                
                if (sub_4a55e0(edi_2 + 0x178) != 0)
                    int32_t var_118_27 = esi_1
                    struct partsengine::CPartsList::VTable** eax_52 = sub_4a52a0(edi_2 + 0x178)
                    int32_t eax_55
                    
                    if (eax_52 == 0)
                        eax_55 = 0
                    else
                        int32_t eax_53 = eax_52[2]
                        struct IInterface::VTable** vFunc_0_8
                        
                        if (esi_1 s< eax_53 || eax_52[1] + eax_53 s<= esi_1)
                            vFunc_0_8 = nullptr
                        label_6582f9:
                            
                            if (vFunc_0_8 == 0)
                                eax_55 = 0
                            else
                                eax_55 = vFunc_0_8[0x26]
                        else
                            vFunc_0_8 = eax_52[3][esi_1 - eax_53].vFunc_0
                            
                            if (vFunc_0_8 == 0)
                                vFunc_0_8 = sub_4e7720(eax_52, esi_1)
                                goto label_6582f9
                            
                            eax_55 = vFunc_0_8[0x26]
                    
                    int32_t var_118_29 = esi_1
                    int32_t var_ac_1 = eax_55
                    struct partsengine::CPartsList::VTable** eax_56 =
                        sub_4a52a0(data_75d4fc + 0x178)
                    int32_t eax_59
                    
                    if (eax_56 == 0)
                        eax_59 = 0
                    else
                        int32_t eax_57 = eax_56[2]
                        struct IInterface::VTable** vFunc_0_9
                        
                        if (esi_1 s< eax_57 || eax_56[1] + eax_57 s<= esi_1)
                            vFunc_0_9 = nullptr
                        label_65834d:
                            
                            if (vFunc_0_9 == 0)
                                eax_59 = 0
                            else
                                eax_59 = vFunc_0_9[0x27]
                        else
                            vFunc_0_9 = eax_56[3][esi_1 - eax_57].vFunc_0
                            
                            if (vFunc_0_9 == 0)
                                vFunc_0_9 = sub_4e7720(eax_56, esi_1)
                                goto label_65834d
                            
                            eax_59 = vFunc_0_9[0x27]
                    
                    int32_t var_118_31 = esi_1
                    int32_t var_a8_1 = eax_59
                    struct partsengine::CPartsList::VTable** eax_60 =
                        sub_4a52a0(data_75d4fc + 0x178)
                    int32_t eax_63
                    
                    if (eax_60 == 0)
                        eax_63 = 0
                    else
                        int32_t eax_61 = eax_60[2]
                        struct IInterface::VTable** vFunc_0_10
                        
                        if (esi_1 s< eax_61 || eax_60[1] + eax_61 s<= esi_1)
                            vFunc_0_10 = nullptr
                        label_6583a1:
                            
                            if (vFunc_0_10 == 0)
                                eax_63 = 0
                            else
                                eax_63 = vFunc_0_10[0x28]
                        else
                            vFunc_0_10 = eax_60[3][esi_1 - eax_61].vFunc_0
                            
                            if (vFunc_0_10 == 0)
                                vFunc_0_10 = sub_4e7720(eax_60, esi_1)
                                goto label_6583a1
                            
                            eax_63 = vFunc_0_10[0x28]
                    
                    edi_2 = data_75d4fc
                    int32_t var_a4_1 = eax_63
                
                int32_t var_118_33 = esi_1
                
                if (sub_4a55e0(edi_2 + 0x178) != 0)
                    int32_t var_118_34 = esi_1
                    struct partsengine::CPartsList::VTable** eax_65 = sub_4a52a0(edi_2 + 0x178)
                    int32_t eax_68
                    
                    if (eax_65 == 0)
                        eax_68 = 0
                    else
                        int32_t eax_66 = eax_65[2]
                        struct IInterface::VTable** vFunc_0_11
                        
                        if (esi_1 s< eax_66 || eax_65[1] + eax_66 s<= esi_1)
                            vFunc_0_11 = nullptr
                        label_658409:
                            
                            if (vFunc_0_11 == 0)
                                eax_68 = 0
                            else
                                eax_68 = vFunc_0_11[0x29]
                        else
                            vFunc_0_11 = eax_65[3][esi_1 - eax_66].vFunc_0
                            
                            if (vFunc_0_11 == 0)
                                vFunc_0_11 = sub_4e7720(eax_65, esi_1)
                                goto label_658409
                            
                            eax_68 = vFunc_0_11[0x29]
                    
                    int32_t var_118_36 = esi_1
                    int32_t var_a0_1 = eax_68
                    struct partsengine::CPartsList::VTable** eax_69 =
                        sub_4a52a0(data_75d4fc + 0x178)
                    int32_t eax_72
                    
                    if (eax_69 == 0)
                        eax_72 = 0
                    else
                        int32_t eax_70 = eax_69[2]
                        struct IInterface::VTable** vFunc_0_12
                        
                        if (esi_1 s< eax_70 || eax_69[1] + eax_70 s<= esi_1)
                            vFunc_0_12 = nullptr
                        label_65845d:
                            
                            if (vFunc_0_12 == 0)
                                eax_72 = 0
                            else
                                eax_72 = vFunc_0_12[0x2a]
                        else
                            vFunc_0_12 = eax_69[3][esi_1 - eax_70].vFunc_0
                            
                            if (vFunc_0_12 == 0)
                                vFunc_0_12 = sub_4e7720(eax_69, esi_1)
                                goto label_65845d
                            
                            eax_72 = vFunc_0_12[0x2a]
                    
                    int32_t var_118_38 = esi_1
                    int32_t var_9c_1 = eax_72
                    struct partsengine::CPartsList::VTable** eax_73 =
                        sub_4a52a0(data_75d4fc + 0x178)
                    int32_t eax_76
                    
                    if (eax_73 == 0)
                        eax_76 = 0
                    else
                        int32_t eax_74 = eax_73[2]
                        struct IInterface::VTable** vFunc_0_13
                        
                        if (esi_1 s< eax_74 || eax_73[1] + eax_74 s<= esi_1)
                            vFunc_0_13 = nullptr
                        label_6584b1:
                            
                            if (vFunc_0_13 == 0)
                                eax_76 = 0
                            else
                                eax_76 = vFunc_0_13[0x2b]
                        else
                            vFunc_0_13 = eax_73[3][esi_1 - eax_74].vFunc_0
                            
                            if (vFunc_0_13 == 0)
                                vFunc_0_13 = sub_4e7720(eax_73, esi_1)
                                goto label_6584b1
                            
                            eax_76 = vFunc_0_13[0x2b]
                    
                    edi_2 = data_75d4fc
                    int32_t var_98_1 = eax_76
                
                int32_t var_118_40 = esi_1
                
                if (sub_4a55e0(edi_2 + 0x178) == 0)
                    eax_81 = nullptr
                else
                    int32_t var_118_41 = esi_1
                    struct partsengine::CPartsList::VTable** eax_78 = sub_4a52a0(edi_2 + 0x178)
                    
                    if (eax_78 == 0)
                        edi_2 = data_75d4fc
                        eax_81 = nullptr
                    else
                        int32_t eax_79 = eax_78[2]
                        struct IInterface::VTable** vFunc_0_14
                        
                        if (esi_1 s< eax_79 || eax_78[1] + eax_79 s<= esi_1)
                            vFunc_0_14 = nullptr
                        label_658515:
                            
                            if (vFunc_0_14 == 0)
                                edi_2 = data_75d4fc
                                eax_81 = nullptr
                            else
                                eax_81 = vFunc_0_14[0x2c]
                                edi_2 = data_75d4fc
                        else
                            vFunc_0_14 = eax_78[3][esi_1 - eax_79].vFunc_0
                            
                            if (vFunc_0_14 == 0)
                                vFunc_0_14 = sub_4e7720(eax_78, esi_1)
                                goto label_658515
                            
                            eax_81 = vFunc_0_14[0x2c]
                            edi_2 = data_75d4fc
            
            int32_t* var_90_1 = eax_81
            
            if (esi_1 s<= 0)
                eax_81.b = 0
            else
                int32_t var_118_43 = esi_1
                
                if (sub_4a55e0(edi_2 + 0x178).b == 0)
                    eax_81.b = 0
                else
                    int32_t var_118_44 = esi_1
                    
                    if (sub_4a55e0(edi_2 + 0x178).b == 0)
                        eax_81.b = 0
                    else
                        int32_t var_118_45 = esi_1
                        
                        if (sub_4a55e0(edi_2 + 0x178) != 0)
                            eax_81 = sub_4f0040(esi_1, 1)
                            edi_2 = data_75d4fc
                        else
                            eax_81 = nullptr
                        
                        eax_81.b = eax_81 s> 0xa
                        
                        if (eax_81.b == 0)
                            eax_81.b = 0
                        else
                            eax_81 = sub_4f32c0(esi_1)
                            edi_2 = data_75d4fc
            
            char var_8c_1 = eax_81.b
            
            if (esi_1 s<= 0)
                eax_81.b = 0
            else
                int32_t var_118_46 = esi_1
                
                if (sub_4a55e0(edi_2 + 0x178).b == 0)
                    eax_81.b = 0
                else
                    int32_t var_118_47 = esi_1
                    
                    if (sub_4a55e0(edi_2 + 0x178).b == 0)
                        eax_81.b = 0
                    else
                        int32_t var_118_48 = esi_1
                        
                        if (sub_4a55e0(edi_2 + 0x178) != 0)
                            eax_81 = sub_4f0040(esi_1, 1)
                            edi_2 = data_75d4fc
                        else
                            eax_81 = nullptr
                        
                        eax_81.b = eax_81 s> 0xa
                        
                        if (eax_81.b == 0)
                            eax_81.b = 0
                        else
                            eax_81 = sub_4f3390(esi_1)
                            edi_2 = data_75d4fc
            
            char var_8b_1 = eax_81.b
            char eax_84
            
            if (esi_1 s> 0)
                int32_t var_118_49 = esi_1
                eax_84 = sub_4a55e0(edi_2 + 0x178)
            
            int32_t eax_88
            
            if (esi_1 s<= 0 || eax_84 == 0)
                eax_88 = 0
            else
                int32_t var_118_50 = esi_1
                struct partsengine::CPartsList::VTable** eax_85 = sub_4a52a0(edi_2 + 0x178)
                
                if (eax_85 == 0)
                    edi_2 = data_75d4fc
                    eax_88 = 1
                else
                    int32_t eax_86 = eax_85[2]
                    struct IInterface::VTable** vFunc_0_15
                    
                    if (esi_1 s< eax_86 || eax_85[1] + eax_86 s<= esi_1)
                        vFunc_0_15 = nullptr
                    label_658656:
                        
                        if (vFunc_0_15 == 0)
                            edi_2 = data_75d4fc
                            eax_88 = 1
                        else
                            eax_88 = vFunc_0_15[0x22]
                            edi_2 = data_75d4fc
                    else
                        vFunc_0_15 = eax_85[3][esi_1 - eax_86].vFunc_0
                        
                        if (vFunc_0_15 == 0)
                            vFunc_0_15 = sub_4e7720(eax_85, esi_1)
                            goto label_658656
                        
                        eax_88 = vFunc_0_15[0x22]
                        edi_2 = data_75d4fc
            
            int32_t var_88_1 = eax_88
            char eax_89
            
            if (esi_1 s> 0)
                int32_t var_118_52 = esi_1
                eax_89 = sub_4a55e0(edi_2 + 0x178)
            
            int32_t* eax_90
            
            if (esi_1 s<= 0 || eax_89 == 0)
                eax_90 = nullptr
            else
                eax_90 = sub_4f1860(esi_1)
                edi_2 = data_75d4fc
            
            int32_t* var_84_1 = eax_90
            
            if (esi_1 s> 0)
                int32_t var_118_53 = esi_1
                eax_90 = sub_4a55e0(edi_2 + 0x178)
            
            if (esi_1 s<= 0 || eax_90.b == 0)
                eax_90.b = 0
            else
                eax_90 = sub_4f0b40(esi_1)
            
            char var_80_1 = eax_90.b
            int32_t var_e8
            char* eax_91 = sub_673990(&var_e8, esi_1)
            char var_7c
            
            if (&var_7c != eax_91)
                int32_t var_68
                
                if (var_68 u>= 0x10)
                    j__free(var_7c.d)
                
                var_68 = 0xf
                int32_t var_6c_1 = 0
                var_7c = 0
                sub_4030b0(&var_7c, eax_91)
            
            int32_t var_d4
            
            if (var_d4 u>= 0x10)
                j__free(var_e8)
            
            char* eax_92 = sub_673a90(&var_e8, esi_1)
            char var_64
            
            if (&var_64 != eax_92)
                int32_t var_50
                
                if (var_50 u>= 0x10)
                    j__free(var_64.d)
                
                var_50 = 0xf
                int32_t var_54_1 = 0
                var_64 = 0
                sub_4030b0(&var_64, eax_92)
            
            if (var_d4 u>= 0x10)
                j__free(var_e8)
            
            var_d4 = 0xf
            int32_t var_d8_1 = 0
            var_e8.b = 0
            char eax_93
            
            if (esi_1 s> 0)
                int32_t var_118_62 = esi_1
                eax_93 = sub_4a55e0(data_75d4fc + 0x178)
            
            int32_t* eax_94
            
            if (esi_1 s<= 0 || eax_93 == 0)
                eax_94 = nullptr
            else
                eax_94 = sub_4f1770(esi_1)
            
            int32_t* var_4c_1 = eax_94
            
            if (esi_1 s<= 0)
                eax_94.b = 0
            else
                int32_t var_118_63 = esi_1
                
                if (sub_4a55e0(data_75d4fc + 0x178).b == 0)
                    eax_94.b = 0
                else if (sub_673930(esi_1).b == 0)
                    eax_94.b = 0
                else
                    eax_94 = sub_4f3820(esi_1)
            
            char var_48_1 = eax_94.b
            char eax_96
            
            if (esi_1 s> 0)
                int32_t var_118_65 = esi_1
                eax_96 = sub_4a55e0(data_75d4fc + 0x178)
            
            int32_t xmm0_7
            
            if (esi_1 s<= 0 || eax_96 == 0)
                xmm0_7 = (zx.o(0)).d
            else
                xmm0_7 = sub_4f1190(esi_1)
            
            int32_t var_44_1 = xmm0_7
            char eax_97
            
            if (esi_1 s> 0)
                int32_t var_118_66 = esi_1
                eax_97 = sub_4a55e0(data_75d4fc + 0x178)
            
            int32_t xmm0_8
            
            if (esi_1 s<= 0 || eax_97 == 0)
                xmm0_8 = (zx.o(0)).d
            else
                xmm0_8 = sub_4f11f0(esi_1)
            
            int32_t var_40_1 = xmm0_8
            char eax_98
            
            if (esi_1 s> 0)
                int32_t var_118_67 = esi_1
                eax_98 = sub_4a55e0(data_75d4fc + 0x178)
            
            int32_t xmm0_9
            
            if (esi_1 s<= 0 || eax_98 == 0)
                xmm0_9 = (zx.o(0)).d
            else
                xmm0_9 = sub_4f13d0(esi_1)
            
            int32_t var_3c_1 = xmm0_9
            char eax_99
            
            if (esi_1 s> 0)
                int32_t var_118_68 = esi_1
                eax_99 = sub_4a55e0(data_75d4fc + 0x178)
            
            int32_t xmm0_10
            
            if (esi_1 s<= 0 || eax_99 == 0)
                xmm0_10 = (zx.o(0)).d
            else
                xmm0_10 = sub_4f1430(esi_1)
            
            int32_t var_38_1 = xmm0_10
            char eax_100
            
            if (esi_1 s> 0)
                int32_t var_118_69 = esi_1
                eax_100 = sub_4a55e0(data_75d4fc + 0x178)
            
            int32_t xmm0_11
            
            if (esi_1 s<= 0 || eax_100 == 0)
                xmm0_11 = (zx.o(0)).d
            else
                xmm0_11 = sub_4f1490(esi_1)
            
            int32_t var_34_1 = xmm0_11
            char eax_101
            
            if (esi_1 s> 0)
                int32_t var_118_70 = esi_1
                eax_101 = sub_4a55e0(data_75d4fc + 0x178)
            
            int32_t eax_102
            
            if (esi_1 s<= 0 || eax_101 == 0)
                eax_102 = 0
            else
                eax_102 = sub_4f1e10(esi_1)
            
            int32_t var_30_1 = eax_102
            sub_65a450(arg2, &var_d0)
            int32_t var_4_1 = 0xffffffff
            result = sub_6589a0(&var_d0)
        
        ecx = var_f0
        ebp += 1
    while (ebp s< result_1)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_100)
return result
